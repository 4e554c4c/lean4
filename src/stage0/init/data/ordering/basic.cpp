// Lean compiler output
// Module: init.data.ordering.basic
// Imports: init.data.repr
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
obj* l_cmp(obj*, obj*);
obj* l_Ordering_HasRepr___closed__1;
obj* l_cmp___rarg___boxed(obj*, obj*, obj*);
obj* l_cmpUsing(obj*, obj*);
obj* l_Ordering_orElse___boxed(obj*, obj*);
uint8 l_Ordering_orElse___main(uint8, uint8);
obj* l_Ordering_HasRepr(uint8);
obj* l_Ordering_orElse___main___boxed(obj*, obj*);
uint8 l_Ordering_swap___main(uint8);
obj* l_cmpUsing___rarg___boxed(obj*, obj*, obj*);
obj* l_Ordering_HasRepr___boxed(obj*);
obj* l_Ordering_HasRepr___closed__3;
obj* l_Ordering_swap___main___boxed(obj*);
uint8 l_cmpUsing___rarg(obj*, obj*, obj*);
uint8 l_Ordering_swap(uint8);
obj* l_Ordering_HasRepr___closed__2;
obj* l_Ordering_DecidableEq___boxed(obj*, obj*);
obj* l_cmpUsing___boxed(obj*, obj*);
uint8 l_Ordering_DecidableEq(uint8, uint8);
uint8 l_cmp___rarg(obj*, obj*, obj*);
uint8 l_Ordering_orElse(uint8, uint8);
obj* l_Ordering_swap___boxed(obj*);
obj* l_cmp___boxed(obj*, obj*);
obj* _init_l_Ordering_HasRepr___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("lt");
return x_0;
}
}
obj* _init_l_Ordering_HasRepr___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Eq");
return x_0;
}
}
obj* _init_l_Ordering_HasRepr___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("gt");
return x_0;
}
}
obj* l_Ordering_HasRepr(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
obj* x_1; 
x_1 = l_Ordering_HasRepr___closed__1;
return x_1;
}
case 1:
{
obj* x_2; 
x_2 = l_Ordering_HasRepr___closed__2;
return x_2;
}
default:
{
obj* x_3; 
x_3 = l_Ordering_HasRepr___closed__3;
return x_3;
}
}
}
}
obj* l_Ordering_HasRepr___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::unbox(x_0);
x_2 = l_Ordering_HasRepr(x_1);
return x_2;
}
}
uint8 l_Ordering_swap___main(uint8 x_0) {
_start:
{
switch (x_0) {
case 0:
{
uint8 x_1; 
x_1 = 2;
return x_1;
}
case 1:
{
return x_0;
}
default:
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
}
}
}
obj* l_Ordering_swap___main___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_Ordering_swap___main(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_Ordering_swap(uint8 x_0) {
_start:
{
uint8 x_1; 
x_1 = l_Ordering_swap___main(x_0);
return x_1;
}
}
obj* l_Ordering_swap___boxed(obj* x_0) {
_start:
{
uint8 x_1; uint8 x_2; obj* x_3; 
x_1 = lean::unbox(x_0);
x_2 = l_Ordering_swap(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_Ordering_orElse___main(uint8 x_0, uint8 x_1) {
_start:
{
switch (x_0) {
case 1:
{
return x_1;
}
default:
{
return x_0;
}
}
}
}
obj* l_Ordering_orElse___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; uint8 x_4; obj* x_5; 
x_2 = lean::unbox(x_0);
x_3 = lean::unbox(x_1);
x_4 = l_Ordering_orElse___main(x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_Ordering_orElse(uint8 x_0, uint8 x_1) {
_start:
{
switch (x_0) {
case 1:
{
return x_1;
}
default:
{
return x_0;
}
}
}
}
obj* l_Ordering_orElse___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; uint8 x_4; obj* x_5; 
x_2 = lean::unbox(x_0);
x_3 = lean::unbox(x_1);
x_4 = l_Ordering_orElse(x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_cmpUsing___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; uint8 x_7; 
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_6 = lean::apply_2(x_0, x_1, x_2);
x_7 = lean::unbox(x_6);
if (x_7 == 0)
{
obj* x_8; uint8 x_9; 
x_8 = lean::apply_2(x_0, x_2, x_1);
x_9 = lean::unbox(x_8);
if (x_9 == 0)
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8 x_11; 
x_11 = 2;
return x_11;
}
}
else
{
uint8 x_15; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_15 = 0;
return x_15;
}
}
}
obj* l_cmpUsing(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_cmpUsing___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_cmpUsing___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_cmpUsing___rarg(x_0, x_1, x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_cmpUsing___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_cmpUsing(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
uint8 l_cmp___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; uint8 x_7; 
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_6 = lean::apply_2(x_0, x_1, x_2);
x_7 = lean::unbox(x_6);
if (x_7 == 0)
{
obj* x_8; uint8 x_9; 
x_8 = lean::apply_2(x_0, x_2, x_1);
x_9 = lean::unbox(x_8);
if (x_9 == 0)
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8 x_11; 
x_11 = 2;
return x_11;
}
}
else
{
uint8 x_15; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_15 = 0;
return x_15;
}
}
}
obj* l_cmp(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_cmp___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_cmp___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_cmp___rarg(x_0, x_1, x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_cmp___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_cmp(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
uint8 l_Ordering_DecidableEq(uint8 x_0, uint8 x_1) {
_start:
{
switch (x_0) {
case 0:
{
switch (x_1) {
case 0:
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
default:
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
case 1:
{
switch (x_1) {
case 1:
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
default:
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
}
}
default:
{
switch (x_1) {
case 2:
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
default:
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
}
}
}
}
}
obj* l_Ordering_DecidableEq___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; uint8 x_4; obj* x_5; 
x_2 = lean::unbox(x_0);
x_3 = lean::unbox(x_1);
x_4 = l_Ordering_DecidableEq(x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* initialize_init_data_repr(obj*);
static bool _G_initialized = false;
obj* initialize_init_data_ordering_basic(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_data_repr(w);
 l_Ordering_HasRepr___closed__1 = _init_l_Ordering_HasRepr___closed__1();
lean::mark_persistent(l_Ordering_HasRepr___closed__1);
 l_Ordering_HasRepr___closed__2 = _init_l_Ordering_HasRepr___closed__2();
lean::mark_persistent(l_Ordering_HasRepr___closed__2);
 l_Ordering_HasRepr___closed__3 = _init_l_Ordering_HasRepr___closed__3();
lean::mark_persistent(l_Ordering_HasRepr___closed__3);
return w;
}
