// Lean compiler output
// Module: Init.Lean.Modifiers
// Imports: Init.Lean.Environment
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_is_protected(lean_object*, lean_object*);
lean_object* l_Lean_protectedExt___closed__1;
lean_object* l_Lean_privateExt___elambda__1(lean_object*);
lean_object* l_Lean_protectedExt___closed__3;
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux(lean_object*);
uint8_t l_Lean_isPrivateName___main(lean_object*);
lean_object* l_Lean_protectedExt___closed__5;
lean_object* l_Lean_privateHeader;
uint8_t l_Lean_Name_beq___main(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_io_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_protectedExt___elambda__1___boxed(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkPrivateExtension___spec__1(lean_object*, lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
uint8_t lean_is_private_name(lean_object*);
lean_object* l_Lean_isPrivateName___boxed(lean_object*);
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___main___boxed(lean_object*);
lean_object* l_Lean_privateExt___closed__2;
lean_object* l_Lean_isPrivateName___main___boxed(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_private_prefix(lean_object*);
lean_object* l_Lean_EnvExtension_setStateUnsafe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_protectedExt___elambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_privateExt___closed__1;
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* lean_add_protected(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_protectedExt;
extern lean_object* l___private_Init_Lean_Environment_5__envExtensionsRef;
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___boxed(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_protectedExt___elambda__2(lean_object*);
lean_object* lean_private_prefix(lean_object*);
lean_object* l_Lean_isPrivateNameExport___boxed(lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_protectedExt___elambda__2___boxed(lean_object*);
lean_object* l_Lean_mkPrivateExtension(lean_object*);
lean_object* lean_mk_private_name(lean_object*, lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___main(lean_object*);
lean_object* l___private_Init_Lean_Modifiers_1__privateToUserNameAux___main(lean_object*);
lean_object* l_Lean_mkProtectedExtension(lean_object*);
lean_object* lean_io_ref_reset(lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_object* l_Lean_protectedExt___elambda__3(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateExtension___closed__1;
lean_object* l_Lean_protectedExt___elambda__4___boxed(lean_object*);
lean_object* l_Lean_privateExt;
lean_object* lean_io_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_namespacesExt___closed__1;
lean_object* l_Lean_protectedExt___elambda__4___rarg(lean_object*);
lean_object* lean_io_initializing(lean_object*);
lean_object* l_Lean_EnvExtension_getStateUnsafe___rarg(lean_object*, lean_object*);
lean_object* l_Lean_isProtected___boxed(lean_object*, lean_object*);
lean_object* l_Lean_protectedExt___elambda__1(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Modifiers_1__privateToUserNameAux(lean_object*);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l_Lean_privateHeader___closed__2;
lean_object* l_Lean_protectedExt___elambda__4(lean_object*);
lean_object* l_Lean_protectedExt___closed__4;
lean_object* l_Lean_mkProtectedExtension___closed__2;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_privateHeader___closed__1;
lean_object* l_Lean_protectedExt___closed__2;
lean_object* l_Lean_mkProtectedExtension___closed__1;
lean_object* _init_l_Lean_mkProtectedExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("protected");
return x_1;
}
}
lean_object* _init_l_Lean_mkProtectedExtension___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_mkProtectedExtension___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_mkProtectedExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_mkProtectedExtension___closed__2;
x_3 = l_Lean_mkTagDeclarationExtension(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_protectedExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_protectedExt___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_empty___closed__1;
return x_2;
}
}
lean_object* l_Lean_protectedExt___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_protectedExt___elambda__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_protectedExt___elambda__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_protectedExt___elambda__4___rarg), 1, 0);
return x_2;
}
}
lean_object* _init_l_Lean_protectedExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_protectedExt___elambda__4___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_protectedExt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_protectedExt___elambda__3___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_protectedExt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_protectedExt___elambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_protectedExt___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_protectedExt___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_protectedExt___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_namespacesExt___closed__1;
x_2 = lean_box(0);
x_3 = l_Lean_protectedExt___closed__1;
x_4 = l_Lean_protectedExt___closed__2;
x_5 = l_Lean_protectedExt___closed__3;
x_6 = l_Lean_protectedExt___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* l_Lean_protectedExt___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_protectedExt___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_protectedExt___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_protectedExt___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_protectedExt___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_protectedExt___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_protectedExt___elambda__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_protectedExt___elambda__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* lean_add_protected(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_protectedExt;
x_4 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_3, x_1, x_2);
return x_4;
}
}
uint8_t lean_is_protected(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_protectedExt;
x_4 = l_Lean_TagDeclarationExtension_isTagged(x_3, x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_isProtected___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_is_protected(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkPrivateExtension___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_initializing(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Init_Lean_Environment_5__envExtensionsRef;
x_14 = lean_io_ref_get(x_13, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_get_size(x_15);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_1);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_io_ref_get(x_13, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_io_ref_reset(x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_19);
x_26 = x_19;
x_27 = lean_array_push(x_21, x_26);
x_28 = lean_io_ref_set(x_13, x_27, x_24);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_19);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_19);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_21);
lean_dec(x_19);
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_19);
x_41 = !lean_is_exclusive(x_20);
if (x_41 == 0)
{
return x_20;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_20, 0);
x_43 = lean_ctor_get(x_20, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_20);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_3);
if (x_49 == 0)
{
return x_3;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_3, 0);
x_51 = lean_ctor_get(x_3, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_3);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* _init_l_Lean_mkPrivateExtension___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_mkPrivateExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_mkPrivateExtension___closed__1;
x_3 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkPrivateExtension___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_privateExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_privateExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_privateExt___elambda__1), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_privateExt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_privateExt___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_privateHeader___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private");
return x_1;
}
}
lean_object* _init_l_Lean_privateHeader___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_privateHeader___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_privateHeader() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_privateHeader___closed__2;
return x_1;
}
}
lean_object* lean_mk_private_prefix(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = l_Lean_privateExt;
x_3 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_2, x_1);
lean_inc(x_1);
x_4 = lean_environment_main_module(x_1);
x_5 = l_Lean_privateHeader;
x_6 = l_Lean_Name_append___main(x_5, x_4);
lean_inc(x_3);
x_7 = lean_name_mk_numeral(x_6, x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_10 = l_Lean_EnvExtension_setStateUnsafe___rarg(x_2, x_1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* lean_mk_private_name(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_mk_private_prefix(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_Name_append___main(x_5, x_2);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_Lean_Name_append___main(x_8, x_2);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
uint8_t l_Lean_isPrivateName___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_privateHeader;
x_5 = l_Lean_Name_beq___main(x_1, x_4);
if (x_5 == 0)
{
x_1 = x_3;
goto _start;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
default: 
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 0);
x_1 = x_8;
goto _start;
}
}
}
}
lean_object* l_Lean_isPrivateName___main___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_isPrivateName___main(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_isPrivateName(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isPrivateName___main(x_1);
return x_2;
}
}
lean_object* l_Lean_isPrivateName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_isPrivateName(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t lean_is_private_name(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isPrivateName___main(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_isPrivateNameExport___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_is_private_name(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Modifiers_1__privateToUserNameAux___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l___private_Init_Lean_Modifiers_1__privateToUserNameAux___main(x_2);
x_5 = lean_name_mk_string(x_4, x_3);
return x_5;
}
default: 
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
}
}
}
lean_object* l___private_Init_Lean_Modifiers_1__privateToUserNameAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Modifiers_1__privateToUserNameAux___main(x_1);
return x_2;
}
}
lean_object* lean_private_to_user_name(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isPrivateName___main(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Init_Lean_Modifiers_1__privateToUserNameAux___main(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
x_1 = x_2;
goto _start;
}
else
{
lean_inc(x_1);
return x_1;
}
}
}
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___main___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Modifiers_2__privatePrefixAux___main(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Modifiers_2__privatePrefixAux___main(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Modifiers_2__privatePrefixAux___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Modifiers_2__privatePrefixAux(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* lean_private_prefix(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isPrivateName___main(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Init_Lean_Modifiers_2__privatePrefixAux___main(x_1);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
lean_object* initialize_Init_Lean_Environment(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Modifiers(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_mkProtectedExtension___closed__1 = _init_l_Lean_mkProtectedExtension___closed__1();
lean_mark_persistent(l_Lean_mkProtectedExtension___closed__1);
l_Lean_mkProtectedExtension___closed__2 = _init_l_Lean_mkProtectedExtension___closed__2();
lean_mark_persistent(l_Lean_mkProtectedExtension___closed__2);
l_Lean_protectedExt___closed__1 = _init_l_Lean_protectedExt___closed__1();
lean_mark_persistent(l_Lean_protectedExt___closed__1);
l_Lean_protectedExt___closed__2 = _init_l_Lean_protectedExt___closed__2();
lean_mark_persistent(l_Lean_protectedExt___closed__2);
l_Lean_protectedExt___closed__3 = _init_l_Lean_protectedExt___closed__3();
lean_mark_persistent(l_Lean_protectedExt___closed__3);
l_Lean_protectedExt___closed__4 = _init_l_Lean_protectedExt___closed__4();
lean_mark_persistent(l_Lean_protectedExt___closed__4);
l_Lean_protectedExt___closed__5 = _init_l_Lean_protectedExt___closed__5();
lean_mark_persistent(l_Lean_protectedExt___closed__5);
res = l_Lean_mkProtectedExtension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_protectedExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_protectedExt);
lean_dec_ref(res);
l_Lean_mkPrivateExtension___closed__1 = _init_l_Lean_mkPrivateExtension___closed__1();
lean_mark_persistent(l_Lean_mkPrivateExtension___closed__1);
l_Lean_privateExt___closed__1 = _init_l_Lean_privateExt___closed__1();
lean_mark_persistent(l_Lean_privateExt___closed__1);
l_Lean_privateExt___closed__2 = _init_l_Lean_privateExt___closed__2();
lean_mark_persistent(l_Lean_privateExt___closed__2);
res = l_Lean_mkPrivateExtension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_privateExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_privateExt);
lean_dec_ref(res);
l_Lean_privateHeader___closed__1 = _init_l_Lean_privateHeader___closed__1();
lean_mark_persistent(l_Lean_privateHeader___closed__1);
l_Lean_privateHeader___closed__2 = _init_l_Lean_privateHeader___closed__2();
lean_mark_persistent(l_Lean_privateHeader___closed__2);
l_Lean_privateHeader = _init_l_Lean_privateHeader();
lean_mark_persistent(l_Lean_privateHeader);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
