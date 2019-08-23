// Lean compiler output
// Module: init.util
// Imports: init.data.string.basic
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
obj* l_unsafeCast(obj*, obj*, obj*, obj*);
obj* l_dbgTrace(obj*, obj*, obj*);
obj* l_dbgSleep___boxed(obj*, obj*, obj*);
obj* l_dbgTraceIfShared___boxed(obj*, obj*, obj*);
obj* l_dbgSleep(obj*, uint32, obj*);
obj* l_unsafeCast___boxed(obj*, obj*, obj*, obj*);
obj* l_dbgTrace___boxed(obj*, obj*, obj*);
obj* l_dbgTraceIfShared(obj*, obj*, obj*);
obj* l_dbgTrace___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean_dbg_trace(x_2, x_3);
return x_4;
}
}
obj* l_dbgTraceIfShared___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean_dbg_trace_if_shared(x_2, x_3);
return x_4;
}
}
obj* l_dbgSleep___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_2);
x_5 = lean_dbg_sleep(x_4, x_3);
return x_5;
}
}
obj* l_unsafeCast___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = x_4;
return x_5;
}
}
obj* initialize_init_data_string_basic(obj*);
static bool _G_initialized = false;
obj* initialize_init_util(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean::io_result_is_error(w)) return w;
w = initialize_init_data_string_basic(w);
if (lean::io_result_is_error(w)) return w;
return w;
}
