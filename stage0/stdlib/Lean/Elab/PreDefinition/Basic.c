// Lean compiler output
// Module: Lean.Elab.PreDefinition.Basic
// Imports: Init Lean.Util.SCC Lean.Meta.AbstractNestedProofs Lean.Elab.Term Lean.Elab.DefView Lean.Elab.PreDefinition.MkInhabitant
#include <lean/lean.h>
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
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls_match__1(lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_addInstance___spec__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
uint8_t l_Array_allM___at_Array_all___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
extern lean_object* l_Std_ShareCommon_State_empty;
lean_object* l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isExample(uint8_t);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompileNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_UInt32_add(uint32_t, uint32_t);
lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_ShareCommonT_withShareCommon___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_state_sharecommon(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_levelMVarToParamPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2(size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_KernelException_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2;
lean_object* l_Lean_Elab_instInhabitedPreDefinition;
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1;
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMaxHeight(lean_object*, lean_object*);
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Elab_fixLevelParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr_match__1(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mod(size_t, size_t);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3;
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Elab_fixLevelParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__1;
lean_object* l_Lean_Meta_abstractNestedProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers___closed__1;
lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr___closed__1;
lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_fixLevelParams_match__1(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1;
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclaration;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Elab_addAndCompilePartialRec___closed__1;
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_mkUnsafeRecName___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_fixLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(uint8_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_ReplaceImpl_initCache;
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_add_decl(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = 0;
x_4 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_5 = lean_box(0);
x_6 = l_Lean_instInhabitedExpr___closed__1;
x_7 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_5);
lean_ctor_set(x_7, 4, x_6);
lean_ctor_set(x_7, 5, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*6, x_3);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_17, 2);
x_22 = lean_ctor_get(x_17, 3);
x_23 = lean_ctor_get(x_17, 4);
x_24 = lean_ctor_get(x_17, 5);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_25 = l_Lean_Meta_instantiateMVars(x_23, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_28 = l_Lean_Meta_instantiateMVars(x_24, x_6, x_7, x_8, x_9, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_ctor_set(x_17, 5, x_29);
lean_ctor_set(x_17, 4, x_26);
x_31 = 1;
x_32 = x_2 + x_31;
x_33 = x_17;
x_34 = lean_array_uset(x_16, x_2, x_33);
x_2 = x_32;
x_3 = x_34;
x_10 = x_30;
goto _start;
}
else
{
uint8_t x_36; 
lean_dec(x_26);
lean_free_object(x_17);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_free_object(x_17);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_40 = !lean_is_exclusive(x_25);
if (x_40 == 0)
{
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_17, 0);
x_45 = lean_ctor_get_uint8(x_17, sizeof(void*)*6);
x_46 = lean_ctor_get(x_17, 1);
x_47 = lean_ctor_get(x_17, 2);
x_48 = lean_ctor_get(x_17, 3);
x_49 = lean_ctor_get(x_17, 4);
x_50 = lean_ctor_get(x_17, 5);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_44);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_51 = l_Lean_Meta_instantiateMVars(x_49, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_54 = l_Lean_Meta_instantiateMVars(x_50, x_6, x_7, x_8, x_9, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_57, 0, x_44);
lean_ctor_set(x_57, 1, x_46);
lean_ctor_set(x_57, 2, x_47);
lean_ctor_set(x_57, 3, x_48);
lean_ctor_set(x_57, 4, x_52);
lean_ctor_set(x_57, 5, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*6, x_45);
x_58 = 1;
x_59 = x_2 + x_58;
x_60 = x_57;
x_61 = lean_array_uset(x_16, x_2, x_60);
x_2 = x_59;
x_3 = x_61;
x_10 = x_56;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_63 = lean_ctor_get(x_54, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_65 = x_54;
} else {
 lean_dec_ref(x_54);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_67 = lean_ctor_get(x_51, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_51, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_69 = x_51;
} else {
 lean_dec_ref(x_51);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_1;
x_12 = lean_box_usize(x_10);
x_13 = l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed), 10, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Term_levelMVarToParam(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_st_ref_get(x_8, x_17);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_set(x_2, x_19, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 < x_1;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = x_15;
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_20 = lean_ctor_get(x_18, 4);
x_21 = lean_ctor_get(x_18, 5);
x_22 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_ctor_set(x_18, 5, x_26);
lean_ctor_set(x_18, 4, x_23);
x_28 = 1;
x_29 = x_2 + x_28;
x_30 = x_18;
x_31 = lean_array_uset(x_17, x_2, x_30);
x_2 = x_29;
x_3 = x_31;
x_11 = x_27;
goto _start;
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; 
x_33 = lean_ctor_get(x_18, 0);
x_34 = lean_ctor_get_uint8(x_18, sizeof(void*)*6);
x_35 = lean_ctor_get(x_18, 1);
x_36 = lean_ctor_get(x_18, 2);
x_37 = lean_ctor_get(x_18, 3);
x_38 = lean_ctor_get(x_18, 4);
x_39 = lean_ctor_get(x_18, 5);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_33);
lean_dec(x_18);
x_40 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(x_38, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamExpr(x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_46, 0, x_33);
lean_ctor_set(x_46, 1, x_35);
lean_ctor_set(x_46, 2, x_36);
lean_ctor_set(x_46, 3, x_37);
lean_ctor_set(x_46, 4, x_41);
lean_ctor_set(x_46, 5, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*6, x_34);
x_47 = 1;
x_48 = x_2 + x_47;
x_49 = x_46;
x_50 = lean_array_uset(x_17, x_2, x_49);
x_2 = x_48;
x_3 = x_50;
x_11 = x_45;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = x_1;
x_13 = lean_box_usize(x_11);
x_14 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1;
x_15 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1___boxed), 11, 3);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_12);
x_16 = x_15;
x_17 = lean_apply_8(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___spec__1(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Lean_Elab_levelMVarToParamPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_13);
x_15 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux(x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_7, x_17);
lean_dec(x_7);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_13, x_19);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_16);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_7);
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_ctor_get(x_14, 4);
lean_inc(x_15);
x_16 = l_Lean_CollectLevelParams_main(x_15, x_4);
x_17 = lean_ctor_get(x_14, 5);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_CollectLevelParams_main(x_17, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_4 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = l_Lean_CollectLevelParams_instInhabitedState___closed__1;
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_12, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_24;
}
else
{
lean_object* x_25; 
lean_dec(x_4);
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
lean_ctor_set(x_15, 0, x_25);
return x_15;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_ctor_get(x_26, 2);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_4);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
lean_dec(x_29);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_27);
return x_35;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Std_ShareCommonT_withShareCommon___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_state_sharecommon(x_2, x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 < x_1;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = x_3;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_array_uget(x_3, x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_3, x_2, x_9);
x_11 = x_8;
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_ctor_get(x_11, 4);
x_14 = lean_ctor_get(x_11, 5);
x_15 = lean_state_sharecommon(x_4, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_state_sharecommon(x_17, x_14);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_11, 5, x_19);
lean_ctor_set(x_11, 4, x_16);
x_21 = 1;
x_22 = x_2 + x_21;
x_23 = x_11;
x_24 = lean_array_uset(x_10, x_2, x_23);
x_2 = x_22;
x_3 = x_24;
x_4 = x_20;
goto _start;
}
else
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get_uint8(x_11, sizeof(void*)*6);
x_28 = lean_ctor_get(x_11, 1);
x_29 = lean_ctor_get(x_11, 2);
x_30 = lean_ctor_get(x_11, 3);
x_31 = lean_ctor_get(x_11, 4);
x_32 = lean_ctor_get(x_11, 5);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_26);
lean_dec(x_11);
x_33 = lean_state_sharecommon(x_4, x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_state_sharecommon(x_35, x_32);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_39, 0, x_26);
lean_ctor_set(x_39, 1, x_28);
lean_ctor_set(x_39, 2, x_29);
lean_ctor_set(x_39, 3, x_30);
lean_ctor_set(x_39, 4, x_34);
lean_ctor_set(x_39, 5, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*6, x_27);
x_40 = 1;
x_41 = x_2 + x_40;
x_42 = x_39;
x_43 = lean_array_uset(x_10, x_2, x_42);
x_2 = x_41;
x_3 = x_43;
x_4 = x_38;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon(lean_object* x_1) {
_start:
{
lean_object* x_2; size_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_4 = x_1;
x_5 = lean_box_usize(x_3);
x_6 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1;
x_7 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2___boxed), 4, 3);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, x_4);
x_8 = l_Std_ShareCommon_State_empty;
x_9 = x_7;
x_10 = lean_apply_1(x_9, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___spec__2(x_5, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_fixLevelParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_Elab_fixLevelParams_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_fixLevelParams_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 3);
x_4 = lean_name_eq(x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_215; lean_object* x_216; size_t x_217; uint8_t x_218; 
x_6 = lean_ptr_addr(x_4);
x_7 = x_3 == 0 ? x_6 : x_6 % x_3;
x_215 = lean_ctor_get(x_5, 0);
lean_inc(x_215);
x_216 = lean_array_uget(x_215, x_7);
lean_dec(x_215);
x_217 = lean_ptr_addr(x_216);
lean_dec(x_216);
x_218 = x_217 == x_6;
if (x_218 == 0)
{
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_219 = lean_ctor_get(x_4, 0);
lean_inc(x_219);
lean_inc(x_219);
x_220 = lean_alloc_closure((void*)(l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_220, 0, x_219);
x_221 = lean_array_get_size(x_1);
x_222 = lean_unsigned_to_nat(0u);
x_223 = l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(x_220, x_1, x_222, x_221);
lean_dec(x_221);
if (x_223 == 0)
{
lean_object* x_224; 
lean_dec(x_219);
x_224 = lean_box(0);
x_8 = x_224;
goto block_214;
}
else
{
lean_object* x_225; uint8_t x_226; 
x_225 = l_Lean_mkConst(x_219, x_2);
x_226 = !lean_is_exclusive(x_5);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_227 = lean_ctor_get(x_5, 0);
x_228 = lean_ctor_get(x_5, 1);
x_229 = lean_array_uset(x_227, x_7, x_4);
lean_inc(x_225);
x_230 = lean_array_uset(x_228, x_7, x_225);
lean_ctor_set(x_5, 1, x_230);
lean_ctor_set(x_5, 0, x_229);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_225);
lean_ctor_set(x_231, 1, x_5);
return x_231;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_232 = lean_ctor_get(x_5, 0);
x_233 = lean_ctor_get(x_5, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_5);
x_234 = lean_array_uset(x_232, x_7, x_4);
lean_inc(x_225);
x_235 = lean_array_uset(x_233, x_7, x_225);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_225);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
}
}
else
{
lean_object* x_238; 
x_238 = lean_box(0);
x_8 = x_238;
goto block_214;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_4);
lean_dec(x_2);
x_239 = lean_ctor_get(x_5, 1);
lean_inc(x_239);
x_240 = lean_array_uget(x_239, x_7);
lean_dec(x_239);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_5);
return x_241;
}
block_214:
{
lean_dec(x_8);
switch (lean_obj_tag(x_4)) {
case 5:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_9);
lean_inc(x_2);
x_12 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_9, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
x_15 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_10, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set_uint64(x_19, sizeof(void*)*2, x_11);
x_20 = lean_expr_update_app(x_19, x_13, x_17);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
x_24 = lean_array_uset(x_22, x_7, x_4);
lean_inc(x_20);
x_25 = lean_array_uset(x_23, x_7, x_20);
lean_ctor_set(x_18, 1, x_25);
lean_ctor_set(x_18, 0, x_24);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_array_uset(x_26, x_7, x_4);
lean_inc(x_20);
x_29 = lean_array_uset(x_27, x_7, x_20);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_15, 1, x_30);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_10);
lean_ctor_set_uint64(x_33, sizeof(void*)*2, x_11);
x_34 = lean_expr_update_app(x_33, x_13, x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
x_38 = lean_array_uset(x_35, x_7, x_4);
lean_inc(x_34);
x_39 = lean_array_uset(x_36, x_7, x_34);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
case 6:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_42 = lean_ctor_get(x_4, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_4, 2);
lean_inc(x_44);
x_45 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_43);
lean_inc(x_2);
x_46 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_43, x_5);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_44);
x_49 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_44, x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_43);
lean_ctor_set(x_53, 2, x_44);
lean_ctor_set_uint64(x_53, sizeof(void*)*3, x_45);
x_54 = (uint8_t)((x_45 << 24) >> 61);
x_55 = lean_expr_update_lambda(x_53, x_54, x_47, x_51);
x_56 = !lean_is_exclusive(x_52);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
x_59 = lean_array_uset(x_57, x_7, x_4);
lean_inc(x_55);
x_60 = lean_array_uset(x_58, x_7, x_55);
lean_ctor_set(x_52, 1, x_60);
lean_ctor_set(x_52, 0, x_59);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_52, 0);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_52);
x_63 = lean_array_uset(x_61, x_7, x_4);
lean_inc(x_55);
x_64 = lean_array_uset(x_62, x_7, x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_49, 1, x_65);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_66 = lean_ctor_get(x_49, 0);
x_67 = lean_ctor_get(x_49, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_49);
x_68 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_68, 0, x_42);
lean_ctor_set(x_68, 1, x_43);
lean_ctor_set(x_68, 2, x_44);
lean_ctor_set_uint64(x_68, sizeof(void*)*3, x_45);
x_69 = (uint8_t)((x_45 << 24) >> 61);
x_70 = lean_expr_update_lambda(x_68, x_69, x_47, x_66);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_array_uset(x_71, x_7, x_4);
lean_inc(x_70);
x_75 = lean_array_uset(x_72, x_7, x_70);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
case 7:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint64_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_4, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_4, 2);
lean_inc(x_80);
x_81 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_79);
lean_inc(x_2);
x_82 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_79, x_5);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_80);
x_85 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_80, x_84);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; uint8_t x_92; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_ctor_get(x_85, 1);
x_89 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_89, 0, x_78);
lean_ctor_set(x_89, 1, x_79);
lean_ctor_set(x_89, 2, x_80);
lean_ctor_set_uint64(x_89, sizeof(void*)*3, x_81);
x_90 = (uint8_t)((x_81 << 24) >> 61);
x_91 = lean_expr_update_forall(x_89, x_90, x_83, x_87);
x_92 = !lean_is_exclusive(x_88);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_88, 0);
x_94 = lean_ctor_get(x_88, 1);
x_95 = lean_array_uset(x_93, x_7, x_4);
lean_inc(x_91);
x_96 = lean_array_uset(x_94, x_7, x_91);
lean_ctor_set(x_88, 1, x_96);
lean_ctor_set(x_88, 0, x_95);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_88, 0);
x_98 = lean_ctor_get(x_88, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_88);
x_99 = lean_array_uset(x_97, x_7, x_4);
lean_inc(x_91);
x_100 = lean_array_uset(x_98, x_7, x_91);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_85, 1, x_101);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_102 = lean_ctor_get(x_85, 0);
x_103 = lean_ctor_get(x_85, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_85);
x_104 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_104, 0, x_78);
lean_ctor_set(x_104, 1, x_79);
lean_ctor_set(x_104, 2, x_80);
lean_ctor_set_uint64(x_104, sizeof(void*)*3, x_81);
x_105 = (uint8_t)((x_81 << 24) >> 61);
x_106 = lean_expr_update_forall(x_104, x_105, x_83, x_102);
x_107 = lean_ctor_get(x_103, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = lean_array_uset(x_107, x_7, x_4);
lean_inc(x_106);
x_111 = lean_array_uset(x_108, x_7, x_106);
if (lean_is_scalar(x_109)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_109;
}
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
case 8:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_114 = lean_ctor_get(x_4, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_4, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_4, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_4, 3);
lean_inc(x_117);
x_118 = lean_ctor_get_uint64(x_4, sizeof(void*)*4);
lean_inc(x_115);
lean_inc(x_2);
x_119 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_115, x_5);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_116);
lean_inc(x_2);
x_122 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_116, x_121);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_117);
x_125 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_117, x_124);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
x_129 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_115);
lean_ctor_set(x_129, 2, x_116);
lean_ctor_set(x_129, 3, x_117);
lean_ctor_set_uint64(x_129, sizeof(void*)*4, x_118);
x_130 = lean_expr_update_let(x_129, x_120, x_123, x_127);
x_131 = !lean_is_exclusive(x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_128, 0);
x_133 = lean_ctor_get(x_128, 1);
x_134 = lean_array_uset(x_132, x_7, x_4);
lean_inc(x_130);
x_135 = lean_array_uset(x_133, x_7, x_130);
lean_ctor_set(x_128, 1, x_135);
lean_ctor_set(x_128, 0, x_134);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_136 = lean_ctor_get(x_128, 0);
x_137 = lean_ctor_get(x_128, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_128);
x_138 = lean_array_uset(x_136, x_7, x_4);
lean_inc(x_130);
x_139 = lean_array_uset(x_137, x_7, x_130);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_125, 1, x_140);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_125, 0);
x_142 = lean_ctor_get(x_125, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_125);
x_143 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_143, 0, x_114);
lean_ctor_set(x_143, 1, x_115);
lean_ctor_set(x_143, 2, x_116);
lean_ctor_set(x_143, 3, x_117);
lean_ctor_set_uint64(x_143, sizeof(void*)*4, x_118);
x_144 = lean_expr_update_let(x_143, x_120, x_123, x_141);
x_145 = lean_ctor_get(x_142, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_142, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_147 = x_142;
} else {
 lean_dec_ref(x_142);
 x_147 = lean_box(0);
}
x_148 = lean_array_uset(x_145, x_7, x_4);
lean_inc(x_144);
x_149 = lean_array_uset(x_146, x_7, x_144);
if (lean_is_scalar(x_147)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_147;
}
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
case 10:
{
lean_object* x_152; lean_object* x_153; uint64_t x_154; lean_object* x_155; uint8_t x_156; 
x_152 = lean_ctor_get(x_4, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_4, 1);
lean_inc(x_153);
x_154 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_153);
x_155 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_153, x_5);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
x_159 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_159, 0, x_152);
lean_ctor_set(x_159, 1, x_153);
lean_ctor_set_uint64(x_159, sizeof(void*)*2, x_154);
x_160 = lean_expr_update_mdata(x_159, x_157);
x_161 = !lean_is_exclusive(x_158);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_158, 0);
x_163 = lean_ctor_get(x_158, 1);
x_164 = lean_array_uset(x_162, x_7, x_4);
lean_inc(x_160);
x_165 = lean_array_uset(x_163, x_7, x_160);
lean_ctor_set(x_158, 1, x_165);
lean_ctor_set(x_158, 0, x_164);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_166 = lean_ctor_get(x_158, 0);
x_167 = lean_ctor_get(x_158, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_158);
x_168 = lean_array_uset(x_166, x_7, x_4);
lean_inc(x_160);
x_169 = lean_array_uset(x_167, x_7, x_160);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_155, 1, x_170);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_171 = lean_ctor_get(x_155, 0);
x_172 = lean_ctor_get(x_155, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_155);
x_173 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_173, 0, x_152);
lean_ctor_set(x_173, 1, x_153);
lean_ctor_set_uint64(x_173, sizeof(void*)*2, x_154);
x_174 = lean_expr_update_mdata(x_173, x_171);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_177 = x_172;
} else {
 lean_dec_ref(x_172);
 x_177 = lean_box(0);
}
x_178 = lean_array_uset(x_175, x_7, x_4);
lean_inc(x_174);
x_179 = lean_array_uset(x_176, x_7, x_174);
if (lean_is_scalar(x_177)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_177;
}
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_174);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
case 11:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint64_t x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_4, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_4, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_4, 2);
lean_inc(x_184);
x_185 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_184);
x_186 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_3, x_184, x_5);
x_187 = !lean_is_exclusive(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = lean_ctor_get(x_186, 0);
x_189 = lean_ctor_get(x_186, 1);
x_190 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_190, 0, x_182);
lean_ctor_set(x_190, 1, x_183);
lean_ctor_set(x_190, 2, x_184);
lean_ctor_set_uint64(x_190, sizeof(void*)*3, x_185);
x_191 = lean_expr_update_proj(x_190, x_188);
x_192 = !lean_is_exclusive(x_189);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_193 = lean_ctor_get(x_189, 0);
x_194 = lean_ctor_get(x_189, 1);
x_195 = lean_array_uset(x_193, x_7, x_4);
lean_inc(x_191);
x_196 = lean_array_uset(x_194, x_7, x_191);
lean_ctor_set(x_189, 1, x_196);
lean_ctor_set(x_189, 0, x_195);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_189, 0);
x_198 = lean_ctor_get(x_189, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_189);
x_199 = lean_array_uset(x_197, x_7, x_4);
lean_inc(x_191);
x_200 = lean_array_uset(x_198, x_7, x_191);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_ctor_set(x_186, 1, x_201);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_202 = lean_ctor_get(x_186, 0);
x_203 = lean_ctor_get(x_186, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_186);
x_204 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_204, 0, x_182);
lean_ctor_set(x_204, 1, x_183);
lean_ctor_set(x_204, 2, x_184);
lean_ctor_set_uint64(x_204, sizeof(void*)*3, x_185);
x_205 = lean_expr_update_proj(x_204, x_202);
x_206 = lean_ctor_get(x_203, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_208 = x_203;
} else {
 lean_dec_ref(x_203);
 x_208 = lean_box(0);
}
x_209 = lean_array_uset(x_206, x_7, x_4);
lean_inc(x_205);
x_210 = lean_array_uset(x_207, x_7, x_205);
if (lean_is_scalar(x_208)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_208;
}
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_205);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
default: 
{
lean_object* x_213; 
lean_dec(x_2);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_4);
lean_ctor_set(x_213, 1, x_5);
return x_213;
}
}
}
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_215; lean_object* x_216; size_t x_217; uint8_t x_218; 
x_6 = lean_ptr_addr(x_4);
x_7 = x_3 == 0 ? x_6 : x_6 % x_3;
x_215 = lean_ctor_get(x_5, 0);
lean_inc(x_215);
x_216 = lean_array_uget(x_215, x_7);
lean_dec(x_215);
x_217 = lean_ptr_addr(x_216);
lean_dec(x_216);
x_218 = x_217 == x_6;
if (x_218 == 0)
{
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_219 = lean_ctor_get(x_4, 0);
lean_inc(x_219);
lean_inc(x_219);
x_220 = lean_alloc_closure((void*)(l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_220, 0, x_219);
x_221 = lean_array_get_size(x_1);
x_222 = lean_unsigned_to_nat(0u);
x_223 = l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(x_220, x_1, x_222, x_221);
lean_dec(x_221);
if (x_223 == 0)
{
lean_object* x_224; 
lean_dec(x_219);
x_224 = lean_box(0);
x_8 = x_224;
goto block_214;
}
else
{
lean_object* x_225; uint8_t x_226; 
x_225 = l_Lean_mkConst(x_219, x_2);
x_226 = !lean_is_exclusive(x_5);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_227 = lean_ctor_get(x_5, 0);
x_228 = lean_ctor_get(x_5, 1);
x_229 = lean_array_uset(x_227, x_7, x_4);
lean_inc(x_225);
x_230 = lean_array_uset(x_228, x_7, x_225);
lean_ctor_set(x_5, 1, x_230);
lean_ctor_set(x_5, 0, x_229);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_225);
lean_ctor_set(x_231, 1, x_5);
return x_231;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_232 = lean_ctor_get(x_5, 0);
x_233 = lean_ctor_get(x_5, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_5);
x_234 = lean_array_uset(x_232, x_7, x_4);
lean_inc(x_225);
x_235 = lean_array_uset(x_233, x_7, x_225);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_225);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
}
}
else
{
lean_object* x_238; 
x_238 = lean_box(0);
x_8 = x_238;
goto block_214;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_4);
lean_dec(x_2);
x_239 = lean_ctor_get(x_5, 1);
lean_inc(x_239);
x_240 = lean_array_uget(x_239, x_7);
lean_dec(x_239);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_5);
return x_241;
}
block_214:
{
lean_dec(x_8);
switch (lean_obj_tag(x_4)) {
case 5:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_9);
lean_inc(x_2);
x_12 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_9, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
x_15 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_10, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set_uint64(x_19, sizeof(void*)*2, x_11);
x_20 = lean_expr_update_app(x_19, x_13, x_17);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
x_24 = lean_array_uset(x_22, x_7, x_4);
lean_inc(x_20);
x_25 = lean_array_uset(x_23, x_7, x_20);
lean_ctor_set(x_18, 1, x_25);
lean_ctor_set(x_18, 0, x_24);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_array_uset(x_26, x_7, x_4);
lean_inc(x_20);
x_29 = lean_array_uset(x_27, x_7, x_20);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_15, 1, x_30);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_10);
lean_ctor_set_uint64(x_33, sizeof(void*)*2, x_11);
x_34 = lean_expr_update_app(x_33, x_13, x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
x_38 = lean_array_uset(x_35, x_7, x_4);
lean_inc(x_34);
x_39 = lean_array_uset(x_36, x_7, x_34);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
case 6:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_42 = lean_ctor_get(x_4, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_4, 2);
lean_inc(x_44);
x_45 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_43);
lean_inc(x_2);
x_46 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_43, x_5);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_44);
x_49 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_44, x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_43);
lean_ctor_set(x_53, 2, x_44);
lean_ctor_set_uint64(x_53, sizeof(void*)*3, x_45);
x_54 = (uint8_t)((x_45 << 24) >> 61);
x_55 = lean_expr_update_lambda(x_53, x_54, x_47, x_51);
x_56 = !lean_is_exclusive(x_52);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
x_59 = lean_array_uset(x_57, x_7, x_4);
lean_inc(x_55);
x_60 = lean_array_uset(x_58, x_7, x_55);
lean_ctor_set(x_52, 1, x_60);
lean_ctor_set(x_52, 0, x_59);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_52, 0);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_52);
x_63 = lean_array_uset(x_61, x_7, x_4);
lean_inc(x_55);
x_64 = lean_array_uset(x_62, x_7, x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_49, 1, x_65);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_66 = lean_ctor_get(x_49, 0);
x_67 = lean_ctor_get(x_49, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_49);
x_68 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_68, 0, x_42);
lean_ctor_set(x_68, 1, x_43);
lean_ctor_set(x_68, 2, x_44);
lean_ctor_set_uint64(x_68, sizeof(void*)*3, x_45);
x_69 = (uint8_t)((x_45 << 24) >> 61);
x_70 = lean_expr_update_lambda(x_68, x_69, x_47, x_66);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_array_uset(x_71, x_7, x_4);
lean_inc(x_70);
x_75 = lean_array_uset(x_72, x_7, x_70);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
case 7:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint64_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_4, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_4, 2);
lean_inc(x_80);
x_81 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_79);
lean_inc(x_2);
x_82 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_79, x_5);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_80);
x_85 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_80, x_84);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; uint8_t x_92; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_ctor_get(x_85, 1);
x_89 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_89, 0, x_78);
lean_ctor_set(x_89, 1, x_79);
lean_ctor_set(x_89, 2, x_80);
lean_ctor_set_uint64(x_89, sizeof(void*)*3, x_81);
x_90 = (uint8_t)((x_81 << 24) >> 61);
x_91 = lean_expr_update_forall(x_89, x_90, x_83, x_87);
x_92 = !lean_is_exclusive(x_88);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_88, 0);
x_94 = lean_ctor_get(x_88, 1);
x_95 = lean_array_uset(x_93, x_7, x_4);
lean_inc(x_91);
x_96 = lean_array_uset(x_94, x_7, x_91);
lean_ctor_set(x_88, 1, x_96);
lean_ctor_set(x_88, 0, x_95);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_88, 0);
x_98 = lean_ctor_get(x_88, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_88);
x_99 = lean_array_uset(x_97, x_7, x_4);
lean_inc(x_91);
x_100 = lean_array_uset(x_98, x_7, x_91);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_85, 1, x_101);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_102 = lean_ctor_get(x_85, 0);
x_103 = lean_ctor_get(x_85, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_85);
x_104 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_104, 0, x_78);
lean_ctor_set(x_104, 1, x_79);
lean_ctor_set(x_104, 2, x_80);
lean_ctor_set_uint64(x_104, sizeof(void*)*3, x_81);
x_105 = (uint8_t)((x_81 << 24) >> 61);
x_106 = lean_expr_update_forall(x_104, x_105, x_83, x_102);
x_107 = lean_ctor_get(x_103, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = lean_array_uset(x_107, x_7, x_4);
lean_inc(x_106);
x_111 = lean_array_uset(x_108, x_7, x_106);
if (lean_is_scalar(x_109)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_109;
}
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
case 8:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_114 = lean_ctor_get(x_4, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_4, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_4, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_4, 3);
lean_inc(x_117);
x_118 = lean_ctor_get_uint64(x_4, sizeof(void*)*4);
lean_inc(x_115);
lean_inc(x_2);
x_119 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_115, x_5);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_116);
lean_inc(x_2);
x_122 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_116, x_121);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_117);
x_125 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_117, x_124);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
x_129 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_115);
lean_ctor_set(x_129, 2, x_116);
lean_ctor_set(x_129, 3, x_117);
lean_ctor_set_uint64(x_129, sizeof(void*)*4, x_118);
x_130 = lean_expr_update_let(x_129, x_120, x_123, x_127);
x_131 = !lean_is_exclusive(x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_128, 0);
x_133 = lean_ctor_get(x_128, 1);
x_134 = lean_array_uset(x_132, x_7, x_4);
lean_inc(x_130);
x_135 = lean_array_uset(x_133, x_7, x_130);
lean_ctor_set(x_128, 1, x_135);
lean_ctor_set(x_128, 0, x_134);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_136 = lean_ctor_get(x_128, 0);
x_137 = lean_ctor_get(x_128, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_128);
x_138 = lean_array_uset(x_136, x_7, x_4);
lean_inc(x_130);
x_139 = lean_array_uset(x_137, x_7, x_130);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_125, 1, x_140);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_125, 0);
x_142 = lean_ctor_get(x_125, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_125);
x_143 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_143, 0, x_114);
lean_ctor_set(x_143, 1, x_115);
lean_ctor_set(x_143, 2, x_116);
lean_ctor_set(x_143, 3, x_117);
lean_ctor_set_uint64(x_143, sizeof(void*)*4, x_118);
x_144 = lean_expr_update_let(x_143, x_120, x_123, x_141);
x_145 = lean_ctor_get(x_142, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_142, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_147 = x_142;
} else {
 lean_dec_ref(x_142);
 x_147 = lean_box(0);
}
x_148 = lean_array_uset(x_145, x_7, x_4);
lean_inc(x_144);
x_149 = lean_array_uset(x_146, x_7, x_144);
if (lean_is_scalar(x_147)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_147;
}
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
case 10:
{
lean_object* x_152; lean_object* x_153; uint64_t x_154; lean_object* x_155; uint8_t x_156; 
x_152 = lean_ctor_get(x_4, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_4, 1);
lean_inc(x_153);
x_154 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_153);
x_155 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_153, x_5);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
x_159 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_159, 0, x_152);
lean_ctor_set(x_159, 1, x_153);
lean_ctor_set_uint64(x_159, sizeof(void*)*2, x_154);
x_160 = lean_expr_update_mdata(x_159, x_157);
x_161 = !lean_is_exclusive(x_158);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_158, 0);
x_163 = lean_ctor_get(x_158, 1);
x_164 = lean_array_uset(x_162, x_7, x_4);
lean_inc(x_160);
x_165 = lean_array_uset(x_163, x_7, x_160);
lean_ctor_set(x_158, 1, x_165);
lean_ctor_set(x_158, 0, x_164);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_166 = lean_ctor_get(x_158, 0);
x_167 = lean_ctor_get(x_158, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_158);
x_168 = lean_array_uset(x_166, x_7, x_4);
lean_inc(x_160);
x_169 = lean_array_uset(x_167, x_7, x_160);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_155, 1, x_170);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_171 = lean_ctor_get(x_155, 0);
x_172 = lean_ctor_get(x_155, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_155);
x_173 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_173, 0, x_152);
lean_ctor_set(x_173, 1, x_153);
lean_ctor_set_uint64(x_173, sizeof(void*)*2, x_154);
x_174 = lean_expr_update_mdata(x_173, x_171);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_177 = x_172;
} else {
 lean_dec_ref(x_172);
 x_177 = lean_box(0);
}
x_178 = lean_array_uset(x_175, x_7, x_4);
lean_inc(x_174);
x_179 = lean_array_uset(x_176, x_7, x_174);
if (lean_is_scalar(x_177)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_177;
}
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_174);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
case 11:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint64_t x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_4, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_4, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_4, 2);
lean_inc(x_184);
x_185 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_184);
x_186 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_184, x_5);
x_187 = !lean_is_exclusive(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = lean_ctor_get(x_186, 0);
x_189 = lean_ctor_get(x_186, 1);
x_190 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_190, 0, x_182);
lean_ctor_set(x_190, 1, x_183);
lean_ctor_set(x_190, 2, x_184);
lean_ctor_set_uint64(x_190, sizeof(void*)*3, x_185);
x_191 = lean_expr_update_proj(x_190, x_188);
x_192 = !lean_is_exclusive(x_189);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_193 = lean_ctor_get(x_189, 0);
x_194 = lean_ctor_get(x_189, 1);
x_195 = lean_array_uset(x_193, x_7, x_4);
lean_inc(x_191);
x_196 = lean_array_uset(x_194, x_7, x_191);
lean_ctor_set(x_189, 1, x_196);
lean_ctor_set(x_189, 0, x_195);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_189, 0);
x_198 = lean_ctor_get(x_189, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_189);
x_199 = lean_array_uset(x_197, x_7, x_4);
lean_inc(x_191);
x_200 = lean_array_uset(x_198, x_7, x_191);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_ctor_set(x_186, 1, x_201);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_202 = lean_ctor_get(x_186, 0);
x_203 = lean_ctor_get(x_186, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_186);
x_204 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_204, 0, x_182);
lean_ctor_set(x_204, 1, x_183);
lean_ctor_set(x_204, 2, x_184);
lean_ctor_set_uint64(x_204, sizeof(void*)*3, x_185);
x_205 = lean_expr_update_proj(x_204, x_202);
x_206 = lean_ctor_get(x_203, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_208 = x_203;
} else {
 lean_dec_ref(x_203);
 x_208 = lean_box(0);
}
x_209 = lean_array_uset(x_206, x_7, x_4);
lean_inc(x_205);
x_210 = lean_array_uset(x_207, x_7, x_205);
if (lean_is_scalar(x_208)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_208;
}
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_205);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
default: 
{
lean_object* x_213; 
lean_dec(x_2);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_4);
lean_ctor_set(x_213, 1, x_5);
return x_213;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = x_6;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_array_uget(x_6, x_5);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_6, x_5, x_10);
x_12 = x_9;
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_14 = lean_ctor_get(x_12, 4);
x_15 = lean_ctor_get(x_12, 5);
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = 8192;
x_18 = l_Lean_Expr_ReplaceImpl_initCache;
lean_inc(x_3);
x_19 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_3, x_17, x_14, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_3);
x_21 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_3, x_17, x_15, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_2);
lean_ctor_set(x_12, 5, x_22);
lean_ctor_set(x_12, 4, x_20);
lean_ctor_set(x_12, 1, x_2);
x_23 = 1;
x_24 = x_5 + x_23;
x_25 = x_12;
x_26 = lean_array_uset(x_11, x_5, x_25);
x_5 = x_24;
x_6 = x_26;
goto _start;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; 
x_28 = lean_ctor_get(x_12, 0);
x_29 = lean_ctor_get_uint8(x_12, sizeof(void*)*6);
x_30 = lean_ctor_get(x_12, 2);
x_31 = lean_ctor_get(x_12, 3);
x_32 = lean_ctor_get(x_12, 4);
x_33 = lean_ctor_get(x_12, 5);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_28);
lean_dec(x_12);
x_34 = 8192;
x_35 = l_Lean_Expr_ReplaceImpl_initCache;
lean_inc(x_3);
x_36 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_3, x_34, x_32, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_3);
x_38 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_3, x_34, x_33, x_35);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_2);
x_40 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_2);
lean_ctor_set(x_40, 2, x_30);
lean_ctor_set(x_40, 3, x_31);
lean_ctor_set(x_40, 4, x_37);
lean_ctor_set(x_40, 5, x_39);
lean_ctor_set_uint8(x_40, sizeof(void*)*6, x_29);
x_41 = 1;
x_42 = x_5 + x_41;
x_43 = x_40;
x_44 = lean_array_uset(x_11, x_5, x_43);
x_5 = x_42;
x_6 = x_44;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_fixLevelParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon(x_1);
x_12 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = l_List_map___at_Lean_Meta_addInstance___spec__1(x_14);
x_16 = lean_array_get_size(x_11);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
lean_inc(x_11);
x_19 = x_11;
x_20 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3(x_11, x_14, x_15, x_17, x_18, x_19);
lean_dec(x_11);
x_21 = x_20;
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_12);
lean_inc(x_22);
x_24 = l_List_map___at_Lean_Meta_addInstance___spec__1(x_22);
x_25 = lean_array_get_size(x_11);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
lean_inc(x_11);
x_28 = x_11;
x_29 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3(x_11, x_22, x_24, x_26, x_27, x_28);
lean_dec(x_11);
x_30 = x_29;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_23);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_11);
x_32 = !lean_is_exclusive(x_12);
if (x_32 == 0)
{
return x_12;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_12);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__3(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_fixLevelParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_fixLevelParams(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(uint8_t x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_4 < x_3;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
x_15 = lean_array_uget(x_2, x_4);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_6);
x_19 = l_Lean_Elab_Term_applyAttributesAt(x_16, x_18, x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 1;
x_22 = x_4 + x_21;
x_23 = lean_box(0);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_Elab_applyAttributesOf(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = lean_box(0);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_2, x_1, x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_13, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_applyAttributesOf(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 5);
lean_inc(x_13);
x_14 = l_Lean_Elab_DefKind_isTheorem(x_8);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Elab_DefKind_isExample(x_8);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_1, 5);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 4);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_1, 0);
lean_dec(x_22);
lean_inc(x_11);
x_23 = l_Lean_Meta_abstractNestedProofs(x_11, x_13, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_1, 5, x_25);
lean_ctor_set(x_23, 0, x_1);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_1, 5, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; 
lean_dec(x_1);
lean_inc(x_11);
x_33 = l_Lean_Meta_abstractNestedProofs(x_11, x_13, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_9);
lean_ctor_set(x_37, 2, x_10);
lean_ctor_set(x_37, 3, x_11);
lean_ctor_set(x_37, 4, x_12);
lean_ctor_set(x_37, 5, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*6, x_8);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_39 = lean_ctor_get(x_33, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_41 = x_33;
} else {
 lean_dec_ref(x_33);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
lean_object* x_43; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_6);
return x_43;
}
}
else
{
lean_object* x_44; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_6);
return x_44;
}
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_Lean_KernelException_toMessageData(x_1, x_7);
x_9 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_8, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_add_decl(x_10, x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2(x_12, x_2, x_3, x_4, x_5, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_14, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_4);
return x_15;
}
}
}
lean_object* l_Lean_Elab_addAsAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 3);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2 + 3);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 3);
x_18 = l_Lean_replaceRef(x_7, x_17);
lean_dec(x_17);
lean_ctor_set(x_4, 3, x_18);
x_19 = l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1(x_15, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_15);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 5);
x_26 = lean_ctor_get(x_4, 6);
x_27 = lean_ctor_get(x_4, 7);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_28 = l_Lean_replaceRef(x_7, x_23);
lean_dec(x_23);
x_29 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_26);
lean_ctor_set(x_29, 7, x_27);
x_30 = l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1(x_15, x_2, x_3, x_29, x_5, x_6);
lean_dec(x_15);
return x_30;
}
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwKernelException___at_Lean_Elab_addAsAxiom___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_addDecl___at_Lean_Elab_addAsAxiom___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_addAsAxiom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_3 = l_Lean_Elab_DefKind_isTheorem(x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_6, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_2, x_11);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_5, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux_match__1___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l_Lean_Elab_applyAttributesOf(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.PreDefinition.Basic");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.PreDefinition.Basic.0.Lean.Elab.addNonRecAux");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1;
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2;
x_3 = lean_unsigned_to_nat(101u);
x_4 = lean_unsigned_to_nat(29u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 3);
x_13 = l_Lean_replaceRef(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_ctor_set(x_7, 3, x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Elab_abstractNestedProofs(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get_uint8(x_15, sizeof(void*)*6);
switch (x_21) {
case 0:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint32_t x_59; uint32_t x_60; uint32_t x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_53 = lean_ctor_get(x_15, 3);
lean_inc(x_53);
x_54 = lean_ctor_get(x_15, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_15, 4);
lean_inc(x_55);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_ctor_get(x_15, 5);
lean_inc(x_57);
lean_inc(x_57);
x_58 = l_Lean_getMaxHeight(x_20, x_57);
x_59 = lean_unbox_uint32(x_58);
lean_dec(x_58);
x_60 = 1;
x_61 = x_59 + x_60;
x_62 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_62, 0, x_61);
x_63 = lean_ctor_get(x_15, 2);
lean_inc(x_63);
x_64 = lean_ctor_get_uint8(x_63, sizeof(void*)*2 + 3);
lean_dec(x_63);
if (x_64 == 0)
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_65 = 1;
x_66 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_66, 0, x_56);
lean_ctor_set(x_66, 1, x_57);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set_uint8(x_66, sizeof(void*)*3, x_65);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_22 = x_67;
goto block_52;
}
else
{
uint8_t x_68; lean_object* x_69; lean_object* x_70; 
x_68 = 0;
x_69 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_69, 0, x_56);
lean_ctor_set(x_69, 1, x_57);
lean_ctor_set(x_69, 2, x_62);
lean_ctor_set_uint8(x_69, sizeof(void*)*3, x_68);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_22 = x_70;
goto block_52;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_20);
x_71 = lean_ctor_get(x_15, 3);
lean_inc(x_71);
x_72 = lean_ctor_get(x_15, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_15, 4);
lean_inc(x_73);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
lean_ctor_set(x_74, 2, x_73);
x_75 = lean_ctor_get(x_15, 5);
lean_inc(x_75);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_22 = x_77;
goto block_52;
}
case 2:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_20);
x_78 = l_Lean_instInhabitedDeclaration;
x_79 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3;
x_80 = lean_panic_fn(x_78, x_79);
x_22 = x_80;
goto block_52;
}
case 3:
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_20);
x_81 = lean_ctor_get(x_15, 3);
lean_inc(x_81);
x_82 = lean_ctor_get(x_15, 1);
lean_inc(x_82);
x_83 = lean_ctor_get(x_15, 4);
lean_inc(x_83);
x_84 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_83);
x_85 = lean_ctor_get(x_15, 5);
lean_inc(x_85);
x_86 = lean_ctor_get(x_15, 2);
lean_inc(x_86);
x_87 = lean_ctor_get_uint8(x_86, sizeof(void*)*2 + 3);
lean_dec(x_86);
x_88 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_88, 0, x_84);
lean_ctor_set(x_88, 1, x_85);
lean_ctor_set_uint8(x_88, sizeof(void*)*2, x_87);
x_89 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_22 = x_89;
goto block_52;
}
default: 
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
lean_dec(x_20);
x_90 = lean_ctor_get(x_15, 3);
lean_inc(x_90);
x_91 = lean_ctor_get(x_15, 1);
lean_inc(x_91);
x_92 = lean_ctor_get(x_15, 4);
lean_inc(x_92);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
lean_ctor_set(x_93, 2, x_92);
x_94 = lean_ctor_get(x_15, 2);
lean_inc(x_94);
x_95 = lean_ctor_get_uint8(x_94, sizeof(void*)*2 + 3);
lean_dec(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_15, 5);
lean_inc(x_96);
x_97 = lean_box(1);
x_98 = 1;
x_99 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_99, 0, x_93);
lean_ctor_set(x_99, 1, x_96);
lean_ctor_set(x_99, 2, x_97);
lean_ctor_set_uint8(x_99, sizeof(void*)*3, x_98);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_22 = x_100;
goto block_52;
}
else
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; 
x_101 = lean_ctor_get(x_15, 5);
lean_inc(x_101);
x_102 = lean_box(1);
x_103 = 0;
x_104 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_104, 0, x_93);
lean_ctor_set(x_104, 1, x_101);
lean_ctor_set(x_104, 2, x_102);
lean_ctor_set_uint8(x_104, sizeof(void*)*3, x_103);
x_105 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_22 = x_105;
goto block_52;
}
}
}
block_52:
{
lean_object* x_23; 
lean_inc(x_7);
lean_inc(x_3);
x_23 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_15);
x_26 = lean_array_push(x_25, x_15);
x_27 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_28 = l_Lean_Elab_applyAttributesOf(x_26, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_28) == 0)
{
if (x_2 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
lean_dec(x_22);
lean_dec(x_15);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 1;
x_31 = l_Lean_Elab_applyAttributesOf(x_26, x_30, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_26);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_15);
lean_dec(x_15);
if (x_33 == 0)
{
uint8_t x_34; lean_object* x_35; 
lean_dec(x_22);
x_34 = 1;
x_35 = l_Lean_Elab_applyAttributesOf(x_26, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_26);
return x_35;
}
else
{
lean_object* x_36; 
lean_inc(x_7);
lean_inc(x_3);
x_36 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__7(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = 1;
x_39 = l_Lean_Elab_applyAttributesOf(x_26, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_26);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 0);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_28);
if (x_44 == 0)
{
return x_28;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_28, 0);
x_46 = lean_ctor_get(x_28, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_28);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_23);
if (x_48 == 0)
{
return x_23;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_23, 0);
x_50 = lean_ctor_get(x_23, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_23);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_106 = !lean_is_exclusive(x_14);
if (x_106 == 0)
{
return x_14;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_14, 0);
x_108 = lean_ctor_get(x_14, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_14);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_110 = lean_ctor_get(x_7, 0);
x_111 = lean_ctor_get(x_7, 1);
x_112 = lean_ctor_get(x_7, 2);
x_113 = lean_ctor_get(x_7, 3);
x_114 = lean_ctor_get(x_7, 4);
x_115 = lean_ctor_get(x_7, 5);
x_116 = lean_ctor_get(x_7, 6);
x_117 = lean_ctor_get(x_7, 7);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_7);
x_118 = l_Lean_replaceRef(x_10, x_113);
lean_dec(x_113);
lean_dec(x_10);
x_119 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_119, 0, x_110);
lean_ctor_set(x_119, 1, x_111);
lean_ctor_set(x_119, 2, x_112);
lean_ctor_set(x_119, 3, x_118);
lean_ctor_set(x_119, 4, x_114);
lean_ctor_set(x_119, 5, x_115);
lean_ctor_set(x_119, 6, x_116);
lean_ctor_set(x_119, 7, x_117);
lean_inc(x_8);
lean_inc(x_119);
lean_inc(x_6);
lean_inc(x_5);
x_120 = l_Lean_Elab_abstractNestedProofs(x_1, x_5, x_6, x_119, x_8, x_9);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_st_ref_get(x_8, x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get_uint8(x_121, sizeof(void*)*6);
switch (x_127) {
case 0:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint32_t x_165; uint32_t x_166; uint32_t x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_159 = lean_ctor_get(x_121, 3);
lean_inc(x_159);
x_160 = lean_ctor_get(x_121, 1);
lean_inc(x_160);
x_161 = lean_ctor_get(x_121, 4);
lean_inc(x_161);
x_162 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_160);
lean_ctor_set(x_162, 2, x_161);
x_163 = lean_ctor_get(x_121, 5);
lean_inc(x_163);
lean_inc(x_163);
x_164 = l_Lean_getMaxHeight(x_126, x_163);
x_165 = lean_unbox_uint32(x_164);
lean_dec(x_164);
x_166 = 1;
x_167 = x_165 + x_166;
x_168 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_168, 0, x_167);
x_169 = lean_ctor_get(x_121, 2);
lean_inc(x_169);
x_170 = lean_ctor_get_uint8(x_169, sizeof(void*)*2 + 3);
lean_dec(x_169);
if (x_170 == 0)
{
uint8_t x_171; lean_object* x_172; lean_object* x_173; 
x_171 = 1;
x_172 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_172, 0, x_162);
lean_ctor_set(x_172, 1, x_163);
lean_ctor_set(x_172, 2, x_168);
lean_ctor_set_uint8(x_172, sizeof(void*)*3, x_171);
x_173 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_128 = x_173;
goto block_158;
}
else
{
uint8_t x_174; lean_object* x_175; lean_object* x_176; 
x_174 = 0;
x_175 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_175, 0, x_162);
lean_ctor_set(x_175, 1, x_163);
lean_ctor_set(x_175, 2, x_168);
lean_ctor_set_uint8(x_175, sizeof(void*)*3, x_174);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_128 = x_176;
goto block_158;
}
}
case 1:
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_126);
x_177 = lean_ctor_get(x_121, 3);
lean_inc(x_177);
x_178 = lean_ctor_get(x_121, 1);
lean_inc(x_178);
x_179 = lean_ctor_get(x_121, 4);
lean_inc(x_179);
x_180 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_178);
lean_ctor_set(x_180, 2, x_179);
x_181 = lean_ctor_get(x_121, 5);
lean_inc(x_181);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_183, 0, x_182);
x_128 = x_183;
goto block_158;
}
case 2:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_126);
x_184 = l_Lean_instInhabitedDeclaration;
x_185 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3;
x_186 = lean_panic_fn(x_184, x_185);
x_128 = x_186;
goto block_158;
}
case 3:
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; lean_object* x_195; 
lean_dec(x_126);
x_187 = lean_ctor_get(x_121, 3);
lean_inc(x_187);
x_188 = lean_ctor_get(x_121, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_121, 4);
lean_inc(x_189);
x_190 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
lean_ctor_set(x_190, 2, x_189);
x_191 = lean_ctor_get(x_121, 5);
lean_inc(x_191);
x_192 = lean_ctor_get(x_121, 2);
lean_inc(x_192);
x_193 = lean_ctor_get_uint8(x_192, sizeof(void*)*2 + 3);
lean_dec(x_192);
x_194 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_194, 0, x_190);
lean_ctor_set(x_194, 1, x_191);
lean_ctor_set_uint8(x_194, sizeof(void*)*2, x_193);
x_195 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_195, 0, x_194);
x_128 = x_195;
goto block_158;
}
default: 
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
lean_dec(x_126);
x_196 = lean_ctor_get(x_121, 3);
lean_inc(x_196);
x_197 = lean_ctor_get(x_121, 1);
lean_inc(x_197);
x_198 = lean_ctor_get(x_121, 4);
lean_inc(x_198);
x_199 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_197);
lean_ctor_set(x_199, 2, x_198);
x_200 = lean_ctor_get(x_121, 2);
lean_inc(x_200);
x_201 = lean_ctor_get_uint8(x_200, sizeof(void*)*2 + 3);
lean_dec(x_200);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; uint8_t x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_121, 5);
lean_inc(x_202);
x_203 = lean_box(1);
x_204 = 1;
x_205 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_205, 0, x_199);
lean_ctor_set(x_205, 1, x_202);
lean_ctor_set(x_205, 2, x_203);
lean_ctor_set_uint8(x_205, sizeof(void*)*3, x_204);
x_206 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_206, 0, x_205);
x_128 = x_206;
goto block_158;
}
else
{
lean_object* x_207; lean_object* x_208; uint8_t x_209; lean_object* x_210; lean_object* x_211; 
x_207 = lean_ctor_get(x_121, 5);
lean_inc(x_207);
x_208 = lean_box(1);
x_209 = 0;
x_210 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_210, 0, x_199);
lean_ctor_set(x_210, 1, x_207);
lean_ctor_set(x_210, 2, x_208);
lean_ctor_set_uint8(x_210, sizeof(void*)*3, x_209);
x_211 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_211, 0, x_210);
x_128 = x_211;
goto block_158;
}
}
}
block_158:
{
lean_object* x_129; 
lean_inc(x_119);
lean_inc(x_3);
x_129 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_128, x_3, x_4, x_5, x_6, x_119, x_8, x_125);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
lean_dec(x_129);
x_131 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_121);
x_132 = lean_array_push(x_131, x_121);
x_133 = 0;
lean_inc(x_8);
lean_inc(x_119);
lean_inc(x_3);
x_134 = l_Lean_Elab_applyAttributesOf(x_132, x_133, x_3, x_4, x_5, x_6, x_119, x_8, x_130);
if (lean_obj_tag(x_134) == 0)
{
if (x_2 == 0)
{
lean_object* x_135; uint8_t x_136; lean_object* x_137; 
lean_dec(x_128);
lean_dec(x_121);
x_135 = lean_ctor_get(x_134, 1);
lean_inc(x_135);
lean_dec(x_134);
x_136 = 1;
x_137 = l_Lean_Elab_applyAttributesOf(x_132, x_136, x_3, x_4, x_5, x_6, x_119, x_8, x_135);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_132);
return x_137;
}
else
{
lean_object* x_138; uint8_t x_139; 
x_138 = lean_ctor_get(x_134, 1);
lean_inc(x_138);
lean_dec(x_134);
x_139 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_121);
lean_dec(x_121);
if (x_139 == 0)
{
uint8_t x_140; lean_object* x_141; 
lean_dec(x_128);
x_140 = 1;
x_141 = l_Lean_Elab_applyAttributesOf(x_132, x_140, x_3, x_4, x_5, x_6, x_119, x_8, x_138);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_132);
return x_141;
}
else
{
lean_object* x_142; 
lean_inc(x_119);
lean_inc(x_3);
x_142 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__7(x_128, x_3, x_4, x_5, x_6, x_119, x_8, x_138);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; uint8_t x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
lean_dec(x_142);
x_144 = 1;
x_145 = l_Lean_Elab_applyAttributesOf(x_132, x_144, x_3, x_4, x_5, x_6, x_119, x_8, x_143);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_132);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_132);
lean_dec(x_119);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_146 = lean_ctor_get(x_142, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_142, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_148 = x_142;
} else {
 lean_dec_ref(x_142);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_132);
lean_dec(x_128);
lean_dec(x_121);
lean_dec(x_119);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_150 = lean_ctor_get(x_134, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_134, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_152 = x_134;
} else {
 lean_dec_ref(x_134);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_128);
lean_dec(x_121);
lean_dec(x_119);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_154 = lean_ctor_get(x_129, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_129, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_156 = x_129;
} else {
 lean_dec_ref(x_129);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_119);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_212 = lean_ctor_get(x_120, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_120, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_214 = x_120;
} else {
 lean_dec_ref(x_120);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_212);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 1;
x_10 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_addAndCompileNonRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_addAndCompileNonRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_addNonRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 0;
x_10 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_addNonRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_addNonRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_5, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 4);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_ctor_get(x_5, 5);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set_uint8(x_13, sizeof(void*)*3, x_1);
x_14 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_14);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 4);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_ctor_get(x_15, 5);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*3, x_1);
x_24 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_1, x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = l_Lean_Elab_instInhabitedPreDefinition;
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_get(x_10, x_1, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_1);
x_14 = lean_array_to_list(lean_box(0), x_1);
x_15 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_2, x_14);
x_16 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 3);
x_19 = l_Lean_replaceRef(x_13, x_18);
lean_dec(x_18);
lean_dec(x_13);
lean_ctor_set(x_7, 3, x_19);
lean_inc(x_7);
lean_inc(x_3);
x_20 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_23 = l_Lean_Elab_applyAttributesOf(x_1, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_7);
lean_inc(x_3);
x_25 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__7(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 1;
x_28 = l_Lean_Elab_applyAttributesOf(x_1, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_1);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_28);
if (x_35 == 0)
{
return x_28;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_28, 0);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_28);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_25, 0);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_25);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_23);
if (x_43 == 0)
{
return x_23;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_23, 0);
x_45 = lean_ctor_get(x_23, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_23);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_7);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_20);
if (x_47 == 0)
{
return x_20;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_20, 0);
x_49 = lean_ctor_get(x_20, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_20);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_51 = lean_ctor_get(x_7, 0);
x_52 = lean_ctor_get(x_7, 1);
x_53 = lean_ctor_get(x_7, 2);
x_54 = lean_ctor_get(x_7, 3);
x_55 = lean_ctor_get(x_7, 4);
x_56 = lean_ctor_get(x_7, 5);
x_57 = lean_ctor_get(x_7, 6);
x_58 = lean_ctor_get(x_7, 7);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_7);
x_59 = l_Lean_replaceRef(x_13, x_54);
lean_dec(x_54);
lean_dec(x_13);
x_60 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_60, 0, x_51);
lean_ctor_set(x_60, 1, x_52);
lean_ctor_set(x_60, 2, x_53);
lean_ctor_set(x_60, 3, x_59);
lean_ctor_set(x_60, 4, x_55);
lean_ctor_set(x_60, 5, x_56);
lean_ctor_set(x_60, 6, x_57);
lean_ctor_set(x_60, 7, x_58);
lean_inc(x_60);
lean_inc(x_3);
x_61 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_16, x_3, x_4, x_5, x_6, x_60, x_8, x_9);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = 0;
lean_inc(x_8);
lean_inc(x_60);
lean_inc(x_3);
x_64 = l_Lean_Elab_applyAttributesOf(x_1, x_63, x_3, x_4, x_5, x_6, x_60, x_8, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
lean_inc(x_60);
lean_inc(x_3);
x_66 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__7(x_16, x_3, x_4, x_5, x_6, x_60, x_8, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = 1;
x_69 = l_Lean_Elab_applyAttributesOf(x_1, x_68, x_3, x_4, x_5, x_6, x_60, x_8, x_67);
lean_dec(x_1);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
x_72 = lean_box(0);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_69, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_76 = x_69;
} else {
 lean_dec_ref(x_69);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_60);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_78 = lean_ctor_get(x_66, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_80 = x_66;
} else {
 lean_dec_ref(x_66);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_60);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_82 = lean_ctor_get(x_64, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_64, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_84 = x_64;
} else {
 lean_dec_ref(x_64);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_60);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_86 = lean_ctor_get(x_61, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_61, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_88 = x_61;
} else {
 lean_dec_ref(x_61);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_addAndCompileUnsafe(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_215; lean_object* x_216; size_t x_217; uint8_t x_218; 
x_6 = lean_ptr_addr(x_4);
x_7 = x_3 == 0 ? x_6 : x_6 % x_3;
x_215 = lean_ctor_get(x_5, 0);
lean_inc(x_215);
x_216 = lean_array_uget(x_215, x_7);
lean_dec(x_215);
x_217 = lean_ptr_addr(x_216);
lean_dec(x_216);
x_218 = x_217 == x_6;
if (x_218 == 0)
{
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_219 = lean_ctor_get(x_4, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_4, 1);
lean_inc(x_220);
lean_inc(x_219);
x_221 = lean_alloc_closure((void*)(l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_fixLevelParams___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_221, 0, x_219);
x_222 = lean_unsigned_to_nat(0u);
x_223 = l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(x_221, x_1, x_222, x_2);
if (x_223 == 0)
{
lean_object* x_224; 
lean_dec(x_220);
lean_dec(x_219);
x_224 = lean_box(0);
x_8 = x_224;
goto block_214;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_225 = l_Lean_Compiler_mkUnsafeRecName___closed__1;
x_226 = lean_name_mk_string(x_219, x_225);
x_227 = l_Lean_mkConst(x_226, x_220);
x_228 = !lean_is_exclusive(x_5);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_229 = lean_ctor_get(x_5, 0);
x_230 = lean_ctor_get(x_5, 1);
x_231 = lean_array_uset(x_229, x_7, x_4);
lean_inc(x_227);
x_232 = lean_array_uset(x_230, x_7, x_227);
lean_ctor_set(x_5, 1, x_232);
lean_ctor_set(x_5, 0, x_231);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_227);
lean_ctor_set(x_233, 1, x_5);
return x_233;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_234 = lean_ctor_get(x_5, 0);
x_235 = lean_ctor_get(x_5, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_5);
x_236 = lean_array_uset(x_234, x_7, x_4);
lean_inc(x_227);
x_237 = lean_array_uset(x_235, x_7, x_227);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_227);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
else
{
lean_object* x_240; 
x_240 = lean_box(0);
x_8 = x_240;
goto block_214;
}
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_4);
x_241 = lean_ctor_get(x_5, 1);
lean_inc(x_241);
x_242 = lean_array_uget(x_241, x_7);
lean_dec(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_5);
return x_243;
}
block_214:
{
lean_dec(x_8);
switch (lean_obj_tag(x_4)) {
case 5:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_9);
x_12 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_9, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
x_15 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_10, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set_uint64(x_19, sizeof(void*)*2, x_11);
x_20 = lean_expr_update_app(x_19, x_13, x_17);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
x_24 = lean_array_uset(x_22, x_7, x_4);
lean_inc(x_20);
x_25 = lean_array_uset(x_23, x_7, x_20);
lean_ctor_set(x_18, 1, x_25);
lean_ctor_set(x_18, 0, x_24);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_array_uset(x_26, x_7, x_4);
lean_inc(x_20);
x_29 = lean_array_uset(x_27, x_7, x_20);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_15, 1, x_30);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_10);
lean_ctor_set_uint64(x_33, sizeof(void*)*2, x_11);
x_34 = lean_expr_update_app(x_33, x_13, x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
x_38 = lean_array_uset(x_35, x_7, x_4);
lean_inc(x_34);
x_39 = lean_array_uset(x_36, x_7, x_34);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
case 6:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_42 = lean_ctor_get(x_4, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_4, 2);
lean_inc(x_44);
x_45 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_43);
x_46 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_43, x_5);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_44);
x_49 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_44, x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_43);
lean_ctor_set(x_53, 2, x_44);
lean_ctor_set_uint64(x_53, sizeof(void*)*3, x_45);
x_54 = (uint8_t)((x_45 << 24) >> 61);
x_55 = lean_expr_update_lambda(x_53, x_54, x_47, x_51);
x_56 = !lean_is_exclusive(x_52);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
x_59 = lean_array_uset(x_57, x_7, x_4);
lean_inc(x_55);
x_60 = lean_array_uset(x_58, x_7, x_55);
lean_ctor_set(x_52, 1, x_60);
lean_ctor_set(x_52, 0, x_59);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_52, 0);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_52);
x_63 = lean_array_uset(x_61, x_7, x_4);
lean_inc(x_55);
x_64 = lean_array_uset(x_62, x_7, x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_49, 1, x_65);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_66 = lean_ctor_get(x_49, 0);
x_67 = lean_ctor_get(x_49, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_49);
x_68 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_68, 0, x_42);
lean_ctor_set(x_68, 1, x_43);
lean_ctor_set(x_68, 2, x_44);
lean_ctor_set_uint64(x_68, sizeof(void*)*3, x_45);
x_69 = (uint8_t)((x_45 << 24) >> 61);
x_70 = lean_expr_update_lambda(x_68, x_69, x_47, x_66);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_array_uset(x_71, x_7, x_4);
lean_inc(x_70);
x_75 = lean_array_uset(x_72, x_7, x_70);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
case 7:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint64_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_4, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_4, 2);
lean_inc(x_80);
x_81 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_79);
x_82 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_79, x_5);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_80);
x_85 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_80, x_84);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; uint8_t x_92; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_ctor_get(x_85, 1);
x_89 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_89, 0, x_78);
lean_ctor_set(x_89, 1, x_79);
lean_ctor_set(x_89, 2, x_80);
lean_ctor_set_uint64(x_89, sizeof(void*)*3, x_81);
x_90 = (uint8_t)((x_81 << 24) >> 61);
x_91 = lean_expr_update_forall(x_89, x_90, x_83, x_87);
x_92 = !lean_is_exclusive(x_88);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_88, 0);
x_94 = lean_ctor_get(x_88, 1);
x_95 = lean_array_uset(x_93, x_7, x_4);
lean_inc(x_91);
x_96 = lean_array_uset(x_94, x_7, x_91);
lean_ctor_set(x_88, 1, x_96);
lean_ctor_set(x_88, 0, x_95);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_88, 0);
x_98 = lean_ctor_get(x_88, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_88);
x_99 = lean_array_uset(x_97, x_7, x_4);
lean_inc(x_91);
x_100 = lean_array_uset(x_98, x_7, x_91);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_85, 1, x_101);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_102 = lean_ctor_get(x_85, 0);
x_103 = lean_ctor_get(x_85, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_85);
x_104 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_104, 0, x_78);
lean_ctor_set(x_104, 1, x_79);
lean_ctor_set(x_104, 2, x_80);
lean_ctor_set_uint64(x_104, sizeof(void*)*3, x_81);
x_105 = (uint8_t)((x_81 << 24) >> 61);
x_106 = lean_expr_update_forall(x_104, x_105, x_83, x_102);
x_107 = lean_ctor_get(x_103, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = lean_array_uset(x_107, x_7, x_4);
lean_inc(x_106);
x_111 = lean_array_uset(x_108, x_7, x_106);
if (lean_is_scalar(x_109)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_109;
}
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
case 8:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_114 = lean_ctor_get(x_4, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_4, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_4, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_4, 3);
lean_inc(x_117);
x_118 = lean_ctor_get_uint64(x_4, sizeof(void*)*4);
lean_inc(x_115);
x_119 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_115, x_5);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_116);
x_122 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_116, x_121);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_117);
x_125 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_117, x_124);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
x_129 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_115);
lean_ctor_set(x_129, 2, x_116);
lean_ctor_set(x_129, 3, x_117);
lean_ctor_set_uint64(x_129, sizeof(void*)*4, x_118);
x_130 = lean_expr_update_let(x_129, x_120, x_123, x_127);
x_131 = !lean_is_exclusive(x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_128, 0);
x_133 = lean_ctor_get(x_128, 1);
x_134 = lean_array_uset(x_132, x_7, x_4);
lean_inc(x_130);
x_135 = lean_array_uset(x_133, x_7, x_130);
lean_ctor_set(x_128, 1, x_135);
lean_ctor_set(x_128, 0, x_134);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_136 = lean_ctor_get(x_128, 0);
x_137 = lean_ctor_get(x_128, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_128);
x_138 = lean_array_uset(x_136, x_7, x_4);
lean_inc(x_130);
x_139 = lean_array_uset(x_137, x_7, x_130);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_125, 1, x_140);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_125, 0);
x_142 = lean_ctor_get(x_125, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_125);
x_143 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_143, 0, x_114);
lean_ctor_set(x_143, 1, x_115);
lean_ctor_set(x_143, 2, x_116);
lean_ctor_set(x_143, 3, x_117);
lean_ctor_set_uint64(x_143, sizeof(void*)*4, x_118);
x_144 = lean_expr_update_let(x_143, x_120, x_123, x_141);
x_145 = lean_ctor_get(x_142, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_142, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_147 = x_142;
} else {
 lean_dec_ref(x_142);
 x_147 = lean_box(0);
}
x_148 = lean_array_uset(x_145, x_7, x_4);
lean_inc(x_144);
x_149 = lean_array_uset(x_146, x_7, x_144);
if (lean_is_scalar(x_147)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_147;
}
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
case 10:
{
lean_object* x_152; lean_object* x_153; uint64_t x_154; lean_object* x_155; uint8_t x_156; 
x_152 = lean_ctor_get(x_4, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_4, 1);
lean_inc(x_153);
x_154 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_153);
x_155 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_153, x_5);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
x_159 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_159, 0, x_152);
lean_ctor_set(x_159, 1, x_153);
lean_ctor_set_uint64(x_159, sizeof(void*)*2, x_154);
x_160 = lean_expr_update_mdata(x_159, x_157);
x_161 = !lean_is_exclusive(x_158);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_158, 0);
x_163 = lean_ctor_get(x_158, 1);
x_164 = lean_array_uset(x_162, x_7, x_4);
lean_inc(x_160);
x_165 = lean_array_uset(x_163, x_7, x_160);
lean_ctor_set(x_158, 1, x_165);
lean_ctor_set(x_158, 0, x_164);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_166 = lean_ctor_get(x_158, 0);
x_167 = lean_ctor_get(x_158, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_158);
x_168 = lean_array_uset(x_166, x_7, x_4);
lean_inc(x_160);
x_169 = lean_array_uset(x_167, x_7, x_160);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_155, 1, x_170);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_171 = lean_ctor_get(x_155, 0);
x_172 = lean_ctor_get(x_155, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_155);
x_173 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_173, 0, x_152);
lean_ctor_set(x_173, 1, x_153);
lean_ctor_set_uint64(x_173, sizeof(void*)*2, x_154);
x_174 = lean_expr_update_mdata(x_173, x_171);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_177 = x_172;
} else {
 lean_dec_ref(x_172);
 x_177 = lean_box(0);
}
x_178 = lean_array_uset(x_175, x_7, x_4);
lean_inc(x_174);
x_179 = lean_array_uset(x_176, x_7, x_174);
if (lean_is_scalar(x_177)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_177;
}
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_174);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
case 11:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint64_t x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_4, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_4, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_4, 2);
lean_inc(x_184);
x_185 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_184);
x_186 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_3, x_184, x_5);
x_187 = !lean_is_exclusive(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = lean_ctor_get(x_186, 0);
x_189 = lean_ctor_get(x_186, 1);
x_190 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_190, 0, x_182);
lean_ctor_set(x_190, 1, x_183);
lean_ctor_set(x_190, 2, x_184);
lean_ctor_set_uint64(x_190, sizeof(void*)*3, x_185);
x_191 = lean_expr_update_proj(x_190, x_188);
x_192 = !lean_is_exclusive(x_189);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_193 = lean_ctor_get(x_189, 0);
x_194 = lean_ctor_get(x_189, 1);
x_195 = lean_array_uset(x_193, x_7, x_4);
lean_inc(x_191);
x_196 = lean_array_uset(x_194, x_7, x_191);
lean_ctor_set(x_189, 1, x_196);
lean_ctor_set(x_189, 0, x_195);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_189, 0);
x_198 = lean_ctor_get(x_189, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_189);
x_199 = lean_array_uset(x_197, x_7, x_4);
lean_inc(x_191);
x_200 = lean_array_uset(x_198, x_7, x_191);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_ctor_set(x_186, 1, x_201);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_202 = lean_ctor_get(x_186, 0);
x_203 = lean_ctor_get(x_186, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_186);
x_204 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_204, 0, x_182);
lean_ctor_set(x_204, 1, x_183);
lean_ctor_set(x_204, 2, x_184);
lean_ctor_set_uint64(x_204, sizeof(void*)*3, x_185);
x_205 = lean_expr_update_proj(x_204, x_202);
x_206 = lean_ctor_get(x_203, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_208 = x_203;
} else {
 lean_dec_ref(x_203);
 x_208 = lean_box(0);
}
x_209 = lean_array_uset(x_206, x_7, x_4);
lean_inc(x_205);
x_210 = lean_array_uset(x_207, x_7, x_205);
if (lean_is_scalar(x_208)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_208;
}
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_205);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
default: 
{
lean_object* x_213; 
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_4);
lean_ctor_set(x_213, 1, x_5);
return x_213;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_13 = lean_ctor_get(x_11, 3);
x_14 = lean_ctor_get(x_11, 5);
x_15 = lean_ctor_get(x_11, 2);
lean_dec(x_15);
x_16 = l_Lean_Compiler_mkUnsafeRecName___closed__1;
x_17 = lean_name_mk_string(x_13, x_16);
x_18 = 8192;
x_19 = l_Lean_Expr_ReplaceImpl_initCache;
x_20 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_18, x_14, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_instInhabitedModifiers___closed__1;
lean_ctor_set(x_11, 5, x_21);
lean_ctor_set(x_11, 3, x_17);
lean_ctor_set(x_11, 2, x_22);
x_23 = 1;
x_24 = x_4 + x_23;
x_25 = x_11;
x_26 = lean_array_uset(x_10, x_4, x_25);
x_4 = x_24;
x_5 = x_26;
goto _start;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get_uint8(x_11, sizeof(void*)*6);
x_30 = lean_ctor_get(x_11, 1);
x_31 = lean_ctor_get(x_11, 3);
x_32 = lean_ctor_get(x_11, 4);
x_33 = lean_ctor_get(x_11, 5);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_28);
lean_dec(x_11);
x_34 = l_Lean_Compiler_mkUnsafeRecName___closed__1;
x_35 = lean_name_mk_string(x_31, x_34);
x_36 = 8192;
x_37 = l_Lean_Expr_ReplaceImpl_initCache;
x_38 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_36, x_33, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_41 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_41, 0, x_28);
lean_ctor_set(x_41, 1, x_30);
lean_ctor_set(x_41, 2, x_40);
lean_ctor_set(x_41, 3, x_35);
lean_ctor_set(x_41, 4, x_32);
lean_ctor_set(x_41, 5, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*6, x_29);
x_42 = 1;
x_43 = x_4 + x_42;
x_44 = x_41;
x_45 = lean_array_uset(x_10, x_4, x_44);
x_4 = x_43;
x_5 = x_45;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_addAndCompilePartialRec___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_array_get_size(x_1);
x_10 = l_Lean_Elab_addAndCompilePartialRec___closed__1;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_allM___at_Array_all___spec__1___rarg(x_10, x_1, x_11, x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_15 = lean_usize_of_nat(x_9);
x_16 = 0;
lean_inc(x_1);
x_17 = x_1;
x_18 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_9, x_15, x_16, x_17);
lean_dec(x_9);
lean_dec(x_1);
x_19 = x_18;
x_20 = 2;
x_21 = l_Lean_Elab_addAndCompileUnsafe(x_19, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_21;
}
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_addAndCompilePartialRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_SCC(lean_object*);
lean_object* initialize_Lean_Meta_AbstractNestedProofs(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_DefView(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_MkInhabitant(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_PreDefinition_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_SCC(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AbstractNestedProofs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_MkInhabitant(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedPreDefinition___closed__1 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__1);
l_Lean_Elab_instInhabitedPreDefinition = _init_l_Lean_Elab_instInhabitedPreDefinition();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition);
l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1 = _init_l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_instantiateMVarsAtPreDecls___boxed__const__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_levelMVarToParamPreDeclsAux___boxed__const__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shareCommon___boxed__const__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___closed__3);
l_Lean_Elab_addAndCompilePartialRec___closed__1 = _init_l_Lean_Elab_addAndCompilePartialRec___closed__1();
lean_mark_persistent(l_Lean_Elab_addAndCompilePartialRec___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
