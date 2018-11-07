/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/instantiate.h"
#include "library/compiler/util.h"

namespace lean {
/* Make sure every argument of applications and projections is:
   - A neutral element OR
   - A fvar. */
class simp_app_args_fn {
    type_checker::state m_st;
    local_ctx           m_lctx;
    buffer<expr>        m_fvars;
    name                m_x;
    unsigned            m_next_idx{1};

    environment const & env() const { return m_st.env(); }
    name_generator & ngen() { return m_st.ngen(); }

    name next_name() {
        name r = m_x.append_after(m_next_idx);
        m_next_idx++;
        return r;
    }

    expr mk_let(unsigned saved_fvars_size, expr r) {
        lean_assert(saved_fvars_size <= m_fvars.size());
        if (saved_fvars_size == m_fvars.size())
            return r;
        r = m_lctx.mk_lambda(m_fvars.size() - saved_fvars_size, m_fvars.data() + saved_fvars_size, r);
        m_fvars.shrink(saved_fvars_size);
        return r;
    }

    expr visit_let(expr e) {
        buffer<expr> curr_fvars;
        while (is_let(e)) {
            lean_assert(!has_loose_bvars(let_type(e)));
            expr t     = let_type(e);
            expr v     = visit(instantiate_rev(let_value(e), curr_fvars.size(), curr_fvars.data()));
            name n     = let_name(e);
            if (is_internal_name(n) && !is_join_point_name(n)) {
                n = next_name();
            }
            expr fvar  = m_lctx.mk_local_decl(ngen(), n, t, v);
            curr_fvars.push_back(fvar);
            m_fvars.push_back(fvar);
            e = let_body(e);
        }
        return visit(instantiate_rev(e, curr_fvars.size(), curr_fvars.data()));
    }

    expr visit_lambda(expr e) {
        buffer<expr> binding_fvars;
        while (is_lambda(e)) {
            lean_assert(!has_loose_bvars(binding_domain(e)));
            expr new_fvar = m_lctx.mk_local_decl(ngen(), binding_name(e), binding_domain(e), binding_info(e));
            binding_fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        e = instantiate_rev(e, binding_fvars.size(), binding_fvars.data());
        unsigned saved_fvars_size = m_fvars.size();
        expr r = mk_let(saved_fvars_size, visit(e));
        lean_assert(!is_lambda(r));
        return m_lctx.mk_lambda(binding_fvars, r);
    }

    expr ensure_simple_arg(expr const & e) {
        if (is_fvar(e) || is_enf_neutral(e)) {
            return e;
        } else if (is_lit(e)) {
            expr fvar  = m_lctx.mk_local_decl(ngen(), next_name(), mk_enf_object_type(), e);
            m_fvars.push_back(fvar);
            return fvar;
        } else if (is_constant(e)) {
            expr type;
            if (optional<constant_info> info = env().find(const_name(e)))
                type = mk_runtime_type(m_st, m_lctx, info->get_type());
            else
                type = mk_enf_object_type(); // TODO(Leo): improve
            expr fvar = m_lctx.mk_local_decl(ngen(), next_name(), type, e);
            m_fvars.push_back(fvar);
            return fvar;
        } else {
            lean_unreachable();
        }
    }

    expr visit_proj(expr const & e) {
        expr arg = ensure_simple_arg(proj_expr(e));
        return update_proj(e, arg);
    }

    expr visit_app(expr const & e) {
        buffer<expr> args;
        expr const & fn = get_app_args(e, args);
        if (is_cases_on_app(env(), e)) {
            args[0] = ensure_simple_arg(args[0]);
            for (unsigned i = 1; i < args.size(); i++) {
                args[i] = visit(args[i]);
            }
        } else {
            for (expr & arg : args)
                arg = ensure_simple_arg(arg);
        }
        return mk_app(fn, args);
    }

    expr visit(expr const & e) {
        switch (e.kind()) {
        case expr_kind::App:    return visit_app(e);
        case expr_kind::Lambda: return visit_lambda(e);
        case expr_kind::Let:    return visit_let(e);
        case expr_kind::Proj:   return visit_proj(e);
        default:                return e;
        }
    }

public:
    simp_app_args_fn(environment const & env):m_st(env), m_x("_x") {}

    expr operator()(expr const & e) {
        return mk_let(0, visit(e));
    }
};

expr simp_app_args(environment const & env, expr const & e) {
    return simp_app_args_fn(env)(e);
}
}
