/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <limits>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include "runtime/flet.h"
#include "runtime/sstream.h"
#include "util/name_hash_set.h"
#include "util/name_hash_map.h"
#include "kernel/instantiate.h"
#include "kernel/abstract.h"
#include "kernel/for_each_fn.h"
#include "library/util.h"
#include "library/trace.h"
#include "library/compiler/util.h"
#include "library/compiler/llnf.h"
#include "library/compiler/ll_infer_type.h"
#include "library/compiler/cse.h"
#include "library/compiler/elim_dead_let.h"
#include "library/compiler/extern_attribute.h"
#include "library/compiler/borrowed_annotation.h"

namespace lean {
static expr * g_apply       = nullptr;
static expr * g_closure     = nullptr;
static char const * g_cnstr = "_cnstr";
static name * g_reuse       = nullptr;
static name * g_reset       = nullptr;
static name * g_sset        = nullptr;
static name * g_uset        = nullptr;
static name * g_proj        = nullptr;
static name * g_sproj       = nullptr;
static name * g_uproj       = nullptr;
static expr * g_jmp         = nullptr;
static name * g_box         = nullptr;
static name * g_unbox       = nullptr;
static expr * g_inc         = nullptr;
static expr * g_dec         = nullptr;

expr mk_llnf_apply() { return *g_apply; }
bool is_llnf_apply(expr const & e) { return e == *g_apply; }

expr mk_llnf_closure() { return *g_closure; }
bool is_llnf_closure(expr const & e) { return e == *g_closure; }

static bool is_llnf_unary_primitive(expr const & e, name const & prefix, unsigned & i) {
    if (!is_constant(e)) return false;
    name const & n = const_name(e);
    if (!is_internal_name(n) || n.is_atomic() || !n.is_numeral() || n.get_prefix() != prefix) return false;
    i = n.get_numeral().get_small_value();
    return true;
}

static bool is_llnf_ternary_primitive(expr const & e, name const & prefix, unsigned & i1, unsigned & i2, unsigned & i3) {
    if (!is_constant(e)) return false;
    name const & n3  = const_name(e);
    if (!is_internal_name(n3)) return false;
    if (n3.is_atomic() || !n3.is_numeral()) return false;
    i3 = n3.get_numeral().get_small_value();
    name const & n2 = n3.get_prefix();
    if (n2.is_atomic() || !n2.is_numeral()) return false;
    i2 = n2.get_numeral().get_small_value();
    name const & n1 = n2.get_prefix();
    if (n1.is_atomic() || !n1.is_numeral() || n1.get_prefix() != prefix) return false;
    i1 = n1.get_numeral().get_small_value();
    return true;
}

static bool is_llnf_quaternary_primitive(expr const & e, name const & prefix, unsigned & i1, unsigned & i2, unsigned & i3, unsigned & i4) {
    if (!is_constant(e)) return false;
    name const & n4  = const_name(e);
    if (!is_internal_name(n4)) return false;
    if (n4.is_atomic() || !n4.is_numeral()) return false;
    i4 = n4.get_numeral().get_small_value();
    name const & n3  = n4.get_prefix();
    if (!is_internal_name(n3)) return false;
    if (n3.is_atomic() || !n3.is_numeral()) return false;
    i3 = n3.get_numeral().get_small_value();
    name const & n2 = n3.get_prefix();
    if (n2.is_atomic() || !n2.is_numeral()) return false;
    i2 = n2.get_numeral().get_small_value();
    name const & n1 = n2.get_prefix();
    if (n1.is_atomic() || !n1.is_numeral() || n1.get_prefix() != prefix) return false;
    i1 = n1.get_numeral().get_small_value();
    return true;
}

/*
A constructor object contains a header, then a sequence of pointers to other Lean objects,
a sequence of `usize` (i.e., `size_t`) scalar values, and a sequence of other scalar values.
We store pointer and `usize` objects before other scalar values to simplify how we compute
the position where data is stored. For example, the "instruction" `_sproj.4.2.3 o` access
a value of size 4 at offset `sizeof(void*)*2+3`.
We have considered a simpler representation where we just have the size and offset,
we decided to not used it because we would have to generate different C++ code for 32 and
64 bit machines. This would complicate the bootstrapping process.
We store the `usize` scalar values before other scalar values because their size is platform
specific. We also have custom instructions (`_uset` and `_uproj`) to set and retrieve `usize`
scalar fields.
*/

/* The `I._cnstr.<cidx>.<num_usizes>.<num_bytes>` instruction constructs a constructor object with tag `cidx`, and scalar area with space for `num_usize` `usize` values + `num_bytes` bytes. */
expr mk_llnf_cnstr(name const & I, unsigned cidx, unsigned num_usizes, unsigned num_bytes) {
    return mk_constant(name(name(name(name(I, g_cnstr), cidx), num_usizes), num_bytes));
}
bool is_llnf_cnstr(expr const & e, name & I, unsigned & cidx, unsigned & num_usizes, unsigned & num_bytes) {
    if (!is_constant(e)) return false;
    name const & n3  = const_name(e);
    if (!is_internal_name(n3)) return false;
    if (n3.is_atomic() || !n3.is_numeral()) return false;
    num_bytes = n3.get_numeral().get_small_value();
    name const & n2 = n3.get_prefix();
    if (n2.is_atomic() || !n2.is_numeral()) return false;
    num_usizes = n2.get_numeral().get_small_value();
    name const & n1 = n2.get_prefix();
    if (n1.is_atomic() || !n1.is_numeral())  return false;
    cidx = n1.get_numeral().get_small_value();
    name const & n0 = n1.get_prefix();
    if (n0.is_atomic() || !n0.is_string() || n0.get_string() != g_cnstr) return false;
    I = n0.get_prefix();
    return true;
}

/* The `_reuse.<cidx>.<num_usizes>.<num_bytes>.<updt_cidx>` is similar to `_cnstr.<cidx>.<num_usize>.<num_bytes>`, but it takes an extra argument: a memory cell that may be reused. */
expr mk_llnf_reuse(unsigned cidx, unsigned num_usizes, unsigned num_bytes, bool updt_cidx) {
    return mk_constant(name(name(name(name(*g_reuse, cidx), num_usizes), num_bytes), updt_cidx));
}
bool is_llnf_reuse(expr const & e, unsigned & cidx, unsigned & num_usizes, unsigned & num_bytes, bool & updt_cidx) {
    unsigned aux = 0;
    bool r = is_llnf_quaternary_primitive(e, *g_reuse, cidx, num_usizes, num_bytes, aux);
    updt_cidx = aux;
    return r;
}

expr mk_llnf_reset(unsigned n) { return mk_constant(name(*g_reset, n)); }
bool is_llnf_reset(expr const & e, unsigned & n) { return is_llnf_unary_primitive(e, *g_reset, n); }

/* The `_sset.<sz>.<n>.<offset>` instruction sets a scalar value of size `sz` (in bytes) at offset `sizeof(void*)*n + offset`. The value `n` is the number of pointer and `usize` fields. */
expr mk_llnf_sset(unsigned sz, unsigned n, unsigned offset) { return mk_constant(name(name(name(*g_sset, sz), n), offset)); }
bool is_llnf_sset(expr const & e, unsigned & sz, unsigned & n, unsigned & offset) { return is_llnf_ternary_primitive(e, *g_sset, sz, n, offset); }

/* The `_uset.<n>` instruction sets a `usize` value in a constructor object at offset `sizeof(void*)*n`. */
expr mk_llnf_uset(unsigned n) { return mk_constant(name(*g_uset, n)); }
bool is_llnf_uset(expr const & e, unsigned & n) { return is_llnf_unary_primitive(e, *g_uset, n); }

/* The `_proj.<idx>` instruction retrieves an object field in a constructor object at offset `sizeof(void*)*idx` */
expr mk_llnf_proj(unsigned idx) { return mk_constant(name(*g_proj, idx)); }
bool is_llnf_proj(expr const & e, unsigned & idx) { return is_llnf_unary_primitive(e, *g_proj, idx); }

/* The `_sproj.<sz>.<n>.<offset>` instruction retrieves a scalar field of size `sz` (in bytes) in a constructor object at offset `sizeof(void*)*n + offset`. The value `n` is the number of pointer and `usize` fields. */
expr mk_llnf_sproj(unsigned sz, unsigned n, unsigned offset) { return mk_constant(name(name(name(*g_sproj, sz), n), offset)); }
bool is_llnf_sproj(expr const & e, unsigned & sz, unsigned & n, unsigned & offset) { return is_llnf_ternary_primitive(e, *g_sproj, sz, n, offset); }

/* The `_uproj.<idx>` instruction retrieves an `usize` field in a constructor ojbect at offset `sizeof(void*)*idx` */
expr mk_llnf_uproj(unsigned idx) { return mk_constant(name(*g_uproj, idx)); }
bool is_llnf_uproj(expr const & e, unsigned & idx) { return is_llnf_unary_primitive(e, *g_uproj, idx); }

/* The `_jmp` instruction is a "jump" to a join point. */
expr mk_llnf_jmp() { return *g_jmp; }
bool is_llnf_jmp(expr const & e) { return e == *g_jmp; }

/* The `_box.<n>` instruction converts an unboxed value (type `uint*`) into a boxed value (type `_obj`).
   The parameter `n` specifies the number of bytes necessary to store the unboxed value.
   This information could be also retrieved from the type of the variable being boxed, but for simplicity,
   we store it in the instruction too.

   Remark: we use the instruction `_box.0` to box unboxed values of type `usize` into a boxed value (type `_obj`).
   We use `0` because the number of bytes necessary to store a `usize` is different in 32 and 64 bit machines. */
expr mk_llnf_box(unsigned n) { return mk_constant(name(*g_box, n)); }
bool is_llnf_box(expr const & e, unsigned & n) { return is_llnf_unary_primitive(e, *g_box, n); }

/* The `_unbox.<n>` instruction converts a boxed value (type `_obj`) into an unboxed value (type `uint*` or `usize`).
   The parameter `n` specifies the number of bytes necessary to store the unboxed value.
   It is not really needed, but we use to keep it consistent with `_box.<n>`.

   Remark: we use the instruction `_unbox.0` like we use `_box.0`. */
expr mk_llnf_unbox (unsigned n) { return mk_constant(name(*g_unbox, n)); }
bool is_llnf_unbox(expr const & e, unsigned & n) { return is_llnf_unary_primitive(e, *g_unbox, n); }

expr mk_llnf_inc() { return *g_inc; }
bool is_llnf_inc(expr const & e) { return e == *g_inc; }

expr mk_llnf_dec() { return *g_dec; }
bool is_llnf_dec(expr const & e) { return e == *g_dec; }

bool is_llnf_op(expr const & e) {
    return
        is_llnf_closure(e) ||
        is_llnf_apply(e)   ||
        is_llnf_cnstr(e)   ||
        is_llnf_reuse(e)   ||
        is_llnf_reset(e)   ||
        is_llnf_sset(e)    ||
        is_llnf_uset(e)    ||
        is_llnf_proj(e)    ||
        is_llnf_sproj(e)   ||
        is_llnf_uproj(e)   ||
        is_llnf_jmp(e)     ||
        is_llnf_box(e)     ||
        is_llnf_unbox(e)   ||
        is_llnf_inc(e)     ||
        is_llnf_dec(e);
}

struct field_info {
    /* Remark: the position of a scalar value in
       a constructor object is: `sizeof(void*)*m_idx + m_offset` */
    enum kind { Irrelevant, Object, USize, Scalar };
    kind     m_kind;
    unsigned m_size;   // it is used only if `m_kind == Scalar`
    unsigned m_idx;
    unsigned m_offset; // it is used only if `m_kind == Scalar`
    expr     m_type;
    field_info():m_kind(Irrelevant), m_idx(0), m_type(mk_enf_neutral()) {}
    field_info(unsigned idx):m_kind(Object), m_idx(idx), m_type(mk_enf_object_type()) {}
    field_info(unsigned num, bool):m_kind(USize), m_idx(num), m_type(mk_constant(get_usize_name())) {}
    field_info(unsigned sz, unsigned num, unsigned offset, expr const & type):
        m_kind(Scalar), m_size(sz), m_idx(num), m_offset(offset), m_type(type) {}
    expr get_type() const { return m_type; }
    static field_info mk_irrelevant() { return field_info(); }
    static field_info mk_object(unsigned idx) { return field_info(idx); }
    static field_info mk_usize(unsigned n) { return field_info(n, true); }
    static field_info mk_scalar(unsigned sz, unsigned offset, expr const & type) { return field_info(sz, 0, offset, type); }
};

struct cnstr_info {
    unsigned         m_cidx;
    list<field_info> m_field_info;
    unsigned         m_num_objs{0};
    unsigned         m_num_usizes{0};
    unsigned         m_scalar_sz{0};
    cnstr_info(unsigned cidx, list<field_info> const & finfo):
        m_cidx(cidx), m_field_info(finfo) {
        for (field_info const & info : finfo) {
            if (info.m_kind == field_info::Object)
                m_num_objs++;
            else if (info.m_kind == field_info::USize)
                m_num_usizes++;
            else if (info.m_kind == field_info::Scalar)
                m_scalar_sz += info.m_size;
        }
    }
};

static expr * g_usize = nullptr;
std::vector<pair<name, unsigned>> * g_builtin_scalar_size = nullptr;

static bool is_usize_type(expr const & e) {
    return is_constant(e, get_usize_name());
}

static optional<unsigned> is_builtin_scalar(expr const & type) {
    if (!is_constant(type)) return optional<unsigned>();
    for (pair<name, unsigned> const & p : *g_builtin_scalar_size) {
        if (const_name(type) == p.first) {
            return optional<unsigned>(p.second);
        }
    }
    return optional<unsigned>();
}

unsigned get_llnf_arity(environment const & env, name const & n) {
    /* First, try to infer arity from `_cstage2` auxiliary definition. */
    name c = mk_cstage2_name(n);
    optional<constant_info> info = env.find(c);
    if (info && info->is_definition()) {
        return get_num_nested_lambdas(info->get_value());
    }
    optional<unsigned> arity = get_extern_constant_arity(env, n);
    if (!arity) throw exception(sstream() << "code generation failed, unknown '" << n << "'");
    return *arity;
}

static void get_borrowed_info(environment const & env, name const & n, buffer<bool> & borrowed_args, bool & borrowed_res) {
    if (get_extern_borrowed_info(env, n, borrowed_args, borrowed_res))
        return; /* `n` is an extern/native function declaration. */
    if (get_inferred_borrowed_info(env, n, borrowed_args, borrowed_res))
        return;
    /* We currently do not support borrowed annotations in user declarations. */
    unsigned arity = get_llnf_arity(env, n);
    borrowed_args.clear();
    borrowed_args.resize(arity, false);
    borrowed_res = false;
}

static bool uses_borrowed(environment const & env, name const & n) {
    buffer<bool> borrowed_args; bool borrowed_res;
    get_borrowed_info(env, n, borrowed_args, borrowed_res);
    for (bool b : borrowed_args) {
        if (b) return true;
    }
    return borrowed_res;
}

static optional<unsigned> is_enum_type(environment const & env, expr const & type) {
    expr const & I = get_app_fn(type);
    if (!is_constant(I)) return optional<unsigned>();
    return is_enum_type(env, const_name(I));
}

static void get_cnstr_info_core(type_checker::state & st, bool unboxed, name const & n, buffer<field_info> & result) {
    environment const & env = st.env();
    constant_info info      = env.get(n);
    lean_assert(info.is_constructor());
    constructor_val val = info.to_constructor_val();
    expr type           = info.get_type();
    name I_name         = val.get_induct();
    unsigned nparams    = val.get_nparams();
    local_ctx lctx;
    buffer<expr> telescope;
    unsigned next_object = 0;
    unsigned next_usize  = 0;
    unsigned next_offset = 0;
    to_telescope(env, lctx, st.ngen(), type, telescope);
    lean_assert(telescope.size() >= nparams);
    for (unsigned i = nparams; i < telescope.size(); i++) {
        expr ftype = lctx.get_type(telescope[i]);
        if (is_irrelevant_type(st, lctx, ftype)) {
            result.push_back(field_info::mk_irrelevant());
        } else if (unboxed) {
            type_checker tc(st, lctx);
            ftype = tc.whnf(ftype);
            if (is_usize_type(ftype)) {
                result.push_back(field_info::mk_usize(next_usize));
                next_usize++;
            } else if (optional<unsigned> sz = is_builtin_scalar(ftype)) {
                result.push_back(field_info::mk_scalar(*sz, next_offset, ftype));
                next_offset += *sz;
            } else if (optional<unsigned> sz = is_enum_type(env, ftype)) {
                optional<expr> uint = to_uint_type(*sz);
                if (!uint) throw exception("code generation failed, enumeration type is too big");
                result.push_back(field_info::mk_scalar(*sz, next_offset, *uint));
                next_offset += *sz;
            } else {
                result.push_back(field_info::mk_object(next_object));
                next_object++;
            }
        } else {
            result.push_back(field_info::mk_object(next_object));
            next_object++;
        }
    }
    unsigned nobjs     = next_object;
    unsigned nusizes   = next_usize;
    if (unboxed) {
        /* Remark:
           - usize fields are stored after object fields.
           - regular scalar fields are stored after object and usize fields */
        for (field_info & info : result) {
            switch (info.m_kind) {
            case field_info::Scalar:
                info.m_offset += (nobjs + nusizes) * sizeof(void*);
                break;
            case field_info::USize:
                info.m_offset += nobjs * sizeof(void*);
                break;
            default:
                break;
            }
        }
    }
}

static cnstr_info get_cnstr_info(type_checker::state & st, bool unboxed, name const & n) {
    buffer<field_info> finfos;
    get_cnstr_info_core(st, unboxed, n, finfos);
    unsigned cidx      = get_constructor_idx(st.env(), n);
    return cnstr_info(cidx, to_list(finfos));
}

class to_llnf_fn {
    typedef name_hash_set name_set;
    typedef name_hash_map<cnstr_info> cnstr_info_cache;
    typedef name_hash_map<optional<unsigned>> enum_cache;
    type_checker::state   m_st;
    bool                  m_unboxed;
    local_ctx             m_lctx;
    buffer<expr>          m_fvars;
    name                  m_x;
    name                  m_j;
    unsigned              m_next_idx{1};
    unsigned              m_next_jp_idx{1};
    cnstr_info_cache      m_cnstr_info_cache;

    environment const & env() const { return m_st.env(); }

    name_generator & ngen() { return m_st.ngen(); }

    optional<unsigned> is_enum_type(expr const & type) {
        return ::lean::is_enum_type(env(), type);
    }

    unsigned get_arity(name const & n) const {
        return ::lean::get_llnf_arity(env(), n);
    }

    expr mk_llnf_app(expr const & fn, buffer<expr> const & args) {
        lean_assert(is_fvar(fn) || is_constant(fn));
        if (is_fvar(fn)) {
            local_decl d = m_lctx.get_local_decl(fn);
            if (is_join_point_name(d.get_user_name())) {
                return mk_app(mk_app(mk_llnf_jmp(), fn), args);
            } else {
                return mk_app(mk_app(mk_llnf_apply(), fn), args);
            }
        } else {
            lean_assert(is_constant(fn));
            if (is_enf_neutral(fn)) {
                return mk_enf_neutral();
            } else if (is_enf_unreachable(fn)) {
                return mk_enf_unreachable();
            } else {
                unsigned arity = get_arity(const_name(fn));
                if (args.size() == arity) {
                    return mk_app(fn, args);
                } else if (args.size() < arity) {
                    /* Under application: create closure. */
                    return mk_app(mk_app(mk_llnf_closure(), fn), args);
                } else {
                    /* Over application. */
                    lean_assert(args.size() > arity);
                    expr new_fn = m_lctx.mk_local_decl(ngen(), next_name(), mk_enf_object_type(), mk_app(fn, arity, args.data()));
                    m_fvars.push_back(new_fn);
                    return mk_app(mk_app(mk_llnf_apply(), new_fn), args.size() - arity, args.data() + arity);
                }
            }
        }
    }

    cnstr_info get_cnstr_info(name const & n) {
        auto it = m_cnstr_info_cache.find(n);
        if (it != m_cnstr_info_cache.end())
            return it->second;
        cnstr_info r = ::lean::get_cnstr_info(m_st, m_unboxed, n);
        m_cnstr_info_cache.insert(mk_pair(n, r));
        return r;
    }

    name next_name() {
        name r = m_x.append_after(m_next_idx);
        m_next_idx++;
        return r;
    }

    name next_jp_name() {
        name r = m_j.append_after(m_next_jp_idx);
        m_next_jp_idx++;
        return mk_join_point_name(r);
    }

    expr mk_let(unsigned saved_fvars_size, expr r) {
        lean_assert(saved_fvars_size <= m_fvars.size());
        if (saved_fvars_size == m_fvars.size())
            return r;
        buffer<expr> used;
        name_hash_set used_fvars;
        collect_used(r, used_fvars);
        while (m_fvars.size() > saved_fvars_size) {
            expr x = m_fvars.back();
            m_fvars.pop_back();
            if (used_fvars.find(fvar_name(x)) == used_fvars.end()) {
                continue;
            }
            local_decl x_decl = m_lctx.get_local_decl(x);
            expr val          = *x_decl.get_value();
            collect_used(val,  used_fvars);
            used.push_back(x);
        }
        std::reverse(used.begin(), used.end());
        return m_lctx.mk_lambda(used, r);
    }

    expr visit_let(expr e) {
        buffer<expr> fvars;
        while (is_let(e)) {
            lean_assert(!has_loose_bvars(let_type(e)));
            expr new_val = visit(instantiate_rev(let_value(e), fvars.size(), fvars.data()));
            name n       = let_name(e);
            if (is_internal_name(n)) {
                if (is_join_point_name(n))
                    n = next_jp_name();
                else
                    n = next_name();
            }
            expr new_fvar = m_lctx.mk_local_decl(ngen(), n, let_type(e), new_val);
            fvars.push_back(new_fvar);
            m_fvars.push_back(new_fvar);
            e = let_body(e);
        }
        return visit(instantiate_rev(e, fvars.size(), fvars.data()));
    }

    expr visit_lambda(expr e) {
        buffer<expr> binding_fvars;
        while (is_lambda(e)) {
            lean_assert(!has_loose_bvars(binding_domain(e)));
            expr new_fvar = m_lctx.mk_local_decl(ngen(), next_name(), binding_domain(e), binding_info(e));
            binding_fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        e = instantiate_rev(e, binding_fvars.size(), binding_fvars.data());
        unsigned saved_fvars_size = m_fvars.size();
        expr r = mk_let(saved_fvars_size, visit(e));
        lean_assert(!is_lambda(r));
        return m_lctx.mk_lambda(binding_fvars, r);
    }

    expr mk_let_decl(expr const & type, expr const & e) {
        expr fvar = m_lctx.mk_local_decl(ngen(), next_name(), type, e);
        m_fvars.push_back(fvar);
        return fvar;
    }

    expr mk_sproj(expr const & major, unsigned size, unsigned num, unsigned offset) {
        return mk_app(mk_llnf_sproj(size, num, offset), major);
    }

    expr mk_uproj(expr const & major, unsigned idx) {
        return mk_app(mk_llnf_uproj(idx), major);
    }

    expr mk_sset(expr const & major, unsigned size, unsigned num, unsigned offset, expr const & v) {
        return mk_app(mk_llnf_sset(size, num, offset), major, v);
    }

    expr mk_uset(expr const & major, unsigned idx, expr const & v) {
        return mk_app(mk_llnf_uset(idx), major, v);
    }

    expr visit_cases(expr const & e) {
        buffer<expr> args;
        expr const & fn = get_app_args(e, args);
        lean_assert(is_constant(fn));
        name const & I_name = const_name(fn).get_prefix();
        if (is_inductive_predicate(env(), I_name))
            throw exception(sstream() << "code generation failed, inductive predicate '" << I_name << "' is not supported");
        buffer<name> cnames;
        get_constructor_names(env(), I_name, cnames);
        lean_assert(args.size() == cnames.size() + 1);
        /* Process major premise */
        expr major = visit(args[0]);
        args[0]    = major;
        expr reachable_case;
        unsigned num_reachable = 0;
        expr some_reachable;
        /* We use `is_id` to track whether this "cases_on"-application is of the form
           ```
           C.cases_on major (fun ..., _cnstr.0.0) ... (fun ..., _cnstr.(n-1).0)
           ```
           This kind of application reduces to `major`. This optimization is useful
           for code such as:
           ```
           @decidable.cases_on t _cnstr.0.0 _cnstr.1.0
           ```
           which reduces to `t`.

           TODO(Leo): extend `is_id` when there multiple nested cases_on applications.
           Example:
           ```
           @prod.cases_on _x_1 (λ fst snd,
             @except.cases_on fst
               (λ a, let _x_2 := except.error ◾ ◾ a in (_x_2, snd))
               (λ a, let _x_3 := except.ok ◾ ◾ a in (_x_3, snd)))
           ```
        */
        bool is_id  = true;
        // bool all_eq = true;
        /* Process minor premises */
        for (unsigned i = 0; i < cnames.size(); i++) {
            unsigned saved_fvars_size = m_fvars.size();
            expr minor           = args[i+1];
            cnstr_info cinfo     = get_cnstr_info(cnames[i]);
            unsigned next_idx    = 0;
            unsigned next_usize  = 0;
            unsigned next_offset = 0;
            buffer<expr> fields;
            for (field_info const & info : cinfo.m_field_info) {
                lean_assert(is_lambda(minor));
                switch (info.m_kind) {
                case field_info::Irrelevant:
                    fields.push_back(mk_enf_neutral());
                    break;
                case field_info::Object:
                    fields.push_back(mk_let_decl(mk_enf_object_type(), mk_app(mk_llnf_proj(next_idx), major)));
                    next_idx++;
                    break;
                case field_info::USize:
                    fields.push_back(mk_let_decl(info.get_type(), mk_uproj(major, (cinfo.m_num_objs + next_usize))));
                    next_usize++;
                    break;
                case field_info::Scalar:
                    fields.push_back(mk_let_decl(info.get_type(), mk_sproj(major, info.m_size, (cinfo.m_num_objs + cinfo.m_num_usizes), next_offset)));
                    next_offset += info.m_size;
                    break;
                }
                minor = binding_body(minor);
            }
            minor     = instantiate_rev(minor, fields.size(), fields.data());
            minor     = visit(minor);
            if (!is_enf_unreachable(minor)) {
                /* If `minor` is not the constructor `i`, then this "cases_on" application is not the identity. */
                unsigned cidx, nusizes, ssz;
                if (!(is_llnf_cnstr(minor, cidx, nusizes, ssz) && cidx == i && nusizes == 0 && ssz == 0)) {
                    is_id = false;
                }
                minor          = mk_let(saved_fvars_size, minor);
#if 0 // See comment below
                if (num_reachable > 0 && minor != some_reachable) {
                    all_eq = false;
                }
#endif
                some_reachable = minor;
                args[i+1]      = minor;
                num_reachable++;
            } else {
                args[i+1]      = minor;
            }
        }
        if (num_reachable == 0) {
            return mk_enf_unreachable();
        } else if (is_id) {
            return major;
        /*
          We remove 1-reachable cases-expressions and all_eq reachable later.
          Reason: `insert_reset_reuse_fn` uses `cases_on` applications retrieve constructor layouts.
        */
#if 0
        } else if (num_reachable == 1) {
            return some_reachable;
        } else if (all_eq) {
            expr r = some_reachable;
            /* Flat `r` if it is a let-declaration */
            buffer<expr> fvars;
            while (is_let(r)) {
                expr val  = instantiate_rev(let_value(r), fvars.size(), fvars.data());
                expr fvar = m_lctx.mk_local_decl(ngen(), let_name(r), let_type(r), val);
                fvars.push_back(fvar);
                m_fvars.push_back(fvar);
                r = let_body(r);
            }
            return instantiate_rev(r, fvars.size(), fvars.data());
#endif
        } else {
            return mk_app(fn, args);
        }
    }

    expr visit_constructor(expr const & e) {
        buffer<expr> args;
        expr const & k = get_app_args(e, args);
        lean_assert(is_constant(k));
        if (is_extern_constant(env(), const_name(k)))
            return visit_app_default(e);
        constructor_val k_val  = env().get(const_name(k)).to_constructor_val();
        cnstr_info k_info      = get_cnstr_info(const_name(k));
        unsigned nparams       = k_val.get_nparams();
        unsigned cidx          = k_info.m_cidx;
        name const & I         = const_name(k).get_prefix();
        if (optional<unsigned> r = ::lean::is_enum_type(env(), I)) {
            /* We use a literal for enumeration types. */
            expr x = mk_let_decl(*to_uint_type(*r), mk_lit(literal(nat(cidx))));
            return x;
        }
        buffer<expr> obj_args;
        unsigned j             = nparams;
        for (field_info const & info : k_info.m_field_info) {
            if (info.m_kind != field_info::Irrelevant)
                args[j] = visit(args[j]);

            if (info.m_kind == field_info::Object) {
                obj_args.push_back(args[j]);
            }
            j++;
        }
        expr r = mk_app(mk_llnf_cnstr(I, cidx, k_info.m_num_usizes, k_info.m_scalar_sz), obj_args);
        j = nparams;
        unsigned offset = 0;
        unsigned uidx   = 0;
        bool first      = true;
        for (field_info const & info : k_info.m_field_info) {
            switch (info.m_kind) {
            case field_info::Scalar:
                if (first) {
                    r = mk_let_decl(mk_enf_object_type(), r);
                }
                r = mk_let_decl(mk_enf_object_type(), mk_sset(r, info.m_size, (k_info.m_num_objs + k_info.m_num_usizes), offset, args[j]));
                offset += info.m_size;
                first = false;
                break;
            case field_info::USize:
                if (first) {
                    r = mk_let_decl(mk_enf_object_type(), r);
                }
                r = mk_let_decl(mk_enf_object_type(), mk_uset(r, k_info.m_num_objs + uidx, args[j]));
                uidx++;
                first = false;
                break;

            default:
                break;
            }
            j++;
        }
        return r;
    }

    expr visit_proj(expr const & e) {
        name S_name = proj_sname(e);
        inductive_val S_val = env().get(S_name).to_inductive_val();
        lean_assert(S_val.get_ncnstrs() == 1);
        name k_name = head(S_val.get_cnstrs());
        cnstr_info k_info = get_cnstr_info(k_name);
        unsigned idx      = 0;
        unsigned offset   = 0;
        unsigned uidx     = 0;
        unsigned i        = 0;
        for (field_info const & info : k_info.m_field_info) {
            switch (info.m_kind) {
            case field_info::Irrelevant:
                if (proj_idx(e) == i)
                    return mk_enf_neutral();
                break;
            case field_info::Object:
                if (proj_idx(e) == i)
                    return mk_app(mk_llnf_proj(idx), visit(proj_expr(e)));
                idx++;
                break;
            case field_info::USize:
                if (proj_idx(e) == i)
                    return mk_app(mk_llnf_uproj(k_info.m_num_objs + uidx), visit(proj_expr(e)));
                uidx++;
                break;
            case field_info::Scalar:
                if (proj_idx(e) == i)
                    return mk_sproj(visit(proj_expr(e)), info.m_size, (k_info.m_num_objs + k_info.m_num_usizes), offset);
                offset += info.m_size;
                break;
            }
            i++;
        }
        lean_unreachable();
    }

    expr visit_constant(expr const & e) {
        if (is_constructor(env(), const_name(e))) {
            return visit_constructor(e);
        } else if (is_enf_neutral(e) || is_enf_unreachable(e) || is_llnf_op(e)) {
            return e;
        } else {
            unsigned arity = get_arity(const_name(e));
            if (arity == 0) {
                return e;
            } else {
                return mk_app(mk_llnf_closure(), e);
            }
        }
    }

    expr visit_app_default(expr const & e) {
        buffer<expr> args;
        expr const & fn = get_app_args(e, args);
        for (expr & arg : args)
            arg = visit(arg);
        return mk_llnf_app(fn, args);
    }

    expr visit_app(expr const & e) {
        expr const & fn = get_app_fn(e);
        if (is_cases_on_app(env(), e)) {
            return visit_cases(e);
        } else if (is_constructor_app(env(), e)) {
            return visit_constructor(e);
        } else if (is_llnf_op(fn)) {
            return e;
        } else {
            return visit_app_default(e);
        }
    }

    expr visit(expr const & e) {
        switch (e.kind()) {
        case expr_kind::App:    return visit_app(e);
        case expr_kind::Lambda: return visit_lambda(e);
        case expr_kind::Let:    return visit_let(e);
        case expr_kind::Proj:   return visit_proj(e);
        case expr_kind::Const:  return visit_constant(e);
        default:                return e;
        }
    }

public:
    to_llnf_fn(environment const & env, bool unboxed):
        m_st(env), m_unboxed(unboxed), m_x("_x"), m_j("j") {
    }

    expr operator()(expr const & e) {
        expr r = visit(e);
        return mk_let(0, r);
    }
};

/* Push projections inside `cases_on` branches. */
class push_proj_fn {
    environment    m_env;
    name_generator m_ngen;
    local_ctx      m_lctx;

    expr visit_app(expr const & e) {
        if (is_cases_on_app(m_env, e)) {
            buffer<expr> args;
            expr const & c = get_app_args(e, args);
            lean_assert(is_constant(c));
            for (unsigned i = 1; i < args.size(); i++) {
                args[i] = visit(args[i]);
            }
            return mk_app(c, args);
        } else {
            return e;
        }
    }

    expr visit_lambda(expr e) {
        lean_assert(is_lambda(e));
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> fvars;
        while (is_lambda(e)) {
            /* Types are ignored in compilation steps. So, we do not invoke visit for d. */
            expr new_fvar = m_lctx.mk_local_decl(m_ngen, binding_name(e), binding_domain(e));
            fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        expr new_body      = visit(instantiate_rev(e, fvars.size(), fvars.data()));
        return m_lctx.mk_lambda(fvars, new_body);
    }

    /* Return true iff all `ss[i]` contains `n` */
    static bool all_contains(unsigned sz, name_hash_set const * ss, name const & n) {
        for (unsigned i = 0; i < sz; i++) {
            if (ss[i].find(n) != ss[i].end())
                return false;
        }
        return true;
    }

    /* Tries to push projections in fvars into body branches when it is a cases_on */
    void push_fvars(buffer<expr> & fvars, expr & body) {
        if (!is_cases_on_app(m_env, body))
            return;
        buffer<expr> cases_args;
        expr const & cases_fn = get_app_args(body, cases_args);
        buffer<name_hash_set> minor_used_vars;
        minor_used_vars.resize(cases_args.size());
        for (unsigned i = 1; i < cases_args.size(); i++) {
            collect_used(cases_args[i], minor_used_vars[i]);
        }
        buffer<expr> new_fvars;
        name_hash_set new_fvars_used_fvars;
        expr const & major = cases_args[0];
        new_fvars_used_fvars.insert(fvar_name(major));
        bool copied_non_proj = false; /* true if we copied a non-projection to new_fvars */
        unsigned i = fvars.size();
        while (i > 0) {
            --i;
            expr x              = fvars[i];
            name const & x_name = fvar_name(x);
            local_decl x_decl   = m_lctx.get_local_decl(x);
            expr x_val          = *x_decl.get_value();
            expr const & x_op   = get_app_fn(x_val);
            if (is_llnf_proj(x_op)) {
                if (new_fvars_used_fvars.find(x_name) == new_fvars_used_fvars.end() &&
                    !copied_non_proj &&
                    !all_contains(minor_used_vars.size() - 1, minor_used_vars.data() + 1, x_name)) {
                    /* found projection that is worth moving to cases it depends on */
                    for (unsigned i = 1; i < cases_args.size(); i++) {
                        if (minor_used_vars[i].find(x_name) != minor_used_vars[i].end()) {
                            cases_args[i] = m_lctx.mk_lambda(x, cases_args[i]);
                            collect_used(x_val, minor_used_vars[i]);
                        }
                    }
                } else {
                    new_fvars.push_back(x);
                    collect_used(x_val, new_fvars_used_fvars);
                }
            } else {
                /* TODO(Leo): check whether pushing over non projections may be really bad or not */
                if (!is_llnf_sproj(x_op) && !is_llnf_uproj(x_op)) {
                    lean_assert(!is_llnf_proj(x_op));
                    copied_non_proj = true;
                }
                new_fvars.push_back(x);
                collect_used(x_val, new_fvars_used_fvars);
            }
        }
        /* Update body and fvars */
        body = mk_app(cases_fn, cases_args);
        std::reverse(new_fvars.begin(), new_fvars.end());
        fvars.clear();
        fvars.append(new_fvars);
    }

    expr visit_let(expr e) {
        lean_assert(is_let(e));
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> fvars;
        while (is_let(e)) {
            expr val      = visit(instantiate_rev(let_value(e), fvars.size(), fvars.data()));
            expr new_fvar = m_lctx.mk_local_decl(m_ngen, let_name(e), let_type(e), val);
            fvars.push_back(new_fvar);
            e = let_body(e);
        }
        expr new_body = instantiate_rev(e, fvars.size(), fvars.data());
        push_fvars(fvars, new_body);
        new_body = visit(new_body);
        return m_lctx.mk_lambda(fvars, new_body);
    }

    expr visit(expr const & e) {
        switch (e.kind()) {
        case expr_kind::Lambda: return visit_lambda(e);
        case expr_kind::App:    return visit_app(e);
        case expr_kind::Let:    return visit_let(e);
        default:                return e;
        }
    }

public:
    push_proj_fn(environment const & env):m_env(env) {}
    expr operator()(expr const & e) {
        return visit(e);
    }
};

class insert_reset_reuse_fn {
    type_checker::state m_st;
    bool                m_unboxed;
    local_ctx           m_lctx;
    name                m_r{"_r"};
    unsigned            m_next_idx{1};

    struct opt_ctx {
        name       I;
        cnstr_info cinfo;
        expr       x;
    };

    struct replace_ctx {
        name       I;
        cnstr_info cinfo;
        expr       x;
        expr       reset_x;
        replace_ctx(opt_ctx const & octx, expr const & rx):
            I(octx.I), cinfo(octx.cinfo), x(octx.x), reset_x(rx) {}
    };

    environment const & env() { return m_st.env(); }
    name_generator & ngen() { return m_st.ngen(); }

    expr replace_cnstr(replace_ctx const & rctx, expr const & e) {
        buffer<expr> args;
        expr const & c = get_app_args(e, args);
        name I; unsigned cidx; unsigned nusizes; unsigned ssz;
        lean_verify(is_llnf_cnstr(c, I, cidx, nusizes, ssz));
        if (I != rctx.I) {
            /* Heuristic: we don't want to reuse cells from different types even when they are compatible
               because it produces counterintuitive behavior. Here is an example:
               ```
               @list.cases_on a
                 (@prod.cases_on a_1 (λ fst snd, (punit.star, snd)))
                     (λ a_hd a_tl,
                         @prod.cases_on a_1
                           (λ fst snd,
                              let _x_1 := nat.add snd a_hd,
                                  _x_2 := (punit.star, _x_1)
                              in list.mmap'._main._at.accum._spec_1 a_tl _x_2))
               ```
               Without this heuristic, we will try to construct `(punit.star, _x_1)` re-using `a` instead of `a_1`. */
            return e;
        }
        if (args.size() != rctx.cinfo.m_num_objs ||
            nusizes  != rctx.cinfo.m_num_usizes ||
            ssz != rctx.cinfo.m_scalar_sz) {
            /* This constructor is not compatible with major premise */
            return e;
        }
        expr r = mk_app(mk_llnf_reuse(cidx, nusizes, ssz, cidx != rctx.cinfo.m_cidx), rctx.reset_x);
        return mk_app(r, args);
    }

    expr replace_app(replace_ctx const & rctx, expr const & e) {
        if (is_llnf_cnstr(get_app_fn(e))) {
            return replace_cnstr(rctx, e);
        } else if (is_cases_on_app(env(), e)) {
            buffer<expr> args;
            expr const & fn   = get_app_args(e, args);
            bool modified     = false;
            for (unsigned i = 1; i < args.size(); i++) {
                expr new_arg = replace(rctx, args[i]);
                if (new_arg != args[i]) {
                    modified = true;
                    args[i] = new_arg;
                }
            }
            return modified ? mk_app(fn, args) : e;
        } else {
            return e;
        }
    }

    expr replace_let(replace_ctx const & rctx, expr const & e) {
        expr new_value = replace(rctx, let_value(e));
        if (new_value != let_value(e)) {
            return update_let(e, let_type(e), new_value, let_body(e));
        } else {
            expr new_body  = replace(rctx, let_body(e));
            return update_let(e, let_type(e), new_value, new_body);
        }
    }

    expr replace_lambda(replace_ctx const & rctx, expr const & e) {
        expr new_body = replace(rctx, binding_body(e));
        return update_binding(e, binding_domain(e), new_body);
    }

    expr replace(replace_ctx const & rctx, expr const & e) {
        switch (e.kind()) {
        case expr_kind::App:    return replace_app(rctx, e);
        case expr_kind::Let:    return replace_let(rctx, e);
        case expr_kind::Lambda: return replace_lambda(rctx, e);
        default:                return e;
        }
    }

    name next_reset_name() {
        name r(m_r, m_next_idx);
        m_next_idx++;
        return r;
    }

    expr replace(opt_ctx const & octx, expr const & e) {
        expr reset_x = mk_fvar(ngen().next());
        replace_ctx rctx(octx, reset_x);
        expr new_e   = replace(rctx, e);
        if (e == new_e) return e;
        expr reset = mk_app(mk_llnf_reset(octx.cinfo.m_num_objs), octx.x);
        return ::lean::mk_let(next_reset_name(), mk_enf_object_type(), reset, abstract(new_e, reset_x));
    }

    bool is_cnstr_using_major(opt_ctx const & octx, expr const & e) {
        return is_llnf_cnstr(get_app_fn(e)) && has_fvar(e, octx.x);
    }

    expr opt_let(opt_ctx const & octx, expr const & e0) {
        expr e = e0;
        lean_assert(is_let(e));
        lean_assert(has_fvar(e, octx.x));
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> fvars;
        while (is_let(e)) {
            expr val      = instantiate_rev(let_value(e), fvars.size(), fvars.data());
            if (is_cnstr_using_major(octx, val)) {
                /* If the major premise (the one that is providing memory) is being
                   stored in a constructor, then reuse will probably not work.
                   It could work if the new cell is consumed. */
                return e0;
            }
            expr new_fvar = m_lctx.mk_local_decl(ngen(), let_name(e), let_type(e), val);
            fvars.push_back(new_fvar);
            if (has_fvar(let_value(e), octx.x) && !has_fvar(let_body(e), octx.x)) {
                expr new_body = instantiate_rev(let_body(e), fvars.size(), fvars.data());
                new_body = replace(octx, new_body);
                return m_lctx.mk_lambda(fvars, new_body);
            }
            e = let_body(e);
        }
        lean_assert(has_fvar(e, octx.x));
        expr new_body = opt(octx, instantiate_rev(e, fvars.size(), fvars.data()));
        return m_lctx.mk_lambda(fvars, new_body);
    }

    expr opt_cases(opt_ctx const & octx, expr const & e) {
        buffer<expr> args;
        expr const & fn = get_app_args(e, args);
        bool modified   = false;
        for (unsigned i = 1; i < args.size(); i++) {
            expr arg     = args[i];
            expr new_arg = opt(octx, arg);
            if (arg != new_arg) {
                modified = true;
                args[i] = new_arg;
            }
        }
        return modified ? mk_app(fn, args) : e;
    }

    expr opt(opt_ctx const & octx, expr const & e) {
        if (!has_fvar(e, octx.x)) {
            return replace(octx, e);
        } else if (is_let(e)) {
            return opt_let(octx, e);
        } else if (is_cases_on_app(env(), e)) {
            return opt_cases(octx, e);
        } else {
            return e;
        }
    }

    expr optimize_cases_on(expr const & e) {
        lean_assert(is_cases_on_app(env(), e));
        buffer<expr> cases_args;
        expr const & cases_fn = get_app_args(e, cases_args);
        name const & I_name   = const_name(cases_fn).get_prefix();
        expr const & major    = cases_args[0];
        buffer<name> cnames;
        get_constructor_names(env(), I_name, cnames);
        lean_assert(cases_args.size() == cnames.size() + 1);
        for (unsigned i = 1; i < cases_args.size(); i++) {
            cnstr_info cinfo = get_cnstr_info(m_st, m_unboxed, cnames[i-1]);
            expr minor       = optimize(cases_args[i]);
            minor            = opt(opt_ctx{I_name, cinfo, major}, minor);
            cases_args[i]    = minor;
        }
        return mk_app(cases_fn, cases_args);
    }

    expr optimize_app(expr const & e) {
        if (is_cases_on_app(env(), e))
            return optimize_cases_on(e);
        else
            return e;
    }

    expr optimize_lambda(expr e) {
        lean_assert(is_lambda(e));
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> fvars;
        while (is_lambda(e)) {
            /* Types are ignored in compilation steps. So, we do not invoke visit for d. */
            expr new_fvar = m_lctx.mk_local_decl(ngen(), binding_name(e), binding_domain(e));
            fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        expr new_body      = optimize(instantiate_rev(e, fvars.size(), fvars.data()));
        return m_lctx.mk_lambda(fvars, new_body);
    }

    expr optimize_let(expr e) {
        lean_assert(is_let(e));
        flet<local_ctx> save_lctx(m_lctx, m_lctx);
        buffer<expr> fvars;
        while (is_let(e)) {
            expr val      = optimize(instantiate_rev(let_value(e), fvars.size(), fvars.data()));
            expr new_fvar = m_lctx.mk_local_decl(ngen(), let_name(e), let_type(e), val);
            fvars.push_back(new_fvar);
            e = let_body(e);
        }
        expr new_body = optimize(instantiate_rev(e, fvars.size(), fvars.data()));
        return m_lctx.mk_lambda(fvars, new_body);
    }

    expr optimize(expr const & e) {
        switch (e.kind()) {
        case expr_kind::Lambda: return optimize_lambda(e);
        case expr_kind::App:    return optimize_app(e);
        case expr_kind::Let:    return optimize_let(e);
        default:                return e;
        }
    }

public:
    insert_reset_reuse_fn(environment const & env, bool unboxed):
        m_st(env), m_unboxed(unboxed) {}

    expr operator()(expr const & e) {
        return optimize(e);
    }
};

expr simp_cases(environment const & env, expr const & e) {
    switch (e.kind()) {
    case expr_kind::Lambda: {
        expr new_body = simp_cases(env, binding_body(e));
        return update_binding(e, binding_domain(e), new_body);
    }
    case expr_kind::Let: {
        expr new_value = simp_cases(env, let_value(e));
        expr new_body  = simp_cases(env, let_body(e));
        return update_let(e, let_type(e), new_value, new_body);
    }
    case expr_kind::App:
        if (is_cases_on_app(env, e)) {
            buffer<expr> args;
            expr const & fn = get_app_args(e, args);
            bool all_eq = true;
            unsigned num_reachable = 0;
            expr some_reachable;
            for (unsigned i = 1; i < args.size(); i++) {
                expr minor = simp_cases(env, args[i]);
                if (!is_enf_unreachable(minor)) {
                    if (num_reachable > 0 && minor != some_reachable) {
                        all_eq = false;
                    }
                    some_reachable = minor;
                    args[i]        = minor;
                    num_reachable++;
                } else {
                    args[i]      = minor;
                }
            }
            if (num_reachable == 1) {
                return some_reachable;
            } else if (all_eq) {
                return some_reachable;
            } else {
                return mk_app(fn, args);
            }
        } else {
            return e;
        }
    default:
        return e;
    }
}

expr get_constant_ll_type(environment const & env, name const & c) {
    if (optional<expr> type = get_extern_constant_ll_type(env, c)) {
        return *type;
    } else {
        return env.get(mk_cstage2_name(c)).get_type();
    }
}

/* usize     => some 0
   uint8     => some 1
   uint16    => some 2
   uint32    => some 4
   uint64    => some 8
   otherwise => none */
static optional<unsigned> get_type_size(expr const & type) {
    if (is_usize_type(type)) {
        /* Recall that we use 0 to denote the size of type `usize`.
           See comment at `mk_llnf_box` above. */
        return optional<unsigned>(0);
    } else if (optional<unsigned> r = is_builtin_scalar(type)) {
        return r;
    } else {
        return optional<unsigned>();
    }
}

static name mk_boxed_name(name const & fn) {
    return name(fn, "_boxed");
}

static bool has_unboxed(expr const & type) {
    if (is_pi(type)) {
        return is_llnf_unboxed_type(binding_domain(type)) || has_unboxed(binding_body(type));
    } else {
        return is_llnf_unboxed_type(type);
    }
}

optional<pair<environment, comp_decl>> mk_boxed_version(environment env, name const & fn, unsigned arity) {
    expr fn_type = get_constant_ll_type(env, fn);
    if (!has_unboxed(fn_type) && !is_extern_constant(env, fn) && !uses_borrowed(env, fn)) {
        return optional<pair<environment, comp_decl>>();
    }
    local_ctx lctx;
    expr obj = mk_enf_object_type();
    expr neutral = mk_enf_neutral_type();
    name_generator ngen;
    buffer<expr> args;
    buffer<expr> ys; /* args */
    buffer<expr> xs; /* auxiliary let decls */
    name _y("_y");
    name _x("_x");
    unsigned i = 1, j = 1;
    for (unsigned k = 0; k < arity; k++) {
        lean_assert(is_pi(fn_type));
        expr expected_type = binding_domain(fn_type);
        expr y = lctx.mk_local_decl(ngen, _y.append_after(i), obj);
        i++;
        ys.push_back(y);
        if (expected_type == obj || expected_type == neutral) {
            args.push_back(y);
        } else {
            unsigned n = *get_type_size(expected_type);
            expr x = lctx.mk_local_decl(ngen, _x.append_after(j), expected_type, mk_app(mk_llnf_unbox(n), y));
            j++;
            xs.push_back(x);
            args.push_back(x);
        }
        fn_type = binding_body(fn_type);
    }
    name new_fn(fn, "_boxed");
    expr x = lctx.mk_local_decl(ngen, _x.append_after(j), fn_type, mk_app(mk_constant(fn), args));
    j++;
    xs.push_back(x);
    expr new_val = x;
    if (is_llnf_unboxed_type(fn_type)) {
        expr x = lctx.mk_local_decl(ngen, _x.append_after(j), obj, mk_app(mk_llnf_box(*get_type_size(fn_type)), new_val));
        j++;
        xs.push_back(x);
        new_val = x;
    }
    if (!is_fvar(new_val)) {
        /* Terminal must be a variable, jmp or cases. */
        expr x = lctx.mk_local_decl(ngen, _x.append_after(j), obj, new_val);
        j++;
        xs.push_back(x);
        new_val = x;
    }
    /* The auxiliary _boxed versions use "owned" semantics.
       So, we should add _dec for borrowed arguments, and _inc for borrowed result. */
    buffer<bool> borrowed_args; bool borrowed_res;
    get_borrowed_info(env, fn, borrowed_args, borrowed_res);
    for (unsigned i = 0; i < arity; i++) {
        expr arg_type = lctx.get_local_decl(args[i]).get_type();
        if (!is_llnf_unboxed_type(arg_type) && borrowed_args[i]) {
            expr dec = lctx.mk_local_decl(ngen, "_", mk_llnf_void_type(), mk_app(mk_llnf_dec(), args[i]));
            xs.push_back(dec);
        }
    }
    if (borrowed_res && is_llnf_unboxed_type(fn_type)) {
        expr inc = lctx.mk_local_decl(ngen, "_", mk_llnf_void_type(), mk_app(mk_llnf_inc(), new_val));
        xs.push_back(inc);
    }
    new_val       = lctx.mk_lambda(xs, new_val);
    new_val       = lctx.mk_lambda(ys, new_val);
    expr new_type = lctx.mk_pi(ys, obj);
    env           = register_stage2_decl(env, new_fn, new_type, new_val);
    return optional<pair<environment, comp_decl>>(mk_pair(env, comp_decl(new_fn, new_val)));
}

/* Insert explicit boxing/unboxing instructions. */
class explicit_boxing_fn {
    environment         m_env;
    name_generator      m_ngen;
    local_ctx           m_lctx;
    buffer<expr>        m_fvars;
    name                m_x;
    unsigned            m_next_idx{1};
    expr                m_result_type;
    optional<unsigned>  m_result_type_size;

    environment const & env() const { return m_env; }

    name_generator & ngen() { return m_ngen; }

    expr find(expr const & e) const {
        if (is_fvar(e)) {
            if (optional<local_decl> decl = m_lctx.find_local_decl(e)) {
                if (optional<expr> v = decl->get_value()) {
                    if (!is_join_point_name(decl->get_user_name()))
                        return find(*v);
                }
            }
        } else if (is_mdata(e)) {
            return find(mdata_expr(e));
        }
        return e;
    }

    expr get_constant_type(name const & c) {
        return get_constant_ll_type(env(), c);
    }

    /* Initialize `m_result_type` and `m_result_type_size` */
    void init_result_type(name const & d_name) {
        expr type = get_constant_type(d_name);
        while (is_pi(type))
            type = binding_body(type);
        lean_assert(is_constant(type));
        m_result_type      = type;
        m_result_type_size = get_type_size(type);
    }

    name next_name() {
        name r = m_x.append_after(m_next_idx);
        m_next_idx++;
        return r;
    }

    expr mk_let_decl(expr const & type, expr const & e) {
        lean_assert(!is_fvar(e));
        expr fvar = m_lctx.mk_local_decl(ngen(), next_name(), type, e);
        m_fvars.push_back(fvar);
        return fvar;
    }

    expr mk_let(unsigned saved_fvars_size, expr r) {
        lean_assert(saved_fvars_size <= m_fvars.size());
        if (saved_fvars_size == m_fvars.size())
            return r;
        r = m_lctx.mk_lambda(m_fvars.size() - saved_fvars_size, m_fvars.data() + saved_fvars_size, r);
        m_fvars.shrink(saved_fvars_size);
        return r;
    }

    expr infer_jp_type(expr v) {
        if (is_lambda(v)) {
            return mk_arrow(binding_domain(v), infer_jp_type(binding_body(v)));
        } else {
            return m_result_type;
        }
    }

    expr visit_let(expr e) {
        buffer<expr> fvars;
        while (is_let(e)) {
            lean_assert(!has_loose_bvars(let_type(e)));
            expr type    = let_type(e);
            expr val     = instantiate_rev(let_value(e), fvars.size(), fvars.data());
            name n       = let_name(e);
            if (is_internal_name(n)) {
                if (is_join_point_name(n)) {
                    type = infer_jp_type(val);
                } else {
                    n    = next_name();
                }
            }
            val = visit(val, type);
            expr new_fvar = m_lctx.mk_local_decl(ngen(), n, type, val);
            fvars.push_back(new_fvar);
            m_fvars.push_back(new_fvar);
            e = let_body(e);
        }
        return visit(instantiate_rev(e, fvars.size(), fvars.data()), m_result_type);
    }

    expr visit_lambda(expr e) {
        buffer<expr> binding_fvars;
        while (is_lambda(e)) {
            lean_assert(!has_loose_bvars(binding_domain(e)));
            expr new_fvar = m_lctx.mk_local_decl(ngen(), next_name(), binding_domain(e), binding_info(e));
            binding_fvars.push_back(new_fvar);
            e = binding_body(e);
        }
        e = instantiate_rev(e, binding_fvars.size(), binding_fvars.data());
        unsigned saved_fvars_size = m_fvars.size();
        expr r = mk_let(saved_fvars_size, visit(e, m_result_type));
        lean_assert(!is_lambda(r));
        return m_lctx.mk_lambda(binding_fvars, r);
    }

    expr get_arg_type(expr const & e) {
        lean_assert(is_fvar(e));
        return m_lctx.get_local_decl(e).get_type();
    }

    expr mk_box(unsigned n, expr const & e, bool is_arg) {
        expr v = find(e);
        if (is_app(v) && is_llnf_unbox(app_fn(v))) {
            return app_arg(v);
        } else {
            expr r = mk_app(mk_llnf_box(n), e);
            return is_arg ? mk_let_decl(mk_enf_object_type(), r) : r;
        }
    }

    expr mk_unbox(unsigned n, expr const & e, bool is_arg) {
        expr v = find(e);
        unsigned m;
        if (is_app(v) && is_llnf_box(app_fn(v), m) && n == m) {
            return app_arg(v);
        } else {
            expr r = mk_app(mk_llnf_unbox(n), e);
            return is_arg ? mk_let_decl(*to_uint_type(n), r) : r;
        }
    }

    expr unbox_arg_if_needed(expr const & e, unsigned n) {
        lean_assert(!is_enf_neutral(e));
        lean_assert(is_fvar(e));
        expr type = get_arg_type(e);
        if (is_enf_object_type(type)) {
            return mk_unbox(n, e, true);
        } else {
            return e;
        }
    }

    expr box_arg_if_needed(expr const & e) {
        if (is_enf_neutral(e)) {
            return e;
        } else {
            lean_assert(is_fvar(e));
            expr type = get_arg_type(e);
            if (is_enf_object_type(type) || is_pi(type)) {
                return e;
            } else if (is_usize_type(type)) {
                return mk_box(0, e, true);
            } else {
                optional<unsigned> r = is_builtin_scalar(type);
                lean_assert(r);
                return mk_box(*r, e, true);
            }
        }
    }

    expr visit_cases(expr const & fn, buffer<expr> & args) {
        lean_assert(is_constant(fn));
        name const & c = const_name(fn);
        lean_assert(is_cases_on_recursor(env(), c));
        name const & I = c.get_prefix();
        optional<unsigned> r = is_enum_type(env(), I);
        if (r) {
            args[0] = unbox_arg_if_needed(args[0], *r);
        }
        for (unsigned i = 1; i < args.size(); i++) {
            unsigned saved_fvars_size = m_fvars.size();
            args[i] = mk_let(saved_fvars_size, visit(args[i], m_result_type));
        }
        return mk_app(fn, args);
    }

    /* Convert function types (e.g., _obj -> _obj) into _obj.
       At runtime, closures behave like `_obj`. */
    expr norm_fun_type(expr const & type) {
        if (is_pi(type))
            return mk_enf_object_type();
        else
            return type;
    }

    expr cast_if_needed(expr e, expr const & e_type, expr const & expected_type, bool is_arg) {
        if (norm_fun_type(e_type) == norm_fun_type(expected_type))
            return e;
        if (!is_fvar(e))
            e = mk_let_decl(e_type, e);
        if (norm_fun_type(expected_type) == mk_enf_object_type()) {
            return mk_box(*get_type_size(e_type), e, is_arg);
        } else {
            lean_assert(e_type == mk_enf_object_type());
            return mk_unbox(*get_type_size(expected_type), e, is_arg);
        }
    }

    expr cast_arg_if_needed(expr const & e, expr const & e_type, expr const & expected_type) {
        return cast_if_needed(e, e_type, expected_type, true);
    }

    expr cast_result_if_needed(expr const & e, expr const & e_type, expr const & expected_type) {
        return cast_if_needed(e, e_type, expected_type, false);
    }

    expr visit_closure(expr const & fn, buffer<expr> & args) {
        lean_assert(is_constant(args[0]));
        name boxed_fn = mk_boxed_name(const_name(args[0]));
        if (env().find(mk_cstage2_name(boxed_fn))) {
            args[0] = mk_constant(boxed_fn);
        } else {
            lean_assert(!has_unboxed(get_constant_ll_type(env(), const_name(args[0]))));
        }
        for (unsigned i = 1; i < args.size(); i++) {
            args[i] = box_arg_if_needed(args[i]);
        }
        return mk_app(fn, args);
    }

    expr visit_apply(expr const & fn, buffer<expr> & args, expr const & expected_type) {
        for (unsigned i = 1; i < args.size(); i++) {
            args[i] = box_arg_if_needed(args[i]);
        }
        expr r = mk_app(fn, args);
        if (norm_fun_type(expected_type) != mk_enf_object_type()) {
            lean_assert(is_app(r));
            r = mk_let_decl(mk_enf_object_type(), r);
            unsigned n = *get_type_size(expected_type);
            r = mk_app(mk_llnf_unbox(n), r);
        }
        return r;
    }

    void box_args_if_needed(buffer<expr> & args) {
        for (expr & arg : args) {
            arg = box_arg_if_needed(arg);
        }
    }

    expr visit_cnstr(expr const & fn, buffer<expr> & args, expr const & expected_type) {
        if (args.size() == 0 && norm_fun_type(expected_type) != mk_enf_object_type()) {
            unsigned cidx = 0;
            unsigned n1, n2;
            is_llnf_cnstr(fn, cidx, n1, n2);
            expr r = mk_let_decl(expected_type, mk_lit(literal(nat(cidx))));
            return r;
        } else {
            box_args_if_needed(args);
            return mk_app(fn, args);
        }
    }

    expr visit_reuse(expr const & fn, buffer<expr> & args) {
        box_args_if_needed(args);
        return mk_app(fn, args);
    }

    expr visit_sset(expr const & fn, buffer<expr> & args) {
        lean_assert(args.size() == 2);
        unsigned sz = 0;
        unsigned d1, d2;
        is_llnf_sset(fn, sz, d1, d2);
        args[1] = cast_arg_if_needed(args[1], get_arg_type(args[1]), *to_uint_type(sz));
        return mk_app(fn, args);
    }

    expr visit_uset(expr const & fn, buffer<expr> & args) {
        lean_assert(args.size() == 2);
        args[1] = cast_arg_if_needed(args[1], get_arg_type(args[1]), *g_usize);
        return mk_app(fn, args);
    }

    expr visit_jmp(expr const & fn, buffer<expr> & args) {
        expr jp_type = get_arg_type(args[0]);
        for (unsigned i = 1; i < args.size(); i++) {
            lean_assert(is_fvar(args[i]));
            lean_assert(is_pi(jp_type));
            expr arg_expected_type = binding_domain(jp_type);
            expr arg_type          = get_arg_type(args[i]);
            args[i] = cast_arg_if_needed(args[i], arg_type, arg_expected_type);
            jp_type = binding_body(jp_type);
        }
        return mk_app(fn, args);
    }

    expr visit_app_default(expr const & fn, buffer<expr> & args, expr const & expected_type) {
        expr type = get_constant_type(const_name(fn));
        for (expr & arg : args) {
            if (is_fvar(arg)) {
                expr arg_expected_type = is_pi(type) ? binding_domain(type) : mk_enf_object_type();
                expr arg_type          = get_arg_type(arg);
                arg = cast_arg_if_needed(arg, arg_type, arg_expected_type);
            } else {
                lean_assert(is_enf_neutral(arg));
            }
            if (is_pi(type))
                type = binding_body(type);
        }
        lean_assert(!is_pi(type));
        expr r = mk_app(fn, args);
        return cast_result_if_needed(r, type, expected_type);
    }

    expr visit_app(expr const & e, expr const & expected_type) {
        buffer<expr> args;
        expr const & f = get_app_args(e, args);
        lean_assert(is_constant(f));
        name const & fn = const_name(f);
        if (is_cases_on_recursor(env(), fn)) {
            return visit_cases(f, args);
        } else if (is_llnf_closure(f)) {
            return visit_closure(f, args);
        } else if (is_llnf_apply(f)) {
            return visit_apply(f, args, expected_type);
        } else if (is_llnf_cnstr(f)) {
            return visit_cnstr(f, args, expected_type);
        } else if (is_llnf_reset(f)) {
            return e;
        } else if (is_llnf_reuse(f)) {
            return visit_reuse(f, args);
        } else if (is_llnf_sset(f)) {
            return visit_sset(f, args);
        } else if (is_llnf_uset(f)) {
            return visit_uset(f, args);
        } else if (is_llnf_proj(f)) {
            return e;
        } else if (is_llnf_sproj(f)) {
            return e;
        } else if (is_llnf_uproj(f)) {
            return e;
        } else if (is_llnf_jmp(f)) {
            return visit_jmp(f, args);
        } else if (is_llnf_box(f)) {
            lean_unreachable();
        } else if (is_llnf_unbox(f)) {
            lean_unreachable();
        } else if (is_morally_num_lit(e)) {
            return e;
        } else {
            return visit_app_default(f, args, expected_type);
        }
    }

    expr visit_fvar(expr const & e, expr const & expected_type) {
        expr type = m_lctx.get_local_decl(e).get_type();
        return cast_result_if_needed(e, type, expected_type);
    }

    expr visit_constant(expr const & e, expr const & expected_type) {
        if (!is_llnf_op(e) && !is_enf_unreachable(e) && !is_enf_neutral(e)) {
            expr type = get_constant_type(const_name(e));
            return cast_result_if_needed(e, type, expected_type);
        } else {
            return e;
        }
    }

    expr visit(expr const & e, expr const & expected_type) {
        switch (e.kind()) {
        case expr_kind::App:    return visit_app(e, expected_type);
        case expr_kind::Lambda: return visit_lambda(e);
        case expr_kind::Let:    return visit_let(e);
        case expr_kind::FVar:   return visit_fvar(e, expected_type);
        case expr_kind::Const:  return visit_constant(e, expected_type);
        default:                return e;
        }
    }

public:
    explicit_boxing_fn(environment const & env):
        m_env(env), m_x("_x") {}

    expr operator()(name const & n, expr const & v) {
        init_result_type(n);
        expr new_v = visit(v, m_result_type);
        return mk_let(0, new_v);
    }
};

/* Insert explicit reference counting instructions. */
class explicit_rc_fn {
    environment         m_env;
    name_generator      m_ngen;
    local_ctx           m_lctx;
    buffer<expr>        m_fvars;
    name                m_x;
    unsigned            m_next_idx{1};
    name_set            m_is_borrowed; /* Set of variables marked as borrowed. */
    name_set            m_is_scalar; /* Set of variables of type `_obj` that are known to be a boxed scalar value. */
    name_set            m_is_persistent;

    static bool is_jmp(expr const & e) {
        return is_llnf_jmp(get_app_fn(e));
    }

    environment const & env() const { return m_env; }

    name_generator & ngen() { return m_ngen; }

    expr mk_inc(expr const & fvar) {
        return mk_app(mk_llnf_inc(), fvar);
    }

    expr mk_dec(expr const & fvar) {
        return mk_app(mk_llnf_dec(), fvar);
    }

    expr mk_void_type() {
        return mk_llnf_void_type();
    }

    name next_name() {
        name r = m_x.append_after(m_next_idx);
        m_next_idx++;
        return r;
    }

    bool is_borrowed(name const & fvar) const {
        return m_is_borrowed.contains(fvar);
    }

    bool is_borrowed(expr const & fvar) const {
        return is_borrowed(fvar_name(fvar));
    }

    bool is_boxed_scalar(name const & fvar) const {
        return m_is_scalar.contains(fvar);
    }

    bool is_boxed_scalar(expr const & fvar) const {
        return is_boxed_scalar(fvar_name(fvar));
    }

    bool is_persistent(name const & fvar) const {
        return m_is_persistent.contains(fvar);
    }

    bool is_persistent(expr const & fvar) const {
        return is_persistent(fvar_name(fvar));
    }

    void collect_live_vars_core(expr e, name_set & visited_jp, name_set & r) {
        while (is_lambda(e)) {
            e = binding_body(e);
        }
        while (is_let(e)) {
            collect_live_vars_core(let_value(e), visited_jp, r);
            e = let_body(e);
        }
        if (is_fvar(e)) {
            r.insert(fvar_name(e));
        } else if (is_app(e)) {
            buffer<expr> args;
            expr const & fn = get_app_args(e, args);
            if (is_llnf_jmp(fn)) {
                /* If args[0] is a bound variable, then it is an internal join point that has already been processed by
                   the `collect_live_vars_core` in the `while (is_let(e)) ...` loop.
                   If args[0] is a free variable, then we must include its live variables. */
                lean_assert(is_bvar(args[0]) || is_fvar(args[0]));
                if (is_fvar(args[0]) && !visited_jp.contains(fvar_name(args[0]))) {
                    visited_jp.insert(fvar_name(args[0]));
                    local_decl jp_decl = m_lctx.get_local_decl(fvar_name(args[0]));
                    collect_live_vars_core(*jp_decl.get_value(), visited_jp, r);
                }
                for (unsigned i = 1; i < args.size(); i++) {
                    collect_live_vars_core(args[i], visited_jp, r);
                }
            } else {
                for (unsigned i = 0; i < args.size(); i++) {
                    collect_live_vars_core(args[i], visited_jp, r);
                }
            }
        }
    }

    void collect_live_vars(expr const & e, name_set & r) {
        name_set visited_jp;
        collect_live_vars_core(e, visited_jp, r);
    }

    void collect_rhs_live_vars(expr const & e, name_set & r) {
        lean_assert(is_app(e) || is_constant(e) || is_lit(e));
        buffer<expr> args;
        get_app_args(e, args);
        for (expr const & arg : args) {
            if (is_fvar(arg))
                r.insert(fvar_name(arg));
        }
    }

    expr get_value_of(expr const & x) const {
        lean_assert(is_fvar(x));
        return *m_lctx.get_local_decl(x).get_value();
    }

    expr get_type_of(expr const & x) const {
        lean_assert(is_fvar(x));
        return m_lctx.get_local_decl(x).get_type();
    }

    /* Return true iff `e` is a fvar, `e in live_obj_vars` and type of `e` is a scalar (aka unboxed). */
    bool is_dead_obj_var(expr const & e, name_set const & live_obj_vars) {
        if (!is_fvar(e)) return false;
        if (live_obj_vars.contains(fvar_name(e))) return false;
        expr type = get_type_of(e);
        return !is_llnf_unboxed_type(type);
    }

    /* Return true iff for all `j in [0, i)`, `args[j] != x` */
    static bool is_first_occur(expr x, unsigned i, buffer<expr> const & args) {
        for (unsigned j = 0; j < i; j++) {
            if (x == args[j]) return false;
        }
        return true;
    }

    /* Return `n` the number of occurrences of `x` in `f_args` that are consumed.
       We say `x` occurs at position `i` if `f_args[i] == x` and `f_borrowed_args[i]`. */
    static unsigned get_num_consumptions(expr const & x, buffer<expr> const & f_args, buffer<bool> const & f_borrowed_args) {
        lean_assert(f_args.size() == f_borrowed_args.size());
        unsigned r = 0;
        for (unsigned i = 0; i < f_args.size(); i++) {
            if (x == f_args[i] && !f_borrowed_args[i])
                r++;
        }
        return r;
    }

    /* Return true iff there is an `i` such that `f_args[i] == x` and `f_borrowed_args[i]` */
    static bool is_borrowed_arg(expr const & x, buffer<expr> const & f_args, buffer<bool> const & f_borrowed_args) {
        lean_assert(f_args.size() == f_borrowed_args.size());
        for (unsigned i = 0; i < f_args.size(); i++) {
            if (x == f_args[i] && f_borrowed_args[i])
                return true;
        }
        return false;
    }

    void add_dec(expr const & x, buffer<expr_pair> & entries) {
        expr val      = mk_dec(x);
        expr aux_fvar = m_lctx.mk_local_decl(ngen(), "_", mk_void_type(), val);
        entries.emplace_back(aux_fvar, val);
    }

    void add_inc(expr const & x, buffer<expr_pair> & entries) {
        expr val      = mk_inc(x);
        expr aux_fvar = m_lctx.mk_local_decl(ngen(), "_", mk_void_type(), val);
        entries.emplace_back(aux_fvar, val);
    }

    void add_inc(expr const & x, unsigned n, buffer<expr_pair> & entries) {
        lean_assert(n > 0);
        for (unsigned i = 0; i < n; i++)
            add_inc(x, entries);
    }

    /* Return the number of RC increments needed for `arg`.
       `args` are the arguments of a function application or LLNF instruction.
       `borrowed_args` is a bitmask that specifies whether `args[i]` is consumed or not by the function/instruction.
       We have that `arg` is in `args`.
       `live_obj_vars` is a set of variables that is alive after the function application/instruction. */
    unsigned get_num_incs(expr const & arg, buffer<expr> const & args, buffer<bool> const & borrowed_args, name_set const & live_obj_vars) {
        lean_assert(args.size() == borrowed_args.size());
        unsigned n = get_num_consumptions(arg, args, borrowed_args);
        if (n > 0) { /* arg is consumed by f at least once */
            if (is_borrowed(arg) ||                       /* arg is marked as borrowed, that is, it does not need to be consumed */
                live_obj_vars.contains(fvar_name(arg)) || /* arg is alive after application */
                is_borrowed_arg(arg, args, borrowed_args)) { /* arg is also borrowed by f */
                /* We must add n increments */
                return n;
            } else {
                /* We must add n-1 increments */
                return n-1;
            }
        }
        return 0;
    }

    /* `x` is fvar from a let-declaration of the form `x := f a_1 ... a_n` where `f` is a function name or a LLNF instruction.
       This method updates entries with
       - `dec a_k` instructions for each argument that is dead but was not consumed by f for sure.
       - The entry `x := f a_1 ... a_n`
       - `inc a_k` instructions to make sure `a_k` will remain alive for as long it is needed.

       Remark: recall that the entries in `entries` are in reverse order. That is, we are creating a block of code of the form
       ```
             y_1 : void := inc a_k_1
             ...
             y_s : void := inc a_k_s
             x := f a_1 ... a_n
             z_1 : void := dec a_j_1
             ...
             z_r : void := dec a_j_r
       ```
       - `first_arg_idx` is the idx of the first argument to be processed. It allows us to skip a prefix of the arguments.
          We use this feature to implement instructions such as `closure`.
       - `f_borrowed_args` is a bitmask that specifies whether argument `a_i` is borrowed or consumed by `f`.
       - `live_obj_vars` is the set of variables alive after `x := f a_1 ... a_n`.
    */
    void process_app_core(expr const & x, unsigned first_arg_idx, buffer<bool> const & f_borrowed_args,
                          buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        buffer<expr> args;
        get_app_args(val, args);
        lean_assert(args.size() == f_borrowed_args.size());
        buffer<pair<expr, unsigned>> incs; /* increments to be added */
        for (unsigned i = first_arg_idx; i < args.size(); i++) {
            expr const & arg = args[i];
            if (is_fvar(arg) &&
                !is_llnf_unboxed_type(get_type_of(arg)) &&      /* it is not a unboxed/scalar value */
                !is_persistent(arg) &&
                !is_boxed_scalar(arg) &&              /* it is not known to be a scalar here */
                is_first_occur(arg, i, args)) {
                unsigned n = get_num_incs(arg, args, f_borrowed_args, live_obj_vars);
                if (n > 0) {
                    incs.emplace_back(arg, n);
                }
                /* Check if we need to add a decrement. */
                if (!is_borrowed(arg) &&                            /* arg is not marked as borrowed */
                    !live_obj_vars.contains(fvar_name(arg)) &&      /* arg is not live after the f-application */
                    is_borrowed_arg(arg, args, f_borrowed_args)) {  /* arg has been borrowed by f */
                    /* We must add 1 decrement. */
                    add_dec(arg, entries);
                }
            }
        }
        entries.emplace_back(x, val);
        for (pair<expr, unsigned> const & inc_info : incs) {
            lean_assert(inc_info.second > 0);
            add_inc(inc_info.first, inc_info.second, entries);
        }
    }

    /* Process a function application `x := f a_1 ... a_n`. See `process_app_core`.
       It invokes `process_app_core` using the bitmask associated with the function `f`. */
    void process_app_default(expr const & x, buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        lean_assert(is_app(val));
        expr f   = get_app_fn(val);
        lean_assert(is_constant(f));
        lean_assert(!is_llnf_op(f));
        buffer<bool> f_borrowed_args;
        bool f_borrowed_res;
        get_borrowed_info(m_env, const_name(f), f_borrowed_args, f_borrowed_res);
        process_app_core(x, 0, f_borrowed_args, entries, live_obj_vars);
    }

    /* Process `x := f a_1 ... a_n` assuming all arguments `a_i` are consumed.
       See `process_app_core`. */
    void process_app_all_consumed(expr const & x, unsigned first_arg_idx, buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        lean_assert(is_app(val));
        unsigned num_args = get_app_num_args(val);
        buffer<bool> borrowed_args;
        borrowed_args.resize(num_args, false);
        process_app_core(x, first_arg_idx, borrowed_args, entries, live_obj_vars);
    }

    /* Process `x := f a_1 ... a_n` assuming all arguments `a_i` are borrowed.
       See `process_app_core`. */
    void process_app_all_borrowed(expr const & x, buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        lean_assert(is_app(val));
        unsigned num_args = get_app_num_args(val);
        buffer<bool> borrowed_args;
        borrowed_args.resize(num_args, true);
        process_app_core(x, 0, borrowed_args, entries, live_obj_vars);
    }

    void process_proj(expr const & x, buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        lean_assert(is_app(val) && is_llnf_proj(app_fn(val)));
        expr arg = app_arg(val);
        if (!is_borrowed(arg) &&                         /* arg is not marked as borrowed */
            !live_obj_vars.contains(fvar_name(arg))) {   /* arg is not live after projection */
            /* We must add decrement. */
            add_dec(arg, entries);
        }
        if (!is_borrowed(x))
            add_inc(x, entries);
        entries.emplace_back(x, val);
        lean_assert(is_fvar(arg));
    }

    void process(expr const & x, buffer<expr_pair> & entries, name_set const & live_obj_vars) {
        expr val = get_value_of(x);
        lean_assert(!is_cases_on_app(env(), val));
        if (is_lit(val)) {
            entries.emplace_back(x, val);
        } else if (is_constant(val)) {
            entries.emplace_back(x, val);
        } else if (is_app(val)) {
            buffer<expr> args;
            expr const & fn = get_app_args(val, args);
            lean_assert(is_constant(fn));
            if (is_llnf_cnstr(fn) || is_llnf_apply(fn)) {
                process_app_all_consumed(x, 0, entries, live_obj_vars);
            } else if (is_llnf_closure(fn)) {
                /* Ignore the first argument, and process remaining arguments as arguments that must be consumed */
                process_app_all_consumed(x, 1, entries, live_obj_vars);
            } else if (is_llnf_reuse(fn) || is_llnf_reset(fn) || is_llnf_sset(fn) || is_llnf_uset(fn)) {
                process_app_all_consumed(x, 0, entries, live_obj_vars);
            } else if (is_llnf_proj(fn)) {
                process_proj(x, entries, live_obj_vars);
            } else if (is_llnf_sproj(fn) || is_llnf_uproj(fn)) {
                process_app_all_borrowed(x, entries, live_obj_vars);
            } else if (is_llnf_unbox(fn)) {
                process_app_all_borrowed(x, entries, live_obj_vars);
            } else if (is_llnf_box(fn)) {
                entries.emplace_back(x, val);
            } else {
                /* Regular function application.
                   Retrieve whether the arguments must be borrowed/consumed, and process them. */
                lean_assert(!is_llnf_op(fn));
                process_app_default(x, entries, live_obj_vars);
            }
        } else {
            lean_assert(!is_fvar(val));
            lean_unreachable();
        }
    }

    /* Add RC increments for the `jmp` instruction arguments.
       Recall that `jmp` is similar to a regular a function application. The main difference is that it is a terminal,
       and we assume all arguments must be consumed. */
    void add_incs_for_jmp_args(expr const & e, buffer<expr_pair> & entries) {
        lean_assert(is_app(e));
        buffer<bool> borrowed_args;
        buffer<expr> args;
        get_app_args(e, args);
        /* Remark: we assume that all joint point arguments are consumed. */
        borrowed_args.resize(args.size(), false);
        for (unsigned i = 0; i < args.size(); i++) {
            expr const & arg = args[i];
            if (is_fvar(arg) &&
                !is_llnf_unboxed_type(get_type_of(arg)) && /* it is not a unboxed/scalar value */
                !is_persistent(arg) &&
                !is_boxed_scalar(arg) &&
                is_first_occur(arg, i, args)) {
                unsigned n = get_num_incs(arg, args, borrowed_args, name_set());
                if (n > 0) {
                    add_inc(arg, entries);
                }
            }
        }
    }

    bool is_0ary_constructor(name const & cname) {
        constant_info info  = env().get(cname);
        lean_assert(info.is_constructor());
        constructor_val val = info.to_constructor_val();
        expr type           = info.get_type();
        unsigned nparams    = val.get_nparams();
        type_checker::state st(env());
        local_ctx lctx;
        buffer<expr> telescope;
        to_telescope(env(), lctx, ngen(), type, telescope);
        lean_assert(telescope.size() >= nparams);
        for (unsigned i = nparams; i < telescope.size(); i++) {
            expr ftype = lctx.get_type(telescope[i]);
            if (!is_irrelevant_type(st, lctx, ftype)) {
                return false;
            }
        }
        return true;
    }

    expr process_cases(expr const & e) {
        name_set cases_live_vars;
        collect_live_vars(e, cases_live_vars);
        buffer<expr> args;
        expr const & fn     = get_app_args(e, args);
        expr const & major  = args[0];
        lean_assert(is_fvar(major));
        name const & I_name = const_name(fn).get_prefix();
        buffer<name> cnames;
        get_constructor_names(env(), I_name, cnames);
        lean_assert(cnames.size() == args.size() - 1);
        for (unsigned i = 1; i < args.size(); i++) {
            flet<name_set> save_is_scalar(m_is_scalar, m_is_scalar);
            if (is_0ary_constructor(cnames[i-1])) {
                m_is_scalar.insert(fvar_name(major));
            }
            expr arg = args[i]; /* A "case/branch" of the `cases_on` term. */
            name_set arg_live_vars;
            collect_live_vars(arg, arg_live_vars);
            unsigned saved_fvars_size = m_fvars.size();
            arg = visit(arg);
            if (!is_let(arg))
                arg = ensure_terminal(arg);
            arg = mk_let(saved_fvars_size, arg);
            /* We must decrement (non-borrowed) variables that are live at `cases_live_vars`, but are not live at `arg_live_vars`. */
            cases_live_vars.for_each([&](name const & x_name) {
                    if (!arg_live_vars.contains(x_name) &&
                        !is_persistent(x_name) &&
                        !is_boxed_scalar(x_name) &&
                        !is_borrowed(x_name)) {
                        local_decl x_decl = m_lctx.get_local_decl(x_name);
                        if (!is_llnf_unboxed_type(x_decl.get_type())) {
                            expr x = x_decl.mk_ref();
                            arg    = ::lean::mk_let("_", mk_void_type(), mk_dec(x), arg);
                        }
                    }
                });
            args[i] = arg;
        }
        return mk_app(fn, args);
    }

    bool is_obj(expr const & x) {
        lean_assert(is_fvar(x));
        return is_enf_object_type(m_lctx.get_local_decl(x).get_type());
    }

    /* Process a terminal: cases, jmp or variable */
    expr process_terminal(expr const & e, buffer<expr_pair> & entries) {
        if (is_cases_on_app(env(), e)) {
            return process_cases(e);
        } else if (is_jmp(e)) {
            add_incs_for_jmp_args(e, entries);
            return e;
        } else if (is_fvar(e)) {
            /* If it is marked as borrowed, we should insert `inc`. */
            if (is_borrowed(e) && is_obj(e) &&
                !is_persistent(e) &&
                !is_boxed_scalar(e)) {
                add_inc(e, entries);
            }
            return e;
        } else {
            /* See visit_let */
            lean_unreachable();
        }
    }

    expr mk_let(buffer<expr> const & input_vars, unsigned saved_fvars_size, expr r) {
        /* `entries` contains pairs (let-decl fvar, new value) for building the resultant let-declaration.
           We simplify the value of some let-declarations in this method, but we don't want to create
           a new temporary declaration just for this. */
        buffer<expr_pair> entries;
        r = process_terminal(r, entries);
        name_set live_obj_vars;
        collect_live_vars(r, live_obj_vars);
        while (m_fvars.size() > saved_fvars_size) {
            expr x = m_fvars.back();
            m_fvars.pop_back();
            local_decl x_decl = m_lctx.get_local_decl(x);
            if (!is_join_point_name(x_decl.get_user_name())) {
                process(x, entries, live_obj_vars);
                collect_rhs_live_vars(*x_decl.get_value(), live_obj_vars);
                live_obj_vars.erase(fvar_name(x));
            } else {
                expr jp_val = visit_jp_lambda(*x_decl.get_value());
                entries.emplace_back(x, jp_val);
            }
        }
        /* We need to add a `dec` instruction for each input variable that is dead at the beginning
           of the let-block, and is not a scalar. */
        for (expr const & input_var : input_vars) {
            if (!is_borrowed(input_var) &&
                is_dead_obj_var(input_var, live_obj_vars)) {
                add_dec(input_var, entries);
            }
        }
        buffer<name> user_names;
        buffer<expr> fvars;
        buffer<expr> vals;
        buffer<expr> types;
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
        r = abstract(r, fvars.size(), fvars.data());
        i = fvars.size();
        while (i > 0) {
            --i;
            expr new_value = abstract(vals[i], i, fvars.data());
            expr new_type  = types[i];
            r = ::lean::mk_let(user_names[i], new_type, new_value, r);
        }
        return r;
    }

    expr mk_let(unsigned saved_fvars_size, expr r) {
        buffer<expr> input_vars;
        return mk_let(input_vars, saved_fvars_size, r);
    }

    expr visit_lambda(expr e, buffer<bool> const & borrowed) {
        buffer<expr> binding_fvars;
        unsigned i = 0;
        while (is_lambda(e)) {
            lean_assert(!has_loose_bvars(binding_domain(e)));
            expr new_fvar = m_lctx.mk_local_decl(ngen(), next_name(), binding_domain(e), binding_info(e));
            lean_assert(i < borrowed.size());
            if (borrowed[i])
                m_is_borrowed.insert(fvar_name(new_fvar));
            binding_fvars.push_back(new_fvar);
            e = binding_body(e);
            i++;
        }
        e = instantiate_rev(e, binding_fvars.size(), binding_fvars.data());
        unsigned saved_fvars_size = m_fvars.size();
        if (!is_let(e))
            e = ensure_terminal(e);
        e = visit(e);
        e = mk_let(binding_fvars, saved_fvars_size, e);
        e = m_lctx.mk_lambda(binding_fvars, e);
        return e;
    }

    expr visit_jp_lambda(expr const & e) {
        /* For the "root" lambda we retrieve the borrowed annotations from the declaration.
           For join point lambdas, we assume all arguments are not marked as borrowed. */
        unsigned n = get_num_nested_lambdas(e);
        buffer<bool> borrowed;
        borrowed.resize(n, false);
        return visit_lambda(e, borrowed);
    }

    bool should_mark_as_borrowed(expr const & val) {
        if (is_lit(val)) {
            return false;
        } else if (is_constant(val)) {
            return false;
        } else if (is_app(val)) {
            buffer<expr> args;
            expr const & fn = get_app_args(val, args);
            lean_assert(is_constant(fn));
            if (is_llnf_proj(fn)) {
                return is_borrowed(args.back());
            } else if (is_llnf_op(fn)) {
                return false;
            } else {
                /* Regular function application.
                   Retrieve whether the arguments must be borrowed/consumed, and process them. */
                buffer<bool> borrowed_args;
                bool borrowed_res;
                get_borrowed_info(m_env, const_name(fn), borrowed_args, borrowed_res);
                return borrowed_res;
            }
        } else if (is_lambda(val)) {
            /* It is a join point */
            return false;
        } else {
            /* is_fvar(val) is unreachable. See: visit_let. */
            lean_unreachable();
        }
    }

    /* Return true iff `e` is one of the forms:
       1- `_cnstr.<cidx>.0.0`, or
       2- `_neutral`, or
       3- small nat */
    static bool is_boxed_scalar(expr const & e_type, expr const & e) {
        unsigned cidx, nusizes, ssz;
        return
            (is_llnf_cnstr(e, cidx, nusizes, ssz) && nusizes == 0 && ssz == 0) ||
            is_enf_neutral(e) ||
            (is_enf_object_type(e_type) && is_lit(e) && lit_value(e).kind() == literal_kind::Nat &&
             lit_value(e).get_nat() <= LEAN_MAX_SMALL_NAT);
    }

    expr mk_fvar(name const & n, expr const & type, expr const & val) {
        expr new_fvar = m_lctx.mk_local_decl(ngen(), n, type, val);
        m_fvars.push_back(new_fvar);
        unsigned nbytes = 0;
        /* If val is _unbox.nbytes(x), then x is a boxed scalar value if nbytes is small. */
        if (is_llnf_unbox(get_app_fn(val), nbytes) && (nbytes < sizeof(void*))) {
            expr x = app_arg(val);
            m_is_scalar.insert(fvar_name(x));
        }
        if (should_mark_as_borrowed(val)) {
            m_is_borrowed.insert(fvar_name(new_fvar));
        }
        if (is_boxed_scalar(type, val)) {
            m_is_scalar.insert(fvar_name(new_fvar));
        }
        if (is_constant(val) && !is_llnf_cnstr(val)) {
            m_is_persistent.insert(fvar_name(new_fvar));
        }
        return new_fvar;
    }

    /* Make sure `e` is a cases, jmp or fvar */
    expr ensure_terminal(expr const & e) {
        if (!is_cases_on_app(env(), e) && !is_jmp(e) && !is_fvar(e)) {
            /* ensure that `e` is a cases, jmp or fvar */
            expr type     = ll_infer_type(m_env, m_lctx, e);
            return mk_fvar("_res", type, e);
        } else {
            return e;
        }
    }

    expr visit_let(expr e) {
        buffer<expr> fvars;
        while (is_let(e)) {
            lean_assert(!has_loose_bvars(let_type(e)));
            expr val = instantiate_rev(let_value(e), fvars.size(), fvars.data());
            if (is_fvar(val)) {
                /* Make sure we don't have declarations of the form `x_i := x_j`. */
                fvars.push_back(val);
            } else {
                name n   = let_name(e);
                if (is_internal_name(n) && !is_join_point_name(n)) {
                    n = next_name();
                }
                expr type     = let_type(e);
                expr new_fvar = mk_fvar(n, type, val);
                fvars.push_back(new_fvar);
            }
            e = let_body(e);
        }
        e = instantiate_rev(e, fvars.size(), fvars.data());
        e = ensure_terminal(e);
        return visit(e);
    }

    expr visit(expr const & e) {
        switch (e.kind()) {
        case expr_kind::Let:    return visit_let(e);
        default:                return e;
        }
    }

public:
    explicit_rc_fn(environment const & env):
        m_env(env), m_x("_x") {}

    expr operator()(name const & n, expr e) {
        buffer<bool> borrowed_args;
        bool borrowed_res;
        get_borrowed_info(m_env, n, borrowed_args, borrowed_res);
        if (is_lambda(e)) {
            return visit_lambda(e, borrowed_args);
        } else {
            if (!is_let(e))
                e = ensure_terminal(e);
            expr r = visit(e);
            return mk_let(0, r);
        }
    }
};

pair<environment, comp_decls> to_llnf(environment const & env, comp_decls const & ds, bool unboxed) {
    environment new_env = env;
    buffer<comp_decl> rs;
    buffer<comp_decl> bs;
    for (comp_decl const & d : ds) {
        expr new_v = to_llnf_fn(new_env, unboxed)(d.snd());
        new_v      = push_proj_fn(new_env)(new_v);
#ifndef LEAN_NO_REUSE
        new_v      = insert_reset_reuse_fn(new_env, unboxed)(new_v);
#endif
        new_v      = simp_cases(new_env, new_v);
        rs.push_back(comp_decl(d.fst(), new_v));
    }
    if (unboxed) {
#ifndef LEAN_NO_BORROW_INFER
        new_env = infer_borrowed_annotations(new_env, rs);
#endif
        for (comp_decl const & r : rs) {
            if (optional<pair<environment, comp_decl>> p = mk_boxed_version(new_env, r.fst(), get_num_nested_lambdas(r.snd()))) {
                new_env = p->first;
                bs.push_back(p->second);
            }
        }
        for (comp_decl & r : rs) {
            expr new_code = explicit_boxing_fn(new_env)(r.fst(), r.snd());
            new_code = ecse(new_env, new_code);
            new_code = elim_dead_let(new_code);
            new_code = explicit_rc_fn(new_env)(r.fst(), new_code);
            r = comp_decl(r.fst(), new_code);
        }
    }
    comp_decls _rs(rs);
    comp_decls _bs(bs);
    return mk_pair(new_env, append(_rs, _bs));
}

void initialize_llnf() {
    g_usize     = new expr(mk_constant(get_usize_name()));
    g_apply     = new expr(mk_constant("_apply"));
    g_closure   = new expr(mk_constant("_closure"));
    g_reuse     = new name("_reuse");
    g_reset     = new name("_reset");
    g_sset      = new name("_sset");
    g_uset      = new name("_uset");
    g_proj      = new name("_proj");
    g_sproj     = new name("_sproj");
    g_uproj     = new name("_uproj");
    g_jmp       = new expr(mk_constant("_jmp"));
    g_box       = new name("_box");
    g_unbox     = new name("_unbox");
    g_inc       = new expr(mk_constant("_inc"));
    g_dec       = new expr(mk_constant("_dec"));
    g_builtin_scalar_size = new std::vector<pair<name, unsigned>>();
    g_builtin_scalar_size->emplace_back(get_uint8_name(),  1);
    g_builtin_scalar_size->emplace_back(get_uint16_name(), 2);
    g_builtin_scalar_size->emplace_back(get_uint32_name(), 4);
    g_builtin_scalar_size->emplace_back(get_uint64_name(), 8);
}

void finalize_llnf() {
    delete g_usize;
    delete g_closure;
    delete g_apply;
    delete g_reuse;
    delete g_reset;
    delete g_sset;
    delete g_proj;
    delete g_sproj;
    delete g_uset;
    delete g_uproj;
    delete g_jmp;
    delete g_box;
    delete g_unbox;
    delete g_inc;
    delete g_dec;
}
}
