/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <algorithm>
#include "kernel/find_fn.h"
#include "kernel/old_type_checker.h"
#include "kernel/inductive/inductive.h"
#include "library/aux_recursors.h"
#include "library/util.h"
#include "library/inductive_compiler/ginductive.h"
#include "library/vm/vm.h"
#include "library/type_context.h"

namespace lean {
name mk_compiler_unused_name(environment const & env, name const & prefix, char const * suffix, unsigned & idx) {
    while (true) {
        name curr(prefix, suffix);
        curr = curr.append_after(idx);
        idx++;
        if (!env.find(curr) && !is_vm_function(env, curr))
            return curr;
    }
}

bool is_comp_irrelevant(type_context_old & ctx, expr const & e) {
    expr type = ctx.whnf(ctx.infer(e));
    return is_sort(type) || ctx.is_prop(type);
}

static bool is_typeformer_app(buffer<name> const & typeformer_names, expr const & e) {
    expr const & fn = get_app_fn(e);
    if (!is_local(fn))
        return false;
    unsigned r = 0;
    for (name const & n : typeformer_names) {
        if (local_name(fn) == n)
            return true;
        r++;
    }
    return false;
}

void get_rec_args(environment const & env, name const & n, buffer<buffer<bool>> & r) {
    lean_assert(inductive::is_inductive_decl(env, n));
    old_type_checker tc(env);
    constant_info rec_info   = env.get(inductive::get_elim_name(n));
    unsigned nparams         = *inductive::get_num_params(env, n);
    unsigned nminors         = *inductive::get_num_minor_premises(env, n);
    unsigned ntypeformers    = 1;
    buffer<expr> rec_args;
    to_telescope(rec_info.get_type(), rec_args);
    buffer<name> typeformer_names;
    for (unsigned i = nparams; i < nparams + ntypeformers; i++) {
        typeformer_names.push_back(local_name(rec_args[i]));
    }
    lean_assert(typeformer_names.size() == ntypeformers);
    r.clear();
    // add minor premises
    for (unsigned i = nparams + ntypeformers; i < nparams + ntypeformers + nminors; i++) {
        r.push_back(buffer<bool>());
        buffer<bool> & bv = r.back();
        expr minor_type = local_type(rec_args[i]);
        buffer<expr> minor_args;
        to_telescope(minor_type, minor_args);
        for (expr & minor_arg : minor_args) {
            buffer<expr> minor_arg_args;
            expr minor_arg_type = to_telescope(tc, local_type(minor_arg), minor_arg_args);
            bv.push_back(is_typeformer_app(typeformer_names, minor_arg_type));
        }
    }
}

bool is_cases_on_recursor(environment const & env, name const & n) {
    return ::lean::is_aux_recursor(env, n) && n.get_string() == "cases_on";
}

unsigned get_constructor_arity(environment const & env, name const & n) {
    constant_info info = env.get(n);
    expr e = info.get_type();
    unsigned r = 0;
    while (is_pi(e)) {
        r++;
        e = binding_body(e);
    }
    return r;
}
}
