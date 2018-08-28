/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <vector>
#include <string>
#include <cstdlib>
#if !defined(__APPLE__)
#include <malloc.h>
#endif
#include "runtime/compiler_hints.h"
#include "runtime/mpz.h"
#include "runtime/int64.h"
#include "runtime/thread.h"

namespace lean {
/*
The primitives implemented in the runtime do not modify the RC of its arguments.
Callers are responsible for increasing/decreasing the RCs using the `inc`/`dec` operations.
All new objects allocated by the primitives have RC == 1.
*/

inline void * alloca(size_t s) {
#ifdef _MSC_VER
    return ::_alloca(s);
#else
    return ::alloca(s);
#endif
}

enum class object_memory_kind { Heap = 0, Stack, Region };
enum class object_kind { Constructor, Closure, Array, ScalarArray, String, MPZ, Thunk, Task, External };

/* The reference counter is a uintptr_t, because at deletion time, we use this field to implement
   a linked list of objects to be deleted. */
typedef uintptr_t rc_type;

/* Base class for all runtime objects.

   \remark If m_mem_kind == Heap, then we store the reference counter before the object. */
struct object {
    unsigned        m_kind:8;
    unsigned        m_mem_kind:8;
    object(object_kind k, object_memory_kind m = object_memory_kind::Heap):
        m_kind(static_cast<unsigned>(k)), m_mem_kind(static_cast<unsigned>(m)) {}
};

/* We can represent inductive datatypes that have:
   1) At most 2^16 constructors
   2) At most 2^16 - 1 object fields per constructor
   3) At most 2^16 - 1 bytes for scalar/unboxed fields

   We only need m_scalar_size for implementing sanity checks at runtime.

   Header size: 12 bytes in 32 bit machines and 16 bytes in 64 bit machines. */
struct constructor_object : public object {
    unsigned    m_tag:16;
    unsigned    m_num_objs:16;
    unsigned    m_scalar_size:16;
    constructor_object(unsigned tag, unsigned num_objs, unsigned scalar_sz, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::Constructor, m), m_tag(tag), m_num_objs(num_objs), m_scalar_size(scalar_sz) {}
};

/* Array of objects.
   Header size: 16 bytes in 32 bit machines and 32 bytes in 64 bit machines. */
struct array_object : public object {
    size_t   m_size;
    size_t   m_capacity;
    array_object(size_t sz, size_t c, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::Array, m), m_size(sz), m_capacity(c) {}
};

/* Array of scalar values.
   We support arrays with upto 2^64 elements in 64 bit machines.

   The field m_elem_size is only needed for implementing sanity checks at runtime.
   Header size: 16 bytes in 32 bit machines and 32 bytes in 64 bit machines. */
struct sarray_object : public object {
    unsigned m_elem_size:16; // in bytes
    size_t   m_size;
    size_t   m_capacity;
    sarray_object(unsigned esz, size_t sz, size_t c, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::ScalarArray, m), m_elem_size(esz), m_size(sz), m_capacity(c) {}
};

struct string_object : public object {
    size_t m_size;
    size_t m_capacity;
    size_t m_length;   // UTF8 length
    string_object(size_t sz, size_t c, size_t len, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::String, m), m_size(sz), m_capacity(c), m_length(len) {}
};

typedef object * (*lean_cfun)(object *); // NOLINT

/* Note that `lean_cfun` is a function pointer for a C function of
   arity 1. The `apply` operator performs a cast operation.
   It casts m_fun to a C function of the right arity.

   Header size: 16 bytes in 32 bit machines and 24 bytes in 64 bit machines.

   Note that this structure may also be used to simulate closures built
   from bytecodes. We just store an extra argument: the virtual machine
   function descriptor. We store in m_fun a pointer to a C function
   that extracts the function descriptor and then invokes the VM. */
struct closure_object : public object {
    unsigned  m_arity:16;     // number of arguments expected by m_fun.
    unsigned  m_num_fixed:16; // number of arguments that have been already fixed.
    lean_cfun m_fun;
    closure_object(lean_cfun f, unsigned arity, unsigned n, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::Closure, m), m_arity(arity), m_num_fixed(n), m_fun(f) {}
};

struct mpz_object : public object {
    mpz m_value;
    mpz_object(mpz const & v, object_memory_kind m = object_memory_kind::Heap):
        object(object_kind::MPZ, m), m_value(v) {}
};

struct thunk_object : public object {
    atomic<object *> m_value;
    atomic<object *> m_closure;
    thunk_object(object * c, bool is_value = false, object_memory_kind m = object_memory_kind::Heap);
};

struct task_object : public object {
    /* Data required for executing a task. It is released as soon as
       the task terminates. */
    struct imp {
        object *              m_closure;
        task_object *         m_head_dep{nullptr};  /* head of the reverse dependency list of this task. */
        task_object *         m_next_dep{nullptr};  /* next element in the reverse dependency list. Each task can be in at most one reverse dependency list. */
        unsigned              m_prio;
        bool                  m_interrupted{false};
        bool                  m_deleted{false};
        imp(object * c, unsigned prio):m_closure(c), m_prio(prio) {}
    };
    atomic<object *>          m_value;
    imp *                     m_imp;
    task_object(object * c, unsigned prio);
    task_object(object * v);
};

/* Base class for wrapping external_object data.
   For example, we use it to wrap the Lean environment object. */
struct external_object : public object {
    virtual void dealloc() {}
    virtual ~external_object() {}
};

inline bool is_null(object * o) { return o == nullptr; }
inline bool is_scalar(object * o) { return (reinterpret_cast<uintptr_t>(o) & 1) == 1; }
inline object * box(unsigned n) { return reinterpret_cast<object*>((static_cast<uintptr_t>(n) << 1) | 1); }
inline unsigned unbox(object * o) { return reinterpret_cast<uintptr_t>(o) >> 1; }

/* Generic Lean object delete operation.

   The generic delete must be used when we are compiling:
   1- Polymorphic code.
   2- Code using `any` type.
      The `any` type is introduced when we translate Lean expression into the Core language based on System-F.

   We are planning to generate delete operations for non-polymorphic code.
   They can be faster because:
   1- They do not need to test whether nested pointers are boxed scalars or not.
   2- They do not need to test the kind.
   3- They can unfold the loop that decrements the reference counters for nested objects.

   \pre !is_scalar(o); */
void del(object * o);

static_assert(sizeof(atomic<rc_type>) == sizeof(rc_type),  "atomic<rc_type> and rc_type must have the same size"); // NOLINT


inline void * alloc_heap_object(size_t sz) {
    void * r = malloc(sizeof(rc_type) + sz);
    *static_cast<rc_type *>(r) = 1;
    return static_cast<char *>(r) + sizeof(rc_type);
}

inline atomic<rc_type> * rc_addr(object * o) {
    return reinterpret_cast<atomic<rc_type> *>(reinterpret_cast<char *>(o) - sizeof(rc_type));
}

inline void free_heap_obj(object * o) {
    free(reinterpret_cast<char *>(o) - sizeof(rc_type));
}

inline bool is_heap_obj(object * o) { return o->m_mem_kind == static_cast<unsigned>(object_memory_kind::Heap); }

inline unsigned get_rc(object * o) { lean_assert(!is_scalar(o) && is_heap_obj(o)); return atomic_load_explicit(rc_addr(o), memory_order_acquire); }
inline bool is_shared(object * o) { return get_rc(o) > 1; }
inline void inc_ref(object * o) { if (is_heap_obj(o)) { atomic_fetch_add_explicit(rc_addr(o), static_cast<rc_type>(1), memory_order_relaxed); } }
inline void dec_shared_ref(object * o) { lean_assert(is_shared(o)); atomic_fetch_sub_explicit(rc_addr(o), static_cast<rc_type>(1), memory_order_acq_rel); }
inline bool dec_ref_core(object * o) { if (is_heap_obj(o)) { lean_assert(get_rc(o) > 0); return atomic_fetch_sub_explicit(rc_addr(o), static_cast<rc_type>(1), memory_order_acq_rel) == 1; } else { return false; } }
inline void dec_ref(object * o) { if (dec_ref_core(o)) del(o); }
inline void inc(object * o) { if (!is_scalar(o)) inc_ref(o); }
inline void dec(object * o) { if (!is_scalar(o)) dec_ref(o); }

// =======================================
// Testers

inline object_kind get_kind(object * o) { return static_cast<object_kind>(o->m_kind); }
inline bool is_cnstr(object * o) { return get_kind(o) == object_kind::Constructor; }
inline bool is_closure(object * o) { return get_kind(o) == object_kind::Closure; }
inline bool is_array(object * o) { return get_kind(o) == object_kind::Array; }
inline bool is_sarray(object * o) { return get_kind(o) == object_kind::ScalarArray; }
inline bool is_string(object * o) { return get_kind(o) == object_kind::String; }
inline bool is_mpz(object * o) { return get_kind(o) == object_kind::MPZ; }
inline bool is_thunk(object * o) { return get_kind(o) == object_kind::Thunk; }
inline bool is_task(object * o) { return get_kind(o) == object_kind::Task; }
inline bool is_external(object * o) { return get_kind(o) == object_kind::External; }

// =======================================
// Casting

inline constructor_object * to_cnstr(object * o) { lean_assert(is_cnstr(o)); return static_cast<constructor_object*>(o); }
inline closure_object * to_closure(object * o) { lean_assert(is_closure(o)); return static_cast<closure_object*>(o); }
inline array_object * to_array(object * o) { lean_assert(is_array(o)); return static_cast<array_object*>(o); }
inline sarray_object * to_sarray(object * o) { lean_assert(is_sarray(o)); return static_cast<sarray_object*>(o); }
inline string_object * to_string(object * o) { lean_assert(is_string(o)); return static_cast<string_object*>(o); }
inline mpz_object * to_mpz(object * o) { lean_assert(is_mpz(o)); return static_cast<mpz_object*>(o); }
inline thunk_object * to_thunk(object * o) { lean_assert(is_thunk(o)); return static_cast<thunk_object*>(o); }
inline task_object * to_task(object * o) { lean_assert(is_task(o)); return static_cast<task_object*>(o); }
inline external_object * to_external(object * o) { lean_assert(is_external(o)); return static_cast<external_object*>(o); }

/* The memory associated with all Lean objects but `mpz_object` and `external_object` can be deallocated using `free`.
   All fields in these objects are integral types, but the reference counter.
   However, `std::atomic<Integral>` has a trivial destructor.
   In the C++ reference manual (http://en.cppreference.com/w/cpp/atomic/atomic), we find the following sentence:

   "Additionally, the resulting std::atomic<Integral> specialization has standard layout, a trivial default constructor,
   and a trivial destructor." */
inline void dealloc_mpz(object * o) { to_mpz(o)->~mpz_object(); free_heap_obj(o); }
inline void dealloc_external(object * o) { delete to_external(o); }
inline void dealloc(object * o) {
    lean_assert(is_heap_obj(o));
    switch (get_kind(o)) {
    case object_kind::External: dealloc_external(o); break;
    case object_kind::MPZ:      dealloc_mpz(o); break;
    case object_kind::Task:     lean_unreachable(); // only the task manager can deallocate tasks.
    default: free_heap_obj(o); break;
    }
}

// =======================================
// Object auxiliary functions

/* Size of the object in bytes. This function is used for debugging purposes.
   \pre !is_scalar(o) && !is_external(o) */
size_t obj_byte_size(object * o);

/* Size of the object header in bytes. This function is used for debugging purposes.
   \pre !is_scalar(o) && !is_external(o) */
size_t obj_header_size(object * o);

/* Retrieves data of type `T` stored offset bytes inside of `o` */
template<typename T>
inline T obj_data(object * o, size_t offset) {
    lean_assert(obj_header_size(o) <= offset);
    lean_assert(offset + sizeof(T) <= obj_byte_size(o));
    return *(reinterpret_cast<T *>(reinterpret_cast<char *>(o) + offset));
}

/* Set object data of type T */
template<typename T>
inline void obj_set_data(object * o, size_t offset, T v) {
    lean_assert(!is_shared(o));
    lean_assert(obj_header_size(o) <= offset);
    lean_assert(offset + sizeof(T) <= obj_byte_size(o));
    *(reinterpret_cast<T *>(reinterpret_cast<char *>(o) + offset)) = v;
}

// =======================================
// Constructor auxiliary functions

inline unsigned cnstr_num_objs(object * o) { return to_cnstr(o)->m_num_objs; }
inline unsigned cnstr_scalar_size(object * o) { return to_cnstr(o)->m_scalar_size; }
inline size_t cnstr_byte_size(object * o) { return sizeof(constructor_object) + cnstr_num_objs(o)*sizeof(object*) + cnstr_scalar_size(o); } // NOLINT
inline object ** cnstr_obj_cptr(object * o) {
    lean_assert(is_cnstr(o));
    return reinterpret_cast<object**>(reinterpret_cast<char*>(o) + sizeof(constructor_object));
}
inline unsigned char * cnstr_scalar_cptr(object * o) {
    lean_assert(is_cnstr(o));
    return reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(o) + sizeof(constructor_object) + cnstr_num_objs(o)*sizeof(object*)); // NOLINT
}

// =======================================
// Closure auxiliary functions

inline lean_cfun closure_fun(object * o) { return to_closure(o)->m_fun; }
inline unsigned closure_arity(object * o) { return to_closure(o)->m_arity; }
inline unsigned closure_num_fixed(object * o) { return to_closure(o)->m_num_fixed; }
inline size_t closure_byte_size(object * o) { return sizeof(closure_object) + (closure_arity(o) - 1)*sizeof(object*); } // NOLINT
inline object ** closure_arg_cptr(object * o) {
    lean_assert(is_closure(o));
    return reinterpret_cast<object**>(reinterpret_cast<char*>(o) + sizeof(closure_object));
}

// =======================================
// Thunk auxiliary functions

inline thunk_object::thunk_object(object * c, bool is_value, object_memory_kind m):
    object(object_kind::Thunk, m) {
    if (is_value) {
        m_closure = nullptr;
        m_value   = c;
    } else {
        lean_assert(is_closure(c));
        m_closure = c;
        m_value   = nullptr;
    }
}
object * apply_1(object * f, object * a1);
/* Expensive version of thunk_get which tries to execute the nested closure */
object * thunk_get_core(object * t);

// =======================================
// Array auxiliary functions

inline size_t array_capacity(object * o) { return to_array(o)->m_capacity; }
inline size_t array_byte_size(object * o) { return sizeof(array_object) + array_capacity(o)*sizeof(object*); } // NOLINT
inline object ** array_cptr(object * o) {
    lean_assert(is_array(o));
    return reinterpret_cast<object**>(reinterpret_cast<char*>(o) + sizeof(array_object));
}

// =======================================
// Array of scalars auxiliary functions

inline unsigned sarray_elem_size(object * o) { return to_sarray(o)->m_elem_size; }
inline size_t sarray_capacity(object * o) { return to_sarray(o)->m_capacity; }
inline size_t sarray_byte_size(object * o) { return sizeof(sarray_object) + sarray_capacity(o)*sarray_elem_size(o); } // NOLINT
template<typename T>
T * sarray_cptr_core(object * o) { lean_assert(is_sarray(o)); return reinterpret_cast<T*>(reinterpret_cast<char*>(o) + sizeof(sarray_object)); }
template<typename T>
T * sarray_cptr(object * o) { lean_assert(sarray_elem_size(o) == sizeof(T)); return sarray_cptr_core<T>(o); }

// =======================================
// String auxiliary functions

inline size_t string_capacity(object * o) { return to_string(o)->m_capacity; }
inline size_t string_byte_size(object * o) { return sizeof(string_object) + string_capacity(o); } // NOLINT

// =======================================
// MPZ auxiliary function

inline object * alloc_mpz(mpz const & m) { return new (alloc_heap_object(sizeof(mpz_object))) mpz_object(m); }

// =======================================
// Natural numbers auxiliary functions

#define LEAN_MAX_SMALL_NAT (sizeof(void*) == 8 ? std::numeric_limits<unsigned>::max() : (std::numeric_limits<unsigned>::max() >> 1)) // NOLINT
inline object * mk_nat_obj_core(mpz const & m) {
    lean_assert(m > LEAN_MAX_SMALL_NAT);
    return alloc_mpz(m);
}
object * nat_big_add(object * a1, object * a2);
object * nat_big_sub(object * a1, object * a2);
object * nat_big_mul(object * a1, object * a2);
object * nat_big_div(object * a1, object * a2);
object * nat_big_mod(object * a1, object * a2);
bool nat_big_eq(object * a1, object * a2);
bool nat_big_le(object * a1, object * a2);
bool nat_big_lt(object * a1, object * a2);
object * nat_big_land(object * a1, object * a2);
object * nat_big_lor(object * a1, object * a2);
object * nat_big_xor(object * a1, object * a2);

// =======================================
// Integers auxiliary functions

#define LEAN_MAX_SMALL_INT (sizeof(void*) == 8 ? std::numeric_limits<int>::max() : (1 << 30)) // NOLINT
#define LEAN_MIN_SMALL_INT (sizeof(void*) == 8 ? std::numeric_limits<int>::min() : -(1 << 30)) // NOLINT
inline object * mk_int_obj_core(mpz const & m) {
    lean_assert(m < LEAN_MIN_SMALL_INT || m > LEAN_MAX_SMALL_INT);
    return alloc_mpz(m);
}
object * int_big_add(object * a1, object * a2);
object * int_big_sub(object * a1, object * a2);
object * int_big_mul(object * a1, object * a2);
object * int_big_div(object * a1, object * a2);
object * int_big_rem(object * a1, object * a2);
bool int_big_eq(object * a1, object * a2);
bool int_big_le(object * a1, object * a2);
bool int_big_lt(object * a1, object * a2);

/*
In our runtime, a Lean function consume the reference counter (RC) of its argument or not.
We say this behavior is part of the "calling convention" for the function. We say an argument uses:

1- "standard" calling convention if it consumes/decrements the RC.
   In this calling convention each argument should be viewed as a resource that is consumed by the function.
   This is roughly equivalent to `S && a` in C++, where `S` is a smart pointer, and `a` is the argument.
   When this calling convention is used for an argument `x`, then it is safe to perform destructive updates to
   `x` if its RC is 1.

2- "borrowed" calling convention if it doesn't consume/decrement the RC, and it is the responsability of the caller
   to decrement the RC.
   This is roughly equivalent to `S const & a` in C++, where `S` is a smart pointer, and `a` is the argument.

For returning objects, we also have two conventions

1- "standard" result. The caller is responsible for consuming the RC of the result.
   This is roughly equivalent to returning a smart point `S` by value in C++.

2- "borrowed" result. The caller is not responsible for decreasing the RC.
   This is roughly equivalent to returning a smart point reference `S const &` in C++.

Functions stored in closures use the "standard" calling convention.
*/

/* The following typedef's are used to document the calling convention for the primitives. */
typedef object * obj_arg;   /* Standard object argument. */
typedef object * b_obj_arg; /* Borrowed object argument. */
typedef object * u_obj_arg; /* Unique (aka non shared) object argument. */
typedef object * obj_res;   /* Standard object result. */
typedef object * b_obj_res; /* Borrowed object result. */

// =======================================
// Constructor objects
inline obj_res alloc_cnstr(unsigned tag, unsigned num_objs, unsigned scalar_sz) {
    lean_assert(tag < 65536 && num_objs < 65536 && scalar_sz < 65536);
    return new (alloc_heap_object(sizeof(constructor_object) + num_objs * sizeof(object *) + scalar_sz)) constructor_object(tag, num_objs, scalar_sz); // NOLINT
}
inline unsigned cnstr_tag(b_obj_arg o) { return to_cnstr(o)->m_tag; }
/* Access constructor object field `i` */
inline b_obj_res cnstr_obj(b_obj_arg o, unsigned i) {
    lean_assert(i < cnstr_num_objs(o));
    return obj_data<object*>(o, sizeof(constructor_object) + sizeof(object*)*i); // NOLINT
}
/* Access scalar data at the given offset. */
template<typename T> inline T cnstr_scalar(b_obj_arg o, size_t offset) {
    return obj_data<T>(o, sizeof(constructor_object) + offset);
}
/* Update constructor field `i` */
inline void cnstr_set_obj(u_obj_arg o, unsigned i, obj_arg v) {
    lean_assert(!is_shared(o));
    lean_assert(i < cnstr_num_objs(o));
    obj_set_data(o, sizeof(constructor_object) + sizeof(object*)*i, v); // NOLINT
}
template<typename T> inline void cnstr_set_scalar(b_obj_arg o, unsigned i, T v) {
    obj_set_data(o, sizeof(constructor_object) + i, v);
}

inline unsigned obj_tag(b_obj_arg o) { if (is_scalar(o)) return unbox(o); else return cnstr_tag(o); }

// =======================================
// Closures

inline obj_res alloc_closure(lean_cfun fun, unsigned arity, unsigned num_fixed) {
    lean_assert(arity > 0);
    lean_assert(num_fixed < arity);
    return new (alloc_heap_object(sizeof(closure_object) + num_fixed * sizeof(object *))) closure_object(fun, arity, num_fixed); // NOLINT
}
inline b_obj_res closure_arg(b_obj_arg o, unsigned i) {
    lean_assert(i < closure_num_fixed(o));
    return obj_data<object*>(o, sizeof(closure_object) + sizeof(object*)*i); // NOLINT
}
inline void closure_set_arg(u_obj_arg o, unsigned i, obj_arg a) {
    lean_assert(i < closure_num_fixed(o));
    obj_set_data(o, sizeof(closure_object) + sizeof(object*)*i, a); // NOLINT
}

// =======================================
// Array of objects

inline obj_res alloc_array(size_t size, size_t capacity) {
    return new (alloc_heap_object(sizeof(array_object) + capacity * sizeof(object *))) array_object(size, capacity); // NOLINT
}
inline size_t array_size(b_obj_arg o) { return to_array(o)->m_size; }
inline b_obj_res array_obj(b_obj_arg o, size_t i) {
    lean_assert(i < array_size(o));
    return obj_data<object*>(o, sizeof(array_object) + sizeof(object*)*i); // NOLINT
}
inline void array_set_size(u_obj_arg o, size_t sz) {
    lean_assert(is_array(o));
    lean_assert(!is_shared(o));
    lean_assert(sz <= array_capacity(o));
    to_array(o)->m_size = sz;
}
inline void array_set_obj(u_obj_arg o, size_t i, obj_arg v) {
    lean_assert(!is_shared(o));
    lean_assert(i < array_size(o));
    obj_set_data(o, sizeof(array_object) + sizeof(object*)*i, v); // NOLINT
}

// =======================================
// Array of scalars

inline obj_res alloc_sarray(unsigned elem_size, size_t size, size_t capacity) {
    return new (alloc_heap_object(sizeof(sarray_object) + capacity * elem_size)) sarray_object(elem_size, size, capacity); // NOLINT
}
inline size_t sarray_size(b_obj_arg o) { return to_sarray(o)->m_size; }
template<typename T> T sarray_data(b_obj_arg o, size_t i) { return sarray_cptr<T>(o)[i]; }
template<typename T> void sarray_set_data(u_obj_arg o, size_t i, T v) {
    obj_set_data(o, sizeof(sarray_object) + sizeof(T)*i, v);
}
inline void sarray_set_size(u_obj_arg o, size_t sz) {
    lean_assert(is_sarray(o));
    lean_assert(!is_shared(o));
    lean_assert(sz <= sarray_capacity(o));
    to_sarray(o)->m_size = sz;
}

// =======================================
// MPZ

inline mpz const & mpz_value(b_obj_arg o) { return to_mpz(o)->m_value; }

// =======================================
// Thunks

inline obj_res mk_thunk(obj_arg c) {
    return new (alloc_heap_object(sizeof(thunk_object))) thunk_object(c, false); // NOLINT
}

/* thunk.pure : A -> thunk A */
inline obj_res thunk_pure(obj_arg v) {
    return new (alloc_heap_object(sizeof(thunk_object))) thunk_object(v, true); // NOLINT
}

/* Primitive for implementing the IR instruction for thunk.get : thunk A -> A */
inline b_obj_res thunk_get(b_obj_arg t) {
    if (object * r = to_thunk(t)->m_value)
        return r;
    return thunk_get_core(t);
}

// =======================================
// Tasks

/* If num_workers == 0, then tasks primitives will just create thunks.
   It must not be used if task objects have already been created. */
class scoped_task_manager {
public:
    scoped_task_manager(unsigned num_workers);
    ~scoped_task_manager();
};

/* Convert a closure (unit -> A) into a task A */
obj_res mk_task(obj_arg c, unsigned prio = 0);
/* Convert a value `a : A` into `task A` */
obj_res task_pure(obj_arg a);
/* task.bind (x : task A) (f : A -> task B) : task B */
obj_res task_bind(obj_arg x, obj_arg f, unsigned prio = 0);
/* task.map (f : A -> B) (t : task A) : task B */
obj_res task_map(obj_arg f, obj_arg t, unsigned prio = 0);
/* task.get (t : task A) : A */
b_obj_res task_get(b_obj_arg t);

/* primitive for implementing `io.check_interrupt : io bool` */
bool io_check_interrupt_core();
/* primitive for implementing `io.request_interrupt : task A -> io unit` */
void io_request_interrupt_core(b_obj_arg t);
/* primitive for implementing `io.has_finished : task A -> io unit` */
bool io_has_finished_core(b_obj_arg t);
/* primitive for implementing `io.wait_any : list (task A) -> io (task A) */
b_obj_res io_wait_any_core(b_obj_arg task_list);

// =======================================
// String

inline obj_res alloc_string(size_t size, size_t capacity, size_t len) {
    return new (alloc_heap_object(sizeof(string_object) + capacity)) string_object(size, capacity, len); // NOLINT
}
obj_res mk_string(char const * s);
obj_res mk_string(std::string const & s);
inline char const * string_data(b_obj_arg o) { lean_assert(is_string(o)); return reinterpret_cast<char*>(o) + sizeof(string_object); }
inline size_t string_size(b_obj_arg o) { return to_string(o)->m_size; }
inline size_t string_len(b_obj_arg o) { return to_string(o)->m_length; }
obj_res string_push(u_obj_arg s, unsigned c);
obj_res string_append(u_obj_arg s1, b_obj_arg s2);

bool string_eq(b_obj_arg s1, b_obj_arg s2);
inline bool string_ne(b_obj_arg s1, b_obj_arg s2) { return !string_eq(s1, s2); }
bool string_eq(b_obj_arg s1, char const * s2);
bool string_lt(b_obj_arg s1, b_obj_arg s2);

// =======================================
// Natural numbers

inline obj_res mk_nat_obj(mpz const & m) {
    if (m > LEAN_MAX_SMALL_NAT)
        return mk_nat_obj_core(m);
    else
        return box(m.get_unsigned_int());
}

inline obj_res mk_nat_obj(unsigned n) {
    if (sizeof(void*) == 8) { // NOLINT
        return box(n);
    } else if (n <= LEAN_MAX_SMALL_NAT) {
        return box(n);
    } else {
        return mk_nat_obj_core(mpz(n));
    }
}

inline obj_res mk_nat_obj(uint64 n) {
    if (LEAN_LIKELY(n <= LEAN_MAX_SMALL_NAT)) {
        return box(n);
    } else {
        return mk_nat_obj_core(mpz(n));
    }
}

inline uint64 nat2uint64(b_obj_arg a) {
    lean_assert(is_scalar(a));
    return unbox(a);
}

inline obj_res nat_succ(b_obj_arg a) {
    if (LEAN_LIKELY(is_scalar(a))) {
        return mk_nat_obj(nat2uint64(a) + 1);
    } else {
        return mk_nat_obj_core(mpz_value(a) + 1);
    }
}

inline obj_res nat_add(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return mk_nat_obj(nat2uint64(a1) + nat2uint64(a2));
    } else {
        return nat_big_add(a1, a2);
    }
}

inline obj_res nat_sub(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        unsigned n1 = unbox(a1);
        unsigned n2 = unbox(a2);
        if (n1 < n2)
            return box(0);
        else
            return box(n1 - n2);
    } else {
        return nat_big_sub(a1, a2);
    }
}

inline obj_res nat_mul(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return mk_nat_obj(nat2uint64(a1) * nat2uint64(a2));
    } else {
        return nat_big_mul(a1, a2);
    }
}

inline obj_res nat_div(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        unsigned n1 = unbox(a1);
        unsigned n2 = unbox(a2);
        if (n2 == 0)
            return box(0);
        else
            return box(n1 / n2);
    } else {
        return nat_big_div(a1, a2);
    }
}

inline obj_res nat_mod(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        unsigned n1 = unbox(a1);
        unsigned n2 = unbox(a2);
        if (n2 == 0)
            return box(0);
        else
            return box(n1 % n2);
    } else {
        return nat_big_mod(a1, a2);
    }
}

inline bool nat_eq(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return a1 == a2;
    } else {
        return nat_big_eq(a1, a2);
    }
}

inline bool nat_ne(b_obj_arg a1, b_obj_arg a2) {
    return !nat_eq(a1, a2);
}

inline bool nat_le(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return a1 <= a2;
    } else {
        return nat_big_le(a1, a2);
    }
}

inline bool nat_lt(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return a1 < a2;
    } else {
        return nat_big_lt(a1, a2);
    }
}

inline obj_res nat_land(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return reinterpret_cast<object*>(reinterpret_cast<uintptr_t>(a1) & reinterpret_cast<uintptr_t>(a2));
    } else {
        return nat_big_land(a1, a2);
    }
}

inline obj_res nat_lor(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return reinterpret_cast<object*>(reinterpret_cast<uintptr_t>(a1) | reinterpret_cast<uintptr_t>(a2));
    } else {
        return nat_big_lor(a1, a2);
    }
}

inline obj_res nat_lxor(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return box(unbox(a1) ^ unbox(a2));
    } else {
        return nat_big_xor(a1, a2);
    }
}

// =======================================
// Integers

inline obj_res mk_int_obj(mpz const & m) {
    if (m < LEAN_MIN_SMALL_INT || m > LEAN_MAX_SMALL_INT)
        return mk_int_obj_core(m);
    else
        return box(static_cast<unsigned>(m.get_int()));
}

inline obj_res mk_int_obj(int n) {
    if (sizeof(void*) == 8) { // NOLINT
        return box(static_cast<unsigned>(n));
    } else if (LEAN_MIN_SMALL_INT <= n && n <= LEAN_MAX_SMALL_INT) {
        return box(static_cast<unsigned>(n));
    } else {
        return alloc_mpz(mpz(n));
    }
}

inline obj_res mk_int_obj(int64 n) {
    if (LEAN_LIKELY(LEAN_MIN_SMALL_INT <= n && n <= LEAN_MAX_SMALL_INT)) {
        return box(static_cast<unsigned>(static_cast<int>(n)));
    } else {
        return mk_int_obj_core(mpz(n));
    }
}

inline int64 int2int64(b_obj_arg a) {
    lean_assert(is_scalar(a));
    if (sizeof(void*) == 8) { // NOLINT
        return static_cast<int>(unbox(a));
    } else {
        return static_cast<int>(reinterpret_cast<size_t>(a)) >> 1;
    }
}

inline int int2int(b_obj_arg a) {
    lean_assert(is_scalar(a));
    if (sizeof(void*) == 8) { // NOLINT
        return static_cast<int>(unbox(a));
    } else {
        return static_cast<int>(reinterpret_cast<size_t>(a)) >> 1;
    }
}

inline obj_res nat2int(b_obj_arg a) {
    if (is_scalar(a)) {
        unsigned v = unbox(a);
        if (v <= LEAN_MAX_SMALL_INT) {
            return a;
        } else {
            return alloc_mpz(mpz(v));
        }
    } else {
        return a;
    }
}

inline obj_res int_neg(b_obj_arg a) {
    if (LEAN_LIKELY(is_scalar(a))) {
        return mk_int_obj(-int2int64(a));
    } else {
        return mk_int_obj(neg(mpz_value(a)));
    }
}

inline obj_res int_add(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return mk_int_obj(int2int64(a1) + int2int64(a2));
    } else {
        return int_big_add(a1, a2);
    }
}

inline obj_res int_sub(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return mk_int_obj(int2int64(a1) - int2int64(a2));
    } else {
        return int_big_sub(a1, a2);
    }
}

inline obj_res int_mul(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return mk_int_obj(int2int64(a1) * int2int64(a2));
    } else {
        return int_big_mul(a1, a2);
    }
}

inline obj_res int_div(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        int v1 = int2int(a1);
        int v2 = int2int(a2);
        if (v2 == 0)
            return box(0);
        else
            return mk_int_obj(v1 / v2);
    } else {
        return int_big_div(a1, a2);
    }
}

inline obj_res int_rem(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        int v1 = int2int(a1);
        int v2 = int2int(a2);
        if (v2 == 0)
            return box(0);
        else
            return mk_int_obj(v1 % v2);
    } else {
        return int_big_rem(a1, a2);
    }
}

inline bool int_eq(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return a1 == a2;
    } else {
        return int_big_eq(a1, a2);
    }
}

inline bool int_ne(b_obj_arg a1, b_obj_arg a2) {
    return !int_eq(a1, a2);
}

inline bool int_le(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return int2int(a1) <= int2int(a2);
    } else {
        return int_big_le(a1, a2);
    }
}

inline bool int_lt(b_obj_arg a1, b_obj_arg a2) {
    if (LEAN_LIKELY(is_scalar(a1) && is_scalar(a2))) {
        return int2int(a1) < int2int(a2);
    } else {
        return int_big_lt(a1, a2);
    }
}
}
