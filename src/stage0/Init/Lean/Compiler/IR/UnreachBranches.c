// Lean compiler output
// Module: Init.Lean.Compiler.IR.UnreachBranches
// Imports: Init.Control.Reader Init.Data.Option.Default Init.Lean.Compiler.IR.Format Init.Lean.Compiler.IR.Basic
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
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5___boxed(lean_object*, lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_Value_beq___main(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___main(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_dec_eq(lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___boxed(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_object* l_Array_get_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_object* l_Array_mkArray(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object*, lean_object*);
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat;
lean_object* l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_EnvExtension_Inhabited___rarg___closed__1;
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_HasEmptyc___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1;
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2;
size_t l_USize_shift__right(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__3;
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__4;
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(lean_object*, lean_object*);
lean_object* l_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2(lean_object*, lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__1;
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_joinSep___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Environment_5__envExtensionsRef;
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary___boxed(lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_HasBeq;
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1;
lean_object* l_Array_uget(lean_object*, lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object*);
extern lean_object* l_List_Monad;
extern lean_object* l_Lean_Format_sbracket___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2;
lean_object* l_Array_uset(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_IR_UnreachableBranches_Value_format___main___spec__3(lean_object*);
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_IO_Prim_Ref_set(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_beq(lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___main___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue___main(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_Inhabited;
lean_object* lean_io_initializing(lean_object*);
lean_object* l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_merge___main(lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__2;
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4(lean_object*, uint8_t, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__3;
uint8_t l_Lean_IR_UnreachableBranches_containsCtor___main(lean_object*, lean_object*);
size_t lean_name_hash_usize(lean_object*);
lean_object* l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_infer(lean_object*, lean_object*);
uint8_t l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___boxed(lean_object*);
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1;
extern lean_object* l_Lean_IR_Decl_Inhabited;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt;
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_getD___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object*);
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_infer___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object*);
lean_object* l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1;
lean_object* l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_mkHashMap___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13(lean_object*);
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
lean_object* l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5;
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___main___spec__1(lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_LevelToFormat_Level_toResult___main___spec__1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Environment_8__persistentEnvExtensionsRef;
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8;
lean_object* l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___main___spec__4(lean_object*);
lean_object* l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4;
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_paramInh;
lean_object* l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object*, lean_object*);
lean_object* l_Array_push(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__1;
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_flatten___main___closed__1;
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___rarg(lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6;
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
lean_object* l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(lean_object*);
extern lean_object* l_PersistentArray_getAux___main___rarg___closed__1;
uint8_t l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep___boxed(lean_object*, lean_object*);
lean_object* l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
extern lean_object* l_PersistentArrayNode_Inhabited___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object*, lean_object*);
lean_object* l_EState_bind___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main(lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__2;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__9;
lean_object* l_Lean_IR_Decl_name(lean_object*);
extern lean_object* l_Lean_HasRepr___closed__1;
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_Ref_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object*);
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__6;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* lean_format_group(lean_object*);
lean_object* l_mkPersistentArray___rarg(lean_object*, lean_object*);
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__1;
lean_object* l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(lean_object*, size_t, size_t);
extern lean_object* l_HashMap_Inhabited___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__2;
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l_Array_size(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2;
lean_object* l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1;
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg___boxed(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_SMap_empty___at_Lean_Environment_Inhabited___spec__2___closed__1;
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
lean_object* l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12;
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main___closed__5;
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1;
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_projValue___main___boxed(lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(lean_object*, lean_object*);
size_t l_USize_shift__left(size_t, size_t);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object*);
lean_object* l_Array_set(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1;
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___main___spec__1___boxed(lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__1;
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5(lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5;
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___main___boxed(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_HasToString;
lean_object* l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__4;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
extern lean_object* l_Lean_regNamespacesExtension___closed__5;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_Ref_reset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_Arg_Inhabited;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7;
extern lean_object* l_Lean_IR_Inhabited;
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___boxed(lean_object*);
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(1);
return x_1;
}
}
lean_object* _init_l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq___main___boxed), 2, 0);
return x_1;
}
}
uint8_t l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_isEqvAux___main___rarg(x_1, x_2, lean_box(0), x_7, x_8);
return x_9;
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_1, x_4);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_Value_beq___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_IR_CtorInfo_beq(x_7, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1(x_8, x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
default: 
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_2, 0);
x_17 = 1;
x_18 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3(x_16, x_17, x_15);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
else
{
uint8_t x_20; 
x_20 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5(x_15, x_17, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
}
}
}
}
lean_object* l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__4(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__5(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_HasBeq() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1;
return x_1;
}
}
lean_object* _init_l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_Monad;
x_2 = l_Lean_IR_UnreachableBranches_Value_Inhabited;
x_3 = l_monadInhabited___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = l_panicWithPos___rarg___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_panicWithPos___rarg___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_repr(x_2);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = l_panicWithPos___rarg___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Nat_repr(x_3);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_panicWithPos___rarg___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_4);
x_18 = l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1;
x_19 = lean_panic_fn(x_17);
return x_19;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/home/leonardo/projects/lean4/library/Init/Lean/Compiler/IR/UnreachBranches.lean");
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid addChoice");
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = l_Lean_IR_CtorInfo_beq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_1, x_7, x_3);
lean_ctor_set(x_2, 1, x_12);
return x_2;
}
else
{
lean_object* x_13; 
x_13 = lean_apply_2(x_1, x_5, x_3);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = l_Lean_IR_CtorInfo_beq(x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_1, x_14, x_3);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_apply_2(x_1, x_5, x_3);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_14);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1;
x_23 = lean_unsigned_to_nat(44u);
x_24 = lean_unsigned_to_nat(10u);
x_25 = l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2;
x_26 = l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1(x_22, x_23, x_24, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1;
x_28 = lean_unsigned_to_nat(44u);
x_29 = lean_unsigned_to_nat(10u);
x_30 = l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2;
x_31 = l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1(x_27, x_28, x_29, x_30);
return x_31;
}
}
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_sub(x_3, x_4);
lean_dec(x_4);
x_11 = l_Lean_IR_UnreachableBranches_Value_Inhabited;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = lean_array_get(x_11, x_2, x_10);
lean_dec(x_10);
x_14 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_12, x_13);
x_15 = lean_array_push(x_5, x_14);
x_4 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
lean_object* _init_l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_merge___main), 2, 0);
return x_1;
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
x_6 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_5, x_1, x_3);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_2;
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
return x_2;
}
else
{
lean_dec(x_2);
return x_1;
}
}
case 2:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_dec(x_1);
return x_2;
}
case 2:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = l_Lean_IR_CtorInfo_beq(x_3, x_5);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_2, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_2, 0);
lean_dec(x_14);
x_15 = lean_array_get_size(x_4);
x_16 = l_Array_empty___closed__1;
lean_inc(x_15);
x_17 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1(x_4, x_6, x_15, x_15, x_16);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_4);
lean_ctor_set(x_2, 1, x_17);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_18 = lean_array_get_size(x_4);
x_19 = l_Array_empty___closed__1;
lean_inc(x_18);
x_20 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1(x_4, x_6, x_18, x_18, x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
default: 
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
x_25 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_24, x_23, x_1);
lean_ctor_set(x_2, 0, x_25);
return x_2;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
x_28 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_27, x_26, x_1);
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_dec(x_1);
return x_2;
}
case 2:
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_1);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_1, 0);
x_32 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
x_33 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_32, x_31, x_2);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
lean_dec(x_1);
x_35 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1;
x_36 = l_Lean_IR_UnreachableBranches_Value_addChoice___main(x_35, x_34, x_2);
x_37 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
}
default: 
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_2);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_2, 0);
x_41 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2(x_40, x_38);
lean_ctor_set(x_2, 0, x_41);
return x_2;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_2, 0);
lean_inc(x_42);
lean_dec(x_2);
x_43 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2(x_42, x_38);
x_44 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
}
}
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = 0;
x_9 = l_Lean_Format_flatten___main___closed__1;
x_10 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_8);
x_11 = l_Lean_IR_UnreachableBranches_Value_format___main(x_7);
x_12 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_8);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_12;
goto _start;
}
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_box(0);
x_4 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2(x_1, x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_fmt___at_Lean_IR_UnreachableBranches_Value_format___main___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Format_joinSep___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_IR_UnreachableBranches_Value_format___main(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_IR_UnreachableBranches_Value_format___main(x_7);
x_9 = 0;
lean_inc(x_2);
x_10 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_9);
x_11 = l_Lean_Format_joinSep___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__5(x_4, x_2);
x_12 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_9);
return x_12;
}
}
}
}
lean_object* l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___main___spec__4(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Lean_List_format___rarg___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = l_Lean_List_format___rarg___closed__4;
x_4 = l_Lean_Format_joinSep___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__5(x_1, x_3);
x_5 = 0;
x_6 = l_Lean_Format_sbracket___closed__2;
x_7 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set_uint8(x_7, sizeof(void*)*2, x_5);
x_8 = l_Lean_Format_sbracket___closed__3;
x_9 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_5);
x_10 = l_Lean_Format_sbracket___closed__1;
x_11 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_format_group(x_11);
return x_12;
}
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bot");
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("top");
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("@");
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__2;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__4;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_fmt___at_Lean_LevelToFormat_Level_toResult___main___spec__1(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_box(0);
x_10 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2(x_5, x_5, x_8, x_9);
lean_dec(x_5);
x_11 = 0;
x_12 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_Lean_List_format___at_Lean_IR_UnreachableBranches_Value_format___main___spec__4(x_13);
x_15 = 0;
x_16 = l_Lean_IR_UnreachableBranches_Value_format___main___closed__6;
x_17 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*2, x_15);
return x_17;
}
}
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_Value_format___main___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___main___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___main___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_Value_format___main(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_format), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_Value_HasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1;
return x_1;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__4(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
uint8_t l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_name_hash_usize(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_name_hash_usize(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__10(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__9(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_dec_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_dec_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_name_hash_usize(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_name_hash_usize(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__8(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__11(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(x_6, x_2, x_3);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__2(x_9, x_2, x_3);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_4);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(x_13, x_2, x_3);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_17 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__6(x_15, x_2, x_3);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_4);
return x_18;
}
}
}
}
lean_object* l_mkHashMap___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1;
x_3 = l_PersistentHashMap_HasEmptyc___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2;
return x_1;
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(x_4, x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
x_4 = x_10;
goto _start;
}
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(x_7, x_7, x_8, x_4);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = x_9;
goto _start;
}
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(x_2, x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_name_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_3);
return x_10;
}
}
}
}
lean_object* _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21(lean_object* x_1, lean_object* x_2) {
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
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_3, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_3, 0, x_14);
x_15 = l___private_Init_Lean_Environment_5__envExtensionsRef;
x_16 = lean_io_ref_get(x_15, x_3);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 0);
lean_ctor_set(x_16, 0, x_14);
x_19 = lean_array_get_size(x_18);
lean_dec(x_18);
x_20 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2;
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_1);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_io_ref_get(x_15, x_16);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_ctor_set(x_22, 0, x_14);
x_25 = lean_io_ref_reset(x_15, x_22);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_14);
x_28 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_21);
x_29 = x_21;
x_30 = lean_array_push(x_24, x_29);
x_31 = lean_io_ref_set(x_15, x_30, x_25);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_21);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_21);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_21);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_25, 1);
lean_inc(x_40);
lean_dec(x_25);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_21);
x_43 = x_21;
x_44 = lean_array_push(x_24, x_43);
x_45 = lean_io_ref_set(x_15, x_44, x_41);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_21);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_21);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_51 = x_45;
} else {
 lean_dec_ref(x_45);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_24);
lean_dec(x_21);
x_53 = !lean_is_exclusive(x_25);
if (x_53 == 0)
{
return x_25;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_25, 0);
x_55 = lean_ctor_get(x_25, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_25);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_22, 0);
x_58 = lean_ctor_get(x_22, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_22);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_14);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_io_ref_reset(x_15, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_62 = x_60;
} else {
 lean_dec_ref(x_60);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_14);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_21);
x_65 = x_21;
x_66 = lean_array_push(x_57, x_65);
x_67 = lean_io_ref_set(x_15, x_66, x_63);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_21);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_21);
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
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_57);
lean_dec(x_21);
x_75 = lean_ctor_get(x_60, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_60, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_77 = x_60;
} else {
 lean_dec_ref(x_60);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_21);
x_79 = !lean_is_exclusive(x_22);
if (x_79 == 0)
{
return x_22;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_22, 0);
x_81 = lean_ctor_get(x_22, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_22);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_83 = lean_ctor_get(x_16, 0);
x_84 = lean_ctor_get(x_16, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_16);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_14);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_get_size(x_83);
lean_dec(x_83);
x_87 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2;
x_88 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_1);
lean_ctor_set(x_88, 2, x_87);
x_89 = lean_io_ref_get(x_15, x_85);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_14);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_io_ref_reset(x_15, x_93);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_96 = x_94;
} else {
 lean_dec_ref(x_94);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_14);
lean_ctor_set(x_97, 1, x_95);
x_98 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_88);
x_99 = x_88;
x_100 = lean_array_push(x_90, x_99);
x_101 = lean_io_ref_set(x_15, x_100, x_97);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_103 = x_101;
} else {
 lean_dec_ref(x_101);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_88);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_88);
x_105 = lean_ctor_get(x_101, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_101, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_107 = x_101;
} else {
 lean_dec_ref(x_101);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_90);
lean_dec(x_88);
x_109 = lean_ctor_get(x_94, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_94, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_111 = x_94;
} else {
 lean_dec_ref(x_94);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_88);
x_113 = lean_ctor_get(x_89, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_89, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_115 = x_89;
} else {
 lean_dec_ref(x_89);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_1);
x_117 = !lean_is_exclusive(x_16);
if (x_117 == 0)
{
return x_16;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_16, 0);
x_119 = lean_ctor_get(x_16, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_16);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_121 = lean_ctor_get(x_3, 1);
lean_inc(x_121);
lean_dec(x_3);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l___private_Init_Lean_Environment_5__envExtensionsRef;
x_125 = lean_io_ref_get(x_124, x_123);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_122);
lean_ctor_set(x_129, 1, x_127);
x_130 = lean_array_get_size(x_126);
lean_dec(x_126);
x_131 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2;
x_132 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_1);
lean_ctor_set(x_132, 2, x_131);
x_133 = lean_io_ref_get(x_124, x_129);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_136 = x_133;
} else {
 lean_dec_ref(x_133);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_122);
lean_ctor_set(x_137, 1, x_135);
x_138 = lean_io_ref_reset(x_124, x_137);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_140 = x_138;
} else {
 lean_dec_ref(x_138);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_122);
lean_ctor_set(x_141, 1, x_139);
x_142 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_132);
x_143 = x_132;
x_144 = lean_array_push(x_134, x_143);
x_145 = lean_io_ref_set(x_124, x_144, x_141);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_147 = x_145;
} else {
 lean_dec_ref(x_145);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_132);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_132);
x_149 = lean_ctor_get(x_145, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_145, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_151 = x_145;
} else {
 lean_dec_ref(x_145);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_134);
lean_dec(x_132);
x_153 = lean_ctor_get(x_138, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_138, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_155 = x_138;
} else {
 lean_dec_ref(x_138);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_132);
x_157 = lean_ctor_get(x_133, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_133, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_159 = x_133;
} else {
 lean_dec_ref(x_133);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_1);
x_161 = lean_ctor_get(x_125, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_125, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_163 = x_125;
} else {
 lean_dec_ref(x_125);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_1);
x_165 = !lean_is_exclusive(x_3);
if (x_165 == 0)
{
return x_3;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_3, 0);
x_167 = lean_ctor_get(x_3, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_3);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Environment_8__persistentEnvExtensionsRef;
x_4 = lean_io_ref_get(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20(x_1, x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_box(0);
lean_ctor_set(x_4, 0, x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = l_Array_empty___closed__1;
lean_inc(x_10);
x_12 = lean_apply_1(x_10, x_11);
x_13 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_14 = lean_alloc_closure((void*)(l_EState_bind___rarg), 3, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21(x_14, x_4);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_15, 0, x_9);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 4);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set(x_22, 4, x_20);
lean_ctor_set(x_22, 5, x_21);
x_23 = lean_io_ref_get(x_3, x_15);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_23, 0, x_9);
x_26 = lean_io_ref_reset(x_3, x_23);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_9);
x_29 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_22);
x_30 = x_22;
x_31 = lean_array_push(x_25, x_30);
x_32 = lean_io_ref_set(x_3, x_31, x_26);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_22);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_22);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_22);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_dec(x_26);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_9);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_22);
x_44 = x_22;
x_45 = lean_array_push(x_25, x_44);
x_46 = lean_io_ref_set(x_3, x_45, x_42);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_22);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_22);
x_50 = lean_ctor_get(x_46, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_52 = x_46;
} else {
 lean_dec_ref(x_46);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_25);
lean_dec(x_22);
x_54 = !lean_is_exclusive(x_26);
if (x_54 == 0)
{
return x_26;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_26, 0);
x_56 = lean_ctor_get(x_26, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_26);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_23, 0);
x_59 = lean_ctor_get(x_23, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_23);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_9);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_io_ref_reset(x_3, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_9);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_22);
x_66 = x_22;
x_67 = lean_array_push(x_58, x_66);
x_68 = lean_io_ref_set(x_3, x_67, x_64);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_22);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_22);
x_72 = lean_ctor_get(x_68, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_68, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_74 = x_68;
} else {
 lean_dec_ref(x_68);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_58);
lean_dec(x_22);
x_76 = lean_ctor_get(x_61, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_61, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_78 = x_61;
} else {
 lean_dec_ref(x_61);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_22);
x_80 = !lean_is_exclusive(x_23);
if (x_80 == 0)
{
return x_23;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_23, 0);
x_82 = lean_ctor_get(x_23, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_23);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_84 = lean_ctor_get(x_15, 0);
x_85 = lean_ctor_get(x_15, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_15);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_9);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_ctor_get(x_1, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_1, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_1, 3);
lean_inc(x_89);
x_90 = lean_ctor_get(x_1, 4);
lean_inc(x_90);
lean_dec(x_1);
x_91 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_91, 0, x_84);
lean_ctor_set(x_91, 1, x_87);
lean_ctor_set(x_91, 2, x_10);
lean_ctor_set(x_91, 3, x_88);
lean_ctor_set(x_91, 4, x_89);
lean_ctor_set(x_91, 5, x_90);
x_92 = lean_io_ref_get(x_3, x_86);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_95 = x_92;
} else {
 lean_dec_ref(x_92);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_9);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_io_ref_reset(x_3, x_96);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_99 = x_97;
} else {
 lean_dec_ref(x_97);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_9);
lean_ctor_set(x_100, 1, x_98);
x_101 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_91);
x_102 = x_91;
x_103 = lean_array_push(x_93, x_102);
x_104 = lean_io_ref_set(x_3, x_103, x_100);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_91);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_91);
x_108 = lean_ctor_get(x_104, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_110 = x_104;
} else {
 lean_dec_ref(x_104);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_93);
lean_dec(x_91);
x_112 = lean_ctor_get(x_97, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_97, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_114 = x_97;
} else {
 lean_dec_ref(x_97);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_91);
x_116 = lean_ctor_get(x_92, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_92, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_118 = x_92;
} else {
 lean_dec_ref(x_92);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_10);
lean_dec(x_1);
x_120 = !lean_is_exclusive(x_15);
if (x_120 == 0)
{
return x_15;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_15, 0);
x_122 = lean_ctor_get(x_15, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_15);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_124 = lean_ctor_get(x_1, 0);
lean_inc(x_124);
lean_dec(x_1);
x_125 = l_System_FilePath_dirName___closed__1;
x_126 = l_Lean_Name_toStringWithSep___main(x_125, x_124);
x_127 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_128 = lean_string_append(x_127, x_126);
lean_dec(x_126);
x_129 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_130 = lean_string_append(x_128, x_129);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_130);
return x_4;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = lean_ctor_get(x_4, 0);
x_132 = lean_ctor_get(x_4, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_4);
x_133 = lean_unsigned_to_nat(0u);
x_134 = l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20(x_1, x_131, x_133);
lean_dec(x_131);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_135 = lean_box(0);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_132);
x_137 = lean_ctor_get(x_1, 1);
lean_inc(x_137);
x_138 = l_Array_empty___closed__1;
lean_inc(x_137);
x_139 = lean_apply_1(x_137, x_138);
x_140 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_141 = lean_alloc_closure((void*)(l_EState_bind___rarg), 3, 2);
lean_closure_set(x_141, 0, x_139);
lean_closure_set(x_141, 1, x_140);
x_142 = l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21(x_141, x_136);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_145 = x_142;
} else {
 lean_dec_ref(x_142);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_135);
lean_ctor_set(x_146, 1, x_144);
x_147 = lean_ctor_get(x_1, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_1, 2);
lean_inc(x_148);
x_149 = lean_ctor_get(x_1, 3);
lean_inc(x_149);
x_150 = lean_ctor_get(x_1, 4);
lean_inc(x_150);
lean_dec(x_1);
x_151 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_151, 0, x_143);
lean_ctor_set(x_151, 1, x_147);
lean_ctor_set(x_151, 2, x_137);
lean_ctor_set(x_151, 3, x_148);
lean_ctor_set(x_151, 4, x_149);
lean_ctor_set(x_151, 5, x_150);
x_152 = lean_io_ref_get(x_3, x_146);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_135);
lean_ctor_set(x_156, 1, x_154);
x_157 = lean_io_ref_reset(x_3, x_156);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_159 = x_157;
} else {
 lean_dec_ref(x_157);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_135);
lean_ctor_set(x_160, 1, x_158);
x_161 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_151);
x_162 = x_151;
x_163 = lean_array_push(x_153, x_162);
x_164 = lean_io_ref_set(x_3, x_163, x_160);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_166 = x_164;
} else {
 lean_dec_ref(x_164);
 x_166 = lean_box(0);
}
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_151);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_151);
x_168 = lean_ctor_get(x_164, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_164, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_170 = x_164;
} else {
 lean_dec_ref(x_164);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 2, 0);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_168);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_153);
lean_dec(x_151);
x_172 = lean_ctor_get(x_157, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_157, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_174 = x_157;
} else {
 lean_dec_ref(x_157);
 x_174 = lean_box(0);
}
if (lean_is_scalar(x_174)) {
 x_175 = lean_alloc_ctor(1, 2, 0);
} else {
 x_175 = x_174;
}
lean_ctor_set(x_175, 0, x_172);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_151);
x_176 = lean_ctor_get(x_152, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_152, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_178 = x_152;
} else {
 lean_dec_ref(x_152);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_137);
lean_dec(x_1);
x_180 = lean_ctor_get(x_142, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_142, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_182 = x_142;
} else {
 lean_dec_ref(x_142);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_184 = lean_ctor_get(x_1, 0);
lean_inc(x_184);
lean_dec(x_1);
x_185 = l_System_FilePath_dirName___closed__1;
x_186 = l_Lean_Name_toStringWithSep___main(x_185, x_184);
x_187 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_188 = lean_string_append(x_187, x_186);
lean_dec(x_186);
x_189 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_190 = lean_string_append(x_188, x_189);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_132);
return x_191;
}
}
}
else
{
uint8_t x_192; 
lean_dec(x_1);
x_192 = !lean_is_exclusive(x_4);
if (x_192 == 0)
{
return x_4;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_4, 0);
x_194 = lean_ctor_get(x_4, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_4);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
}
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
x_8 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_6);
lean_ctor_set(x_8, 4, x_7);
x_9 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__19(x_8, x_2);
return x_9;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__1(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12;
x_5 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(x_2, x_2, x_3, x_4);
x_6 = l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__17(x_5);
return x_6;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachBranchesFunSummary");
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_SMap_empty___at_Lean_Environment_Inhabited___spec__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2;
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4;
x_3 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3;
x_4 = l_Lean_regNamespacesExtension___closed__5;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5;
x_3 = l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__18(x_2, x_1);
return x_3;
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__5(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__3(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__15(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__16(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__14(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__20(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_empty___closed__1;
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
x_4 = l_String_splitAux___main___closed__1;
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String_splitAux___main___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg), 1, 0);
return x_2;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_HashMap_Inhabited___closed__1;
x_3 = l_PersistentHashMap_HasEmptyc___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_EnvExtension_Inhabited___rarg___closed__1;
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
x_2 = lean_box(0);
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5;
x_4 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6;
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7;
x_6 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8;
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
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_6 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_5, x_1, x_4);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_name_hash_usize(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5(x_4, x_2);
return x_7;
}
else
{
return x_6;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5(x_8, x_2);
return x_9;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_4 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1(x_4, x_2);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find___at_Lean_IR_UnreachableBranches_getFunctionSummary___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_getFunctionSummary(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_HashMap_Inhabited___closed__1;
x_7 = lean_array_get(x_6, x_4, x_5);
lean_dec(x_4);
x_8 = l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_7, x_1);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_4, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findArgValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
uint8_t l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_usize_of_nat(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_mfoldl___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_nat_dec_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_nat_dec_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_array_get_size(x_10);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_array_fget(x_10, x_11);
x_16 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_17 = lean_array_fset(x_10, x_11, x_16);
x_18 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_2, x_9);
x_19 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_15, x_1, x_18);
x_20 = lean_array_fset(x_17, x_11, x_19);
lean_ctor_set(x_7, 0, x_20);
x_21 = lean_box(0);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_array_get_size(x_23);
x_27 = lean_nat_dec_lt(x_25, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_box(0);
lean_ctor_set(x_5, 1, x_28);
lean_ctor_set(x_5, 0, x_29);
return x_5;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_array_fget(x_23, x_25);
x_31 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_32 = lean_array_fset(x_23, x_25, x_31);
x_33 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_2, x_22);
x_34 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_30, x_1, x_33);
x_35 = lean_array_fset(x_32, x_25, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
x_37 = lean_box(0);
lean_ctor_set(x_5, 1, x_36);
lean_ctor_set(x_5, 0, x_37);
return x_5;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_38 = lean_ctor_get(x_5, 1);
x_39 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
lean_inc(x_39);
lean_dec(x_5);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_array_get_size(x_40);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = lean_array_fget(x_40, x_43);
x_50 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_51 = lean_array_fset(x_40, x_43, x_50);
x_52 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_2, x_39);
x_53 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_49, x_1, x_52);
x_54 = lean_array_fset(x_51, x_43, x_53);
if (lean_is_scalar(x_42)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_42;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_41);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
lean_object* l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_IR_UnreachableBranches_projValue___main(x_4, x_1);
x_7 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_2, x_6);
x_2 = x_7;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_box(0);
x_5 = l_Array_getD___rarg(x_3, x_2, x_4);
return x_5;
}
case 3:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_box(0);
x_8 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1(x_2, x_7, x_6);
return x_8;
}
default: 
{
lean_inc(x_1);
return x_1;
}
}
}
}
lean_object* l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___main___at_Lean_IR_UnreachableBranches_projValue___main___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_projValue___main(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_projValue___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_projValue(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_array_fget(x_2, x_1);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = x_11;
x_13 = lean_array_fset(x_2, x_1, x_12);
x_14 = l_Lean_IR_UnreachableBranches_findArgValue(x_10, x_3, x_4);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_1, x_17);
x_19 = x_15;
x_20 = lean_array_fset(x_13, x_1, x_19);
lean_dec(x_1);
x_1 = x_18;
x_2 = x_20;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_IR_Decl_name(x_7);
lean_dec(x_7);
x_9 = lean_name_dec_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = x_2 >> x_3;
x_6 = lean_usize_to_nat(x_5);
x_7 = l_PersistentArray_getAux___main___rarg___closed__1;
x_8 = lean_array_get(x_7, x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3;
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_usize_to_nat(x_2);
x_18 = l_Lean_IR_UnreachableBranches_Value_Inhabited;
x_19 = lean_array_get(x_18, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_nat_dec_le(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_8 = l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_nat_sub(x_2, x_3);
lean_dec(x_3);
x_11 = l_Lean_IR_UnreachableBranches_Value_Inhabited;
x_12 = lean_array_get(x_11, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
return x_12;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(x_6, x_5, x_2, x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
case 3:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Lean_IR_UnreachableBranches_findVarValue(x_16, x_2, x_3);
lean_dec(x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_Lean_IR_UnreachableBranches_projValue___main(x_19, x_15);
lean_dec(x_15);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = l_Lean_IR_UnreachableBranches_projValue___main(x_21, x_15);
lean_dec(x_15);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
case 6:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_2, 2);
x_27 = l_Lean_IR_UnreachableBranches_getFunctionSummary(x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_2, 1);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_25, x_28, x_29);
lean_dec(x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_box(1);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
x_35 = l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_34, x_33);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_3);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_25);
x_37 = lean_ctor_get(x_27, 0);
lean_inc(x_37);
lean_dec(x_27);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
default: 
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_1);
x_39 = lean_box(1);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_3);
return x_40;
}
}
}
}
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_PersistentArray_getAux___main___at_Lean_IR_UnreachableBranches_interpExpr___spec__4(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_interpExpr(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_containsCtor___main(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_containsCtor___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
case 2:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Lean_IR_CtorInfo_beq(x_5, x_2);
return x_6;
}
default: 
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 0;
x_9 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1(x_2, x_8, x_7);
return x_9;
}
}
}
}
lean_object* l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_IR_UnreachableBranches_containsCtor___main___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_containsCtor___main(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_IR_UnreachableBranches_containsCtor___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_containsCtor(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = x_3 >> x_4;
x_8 = 1;
x_9 = x_8 << x_4;
x_10 = x_9 - x_8;
x_11 = x_3 & x_10;
x_12 = 5;
x_13 = x_4 - x_12;
x_14 = lean_usize_to_nat(x_7);
x_15 = lean_array_get_size(x_6);
x_16 = lean_nat_dec_lt(x_14, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_dec(x_14);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_array_fget(x_6, x_14);
x_18 = l_PersistentArrayNode_Inhabited___closed__1;
x_19 = lean_array_fset(x_6, x_14, x_18);
x_20 = l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_17, x_11, x_13);
x_21 = lean_array_fset(x_19, x_14, x_20);
lean_dec(x_14);
lean_ctor_set(x_2, 0, x_21);
return x_2;
}
}
else
{
lean_object* x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_dec(x_2);
x_23 = x_3 >> x_4;
x_24 = 1;
x_25 = x_24 << x_4;
x_26 = x_25 - x_24;
x_27 = x_3 & x_26;
x_28 = 5;
x_29 = x_4 - x_28;
x_30 = lean_usize_to_nat(x_23);
x_31 = lean_array_get_size(x_22);
x_32 = lean_nat_dec_lt(x_30, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_30);
lean_dec(x_1);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_22);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_array_fget(x_22, x_30);
x_35 = l_PersistentArrayNode_Inhabited___closed__1;
x_36 = lean_array_fset(x_22, x_30, x_35);
x_37 = l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_34, x_27, x_29);
x_38 = lean_array_fset(x_36, x_30, x_37);
lean_dec(x_30);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_2);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_2, 0);
x_42 = lean_usize_to_nat(x_3);
x_43 = lean_array_get_size(x_41);
x_44 = lean_nat_dec_lt(x_42, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_dec(x_42);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_array_fget(x_41, x_42);
x_46 = lean_box(1);
x_47 = lean_array_fset(x_41, x_42, x_46);
x_48 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_1, x_45);
x_49 = lean_array_fset(x_47, x_42, x_48);
lean_dec(x_42);
lean_ctor_set(x_2, 0, x_49);
return x_2;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
lean_dec(x_2);
x_51 = lean_usize_to_nat(x_3);
x_52 = lean_array_get_size(x_50);
x_53 = lean_nat_dec_lt(x_51, x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_51);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_array_fget(x_50, x_51);
x_56 = lean_box(1);
x_57 = lean_array_fset(x_50, x_51, x_56);
x_58 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_1, x_55);
x_59 = lean_array_fset(x_57, x_51, x_58);
lean_dec(x_51);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
return x_60;
}
}
}
}
}
lean_object* l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get_usize(x_2, 4);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_nat_dec_le(x_8, x_3);
if (x_9 == 0)
{
size_t x_10; lean_object* x_11; 
x_10 = lean_usize_of_nat(x_3);
x_11 = l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_5, x_10, x_7);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_nat_sub(x_3, x_8);
x_13 = lean_array_get_size(x_6);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_6, x_12);
x_16 = lean_box(1);
x_17 = lean_array_fset(x_6, x_12, x_16);
x_18 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_1, x_15);
x_19 = lean_array_fset(x_17, x_12, x_18);
lean_dec(x_12);
lean_ctor_set(x_2, 1, x_19);
return x_2;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_ctor_get_usize(x_2, 4);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_25 = lean_nat_dec_le(x_24, x_3);
if (x_25 == 0)
{
size_t x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_usize_of_nat(x_3);
x_27 = l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_20, x_26, x_23);
x_28 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set_usize(x_28, 4, x_23);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_nat_sub(x_3, x_24);
x_30 = lean_array_get_size(x_21);
x_31 = lean_nat_dec_lt(x_29, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_1);
x_32 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
lean_ctor_set(x_32, 2, x_22);
lean_ctor_set(x_32, 3, x_24);
lean_ctor_set_usize(x_32, 4, x_23);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_array_fget(x_21, x_29);
x_34 = lean_box(1);
x_35 = lean_array_fset(x_21, x_29, x_34);
x_36 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_1, x_33);
x_37 = lean_array_fset(x_35, x_29, x_36);
lean_dec(x_29);
x_38 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_38, 0, x_20);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_38, 2, x_22);
lean_ctor_set(x_38, 3, x_24);
lean_ctor_set_usize(x_38, 4, x_23);
return x_38;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_6, x_5);
lean_ctor_set(x_3, 1, x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_12, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_PersistentArray_modifyAux___main___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_5, x_6);
return x_7;
}
}
lean_object* l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_updateCurrFnSummary(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_sub(x_4, x_12);
x_14 = lean_nat_sub(x_13, x_11);
lean_dec(x_13);
x_15 = l_Lean_IR_paramInh;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = l_Lean_IR_Arg_Inhabited;
x_18 = lean_array_get(x_17, x_2, x_14);
lean_dec(x_14);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_IR_UnreachableBranches_findVarValue(x_19, x_7, x_8);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_IR_UnreachableBranches_findArgValue(x_18, x_7, x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_21);
x_26 = l_Lean_IR_UnreachableBranches_Value_merge___main(x_21, x_24);
x_27 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_26, x_21);
lean_dec(x_21);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_3, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_26);
lean_dec(x_19);
x_32 = 1;
x_5 = x_12;
x_6 = x_32;
x_8 = x_25;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_array_fget(x_29, x_3);
x_35 = l_HashMap_Inhabited___closed__1;
x_36 = lean_array_fset(x_29, x_3, x_35);
x_37 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_34, x_19, x_26);
x_38 = lean_array_fset(x_36, x_3, x_37);
lean_ctor_set(x_25, 0, x_38);
x_39 = 1;
x_5 = x_12;
x_6 = x_39;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_array_get_size(x_41);
x_44 = lean_nat_dec_lt(x_3, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_26);
lean_dec(x_19);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
x_46 = 1;
x_5 = x_12;
x_6 = x_46;
x_8 = x_45;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_48 = lean_array_fget(x_41, x_3);
x_49 = l_HashMap_Inhabited___closed__1;
x_50 = lean_array_fset(x_41, x_3, x_49);
x_51 = l_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_48, x_19, x_26);
x_52 = lean_array_fset(x_50, x_3, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_42);
x_54 = 1;
x_5 = x_12;
x_6 = x_54;
x_8 = x_53;
goto _start;
}
}
}
else
{
lean_dec(x_26);
lean_dec(x_19);
x_5 = x_12;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_5);
x_57 = lean_box(x_6);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_8);
return x_58;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_1);
x_7 = 0;
lean_inc(x_6);
x_8 = l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_5, x_6, x_6, x_7, x_3, x_4);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_3, x_4, x_5, x_9, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_fget(x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = l_Lean_IR_UnreachableBranches_containsCtor___main(x_1, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_dec(x_14);
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_inc(x_4);
x_17 = l_Lean_IR_UnreachableBranches_interpFnBody___main(x_14, x_4, x_5);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_3 = x_12;
x_5 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
lean_inc(x_4);
x_21 = l_Lean_IR_UnreachableBranches_interpFnBody___main(x_20, x_4, x_5);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_3 = x_12;
x_5 = x_22;
goto _start;
}
}
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = l_panicWithPos___rarg___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_panicWithPos___rarg___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_repr(x_2);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = l_panicWithPos___rarg___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Nat_repr(x_3);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_panicWithPos___rarg___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_4);
x_18 = l_Array_empty___closed__1;
x_19 = lean_panic_fn(x_17);
return x_19;
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = l_panicWithPos___rarg___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_panicWithPos___rarg___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_repr(x_2);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = l_panicWithPos___rarg___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Nat_repr(x_3);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_panicWithPos___rarg___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_4);
x_18 = l_Lean_IR_Inhabited;
x_19 = lean_panic_fn(x_17);
return x_19;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_Lean_IR_UnreachableBranches_interpExpr(x_12, x_2, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_11, x_15, x_2, x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_1 = x_13;
x_3 = x_18;
goto _start;
}
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_2, 3);
x_26 = l_Lean_IR_LocalContext_addJP(x_25, x_20, x_21, x_22);
lean_ctor_set(x_2, 3, x_26);
x_1 = x_23;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_2, 0);
x_29 = lean_ctor_get(x_2, 1);
x_30 = lean_ctor_get(x_2, 2);
x_31 = lean_ctor_get(x_2, 3);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_2);
x_32 = l_Lean_IR_LocalContext_addJP(x_31, x_20, x_21, x_22);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_29);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_32);
x_1 = x_23;
x_2 = x_33;
goto _start;
}
}
case 10:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 2);
lean_inc(x_36);
lean_dec(x_1);
x_37 = l_Lean_IR_UnreachableBranches_findVarValue(x_35, x_2, x_3);
lean_dec(x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1(x_38, x_36, x_40, x_2, x_39);
lean_dec(x_36);
lean_dec(x_38);
return x_41;
}
case 11:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
lean_dec(x_1);
x_43 = l_Lean_IR_UnreachableBranches_findArgValue(x_42, x_2, x_3);
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_IR_UnreachableBranches_updateCurrFnSummary(x_44, x_2, x_45);
lean_dec(x_2);
return x_46;
}
case 12:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_ctor_get(x_2, 3);
lean_inc(x_49);
x_50 = l_Lean_IR_LocalContext_getJPParams(x_49, x_47);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_51 = l_Option_get_x21___rarg___closed__1;
x_52 = lean_unsigned_to_nat(16u);
x_53 = lean_unsigned_to_nat(12u);
x_54 = l_Option_get_x21___rarg___closed__2;
x_55 = l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2(x_51, x_52, x_53, x_54);
x_56 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_55, x_48, x_2, x_3);
lean_dec(x_48);
lean_dec(x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
uint8_t x_59; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_56);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_56, 0);
lean_dec(x_60);
x_61 = lean_box(0);
lean_ctor_set(x_56, 0, x_61);
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_dec(x_56);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
lean_dec(x_56);
x_66 = l_Lean_IR_LocalContext_getJPBody(x_49, x_47);
lean_dec(x_47);
lean_dec(x_49);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3(x_51, x_52, x_53, x_54);
x_1 = x_67;
x_3 = x_65;
goto _start;
}
else
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_66, 0);
lean_inc(x_69);
lean_dec(x_66);
x_1 = x_69;
x_3 = x_65;
goto _start;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_50, 0);
lean_inc(x_71);
lean_dec(x_50);
x_72 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_71, x_48, x_2, x_3);
lean_dec(x_48);
lean_dec(x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
lean_dec(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
x_77 = lean_box(0);
lean_ctor_set(x_72, 0, x_77);
return x_72;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_72, 1);
lean_inc(x_78);
lean_dec(x_72);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
lean_dec(x_72);
x_82 = l_Lean_IR_LocalContext_getJPBody(x_49, x_47);
lean_dec(x_47);
lean_dec(x_49);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = l_Option_get_x21___rarg___closed__1;
x_84 = lean_unsigned_to_nat(16u);
x_85 = lean_unsigned_to_nat(12u);
x_86 = l_Option_get_x21___rarg___closed__2;
x_87 = l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3(x_83, x_84, x_85, x_86);
x_1 = x_87;
x_3 = x_81;
goto _start;
}
else
{
lean_object* x_89; 
x_89 = lean_ctor_get(x_82, 0);
lean_inc(x_89);
lean_dec(x_82);
x_1 = x_89;
x_3 = x_81;
goto _start;
}
}
}
}
default: 
{
lean_object* x_91; 
x_91 = lean_box(0);
x_4 = x_91;
goto block_10;
}
}
block_10:
{
uint8_t x_5; 
lean_dec(x_4);
x_5 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_6;
goto _start;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
}
lean_object* l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_mforAux___main___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_Lean_IR_UnreachableBranches_interpFnBody___main___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_interpFnBody___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_3);
x_11 = lean_nat_sub(x_2, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 1);
x_14 = l_Lean_IR_Decl_Inhabited;
x_15 = lean_array_get(x_14, x_13, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
x_18 = l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_17, x_12);
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 2);
x_21 = lean_ctor_get(x_5, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_12);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = l_Lean_IR_UnreachableBranches_interpFnBody___main(x_16, x_22, x_6);
if (x_4 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_25, x_12);
lean_dec(x_12);
x_27 = l_Lean_IR_UnreachableBranches_Value_beq___main(x_18, x_26);
lean_dec(x_26);
lean_dec(x_18);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = 1;
x_3 = x_10;
x_4 = x_28;
x_6 = x_24;
goto _start;
}
else
{
uint8_t x_30; 
x_30 = 0;
x_3 = x_10;
x_4 = x_30;
x_6 = x_24;
goto _start;
}
}
else
{
lean_object* x_32; uint8_t x_33; 
lean_dec(x_18);
lean_dec(x_12);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = 1;
x_3 = x_10;
x_4 = x_33;
x_6 = x_32;
goto _start;
}
}
else
{
lean_dec(x_15);
lean_dec(x_12);
x_3 = x_10;
goto _start;
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_3);
x_36 = lean_box(x_4);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_6);
return x_37;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = 0;
lean_inc(x_4);
x_6 = l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_1, x_4, x_4, x_5, x_1, x_2);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Nat_mfoldAux___main___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_inferStep(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_IR_UnreachableBranches_inferStep(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_2 = x_12;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferMain___main___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_inferMain___main___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___main___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_inferMain___main(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_inferMain___main___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferMain___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_inferMain___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_inferMain(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_infer___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
lean_inc(x_7);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = l_HashMap_Inhabited___closed__1;
x_14 = x_13;
x_15 = lean_array_fset(x_10, x_1, x_14);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_15;
goto _start;
}
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_sub(x_3, x_4);
lean_dec(x_4);
x_11 = l_Lean_IR_Decl_Inhabited;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = l_Lean_IR_Decl_name(x_12);
lean_dec(x_12);
lean_inc(x_2);
x_14 = l_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_2, x_10);
lean_dec(x_10);
x_15 = l_Lean_IR_UnreachableBranches_addFunctionSummary(x_5, x_13, x_14);
x_4 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_infer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_4 = l_Array_ummapAux___main___at_Lean_IR_UnreachableBranches_infer___spec__1(x_3, x_2);
x_5 = lean_array_get_size(x_2);
x_6 = lean_box(0);
lean_inc(x_5);
x_7 = l_mkPersistentArray___rarg(x_5, x_6);
x_8 = lean_box(0);
lean_inc(x_1);
lean_inc(x_2);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_1);
lean_ctor_set(x_9, 3, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
x_11 = l_Lean_IR_UnreachableBranches_inferMain___main___rarg(x_9, x_10);
lean_dec(x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_5);
x_14 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2(x_2, x_13, x_5, x_5, x_1);
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___main___at_Lean_IR_UnreachableBranches_infer___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init_Control_Reader(lean_object*);
lean_object* initialize_Init_Data_Option_Default(lean_object*);
lean_object* initialize_Init_Lean_Compiler_IR_Format(lean_object*);
lean_object* initialize_Init_Lean_Compiler_IR_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Compiler_IR_UnreachBranches(lean_object* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Control_Reader(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Data_Option_Default(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Lean_Compiler_IR_Format(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_Init_Lean_Compiler_IR_Basic(w);
if (lean_io_result_is_error(w)) return w;
l_Lean_IR_UnreachableBranches_Value_Inhabited = _init_l_Lean_IR_UnreachableBranches_Value_Inhabited();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Inhabited);
l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1 = _init_l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1();
lean_mark_persistent(l_Array_isEqv___at_Lean_IR_UnreachableBranches_Value_beq___main___spec__1___closed__1);
l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_HasBeq___closed__1);
l_Lean_IR_UnreachableBranches_Value_HasBeq = _init_l_Lean_IR_UnreachableBranches_Value_HasBeq();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_HasBeq);
l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1 = _init_l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1();
lean_mark_persistent(l_panicWithPos___at_Lean_IR_UnreachableBranches_Value_addChoice___main___spec__1___closed__1);
l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__1);
l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___main___closed__2);
l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1 = _init_l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1();
lean_mark_persistent(l_List_foldl___main___at_Lean_IR_UnreachableBranches_Value_merge___main___spec__2___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__2);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__3 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__3);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__4 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__4);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__5 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__5);
l_Lean_IR_UnreachableBranches_Value_format___main___closed__6 = _init_l_Lean_IR_UnreachableBranches_Value_format___main___closed__6();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___main___closed__6);
l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat___closed__1);
l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat = _init_l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_Lean_HasFormat);
l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_HasToString___closed__1);
l_Lean_IR_UnreachableBranches_Value_HasToString = _init_l_Lean_IR_UnreachableBranches_Value_HasToString();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_HasToString);
l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1 = _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__1);
l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2 = _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12___closed__2);
l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12 = _init_l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__12);
l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1 = _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1();
lean_mark_persistent(l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__1);
l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2 = _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2();
lean_mark_persistent(l_Lean_registerEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___spec__21___closed__2);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__1);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__2);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__3);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__4);
l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5 = _init_l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension___closed__5);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__6);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__7);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__8);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__9 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__9();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__9);
w = l_Lean_IR_UnreachableBranches_mkFunctionSummariesExtension(w);
if (lean_io_result_is_error(w)) return w;
l_Lean_IR_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(w);
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt);
l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1 = _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1);
return w;
}
#ifdef __cplusplus
}
#endif
