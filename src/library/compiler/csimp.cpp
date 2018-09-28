/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <unordered_set>
#include "runtime/flet.h"
#include "kernel/type_checker.h"
#include "kernel/for_each_fn.h"
#include "kernel/find_fn.h"
#include "kernel/abstract.h"
#include "kernel/instantiate.h"
#include "library/util.h"
#include "library/constants.h"
#include "library/class.h"
#include "library/compiler/util.h"
#include "library/compiler/csimp.h"

#include "library/trace.h"

namespace lean {
csimp_cfg::csimp_cfg() {
    m_inline                          = true;
    m_inline_threshold                = 1;
    m_float_cases_app                 = true;
    m_float_cases                     = true;
    m_float_cases_threshold           = 40;
    m_inline_jp_threshold             = 2;
}

class csimp_fn {
    type_checker::state m_st;
    local_ctx           m_lctx;
    csimp_cfg           m_cfg;
    buffer<expr>        m_fvars;
    name                m_x;
    name                m_j;
    unsigned            m_next_idx{1};
    unsigned            m_next_jp_idx{1};
    expr_set            m_simplified;
    typedef std::unordered_set<name, name_hash> name_set;

    environment const & env() const { return m_st.env(); }

    name_generator & ngen() { return m_st.ngen(); }

    void check(expr const & e) {
        try {
            type_checker(m_st, m_lctx, false).check(e);
        } catch (exception & ex) {
            tout() << "TYPE ERROR\n" << e << "\n";
            lean_unreachable();
        }
    }

    void mark_simplified(expr const & e) {
        m_simplified.insert(e);
    }

    bool already_simplified(expr const & e) const {
        return m_simplified.find(e) != m_simplified.end();
    }

    bool is_join_point_app(expr const & e) const {
        if (!is_app(e)) return false;
        expr const & fn = get_app_fn(e);
        return
            is_fvar(fn) &&
            is_join_point_name(m_lctx.get_local_decl(fn).get_user_name());
    }

    bool is_small_join_point(expr const & e) const {
        return get_lcnf_size(env(), e) <= m_cfg.m_inline_jp_threshold;
    }

    expr find(expr const & e, bool skip_mdata = true) const {
        if (is_fvar(e)) {
            if (optional<local_decl> decl = m_lctx.find_local_decl(e)) {
                if (optional<expr> v = decl->get_value()) {
                    if (!is_join_point_name(decl->get_user_name()))
                        return find(*v, skip_mdata);
                    else if (is_small_join_point(*v))
                        return find(*v, skip_mdata);
                }
            }
        } else if (is_mdata(e) && skip_mdata) {
            return find(mdata_expr(e), true);
        }
        return e;
    }

    type_checker tc() { return type_checker(m_st, m_lctx); }

    expr infer_type(expr const & e) { return type_checker(m_st, m_lctx).infer(e); }

    expr whnf(expr const & e) { return type_checker(m_st, m_lctx).whnf(e); }

    expr whnf_infer_type(expr const & e) { type_checker tc(m_st, m_lctx); return tc.whnf(tc.infer(e)); }

    name next_name() {
        /* Remark: we use `m_x.append_after(m_next_idx)` instead of `name(m_x, m_next_idx)`
           because the resulting name is confusing during debugging: it looks like a projection application.
           We should replace it with `name(m_x, m_next_idx)` when the compiler code gets more stable. */
        name r = m_x.append_after(m_next_idx);
        m_next_idx++;
        return r;
    }

    name next_jp_name() {
        name r = m_j.append_after(m_next_jp_idx);
        m_next_jp_idx++;
        return mk_join_point_name(r);
    }

    /* Create a new let-declaration `x : t := e`, add `x` to `m_fvars` and return `x`. */
    expr mk_let_decl(expr const & e) {
        lean_assert(!is_lcnf_atom(e));
        expr type = cheap_beta_reduce(infer_type(e));
        expr fvar = m_lctx.mk_local_decl(ngen(), next_name(), type, e);
        m_fvars.push_back(fvar);
        return fvar;
    }

    /* Given a cases_on application `c`, return `some idx` iff `fvar` only occurs
       in the argument `idx`, this argument is a minor premise. */
    optional<unsigned> used_in_one_minor(expr const & c, expr const & fvar) {
        lean_assert(is_cases_on_app(env(), c));
        lean_assert(is_fvar(fvar));
        buffer<expr> args;
        expr const & c_fn = get_app_args(c, args);
        unsigned minors_begin; unsigned minors_end;
        std::tie(minors_begin, minors_end) = get_cases_on_minors_range(env(), const_name(c_fn));
        unsigned i = 0;
        for (; i < minors_begin; i++) {
            if (has_fvar(args[i], fvar)) {
                /* Free variable occurs in a term that is a not a minor premise. */
                return optional<unsigned>();
            }
        }
        lean_assert(i == minors_begin);
        /* The following #pragma is to disable a bogus g++ 4.9 warning at `optional<unsigned> r` */
        #if defined(__GNUC__) && !defined(__CLANG__)
        #pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
        #endif
        optional<unsigned> r;
        for (; i < minors_end; i++) {
            expr minor = args[i];
            while (is_lambda(minor)) {
                if (has_fvar(binding_domain(minor), fvar)) {
                    /* Free variable occurs in the type of a field */
                    return optional<unsigned>();
                }
                minor = binding_body(minor);
            }
            if (has_fvar(minor, fvar)) {
                if (r) {
                    /* Free variable occur in more than one minor premise. */
                    return optional<unsigned>();
                }
                r = i;
            }
        }
        return r;
    }

    /* Return `let _x := e in _x` */
    expr mk_trivial_let(expr const & e) {
        expr type = infer_type(e);
        return ::lean::mk_let("_x", type, e, mk_bvar(0));
    }

    /* Create minor premise in LCNF.
       The minor premise is of the form `fun xs, e`.
       However, if `e` is a lambda, we create `fun xs, let _x := e in _x`.
       Thus, we don't "mix" `xs` variables with
       the variables of the `new_minor` lambda */
    expr mk_minor_lambda(buffer<expr> const & xs, expr e) {
        if (is_lambda(e)) {
            /* We don't want to "mix" `xs` variables with
               the variables of the `new_minor` lambda */
            e = mk_trivial_let(e);
        }
        return m_lctx.mk_lambda(xs, e);
    }

    expr get_lambda_body(expr e, buffer<expr> & xs) {
        while (is_lambda(e)) {
            expr d = instantiate_rev(binding_domain(e), xs.size(), xs.data());
            expr x = m_lctx.mk_local_decl(ngen(), binding_name(e), d, binding_info(e));
            xs.push_back(x);
            e  = binding_body(e);
        }
        return instantiate_rev(e, xs.size(), xs.data());
    }

    /* Move let-decl `fvar` to the minor premise at position `minor_idx` of cases_on-application `c`. */
    expr move_let_to_minor(expr const & c, unsigned minor_idx, expr const & fvar) {
        lean_assert(is_cases_on_app(env(), c));
        buffer<expr> args;
        expr const & c_fn = get_app_args(c, args);
        expr minor = args[minor_idx];
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> xs;
        minor = get_lambda_body(minor, xs);
        if (minor == fvar) {
            /* `let x := v in x` ==> `v` */
            minor = *m_lctx.get_local_decl(fvar).get_value();
        } else {
            xs.push_back(fvar);
        }
        args[minor_idx] = mk_minor_lambda(xs, minor);
        return mk_app(c_fn, args);
    }

    static void collect_used(expr const & e, name_set & S) {
        if (!has_fvar(e)) return;
        for_each(e, [&](expr const & e, unsigned) {
                if (!has_fvar(e)) return false;
                if (is_fvar(e)) { S.insert(fvar_name(e)); return false; }
                return true;
            });
    }

    /* Return true iff the free variable `x` occurs in a projection or is the major premise of
       a `cases_on` application in `e`. */
    bool is_proj_or_cases_on_arg_at(expr const & x, expr const & e) {
        lean_assert(is_fvar(x));
        if (!has_fvar(e)) return false;
        bool found = false;
        for_each(e, [&](expr const & s, unsigned) {
                if (!has_fvar(s)) return false;
                if (found) return false;
                if (is_proj(s) && proj_expr(s) == x) {
                    found = true;
                    return false;
                } else if (is_cases_on_app(env(), s) &&
                           get_app_num_args(s) == get_cases_on_arity(env(), const_name(get_app_fn(s))) &&
                           get_cases_on_app_major(env(), s) == x) {
                    found = true;
                    return false;
                }
                return true;
            });
        return found;
    }

    /* Auxiliary method for `may_return_constructor`. `visited` contains the set of join points that
       have already been visited. */
    bool may_return_constructor_core(expr e, name_set & visited) {
        while (true) {
            if (is_lambda(e))
                e = binding_body(e);
            else if (is_let(e))
                e = let_body(e);
            else
                break;
        }
        if (is_constructor_app(env(), e)) {
            return true;
        } else if (is_cases_on_app(env(), e)) {
            buffer<expr> args;
            expr const & fn = get_app_args(e, args);
            unsigned begin_minors; unsigned end_minors;
            std::tie(begin_minors, end_minors) = get_cases_on_minors_range(env(), const_name(fn));
            for (unsigned i = begin_minors; i < end_minors; i++) {
                if (may_return_constructor_core(args[i], visited))
                    return true;
            }
            return false;
        } else if (is_join_point_app(e)) {
            expr const & fn = get_app_fn(e);
            lean_assert(is_fvar(fn));
            if (visited.find(fvar_name(fn)) != visited.end())
                return false;
            visited.insert(fvar_name(fn));
            local_decl decl = m_lctx.get_local_decl(fn);
            return may_return_constructor_core(*decl.get_value(), visited);
        } else {
            return false;
        }
    }

    /* Return true if `e` may return a constructor application. We say "may" because the
       result may be a `cases_on`-application and we return true if one of the branches return a constructor. */
    bool may_return_constructor(expr const & e) {
        name_set visited;
        return may_return_constructor_core(e, visited);
    }

    bool is_float_cases_on_worthwhile(expr const & x, expr const & e, expr const & c) {
        lean_assert(is_cases_on_app(env(), c));
        return
            is_proj_or_cases_on_arg_at(x, e) &&
            may_return_constructor(c);
    }

    /* The `float_cases_on` transformation may produce code duplication.
       The term `e` is "copied" in each branch of the the `cases_on` expression `c`.
       This method creates one (or more) join-point(s) for `e` (if needed).
       This method main fail because of dependent types. */
    optional<expr> mk_join_point_float_cases_on(expr const & fvar, expr const & e, expr const & c, buffer<expr> & new_jps) {
        lean_assert(is_cases_on_app(env(), c));
        check(e);
        check(c);
        expr const & c_fn = get_app_fn(c);
        inductive_val I_val    = get_cases_on_inductive_val(env(), c_fn);
        unsigned code_increase = get_lcnf_size(env(), e)*(I_val.get_ncnstrs() - 1);
        if (code_increase <= m_cfg.m_float_cases_threshold) {
            /* It is "small", copying should be ok. */
            return some_expr(e);
        } else if (is_cases_on_app(env(), e)) {
            local_decl fvar_decl = m_lctx.get_local_decl(fvar);
            buffer<expr> args;
            expr const & fn = get_app_args(e, args);
            inductive_val e_I_val = get_cases_on_inductive_val(env(), fn);
            /* We can control the code blowup by creating join points for each branch.
               In the worst case, each branch becomes a join point jump, and the
               "compressed size" is equal to the number of branches + 1 for the cases_on application. */
            unsigned e_compressed_size = e_I_val.get_ncnstrs() + 1;
            unsigned new_code_increase     = e_compressed_size*(I_val.get_ncnstrs() - 1);
            if (new_code_increase <= m_cfg.m_float_cases_threshold) {
                unsigned branch_threshold = m_cfg.m_float_cases_threshold / (I_val.get_ncnstrs() - 1);
                unsigned saved_fvars_size = m_fvars.size();
                unsigned begin_minors; unsigned end_minors;
                std::tie(begin_minors, end_minors) = get_cases_on_minors_range(env(), const_name(fn));
                for (unsigned minor_idx = begin_minors; minor_idx < end_minors; minor_idx++) {
                    expr minor = args[minor_idx];
                    if (get_lcnf_size(env(), minor) > branch_threshold) {
                        buffer<bool> used_zs; /* used_zs[i] iff `minor` uses `zs[i]` */
                        bool         used_fvar = false; /* true iff `minor` uses `fvar` */
                        bool         used_unit = false; /* true if we needed to add `unit ->` to joint point */
                        expr         jp_val;
                        /* Create join-point value: `jp-val` */
                        {
                            flet<local_ctx> save_lctx(m_lctx, m_lctx);
                            buffer<expr> zs;
                            minor                = get_lambda_body(minor, zs);
                            mark_used_fvars(minor, zs, used_zs);
                            lean_assert(zs.size() == used_zs.size());
                            used_fvar            = false;
                            jp_val               = minor;
                            buffer<expr> jp_args;
                            if (has_fvar(minor, fvar)) {
                                /* `fvar` is a let-decl variable, we need to convert into a lambda variable.
                                   Remark: we need to use `replace_fvar_with` because replacing the let-decl variable `fvar` with
                                   the lambda variable `new_fvar` may produce a type incorrect term. */
                                used_fvar      = true;
                                expr new_fvar  = m_lctx.mk_local_decl(ngen(), fvar_decl.get_user_name(), fvar_decl.get_type());
                                jp_args.push_back(new_fvar);
                                if (optional<expr> jp_val_opt = replace_fvar_with(m_st, m_lctx, jp_val, fvar, new_fvar)) {
                                    jp_val = *jp_val_opt;
                                } else {
                                    m_fvars.resize(saved_fvars_size);
                                    return none_expr();
                                }
                            }
                            for (unsigned i = 0; i < used_zs.size(); i++) {
                                if (used_zs[i])
                                    jp_args.push_back(zs[i]);
                            }
                            if (jp_args.empty()) {
                                jp_args.push_back(m_lctx.mk_local_decl(ngen(), "_", mk_unit()));
                                used_unit = true;
                            }
                            jp_val = m_lctx.mk_lambda(jp_args, jp_val);
                        }
                        /* Create new jp */
                        expr jp_type = cheap_beta_reduce(infer_type(jp_val));
                        mark_simplified(jp_val);
                        expr jp_var  = m_lctx.mk_local_decl(ngen(), next_jp_name(), jp_type, jp_val);
                        new_jps.push_back(jp_var);
                        /* Replace minor with new jp */
                        {
                            flet<local_ctx> save_lctx(m_lctx, m_lctx);
                            buffer<expr> zs;
                            minor = args[minor_idx];
                            minor = get_lambda_body(minor, zs);
                            lean_assert(zs.size() == used_zs.size());
                            expr new_minor = jp_var;
                            if (used_unit)
                                new_minor = mk_app(new_minor, mk_unit_mk());
                            if (used_fvar)
                                new_minor = mk_app(new_minor, fvar);
                            for (unsigned i = 0; i < used_zs.size(); i++) {
                                if (used_zs[i])
                                    new_minor = mk_app(new_minor, zs[i]);
                            }
                            new_minor       = mk_minor_lambda(zs, new_minor);
                            args[minor_idx] = new_minor;
                        }
                    }
                }
                lean_trace(name({"compiler", "simp"}),
                           tout() << "mk_join " << fvar << "\n" << c << "\n---\n"
                           << e << "\n======>\n" << mk_app(fn, args) << "\n";);
                check(mk_app(fn, args));
                return some_expr(mk_app(fn, args));
            }
        }
        /* It is worthwhile to create a join point for the whole `e` since we will not
           be able to perform any simplification. */
        return none_expr();
    }

    /* Given `e[x]`, create a let-decl `y := v`, and return `e[y]`
       Casts are introduced if necessary. The result is `none` if it fails to produce type correct `e[y]`. */
    optional<expr> apply_at(expr const & x, expr const & e, expr const & v) {
        local_decl x_decl      = m_lctx.get_local_decl(x);
        expr v_type            = infer_type(v);
        expr new_v             = mk_cast(v_type, x_decl.get_type(), v);
        expr y                 = m_lctx.mk_local_decl(ngen(), x_decl.get_user_name(), x_decl.get_type(), new_v);
        optional<expr> e_y_opt = replace_fvar_with(m_st, m_lctx, e, x, y);
        if (!e_y_opt) return none_expr(); /* Failed to produce type correct `e[y]` */
        expr e_y               = *e_y_opt;
        m_fvars.push_back(y);
        return some_expr(visit(e_y, false));
    }

    /*
      Given `e[x]`
      ```
      let jp := fun z, let .... in e'
      ```
      ==>
      ```
      let jp' := fun z, let ... y := e' in e[y]
      ```
      If `e'` is a `cases_on` application, we use `float_cases_on_core`. That is,
      ```
      let jp := fun z, let ... in
                cases_on m
                 (fun y_1, let ... in e_1)
                 ...
                 (fun y_n, let ... in e_n)
      ```
      ==>
      ```
      let jp := fun z, let ... in
                cases_on m
                 (fun y_1, let ... y := e_1 in e[y])
                 ...
                 (fun y_n, let ... y := e_n in e[y])
      ```

      Remark: this method return `none` if the new join point cannot be created
      due to type errors. */
    optional<expr> mk_new_join_point(expr const & x, expr const & e, expr const & jp, buffer<expr> & new_jps, expr_map<expr> & new_jp_cache) {
        auto it = new_jp_cache.find(jp);
        if (it != new_jp_cache.end())
            return some_expr(it->second);
        local_decl jp_decl = m_lctx.get_local_decl(jp);
        lean_assert(is_join_point_name(jp_decl.get_user_name()));
        expr jp_val = *jp_decl.get_value();
        check(jp_val);
        buffer<expr> zs;
        unsigned saved_fvars_size = m_fvars.size();
        jp_val = visit(get_lambda_body(jp_val, zs), false);
        expr e_y;
        if (is_join_point_app(jp_val)) {
            buffer<expr> jp2_args;
            expr const & jp2           = get_app_args(jp_val, jp2_args);
            optional<expr> new_jp2_opt = mk_new_join_point(x, e, jp2, new_jps, new_jp_cache);
            if (!new_jp2_opt) return none_expr();
            e_y = mk_app(*new_jp2_opt, jp2_args);
        } else if (is_cases_on_app(env(), jp_val)) {
            optional<expr> e_y_opt = float_cases_on_core(x, e, jp_val, new_jps, new_jp_cache);
            if (!e_y_opt) return none_expr();
            e_y = *e_y_opt;
        } else {
            optional<expr> e_y_opt = apply_at(x, e, jp_val);
            if (!e_y_opt) return none_expr();
            e_y = *e_y_opt;
        }
        expr new_jp_val  = e_y;
        /* Some of the new join points in `new_jps` may be replacing join points defined at jp_decl.
           So, we must insert them after the old one, and remove them from `new_jps` and `new_jp_cache`. */
        unsigned i = saved_fvars_size;
        while (i < m_fvars.size()) {
            expr curr = m_fvars[i];
            auto it = new_jp_cache.find(curr);
            if (it != new_jp_cache.end()) {
                m_fvars.insert(i+i, it->second);
                new_jp_cache.erase(curr);
                new_jps.erase_elem(curr);
                i = i + 2;
            } else {
                i = i + 1;
            }
        }
        new_jp_val = mk_let(saved_fvars_size, new_jp_val);
        new_jp_val = m_lctx.mk_lambda(zs, new_jp_val);
        check(new_jp_val);
        mark_simplified(new_jp_val);
        expr new_jp_type = cheap_beta_reduce(infer_type(new_jp_val));
        expr new_jp_var  = m_lctx.mk_local_decl(ngen(), next_jp_name(), new_jp_type, new_jp_val);
        new_jps.push_back(new_jp_var);
        new_jp_cache.insert(mk_pair(jp, new_jp_var));
        return some_expr(new_jp_var);
    }

    /* Given `e[x]`
      ```
      cases_on m
              (fun zs, let ... in e_1)
              ...
              (fun zs, let ... in e_n)
      ```
      ==>
      ```
      cases_on m
        (fun zs, let ... y := e_1 in e[y])
        ...
        (fun y_n, let ... y := e_n in e[y])
      ``` */
    optional<expr> float_cases_on_core(expr const & x, expr const & e, expr const & c, buffer<expr> & new_jps, expr_map<expr> & new_jp_cache) {
        lean_assert(is_cases_on_app(env(), c));
        check(c);
        check(e);
        local_decl x_decl     = m_lctx.get_local_decl(x);
        expr result_type         = whnf_infer_type(e);
        buffer<expr> c_args;
        expr c_fn = get_app_args(c, c_args);
        inductive_val I_val      = get_cases_on_inductive_val(env(), c_fn);
        unsigned motive_idx      = I_val.get_nparams();
        unsigned first_index     = motive_idx + 1;
        unsigned nindices        = I_val.get_nindices();
        unsigned major_idx       = first_index + nindices;
        unsigned first_minor_idx = major_idx + 1;
        unsigned nminors         = I_val.get_ncnstrs();
        /* Update motive */
        {
            flet<local_ctx> save_lctx(m_lctx, m_lctx);
            buffer<expr> zs;
            expr motive              = c_args[motive_idx];
            expr motive_type         = whnf_infer_type(motive);
            for (unsigned i = 0; i < nindices + 1; i++) {
                lean_assert(is_pi(motive_type));
                expr z = m_lctx.mk_local_decl(ngen(), binding_name(motive_type), binding_domain(motive_type), binding_info(motive_type));
                zs.push_back(z);
                motive_type = whnf(instantiate(binding_body(motive_type), z));
            }
            level result_lvl       = sort_level(tc().ensure_type(result_type));
            expr new_motive        = m_lctx.mk_lambda(zs, result_type);
            c_args[motive_idx] = new_motive;
            /* We need to update the resultant universe. */
            levels new_cases_lvls  = levels(result_lvl, tail(const_levels(c_fn)));
            c_fn = update_constant(c_fn, new_cases_lvls);
        }
        /* Update minor premises */
        for (unsigned i = 0; i < nminors; i++) {
            unsigned minor_idx        = first_minor_idx + i;
            expr minor                = c_args[minor_idx];
            buffer<expr> zs;
            unsigned saved_fvars_size = m_fvars.size();
            expr minor_val            = visit(get_lambda_body(minor, zs), false);
            expr new_minor;
            if (is_join_point_app(minor_val)) {
                buffer<expr> jp_args;
                expr const & jp               = get_app_args(minor_val, jp_args);
                optional<expr> new_jp_opt     = mk_new_join_point(x, e, jp, new_jps, new_jp_cache);
                if (!new_jp_opt) return none_expr();
                expr new_jp                   = *new_jp_opt;
                new_minor = visit(mk_app(new_jp, jp_args), false);
            } else {
                optional<expr> e_y_opt = apply_at(x, e, minor_val);
                if (!e_y_opt) return none_expr();
                expr e_y      = *e_y_opt;
                expr e_y_type = infer_type(e_y);
                new_minor     = mk_cast(e_y_type, result_type, e_y);
            }
            new_minor                 = mk_let(saved_fvars_size, new_minor);
            new_minor                 = mk_minor_lambda(zs, new_minor);
            c_args[minor_idx]         = new_minor;
        }
        lean_trace(name({"compiler", "simp"}),
                   tout() << "float_cases_on [" << get_lcnf_size(env(), e) << "]\n" << c << "\n----\n" << e << "\n=====>\n"
                   << mk_app(c_fn, c_args) << "\n";);
        check(mk_app(c_fn, c_args));
        return some_expr(mk_app(c_fn, c_args));
    }

    /* Float cases transformation (see: `float_cases_on_core`).
       This version may create join points if `e` is big, or "good" join-points could not be created. */
    optional<expr> float_cases_on(expr const & x, expr const & e, expr const & c, buffer<expr> & new_jps) {
        expr_map<expr> new_jp_cache;
        unsigned  saved_fvars_size = m_fvars.size();
        local_ctx saved_lctx       = m_lctx;
        if (optional<expr> new_e = mk_join_point_float_cases_on(x, e, c, new_jps)) {
            if (optional<expr> r = float_cases_on_core(x, *new_e, c, new_jps, new_jp_cache)) {
                return r;
            }
        }
        m_fvars.shrink(saved_fvars_size);
        m_lctx = saved_lctx;
        return none_expr();
    }

    /* Given the buffer `entries`: `[(x_1, w_1), ..., (x_n, w_n)]`, and `e`.
       Create the let-expression
       ```
       let x_n := w_n
           ...
           x_1 := w_1
       in e
       ```
       The values `w_i` are the "simplified values" for the let-declaration `x_i`. */
    expr mk_let(buffer<pair<expr, expr>> const & entries, expr e) {
        buffer<expr> fvars;
        buffer<name> user_names;
        buffer<expr> types;
        buffer<expr> vals;
        unsigned i = entries.size();
        while (i > 0) {
            --i;
            expr const & fvar = entries[i].first;
            fvars.push_back(fvar);
            vals.push_back(entries[i].second);
            local_decl fvar_decl = m_lctx.get_local_decl(fvar);
            user_names.push_back(fvar_decl.get_user_name());
            types.push_back(fvar_decl.get_type());
        }
        e = abstract(e, fvars.size(), fvars.data());
        i = fvars.size();
        while (i > 0) {
            --i;
            expr new_value = abstract(vals[i], i, fvars.data());
            expr new_type  = abstract(types[i], i, fvars.data());
            e = ::lean::mk_let(user_names[i], new_type, new_value, e);
        }
        return e;
    }

    /* Return true iff `e` contains a free variable in `s` */
    bool depends_on(expr const & e, name_set const & s) {
        if (!has_fvar(e)) return false;
        bool found = false;
        for_each(e, [&](expr const & e, unsigned) {
                if (!has_fvar(e)) return false;
                if (found) return false;
                if (is_fvar(e) && s.find(fvar_name(e)) != s.end()) {
                    found = true;
                }
                return true;
            });
        return found;
    }

    /* Split `entries` into two groups: `entries_dep_x` and `entries_ndep_x`.
       The first group contains the entries that depend on `x` and the second the ones that doesn't.
       This auxiliary method is used to float cases_on over expressions.

       `entries` is of the form `[(x_1, w_1), ..., (x_n, w_n)]`, where `x_i`s are
       let-decl free variables, and `w_i`s their new values. We use `entries`
       and an expression `e` to create a `let` expression:
       ```
       let x_n := w_n
           ...
           x_1 := w_1
       in e
       ``` */
    void split_entries(buffer<pair<expr, expr>> const & entries,
                       expr const & x,
                       buffer<pair<expr, expr>> & entries_dep_x,
                       buffer<pair<expr, expr>> & entries_ndep_x) {
        if (entries.empty())
            return;
        name_set deps;
        deps.insert(fvar_name(x));
        /* Recall that `entries` are in reverse order. That is, pos 0 is the inner most variable. */
        unsigned i = entries.size();
        while (i > 0) {
            --i;
            expr const & fvar = entries[i].first;
            expr fvar_type    = m_lctx.get_type(fvar);
            expr fvar_new_val = entries[i].second;
            if (depends_on(fvar_type, deps) ||
                depends_on(fvar_new_val, deps)) {
                deps.insert(fvar_name(fvar));
                entries_dep_x.push_back(entries[i]);
            } else {
                entries_ndep_x.push_back(entries[i]);
            }
        }
        std::reverse(entries_dep_x.begin(), entries_dep_x.end());
        std::reverse(entries_ndep_x.begin(), entries_ndep_x.end());
    }

    /* Create a let-expression with body `e`, and
       all "used" let-declarations `m_fvars[i]` for `i in [saved_fvars_size, m_fvars.size)`.

       BTW, we also visit the lambda expressions in used let-declarations of the form
       `x : t := fun ...`

       Note that, we don't visit them when we have visit let-expressions. */
    expr mk_let(unsigned saved_fvars_size, expr e) {
        if (saved_fvars_size == m_fvars.size())
            return e;
        /* `entries` contains pairs (let-decl fvar, new value) for building the resultant let-declaration.
           We simplify the value of some let-declarations in this method, but we don't want to create
           a new temporary declaration just for this. */
        buffer<pair<expr, expr>> entries;
        name_set e_fvars; /* Set of free variables names used in `e` */
        name_set entries_fvars; /* Set of free variable names used in `entries` */
        collect_used(e, e_fvars);
        bool e_is_cases = is_cases_on_app(env(), e);
        while (m_fvars.size() > saved_fvars_size) {
            expr x               = m_fvars.back();
            m_fvars.pop_back();
            bool used_in_e       = (e_fvars.find(fvar_name(x)) != e_fvars.end());
            bool used_in_entries = (entries_fvars.find(fvar_name(x)) != entries_fvars.end());
            if (!used_in_e && !used_in_entries) {
                /* Skip unused variables */
                continue;
            }
            local_decl x_decl = m_lctx.get_local_decl(x);
            expr type       = x_decl.get_type();
            expr val        = *x_decl.get_value();
            bool modified_val = false;
            if (is_lambda(val)) {
                /* We don't simplify lambdas when we visit `let`-expressions. */
                DEBUG_CODE(unsigned saved_fvars_size = m_fvars.size(););
                val          = visit_lambda(val);
                modified_val = true;
                lean_assert(m_fvars.size() == saved_fvars_size);
            }

            if (entries.empty() && e == x) {
                /* `let x := v in x` ==> `v` */
                e = val;
                collect_used(val, e_fvars);
                e_is_cases = is_cases_on_app(env(), e);
                continue;
            }

            if (is_cases_on_app(env(), val)) {
                /* Float cases transformation. */
                if (m_cfg.m_float_cases) {
                    /* We first create a let-declaration with all entries that depends on the current
                       `x` which is a cases_on application. */
                    buffer<pair<expr, expr>> entries_dep_curr;
                    buffer<pair<expr, expr>> entries_ndep_curr;
                    split_entries(entries, x, entries_dep_curr, entries_ndep_curr);
                    expr new_e = mk_let(entries_dep_curr, e);
                    if (is_float_cases_on_worthwhile(x, new_e, val)) {
                        buffer<expr> new_jps;
                        if (optional<expr> new_e_opt = float_cases_on(x, new_e, val, new_jps)) {
                            e       = *new_e_opt;
                            /* Reset `e_fvars` and `entries_fvars`, we need to reconstruct them. */
                            e_fvars.clear(); entries_fvars.clear();
                            collect_used(e, e_fvars);
                            /* Join points may have been generated, we move them to entries. */
                            entries.clear();
                            while (!new_jps.empty()) {
                                expr jp_fvar = new_jps.back();
                                new_jps.pop_back();
                                local_decl jp_decl = m_lctx.get_local_decl(jp_fvar);
                                expr jp_type       = jp_decl.get_type();
                                expr jp_val        = *jp_decl.get_value();
                                collect_used(jp_type, entries_fvars);
                                collect_used(jp_val, entries_fvars);
                                entries.emplace_back(jp_fvar, jp_val);
                            }
                            /* Copy `entries_ndep_curr` to `entries` */
                            for (unsigned i = 0; i < entries_ndep_curr.size(); i++) {
                                pair<expr, expr> const & ndep_entry = entries_ndep_curr[i];
                                entries.push_back(ndep_entry);
                                collect_used(ndep_entry.second, entries_fvars);
                            }
                            continue;
                        }
                    }
                }
                val          = visit_cases_default(val);
                modified_val = true;
            }

            if (e_is_cases && used_in_e) {
                optional<unsigned> minor_idx = used_in_one_minor(e, x);
                if (minor_idx && !used_in_entries) {
                    /* If x is only used in only one minor declaration,
                       and is *not* used in any expression at entries */
                    if (modified_val) {
                        /* We need to create a new free variable since the new
                           simplified value `val` */
                        expr new_x = m_lctx.mk_local_decl(ngen(), x_decl.get_user_name(), type, val);
                        e = replace_fvar(e, x, new_x);
                        x = new_x;
                    }
                    collect_used(type, e_fvars);
                    collect_used(val, e_fvars);
                    e = move_let_to_minor(e, *minor_idx, x);
                    continue;
                }
            }
            collect_used(type, entries_fvars);
            collect_used(val,  entries_fvars);
            entries.emplace_back(x, val);
        }
        return mk_let(entries, e);
    }

    expr visit_let(expr e) {
        buffer<expr> let_fvars;
        while (is_let(e)) {
            expr new_type = instantiate_rev(let_type(e), let_fvars.size(), let_fvars.data());
            expr new_val  = visit(instantiate_rev(let_value(e), let_fvars.size(), let_fvars.data()), true);
            if (is_lcnf_atom(new_val)) {
                let_fvars.push_back(new_val);
            } else {
                name n = let_name(e);
                if (is_internal_name(n)) {
                    if (is_join_point_name(n))
                        n = next_jp_name();
                    else
                        n = next_name();
                }
                expr new_fvar = m_lctx.mk_local_decl(ngen(), n, new_type, new_val);
                let_fvars.push_back(new_fvar);
                m_fvars.push_back(new_fvar);
            }
            e = let_body(e);
        }
        return visit(instantiate_rev(e, let_fvars.size(), let_fvars.data()), false);
    }

    expr visit_lambda(expr e) {
        lean_assert(is_lambda(e));
        if (already_simplified(e))
            return e;
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        unsigned saved_fvars_size = m_fvars.size();
        buffer<expr> binding_fvars;
        while (is_lambda(e)) {
            /* Types are ignored in compilation steps. So, we do not invoke visit for d. */
            expr new_d    = instantiate_rev(binding_domain(e), binding_fvars.size(), binding_fvars.data());
            expr new_fvar = m_lctx.mk_local_decl(ngen(), binding_name(e), new_d, binding_info(e));
            binding_fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        expr new_body = visit(instantiate_rev(e, binding_fvars.size(), binding_fvars.data()), false);
        new_body      = mk_let(saved_fvars_size, new_body);
        expr r        = m_lctx.mk_lambda(binding_fvars, new_body);
        mark_simplified(r);
        check(r);
        return r;
    }

    bool should_inline_instance(name const & n) const {
        if (is_instance(env(), n))
            return !has_noinline_attribute(env(), n);
        else
            return false;
    }

    static unsigned get_num_nested_lambdas(expr e) {
        unsigned r = 0;
        while (is_lambda(e)) {
            r++;
            e = binding_body(e);
        }
        return r;
    }

    expr beta_reduce(expr fn, unsigned nargs, expr const * args, bool is_let_val) {
        unsigned i = 0;
        while (is_lambda(fn) && i < nargs) {
            i++;
            fn = binding_body(fn);
        }
        expr r = instantiate_rev(fn, i, args);
        check(r);
        if (is_lambda(r)) {
            lean_assert(i == nargs);
            r = visit(r, is_let_val);
        } else {
            r = visit(r, false);
            if (!is_lcnf_atom(r))
                r = mk_let_decl(r);
            r = visit(mk_app(r, nargs - i, args + i), is_let_val);
        }
        check(r);
        return r;
    }

    /* Remark: if `fn` is not a lambda expression, then this function
       will simply create the application `fn args_of(e)` */
    expr beta_reduce(expr fn, expr const & e, bool is_let_val) {
        buffer<expr> args;
        get_app_args(e, args);
        return beta_reduce(fn, args.size(), args.data(), is_let_val);
    }

    optional<expr> try_inline_instance(expr const & fn, expr const & e) {
        lean_assert(is_constant(fn));
        optional<constant_info> info = env().find(mk_cstage1_name(const_name(fn)));
        if (!info || !info->is_definition()) return none_expr();
        if (get_app_num_args(e) < get_num_nested_lambdas(info->get_value())) return none_expr();
        local_ctx saved_lctx       = m_lctx;
        unsigned  saved_fvars_size = m_fvars.size();
        expr new_fn = instantiate_value_lparams(*info, const_levels(fn));
        expr r      = find(beta_reduce(new_fn, e, false));
        if (!is_constructor_app(env(), r)) {
            m_lctx = saved_lctx;
            m_fvars.resize(saved_fvars_size);
            return none_expr();
        }
        check(r);
        return some_expr(r);
    }

    expr proj_constructor(expr const & k_app, unsigned proj_idx) {
        lean_assert(is_constructor_app(env(), k_app));
        buffer<expr> args;
        expr const & k        = get_app_args(k_app, args);
        constructor_val k_val = env().get(const_name(k)).to_constructor_val();
        lean_assert(k_val.get_nparams() + proj_idx < args.size());
        expr r = args[k_val.get_nparams() + proj_idx];
        check(r);
        return r;
    }

    expr visit_proj(expr const & e, bool is_let_val) {
        expr s = find(proj_expr(e));
        if (is_constructor_app(env(), s))
            return proj_constructor(s, proj_idx(e).get_small_value());
        expr const & s_fn = get_app_fn(s);
        if (is_constant(s_fn) && should_inline_instance(const_name(s_fn))) {
            if (optional<expr> k_app = try_inline_instance(s_fn, s))
                return visit(proj_constructor(*k_app, proj_idx(e).get_small_value()), is_let_val);
        }
        return e;
    }

    expr reduce_cases_cnstr(buffer<expr> const & args, inductive_val const & I_val, expr const & major, bool is_let_val) {
        lean_assert(is_constructor_app(env(), major));
        unsigned nparams = I_val.get_nparams();
        buffer<expr> k_args;
        expr const & k   = get_app_args(major, k_args);
        lean_assert(is_constant(k));
        lean_assert(nparams <= k_args.size());
        unsigned first_minor_idx = nparams + 1 /* typeformer/motive */ + I_val.get_nindices() + 1 /* major */;
        constructor_val k_val = env().get(const_name(k)).to_constructor_val();
        expr const & minor    = args[first_minor_idx + k_val.get_cidx()];
        expr r = beta_reduce(minor, k_args.size() - nparams, k_args.data() + nparams, is_let_val);
        check(r);
        return r;
    }

    /* Just simplify minor premises. */
    expr visit_cases_default(expr const & e) {
        if (already_simplified(e))
            return e;
        lean_assert(is_cases_on_app(env(), e));
        buffer<expr> args;
        expr const & c = get_app_args(e, args);
        /* simplify minor premises */
        unsigned minor_idx; unsigned minors_end;
        std::tie(minor_idx, minors_end) = get_cases_on_minors_range(env(), const_name(c));
        for (; minor_idx < minors_end; minor_idx++) {
            expr minor                = args[minor_idx];
            unsigned saved_fvars_size = m_fvars.size();
            flet<local_ctx> save_lctx(m_lctx, m_lctx);
            buffer<expr> zs;
            minor          = get_lambda_body(minor, zs);
            expr new_minor = visit(minor, false);
            new_minor = mk_let(saved_fvars_size, new_minor);
            new_minor = mk_minor_lambda(zs, new_minor);
            args[minor_idx] = new_minor;
        }
        expr r = mk_app(c, args);
        check(r);
        mark_simplified(r);
        return r;
    }

    expr mk_cast(type_checker & tc, expr const & A, expr const & B, expr t) {
        if (tc.is_def_eq(A, B)) {
            return t;
        } else if (is_lc_proof_app(t)) {
            return mk_app(mk_constant(get_lc_proof_name()), B);
        } else {
            /* lc_cast.{u_1 u_2} : Π {α : Sort u_2} {β : Sort u_1}, α → β */
            level u_2 = sort_level(tc.ensure_type(A));
            level u_1 = sort_level(tc.ensure_type(B));
            if (!is_lcnf_atom(t))
                t = mk_let_decl(t);
            return mk_app(mk_constant(get_lc_cast_name(), {u_1, u_2}), A, B, t);
        }
    }

    expr mk_cast(expr const & A, expr const & B, expr const & t) {
        type_checker tc(m_st, m_lctx);
        return mk_cast(tc, A, B, t);
    }

    expr visit_cases(expr const & e, bool is_let_val) {
        buffer<expr> args;
        expr const & c = get_app_args(e, args);
        lean_assert(is_constant(c));
        inductive_val I_val      = get_cases_on_inductive_val(env(), c);
        unsigned major_idx       = I_val.get_nparams() + 1 /* typeformer/motive */ + I_val.get_nindices();
        lean_assert(major_idx < args.size());
        expr const & major       = find(args[major_idx]);
        if (is_constructor_app(env(), major)) {
            return reduce_cases_cnstr(args, I_val, major, is_let_val);
        } else if (!is_let_val) {
            return visit_cases_default(e);
        } else {
            return e;
        }
    }

    expr reduce_lc_cast(expr const & e) {
        buffer<expr> args;
        expr const & cast_fn1 = get_app_args(e, args);
        lean_assert(args.size() == 3);
        if (type_checker(m_st, m_lctx).is_def_eq(args[0], args[1])) {
            /* (lc_cast A A t) ==> t */
            return args[2];
        }
        expr major = find(args[2]);
        if (is_lc_cast_app(major)) {
            /* Cast transitivity:
               (lc_cast B C (lc_cast A B t)) ==> (lc_cast A C t)


               lc_cast.{u_1 u_2} : Π {α : Sort u_2} {β : Sort u_1}, α → β */
            buffer<expr> nested_args;
            expr const & cast_fn2 = get_app_args(major, nested_args);
            expr const & C = args[1];
            expr const & A = nested_args[0];
            level u1       = head(const_levels(cast_fn1));
            level u2       = head(tail(const_levels(cast_fn2)));
            return reduce_lc_cast(mk_app(mk_constant(get_lc_cast_name(), {u1, u2}), A, C, nested_args[2]));
        }
        return e;
    }

    expr merge_app_app(expr const & fn, expr const & e, bool is_let_val) {
        lean_assert(is_app(fn));
        lean_assert(is_eqp(find(get_app_fn(e)), fn));
        if (!is_lc_cast_app(fn) && !is_cases_on_app(env(), fn)) {
            buffer<expr> args;
            get_app_args(e, args);
            return visit_app(mk_app(fn, args), is_let_val);
        } else {
            return e;
        }
    }

    expr reduce_cast_app_app(expr const & fn, expr const & e, bool is_let_val) {
        lean_assert(is_lc_cast_app(fn));
        lean_assert(is_eqp(find(get_app_fn(e)), fn));
        /*
            f  := lc_cast g
            e  := f a_1 ... a_n
            ==>
            b_1 := lc_cast a_1
            ...
            b_n := lc_cast a_n
            e   := g b_1 ... b_n */
        expr const & g = app_arg(fn);
        buffer<expr> args;
        get_app_args(e, args);
        expr g_type = whnf_infer_type(g);
        for (expr & arg : args) {
            lean_assert(is_pi(g_type));
            expr expected_type = binding_domain(g_type);
            expr arg_type      = infer_type(arg);
            expr new_arg       = mk_cast(arg_type, expected_type, arg);
            arg                = new_arg;
            g_type             = whnf(instantiate(binding_body(g_type), new_arg));
        }
        expr r      = visit_app(mk_app(g, args), is_let_val);
        type_checker tc(m_st, m_lctx);
        expr r_type = tc.infer(r);
        expr e_type = tc.infer(e);
        return mk_cast(tc, r_type, e_type, r);
    }

    /* We don't inline recursive functions.
       TODO(Leo): this predicate does not handle mutual recursion.
       We need a better solution. Example: we tag which definitions are recursive when we create them. */
    bool is_recursive(name const & c) {
        constant_info info = env().get(c);
        return static_cast<bool>(::lean::find(info.get_value(), [&](expr const & e, unsigned) {
                    return is_constant(e) && const_name(e) == c.get_prefix();
                }));
    }

    expr try_inline(expr const & fn, expr const & e, bool is_let_val) {
        lean_assert(is_constant(fn));
        lean_assert(is_eqp(find(get_app_fn(e)), fn));
        if (!m_cfg.m_inline) return e;
        if (has_noinline_attribute(env(), const_name(fn))) return e;
        name c = mk_cstage1_name(const_name(fn));
        optional<constant_info> info = env().find(c);
        if (!info || !info->is_definition()) return e;
        if (get_app_num_args(e) < get_num_nested_lambdas(info->get_value())) return e;
        if (!has_inline_attribute(env(), const_name(fn)) &&
            get_lcnf_size(env(), info->get_value()) > m_cfg.m_inline_threshold)
            return e;
        if (is_recursive(c)) return e;
        expr new_fn = instantiate_value_lparams(*info, const_levels(fn));
        check(new_fn);
        expr r = beta_reduce(new_fn, e, is_let_val);
        check(r);
        return r;
    }

    expr visit_app(expr const & e, bool is_let_val) {
        if (is_cases_on_app(env(), e)) {
            return visit_cases(e, is_let_val);
        } else if (is_lc_cast_app(e)) {
            return reduce_lc_cast(e);
        }
        expr fn = find(get_app_fn(e));
        check(e);
        check(fn);
        if (is_lambda(fn)) {
            return beta_reduce(fn, e, is_let_val);
        } else if (is_cases_on_app(env(), fn) && m_cfg.m_float_cases_app) {
            lean_assert(is_fvar(get_app_fn(e)));
            buffer<expr> new_jps;
            /* float cases_on from application */
            expr_map<expr> new_jp_cache;
            if (optional<expr> new_e = float_cases_on_core(get_app_fn(e), e, fn, new_jps, new_jp_cache)) {
                mark_simplified(*new_e);
                m_fvars.append(new_jps);
                return *new_e;
            } else {
                mark_simplified(e);
                return e;
            }
        } else if (is_lc_cast_app(fn)) {
            return reduce_cast_app_app(fn, e, is_let_val);
        } else if (is_lc_unreachable_app(fn)) {
            expr type = infer_type(e);
            return mk_lc_unreachable(m_st, m_lctx, type);
        } else if (is_app(fn)) {
            return merge_app_app(fn, e, is_let_val);
        } else if (is_constant(fn)) {
            return try_inline(fn, e, is_let_val);
        }
        return e;
    }

    expr visit(expr const & e, bool is_let_val) {
        switch (e.kind()) {
        case expr_kind::Lambda: return is_let_val ? e : visit_lambda(e);
        case expr_kind::Let:    return visit_let(e);
        case expr_kind::Proj:   return visit_proj(e, is_let_val);
        case expr_kind::App:    return visit_app(e, is_let_val);
        default:                return e;
        }
    }

public:
    csimp_fn(environment const & env, local_ctx const & lctx, csimp_cfg const & cfg):
        m_st(env), m_lctx(lctx), m_cfg(cfg), m_x("_x"), m_j("j") {}

    expr operator()(expr const & e) {
        check(e);
        expr r = visit(e, false);
        return m_lctx.mk_lambda(m_fvars, r);
    }
};
expr csimp(environment const & env, local_ctx const & lctx, expr const & e, csimp_cfg const & cfg) {
    return csimp_fn(env, lctx, cfg)(e);
}
}
