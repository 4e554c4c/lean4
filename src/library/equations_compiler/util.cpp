/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/sexpr/option_declarations.h"
#include "kernel/instantiate.h"
#include "kernel/abstract.h"
#include "kernel/find_fn.h"
#include "kernel/old_type_checker.h"
#include "kernel/inductive/inductive.h"
#include "library/scope_pos_info_provider.h"
#include "library/util.h"
#include "library/module.h"
#include "library/aliases.h"
#include "library/trace.h"
#include "library/app_builder.h"
#include "library/private.h"
#include "library/locals.h"
#include "library/idx_metavar.h"
#include "library/constants.h"
#include "library/annotation.h"
#include "library/num.h"
#include "library/string.h"
#include "library/replace_visitor.h"
#include "library/aux_definition.h"
#include "library/comp_val.h"
#include "library/compiler/vm_compiler.h"
#include "library/tactic/eqn_lemmas.h"
#include "library/inductive_compiler/ginductive.h"
#include "library/equations_compiler/equations.h"
#include "library/equations_compiler/util.h"
#include "library/equations_compiler/wf_rec.h"

#ifndef LEAN_DEFAULT_EQN_COMPILER_LEMMAS
#define LEAN_DEFAULT_EQN_COMPILER_LEMMAS false
#endif

#ifndef LEAN_DEFAULT_EQN_COMPILER_ZETA
#define LEAN_DEFAULT_EQN_COMPILER_ZETA false
#endif

namespace lean {
static name * g_eqn_compiler_lemmas = nullptr;
static name * g_eqn_compiler_zeta   = nullptr;

static bool get_eqn_compiler_lemmas(options const & o) {
    return o.get_bool(*g_eqn_compiler_lemmas, LEAN_DEFAULT_EQN_COMPILER_LEMMAS);
}

bool get_eqn_compiler_zeta(options const & o) {
    return o.get_bool(*g_eqn_compiler_zeta, LEAN_DEFAULT_EQN_COMPILER_ZETA);
}

[[ noreturn ]] void throw_ill_formed_eqns() {
    throw exception("ill-formed match/equations expression");
}

static optional<pair<expr, unsigned>> get_eqn_fn_and_arity(expr e) {
    while (is_lambda(e))
        e = binding_body(e);
    if (!is_equation(e) && !is_no_equation(e)) throw_ill_formed_eqns();
    if (is_no_equation(e)) {
        return optional<pair<expr, unsigned>>();
    } else {
        expr const & lhs = equation_lhs(e);
        expr const & fn  = get_app_fn(lhs);
        lean_assert(is_local(fn));
        return optional<pair<expr, unsigned>>(fn, get_app_num_args(lhs));
    }
}

static expr consume_fn_prefix(expr eq, buffer<expr> const & fns) {
    for (unsigned i = 0; i < fns.size(); i++) {
        if (!is_lambda(eq)) throw_ill_formed_eqns();
        eq = binding_body(eq);
    }
    return instantiate_rev(eq, fns);
}

unpack_eqns::unpack_eqns(type_context_old & ctx, expr const & e):
    m_locals(ctx) {
    lean_assert(is_equations(e));
    m_src = e;
    buffer<expr> eqs;
    unsigned num_fns = equations_num_fns(e);
    to_equations(e, eqs);
    /* Extract functions. */
    if (eqs.size() == 0) throw_ill_formed_eqns();
    expr eq = eqs[0];
    for (unsigned i = 0; i < num_fns; i++) {
        if (!is_lambda(eq)) throw_ill_formed_eqns();
        if (has_loose_bvars(binding_domain(eq))) throw_ill_formed_eqns();
        m_fns.push_back(m_locals.push_local(binding_name(eq), binding_domain(eq)));
        eq = binding_body(eq);
    }
    /* Extract equations */
    unsigned eqidx = 0;
    for (unsigned fidx = 0; fidx < num_fns; fidx++) {
        m_eqs.push_back(buffer<expr>());
        buffer<expr> & fn_eqs = m_eqs.back();
        if (eqidx >= eqs.size()) throw_ill_formed_eqns();
        expr eq = consume_fn_prefix(eqs[eqidx], m_fns);
        fn_eqs.push_back(eq);
        eqidx++;
        if (auto p = get_eqn_fn_and_arity(eq)) {
            if (p->first != m_fns[fidx]) throw_ill_formed_eqns();
            unsigned arity = p->second;
            m_arity.push_back(arity);
            while (eqidx < eqs.size()) {
                expr eq = consume_fn_prefix(eqs[eqidx], m_fns);
                if (auto p = get_eqn_fn_and_arity(eq)) {
                    if (p->first == m_fns[fidx]) {
                        if (p->second != arity) throw_ill_formed_eqns();
                        fn_eqs.push_back(eq);
                        eqidx++;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }
        } else {
            /* noequation, guess arity using type of function */
            type_context_old::tmp_locals locals(ctx);
            expr type = ctx.relaxed_whnf(ctx.infer(m_fns[fidx]));
            unsigned arity = 0;
            while (is_pi(type)) {
                arity++;
                type = ctx.relaxed_whnf(instantiate(binding_body(type),
                                                    locals.push_local_from_binding(type)));
            }
            if (arity == 0) throw_ill_formed_eqns();
            m_arity.push_back(arity);
        }
    }
    if (eqs.size() != eqidx) throw_ill_formed_eqns();
    lean_assert(m_arity.size() == m_fns.size());
    lean_assert(m_eqs.size() == m_fns.size());
}

expr unpack_eqns::update_fn_type(unsigned fidx, expr const & type) {
    expr new_fn = m_locals.push_local(local_pp_name(m_fns[fidx]), type, mk_rec_info());
    m_fns[fidx] = new_fn;
    return new_fn;
}

expr unpack_eqns::repack() {
    buffer<expr> new_eqs;
    for (buffer<expr> const & fn_eqs : m_eqs) {
        for (expr const & eq : fn_eqs) {
            new_eqs.push_back(m_locals.ctx().mk_lambda(m_fns, eq));
        }
    }
    return update_equations(m_src, new_eqs);
}

unpack_eqn::unpack_eqn(type_context_old & ctx, expr const & eqn):
    m_src(eqn), m_locals(ctx) {
    expr it = eqn;
    while (is_lambda(it)) {
        expr d = instantiate_rev(binding_domain(it), m_locals.as_buffer().size(), m_locals.as_buffer().data());
        m_vars.push_back(m_locals.push_local(binding_name(it), d, binding_info(it)));
        it = binding_body(it);
    }
    it = instantiate_rev(it, m_locals.as_buffer().size(), m_locals.as_buffer().data());
    if (!is_equation(it)) throw_ill_formed_eqns();
    m_nested_src = it;
    m_lhs = equation_lhs(it);
    m_rhs = equation_rhs(it);
    m_ignore_if_unused = ignore_equation_if_unused(it);
}

expr unpack_eqn::add_var(name const & n, expr const & type) {
    m_modified_vars = true;
    m_vars.push_back(m_locals.push_local(n, type));
    return m_vars.back();
}

expr unpack_eqn::repack() {
    if (!m_modified_vars &&
        equation_lhs(m_nested_src) == m_lhs &&
        equation_rhs(m_nested_src) == m_rhs) return m_src;
    expr new_eq = copy_pos(m_nested_src, mk_equation(m_lhs, m_rhs, m_ignore_if_unused));
    return copy_pos(m_src, m_locals.ctx().mk_lambda(m_vars, new_eq));
}

bool is_recursive_eqns(type_context_old & ctx, expr const & e) {
    unpack_eqns ues(ctx, e);
    for (unsigned fidx = 0; fidx < ues.get_num_fns(); fidx++) {
        buffer<expr> const & eqns = ues.get_eqns_of(fidx);
        for (expr const & eqn : eqns) {
            expr it = eqn;
            while (is_lambda(it)) {
                it = binding_body(it);
            }
            if (!is_equation(it) && !is_no_equation(it)) throw_ill_formed_eqns();
            if (is_equation(it)) {
                expr const & rhs = equation_rhs(it);
                if (find(rhs, [&](expr const & e, unsigned) {
                            if (is_local(e)) {
                                for (unsigned fidx = 0; fidx < ues.get_num_fns(); fidx++) {
                                    if (local_name(e) == local_name(ues.get_fn(fidx)))
                                        return true;
                                }
                            }
                            return false;
                        })) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool has_inaccessible_annotation(expr const & e) {
    return static_cast<bool>(find(e, [&](expr const & e, unsigned) { return is_inaccessible(e); }));
}

class erase_inaccessible_annotations_fn : public replace_visitor {
    virtual expr visit_mdata(expr const & e) override {
        if (is_inaccessible(e)) {
            return visit(get_annotation_arg(e));
        } else {
            return replace_visitor::visit_mdata(e);
        }
    }
};

expr erase_inaccessible_annotations(expr const & e) {
    if (has_inaccessible_annotation(e))
        return erase_inaccessible_annotations_fn()(e);
    else
        return e;
}

list<expr> erase_inaccessible_annotations(list<expr> const & es) {
    return map(es, [&](expr const & e) { return erase_inaccessible_annotations(e); });
}

local_context erase_inaccessible_annotations(local_context const & lctx) {
    local_context r;
    r.m_next_idx        = lctx.m_next_idx;
    r.m_local_instances = lctx.m_local_instances;
    lctx.m_idx2local_decl.for_each([&](unsigned, local_decl const & d) {
            expr new_type = erase_inaccessible_annotations(d.get_type());
            optional<expr> new_value;
            if (auto val = d.get_value())
                new_value = erase_inaccessible_annotations(*val);
            auto new_d = local_context::update_local_decl(d, new_type, new_value);
            r.m_name2local_decl.insert(d.get_name(), new_d);
            r.m_idx2local_decl.insert(d.get_idx(), new_d);
            r.insert_user_name(d);
        });
    return r;
}

static void throw_mk_aux_definition_error(local_context const & lctx, name const & c, expr const & type, expr const & value, std::exception_ptr const & ex) {
    sstream strm;
    strm << "equation compiler failed to create auxiliary declaration '" << c << "'";
    if (contains_let_local_decl(lctx, type) || contains_let_local_decl(lctx, value)) {
        strm << ", auxiliary declaration has references to let-declarations (possible solution: use 'set_option eqn_compiler.zeta true')";
    }
    throw nested_exception(strm, ex);
}

void compile_aux_definition(environment & env, equations_header const & header, name const & user_name, name const & actual_name) {
    if (header.m_gen_code) {
        try {
            env = vm_compile(env, env.get(actual_name));
        } catch (exception & ex) {
            if (!header.m_prev_errors) {
                throw nested_exception(sstream() << "equation compiler failed to generate bytecode for "
                                       << "auxiliary declaration '" << user_name << "'", std::current_exception());
            }
        }
    }
}

pair<environment, expr> mk_aux_definition(environment const & env, options const & opts, metavar_context const & mctx, local_context const & lctx,
                                          equations_header const & header, name const & c, name const & actual_c, expr const & type, expr const & value) {
    lean_trace("eqn_compiler", tout() << "declaring auxiliary definition\n" << c << " : " << type << "\n";);
    environment new_env = env;
    expr new_type       = type;
    expr new_value      = value;
    bool zeta           = get_eqn_compiler_zeta(opts);
    if (zeta) {
        new_type  = zeta_expand(lctx, new_type);
        new_value = zeta_expand(lctx, new_value);
    }
    name new_c          = actual_c;
    if (header.m_is_private) {
        new_env = register_private_name(env, c, actual_c);
        new_env = add_expr_alias(new_env, c, actual_c);
    }
    expr r;
    try {
        std::tie(new_env, r) = header.m_is_lemma ?
            mk_aux_lemma(new_env, mctx, lctx, new_c, new_type, new_value) :
            mk_aux_definition(new_env, mctx, lctx, new_c, new_type, new_value);
    } catch (exception & ex) {
        throw_mk_aux_definition_error(lctx, c, new_type, new_value, std::current_exception());
    }
    compile_aux_definition(new_env, header, c, new_c);
    return mk_pair(new_env, r);
}

static pair<environment, expr> abstract_rhs_nested_proofs(environment const & env, metavar_context const & mctx, local_context const & lctx,
                                                          name const & base_name, expr const & e) {
    type_context_old ctx(env, options(), mctx, lctx, transparency_mode::Semireducible);
    type_context_old::tmp_locals locals(ctx);
    expr t = e;
    while (is_pi(t)) {
        expr d = instantiate_rev(binding_domain(t), locals.size(), locals.data());
        locals.push_local(binding_name(t), d, binding_info(t));
        t = binding_body(t);
    }
    t = instantiate_rev(t, locals.size(), locals.data());
    expr lhs, rhs;
    if (is_eq(t, lhs, rhs) && !ctx.is_proof(rhs)) {
        pair<environment, expr> new_env_rhs = abstract_nested_proofs(env, mctx, ctx.lctx(), base_name, rhs);
        if (rhs == new_env_rhs.second) {
            return mk_pair(env, e);
        } else {
            return mk_pair(new_env_rhs.first, locals.mk_pi(mk_app(app_fn(t), new_env_rhs.second)));
        }
    } else {
        return mk_pair(env, e);
    }
}

static environment add_equation_lemma(environment const & env, options const & opts, metavar_context const & mctx, local_context const & lctx,
                                      bool is_private, name const & f_actual_name, name const & eqn_name, name const & eqn_actual_name, expr const & type, expr const & value) {
    environment new_env = env;
    name new_eqn_name   = eqn_actual_name;
    if (is_private) {
        new_env = register_private_name(env, eqn_name, eqn_actual_name);
    }
    expr r;
    expr new_type  = erase_inaccessible_annotations(type);
    expr new_value = value;
    bool zeta      = get_eqn_compiler_zeta(opts);
    if (zeta) {
        new_type   = zeta_expand(lctx, new_type);
        new_value  = zeta_expand(lctx, new_value);
    }
    if (!is_private) {
        /* We do not abstract for private equation lemmas because:
           1- It is not clear how to name them.
           2- Their scope is limited to the current file. */
        std::tie(new_env, new_type) = abstract_rhs_nested_proofs(new_env, mctx, lctx, f_actual_name, new_type);
    }
    try {
        std::tie(new_env, r) = mk_aux_lemma(new_env, mctx, lctx, new_eqn_name, new_type, new_value);
        if (is_rfl_lemma(new_type, new_value))
            new_env = mark_rfl_lemma(new_env, new_eqn_name);
        new_env = add_eqn_lemma(new_env, new_eqn_name);
    } catch (exception & ex) {
        throw_mk_aux_definition_error(lctx, eqn_name, new_type, new_value, std::current_exception());
    }
    return new_env;
}

static expr whnf_ite(type_context_old & ctx, expr const & e) {
    /* We use id_rhs as a "marker" to decide when to stop the whnf computation. */
    return ctx.whnf_head_pred(e, [&](expr const & e) {
            expr const & fn = get_app_fn(e);
            return !is_constant(fn, get_ite_name()) && !is_constant(fn, get_id_rhs_name());
        });
}

/* Return true iff `lhs` is of the form (@ite (x = y) s A t e).
   If the result is true, then the ite args are stored in `ite_args`. */
static bool is_ite_eq(expr const & lhs, buffer<expr> & ite_args) {
    expr const & fn = get_app_args(lhs, ite_args);
    return is_constant(fn, get_ite_name()) && ite_args.size() == 5 && is_eq(ite_args[0]);
}

static bool conservative_is_def_eq(type_context_old & ctx, expr const & a, expr const & b) {
    type_context_old::transparency_scope scope(ctx, transparency_mode::Reducible);
    return ctx.is_def_eq(a, b);
}

static lbool compare_values(expr const & a, expr const & b) {
    /* We know 'a' and 'b' are values. So, we don't need
       to check the type here. */
    if (auto v1 = to_num(a)) {
    if (auto v2 = to_num(b)) {
        return to_lbool(*v1 == *v2);
    }}

    if (auto v1 = to_char_core(a)) {
    if (auto v2 = to_char_core(b)) {
        return to_lbool(*v1 == *v2);
    }}

    if (auto v1 = to_string(a)) {
    if (auto v2 = to_string(b)) {
        return to_lbool(*v1 == *v2);
    }}

    if (auto v1 = name_lit_to_name(a)) {
    if (auto v2 = name_lit_to_name(b)) {
        return to_lbool(*v1 == *v2);
    }}

    return l_undef;
}

static bool quick_is_def_eq_when_values(type_context_old & ctx, expr const & a, expr const & b) {
    if (!is_local(a) && !is_local(b)) {
        if (compare_values(a, b) == l_true)
            return true;
    }
    return conservative_is_def_eq(ctx, a, b);
}

/* Try to find (H : not (c_lhs = c_rhs)) at Hs */
static optional<expr> find_if_neg_hypothesis(type_context_old & ctx, expr const & c_lhs, expr const & c_rhs,
                                             buffer<expr> const & Hs) {
    for (expr const & H : Hs) {
        expr H_type = ctx.infer(H);
        expr arg, arg_lhs, arg_rhs;
        if (is_not(H_type, arg) && is_eq(arg, arg_lhs, arg_rhs) &&
            quick_is_def_eq_when_values(ctx, arg_lhs, c_lhs) &&
            quick_is_def_eq_when_values(ctx, arg_rhs, c_rhs)) {
            return some_expr(H);
        }
    }
    return none_expr();
}

static expr prove_eqn_lemma_core(type_context_old & ctx, buffer<expr> const & Hs, expr const & lhs, expr const & rhs, bool root) {
    buffer<expr> ite_args;
    expr new_lhs = whnf_ite(ctx, lhs);
    if (is_ite_eq(new_lhs, ite_args)) {
        expr const & c = ite_args[0];
        expr c_lhs, c_rhs;
        lean_verify(is_eq(c, c_lhs, c_rhs));
        if (auto H = find_if_neg_hypothesis(ctx, c_lhs, c_rhs, Hs)) {
            expr lhs_else = ite_args[4];
            expr A        = ite_args[2];
            level A_lvl   = get_level(ctx, A);
            expr H1       = mk_app(mk_constant(get_if_neg_name(), {A_lvl}), {c, ite_args[1], *H, A, ite_args[3], lhs_else});
            expr H2       = prove_eqn_lemma_core(ctx, Hs, lhs_else, rhs, false);
            return mk_app(mk_constant(get_eq_trans_name(), {A_lvl}), {A, lhs, lhs_else, rhs, H1, H2});
        } else if (quick_is_def_eq_when_values(ctx, c_lhs, c_rhs)) {
            expr H = mk_eq_refl(ctx, c_lhs);
            expr lhs_then = ite_args[3];
            expr A        = ite_args[2];
            level A_lvl   = get_level(ctx, A);
            expr H1       = mk_app(mk_constant(get_if_pos_name(), {A_lvl}), {c, ite_args[1], H, A, lhs_then, ite_args[4]});
            expr H2       = prove_eqn_lemma_core(ctx, Hs, lhs_then, rhs, false);
            expr eq_trans = mk_constant(get_eq_trans_name(), {A_lvl});
            return mk_app(eq_trans, {A, lhs, lhs_then, rhs, H1, H2});
        } else if (compare_values(c_lhs, c_rhs) == l_false) {
            if (auto H = mk_val_ne_proof(ctx, c_lhs, c_rhs)) {
                expr lhs_else = ite_args[4];
                expr A        = ite_args[2];
                level A_lvl   = get_level(ctx, A);
                expr H1       = mk_app(mk_constant(get_if_neg_name(), {A_lvl}), {c, ite_args[1], *H, A, ite_args[3], lhs_else});
                expr H2       = prove_eqn_lemma_core(ctx, Hs, lhs_else, rhs, false);
                return mk_app(mk_constant(get_eq_trans_name(), {A_lvl}), {A, lhs, lhs_else, rhs, H1, H2});
            }
        }
    }

    /* Check if lhs =?= rhs, and create a reflexivity proof if this is the case.

       We have to be careful to avoid performace problems when checking this proof in the kernel.
       We considered different options.

       Option 1) (refl rhs) or (refl lhs)
       It will perform poorly in one of the following examples:


          | f x 0     := 1
          | f x (y+1) := f complex_term y

          | g 0     y    := 1
          | g (x+1) y    := g x complex_term

      If we use (refl rhs), we will generate the proofs

         eq.refl (f complex_term y)
         eq.refl (g x complex_term)

      These proofs trigger the following definitionally equality tests:

             f x     (y+1)  =?= f complex_term y
             g (x+1) y      =?= g x complex_term

      Since, we have f/g on both sides, the type checker will try
      first to unify the arguments, and may timeout trying to solve

               x  =?= complex_term
               y  =?= complex_term

      since it may take a long time to reduce `complex_term`.

      We have a similar problem if we use (refl lhs)

      Commit 7ebf16ca26da82b3d0e458dbcf32cda374ec785d tried to address this issue
      by using Option 2).

      Option 2) (refl (unfold_of lhs))
      This option fixes the performance problem above, but it is still
      inefficient for definitions that produce many equations.
      For example, the following definition produces 121 equations.

      ```
        universes u

        inductive node (α : Type u)
        | leaf : node
        | red_node : node → α → node → node
        | black_node : node → α → node → node

        namespace node
        variable {α : Type u}

        def balance : node α → α → node α → node α
        | (red_node (red_node a x b) y c) k d := red_node (black_node a x b) y (black_node c k d)
        | (red_node a x (red_node b y c)) k d := red_node (black_node a x b) y (black_node c k d)
        | l k r                               := black_node l k r

        end node
      ```

      In each equation we will have a big (unfold_of lhs) term. This increases the size of .olean
      files, and introduces an overhead in the mk_aux_lemma procedure.

      Option 3) (refl (id_delta lhs))
      We are currently using this option.
      This approach relies on the fact that the kernel type checker has special support for id_delta.
      The kernel implements the following is_def_eq rules for id_delta.

          1)   (id_delta t) =?= t
          2)   t =?= (id_delta t)
          3)   (id_delta t) =?= s  IF (unfold_of t) =?= s
          4)   t =?= id_delta s    IF t =?= (unfold_of s)

      We can view it as a "lazy" version of Option 2. The .olean file contains `id_delta t`
      instead of the result of delta-reducing t. Similarly, no overhead is introduced to mk_aux_lemma
      since the proof is quite small in this case.

      Finally, note that this optimization is only use when root = true.
      That is, it is not use if the equation compiler used if-then-else compilation trick for
      pattern matching scalar values, and/or the pack/unpack auxiliary definitions introduced
      for nested inductive datatype declarations.
      The problem described in Option 1 does not happen in this case since we unfold the left-hand-side
      while building the proof. However, the performance problem described in Option 2 may happen.
    */
    if (root) {
        /* Remark: type_context_old currently does not have support for id_delta.
           So, we unfold lhs before invoking ctx.is_def_eq. */
        expr lhs_body = lhs;
        if (auto b = unfold_term(ctx.env(), lhs))
            lhs_body = *b;
        if (ctx.is_def_eq(lhs_body, rhs)) {
            if (ctx.env().find(get_id_delta_name()))
                return mk_eq_refl(ctx, mk_id_delta(ctx, lhs));
            else
                return mk_eq_refl(ctx, lhs);
        }
    } else {
        if (ctx.is_def_eq(lhs, rhs))
            return mk_eq_refl(ctx, lhs);
    }

    throw exception("equation compiler failed to prove equation lemma (workaround: "
                    "disable lemma generation using `set_option eqn_compiler.lemmas false`)");
}

static expr prove_eqn_lemma(type_context_old & ctx, buffer<expr> const & Hs, expr const & lhs, expr const & rhs) {
    type_context_old::smart_unfolding_scope S(ctx, false);
    if (auto new_lhs = unfold_app(ctx.env(), lhs)) {
        buffer<expr> args;
        expr fn = get_app_args(*new_lhs, args);
        if (is_constant(fn, get_well_founded_fix_name()) &&
            args.size() == 6) {
            expr H1 = mk_app(mk_constant(get_well_founded_fix_eq_name(), const_levels(fn)), args.size(), args.data());
            expr H1_type = ctx.relaxed_whnf(ctx.infer(H1));
            expr lhs_dummy, new_lhs;
            lean_verify(is_eq(H1_type, lhs_dummy, new_lhs));
            expr H2 = prove_eqn_lemma_core(ctx, Hs, new_lhs, rhs, true);
            expr body = mk_eq_trans(ctx, H1, H2);
            return ctx.mk_lambda(Hs, body);
        }
    }
    expr body = prove_eqn_lemma_core(ctx, Hs, lhs, rhs, true);
    return ctx.mk_lambda(Hs, body);
}

name mk_equation_name(name const & f_name, unsigned eqn_idx) {
    return name(name(f_name, "equations"), "_eqn").append_after(eqn_idx);
}

/*
  Remove unnecessary auxiliary "have-decls".
  When defining a function by well-founded recursion, we use local have-decls
  to provide hints to the tactic that produces proofs that recursive calls are decreasing.

  Convert dite into ite whenever possible. Again, when using well-founded recursion,
  we often need to use dite to be able to "communicate" the condition to each branch.
  This extra hypothesis is usually only used when providing hints to the decreasing tactic.
*/
struct cleanup_equation_rhs_fn : public replace_visitor {
    virtual expr visit_app(expr const & e) override {
        if (is_have_annotation(app_fn(e)) &&
            is_lambda(get_annotation_arg(app_fn(e)))) {
            expr body = binding_body(get_annotation_arg(app_fn(e)));
            if (!has_loose_bvar(body, 0)) {
                return visit(lower_loose_bvars(body, 1));
            }
        }

        if (is_app_of(e, get_dite_name())) {
            buffer<expr> args;
            expr const & dite = get_app_args(e, args);
            for (expr & arg : args)
                arg = visit(arg);
            if (args.size() >= 5) {
                expr & t = args[3];
                expr & e = args[4];
                if (is_lambda(t) && !has_loose_bvar(binding_body(t), 0) &&
                    is_lambda(e) && !has_loose_bvar(binding_body(e), 0)) {
                    t = lower_loose_bvars(binding_body(t), 1);
                    e = lower_loose_bvars(binding_body(e), 1);
                    expr new_ite = mk_app(mk_constant(get_ite_name(), const_levels(dite)), args.size(), args.data());
                    return new_ite;
                }
            }
            return mk_app(dite, args.size(), args.data());
        }

        return replace_visitor::visit_app(e);
    }
};

static expr cleanup_equation_rhs(expr const & rhs) {
    return cleanup_equation_rhs_fn()(rhs);
}

environment mk_equation_lemma(environment const & env, options const & opts, metavar_context const & mctx, local_context const & lctx,
                              name const & f_name, name const & f_actual_name, unsigned eqn_idx, bool is_private,
                              buffer<expr> const & Hs, expr const & lhs, expr const & rhs) {
    if (!get_eqn_compiler_lemmas(opts)) return env;
    type_context_old ctx(env, opts, mctx, lctx, transparency_mode::Semireducible);
    expr proof        = prove_eqn_lemma(ctx, Hs, lhs, rhs);
    expr new_rhs      = cleanup_equation_rhs(rhs);
    expr type         = ctx.mk_pi(Hs, mk_eq(ctx, lhs, new_rhs));
    name eqn_name     = mk_equation_name(f_name, eqn_idx);
    name eqn_actual_name = mk_equation_name(f_actual_name, eqn_idx);
    return add_equation_lemma(env, opts, mctx, lctx, is_private, f_actual_name, eqn_name, eqn_actual_name, type, proof);
}

environment mk_simple_equation_lemma_for(environment const & env, options const & opts, bool is_private, name const & c, name const & c_actual, unsigned arity) {
    if (!env.find(get_eq_name())) return env;
    if (!get_eqn_compiler_lemmas(opts)) return env;
    constant_info info = env.get(c_actual);
    type_context_old ctx(env, transparency_mode::All);
    expr type  = info.get_type();
    expr value = info.get_value();
    expr lhs   = mk_constant(c_actual, param_names_to_levels(info.get_univ_params()));
    type_context_old::tmp_locals locals(ctx);
    for (unsigned i = 0; i < arity; i++) {
        type  = ctx.relaxed_whnf(type);
        value = ctx.relaxed_whnf(value);
        if (!is_pi(type) || !is_lambda(value))
            throw exception(sstream() << "failed to create equational lemma for '" << c << "', incorrect arity");
        expr x = locals.push_local_from_binding(type);
        lhs    = mk_app(lhs, x);
        type   = instantiate(binding_body(type), x);
        value  = instantiate(binding_body(value), x);
    }
    name eqn_name        = mk_equation_name(c, 1);
    name eqn_actual_name = mk_equation_name(c_actual, 1);
    expr eqn_type        = locals.mk_pi(mk_eq(ctx, lhs, value));
    expr eqn_proof       = locals.mk_lambda(mk_eq_refl(ctx, lhs));
    environment new_env  = add_equation_lemma(env, opts, metavar_context(), ctx.lctx(), is_private, c_actual, eqn_name, eqn_actual_name, eqn_type, eqn_proof);
    return mark_has_simple_eqn_lemma(new_env, c_actual);
}

bool is_name_value(expr const & e) {
    if (is_constant(e, get_lean_name_anonymous_name()))
        return true;
    buffer<expr> args;
    expr const & fn = get_app_args(e, args);
    if (is_constant(fn, get_lean_name_mk_string_name()) && args.size() == 2)
        return is_name_value(args[0]) && is_string_value(args[1]);
    if (is_constant(fn, get_lean_name_mk_numeral_name()) && args.size() == 2)
        return is_name_value(args[0]) && is_num(args[1]);
    return false;
}

bool is_nat_int_char_string_name_value(type_context_old & ctx, expr const & e) {
    if (is_char_value(ctx, e) || is_string_value(e) || is_name_value(e)) return true;
    if (is_signed_num(e)) {
        expr type = ctx.infer(e);
        if (ctx.is_def_eq(type, mk_nat_type()) || ctx.is_def_eq(type, mk_int_type()))
            return true;
    }
    return false;
}

static bool is_inductive(environment const & env, expr const & e) {
    return is_constant(e) && is_ginductive(env, const_name(e));
}

/* Normalize until head is an inductive datatype */
static expr whnf_inductive(type_context_old & ctx, expr const & e) {
    return ctx.whnf_head_pred(e, [&](expr const & e) {
            return !is_inductive(ctx.env(), get_app_fn(e));
        });
}

static void get_constructors_of(environment const & env, name const & n, buffer<name> & result) {
    to_buffer(get_ginductive_intro_rules(env, n), result);
}

/* Given a variable (x : I A idx), where (I A idx) is an inductive datatype,
   for each constructor c of (I A idx), this function invokes fn(t, new_vars) where t is of the form (c A ...),
   where new_vars are fresh variables and are arguments of (c A ...)
   which have not been fixed by typing constraints. Moreover, fn is only invoked if
   the type of (c A ...) matches (I A idx). */
void for_each_compatible_constructor(type_context_old & ctx, expr const & var,
                                     std::function<void(expr const &, buffer<expr> &)> const & fn) {
    lean_assert(is_local(var));
    expr var_type = whnf_inductive(ctx, ctx.infer(var));
    buffer<expr> I_args;
    expr const & I      = get_app_args(var_type, I_args);
    name const & I_name = const_name(I);
    levels const & I_ls = const_levels(I);
    unsigned nparams    = get_ginductive_num_params(ctx.env(), I_name);
    buffer<expr> I_params;
    I_params.append(nparams, I_args.data());
    buffer<name> constructor_names;
    get_constructors_of(ctx.env(), I_name, constructor_names);
    for (name const & c_name : constructor_names) {
        buffer<expr> c_vars;
        buffer<name> c_var_names;
        buffer<expr> new_c_vars;
        expr c  = mk_app(mk_constant(c_name, I_ls), I_params);
        expr it = whnf_inductive(ctx, ctx.infer(c));
        {
            type_context_old::tmp_mode_scope scope(ctx);
            while (is_pi(it)) {
                expr new_arg = ctx.mk_tmp_mvar(binding_domain(it));
                c_vars.push_back(new_arg);
                c_var_names.push_back(binding_name(it));
                c  = mk_app(c, new_arg);
                it = whnf_inductive(ctx, instantiate(binding_body(it), new_arg));
            }
            if (!ctx.is_def_eq(var_type, it)) {
                /* TODO(Leo): do we need this trace?
                trace_match(
                    auto pp = mk_pp_ctx(ctx.lctx());
                    tout() << "constructor '" << c_name << "' not being considered at complete transition because type\n" << pp(it)
                    << "\ndoes not match\n" << pp(var_type) << "\n";);
                */
                continue;
            }
            lean_assert(c_vars.size() == c_var_names.size());
            for (unsigned i = 0; i < c_vars.size(); i++) {
                expr & c_var = c_vars[i];
                c_var = ctx.instantiate_mvars(c_var);
                if (is_idx_metavar(c_var)) {
                    expr new_c_var = ctx.push_local(c_var_names[i], ctx.instantiate_mvars(ctx.infer(c_var)));
                    new_c_vars.push_back(new_c_var);
                    ctx.assign(c_var, new_c_var);
                    c_var = new_c_var;
                } else if (has_idx_metavar(c_var)) {
                    /* TODO(Leo): do we need this trace?
                    trace_match(
                        auto pp = mk_pp_ctx(ctx.lctx());
                        tout() << "constructor '" << c_name << "' not being considered because at complete transition because " <<
                        "failed to synthesize arguments\n" << pp(ctx.instantiate_mvars(c)) << "\n";);
                    */
                    continue;
                }
            }
            c = ctx.instantiate_mvars(c);
        }
        fn(c, new_c_vars);
    }
}

/* Given the telescope vars [x_1, ..., x_i, ..., x_n] and var := x_i,
   and t is a term containing variables t_vars := {y_1, ..., y_k} disjoint from {x_1, ..., x_n},
   Return [x_1, ..., x_{i-1}, y_1, ..., y_k, T(x_{i+1}), ..., T(x_n)},
   where T(x_j) updates the type of x_j (j > i) by replacing x_i with t.

   \remark The set of variables in t is a subset of {x_1, ..., x_{i-1}} union {y_1, ..., y_k}
*/
void update_telescope(type_context_old & ctx, buffer<expr> const & vars, expr const & var,
                      expr const & t, buffer<expr> const & t_vars, buffer<expr> & new_vars,
                      buffer<expr> & from, buffer<expr> & to) {
    /* We are replacing `var` with `c` */
    for (expr const & curr : vars) {
        if (curr == var) {
            from.push_back(var);
            to.push_back(t);
            new_vars.append(t_vars);
        } else {
            expr curr_type     = ctx.infer(curr);
            expr new_curr_type = replace_locals(curr_type, from, to);
            if (curr_type == new_curr_type) {
                new_vars.push_back(curr);
            } else {
                expr new_curr = ctx.push_local(local_pp_name(curr), new_curr_type);
                from.push_back(curr);
                to.push_back(new_curr);
                new_vars.push_back(new_curr);
            }
        }
    }
}

/* Helper functor for mk_smart_unfolding_definition */
struct replace_aux_meta_fn : public replace_visitor {
    name const & m_fn_aux_name;
    expr const & m_new_fn;
    unsigned     m_nargs_to_skip;
    bool         m_found{false};

    virtual expr visit_app(expr const & e) override {
        buffer<expr> args;
        expr const & fn = get_app_args(e, args);
        if (is_constant(fn) && const_name(fn) == m_fn_aux_name) {
            if (args.size() >= m_nargs_to_skip) {
                m_found = true;
                for (unsigned i = m_nargs_to_skip; i < args.size(); i++) {
                    expr & arg   = args[i];
                    arg          = visit(arg);
                }
                return mk_app(m_new_fn, args.size() - m_nargs_to_skip, args.data() + m_nargs_to_skip);
            } else {
                throw exception("failed to generate helper declaration for smart unfolding, unexpected occurrence of recursive application");
            }
        } else {
            expr new_fn   = visit(fn);
            bool modified = !is_eqp(fn, new_fn);
            for (expr & arg : args) {
                expr new_arg = visit(arg);
                if (!is_eqp(new_arg, arg))
                    modified = true;
                arg = new_arg;
            }
            if (!modified)
                return e;
            else
                return mk_app(new_fn, args);
        }
    }

    replace_aux_meta_fn(name const & fn_aux_name, expr const & new_fn, unsigned nargs_to_skip):
        m_fn_aux_name(fn_aux_name),
        m_new_fn(new_fn),
        m_nargs_to_skip(nargs_to_skip) {
    }
};

environment mk_smart_unfolding_definition(environment const & env, options const & o, name const & n) {
    type_context_old ctx(env, o, metavar_context(), local_context());
    constant_info info = env.get(n);
    expr val  = info.get_value();
    levels ls = param_names_to_levels(info.get_univ_params());
    type_context_old::tmp_locals locals(ctx);
    while (is_lambda(val)) {
        val = instantiate(binding_body(val), locals.push_local_from_binding(val));
    }
    expr const & fn      = get_app_fn(val);
    buffer<expr> args;
    get_app_rev_args(val, args);

    if (!is_constant(fn) || const_name(fn) != name(n, "_main")) {
        return env;
    }

    name const & fn_name = const_name(fn);

    if (uses_well_founded_recursion(env, fn_name)) {
        return env;
    }

    name meta_aux_fn_name = mk_aux_meta_rec_name(fn_name);

    expr helper_value;
    if (optional<constant_info> aux_info = env.find(meta_aux_fn_name)) {
        expr new_fn  = mk_app(mk_constant(n, ls), locals.size(), locals.data());
        helper_value = instantiate_value_univ_params(*aux_info, const_levels(fn));
        helper_value = apply_beta(helper_value, args.size(), args.data());
        replace_aux_meta_fn proc(meta_aux_fn_name, new_fn, args.size());
        helper_value = proc(helper_value);
        if (!proc.m_found)
            throw exception("failed to generate helper declaration for smart unfolding, auxiliary meta declaration does not contain recursive application");
    } else {
        helper_value = instantiate_value_univ_params(env.get(fn_name), const_levels(fn));
        helper_value = apply_beta(helper_value, args.size(), args.data());
    }

    helper_value = locals.mk_lambda(helper_value);
    try {
        declaration def = mk_definition(env, mk_smart_unfolding_name_for(n), info.get_univ_params(), info.get_type(), helper_value, true);
        return module::add(env, def);
    } catch (exception & ex) {
        throw nested_exception("failed to generate helper declaration for smart unfolding, type error", std::current_exception());
    }
}

void initialize_eqn_compiler_util() {
    register_trace_class("eqn_compiler");
    register_trace_class(name{"debug", "eqn_compiler"});
    g_eqn_compiler_lemmas = new name{"eqn_compiler", "lemmas"};
    g_eqn_compiler_zeta   = new name{"eqn_compiler", "zeta"};
    register_bool_option(*g_eqn_compiler_lemmas, LEAN_DEFAULT_EQN_COMPILER_LEMMAS,
                         "(equation compiler) generate equation lemmas and induction principle");
    register_bool_option(*g_eqn_compiler_zeta, LEAN_DEFAULT_EQN_COMPILER_ZETA,
                         "(equation compiler) apply zeta-expansion (expand references to let-declarations) before creating auxiliary definitions.");
}

void finalize_eqn_compiler_util() {
    delete g_eqn_compiler_lemmas;
    delete g_eqn_compiler_zeta;
}
}
