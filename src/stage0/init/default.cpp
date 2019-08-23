// Lean compiler output
// Module: init.default
// Imports: init.core init.control.default init.data.basic init.coe init.wf init.data.default init.system.default init.util init.fix
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
extern "C" {
obj* initialize_init_core(obj*);
obj* initialize_init_control_default(obj*);
obj* initialize_init_data_basic(obj*);
obj* initialize_init_coe(obj*);
obj* initialize_init_wf(obj*);
obj* initialize_init_data_default(obj*);
obj* initialize_init_system_default(obj*);
obj* initialize_init_util(obj*);
obj* initialize_init_fix(obj*);
static bool _G_initialized = false;
obj* initialize_init_default(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean::io_result_is_error(w)) return w;
w = initialize_init_core(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_control_default(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_data_basic(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_coe(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_wf(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_data_default(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_system_default(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_util(w);
if (lean::io_result_is_error(w)) return w;
w = initialize_init_fix(w);
if (lean::io_result_is_error(w)) return w;
return w;
}
}
