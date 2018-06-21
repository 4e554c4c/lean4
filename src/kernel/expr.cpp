/*
Copyright (c) 2013-2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
        Soonho Kong
*/
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <limits>
#include "util/list_fn.h"
#include "util/hash.h"
#include "util/buffer.h"
#include "kernel/expr.h"
#include "kernel/expr_eq_fn.h"
#include "kernel/expr_sets.h"
#include "kernel/for_each_fn.h"
#include "kernel/replace_fn.h"
#include "kernel/abstract.h"
#include "kernel/instantiate.h"

#ifndef LEAN_INITIAL_EXPR_CACHE_CAPACITY
#define LEAN_INITIAL_EXPR_CACHE_CAPACITY 1024*16
#endif

namespace lean {
/* Expression literal values */
literal::literal(char const * v):
    object_ref(mk_cnstr(static_cast<unsigned>(literal_kind::String), mk_string(v))) {
}

literal::literal(unsigned v):
    object_ref(mk_cnstr(static_cast<unsigned>(literal_kind::Nat), mk_nat_obj(v))) {
}

literal::literal(mpz const & v):
    object_ref(mk_cnstr(static_cast<unsigned>(literal_kind::Nat), mk_nat_obj(v))) {
}

bool operator==(literal const & a, literal const & b) {
    if (a.kind() != b.kind()) return false;
    switch (a.kind()) {
    case literal_kind::String: return a.get_string() == b.get_string();
    case literal_kind::Nat:    return a.get_nat() == b.get_nat();
    }
    lean_unreachable();
}

bool operator<(literal const & a, literal const & b) {
    if (a.kind() != b.kind()) return static_cast<unsigned>(a.kind()) < static_cast<unsigned>(b.kind());
    switch (a.kind()) {
    case literal_kind::String: return a.get_string() < b.get_string();
    case literal_kind::Nat:    return a.get_nat() < b.get_nat();
    }
    lean_unreachable();
}

static inline unsigned hash(literal const & a) {
    switch (a.kind()) {
    case literal_kind::Nat:    return a.get_nat().hash();
    case literal_kind::String: return hash_str(a.get_string().num_bytes(), a.get_string().data(), 17);
    }
    lean_unreachable();
}

static unsigned hash(levels const & ls) {
    unsigned r = 23;
    for (auto const & l : ls)
        r = hash(hash(l), r);
    return r;
}

std::ostream & operator<<(std::ostream & out, expr_kind const & k) {
    switch (k) {
    case expr_kind::MData:    out << "MData"; break;
    case expr_kind::Proj:     out << "Proj"; break;
    case expr_kind::Lit:      out << "Lit"; break;
    case expr_kind::BVar:     out << "BVar"; break;
    case expr_kind::FVar:     out << "FVar"; break;
    case expr_kind::MVar:     out << "MVar"; break;
    case expr_kind::Sort:     out << "Sort"; break;
    case expr_kind::Constant: out << "Constant"; break;
    case expr_kind::App:      out << "App"; break;
    case expr_kind::Lambda:   out << "Lambda"; break;
    case expr_kind::Pi:       out << "Pi"; break;
    case expr_kind::Let:      out << "Let"; break;
    case expr_kind::Quote:    out << "Quote"; break;
    }
    return out;
}

/* Auxiliary functions for computing scalar data offset into expression objects. */
inline constexpr unsigned num_obj_fields(expr_kind k) {
    return
        k == expr_kind::App     ?  2 :
        k == expr_kind::Const   ?  2 :
        k == expr_kind::FVar    ?  3 : // TODO(Leo): it should be 1 after we remove support for legacy code
        k == expr_kind::Lambda  ?  3 :
        k == expr_kind::Pi      ?  3 :
        k == expr_kind::BVar    ?  1 :
        k == expr_kind::Let     ?  4 :
        k == expr_kind::MVar    ?  3 : // TODO(Leo): it should be 2 after we remove support for legacy code
        k == expr_kind::Sort    ?  1 :
        k == expr_kind::Lit     ?  1 :
        k == expr_kind::MData   ?  2 :
        k == expr_kind::Proj    ?  2 :
        /* k == expr_kind::Quote */ 1;
}

/* Expression scalar data offset. */
inline constexpr unsigned scalar_offset(expr_kind k) { return num_obj_fields(k) * sizeof(object*); }

inline constexpr unsigned binder_info_offset(expr_kind k) {
    // Only for: k == expr_kind::Pi || k == expr_kind::Lambda || k == expr_kind::FVar
    return scalar_offset(k);
}

inline constexpr unsigned hash_offset(expr_kind k) {
    return
        k == expr_kind::FVar   ? scalar_offset(k) + sizeof(unsigned char) : // for binder_info, TODO(Leo): delete after we remove support for legacy code
        k == expr_kind::Lambda ? scalar_offset(k) + sizeof(unsigned char) : // for binder_info
        k == expr_kind::Pi     ? scalar_offset(k) + sizeof(unsigned char) : // for binder_info
        scalar_offset(k);
}

inline constexpr size_t flags_offset(expr_kind k) { return hash_offset(k) + sizeof(unsigned); }
inline constexpr size_t weight_offset(expr_kind k) { return flags_offset(k) + sizeof(unsigned char); }
inline constexpr size_t depth_offset(expr_kind k) { return weight_offset(k) + sizeof(unsigned); }
inline constexpr size_t loose_bvar_range_offset(expr_kind k) { return depth_offset(k) + sizeof(unsigned); }
/* Size for scalar value area for non recursive expression. */
inline constexpr size_t expr_scalar_size(expr_kind k) { return flags_offset(k) + sizeof(unsigned char); }
/* Size for scalar value area for recursive expression. */
inline constexpr size_t rec_expr_scalar_size(expr_kind k) { return loose_bvar_range_offset(k) + sizeof(unsigned); }


/* safe arith functions */
static unsigned safe_add(unsigned w1, unsigned w2) {
    unsigned r = w1 + w2;
    if (r < w1)
        r = std::numeric_limits<unsigned>::max(); // overflow
    return r;
}

static unsigned safe_inc(unsigned w) {
    if (w < std::numeric_limits<unsigned>::max())
        return w+1;
    else
        return w;
}

static unsigned safe_dec(unsigned k) {
    return k == 0 ? 0 : k - 1;
}

#if 1

/* Set expr cached hash code and flags. All expressions contain them.
   We provide the kind `k` to allow the compiler to compute offsets at compilation time. */
template<expr_kind k> void set_scalar(expr const & e, unsigned hash, bool has_expr_mvar, bool has_univ_mvar,
                                      bool has_fvar, bool has_univ_param) {
    lean_assert(e.kind() == k);
    unsigned char d =
        (has_expr_mvar ? 1 : 0) +
        (has_univ_mvar ? 2 : 0) +
        (has_fvar ? 4 : 0) +
        (has_univ_param ? 8 : 0);
    cnstr_set_scalar<unsigned>(e.raw(), hash_offset(k), hash);
    cnstr_set_scalar<unsigned char>(e.raw(), flags_offset(k), d);
}

/* Set expr cached weight, depth and loose bvar range. We only store this information in recursive expr constructors.
   We provide the kind `k` to allow the compiler to compute offsets at compilation time. */
template<expr_kind k> void set_rec_scalar(expr const & e, unsigned weight, unsigned depth, unsigned loose_bvar_range) {
    lean_assert(e.kind() == k);
    cnstr_set_scalar<unsigned>(e.raw(), weight_offset(k), weight);
    cnstr_set_scalar<unsigned>(e.raw(), depth_offset(k), depth);
    cnstr_set_scalar<unsigned>(e.raw(), loose_bvar_range_offset(k), loose_bvar_range);
}

template<expr_kind k> void set_binder_info(expr const & e, binder_info bi) {
    lean_assert(e.kind() == k);
    cnstr_set_scalar<unsigned char>(e.raw(), binder_info_offset(k), static_cast<unsigned char>(bi));
}

unsigned hash(expr const & e) { return cnstr_scalar<unsigned>(e.raw(), hash_offset(e.kind())); }
static inline unsigned char get_flags(expr const & e) { return cnstr_scalar<unsigned char>(e.raw(), flags_offset(e.kind())); }
bool has_expr_mvar(expr const & e) { return (get_flags(e) & 1) != 0; }
bool has_univ_mvar(expr const & e) { return (get_flags(e) & 2) != 0; }
bool has_fvar(expr const & e) { return (get_flags(e) & 4) != 0; }
bool has_univ_param(expr const & e) { return (get_flags(e) & 8) != 0; }

template<expr_kind k> unsigned get_weight_core(expr const & e) { return cnstr_scalar<unsigned>(e.raw(), weight_offset(k)); }

unsigned get_weight(expr const & e) {
    switch (e.kind()) {
    case expr_kind::BVar:  case expr_kind::Const: case expr_kind::Sort:
    case expr_kind::MVar:  case expr_kind::FVar:  case expr_kind::Lit:
    case expr_kind::Quote:
        return 1;
    case expr_kind::Lambda:  return get_weight_core<expr_kind::Lambda>(e);
    case expr_kind::Pi:      return get_weight_core<expr_kind::Pi>(e);
    case expr_kind::App:     return get_weight_core<expr_kind::App>(e);
    case expr_kind::Let:     return get_weight_core<expr_kind::Let>(e);
    case expr_kind::MData:   return get_weight_core<expr_kind::MData>(e);
    case expr_kind::Proj:    return get_weight_core<expr_kind::Proj>(e);
    }
    lean_unreachable(); // LCOV_EXCL_LINE
}

template<expr_kind k> unsigned get_depth_core(expr const & e) { return cnstr_scalar<unsigned>(e.raw(), depth_offset(k)); }

unsigned get_depth(expr const & e) {
    switch (e.kind()) {
    case expr_kind::BVar:  case expr_kind::Const: case expr_kind::Sort:
    case expr_kind::MVar:  case expr_kind::FVar:  case expr_kind::Lit:
    case expr_kind::Quote:
        return 1;
    case expr_kind::Lambda:  return get_depth_core<expr_kind::Lambda>(e);
    case expr_kind::Pi:      return get_depth_core<expr_kind::Pi>(e);
    case expr_kind::App:     return get_depth_core<expr_kind::App>(e);
    case expr_kind::Let:     return get_depth_core<expr_kind::Let>(e);
    case expr_kind::MData:   return get_depth_core<expr_kind::MData>(e);
    case expr_kind::Proj:    return get_depth_core<expr_kind::Proj>(e);
    }
    lean_unreachable(); // LCOV_EXCL_LINE
}

template<expr_kind k> unsigned get_loose_bvar_range_core(expr const & e) { return cnstr_scalar<unsigned>(e.raw(), loose_bvar_range_offset(k)); }

unsigned get_loose_bvar_range(expr const & e) {
    switch (e.kind()) {
    case expr_kind::Const: case expr_kind::Sort:
    case expr_kind::Quote: case expr_kind::Lit:
        return 0;
    case expr_kind::BVar:    {
        nat const & idx = bvar_idx(e);
        return idx.is_small() ? safe_inc(idx.get_small_value()) : std::numeric_limits<unsigned>::max();
    }
    case expr_kind::MVar:    return get_loose_bvar_range_core<expr_kind::MVar>(e);
    case expr_kind::FVar:    return get_loose_bvar_range_core<expr_kind::FVar>(e);
    case expr_kind::Lambda:  return get_loose_bvar_range_core<expr_kind::Lambda>(e);
    case expr_kind::Pi:      return get_loose_bvar_range_core<expr_kind::Pi>(e);
    case expr_kind::App:     return get_loose_bvar_range_core<expr_kind::App>(e);
    case expr_kind::Let:     return get_loose_bvar_range_core<expr_kind::Let>(e);
    case expr_kind::MData:   return get_loose_bvar_range_core<expr_kind::MData>(e);
    case expr_kind::Proj:    return get_loose_bvar_range_core<expr_kind::Proj>(e);
    }
    lean_unreachable(); // LCOV_EXCL_LINE
}

bool is_atomic(expr const & e) {
    switch (e.kind()) {
    case expr_kind::Const: case expr_kind::Sort:
    case expr_kind::BVar:  case expr_kind::Lit:
    case expr_kind::Quote:
        return true;
    case expr_kind::App:   case expr_kind::MVar:
    case expr_kind::FVar:  case expr_kind::Lambda:
    case expr_kind::Pi:    case expr_kind::Let:
    case expr_kind::MData: case expr_kind::Proj:
        return false;
    }
    lean_unreachable(); // LCOV_EXCL_LINE
}

static expr * g_dummy = nullptr;
expr::expr():expr(*g_dummy) {}

// =======================================
// Constructors

expr mk_lit(literal const & l) {
    inc(l.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::Lit), l.raw(), expr_scalar_size(expr_kind::Lit)));
    set_scalar<expr_kind::Lit>(r, hash(l), false, false, false, false);
    return r;
}

expr mk_mdata(kvmap const & m, expr const & e) {
    inc(m.raw()); inc(e.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::MData), m.raw(), e.raw(), rec_expr_scalar_size(expr_kind::MData)));
    unsigned w = safe_inc(get_weight(e));
    unsigned d = get_depth(e) + 1;
    unsigned h = hash(hash(e), hash(w, d));
    set_scalar<expr_kind::MData>(r, h, has_expr_mvar(e), has_univ_mvar(e), has_fvar(e), has_univ_param(e));
    set_rec_scalar<expr_kind::MData>(r, w, d, get_loose_bvar_range(e));
    return r;
}

expr mk_proj(nat const & idx, expr const & e) {
    inc(idx.raw()); inc(e.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::Proj), idx.raw(), e.raw(), rec_expr_scalar_size(expr_kind::Proj)));
    unsigned w    = safe_inc(get_weight(e));
    unsigned d    = get_depth(e) + 1;
    unsigned h    = hash(hash(e), hash(idx.hash(), w));
    set_scalar<expr_kind::Proj>(r, h, has_expr_mvar(e), has_univ_mvar(e), has_fvar(e), has_univ_param(e));
    set_rec_scalar<expr_kind::Proj>(r, w, d, get_loose_bvar_range(e));
    return r;
}

expr mk_bvar(nat const & idx) {
    inc(idx.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::BVar), idx.raw(), expr_scalar_size(expr_kind::BVar)));
    set_scalar<expr_kind::BVar>(r, idx.hash(), false, false, false, false);
    return r;
}

/* Legacy */
expr mk_local(name const & n, name const & pp_n, expr const & t, binder_info bi) {
    inc(n.raw()); inc(pp_n.raw()); inc(t.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::FVar), n.raw(), pp_n.raw(), t.raw(), rec_expr_scalar_size(expr_kind::FVar)));
    set_binder_info<expr_kind::FVar>(r, bi);
    set_scalar<expr_kind::FVar>(r, n.hash(), has_expr_mvar(t), has_univ_mvar(t), true, has_univ_param(t));
    set_rec_scalar<expr_kind::FVar>(r, 1, 1, get_loose_bvar_range(t));
    return r;
}

expr mk_fvar(name const & n) {
    return mk_local(n, n, expr(), mk_binder_info());
}

expr mk_const(name const & n, levels const & ls) {
    inc(n.raw()); inc(ls.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::Const), n.raw(), ls.raw(), expr_scalar_size(expr_kind::Const)));
    set_scalar<expr_kind::Const>(r, hash(n.hash(), hash(ls)), false, has_meta(ls), false, has_param(ls));
    return r;
}

expr mk_app(expr const & f, expr const & a) {
    inc(f.raw()); inc(a.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::App), f.raw(), a.raw(), rec_expr_scalar_size(expr_kind::App)));
    unsigned w    = safe_inc(safe_add(get_weight(f), get_weight(a)));
    unsigned d    = std::max(get_depth(f), get_depth(a)) + 1;
    unsigned h    = hash(hash(hash(f), hash(a)), hash(d, w));
    set_scalar<expr_kind::App>(r, h,
                               has_expr_mvar(f) || has_expr_mvar(a),
                               has_univ_mvar(f) || has_univ_mvar(a),
                               has_fvar(f) || has_fvar(a),
                               has_univ_param(f) || has_univ_param(a));
    set_rec_scalar<expr_kind::App>(r, w, d, std::max(get_loose_bvar_range(f), get_loose_bvar_range(a)));
    return r;
}

expr mk_sort(level const & l) {
    inc(l.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::Sort), l.raw(), expr_scalar_size(expr_kind::Sort)));
    set_scalar<expr_kind::Sort>(r, hash(l), false, has_meta(l), false, has_param(l));
    return r;
}

template<expr_kind k>
expr mk_binding(name const & n, expr const & t, expr const & e, binder_info bi) {
    lean_assert(k == expr_kind::Pi || k == expr_kind::Lambda);
    inc(n.raw()); inc(t.raw()); inc(e.raw());
    expr r(mk_cnstr(static_cast<unsigned>(k), n.raw(), t.raw(), e.raw(), rec_expr_scalar_size(k)));
    unsigned w    = safe_inc(safe_add(get_weight(t), get_weight(e)));
    unsigned d    = std::max(get_depth(t), get_depth(e)) + 1;
    unsigned h    = hash(hash(d, w), hash(hash(t), hash(e)));
    unsigned lbvr = std::max(get_loose_bvar_range(t), safe_dec(get_loose_bvar_range(e)));
    set_binder_info<k>(r, bi);
    set_scalar<k>(r, h,
                  has_expr_mvar(t)  || has_expr_mvar(e),
                  has_univ_mvar(t)  || has_univ_mvar(e),
                  has_fvar(t)       || has_fvar(e),
                  has_univ_param(t) || has_univ_param(e));
    set_rec_scalar<k>(r, w, d, lbvr);
    return r;
}

expr mk_lambda(name const & n, expr const & t, expr const & e, binder_info bi) {
    return mk_binding<expr_kind::Lambda>(n, t, e, bi);
}

expr mk_pi(name const & n, expr const & t, expr const & e, binder_info bi) {
    return mk_binding<expr_kind::Pi>(n, t, e, bi);
}

static name * g_default_name = nullptr;

expr mk_arrow(expr const & t, expr const & e) {
    return mk_pi(*g_default_name, t, e, mk_binder_info());
}

expr mk_let(name const & n, expr const & t, expr const & v, expr const & b) {
    inc(n.raw()); inc(t.raw()); inc(v.raw()); inc(b.raw());
    expr r(mk_cnstr(static_cast<unsigned>(expr_kind::Let), n.raw(), t.raw(), v.raw(), b.raw(), rec_expr_scalar_size(expr_kind::Let)));
    unsigned w    = safe_inc(safe_add(safe_add(get_weight(t), get_weight(v)), get_weight(b)));
    unsigned d    = std::max(get_depth(t), std::max(get_depth(v), get_depth(b))) + 1;
    unsigned h    = hash(hash(w, d), hash(hash(hash(t), hash(v)), hash(b)));
    unsigned lbvr = std::max(get_loose_bvar_range(t), std::max(get_loose_bvar_range(v), safe_dec(get_loose_bvar_range(b))));
    set_scalar<expr_kind::Let>(r, h,
                               has_expr_mvar(t)  || has_expr_mvar(v)  || has_expr_mvar(b),
                               has_univ_mvar(t)  || has_univ_mvar(v)  || has_univ_mvar(b),
                               has_fvar(t)       || has_fvar(v)       || has_fvar(b),
                               has_univ_param(t) || has_univ_param(v) || has_univ_param(b));
    set_rec_scalar<expr_kind::Let>(r, w, d, lbvr);
    return r;
}

expr mk_metavar(name const & n, expr const & t);
expr mk_metavar(name const & n, name const & pp_n, expr const & t);

static expr * g_Prop  = nullptr;
static expr * g_Type0 = nullptr;

expr mk_Prop() { return *g_Prop; }
expr mk_Type() { return *g_Type0; }

// =======================================
// Accessors

static expr * g_nat_type    = nullptr;
static expr * g_string_type = nullptr;

expr const & lit_type(expr const & e) {
    switch (lit_value(e).kind()) {
    case literal_kind::String: return *g_string_type;
    case literal_kind::Nat:    return *g_nat_type;
    }
    lean_unreachable();
}

// =======================================
// Auxiliary constructors and accessors

expr mk_app(expr const & f, unsigned num_args, expr const * args) {
    expr r = f;
    for (unsigned i = 0; i < num_args; i++)
        r = mk_app(r, args[i]);
    return r;
}

expr mk_app(unsigned num_args, expr const * args) {
    lean_assert(num_args >= 2);
    return mk_app(mk_app(args[0], args[1]), num_args - 2, args+2);
}

expr mk_app(expr const & f, list<expr> const & args) {
    buffer<expr> _args;
    to_buffer(args, _args);
    return mk_app(f, _args);
}

expr mk_rev_app(expr const & f, unsigned num_args, expr const * args) {
    expr r = f;
    unsigned i = num_args;
    while (i > 0) {
        --i;
        r = mk_app(r, args[i]);
    }
    return r;
}

expr mk_rev_app(unsigned num_args, expr const * args) {
    lean_assert(num_args >= 2);
    return mk_rev_app(mk_app(args[num_args-1], args[num_args-2]), num_args-2, args);
}

expr const & get_app_args(expr const & e, buffer<expr> & args) {
    unsigned sz = args.size();
    expr const * it = &e;
    while (is_app(*it)) {
        args.push_back(app_arg(*it));
        it = &(app_fn(*it));
    }
    std::reverse(args.begin() + sz, args.end());
    return *it;
}

expr const & get_app_args_at_most(expr const & e, unsigned num, buffer<expr> & args) {
    unsigned sz = args.size();
    expr const * it = &e;
    unsigned i = 0;
    while (is_app(*it)) {
        if (i == num)
            break;
        args.push_back(app_arg(*it));
        it = &(app_fn(*it));
        i++;
    }
    std::reverse(args.begin() + sz, args.end());
    return *it;
}

expr const & get_app_rev_args(expr const & e, buffer<expr> & args) {
    expr const * it = &e;
    while (is_app(*it)) {
        args.push_back(app_arg(*it));
        it = &(app_fn(*it));
    }
    return *it;
}

expr const & get_app_fn(expr const & e) {
    expr const * it = &e;
    while (is_app(*it)) {
        it = &(app_fn(*it));
    }
    return *it;
}

unsigned get_app_num_args(expr const & e) {
    expr const * it = &e;
    unsigned n = 0;
    while (is_app(*it)) {
        it = &(app_fn(*it));
        n++;
    }
    return n;
}

bool is_arrow(expr const & t) {
    return is_pi(t) && !has_loose_bvar(binding_body(t), 0);
}

bool is_default_var_name(name const & n) {
    return n == get_default_var_name();
}

/* Legacy */
optional<expr> has_expr_metavar_strict(expr const & e) {
    if (!has_expr_metavar(e))
        return none_expr();
    optional<expr> r;
    for_each(e, [&](expr const & e, unsigned) {
            if (r || !has_expr_metavar(e)) return false;
            if (is_metavar_app(e)) { r = e; return false; }
            if (is_local(e)) return false; // do not visit type
            return true;
        });
    return r;
}

// =======================================
// Update

expr update_mdata(expr const & e, expr const & t) {
    if (!is_eqp(mdata_expr(e), t))
        return mk_mdata(mdata_data(e), t);
    else
        return e;
}

expr update_proj(expr const & e, expr const & t) {
    if (!is_eqp(proj_expr(e), t))
        return mk_proj(proj_idx(e), t);
    else
        return e;
}

expr update_app(expr const & e, expr const & new_fn, expr const & new_arg) {
    if (!is_eqp(app_fn(e), new_fn) || !is_eqp(app_arg(e), new_arg))
        return mk_app(new_fn, new_arg);
    else
        return e;
}

expr update_binding(expr const & e, expr const & new_domain, expr const & new_body) {
    if (!is_eqp(binding_domain(e), new_domain) || !is_eqp(binding_body(e), new_body))
        return mk_binding(e.kind(), binding_name(e), new_domain, new_body, binding_info(e));
    else
        return e;
}

expr update_binding(expr const & e, expr const & new_domain, expr const & new_body, binder_info bi) {
    if (!is_eqp(binding_domain(e), new_domain) || !is_eqp(binding_body(e), new_body) || bi != binding_info(e))
        return mk_binding(e.kind(), binding_name(e), new_domain, new_body, bi);
    else
        return e;
}

expr update_sort(expr const & e, level const & new_level) {
    if (!is_eqp(sort_level(e), new_level))
        return mk_sort(new_level);
    else
        return e;
}

expr update_const(expr const & e, levels const & new_levels) {
    if (!is_eqp(const_levels(e), new_levels))
        return mk_const(const_name(e), new_levels);
    else
        return e;
}

expr update_mvar(expr const & e, expr const & new_type) {
    if (is_eqp(mvar_type(e), new_type))
        return e;
    else
        return mk_mvar(mvar_name(e), new_type);
}

expr update_let(expr const & e, expr const & new_type, expr const & new_value, expr const & new_body) {
    if (!is_eqp(let_type(e), new_type) || !is_eqp(let_value(e), new_value) || !is_eqp(let_body(e), new_body))
        return mk_let(let_name(e), new_type, new_value, new_body);
    else
        return e;
}

/* Legacy */
expr update_local(expr const & e, expr const & new_type, binder_info bi) {
    if (is_eqp(mlocal_type(e), new_type) && local_info(e) == bi)
        return e;
    else
        return mk_local(mlocal_name(e), mlocal_pp_name(e), new_type, bi);
}

/* Legacy */
expr update_local(expr const & e, binder_info bi) {
    return update_local(e, mlocal_type(e), bi);
}

/* Legacy */
expr update_mlocal(expr const & e, expr const & new_type) {
    if (is_eqp(mlocal_type(e), new_type))
        return e;
    else if (is_metavar(e))
        return mk_metavar(mlocal_name(e), mlocal_pp_name(e), new_type);
    else
        return mk_local(mlocal_name(e), mlocal_pp_name(e), new_type, local_info(e));
}

void initialize_expr() {
    g_dummy        = new expr(mk_constant("__expr_for_default_constructor__"));
    g_default_name = new name("a");
    g_Type0        = new expr(mk_sort(mk_level_one()));
    g_Prop         = new expr(mk_sort(mk_level_zero()));
    /* TODO(Leo): add support for builtin constants in the kernel.
       Something similar to what we have in the library directory. */
    g_nat_type     = new expr(mk_constant("nat"));
    g_string_type  = new expr(mk_constant("string"));
}

void finalize_expr() {
    delete g_Prop;
    delete g_Type0;
    delete g_dummy;
    delete g_default_name;
    delete g_nat_type;
    delete g_string_type;
}

#else

// Expr metavariables and local variables
expr_mlocal::expr_mlocal(bool is_meta, name const & n, name const & pp_n, expr const & t):
    expr_composite(is_meta ? expr_kind::MVar : expr_kind::FVar, n.hash(), is_meta || t.has_expr_metavar(), t.has_univ_metavar(),
                   !is_meta || t.has_fvar(), t.has_param_univ(),
                   1, get_loose_bvar_range(t)),
    m_name(n),
    m_pp_name(pp_n),
    m_type(t) {}

void expr_mlocal::dealloc(buffer<expr_cell*> & todelete) {
    dec_ref(m_type, todelete);
    delete this;
}

static bool has_loose_bvars_in_domain(expr const & b, unsigned vidx, bool strict) {
    if (is_pi(b)) {
        return
            (has_loose_bvar(binding_domain(b), vidx) && is_explicit(binding_info(b))) ||
            has_loose_bvars_in_domain(binding_body(b), vidx+1, strict);
    } else if (!strict) {
        return has_loose_bvar(b, vidx);
    } else {
        return false;
    }
}

bool has_loose_bvar(expr const & e, unsigned i) {
    bool found = false;
    for_each(e, [&](expr const & e, unsigned offset) {
            if (found)
                return false; // already found
            unsigned n_i = i + offset;
            if (n_i < i)
                return false; // overflow, vidx can't be >= max unsigned
            if (n_i >= get_loose_bvar_range(e))
                return false; // expression e does not contain bound variables with idx >= n_i
            if (is_var(e)) {
                unsigned vidx = bvar_idx(e);
                if (vidx == n_i)
                    found = true;
            }
            return true; // continue search
        });
    return found;
}

expr lower_loose_bvars(expr const & e, unsigned s, unsigned d) {
    if (d == 0 || s >= get_loose_bvar_range(e))
        return e;
    lean_assert(s >= d);
    return replace(e, [=](expr const & e, unsigned offset) -> optional<expr> {
            unsigned s1 = s + offset;
            if (s1 < s)
                return some_expr(e); // overflow, vidx can't be >= max unsigned
            if (s1 >= get_loose_bvar_range(e))
                return some_expr(e); // expression e does not contain bound variables with idx >= s1
            if (is_var(e) && bvar_idx(e) >= s1) {
                lean_assert(bvar_idx(e) >= offset + d);
                return some_expr(mk_bvar(bvar_idx(e) - d));
            } else {
                return none_expr();
            }
        });
}
expr lower_loose_bvars(expr const & e, unsigned d) {
    return lower_loose_bvars(e, d, d);
}

expr lift_loose_bvars(expr const & e, unsigned s, unsigned d) {
    if (d == 0 || s >= get_loose_bvar_range(e))
        return e;
    return replace(e, [=](expr const & e, unsigned offset) -> optional<expr> {
            unsigned s1 = s + offset;
            if (s1 < s)
                return some_expr(e); // overflow, vidx can't be >= max unsigned
            if (s1 >= get_loose_bvar_range(e))
                return some_expr(e); // expression e does not contain bound variables with idx >= s1
            if (is_var(e) && bvar_idx(e) >= s + offset) {
                unsigned new_idx = bvar_idx(e) + d;
                if (new_idx < bvar_idx(e))
                    throw exception("invalid lift_loose_bvars operation, index overflow");
                return some_expr(mk_bvar(new_idx));
            } else {
                return none_expr();
            }
        });
}

expr lift_loose_bvars(expr const & e, unsigned d) {
    return lift_loose_bvars(e, 0, d);
}

expr infer_implicit(expr const & t, unsigned num_params, bool strict) {
    if (num_params == 0) {
        return t;
    } else if (is_pi(t)) {
        expr new_body = infer_implicit(binding_body(t), num_params-1, strict);
        if (!is_explicit(binding_info(t))) {
            // argument is already marked as implicit
            return update_binding(t, binding_domain(t), new_body);
        } else if (has_loose_bvars_in_domain(new_body, 0, strict)) {
            return update_binding(t, binding_domain(t), new_body, mk_implicit_binder_info());
        } else {
            return update_binding(t, binding_domain(t), new_body);
        }
    } else {
        return t;
    }
}

expr infer_implicit(expr const & t, bool strict) {
    return infer_implicit(t, std::numeric_limits<unsigned>::max(), strict);
}


/* ================ LEGACY CODE ================ */

expr_quote::expr_quote(bool r, expr const & v):
    expr_cell(expr_kind::Quote, v.hash(), false, false, false, false),
    m_reflected(r),
    m_value(v) {
}

void expr_quote::dealloc(buffer<expr_cell*> & todelete) {
    dec_ref(m_value, todelete);
    delete this;
}

expr mk_quote(bool reflected, expr const & val) {
    return expr(new expr_quote(reflected, val));
}

#endif
}
