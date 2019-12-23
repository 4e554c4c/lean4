// Lean compiler output
// Module: Init.Lean.MetavarContext
// Imports: Init.Control.Reader Init.Data.Nat Init.Data.Option Init.Lean.Data.NameGenerator Init.Lean.Util.MonadCache Init.Lean.LocalContext
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
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_main(lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_23__abstractRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExprCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkHashMap___at_Lean_MetavarContext_instantiateMVars___spec__1(lean_object*);
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_15__withFreshCache(lean_object*);
lean_object* l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1;
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_16__abstractRangeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__2(lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__1;
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_exprDependsOn___closed__1;
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_EIO_Monad___closed__1;
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_19__mkAuxMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateMData_x21___closed__2;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17___boxed(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_11__reduceLocalContext(lean_object*, lean_object*);
lean_object* lean_mk_metavar_ctx(lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_2__visit___spec__5(lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
size_t l_USize_sub(size_t, size_t);
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_MetavarContext_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_1__mkPanicMessage(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___closed__2;
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___closed__1;
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23___boxed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverseAux___main___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isDelayedAssigned___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_delayed_assignment(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2;
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_isUnaryNode___rarg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_19__mkAuxMVar(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Level_Inhabited;
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__3;
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4;
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_4__modifyCtx(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isLevelAssignable___boxed(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_Inhabited___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateLambdaE_x21___closed__1;
lean_object* lean_metavar_ctx_assign_delayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignableMVar___main(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11___boxed(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_Inhabited___closed__2;
extern lean_object* l_PersistentArray_getAux___main___rarg___closed__1;
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignableLevelMVar___main(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_HasRepr___rarg___closed__1;
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_3__getMCtx(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarDecl_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_23__abstractRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVars___closed__1;
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_14__getInScope(lean_object*, lean_object*);
lean_object* l_EStateM_bind___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_13__getMCtx(lean_object*);
lean_object* lean_metavar_ctx_get_level_assignment(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___main(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5;
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isExprAssignable___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_2__mkAppRangeAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_metavar_ctx_assign_expr(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_addLevelMVarDecl___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_2__visit___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_elimMVarDeps(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedMVar___main___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isLevelAssigned___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34(lean_object*, lean_object*);
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString(lean_object*);
extern lean_object* l_Char_HasRepr___closed__1;
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___closed__3;
lean_object* l_Lean_MetavarContext_instantiateLevelMVars(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l_Lean_MetavarContext_Inhabited;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46(lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__2;
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_reprAux___main___rarg___closed__1;
lean_object* l_Lean_MetavarContext_hasAssignableLevelMVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_16__abstractRangeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_localDeclDependsOn(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_2__visit___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_10__collectDeps(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22(lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isAuxDecl(uint8_t);
size_t l_USize_mul(size_t, size_t);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9___boxed(lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_MetavarContext_20__anyDependsOn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3;
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Id_Monad;
uint8_t l_Lean_Expr_isLambda(lean_object*);
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29___boxed(lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateProj_x21___closed__2;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalInstance_beq___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3;
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45(lean_object*);
lean_object* l_Lean_MetavarContext_exprDependsOn(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_hasToString;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__6(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___main___boxed(lean_object*, lean_object*);
lean_object* l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignableLevelMVar___main___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter;
lean_object* l___private_Init_Lean_MetavarContext_15__withFreshCache___rarg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t l_Lean_MetavarKind_isSyntheticOpaque(uint8_t);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___main___at___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__5(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignableMVar___boxed(lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(lean_object*, size_t, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1;
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10___boxed(lean_object*, lean_object*);
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_MetavarDecl_Inhabited;
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignableLevelMVar(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isExprAssigned___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34___boxed(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_mk_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern uint8_t l_Bool_Inhabited;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_incDepth(lean_object*);
lean_object* l_Lean_MetavarContext_localDeclDependsOn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__4(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x27___rarg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_18__mkMVarApp(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MetavarContext_isLevelAssignable___closed__2;
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalInstance_hasBeq___closed__1;
lean_object* l_Lean_LocalInstance_hasBeq;
uint8_t l_Lean_MetavarContext_isLevelAssignable(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateLet_x21___closed__1;
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40(lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_mkHashSet___at_Lean_MetavarContext_exprDependsOn___spec__1(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_addExprMVarDecl___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getLevelDepth(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_18__mkMVarApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_mkHashMap___at_Lean_MetavarContext_exprDependsOn___spec__2(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isWellFormed___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedMVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1;
lean_object* l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx(lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44(lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_7__visit(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_20__anyDependsOn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isLevelAssignable___closed__1;
lean_object* l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_addExprMVarDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isExprAssignable(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___boxed(lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_Inhabited___closed__1;
lean_object* l_Lean_MetavarContext_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_14__getInScope___boxed(lean_object*, lean_object*);
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_LocalInstance_beq(lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_erase_delayed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getLevelDepth___closed__1;
extern lean_object* l_Nat_Inhabited;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43(lean_object*);
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_11__reduceLocalContext___boxed(lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar___main(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getLevelDepth___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_instantiateLevelMVars(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_MetavarContext_hasAssignableMVar___main___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_12__visit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarKind_isSyntheticOpaque___boxed(lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2(lean_object*, lean_object*);
extern lean_object* l_HashMap_Inhabited___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_DependsOn_main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_17__mkAuxMVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_level_assigned(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_2__visit(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_main___main(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedMVar___main(lean_object*, lean_object*);
extern lean_object* l_EStateM_MonadState___closed__2;
lean_object* l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(uint8_t, lean_object*);
extern lean_object* l_Lean_Expr_updateForallE_x21___closed__1;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
extern lean_object* l_Lean_Level_updateIMax_x21___closed__2;
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_MetavarContext_6__visit_x3f(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3___boxed(lean_object*, lean_object*);
uint8_t l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41(lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignableMVar(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4;
lean_object* l_Lean_MetavarContext_hasAssignedMVar(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalInstance_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_expr_eqv(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_LocalInstance_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalInstance_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_LocalInstance_hasBeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_LocalInstance_beq___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_LocalInstance_hasBeq() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalInstance_hasBeq___closed__1;
return x_1;
}
}
uint8_t l_Lean_MetavarKind_isSyntheticOpaque(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(x_1);
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 0;
return x_4;
}
}
}
lean_object* l_Lean_MetavarKind_isSyntheticOpaque___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_MetavarKind_isSyntheticOpaque(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_MetavarDecl_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_Lean_LocalContext_Inhabited___closed__2;
x_3 = l_Lean_Expr_Inhabited___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_empty___closed__1;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_MetavarDecl_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarDecl_Inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_LocalContext_Inhabited___closed__1;
x_3 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
lean_ctor_set(x_3, 5, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarContext_Inhabited___closed__1;
return x_1;
}
}
lean_object* lean_mk_metavar_ctx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = l_Lean_MetavarContext_Inhabited___closed__1;
return x_2;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_name_eq(x_3, x_17);
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
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_21 = lean_name_eq(x_4, x_19);
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
x_28 = lean_name_eq(x_4, x_26);
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
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_35, x_36, x_37, x_4, x_5);
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
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_40, x_41, x_42, x_4, x_5);
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
x_63 = lean_name_eq(x_4, x_60);
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
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_71, x_73, x_74, x_4, x_5);
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
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__3(x_1, x_82, x_4, x_5);
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
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
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
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_addExprMVarDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_5, x_7, x_8, x_2, x_3);
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
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_12, x_14, x_15, x_2, x_3);
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
lean_object* lean_metavar_ctx_mk_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_11 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_4);
lean_ctor_set(x_11, 2, x_6);
lean_ctor_set(x_11, 3, x_9);
lean_ctor_set(x_11, 4, x_5);
lean_ctor_set_uint8(x_11, sizeof(void*)*5, x_7);
x_12 = l_PersistentHashMap_insert___at_Lean_MetavarContext_addExprMVarDecl___spec__1(x_10, x_2, x_11);
lean_ctor_set(x_1, 2, x_12);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_1, 2);
x_16 = lean_ctor_get(x_1, 3);
x_17 = lean_ctor_get(x_1, 4);
x_18 = lean_ctor_get(x_1, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_13);
x_19 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_4);
lean_ctor_set(x_19, 2, x_6);
lean_ctor_set(x_19, 3, x_13);
lean_ctor_set(x_19, 4, x_5);
lean_ctor_set_uint8(x_19, sizeof(void*)*5, x_7);
x_20 = l_PersistentHashMap_insert___at_Lean_MetavarContext_addExprMVarDecl___spec__1(x_15, x_2, x_19);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
lean_ctor_set(x_21, 3, x_16);
lean_ctor_set(x_21, 4, x_17);
lean_ctor_set(x_21, 5, x_18);
return x_21;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addExprMVarDecl___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_addExprMVarDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = lean_metavar_ctx_mk_decl(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_name_eq(x_3, x_17);
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
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_21 = lean_name_eq(x_4, x_19);
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
x_28 = lean_name_eq(x_4, x_26);
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
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_35, x_36, x_37, x_4, x_5);
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
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_40, x_41, x_42, x_4, x_5);
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
x_63 = lean_name_eq(x_4, x_60);
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
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_71, x_73, x_74, x_4, x_5);
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
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__3(x_1, x_82, x_4, x_5);
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
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
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
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_addLevelMVarDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_5, x_7, x_8, x_2, x_3);
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
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_12, x_14, x_15, x_2, x_3);
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
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_addLevelMVarDecl___spec__1(x_5, x_2, x_4);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_7);
x_13 = l_PersistentHashMap_insert___at_Lean_MetavarContext_addLevelMVarDecl___spec__1(x_8, x_2, x_7);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_11);
lean_ctor_set(x_14, 5, x_12);
return x_14;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_addLevelMVarDecl___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_name_eq(x_5, x_9);
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
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
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
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
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
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_find_decl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_getDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Lean.MetavarContext");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_getDecl___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown metavariable");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_getDecl___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_MetavarContext_getDecl___closed__1;
x_2 = lean_unsigned_to_nat(319u);
x_3 = lean_unsigned_to_nat(15u);
x_4 = l_Lean_MetavarContext_getDecl___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_getDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findDecl_x3f___spec__1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_MetavarDecl_Inhabited;
x_6 = l_Lean_MetavarContext_getDecl___closed__3;
x_7 = lean_panic_fn(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
return x_8;
}
}
}
lean_object* l_Lean_MetavarContext_getDecl___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_getDecl(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_name_eq(x_5, x_9);
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
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
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
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
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
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findLevelDepth_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_findLevelDepth_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_getLevelDepth___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_MetavarContext_getDecl___closed__1;
x_2 = lean_unsigned_to_nat(327u);
x_3 = lean_unsigned_to_nat(12u);
x_4 = l_Lean_MetavarContext_getDecl___closed__2;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_getLevelDepth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_findLevelDepth_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Nat_Inhabited;
x_5 = l_Lean_MetavarContext_getLevelDepth___closed__1;
x_6 = lean_panic_fn(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
return x_7;
}
}
}
lean_object* l_Lean_MetavarContext_getLevelDepth___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_getLevelDepth(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_name_eq(x_3, x_17);
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
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_21 = lean_name_eq(x_4, x_19);
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
x_28 = lean_name_eq(x_4, x_26);
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
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_35, x_36, x_37, x_4, x_5);
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
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_40, x_41, x_42, x_4, x_5);
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
x_63 = lean_name_eq(x_4, x_60);
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
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_71, x_73, x_74, x_4, x_5);
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
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(x_1, x_82, x_4, x_5);
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
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
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
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_5, x_7, x_8, x_2, x_3);
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
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_12, x_14, x_15, x_2, x_3);
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
lean_object* lean_metavar_ctx_assign_level(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 3);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(x_5, x_2, x_3);
lean_ctor_set(x_1, 3, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_13 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(x_10, x_2, x_3);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_8);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_11);
lean_ctor_set(x_14, 5, x_12);
return x_14;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExprCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_name_eq(x_3, x_17);
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
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_21 = lean_name_eq(x_4, x_19);
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
x_28 = lean_name_eq(x_4, x_26);
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
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_35, x_36, x_37, x_4, x_5);
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
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_40, x_41, x_42, x_4, x_5);
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
x_63 = lean_name_eq(x_4, x_60);
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
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_71, x_73, x_74, x_4, x_5);
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
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExprCore___spec__3(x_1, x_82, x_4, x_5);
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
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
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
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_5, x_7, x_8, x_2, x_3);
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
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_12, x_14, x_15, x_2, x_3);
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
lean_object* lean_metavar_ctx_assign_expr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 4);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(x_5, x_2, x_3);
lean_ctor_set(x_1, 4, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_13 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_8);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_13);
lean_ctor_set(x_14, 5, x_12);
return x_14;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExprCore___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExprCore___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_assignExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 4);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(x_5, x_2, x_3);
lean_ctor_set(x_1, 4, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_13 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExprCore___spec__1(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_8);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_13);
lean_ctor_set(x_14, 5, x_12);
return x_14;
}
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_name_eq(x_3, x_17);
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
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_21 = lean_name_eq(x_4, x_19);
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
x_28 = lean_name_eq(x_4, x_26);
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
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_35, x_36, x_37, x_4, x_5);
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
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_40, x_41, x_42, x_4, x_5);
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
x_63 = lean_name_eq(x_4, x_60);
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
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_71, x_73, x_74, x_4, x_5);
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
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(x_1, x_82, x_4, x_5);
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
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
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
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_5, x_7, x_8, x_2, x_3);
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
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_12, x_14, x_15, x_2, x_3);
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
lean_object* lean_metavar_ctx_assign_delayed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 5);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
x_9 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(x_7, x_2, x_8);
lean_ctor_set(x_1, 5, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_14 = lean_ctor_get(x_1, 4);
x_15 = lean_ctor_get(x_1, 5);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_4);
lean_ctor_set(x_16, 2, x_5);
x_17 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(x_15, x_2, x_16);
x_18 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_12);
lean_ctor_set(x_18, 3, x_13);
lean_ctor_set(x_18, 4, x_14);
lean_ctor_set(x_18, 5, x_17);
return x_18;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_name_eq(x_5, x_9);
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
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
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
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
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
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_level_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getLevelAssignment_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_name_eq(x_5, x_9);
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
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
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
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
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
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getExprAssignment_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_name_eq(x_5, x_9);
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
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
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
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
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
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_delayed_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 5);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_getDelayedAssignment_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = lean_name_eq(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_2 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = 1;
return x_12;
}
}
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(x_17, x_18, x_3);
lean_dec(x_17);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_level_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isLevelAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_level_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(x_17, x_18, x_3);
lean_dec(x_17);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isExprAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_expr_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__3(x_17, x_18, x_3);
lean_dec(x_17);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Name_hash(x_2);
lean_inc(x_3);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 5);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isDelayedAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_delayed_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
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
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_name_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_4);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
x_18 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_18);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_22 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 1:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_array_set(x_4, x_8, x_9);
x_30 = x_2 >> x_5;
x_31 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_28, x_30, x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_29);
lean_free_object(x_10);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_31, 0);
lean_dec(x_36);
x_37 = 0;
x_38 = lean_box(x_37);
lean_ctor_set(x_31, 1, x_38);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_1);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_dec(x_46);
x_47 = l_PersistentHashMap_isUnaryNode___rarg(x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
lean_ctor_set(x_10, 0, x_45);
x_48 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_48);
x_49 = 1;
x_50 = lean_box(x_49);
lean_ctor_set(x_31, 1, x_50);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_free_object(x_31);
lean_dec(x_45);
lean_free_object(x_10);
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
lean_dec(x_47);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_set(x_29, x_8, x_55);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_51, 1, x_58);
lean_ctor_set(x_51, 0, x_1);
return x_51;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_51, 0);
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_51);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_array_set(x_29, x_8, x_61);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_62);
x_63 = 1;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_1);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_31, 0);
lean_inc(x_66);
lean_dec(x_31);
x_67 = l_PersistentHashMap_isUnaryNode___rarg(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_ctor_set(x_10, 0, x_66);
x_68 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_68);
x_69 = 1;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_66);
lean_free_object(x_10);
x_72 = lean_ctor_get(x_67, 0);
lean_inc(x_72);
lean_dec(x_67);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_array_set(x_29, x_8, x_76);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_77);
x_78 = 1;
x_79 = lean_box(x_78);
if (lean_is_scalar(x_75)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_75;
}
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_1);
x_81 = lean_ctor_get(x_31, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_82 = x_31;
} else {
 lean_dec_ref(x_31);
 x_82 = lean_box(0);
}
x_83 = l_PersistentHashMap_isUnaryNode___rarg(x_81);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; 
lean_ctor_set(x_10, 0, x_81);
x_84 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = 1;
x_87 = lean_box(x_86);
if (lean_is_scalar(x_82)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_82;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_82);
lean_dec(x_81);
lean_free_object(x_10);
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
lean_dec(x_83);
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
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_array_set(x_29, x_8, x_93);
lean_dec(x_8);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_92)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_92;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
else
{
lean_object* x_99; lean_object* x_100; size_t x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_10, 0);
lean_inc(x_99);
lean_dec(x_10);
x_100 = lean_array_set(x_4, x_8, x_9);
x_101 = x_2 >> x_5;
x_102 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_99, x_101, x_3);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_100);
lean_dec(x_8);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_105 = x_102;
} else {
 lean_dec_ref(x_102);
 x_105 = lean_box(0);
}
x_106 = 0;
x_107 = lean_box(x_106);
if (lean_is_scalar(x_105)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_105;
}
lean_ctor_set(x_108, 0, x_1);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_109 = x_1;
} else {
 lean_dec_ref(x_1);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_102, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_111 = x_102;
} else {
 lean_dec_ref(x_102);
 x_111 = lean_box(0);
}
x_112 = l_PersistentHashMap_isUnaryNode___rarg(x_110);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_110);
x_114 = lean_array_set(x_100, x_8, x_113);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_115 = lean_alloc_ctor(0, 1, 0);
} else {
 x_115 = x_109;
}
lean_ctor_set(x_115, 0, x_114);
x_116 = 1;
x_117 = lean_box(x_116);
if (lean_is_scalar(x_111)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_111;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_111);
lean_dec(x_110);
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
lean_dec(x_112);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
x_124 = lean_array_set(x_100, x_8, x_123);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_125 = lean_alloc_ctor(0, 1, 0);
} else {
 x_125 = x_109;
}
lean_ctor_set(x_125, 0, x_124);
x_126 = 1;
x_127 = lean_box(x_126);
if (lean_is_scalar(x_122)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_122;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
}
default: 
{
uint8_t x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_8);
lean_dec(x_4);
x_129 = 0;
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_1);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_1, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_1, 1);
lean_inc(x_133);
x_134 = lean_unsigned_to_nat(0u);
x_135 = l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3(x_132, x_3, x_134);
if (lean_obj_tag(x_135) == 0)
{
uint8_t x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_133);
lean_dec(x_132);
x_136 = 0;
x_137 = lean_box(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_1);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
else
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_1);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; 
x_140 = lean_ctor_get(x_1, 1);
lean_dec(x_140);
x_141 = lean_ctor_get(x_1, 0);
lean_dec(x_141);
x_142 = lean_ctor_get(x_135, 0);
lean_inc(x_142);
lean_dec(x_135);
x_143 = l_Array_eraseIdx_x27___rarg(x_132, x_142);
x_144 = l_Array_eraseIdx_x27___rarg(x_133, x_142);
lean_dec(x_142);
lean_ctor_set(x_1, 1, x_144);
lean_ctor_set(x_1, 0, x_143);
x_145 = 1;
x_146 = lean_box(x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_1);
x_148 = lean_ctor_get(x_135, 0);
lean_inc(x_148);
lean_dec(x_135);
x_149 = l_Array_eraseIdx_x27___rarg(x_132, x_148);
x_150 = l_Array_eraseIdx_x27___rarg(x_133, x_148);
lean_dec(x_148);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = 1;
x_153 = lean_box(x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Name_hash(x_2);
x_7 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_4, x_6, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = l_Lean_Name_hash(x_2);
x_17 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_14, x_16, x_2);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_15, x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* lean_metavar_ctx_erase_delayed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
x_5 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_4, x_2);
lean_dec(x_2);
lean_ctor_set(x_1, 5, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_ctor_get(x_1, 4);
x_11 = lean_ctor_get(x_1, 5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_12 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_11, x_2);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_7);
lean_ctor_set(x_13, 2, x_8);
lean_ctor_set(x_13, 3, x_9);
lean_ctor_set(x_13, 4, x_10);
lean_ctor_set(x_13, 5, x_12);
return x_13;
}
}
}
lean_object* l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___main___at_Lean_MetavarContext_eraseDelayed___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_isLevelAssignable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown universe metavariable");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_isLevelAssignable___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_MetavarContext_getDecl___closed__1;
x_2 = lean_unsigned_to_nat(375u);
x_3 = lean_unsigned_to_nat(12u);
x_4 = l_Lean_MetavarContext_isLevelAssignable___closed__1;
x_5 = l___private_Init_Util_1__mkPanicMessage(x_1, x_2, x_3, x_4);
return x_5;
}
}
uint8_t l_Lean_MetavarContext_isLevelAssignable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_PersistentHashMap_find_x3f___at_Lean_MetavarContext_findLevelDepth_x3f___spec__1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Bool_Inhabited;
x_6 = l_Lean_MetavarContext_isLevelAssignable___closed__2;
x_7 = lean_box(x_5);
x_8 = lean_panic_fn(x_7, x_6);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_10);
return x_12;
}
}
}
lean_object* l_Lean_MetavarContext_isLevelAssignable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_isLevelAssignable(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_MetavarContext_isExprAssignable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Lean_MetavarContext_getDecl(x_1, x_2);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_isExprAssignable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_isExprAssignable(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_incDepth(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_ctor_get(x_1, 4);
x_11 = lean_ctor_get(x_1, 5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
lean_ctor_set(x_14, 2, x_8);
lean_ctor_set(x_14, 3, x_9);
lean_ctor_set(x_14, 4, x_10);
lean_ctor_set(x_14, 5, x_11);
return x_14;
}
}
}
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Lean_Level_hasMVar(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
x_2 = x_3;
goto _start;
}
}
case 2:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_Level_hasMVar(x_7);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Lean_Level_hasMVar(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_1);
x_11 = 0;
return x_11;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_13; 
lean_inc(x_1);
x_13 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_7);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Level_hasMVar(x_8);
if (x_14 == 0)
{
lean_dec(x_1);
return x_13;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = 1;
return x_16;
}
}
}
case 3:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = l_Lean_Level_hasMVar(x_17);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Level_hasMVar(x_18);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = 0;
return x_21;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_23; 
lean_inc(x_1);
x_23 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_17);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = l_Lean_Level_hasMVar(x_18);
if (x_24 == 0)
{
lean_dec(x_1);
return x_23;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_26; 
lean_dec(x_1);
x_26 = 1;
return x_26;
}
}
}
case 5:
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
x_28 = lean_metavar_ctx_is_level_assigned(x_1, x_27);
return x_28;
}
default: 
{
uint8_t x_29; 
lean_dec(x_1);
x_29 = 0;
return x_29;
}
}
}
}
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignedLevelMVar(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
x_6 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_4);
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
lean_object* l_Lean_MetavarContext_hasAssignedMVar___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_metavar_ctx_is_expr_assigned(x_1, x_3);
x_5 = lean_box(x_4);
return x_5;
}
case 3:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Lean_MetavarContext_hasAssignedLevelMVar___main(x_1, x_6);
x_8 = lean_box(x_7);
return x_8;
}
case 4:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1(x_1, x_10, x_9);
x_12 = lean_box(x_11);
return x_12;
}
case 5:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = l_Lean_Expr_hasMVar(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Expr_hasMVar(x_14);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = 0;
x_18 = lean_box(x_17);
return x_18;
}
else
{
x_2 = x_14;
goto _start;
}
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_inc(x_1);
x_20 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_13);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_hasMVar(x_14);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_1);
x_23 = lean_box(x_21);
return x_23;
}
else
{
x_2 = x_14;
goto _start;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = 1;
x_26 = lean_box(x_25);
return x_26;
}
}
}
case 6:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_2, 2);
x_29 = l_Lean_Expr_hasMVar(x_27);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Expr_hasMVar(x_28);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; 
lean_dec(x_1);
x_31 = 0;
x_32 = lean_box(x_31);
return x_32;
}
else
{
x_2 = x_28;
goto _start;
}
}
else
{
lean_object* x_34; uint8_t x_35; 
lean_inc(x_1);
x_34 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_27);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = l_Lean_Expr_hasMVar(x_28);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_1);
x_37 = lean_box(x_35);
return x_37;
}
else
{
x_2 = x_28;
goto _start;
}
}
else
{
uint8_t x_39; lean_object* x_40; 
lean_dec(x_1);
x_39 = 1;
x_40 = lean_box(x_39);
return x_40;
}
}
}
case 7:
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_2, 1);
x_42 = lean_ctor_get(x_2, 2);
x_43 = l_Lean_Expr_hasMVar(x_41);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = l_Lean_Expr_hasMVar(x_42);
if (x_44 == 0)
{
uint8_t x_45; lean_object* x_46; 
lean_dec(x_1);
x_45 = 0;
x_46 = lean_box(x_45);
return x_46;
}
else
{
x_2 = x_42;
goto _start;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
lean_inc(x_1);
x_48 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_41);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = l_Lean_Expr_hasMVar(x_42);
if (x_50 == 0)
{
lean_object* x_51; 
lean_dec(x_1);
x_51 = lean_box(x_49);
return x_51;
}
else
{
x_2 = x_42;
goto _start;
}
}
else
{
uint8_t x_53; lean_object* x_54; 
lean_dec(x_1);
x_53 = 1;
x_54 = lean_box(x_53);
return x_54;
}
}
}
case 8:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_2, 1);
x_56 = lean_ctor_get(x_2, 2);
x_57 = lean_ctor_get(x_2, 3);
x_58 = l_Lean_Expr_hasMVar(x_55);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = l_Lean_Expr_hasMVar(x_56);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = l_Lean_Expr_hasMVar(x_57);
if (x_60 == 0)
{
uint8_t x_61; lean_object* x_62; 
lean_dec(x_1);
x_61 = 0;
x_62 = lean_box(x_61);
return x_62;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
lean_object* x_64; uint8_t x_65; 
lean_inc(x_1);
x_64 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_56);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = l_Lean_Expr_hasMVar(x_57);
if (x_66 == 0)
{
lean_object* x_67; 
lean_dec(x_1);
x_67 = lean_box(x_65);
return x_67;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
uint8_t x_69; lean_object* x_70; 
lean_dec(x_1);
x_69 = 1;
x_70 = lean_box(x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; uint8_t x_72; 
lean_inc(x_1);
x_71 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_55);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
uint8_t x_73; 
x_73 = l_Lean_Expr_hasMVar(x_56);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Expr_hasMVar(x_57);
if (x_74 == 0)
{
lean_object* x_75; 
lean_dec(x_1);
x_75 = lean_box(x_72);
return x_75;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
lean_object* x_77; uint8_t x_78; 
lean_inc(x_1);
x_77 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_56);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
if (x_78 == 0)
{
uint8_t x_79; 
x_79 = l_Lean_Expr_hasMVar(x_57);
if (x_79 == 0)
{
lean_object* x_80; 
lean_dec(x_1);
x_80 = lean_box(x_78);
return x_80;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
uint8_t x_82; lean_object* x_83; 
lean_dec(x_1);
x_82 = 1;
x_83 = lean_box(x_82);
return x_83;
}
}
}
else
{
uint8_t x_84; lean_object* x_85; 
lean_dec(x_1);
x_84 = 1;
x_85 = lean_box(x_84);
return x_85;
}
}
}
case 10:
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_2, 1);
x_87 = l_Lean_Expr_hasMVar(x_86);
if (x_87 == 0)
{
uint8_t x_88; lean_object* x_89; 
lean_dec(x_1);
x_88 = 0;
x_89 = lean_box(x_88);
return x_89;
}
else
{
x_2 = x_86;
goto _start;
}
}
case 11:
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_2, 2);
x_92 = l_Lean_Expr_hasMVar(x_91);
if (x_92 == 0)
{
uint8_t x_93; lean_object* x_94; 
lean_dec(x_1);
x_93 = 0;
x_94 = lean_box(x_93);
return x_94;
}
else
{
x_2 = x_91;
goto _start;
}
}
case 12:
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_1);
x_96 = l_Bool_Inhabited;
x_97 = lean_box(x_96);
x_98 = l_unreachable_x21___rarg(x_97);
return x_98;
}
default: 
{
uint8_t x_99; lean_object* x_100; 
lean_dec(x_1);
x_99 = 0;
x_100 = lean_box(x_99);
return x_100;
}
}
}
}
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___main___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedMVar___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignedMVar___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignedMVar(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Lean_MetavarContext_hasAssignableLevelMVar___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Lean_Level_hasMVar(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
x_2 = x_3;
goto _start;
}
}
case 2:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_Level_hasMVar(x_7);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Lean_Level_hasMVar(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_13; 
x_13 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_7);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Level_hasMVar(x_8);
if (x_14 == 0)
{
return x_13;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
}
}
case 3:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = l_Lean_Level_hasMVar(x_17);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Level_hasMVar(x_18);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_23; 
x_23 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_17);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = l_Lean_Level_hasMVar(x_18);
if (x_24 == 0)
{
return x_23;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_26; 
x_26 = 1;
return x_26;
}
}
}
case 5:
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = l_Lean_MetavarContext_isLevelAssignable(x_1, x_27);
return x_28;
}
default: 
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
}
}
}
lean_object* l_Lean_MetavarContext_hasAssignableLevelMVar___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_MetavarContext_hasAssignableLevelMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignableLevelMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
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
x_6 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_4);
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
lean_object* l_Lean_MetavarContext_hasAssignableMVar___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Lean_MetavarContext_isExprAssignable(x_1, x_3);
x_5 = lean_box(x_4);
return x_5;
}
case 3:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Lean_MetavarContext_hasAssignableLevelMVar___main(x_1, x_6);
x_8 = lean_box(x_7);
return x_8;
}
case 4:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1(x_1, x_10, x_9);
x_12 = lean_box(x_11);
return x_12;
}
case 5:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = l_Lean_Expr_hasMVar(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Expr_hasMVar(x_14);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; 
x_17 = 0;
x_18 = lean_box(x_17);
return x_18;
}
else
{
x_2 = x_14;
goto _start;
}
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_13);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_hasMVar(x_14);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_box(x_21);
return x_23;
}
else
{
x_2 = x_14;
goto _start;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
x_25 = 1;
x_26 = lean_box(x_25);
return x_26;
}
}
}
case 6:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_2, 2);
x_29 = l_Lean_Expr_hasMVar(x_27);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Expr_hasMVar(x_28);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; 
x_31 = 0;
x_32 = lean_box(x_31);
return x_32;
}
else
{
x_2 = x_28;
goto _start;
}
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_27);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = l_Lean_Expr_hasMVar(x_28);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_box(x_35);
return x_37;
}
else
{
x_2 = x_28;
goto _start;
}
}
else
{
uint8_t x_39; lean_object* x_40; 
x_39 = 1;
x_40 = lean_box(x_39);
return x_40;
}
}
}
case 7:
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_2, 1);
x_42 = lean_ctor_get(x_2, 2);
x_43 = l_Lean_Expr_hasMVar(x_41);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = l_Lean_Expr_hasMVar(x_42);
if (x_44 == 0)
{
uint8_t x_45; lean_object* x_46; 
x_45 = 0;
x_46 = lean_box(x_45);
return x_46;
}
else
{
x_2 = x_42;
goto _start;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_41);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = l_Lean_Expr_hasMVar(x_42);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_box(x_49);
return x_51;
}
else
{
x_2 = x_42;
goto _start;
}
}
else
{
uint8_t x_53; lean_object* x_54; 
x_53 = 1;
x_54 = lean_box(x_53);
return x_54;
}
}
}
case 8:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_2, 1);
x_56 = lean_ctor_get(x_2, 2);
x_57 = lean_ctor_get(x_2, 3);
x_58 = l_Lean_Expr_hasMVar(x_55);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = l_Lean_Expr_hasMVar(x_56);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = l_Lean_Expr_hasMVar(x_57);
if (x_60 == 0)
{
uint8_t x_61; lean_object* x_62; 
x_61 = 0;
x_62 = lean_box(x_61);
return x_62;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
lean_object* x_64; uint8_t x_65; 
x_64 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_56);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = l_Lean_Expr_hasMVar(x_57);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_box(x_65);
return x_67;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
uint8_t x_69; lean_object* x_70; 
x_69 = 1;
x_70 = lean_box(x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; uint8_t x_72; 
x_71 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_55);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
uint8_t x_73; 
x_73 = l_Lean_Expr_hasMVar(x_56);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Expr_hasMVar(x_57);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = lean_box(x_72);
return x_75;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
lean_object* x_77; uint8_t x_78; 
x_77 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_56);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
if (x_78 == 0)
{
uint8_t x_79; 
x_79 = l_Lean_Expr_hasMVar(x_57);
if (x_79 == 0)
{
lean_object* x_80; 
x_80 = lean_box(x_78);
return x_80;
}
else
{
x_2 = x_57;
goto _start;
}
}
else
{
uint8_t x_82; lean_object* x_83; 
x_82 = 1;
x_83 = lean_box(x_82);
return x_83;
}
}
}
else
{
uint8_t x_84; lean_object* x_85; 
x_84 = 1;
x_85 = lean_box(x_84);
return x_85;
}
}
}
case 10:
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_2, 1);
x_87 = l_Lean_Expr_hasMVar(x_86);
if (x_87 == 0)
{
uint8_t x_88; lean_object* x_89; 
x_88 = 0;
x_89 = lean_box(x_88);
return x_89;
}
else
{
x_2 = x_86;
goto _start;
}
}
case 11:
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_2, 2);
x_92 = l_Lean_Expr_hasMVar(x_91);
if (x_92 == 0)
{
uint8_t x_93; lean_object* x_94; 
x_93 = 0;
x_94 = lean_box(x_93);
return x_94;
}
else
{
x_2 = x_91;
goto _start;
}
}
case 12:
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_96 = l_Bool_Inhabited;
x_97 = lean_box(x_96);
x_98 = l_unreachable_x21___rarg(x_97);
return x_98;
}
default: 
{
uint8_t x_99; lean_object* x_100; 
x_99 = 0;
x_100 = lean_box(x_99);
return x_100;
}
}
}
}
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignableMVar___main___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_hasAssignableMVar___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignableMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignableMVar___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_hasAssignableMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_hasAssignableMVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_level_update_succ(x_1, x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_level_update_succ(x_1, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
case 2:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_12, x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_13, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_level_update_max(x_1, x_15, x_19);
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
x_23 = lean_level_update_max(x_1, x_15, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
case 3:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_25, x_2);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_26, x_28);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = l_Lean_Level_Inhabited;
x_33 = l_Lean_Level_updateIMax_x21___closed__2;
x_34 = lean_panic_fn(x_32, x_33);
lean_ctor_set(x_29, 0, x_34);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
x_36 = l_Lean_Level_Inhabited;
x_37 = l_Lean_Level_updateIMax_x21___closed__2;
x_38 = lean_panic_fn(x_36, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
}
case 5:
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
lean_inc(x_40);
lean_inc(x_2);
x_41 = lean_metavar_ctx_get_level_assignment(x_2, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
lean_dec(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_2);
return x_42;
}
else
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_1);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Level_hasMVar(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
lean_dec(x_40);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_2);
return x_45;
}
else
{
lean_object* x_46; uint8_t x_47; 
x_46 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_43, x_2);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
x_50 = lean_metavar_ctx_assign_level(x_49, x_40, x_48);
lean_ctor_set(x_46, 1, x_50);
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_46, 0);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_46);
lean_inc(x_51);
x_53 = lean_metavar_ctx_assign_level(x_52, x_40, x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
default: 
{
lean_object* x_55; 
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_1);
lean_ctor_set(x_55, 1, x_2);
return x_55;
}
}
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_instantiateLevelMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_1, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_ctor_set(x_2, 0, x_7);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_2);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_1, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_12);
if (lean_is_scalar(x_16)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_16;
}
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_expr_eqv(x_4, x_1);
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
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4(lean_object* x_1, lean_object* x_2) {
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
x_6 = lean_expr_eqv(x_4, x_1);
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
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_2__visit___spec__7(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_Lean_Expr_hash(x_4);
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
x_16 = l_Lean_Expr_hash(x_12);
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
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_2__visit___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_2__visit___spec__7(x_3, x_6);
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
lean_object* l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_2__visit___spec__5(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_2__visit___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = lean_expr_eqv(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(x_1, x_2, x_7);
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
x_13 = lean_expr_eqv(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(x_1, x_2, x_12);
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
lean_object* l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = l_Lean_Expr_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4(x_2, x_10);
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
x_17 = l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_2__visit___spec__5(x_13, x_15);
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
x_18 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(x_2, x_3, x_10);
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
x_23 = l_Lean_Expr_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4(x_2, x_25);
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
x_32 = l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_2__visit___spec__5(x_28, x_30);
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
x_34 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_2__visit___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_2__visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_6, x_2);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_8 = lean_apply_2(x_1, x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_14 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_13, x_2, x_12);
lean_ctor_set(x_10, 1, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
lean_inc(x_15);
x_18 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_17, x_2, x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_8, 1, x_19);
return x_8;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_8, 1);
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_inc(x_21);
lean_dec(x_8);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_24 = x_20;
} else {
 lean_dec_ref(x_20);
 x_24 = lean_box(0);
}
lean_inc(x_21);
x_25 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_23, x_2, x_21);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_ctor_get(x_7, 0);
lean_inc(x_28);
lean_dec(x_7);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at___private_Init_Lean_MetavarContext_2__visit___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_2__visit___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_3__getMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Init_Lean_MetavarContext_4__modifyCtx(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = lean_apply_1(x_1, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 0);
x_10 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_7, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_ctor_set(x_2, 0, x_12);
x_13 = l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(x_8, x_2);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_11);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_23 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_19, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
x_27 = l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(x_20, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
lean_ctor_set(x_1, 1, x_28);
lean_ctor_set(x_1, 0, x_24);
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_36 = x_2;
} else {
 lean_dec_ref(x_2);
 x_36 = lean_box(0);
}
x_37 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_32, x_34);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
if (lean_is_scalar(x_36)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_36;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_35);
x_41 = l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(x_33, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_38);
lean_ctor_set(x_45, 1, x_42);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_6 = l_Array_empty___closed__1;
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_box(0);
x_11 = x_10;
x_12 = lean_array_fset(x_2, x_1, x_11);
x_13 = l_Lean_Expr_hasMVar(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
lean_inc(x_9);
x_16 = x_9;
lean_dec(x_9);
x_17 = lean_array_fset(x_12, x_1, x_16);
lean_dec(x_1);
x_1 = x_15;
x_2 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
x_20 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_19, x_9);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_inc(x_9);
x_21 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_9, x_3);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_inc(x_9);
x_26 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_25, x_9, x_23);
lean_ctor_set(x_22, 1, x_26);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_1, x_27);
x_29 = x_23;
lean_dec(x_9);
x_30 = lean_array_fset(x_12, x_1, x_29);
lean_dec(x_1);
x_1 = x_28;
x_2 = x_30;
x_3 = x_22;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
lean_inc(x_23);
lean_inc(x_9);
x_34 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_33, x_9, x_23);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_1, x_36);
x_38 = x_23;
lean_dec(x_9);
x_39 = lean_array_fset(x_12, x_1, x_38);
lean_dec(x_1);
x_1 = x_37;
x_2 = x_39;
x_3 = x_35;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_20, 0);
lean_inc(x_41);
lean_dec(x_20);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_1, x_42);
x_44 = x_41;
lean_dec(x_9);
x_45 = lean_array_fset(x_12, x_1, x_44);
lean_dec(x_1);
x_1 = x_43;
x_2 = x_45;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; uint8_t x_52; 
lean_dec(x_3);
x_5 = l_Lean_Expr_isMVar(x_1);
x_52 = l_Lean_Expr_hasMVar(x_1);
if (x_52 == 0)
{
x_6 = x_1;
x_7 = x_4;
goto block_51;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_4, 1);
lean_inc(x_53);
x_54 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_53, x_1);
lean_dec(x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
lean_inc(x_1);
x_55 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
x_60 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_59, x_1, x_57);
lean_ctor_set(x_56, 1, x_60);
x_6 = x_57;
x_7 = x_56;
goto block_51;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 0);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_56);
lean_inc(x_57);
x_63 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_62, x_1, x_57);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_6 = x_57;
x_7 = x_64;
goto block_51;
}
}
else
{
lean_object* x_65; 
lean_dec(x_1);
x_65 = lean_ctor_get(x_54, 0);
lean_inc(x_65);
lean_dec(x_54);
x_6 = x_65;
x_7 = x_4;
goto block_51;
}
}
block_51:
{
lean_object* x_8; 
if (x_5 == 0)
{
lean_object* x_19; 
x_19 = lean_box(0);
x_8 = x_19;
goto block_18;
}
else
{
uint8_t x_20; 
x_20 = l_Lean_Expr_isLambda(x_6);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_box(0);
x_8 = x_21;
goto block_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Array_reverseAux___main___rarg(x_2, x_22);
x_24 = l_Lean_Expr_betaRev(x_6, x_23);
lean_dec(x_23);
lean_dec(x_6);
x_25 = l_Lean_Expr_hasMVar(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_7);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
x_28 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_27, x_24);
lean_dec(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_inc(x_24);
x_29 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_24, x_7);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_29, 1);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
x_35 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_34, x_24, x_33);
lean_ctor_set(x_31, 1, x_35);
return x_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_29, 0);
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
lean_inc(x_36);
x_39 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_38, x_24, x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_29, 1, x_40);
return x_29;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_29, 1);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_41);
lean_inc(x_42);
lean_dec(x_29);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_45 = x_41;
} else {
 lean_dec_ref(x_41);
 x_45 = lean_box(0);
}
lean_inc(x_42);
x_46 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_44, x_24, x_42);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_43);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_24);
x_49 = lean_ctor_get(x_28, 0);
lean_inc(x_49);
lean_dec(x_28);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_7);
return x_50;
}
}
}
}
block_18:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_dec(x_8);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_9, x_2, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_12, x_12, x_9, x_6);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_14, x_14, x_9, x_6);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
}
case 1:
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; uint8_t x_113; 
lean_dec(x_3);
x_66 = l_Lean_Expr_isMVar(x_1);
x_113 = l_Lean_Expr_hasMVar(x_1);
if (x_113 == 0)
{
x_67 = x_1;
x_68 = x_4;
goto block_112;
}
else
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_4, 1);
lean_inc(x_114);
x_115 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_114, x_1);
lean_dec(x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
lean_inc(x_1);
x_116 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
lean_dec(x_116);
x_119 = !lean_is_exclusive(x_117);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
x_121 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_120, x_1, x_118);
lean_ctor_set(x_117, 1, x_121);
x_67 = x_118;
x_68 = x_117;
goto block_112;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_117, 0);
x_123 = lean_ctor_get(x_117, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_117);
lean_inc(x_118);
x_124 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_123, x_1, x_118);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_124);
x_67 = x_118;
x_68 = x_125;
goto block_112;
}
}
else
{
lean_object* x_126; 
lean_dec(x_1);
x_126 = lean_ctor_get(x_115, 0);
lean_inc(x_126);
lean_dec(x_115);
x_67 = x_126;
x_68 = x_4;
goto block_112;
}
}
block_112:
{
lean_object* x_69; 
if (x_66 == 0)
{
lean_object* x_80; 
x_80 = lean_box(0);
x_69 = x_80;
goto block_79;
}
else
{
uint8_t x_81; 
x_81 = l_Lean_Expr_isLambda(x_67);
if (x_81 == 0)
{
lean_object* x_82; 
x_82 = lean_box(0);
x_69 = x_82;
goto block_79;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Array_reverseAux___main___rarg(x_2, x_83);
x_85 = l_Lean_Expr_betaRev(x_67, x_84);
lean_dec(x_84);
lean_dec(x_67);
x_86 = l_Lean_Expr_hasMVar(x_85);
if (x_86 == 0)
{
lean_object* x_87; 
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_68);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_68, 1);
lean_inc(x_88);
x_89 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_88, x_85);
lean_dec(x_88);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; uint8_t x_91; 
lean_inc(x_85);
x_90 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_85, x_68);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_90, 1);
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_90, 0);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
x_96 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_95, x_85, x_94);
lean_ctor_set(x_92, 1, x_96);
return x_90;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_90, 0);
x_98 = lean_ctor_get(x_92, 0);
x_99 = lean_ctor_get(x_92, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_92);
lean_inc(x_97);
x_100 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_99, x_85, x_97);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_90, 1, x_101);
return x_90;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_102 = lean_ctor_get(x_90, 1);
x_103 = lean_ctor_get(x_90, 0);
lean_inc(x_102);
lean_inc(x_103);
lean_dec(x_90);
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_106 = x_102;
} else {
 lean_dec_ref(x_102);
 x_106 = lean_box(0);
}
lean_inc(x_103);
x_107 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_105, x_85, x_103);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_85);
x_110 = lean_ctor_get(x_89, 0);
lean_inc(x_110);
lean_dec(x_89);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_68);
return x_111;
}
}
}
}
block_79:
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_69);
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_70, x_2, x_68);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_73, x_73, x_70, x_67);
lean_dec(x_73);
lean_ctor_set(x_71, 0, x_74);
return x_71;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_71, 0);
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_71);
x_77 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_75, x_75, x_70, x_67);
lean_dec(x_75);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
}
case 2:
{
lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; lean_object* x_175; lean_object* x_176; 
lean_dec(x_3);
x_127 = lean_ctor_get(x_1, 0);
lean_inc(x_127);
x_128 = l_Lean_Expr_isMVar(x_1);
x_175 = lean_ctor_get(x_4, 0);
lean_inc(x_175);
x_176 = lean_metavar_ctx_get_delayed_assignment(x_175, x_127);
if (lean_obj_tag(x_176) == 0)
{
uint8_t x_177; 
x_177 = l_Lean_Expr_hasMVar(x_1);
if (x_177 == 0)
{
x_129 = x_1;
x_130 = x_4;
goto block_174;
}
else
{
lean_object* x_178; lean_object* x_179; 
x_178 = lean_ctor_get(x_4, 1);
lean_inc(x_178);
x_179 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_178, x_1);
lean_dec(x_178);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
lean_inc(x_1);
x_180 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 0);
lean_inc(x_182);
lean_dec(x_180);
x_183 = !lean_is_exclusive(x_181);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; 
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_182);
x_185 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_184, x_1, x_182);
lean_ctor_set(x_181, 1, x_185);
x_129 = x_182;
x_130 = x_181;
goto block_174;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_181, 0);
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_181);
lean_inc(x_182);
x_188 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_187, x_1, x_182);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_188);
x_129 = x_182;
x_130 = x_189;
goto block_174;
}
}
else
{
lean_object* x_190; 
lean_dec(x_1);
x_190 = lean_ctor_get(x_179, 0);
lean_inc(x_190);
lean_dec(x_179);
x_129 = x_190;
x_130 = x_4;
goto block_174;
}
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_224; 
x_191 = lean_ctor_get(x_176, 0);
lean_inc(x_191);
lean_dec(x_176);
x_192 = lean_ctor_get(x_191, 1);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 2);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_array_get_size(x_2);
x_195 = lean_array_get_size(x_192);
x_224 = lean_nat_dec_lt(x_194, x_195);
lean_dec(x_194);
if (x_224 == 0)
{
uint8_t x_225; 
x_225 = l_Lean_Expr_hasMVar(x_193);
if (x_225 == 0)
{
x_196 = x_193;
x_197 = x_4;
goto block_223;
}
else
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_4, 1);
lean_inc(x_226);
x_227 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_226, x_193);
lean_dec(x_226);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
lean_inc(x_193);
x_228 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_193, x_4);
x_229 = lean_ctor_get(x_228, 1);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 0);
lean_inc(x_230);
lean_dec(x_228);
x_231 = !lean_is_exclusive(x_229);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; 
x_232 = lean_ctor_get(x_229, 1);
lean_inc(x_230);
x_233 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_232, x_193, x_230);
lean_ctor_set(x_229, 1, x_233);
x_196 = x_230;
x_197 = x_229;
goto block_223;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_234 = lean_ctor_get(x_229, 0);
x_235 = lean_ctor_get(x_229, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_229);
lean_inc(x_230);
x_236 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_235, x_193, x_230);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_234);
lean_ctor_set(x_237, 1, x_236);
x_196 = x_230;
x_197 = x_237;
goto block_223;
}
}
else
{
lean_object* x_238; 
lean_dec(x_193);
x_238 = lean_ctor_get(x_227, 0);
lean_inc(x_238);
lean_dec(x_227);
x_196 = x_238;
x_197 = x_4;
goto block_223;
}
}
}
else
{
lean_object* x_239; lean_object* x_240; uint8_t x_241; 
lean_dec(x_195);
lean_dec(x_193);
lean_dec(x_192);
x_239 = lean_unsigned_to_nat(0u);
x_240 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_239, x_2, x_4);
x_241 = !lean_is_exclusive(x_240);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_ctor_get(x_240, 0);
x_243 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_242, x_242, x_239, x_1);
lean_dec(x_242);
lean_ctor_set(x_240, 0, x_243);
return x_240;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_244 = lean_ctor_get(x_240, 0);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_240);
x_246 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_244, x_244, x_239, x_1);
lean_dec(x_244);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_245);
return x_247;
}
}
block_223:
{
uint8_t x_198; 
x_198 = l_Lean_Expr_hasMVar(x_196);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; uint8_t x_201; 
lean_dec(x_1);
x_199 = lean_unsigned_to_nat(0u);
x_200 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_199, x_2, x_197);
x_201 = !lean_is_exclusive(x_200);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_200, 0);
x_203 = lean_expr_abstract(x_196, x_192);
lean_dec(x_192);
lean_dec(x_196);
x_204 = lean_expr_instantiate_rev_range(x_203, x_199, x_195, x_202);
lean_dec(x_203);
x_205 = lean_array_get_size(x_202);
x_206 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_205, x_202, x_195, x_204);
lean_dec(x_202);
lean_dec(x_205);
lean_ctor_set(x_200, 0, x_206);
return x_200;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_207 = lean_ctor_get(x_200, 0);
x_208 = lean_ctor_get(x_200, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_200);
x_209 = lean_expr_abstract(x_196, x_192);
lean_dec(x_192);
lean_dec(x_196);
x_210 = lean_expr_instantiate_rev_range(x_209, x_199, x_195, x_207);
lean_dec(x_209);
x_211 = lean_array_get_size(x_207);
x_212 = l___private_Init_Lean_Expr_2__mkAppRangeAux___main(x_211, x_207, x_195, x_210);
lean_dec(x_207);
lean_dec(x_211);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_208);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; 
lean_dec(x_196);
lean_dec(x_195);
lean_dec(x_192);
x_214 = lean_unsigned_to_nat(0u);
x_215 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_214, x_2, x_197);
x_216 = !lean_is_exclusive(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_215, 0);
x_218 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_217, x_217, x_214, x_1);
lean_dec(x_217);
lean_ctor_set(x_215, 0, x_218);
return x_215;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_219 = lean_ctor_get(x_215, 0);
x_220 = lean_ctor_get(x_215, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_215);
x_221 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_219, x_219, x_214, x_1);
lean_dec(x_219);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
}
}
}
block_174:
{
lean_object* x_131; 
if (x_128 == 0)
{
lean_object* x_142; 
x_142 = lean_box(0);
x_131 = x_142;
goto block_141;
}
else
{
uint8_t x_143; 
x_143 = l_Lean_Expr_isLambda(x_129);
if (x_143 == 0)
{
lean_object* x_144; 
x_144 = lean_box(0);
x_131 = x_144;
goto block_141;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_145 = lean_unsigned_to_nat(0u);
x_146 = l_Array_reverseAux___main___rarg(x_2, x_145);
x_147 = l_Lean_Expr_betaRev(x_129, x_146);
lean_dec(x_146);
lean_dec(x_129);
x_148 = l_Lean_Expr_hasMVar(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_130);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_130, 1);
lean_inc(x_150);
x_151 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_150, x_147);
lean_dec(x_150);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; uint8_t x_153; 
lean_inc(x_147);
x_152 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_147, x_130);
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; uint8_t x_155; 
x_154 = lean_ctor_get(x_152, 1);
x_155 = !lean_is_exclusive(x_154);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_152, 0);
x_157 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
x_158 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_157, x_147, x_156);
lean_ctor_set(x_154, 1, x_158);
return x_152;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_ctor_get(x_152, 0);
x_160 = lean_ctor_get(x_154, 0);
x_161 = lean_ctor_get(x_154, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_154);
lean_inc(x_159);
x_162 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_161, x_147, x_159);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_162);
lean_ctor_set(x_152, 1, x_163);
return x_152;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_164 = lean_ctor_get(x_152, 1);
x_165 = lean_ctor_get(x_152, 0);
lean_inc(x_164);
lean_inc(x_165);
lean_dec(x_152);
x_166 = lean_ctor_get(x_164, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_164, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_168 = x_164;
} else {
 lean_dec_ref(x_164);
 x_168 = lean_box(0);
}
lean_inc(x_165);
x_169 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_167, x_147, x_165);
if (lean_is_scalar(x_168)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_168;
}
lean_ctor_set(x_170, 0, x_166);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_165);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; 
lean_dec(x_147);
x_172 = lean_ctor_get(x_151, 0);
lean_inc(x_172);
lean_dec(x_151);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_130);
return x_173;
}
}
}
}
block_141:
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
lean_dec(x_131);
x_132 = lean_unsigned_to_nat(0u);
x_133 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_132, x_2, x_130);
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_135, x_135, x_132, x_129);
lean_dec(x_135);
lean_ctor_set(x_133, 0, x_136);
return x_133;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_133, 0);
x_138 = lean_ctor_get(x_133, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_133);
x_139 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_137, x_137, x_132, x_129);
lean_dec(x_137);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
}
case 3:
{
uint8_t x_248; lean_object* x_249; lean_object* x_250; uint8_t x_295; 
lean_dec(x_3);
x_248 = l_Lean_Expr_isMVar(x_1);
x_295 = l_Lean_Expr_hasMVar(x_1);
if (x_295 == 0)
{
x_249 = x_1;
x_250 = x_4;
goto block_294;
}
else
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_4, 1);
lean_inc(x_296);
x_297 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_296, x_1);
lean_dec(x_296);
if (lean_obj_tag(x_297) == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; uint8_t x_301; 
lean_inc(x_1);
x_298 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_299 = lean_ctor_get(x_298, 1);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 0);
lean_inc(x_300);
lean_dec(x_298);
x_301 = !lean_is_exclusive(x_299);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
x_303 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_302, x_1, x_300);
lean_ctor_set(x_299, 1, x_303);
x_249 = x_300;
x_250 = x_299;
goto block_294;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_304 = lean_ctor_get(x_299, 0);
x_305 = lean_ctor_get(x_299, 1);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_299);
lean_inc(x_300);
x_306 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_305, x_1, x_300);
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_304);
lean_ctor_set(x_307, 1, x_306);
x_249 = x_300;
x_250 = x_307;
goto block_294;
}
}
else
{
lean_object* x_308; 
lean_dec(x_1);
x_308 = lean_ctor_get(x_297, 0);
lean_inc(x_308);
lean_dec(x_297);
x_249 = x_308;
x_250 = x_4;
goto block_294;
}
}
block_294:
{
lean_object* x_251; 
if (x_248 == 0)
{
lean_object* x_262; 
x_262 = lean_box(0);
x_251 = x_262;
goto block_261;
}
else
{
uint8_t x_263; 
x_263 = l_Lean_Expr_isLambda(x_249);
if (x_263 == 0)
{
lean_object* x_264; 
x_264 = lean_box(0);
x_251 = x_264;
goto block_261;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_265 = lean_unsigned_to_nat(0u);
x_266 = l_Array_reverseAux___main___rarg(x_2, x_265);
x_267 = l_Lean_Expr_betaRev(x_249, x_266);
lean_dec(x_266);
lean_dec(x_249);
x_268 = l_Lean_Expr_hasMVar(x_267);
if (x_268 == 0)
{
lean_object* x_269; 
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_250);
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; 
x_270 = lean_ctor_get(x_250, 1);
lean_inc(x_270);
x_271 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_270, x_267);
lean_dec(x_270);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; uint8_t x_273; 
lean_inc(x_267);
x_272 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_267, x_250);
x_273 = !lean_is_exclusive(x_272);
if (x_273 == 0)
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_272, 1);
x_275 = !lean_is_exclusive(x_274);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_276 = lean_ctor_get(x_272, 0);
x_277 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
x_278 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_277, x_267, x_276);
lean_ctor_set(x_274, 1, x_278);
return x_272;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_279 = lean_ctor_get(x_272, 0);
x_280 = lean_ctor_get(x_274, 0);
x_281 = lean_ctor_get(x_274, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_274);
lean_inc(x_279);
x_282 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_281, x_267, x_279);
x_283 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_282);
lean_ctor_set(x_272, 1, x_283);
return x_272;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_284 = lean_ctor_get(x_272, 1);
x_285 = lean_ctor_get(x_272, 0);
lean_inc(x_284);
lean_inc(x_285);
lean_dec(x_272);
x_286 = lean_ctor_get(x_284, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_284, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 lean_ctor_release(x_284, 1);
 x_288 = x_284;
} else {
 lean_dec_ref(x_284);
 x_288 = lean_box(0);
}
lean_inc(x_285);
x_289 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_287, x_267, x_285);
if (lean_is_scalar(x_288)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_288;
}
lean_ctor_set(x_290, 0, x_286);
lean_ctor_set(x_290, 1, x_289);
x_291 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_291, 0, x_285);
lean_ctor_set(x_291, 1, x_290);
return x_291;
}
}
else
{
lean_object* x_292; lean_object* x_293; 
lean_dec(x_267);
x_292 = lean_ctor_get(x_271, 0);
lean_inc(x_292);
lean_dec(x_271);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_250);
return x_293;
}
}
}
}
block_261:
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
lean_dec(x_251);
x_252 = lean_unsigned_to_nat(0u);
x_253 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_252, x_2, x_250);
x_254 = !lean_is_exclusive(x_253);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; 
x_255 = lean_ctor_get(x_253, 0);
x_256 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_255, x_255, x_252, x_249);
lean_dec(x_255);
lean_ctor_set(x_253, 0, x_256);
return x_253;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_257 = lean_ctor_get(x_253, 0);
x_258 = lean_ctor_get(x_253, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_253);
x_259 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_257, x_257, x_252, x_249);
lean_dec(x_257);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_258);
return x_260;
}
}
}
}
case 4:
{
uint8_t x_309; lean_object* x_310; lean_object* x_311; uint8_t x_356; 
lean_dec(x_3);
x_309 = l_Lean_Expr_isMVar(x_1);
x_356 = l_Lean_Expr_hasMVar(x_1);
if (x_356 == 0)
{
x_310 = x_1;
x_311 = x_4;
goto block_355;
}
else
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_4, 1);
lean_inc(x_357);
x_358 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_357, x_1);
lean_dec(x_357);
if (lean_obj_tag(x_358) == 0)
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; 
lean_inc(x_1);
x_359 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_360 = lean_ctor_get(x_359, 1);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 0);
lean_inc(x_361);
lean_dec(x_359);
x_362 = !lean_is_exclusive(x_360);
if (x_362 == 0)
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_ctor_get(x_360, 1);
lean_inc(x_361);
x_364 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_363, x_1, x_361);
lean_ctor_set(x_360, 1, x_364);
x_310 = x_361;
x_311 = x_360;
goto block_355;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_365 = lean_ctor_get(x_360, 0);
x_366 = lean_ctor_get(x_360, 1);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_360);
lean_inc(x_361);
x_367 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_366, x_1, x_361);
x_368 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_368, 0, x_365);
lean_ctor_set(x_368, 1, x_367);
x_310 = x_361;
x_311 = x_368;
goto block_355;
}
}
else
{
lean_object* x_369; 
lean_dec(x_1);
x_369 = lean_ctor_get(x_358, 0);
lean_inc(x_369);
lean_dec(x_358);
x_310 = x_369;
x_311 = x_4;
goto block_355;
}
}
block_355:
{
lean_object* x_312; 
if (x_309 == 0)
{
lean_object* x_323; 
x_323 = lean_box(0);
x_312 = x_323;
goto block_322;
}
else
{
uint8_t x_324; 
x_324 = l_Lean_Expr_isLambda(x_310);
if (x_324 == 0)
{
lean_object* x_325; 
x_325 = lean_box(0);
x_312 = x_325;
goto block_322;
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; uint8_t x_329; 
x_326 = lean_unsigned_to_nat(0u);
x_327 = l_Array_reverseAux___main___rarg(x_2, x_326);
x_328 = l_Lean_Expr_betaRev(x_310, x_327);
lean_dec(x_327);
lean_dec(x_310);
x_329 = l_Lean_Expr_hasMVar(x_328);
if (x_329 == 0)
{
lean_object* x_330; 
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_328);
lean_ctor_set(x_330, 1, x_311);
return x_330;
}
else
{
lean_object* x_331; lean_object* x_332; 
x_331 = lean_ctor_get(x_311, 1);
lean_inc(x_331);
x_332 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_331, x_328);
lean_dec(x_331);
if (lean_obj_tag(x_332) == 0)
{
lean_object* x_333; uint8_t x_334; 
lean_inc(x_328);
x_333 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_328, x_311);
x_334 = !lean_is_exclusive(x_333);
if (x_334 == 0)
{
lean_object* x_335; uint8_t x_336; 
x_335 = lean_ctor_get(x_333, 1);
x_336 = !lean_is_exclusive(x_335);
if (x_336 == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_333, 0);
x_338 = lean_ctor_get(x_335, 1);
lean_inc(x_337);
x_339 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_338, x_328, x_337);
lean_ctor_set(x_335, 1, x_339);
return x_333;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_340 = lean_ctor_get(x_333, 0);
x_341 = lean_ctor_get(x_335, 0);
x_342 = lean_ctor_get(x_335, 1);
lean_inc(x_342);
lean_inc(x_341);
lean_dec(x_335);
lean_inc(x_340);
x_343 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_342, x_328, x_340);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_341);
lean_ctor_set(x_344, 1, x_343);
lean_ctor_set(x_333, 1, x_344);
return x_333;
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_345 = lean_ctor_get(x_333, 1);
x_346 = lean_ctor_get(x_333, 0);
lean_inc(x_345);
lean_inc(x_346);
lean_dec(x_333);
x_347 = lean_ctor_get(x_345, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_345, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_349 = x_345;
} else {
 lean_dec_ref(x_345);
 x_349 = lean_box(0);
}
lean_inc(x_346);
x_350 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_348, x_328, x_346);
if (lean_is_scalar(x_349)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_349;
}
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_352, 0, x_346);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
else
{
lean_object* x_353; lean_object* x_354; 
lean_dec(x_328);
x_353 = lean_ctor_get(x_332, 0);
lean_inc(x_353);
lean_dec(x_332);
x_354 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_311);
return x_354;
}
}
}
}
block_322:
{
lean_object* x_313; lean_object* x_314; uint8_t x_315; 
lean_dec(x_312);
x_313 = lean_unsigned_to_nat(0u);
x_314 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_313, x_2, x_311);
x_315 = !lean_is_exclusive(x_314);
if (x_315 == 0)
{
lean_object* x_316; lean_object* x_317; 
x_316 = lean_ctor_get(x_314, 0);
x_317 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_316, x_316, x_313, x_310);
lean_dec(x_316);
lean_ctor_set(x_314, 0, x_317);
return x_314;
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_318 = lean_ctor_get(x_314, 0);
x_319 = lean_ctor_get(x_314, 1);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_314);
x_320 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_318, x_318, x_313, x_310);
lean_dec(x_318);
x_321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_319);
return x_321;
}
}
}
}
case 5:
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_370 = lean_ctor_get(x_1, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_1, 1);
lean_inc(x_371);
lean_dec(x_1);
x_372 = lean_array_set(x_2, x_3, x_371);
x_373 = lean_unsigned_to_nat(1u);
x_374 = lean_nat_sub(x_3, x_373);
lean_dec(x_3);
x_1 = x_370;
x_2 = x_372;
x_3 = x_374;
goto _start;
}
case 6:
{
uint8_t x_376; lean_object* x_377; lean_object* x_378; uint8_t x_423; 
lean_dec(x_3);
x_376 = l_Lean_Expr_isMVar(x_1);
x_423 = l_Lean_Expr_hasMVar(x_1);
if (x_423 == 0)
{
x_377 = x_1;
x_378 = x_4;
goto block_422;
}
else
{
lean_object* x_424; lean_object* x_425; 
x_424 = lean_ctor_get(x_4, 1);
lean_inc(x_424);
x_425 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_424, x_1);
lean_dec(x_424);
if (lean_obj_tag(x_425) == 0)
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; 
lean_inc(x_1);
x_426 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_427 = lean_ctor_get(x_426, 1);
lean_inc(x_427);
x_428 = lean_ctor_get(x_426, 0);
lean_inc(x_428);
lean_dec(x_426);
x_429 = !lean_is_exclusive(x_427);
if (x_429 == 0)
{
lean_object* x_430; lean_object* x_431; 
x_430 = lean_ctor_get(x_427, 1);
lean_inc(x_428);
x_431 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_430, x_1, x_428);
lean_ctor_set(x_427, 1, x_431);
x_377 = x_428;
x_378 = x_427;
goto block_422;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_432 = lean_ctor_get(x_427, 0);
x_433 = lean_ctor_get(x_427, 1);
lean_inc(x_433);
lean_inc(x_432);
lean_dec(x_427);
lean_inc(x_428);
x_434 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_433, x_1, x_428);
x_435 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_435, 0, x_432);
lean_ctor_set(x_435, 1, x_434);
x_377 = x_428;
x_378 = x_435;
goto block_422;
}
}
else
{
lean_object* x_436; 
lean_dec(x_1);
x_436 = lean_ctor_get(x_425, 0);
lean_inc(x_436);
lean_dec(x_425);
x_377 = x_436;
x_378 = x_4;
goto block_422;
}
}
block_422:
{
lean_object* x_379; 
if (x_376 == 0)
{
lean_object* x_390; 
x_390 = lean_box(0);
x_379 = x_390;
goto block_389;
}
else
{
uint8_t x_391; 
x_391 = l_Lean_Expr_isLambda(x_377);
if (x_391 == 0)
{
lean_object* x_392; 
x_392 = lean_box(0);
x_379 = x_392;
goto block_389;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; 
x_393 = lean_unsigned_to_nat(0u);
x_394 = l_Array_reverseAux___main___rarg(x_2, x_393);
x_395 = l_Lean_Expr_betaRev(x_377, x_394);
lean_dec(x_394);
lean_dec(x_377);
x_396 = l_Lean_Expr_hasMVar(x_395);
if (x_396 == 0)
{
lean_object* x_397; 
x_397 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_397, 0, x_395);
lean_ctor_set(x_397, 1, x_378);
return x_397;
}
else
{
lean_object* x_398; lean_object* x_399; 
x_398 = lean_ctor_get(x_378, 1);
lean_inc(x_398);
x_399 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_398, x_395);
lean_dec(x_398);
if (lean_obj_tag(x_399) == 0)
{
lean_object* x_400; uint8_t x_401; 
lean_inc(x_395);
x_400 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_395, x_378);
x_401 = !lean_is_exclusive(x_400);
if (x_401 == 0)
{
lean_object* x_402; uint8_t x_403; 
x_402 = lean_ctor_get(x_400, 1);
x_403 = !lean_is_exclusive(x_402);
if (x_403 == 0)
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_404 = lean_ctor_get(x_400, 0);
x_405 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
x_406 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_405, x_395, x_404);
lean_ctor_set(x_402, 1, x_406);
return x_400;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_407 = lean_ctor_get(x_400, 0);
x_408 = lean_ctor_get(x_402, 0);
x_409 = lean_ctor_get(x_402, 1);
lean_inc(x_409);
lean_inc(x_408);
lean_dec(x_402);
lean_inc(x_407);
x_410 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_409, x_395, x_407);
x_411 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_410);
lean_ctor_set(x_400, 1, x_411);
return x_400;
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_412 = lean_ctor_get(x_400, 1);
x_413 = lean_ctor_get(x_400, 0);
lean_inc(x_412);
lean_inc(x_413);
lean_dec(x_400);
x_414 = lean_ctor_get(x_412, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_412, 1);
lean_inc(x_415);
if (lean_is_exclusive(x_412)) {
 lean_ctor_release(x_412, 0);
 lean_ctor_release(x_412, 1);
 x_416 = x_412;
} else {
 lean_dec_ref(x_412);
 x_416 = lean_box(0);
}
lean_inc(x_413);
x_417 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_415, x_395, x_413);
if (lean_is_scalar(x_416)) {
 x_418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_418 = x_416;
}
lean_ctor_set(x_418, 0, x_414);
lean_ctor_set(x_418, 1, x_417);
x_419 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_419, 0, x_413);
lean_ctor_set(x_419, 1, x_418);
return x_419;
}
}
else
{
lean_object* x_420; lean_object* x_421; 
lean_dec(x_395);
x_420 = lean_ctor_get(x_399, 0);
lean_inc(x_420);
lean_dec(x_399);
x_421 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_378);
return x_421;
}
}
}
}
block_389:
{
lean_object* x_380; lean_object* x_381; uint8_t x_382; 
lean_dec(x_379);
x_380 = lean_unsigned_to_nat(0u);
x_381 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_380, x_2, x_378);
x_382 = !lean_is_exclusive(x_381);
if (x_382 == 0)
{
lean_object* x_383; lean_object* x_384; 
x_383 = lean_ctor_get(x_381, 0);
x_384 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_383, x_383, x_380, x_377);
lean_dec(x_383);
lean_ctor_set(x_381, 0, x_384);
return x_381;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
x_385 = lean_ctor_get(x_381, 0);
x_386 = lean_ctor_get(x_381, 1);
lean_inc(x_386);
lean_inc(x_385);
lean_dec(x_381);
x_387 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_385, x_385, x_380, x_377);
lean_dec(x_385);
x_388 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_388, 0, x_387);
lean_ctor_set(x_388, 1, x_386);
return x_388;
}
}
}
}
case 7:
{
uint8_t x_437; lean_object* x_438; lean_object* x_439; uint8_t x_484; 
lean_dec(x_3);
x_437 = l_Lean_Expr_isMVar(x_1);
x_484 = l_Lean_Expr_hasMVar(x_1);
if (x_484 == 0)
{
x_438 = x_1;
x_439 = x_4;
goto block_483;
}
else
{
lean_object* x_485; lean_object* x_486; 
x_485 = lean_ctor_get(x_4, 1);
lean_inc(x_485);
x_486 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_485, x_1);
lean_dec(x_485);
if (lean_obj_tag(x_486) == 0)
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; 
lean_inc(x_1);
x_487 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_488 = lean_ctor_get(x_487, 1);
lean_inc(x_488);
x_489 = lean_ctor_get(x_487, 0);
lean_inc(x_489);
lean_dec(x_487);
x_490 = !lean_is_exclusive(x_488);
if (x_490 == 0)
{
lean_object* x_491; lean_object* x_492; 
x_491 = lean_ctor_get(x_488, 1);
lean_inc(x_489);
x_492 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_491, x_1, x_489);
lean_ctor_set(x_488, 1, x_492);
x_438 = x_489;
x_439 = x_488;
goto block_483;
}
else
{
lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; 
x_493 = lean_ctor_get(x_488, 0);
x_494 = lean_ctor_get(x_488, 1);
lean_inc(x_494);
lean_inc(x_493);
lean_dec(x_488);
lean_inc(x_489);
x_495 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_494, x_1, x_489);
x_496 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_496, 0, x_493);
lean_ctor_set(x_496, 1, x_495);
x_438 = x_489;
x_439 = x_496;
goto block_483;
}
}
else
{
lean_object* x_497; 
lean_dec(x_1);
x_497 = lean_ctor_get(x_486, 0);
lean_inc(x_497);
lean_dec(x_486);
x_438 = x_497;
x_439 = x_4;
goto block_483;
}
}
block_483:
{
lean_object* x_440; 
if (x_437 == 0)
{
lean_object* x_451; 
x_451 = lean_box(0);
x_440 = x_451;
goto block_450;
}
else
{
uint8_t x_452; 
x_452 = l_Lean_Expr_isLambda(x_438);
if (x_452 == 0)
{
lean_object* x_453; 
x_453 = lean_box(0);
x_440 = x_453;
goto block_450;
}
else
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; uint8_t x_457; 
x_454 = lean_unsigned_to_nat(0u);
x_455 = l_Array_reverseAux___main___rarg(x_2, x_454);
x_456 = l_Lean_Expr_betaRev(x_438, x_455);
lean_dec(x_455);
lean_dec(x_438);
x_457 = l_Lean_Expr_hasMVar(x_456);
if (x_457 == 0)
{
lean_object* x_458; 
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_456);
lean_ctor_set(x_458, 1, x_439);
return x_458;
}
else
{
lean_object* x_459; lean_object* x_460; 
x_459 = lean_ctor_get(x_439, 1);
lean_inc(x_459);
x_460 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_459, x_456);
lean_dec(x_459);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; uint8_t x_462; 
lean_inc(x_456);
x_461 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_456, x_439);
x_462 = !lean_is_exclusive(x_461);
if (x_462 == 0)
{
lean_object* x_463; uint8_t x_464; 
x_463 = lean_ctor_get(x_461, 1);
x_464 = !lean_is_exclusive(x_463);
if (x_464 == 0)
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_465 = lean_ctor_get(x_461, 0);
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_465);
x_467 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_466, x_456, x_465);
lean_ctor_set(x_463, 1, x_467);
return x_461;
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_468 = lean_ctor_get(x_461, 0);
x_469 = lean_ctor_get(x_463, 0);
x_470 = lean_ctor_get(x_463, 1);
lean_inc(x_470);
lean_inc(x_469);
lean_dec(x_463);
lean_inc(x_468);
x_471 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_470, x_456, x_468);
x_472 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_472, 0, x_469);
lean_ctor_set(x_472, 1, x_471);
lean_ctor_set(x_461, 1, x_472);
return x_461;
}
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; 
x_473 = lean_ctor_get(x_461, 1);
x_474 = lean_ctor_get(x_461, 0);
lean_inc(x_473);
lean_inc(x_474);
lean_dec(x_461);
x_475 = lean_ctor_get(x_473, 0);
lean_inc(x_475);
x_476 = lean_ctor_get(x_473, 1);
lean_inc(x_476);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 lean_ctor_release(x_473, 1);
 x_477 = x_473;
} else {
 lean_dec_ref(x_473);
 x_477 = lean_box(0);
}
lean_inc(x_474);
x_478 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_476, x_456, x_474);
if (lean_is_scalar(x_477)) {
 x_479 = lean_alloc_ctor(0, 2, 0);
} else {
 x_479 = x_477;
}
lean_ctor_set(x_479, 0, x_475);
lean_ctor_set(x_479, 1, x_478);
x_480 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_480, 0, x_474);
lean_ctor_set(x_480, 1, x_479);
return x_480;
}
}
else
{
lean_object* x_481; lean_object* x_482; 
lean_dec(x_456);
x_481 = lean_ctor_get(x_460, 0);
lean_inc(x_481);
lean_dec(x_460);
x_482 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_482, 0, x_481);
lean_ctor_set(x_482, 1, x_439);
return x_482;
}
}
}
}
block_450:
{
lean_object* x_441; lean_object* x_442; uint8_t x_443; 
lean_dec(x_440);
x_441 = lean_unsigned_to_nat(0u);
x_442 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_441, x_2, x_439);
x_443 = !lean_is_exclusive(x_442);
if (x_443 == 0)
{
lean_object* x_444; lean_object* x_445; 
x_444 = lean_ctor_get(x_442, 0);
x_445 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_444, x_444, x_441, x_438);
lean_dec(x_444);
lean_ctor_set(x_442, 0, x_445);
return x_442;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_446 = lean_ctor_get(x_442, 0);
x_447 = lean_ctor_get(x_442, 1);
lean_inc(x_447);
lean_inc(x_446);
lean_dec(x_442);
x_448 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_446, x_446, x_441, x_438);
lean_dec(x_446);
x_449 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_449, 0, x_448);
lean_ctor_set(x_449, 1, x_447);
return x_449;
}
}
}
}
case 8:
{
uint8_t x_498; lean_object* x_499; lean_object* x_500; uint8_t x_545; 
lean_dec(x_3);
x_498 = l_Lean_Expr_isMVar(x_1);
x_545 = l_Lean_Expr_hasMVar(x_1);
if (x_545 == 0)
{
x_499 = x_1;
x_500 = x_4;
goto block_544;
}
else
{
lean_object* x_546; lean_object* x_547; 
x_546 = lean_ctor_get(x_4, 1);
lean_inc(x_546);
x_547 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_546, x_1);
lean_dec(x_546);
if (lean_obj_tag(x_547) == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; uint8_t x_551; 
lean_inc(x_1);
x_548 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_549 = lean_ctor_get(x_548, 1);
lean_inc(x_549);
x_550 = lean_ctor_get(x_548, 0);
lean_inc(x_550);
lean_dec(x_548);
x_551 = !lean_is_exclusive(x_549);
if (x_551 == 0)
{
lean_object* x_552; lean_object* x_553; 
x_552 = lean_ctor_get(x_549, 1);
lean_inc(x_550);
x_553 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_552, x_1, x_550);
lean_ctor_set(x_549, 1, x_553);
x_499 = x_550;
x_500 = x_549;
goto block_544;
}
else
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; 
x_554 = lean_ctor_get(x_549, 0);
x_555 = lean_ctor_get(x_549, 1);
lean_inc(x_555);
lean_inc(x_554);
lean_dec(x_549);
lean_inc(x_550);
x_556 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_555, x_1, x_550);
x_557 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_557, 0, x_554);
lean_ctor_set(x_557, 1, x_556);
x_499 = x_550;
x_500 = x_557;
goto block_544;
}
}
else
{
lean_object* x_558; 
lean_dec(x_1);
x_558 = lean_ctor_get(x_547, 0);
lean_inc(x_558);
lean_dec(x_547);
x_499 = x_558;
x_500 = x_4;
goto block_544;
}
}
block_544:
{
lean_object* x_501; 
if (x_498 == 0)
{
lean_object* x_512; 
x_512 = lean_box(0);
x_501 = x_512;
goto block_511;
}
else
{
uint8_t x_513; 
x_513 = l_Lean_Expr_isLambda(x_499);
if (x_513 == 0)
{
lean_object* x_514; 
x_514 = lean_box(0);
x_501 = x_514;
goto block_511;
}
else
{
lean_object* x_515; lean_object* x_516; lean_object* x_517; uint8_t x_518; 
x_515 = lean_unsigned_to_nat(0u);
x_516 = l_Array_reverseAux___main___rarg(x_2, x_515);
x_517 = l_Lean_Expr_betaRev(x_499, x_516);
lean_dec(x_516);
lean_dec(x_499);
x_518 = l_Lean_Expr_hasMVar(x_517);
if (x_518 == 0)
{
lean_object* x_519; 
x_519 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_519, 0, x_517);
lean_ctor_set(x_519, 1, x_500);
return x_519;
}
else
{
lean_object* x_520; lean_object* x_521; 
x_520 = lean_ctor_get(x_500, 1);
lean_inc(x_520);
x_521 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_520, x_517);
lean_dec(x_520);
if (lean_obj_tag(x_521) == 0)
{
lean_object* x_522; uint8_t x_523; 
lean_inc(x_517);
x_522 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_517, x_500);
x_523 = !lean_is_exclusive(x_522);
if (x_523 == 0)
{
lean_object* x_524; uint8_t x_525; 
x_524 = lean_ctor_get(x_522, 1);
x_525 = !lean_is_exclusive(x_524);
if (x_525 == 0)
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; 
x_526 = lean_ctor_get(x_522, 0);
x_527 = lean_ctor_get(x_524, 1);
lean_inc(x_526);
x_528 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_527, x_517, x_526);
lean_ctor_set(x_524, 1, x_528);
return x_522;
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_529 = lean_ctor_get(x_522, 0);
x_530 = lean_ctor_get(x_524, 0);
x_531 = lean_ctor_get(x_524, 1);
lean_inc(x_531);
lean_inc(x_530);
lean_dec(x_524);
lean_inc(x_529);
x_532 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_531, x_517, x_529);
x_533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_533, 0, x_530);
lean_ctor_set(x_533, 1, x_532);
lean_ctor_set(x_522, 1, x_533);
return x_522;
}
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
x_534 = lean_ctor_get(x_522, 1);
x_535 = lean_ctor_get(x_522, 0);
lean_inc(x_534);
lean_inc(x_535);
lean_dec(x_522);
x_536 = lean_ctor_get(x_534, 0);
lean_inc(x_536);
x_537 = lean_ctor_get(x_534, 1);
lean_inc(x_537);
if (lean_is_exclusive(x_534)) {
 lean_ctor_release(x_534, 0);
 lean_ctor_release(x_534, 1);
 x_538 = x_534;
} else {
 lean_dec_ref(x_534);
 x_538 = lean_box(0);
}
lean_inc(x_535);
x_539 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_537, x_517, x_535);
if (lean_is_scalar(x_538)) {
 x_540 = lean_alloc_ctor(0, 2, 0);
} else {
 x_540 = x_538;
}
lean_ctor_set(x_540, 0, x_536);
lean_ctor_set(x_540, 1, x_539);
x_541 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_541, 0, x_535);
lean_ctor_set(x_541, 1, x_540);
return x_541;
}
}
else
{
lean_object* x_542; lean_object* x_543; 
lean_dec(x_517);
x_542 = lean_ctor_get(x_521, 0);
lean_inc(x_542);
lean_dec(x_521);
x_543 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_543, 0, x_542);
lean_ctor_set(x_543, 1, x_500);
return x_543;
}
}
}
}
block_511:
{
lean_object* x_502; lean_object* x_503; uint8_t x_504; 
lean_dec(x_501);
x_502 = lean_unsigned_to_nat(0u);
x_503 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_502, x_2, x_500);
x_504 = !lean_is_exclusive(x_503);
if (x_504 == 0)
{
lean_object* x_505; lean_object* x_506; 
x_505 = lean_ctor_get(x_503, 0);
x_506 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_505, x_505, x_502, x_499);
lean_dec(x_505);
lean_ctor_set(x_503, 0, x_506);
return x_503;
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_507 = lean_ctor_get(x_503, 0);
x_508 = lean_ctor_get(x_503, 1);
lean_inc(x_508);
lean_inc(x_507);
lean_dec(x_503);
x_509 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_507, x_507, x_502, x_499);
lean_dec(x_507);
x_510 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_510, 0, x_509);
lean_ctor_set(x_510, 1, x_508);
return x_510;
}
}
}
}
case 9:
{
uint8_t x_559; lean_object* x_560; lean_object* x_561; uint8_t x_606; 
lean_dec(x_3);
x_559 = l_Lean_Expr_isMVar(x_1);
x_606 = l_Lean_Expr_hasMVar(x_1);
if (x_606 == 0)
{
x_560 = x_1;
x_561 = x_4;
goto block_605;
}
else
{
lean_object* x_607; lean_object* x_608; 
x_607 = lean_ctor_get(x_4, 1);
lean_inc(x_607);
x_608 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_607, x_1);
lean_dec(x_607);
if (lean_obj_tag(x_608) == 0)
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; uint8_t x_612; 
lean_inc(x_1);
x_609 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_610 = lean_ctor_get(x_609, 1);
lean_inc(x_610);
x_611 = lean_ctor_get(x_609, 0);
lean_inc(x_611);
lean_dec(x_609);
x_612 = !lean_is_exclusive(x_610);
if (x_612 == 0)
{
lean_object* x_613; lean_object* x_614; 
x_613 = lean_ctor_get(x_610, 1);
lean_inc(x_611);
x_614 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_613, x_1, x_611);
lean_ctor_set(x_610, 1, x_614);
x_560 = x_611;
x_561 = x_610;
goto block_605;
}
else
{
lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; 
x_615 = lean_ctor_get(x_610, 0);
x_616 = lean_ctor_get(x_610, 1);
lean_inc(x_616);
lean_inc(x_615);
lean_dec(x_610);
lean_inc(x_611);
x_617 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_616, x_1, x_611);
x_618 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_618, 0, x_615);
lean_ctor_set(x_618, 1, x_617);
x_560 = x_611;
x_561 = x_618;
goto block_605;
}
}
else
{
lean_object* x_619; 
lean_dec(x_1);
x_619 = lean_ctor_get(x_608, 0);
lean_inc(x_619);
lean_dec(x_608);
x_560 = x_619;
x_561 = x_4;
goto block_605;
}
}
block_605:
{
lean_object* x_562; 
if (x_559 == 0)
{
lean_object* x_573; 
x_573 = lean_box(0);
x_562 = x_573;
goto block_572;
}
else
{
uint8_t x_574; 
x_574 = l_Lean_Expr_isLambda(x_560);
if (x_574 == 0)
{
lean_object* x_575; 
x_575 = lean_box(0);
x_562 = x_575;
goto block_572;
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; uint8_t x_579; 
x_576 = lean_unsigned_to_nat(0u);
x_577 = l_Array_reverseAux___main___rarg(x_2, x_576);
x_578 = l_Lean_Expr_betaRev(x_560, x_577);
lean_dec(x_577);
lean_dec(x_560);
x_579 = l_Lean_Expr_hasMVar(x_578);
if (x_579 == 0)
{
lean_object* x_580; 
x_580 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_580, 0, x_578);
lean_ctor_set(x_580, 1, x_561);
return x_580;
}
else
{
lean_object* x_581; lean_object* x_582; 
x_581 = lean_ctor_get(x_561, 1);
lean_inc(x_581);
x_582 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_581, x_578);
lean_dec(x_581);
if (lean_obj_tag(x_582) == 0)
{
lean_object* x_583; uint8_t x_584; 
lean_inc(x_578);
x_583 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_578, x_561);
x_584 = !lean_is_exclusive(x_583);
if (x_584 == 0)
{
lean_object* x_585; uint8_t x_586; 
x_585 = lean_ctor_get(x_583, 1);
x_586 = !lean_is_exclusive(x_585);
if (x_586 == 0)
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; 
x_587 = lean_ctor_get(x_583, 0);
x_588 = lean_ctor_get(x_585, 1);
lean_inc(x_587);
x_589 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_588, x_578, x_587);
lean_ctor_set(x_585, 1, x_589);
return x_583;
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
x_590 = lean_ctor_get(x_583, 0);
x_591 = lean_ctor_get(x_585, 0);
x_592 = lean_ctor_get(x_585, 1);
lean_inc(x_592);
lean_inc(x_591);
lean_dec(x_585);
lean_inc(x_590);
x_593 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_592, x_578, x_590);
x_594 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_594, 0, x_591);
lean_ctor_set(x_594, 1, x_593);
lean_ctor_set(x_583, 1, x_594);
return x_583;
}
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_595 = lean_ctor_get(x_583, 1);
x_596 = lean_ctor_get(x_583, 0);
lean_inc(x_595);
lean_inc(x_596);
lean_dec(x_583);
x_597 = lean_ctor_get(x_595, 0);
lean_inc(x_597);
x_598 = lean_ctor_get(x_595, 1);
lean_inc(x_598);
if (lean_is_exclusive(x_595)) {
 lean_ctor_release(x_595, 0);
 lean_ctor_release(x_595, 1);
 x_599 = x_595;
} else {
 lean_dec_ref(x_595);
 x_599 = lean_box(0);
}
lean_inc(x_596);
x_600 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_598, x_578, x_596);
if (lean_is_scalar(x_599)) {
 x_601 = lean_alloc_ctor(0, 2, 0);
} else {
 x_601 = x_599;
}
lean_ctor_set(x_601, 0, x_597);
lean_ctor_set(x_601, 1, x_600);
x_602 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_602, 0, x_596);
lean_ctor_set(x_602, 1, x_601);
return x_602;
}
}
else
{
lean_object* x_603; lean_object* x_604; 
lean_dec(x_578);
x_603 = lean_ctor_get(x_582, 0);
lean_inc(x_603);
lean_dec(x_582);
x_604 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_604, 0, x_603);
lean_ctor_set(x_604, 1, x_561);
return x_604;
}
}
}
}
block_572:
{
lean_object* x_563; lean_object* x_564; uint8_t x_565; 
lean_dec(x_562);
x_563 = lean_unsigned_to_nat(0u);
x_564 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_563, x_2, x_561);
x_565 = !lean_is_exclusive(x_564);
if (x_565 == 0)
{
lean_object* x_566; lean_object* x_567; 
x_566 = lean_ctor_get(x_564, 0);
x_567 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_566, x_566, x_563, x_560);
lean_dec(x_566);
lean_ctor_set(x_564, 0, x_567);
return x_564;
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; 
x_568 = lean_ctor_get(x_564, 0);
x_569 = lean_ctor_get(x_564, 1);
lean_inc(x_569);
lean_inc(x_568);
lean_dec(x_564);
x_570 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_568, x_568, x_563, x_560);
lean_dec(x_568);
x_571 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_571, 0, x_570);
lean_ctor_set(x_571, 1, x_569);
return x_571;
}
}
}
}
case 10:
{
uint8_t x_620; lean_object* x_621; lean_object* x_622; uint8_t x_667; 
lean_dec(x_3);
x_620 = l_Lean_Expr_isMVar(x_1);
x_667 = l_Lean_Expr_hasMVar(x_1);
if (x_667 == 0)
{
x_621 = x_1;
x_622 = x_4;
goto block_666;
}
else
{
lean_object* x_668; lean_object* x_669; 
x_668 = lean_ctor_get(x_4, 1);
lean_inc(x_668);
x_669 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_668, x_1);
lean_dec(x_668);
if (lean_obj_tag(x_669) == 0)
{
lean_object* x_670; lean_object* x_671; lean_object* x_672; uint8_t x_673; 
lean_inc(x_1);
x_670 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_671 = lean_ctor_get(x_670, 1);
lean_inc(x_671);
x_672 = lean_ctor_get(x_670, 0);
lean_inc(x_672);
lean_dec(x_670);
x_673 = !lean_is_exclusive(x_671);
if (x_673 == 0)
{
lean_object* x_674; lean_object* x_675; 
x_674 = lean_ctor_get(x_671, 1);
lean_inc(x_672);
x_675 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_674, x_1, x_672);
lean_ctor_set(x_671, 1, x_675);
x_621 = x_672;
x_622 = x_671;
goto block_666;
}
else
{
lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; 
x_676 = lean_ctor_get(x_671, 0);
x_677 = lean_ctor_get(x_671, 1);
lean_inc(x_677);
lean_inc(x_676);
lean_dec(x_671);
lean_inc(x_672);
x_678 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_677, x_1, x_672);
x_679 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_679, 0, x_676);
lean_ctor_set(x_679, 1, x_678);
x_621 = x_672;
x_622 = x_679;
goto block_666;
}
}
else
{
lean_object* x_680; 
lean_dec(x_1);
x_680 = lean_ctor_get(x_669, 0);
lean_inc(x_680);
lean_dec(x_669);
x_621 = x_680;
x_622 = x_4;
goto block_666;
}
}
block_666:
{
lean_object* x_623; 
if (x_620 == 0)
{
lean_object* x_634; 
x_634 = lean_box(0);
x_623 = x_634;
goto block_633;
}
else
{
uint8_t x_635; 
x_635 = l_Lean_Expr_isLambda(x_621);
if (x_635 == 0)
{
lean_object* x_636; 
x_636 = lean_box(0);
x_623 = x_636;
goto block_633;
}
else
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; uint8_t x_640; 
x_637 = lean_unsigned_to_nat(0u);
x_638 = l_Array_reverseAux___main___rarg(x_2, x_637);
x_639 = l_Lean_Expr_betaRev(x_621, x_638);
lean_dec(x_638);
lean_dec(x_621);
x_640 = l_Lean_Expr_hasMVar(x_639);
if (x_640 == 0)
{
lean_object* x_641; 
x_641 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_641, 0, x_639);
lean_ctor_set(x_641, 1, x_622);
return x_641;
}
else
{
lean_object* x_642; lean_object* x_643; 
x_642 = lean_ctor_get(x_622, 1);
lean_inc(x_642);
x_643 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_642, x_639);
lean_dec(x_642);
if (lean_obj_tag(x_643) == 0)
{
lean_object* x_644; uint8_t x_645; 
lean_inc(x_639);
x_644 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_639, x_622);
x_645 = !lean_is_exclusive(x_644);
if (x_645 == 0)
{
lean_object* x_646; uint8_t x_647; 
x_646 = lean_ctor_get(x_644, 1);
x_647 = !lean_is_exclusive(x_646);
if (x_647 == 0)
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; 
x_648 = lean_ctor_get(x_644, 0);
x_649 = lean_ctor_get(x_646, 1);
lean_inc(x_648);
x_650 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_649, x_639, x_648);
lean_ctor_set(x_646, 1, x_650);
return x_644;
}
else
{
lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; 
x_651 = lean_ctor_get(x_644, 0);
x_652 = lean_ctor_get(x_646, 0);
x_653 = lean_ctor_get(x_646, 1);
lean_inc(x_653);
lean_inc(x_652);
lean_dec(x_646);
lean_inc(x_651);
x_654 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_653, x_639, x_651);
x_655 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_655, 0, x_652);
lean_ctor_set(x_655, 1, x_654);
lean_ctor_set(x_644, 1, x_655);
return x_644;
}
}
else
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; 
x_656 = lean_ctor_get(x_644, 1);
x_657 = lean_ctor_get(x_644, 0);
lean_inc(x_656);
lean_inc(x_657);
lean_dec(x_644);
x_658 = lean_ctor_get(x_656, 0);
lean_inc(x_658);
x_659 = lean_ctor_get(x_656, 1);
lean_inc(x_659);
if (lean_is_exclusive(x_656)) {
 lean_ctor_release(x_656, 0);
 lean_ctor_release(x_656, 1);
 x_660 = x_656;
} else {
 lean_dec_ref(x_656);
 x_660 = lean_box(0);
}
lean_inc(x_657);
x_661 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_659, x_639, x_657);
if (lean_is_scalar(x_660)) {
 x_662 = lean_alloc_ctor(0, 2, 0);
} else {
 x_662 = x_660;
}
lean_ctor_set(x_662, 0, x_658);
lean_ctor_set(x_662, 1, x_661);
x_663 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_663, 0, x_657);
lean_ctor_set(x_663, 1, x_662);
return x_663;
}
}
else
{
lean_object* x_664; lean_object* x_665; 
lean_dec(x_639);
x_664 = lean_ctor_get(x_643, 0);
lean_inc(x_664);
lean_dec(x_643);
x_665 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_665, 0, x_664);
lean_ctor_set(x_665, 1, x_622);
return x_665;
}
}
}
}
block_633:
{
lean_object* x_624; lean_object* x_625; uint8_t x_626; 
lean_dec(x_623);
x_624 = lean_unsigned_to_nat(0u);
x_625 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_624, x_2, x_622);
x_626 = !lean_is_exclusive(x_625);
if (x_626 == 0)
{
lean_object* x_627; lean_object* x_628; 
x_627 = lean_ctor_get(x_625, 0);
x_628 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_627, x_627, x_624, x_621);
lean_dec(x_627);
lean_ctor_set(x_625, 0, x_628);
return x_625;
}
else
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; 
x_629 = lean_ctor_get(x_625, 0);
x_630 = lean_ctor_get(x_625, 1);
lean_inc(x_630);
lean_inc(x_629);
lean_dec(x_625);
x_631 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_629, x_629, x_624, x_621);
lean_dec(x_629);
x_632 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_632, 0, x_631);
lean_ctor_set(x_632, 1, x_630);
return x_632;
}
}
}
}
case 11:
{
uint8_t x_681; lean_object* x_682; lean_object* x_683; uint8_t x_728; 
lean_dec(x_3);
x_681 = l_Lean_Expr_isMVar(x_1);
x_728 = l_Lean_Expr_hasMVar(x_1);
if (x_728 == 0)
{
x_682 = x_1;
x_683 = x_4;
goto block_727;
}
else
{
lean_object* x_729; lean_object* x_730; 
x_729 = lean_ctor_get(x_4, 1);
lean_inc(x_729);
x_730 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_729, x_1);
lean_dec(x_729);
if (lean_obj_tag(x_730) == 0)
{
lean_object* x_731; lean_object* x_732; lean_object* x_733; uint8_t x_734; 
lean_inc(x_1);
x_731 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_732 = lean_ctor_get(x_731, 1);
lean_inc(x_732);
x_733 = lean_ctor_get(x_731, 0);
lean_inc(x_733);
lean_dec(x_731);
x_734 = !lean_is_exclusive(x_732);
if (x_734 == 0)
{
lean_object* x_735; lean_object* x_736; 
x_735 = lean_ctor_get(x_732, 1);
lean_inc(x_733);
x_736 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_735, x_1, x_733);
lean_ctor_set(x_732, 1, x_736);
x_682 = x_733;
x_683 = x_732;
goto block_727;
}
else
{
lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; 
x_737 = lean_ctor_get(x_732, 0);
x_738 = lean_ctor_get(x_732, 1);
lean_inc(x_738);
lean_inc(x_737);
lean_dec(x_732);
lean_inc(x_733);
x_739 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_738, x_1, x_733);
x_740 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_740, 0, x_737);
lean_ctor_set(x_740, 1, x_739);
x_682 = x_733;
x_683 = x_740;
goto block_727;
}
}
else
{
lean_object* x_741; 
lean_dec(x_1);
x_741 = lean_ctor_get(x_730, 0);
lean_inc(x_741);
lean_dec(x_730);
x_682 = x_741;
x_683 = x_4;
goto block_727;
}
}
block_727:
{
lean_object* x_684; 
if (x_681 == 0)
{
lean_object* x_695; 
x_695 = lean_box(0);
x_684 = x_695;
goto block_694;
}
else
{
uint8_t x_696; 
x_696 = l_Lean_Expr_isLambda(x_682);
if (x_696 == 0)
{
lean_object* x_697; 
x_697 = lean_box(0);
x_684 = x_697;
goto block_694;
}
else
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; uint8_t x_701; 
x_698 = lean_unsigned_to_nat(0u);
x_699 = l_Array_reverseAux___main___rarg(x_2, x_698);
x_700 = l_Lean_Expr_betaRev(x_682, x_699);
lean_dec(x_699);
lean_dec(x_682);
x_701 = l_Lean_Expr_hasMVar(x_700);
if (x_701 == 0)
{
lean_object* x_702; 
x_702 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_702, 0, x_700);
lean_ctor_set(x_702, 1, x_683);
return x_702;
}
else
{
lean_object* x_703; lean_object* x_704; 
x_703 = lean_ctor_get(x_683, 1);
lean_inc(x_703);
x_704 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_703, x_700);
lean_dec(x_703);
if (lean_obj_tag(x_704) == 0)
{
lean_object* x_705; uint8_t x_706; 
lean_inc(x_700);
x_705 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_700, x_683);
x_706 = !lean_is_exclusive(x_705);
if (x_706 == 0)
{
lean_object* x_707; uint8_t x_708; 
x_707 = lean_ctor_get(x_705, 1);
x_708 = !lean_is_exclusive(x_707);
if (x_708 == 0)
{
lean_object* x_709; lean_object* x_710; lean_object* x_711; 
x_709 = lean_ctor_get(x_705, 0);
x_710 = lean_ctor_get(x_707, 1);
lean_inc(x_709);
x_711 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_710, x_700, x_709);
lean_ctor_set(x_707, 1, x_711);
return x_705;
}
else
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; 
x_712 = lean_ctor_get(x_705, 0);
x_713 = lean_ctor_get(x_707, 0);
x_714 = lean_ctor_get(x_707, 1);
lean_inc(x_714);
lean_inc(x_713);
lean_dec(x_707);
lean_inc(x_712);
x_715 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_714, x_700, x_712);
x_716 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_716, 0, x_713);
lean_ctor_set(x_716, 1, x_715);
lean_ctor_set(x_705, 1, x_716);
return x_705;
}
}
else
{
lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; 
x_717 = lean_ctor_get(x_705, 1);
x_718 = lean_ctor_get(x_705, 0);
lean_inc(x_717);
lean_inc(x_718);
lean_dec(x_705);
x_719 = lean_ctor_get(x_717, 0);
lean_inc(x_719);
x_720 = lean_ctor_get(x_717, 1);
lean_inc(x_720);
if (lean_is_exclusive(x_717)) {
 lean_ctor_release(x_717, 0);
 lean_ctor_release(x_717, 1);
 x_721 = x_717;
} else {
 lean_dec_ref(x_717);
 x_721 = lean_box(0);
}
lean_inc(x_718);
x_722 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_720, x_700, x_718);
if (lean_is_scalar(x_721)) {
 x_723 = lean_alloc_ctor(0, 2, 0);
} else {
 x_723 = x_721;
}
lean_ctor_set(x_723, 0, x_719);
lean_ctor_set(x_723, 1, x_722);
x_724 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_724, 0, x_718);
lean_ctor_set(x_724, 1, x_723);
return x_724;
}
}
else
{
lean_object* x_725; lean_object* x_726; 
lean_dec(x_700);
x_725 = lean_ctor_get(x_704, 0);
lean_inc(x_725);
lean_dec(x_704);
x_726 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_726, 0, x_725);
lean_ctor_set(x_726, 1, x_683);
return x_726;
}
}
}
}
block_694:
{
lean_object* x_685; lean_object* x_686; uint8_t x_687; 
lean_dec(x_684);
x_685 = lean_unsigned_to_nat(0u);
x_686 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_685, x_2, x_683);
x_687 = !lean_is_exclusive(x_686);
if (x_687 == 0)
{
lean_object* x_688; lean_object* x_689; 
x_688 = lean_ctor_get(x_686, 0);
x_689 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_688, x_688, x_685, x_682);
lean_dec(x_688);
lean_ctor_set(x_686, 0, x_689);
return x_686;
}
else
{
lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; 
x_690 = lean_ctor_get(x_686, 0);
x_691 = lean_ctor_get(x_686, 1);
lean_inc(x_691);
lean_inc(x_690);
lean_dec(x_686);
x_692 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_690, x_690, x_685, x_682);
lean_dec(x_690);
x_693 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_693, 0, x_692);
lean_ctor_set(x_693, 1, x_691);
return x_693;
}
}
}
}
default: 
{
uint8_t x_742; lean_object* x_743; lean_object* x_744; uint8_t x_789; 
lean_dec(x_3);
x_742 = l_Lean_Expr_isMVar(x_1);
x_789 = l_Lean_Expr_hasMVar(x_1);
if (x_789 == 0)
{
x_743 = x_1;
x_744 = x_4;
goto block_788;
}
else
{
lean_object* x_790; lean_object* x_791; 
x_790 = lean_ctor_get(x_4, 1);
lean_inc(x_790);
x_791 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_790, x_1);
lean_dec(x_790);
if (lean_obj_tag(x_791) == 0)
{
lean_object* x_792; lean_object* x_793; lean_object* x_794; uint8_t x_795; 
lean_inc(x_1);
x_792 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_4);
x_793 = lean_ctor_get(x_792, 1);
lean_inc(x_793);
x_794 = lean_ctor_get(x_792, 0);
lean_inc(x_794);
lean_dec(x_792);
x_795 = !lean_is_exclusive(x_793);
if (x_795 == 0)
{
lean_object* x_796; lean_object* x_797; 
x_796 = lean_ctor_get(x_793, 1);
lean_inc(x_794);
x_797 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_796, x_1, x_794);
lean_ctor_set(x_793, 1, x_797);
x_743 = x_794;
x_744 = x_793;
goto block_788;
}
else
{
lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; 
x_798 = lean_ctor_get(x_793, 0);
x_799 = lean_ctor_get(x_793, 1);
lean_inc(x_799);
lean_inc(x_798);
lean_dec(x_793);
lean_inc(x_794);
x_800 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_799, x_1, x_794);
x_801 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_801, 0, x_798);
lean_ctor_set(x_801, 1, x_800);
x_743 = x_794;
x_744 = x_801;
goto block_788;
}
}
else
{
lean_object* x_802; 
lean_dec(x_1);
x_802 = lean_ctor_get(x_791, 0);
lean_inc(x_802);
lean_dec(x_791);
x_743 = x_802;
x_744 = x_4;
goto block_788;
}
}
block_788:
{
lean_object* x_745; 
if (x_742 == 0)
{
lean_object* x_756; 
x_756 = lean_box(0);
x_745 = x_756;
goto block_755;
}
else
{
uint8_t x_757; 
x_757 = l_Lean_Expr_isLambda(x_743);
if (x_757 == 0)
{
lean_object* x_758; 
x_758 = lean_box(0);
x_745 = x_758;
goto block_755;
}
else
{
lean_object* x_759; lean_object* x_760; lean_object* x_761; uint8_t x_762; 
x_759 = lean_unsigned_to_nat(0u);
x_760 = l_Array_reverseAux___main___rarg(x_2, x_759);
x_761 = l_Lean_Expr_betaRev(x_743, x_760);
lean_dec(x_760);
lean_dec(x_743);
x_762 = l_Lean_Expr_hasMVar(x_761);
if (x_762 == 0)
{
lean_object* x_763; 
x_763 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_763, 0, x_761);
lean_ctor_set(x_763, 1, x_744);
return x_763;
}
else
{
lean_object* x_764; lean_object* x_765; 
x_764 = lean_ctor_get(x_744, 1);
lean_inc(x_764);
x_765 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_764, x_761);
lean_dec(x_764);
if (lean_obj_tag(x_765) == 0)
{
lean_object* x_766; uint8_t x_767; 
lean_inc(x_761);
x_766 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_761, x_744);
x_767 = !lean_is_exclusive(x_766);
if (x_767 == 0)
{
lean_object* x_768; uint8_t x_769; 
x_768 = lean_ctor_get(x_766, 1);
x_769 = !lean_is_exclusive(x_768);
if (x_769 == 0)
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; 
x_770 = lean_ctor_get(x_766, 0);
x_771 = lean_ctor_get(x_768, 1);
lean_inc(x_770);
x_772 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_771, x_761, x_770);
lean_ctor_set(x_768, 1, x_772);
return x_766;
}
else
{
lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; 
x_773 = lean_ctor_get(x_766, 0);
x_774 = lean_ctor_get(x_768, 0);
x_775 = lean_ctor_get(x_768, 1);
lean_inc(x_775);
lean_inc(x_774);
lean_dec(x_768);
lean_inc(x_773);
x_776 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_775, x_761, x_773);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_774);
lean_ctor_set(x_777, 1, x_776);
lean_ctor_set(x_766, 1, x_777);
return x_766;
}
}
else
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; 
x_778 = lean_ctor_get(x_766, 1);
x_779 = lean_ctor_get(x_766, 0);
lean_inc(x_778);
lean_inc(x_779);
lean_dec(x_766);
x_780 = lean_ctor_get(x_778, 0);
lean_inc(x_780);
x_781 = lean_ctor_get(x_778, 1);
lean_inc(x_781);
if (lean_is_exclusive(x_778)) {
 lean_ctor_release(x_778, 0);
 lean_ctor_release(x_778, 1);
 x_782 = x_778;
} else {
 lean_dec_ref(x_778);
 x_782 = lean_box(0);
}
lean_inc(x_779);
x_783 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_781, x_761, x_779);
if (lean_is_scalar(x_782)) {
 x_784 = lean_alloc_ctor(0, 2, 0);
} else {
 x_784 = x_782;
}
lean_ctor_set(x_784, 0, x_780);
lean_ctor_set(x_784, 1, x_783);
x_785 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_785, 0, x_779);
lean_ctor_set(x_785, 1, x_784);
return x_785;
}
}
else
{
lean_object* x_786; lean_object* x_787; 
lean_dec(x_761);
x_786 = lean_ctor_get(x_765, 0);
lean_inc(x_786);
lean_dec(x_765);
x_787 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_787, 0, x_786);
lean_ctor_set(x_787, 1, x_744);
return x_787;
}
}
}
}
block_755:
{
lean_object* x_746; lean_object* x_747; uint8_t x_748; 
lean_dec(x_745);
x_746 = lean_unsigned_to_nat(0u);
x_747 = l_Array_umapMAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__2(x_746, x_2, x_744);
x_748 = !lean_is_exclusive(x_747);
if (x_748 == 0)
{
lean_object* x_749; lean_object* x_750; 
x_749 = lean_ctor_get(x_747, 0);
x_750 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_749, x_749, x_746, x_743);
lean_dec(x_749);
lean_ctor_set(x_747, 0, x_750);
return x_747;
}
else
{
lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; 
x_751 = lean_ctor_get(x_747, 0);
x_752 = lean_ctor_get(x_747, 1);
lean_inc(x_752);
lean_inc(x_751);
lean_dec(x_747);
x_753 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_751, x_751, x_746, x_743);
lean_dec(x_751);
x_754 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_754, 0, x_753);
lean_ctor_set(x_754, 1, x_752);
return x_754;
}
}
}
}
}
}
}
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_main___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_15; lean_object* x_16; lean_object* x_24; lean_object* x_25; 
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
x_36 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_35, x_1);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
lean_inc(x_33);
lean_inc(x_34);
x_37 = lean_metavar_ctx_get_expr_assignment(x_34, x_33);
if (lean_obj_tag(x_37) == 0)
{
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_2;
goto block_14;
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Expr_hasMVar(x_38);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_2);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_2, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_2, 0);
lean_dec(x_42);
lean_inc(x_38);
x_43 = l_Lean_MetavarContext_assignExpr(x_34, x_33, x_38);
lean_ctor_set(x_2, 0, x_43);
x_3 = x_38;
x_4 = x_2;
goto block_14;
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_2);
lean_inc(x_38);
x_44 = l_Lean_MetavarContext_assignExpr(x_34, x_33, x_38);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_35);
x_3 = x_38;
x_4 = x_45;
goto block_14;
}
}
else
{
lean_object* x_46; 
x_46 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_35, x_38);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; uint8_t x_48; 
lean_dec(x_35);
lean_dec(x_34);
lean_inc(x_2);
lean_inc(x_38);
x_47 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_38, x_2);
x_48 = !lean_is_exclusive(x_2);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_2, 1);
lean_dec(x_49);
x_50 = lean_ctor_get(x_2, 0);
lean_dec(x_50);
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_dec(x_47);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_51);
x_55 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_54, x_38, x_51);
lean_inc(x_51);
x_56 = l_Lean_MetavarContext_assignExpr(x_53, x_33, x_51);
lean_ctor_set(x_2, 1, x_55);
lean_ctor_set(x_2, 0, x_56);
x_3 = x_51;
x_4 = x_2;
goto block_14;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_2);
x_57 = lean_ctor_get(x_47, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_47, 1);
lean_inc(x_58);
lean_dec(x_47);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
lean_inc(x_57);
x_61 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_60, x_38, x_57);
lean_inc(x_57);
x_62 = l_Lean_MetavarContext_assignExpr(x_59, x_33, x_57);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_3 = x_57;
x_4 = x_63;
goto block_14;
}
}
else
{
uint8_t x_64; 
lean_dec(x_38);
x_64 = !lean_is_exclusive(x_2);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_2, 1);
lean_dec(x_65);
x_66 = lean_ctor_get(x_2, 0);
lean_dec(x_66);
x_67 = lean_ctor_get(x_46, 0);
lean_inc(x_67);
lean_dec(x_46);
lean_inc(x_67);
x_68 = l_Lean_MetavarContext_assignExpr(x_34, x_33, x_67);
lean_ctor_set(x_2, 0, x_68);
x_3 = x_67;
x_4 = x_2;
goto block_14;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_2);
x_69 = lean_ctor_get(x_46, 0);
lean_inc(x_69);
lean_dec(x_46);
lean_inc(x_69);
x_70 = l_Lean_MetavarContext_assignExpr(x_34, x_33, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_35);
x_3 = x_69;
x_4 = x_71;
goto block_14;
}
}
}
}
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_1);
x_72 = lean_ctor_get(x_36, 0);
lean_inc(x_72);
lean_dec(x_36);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_2);
return x_73;
}
}
case 3:
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
x_75 = !lean_is_exclusive(x_2);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_2, 0);
x_77 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_74, x_76);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
lean_ctor_set(x_2, 0, x_80);
x_81 = lean_expr_update_sort(x_1, x_79);
lean_ctor_set(x_77, 1, x_2);
lean_ctor_set(x_77, 0, x_81);
return x_77;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_77, 0);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_77);
lean_ctor_set(x_2, 0, x_83);
x_84 = lean_expr_update_sort(x_1, x_82);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_2);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_86 = lean_ctor_get(x_2, 0);
x_87 = lean_ctor_get(x_2, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_2);
x_88 = l_Lean_MetavarContext_instantiateLevelMVars___main(x_74, x_86);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_87);
x_93 = lean_expr_update_sort(x_1, x_89);
if (lean_is_scalar(x_91)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_91;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
case 4:
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
x_96 = l_List_mapM___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__1(x_95, x_2);
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_96, 0);
x_99 = lean_expr_update_const(x_1, x_98);
lean_ctor_set(x_96, 0, x_99);
return x_96;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_96, 0);
x_101 = lean_ctor_get(x_96, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_96);
x_102 = lean_expr_update_const(x_1, x_100);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
case 5:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_104 = lean_unsigned_to_nat(0u);
x_105 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_104);
x_106 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_105);
x_107 = lean_mk_array(x_105, x_106);
x_108 = lean_unsigned_to_nat(1u);
x_109 = lean_nat_sub(x_105, x_108);
lean_dec(x_105);
x_110 = l_Lean_Expr_withAppAux___main___at_Lean_MetavarContext_InstantiateExprMVars_main___main___spec__3(x_1, x_107, x_109, x_2);
return x_110;
}
case 6:
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_141; 
x_111 = lean_ctor_get(x_1, 1);
lean_inc(x_111);
x_112 = lean_ctor_get(x_1, 2);
lean_inc(x_112);
x_141 = l_Lean_Expr_hasMVar(x_111);
if (x_141 == 0)
{
x_113 = x_111;
x_114 = x_2;
goto block_140;
}
else
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_2, 1);
lean_inc(x_142);
x_143 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_142, x_111);
lean_dec(x_142);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
lean_inc(x_111);
x_144 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_111, x_2);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 0);
lean_inc(x_146);
lean_dec(x_144);
x_147 = !lean_is_exclusive(x_145);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
x_149 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_148, x_111, x_146);
lean_ctor_set(x_145, 1, x_149);
x_113 = x_146;
x_114 = x_145;
goto block_140;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_145, 0);
x_151 = lean_ctor_get(x_145, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_145);
lean_inc(x_146);
x_152 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_151, x_111, x_146);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_152);
x_113 = x_146;
x_114 = x_153;
goto block_140;
}
}
else
{
lean_object* x_154; 
lean_dec(x_111);
x_154 = lean_ctor_get(x_143, 0);
lean_inc(x_154);
lean_dec(x_143);
x_113 = x_154;
x_114 = x_2;
goto block_140;
}
}
block_140:
{
lean_object* x_115; lean_object* x_116; uint8_t x_126; 
x_126 = l_Lean_Expr_hasMVar(x_112);
if (x_126 == 0)
{
x_115 = x_112;
x_116 = x_114;
goto block_125;
}
else
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_114, 1);
lean_inc(x_127);
x_128 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_127, x_112);
lean_dec(x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
lean_inc(x_112);
x_129 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_112, x_114);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = !lean_is_exclusive(x_130);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
x_134 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_133, x_112, x_131);
lean_ctor_set(x_130, 1, x_134);
x_115 = x_131;
x_116 = x_130;
goto block_125;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_130, 0);
x_136 = lean_ctor_get(x_130, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_130);
lean_inc(x_131);
x_137 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_136, x_112, x_131);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_137);
x_115 = x_131;
x_116 = x_138;
goto block_125;
}
}
else
{
lean_object* x_139; 
lean_dec(x_112);
x_139 = lean_ctor_get(x_128, 0);
lean_inc(x_139);
lean_dec(x_128);
x_115 = x_139;
x_116 = x_114;
goto block_125;
}
}
block_125:
{
if (lean_obj_tag(x_1) == 6)
{
uint64_t x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_118 = (uint8_t)((x_117 << 24) >> 61);
x_119 = lean_expr_update_lambda(x_1, x_118, x_113, x_115);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_115);
lean_dec(x_113);
lean_dec(x_1);
x_121 = l_Lean_Expr_Inhabited;
x_122 = l_Lean_Expr_updateLambdaE_x21___closed__1;
x_123 = lean_panic_fn(x_121, x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_116);
return x_124;
}
}
}
}
case 7:
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_185; 
x_155 = lean_ctor_get(x_1, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_1, 2);
lean_inc(x_156);
x_185 = l_Lean_Expr_hasMVar(x_155);
if (x_185 == 0)
{
x_157 = x_155;
x_158 = x_2;
goto block_184;
}
else
{
lean_object* x_186; lean_object* x_187; 
x_186 = lean_ctor_get(x_2, 1);
lean_inc(x_186);
x_187 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_186, x_155);
lean_dec(x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
lean_inc(x_155);
x_188 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_155, x_2);
x_189 = lean_ctor_get(x_188, 1);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 0);
lean_inc(x_190);
lean_dec(x_188);
x_191 = !lean_is_exclusive(x_189);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
x_193 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_192, x_155, x_190);
lean_ctor_set(x_189, 1, x_193);
x_157 = x_190;
x_158 = x_189;
goto block_184;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_194 = lean_ctor_get(x_189, 0);
x_195 = lean_ctor_get(x_189, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_189);
lean_inc(x_190);
x_196 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_195, x_155, x_190);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_194);
lean_ctor_set(x_197, 1, x_196);
x_157 = x_190;
x_158 = x_197;
goto block_184;
}
}
else
{
lean_object* x_198; 
lean_dec(x_155);
x_198 = lean_ctor_get(x_187, 0);
lean_inc(x_198);
lean_dec(x_187);
x_157 = x_198;
x_158 = x_2;
goto block_184;
}
}
block_184:
{
lean_object* x_159; lean_object* x_160; uint8_t x_170; 
x_170 = l_Lean_Expr_hasMVar(x_156);
if (x_170 == 0)
{
x_159 = x_156;
x_160 = x_158;
goto block_169;
}
else
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_158, 1);
lean_inc(x_171);
x_172 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_171, x_156);
lean_dec(x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; 
lean_inc(x_156);
x_173 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_156, x_158);
x_174 = lean_ctor_get(x_173, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 0);
lean_inc(x_175);
lean_dec(x_173);
x_176 = !lean_is_exclusive(x_174);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
x_178 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_177, x_156, x_175);
lean_ctor_set(x_174, 1, x_178);
x_159 = x_175;
x_160 = x_174;
goto block_169;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_179 = lean_ctor_get(x_174, 0);
x_180 = lean_ctor_get(x_174, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_174);
lean_inc(x_175);
x_181 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_180, x_156, x_175);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_181);
x_159 = x_175;
x_160 = x_182;
goto block_169;
}
}
else
{
lean_object* x_183; 
lean_dec(x_156);
x_183 = lean_ctor_get(x_172, 0);
lean_inc(x_183);
lean_dec(x_172);
x_159 = x_183;
x_160 = x_158;
goto block_169;
}
}
block_169:
{
if (lean_obj_tag(x_1) == 7)
{
uint64_t x_161; uint8_t x_162; lean_object* x_163; lean_object* x_164; 
x_161 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_162 = (uint8_t)((x_161 << 24) >> 61);
x_163 = lean_expr_update_forall(x_1, x_162, x_157, x_159);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_160);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_159);
lean_dec(x_157);
lean_dec(x_1);
x_165 = l_Lean_Expr_Inhabited;
x_166 = l_Lean_Expr_updateForallE_x21___closed__1;
x_167 = lean_panic_fn(x_165, x_166);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_160);
return x_168;
}
}
}
}
case 8:
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_245; 
x_199 = lean_ctor_get(x_1, 1);
lean_inc(x_199);
x_200 = lean_ctor_get(x_1, 2);
lean_inc(x_200);
x_201 = lean_ctor_get(x_1, 3);
lean_inc(x_201);
x_245 = l_Lean_Expr_hasMVar(x_199);
if (x_245 == 0)
{
x_202 = x_199;
x_203 = x_2;
goto block_244;
}
else
{
lean_object* x_246; lean_object* x_247; 
x_246 = lean_ctor_get(x_2, 1);
lean_inc(x_246);
x_247 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_246, x_199);
lean_dec(x_246);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; 
lean_inc(x_199);
x_248 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_199, x_2);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
x_250 = lean_ctor_get(x_248, 0);
lean_inc(x_250);
lean_dec(x_248);
x_251 = !lean_is_exclusive(x_249);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_249, 1);
lean_inc(x_250);
x_253 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_252, x_199, x_250);
lean_ctor_set(x_249, 1, x_253);
x_202 = x_250;
x_203 = x_249;
goto block_244;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_254 = lean_ctor_get(x_249, 0);
x_255 = lean_ctor_get(x_249, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_249);
lean_inc(x_250);
x_256 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_255, x_199, x_250);
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_254);
lean_ctor_set(x_257, 1, x_256);
x_202 = x_250;
x_203 = x_257;
goto block_244;
}
}
else
{
lean_object* x_258; 
lean_dec(x_199);
x_258 = lean_ctor_get(x_247, 0);
lean_inc(x_258);
lean_dec(x_247);
x_202 = x_258;
x_203 = x_2;
goto block_244;
}
}
block_244:
{
lean_object* x_204; lean_object* x_205; uint8_t x_230; 
x_230 = l_Lean_Expr_hasMVar(x_200);
if (x_230 == 0)
{
x_204 = x_200;
x_205 = x_203;
goto block_229;
}
else
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_ctor_get(x_203, 1);
lean_inc(x_231);
x_232 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_231, x_200);
lean_dec(x_231);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; 
lean_inc(x_200);
x_233 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_200, x_203);
x_234 = lean_ctor_get(x_233, 1);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 0);
lean_inc(x_235);
lean_dec(x_233);
x_236 = !lean_is_exclusive(x_234);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; 
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
x_238 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_237, x_200, x_235);
lean_ctor_set(x_234, 1, x_238);
x_204 = x_235;
x_205 = x_234;
goto block_229;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_239 = lean_ctor_get(x_234, 0);
x_240 = lean_ctor_get(x_234, 1);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_234);
lean_inc(x_235);
x_241 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_240, x_200, x_235);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_241);
x_204 = x_235;
x_205 = x_242;
goto block_229;
}
}
else
{
lean_object* x_243; 
lean_dec(x_200);
x_243 = lean_ctor_get(x_232, 0);
lean_inc(x_243);
lean_dec(x_232);
x_204 = x_243;
x_205 = x_203;
goto block_229;
}
}
block_229:
{
lean_object* x_206; lean_object* x_207; uint8_t x_215; 
x_215 = l_Lean_Expr_hasMVar(x_201);
if (x_215 == 0)
{
x_206 = x_201;
x_207 = x_205;
goto block_214;
}
else
{
lean_object* x_216; lean_object* x_217; 
x_216 = lean_ctor_get(x_205, 1);
lean_inc(x_216);
x_217 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_216, x_201);
lean_dec(x_216);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
lean_inc(x_201);
x_218 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_201, x_205);
x_219 = lean_ctor_get(x_218, 1);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 0);
lean_inc(x_220);
lean_dec(x_218);
x_221 = !lean_is_exclusive(x_219);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; 
x_222 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
x_223 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_222, x_201, x_220);
lean_ctor_set(x_219, 1, x_223);
x_206 = x_220;
x_207 = x_219;
goto block_214;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_224 = lean_ctor_get(x_219, 0);
x_225 = lean_ctor_get(x_219, 1);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_219);
lean_inc(x_220);
x_226 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_225, x_201, x_220);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_224);
lean_ctor_set(x_227, 1, x_226);
x_206 = x_220;
x_207 = x_227;
goto block_214;
}
}
else
{
lean_object* x_228; 
lean_dec(x_201);
x_228 = lean_ctor_get(x_217, 0);
lean_inc(x_228);
lean_dec(x_217);
x_206 = x_228;
x_207 = x_205;
goto block_214;
}
}
block_214:
{
if (lean_obj_tag(x_1) == 8)
{
lean_object* x_208; lean_object* x_209; 
x_208 = lean_expr_update_let(x_1, x_202, x_204, x_206);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_206);
lean_dec(x_204);
lean_dec(x_202);
lean_dec(x_1);
x_210 = l_Lean_Expr_Inhabited;
x_211 = l_Lean_Expr_updateLet_x21___closed__1;
x_212 = lean_panic_fn(x_210, x_211);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_207);
return x_213;
}
}
}
}
}
case 10:
{
lean_object* x_259; uint8_t x_260; 
x_259 = lean_ctor_get(x_1, 1);
lean_inc(x_259);
x_260 = l_Lean_Expr_hasMVar(x_259);
if (x_260 == 0)
{
x_15 = x_259;
x_16 = x_2;
goto block_23;
}
else
{
lean_object* x_261; lean_object* x_262; 
x_261 = lean_ctor_get(x_2, 1);
lean_inc(x_261);
x_262 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_261, x_259);
lean_dec(x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
lean_inc(x_259);
x_263 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_259, x_2);
x_264 = lean_ctor_get(x_263, 1);
lean_inc(x_264);
x_265 = lean_ctor_get(x_263, 0);
lean_inc(x_265);
lean_dec(x_263);
x_266 = !lean_is_exclusive(x_264);
if (x_266 == 0)
{
lean_object* x_267; lean_object* x_268; 
x_267 = lean_ctor_get(x_264, 1);
lean_inc(x_265);
x_268 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_267, x_259, x_265);
lean_ctor_set(x_264, 1, x_268);
x_15 = x_265;
x_16 = x_264;
goto block_23;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_269 = lean_ctor_get(x_264, 0);
x_270 = lean_ctor_get(x_264, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_264);
lean_inc(x_265);
x_271 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_270, x_259, x_265);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_269);
lean_ctor_set(x_272, 1, x_271);
x_15 = x_265;
x_16 = x_272;
goto block_23;
}
}
else
{
lean_object* x_273; 
lean_dec(x_259);
x_273 = lean_ctor_get(x_262, 0);
lean_inc(x_273);
lean_dec(x_262);
x_15 = x_273;
x_16 = x_2;
goto block_23;
}
}
}
case 11:
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_1, 2);
lean_inc(x_274);
x_275 = l_Lean_Expr_hasMVar(x_274);
if (x_275 == 0)
{
x_24 = x_274;
x_25 = x_2;
goto block_32;
}
else
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_2, 1);
lean_inc(x_276);
x_277 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_276, x_274);
lean_dec(x_276);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; 
lean_inc(x_274);
x_278 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_274, x_2);
x_279 = lean_ctor_get(x_278, 1);
lean_inc(x_279);
x_280 = lean_ctor_get(x_278, 0);
lean_inc(x_280);
lean_dec(x_278);
x_281 = !lean_is_exclusive(x_279);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; 
x_282 = lean_ctor_get(x_279, 1);
lean_inc(x_280);
x_283 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_282, x_274, x_280);
lean_ctor_set(x_279, 1, x_283);
x_24 = x_280;
x_25 = x_279;
goto block_32;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_284 = lean_ctor_get(x_279, 0);
x_285 = lean_ctor_get(x_279, 1);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_279);
lean_inc(x_280);
x_286 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_285, x_274, x_280);
x_287 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_286);
x_24 = x_280;
x_25 = x_287;
goto block_32;
}
}
else
{
lean_object* x_288; 
lean_dec(x_274);
x_288 = lean_ctor_get(x_277, 0);
lean_inc(x_288);
lean_dec(x_277);
x_24 = x_288;
x_25 = x_2;
goto block_32;
}
}
}
default: 
{
lean_object* x_289; 
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_1);
lean_ctor_set(x_289, 1, x_2);
return x_289;
}
}
block_14:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
x_7 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_6, x_1, x_3);
lean_ctor_set(x_4, 1, x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
lean_inc(x_3);
x_11 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_10, x_1, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
block_23:
{
if (lean_obj_tag(x_1) == 10)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_expr_update_mdata(x_1, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_15);
lean_dec(x_1);
x_19 = l_Lean_Expr_Inhabited;
x_20 = l_Lean_Expr_updateMData_x21___closed__2;
x_21 = lean_panic_fn(x_19, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
return x_22;
}
}
block_32:
{
if (lean_obj_tag(x_1) == 11)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_expr_update_proj(x_1, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_1);
x_28 = l_Lean_Expr_Inhabited;
x_29 = l_Lean_Expr_updateProj_x21___closed__2;
x_30 = lean_panic_fn(x_28, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_25);
return x_31;
}
}
}
}
lean_object* l_Lean_MetavarContext_InstantiateExprMVars_main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_1, x_2);
return x_3;
}
}
lean_object* l_mkHashMap___at_Lean_MetavarContext_instantiateMVars___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_MetavarContext_instantiateMVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_hasMVar(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_MetavarContext_instantiateMVars___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Lean_MetavarContext_InstantiateExprMVars_main___main(x_2, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 1, x_10);
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
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
uint8_t l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_6 = lean_expr_eqv(x_4, x_1);
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
uint8_t l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__6(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_Lean_Expr_hash(x_4);
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
x_16 = l_Lean_Expr_hash(x_12);
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
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_AssocList_foldlM___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__6(x_3, x_6);
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
lean_object* l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__4(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_HashMapImp_moveEntries___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = lean_expr_eqv(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(x_1, x_2, x_7);
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
x_13 = lean_expr_eqv(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(x_1, x_2, x_12);
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
lean_object* l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = l_Lean_Expr_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(x_2, x_10);
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
x_17 = l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__4(x_13, x_15);
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
x_18 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(x_2, x_3, x_10);
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
x_23 = l_Lean_Expr_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(x_2, x_25);
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
x_32 = l_HashMapImp_expand___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__4(x_28, x_30);
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
x_34 = l_AssocList_replace___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__7(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_6__visit_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_14; 
x_14 = l_Lean_Expr_hasMVar(x_1);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Expr_hasFVar(x_1);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_16 = 0;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_2);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_box(0);
x_3 = x_19;
goto block_13;
}
}
else
{
lean_object* x_20; 
x_20 = lean_box(0);
x_3 = x_20;
goto block_13;
}
block_13:
{
uint8_t x_4; 
lean_dec(x_3);
x_4 = l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1(x_2, x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_box(0);
x_6 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__3(x_2, x_1, x_5);
x_7 = 1;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
return x_12;
}
}
}
}
lean_object* l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_HashMapImp_contains___at___private_Init_Lean_MetavarContext_6__visit_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_7__visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_2);
x_4 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_unbox(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_apply_2(x_1, x_2, x_11);
return x_12;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_1);
x_3 = 0;
x_4 = lean_box(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Lean_LocalDecl_fvarId(x_5);
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_apply_1(x_2, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_metavar_ctx_get_expr_assignment(x_1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_12 = l_Lean_MetavarContext_getDecl(x_1, x_10);
lean_dec(x_10);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1___boxed), 2, 1);
lean_closure_set(x_15, 0, x_2);
x_16 = l_Id_Monad;
x_17 = l_PersistentArray_anyM___rarg(x_16, x_14, x_15);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_10);
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
lean_inc(x_21);
x_22 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_21, x_4);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
if (x_24 == 0)
{
uint8_t x_25; 
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_22, 0);
lean_dec(x_26);
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_dec(x_22);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_23);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_dec(x_22);
x_3 = x_21;
x_4 = x_29;
goto _start;
}
}
}
case 5:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_31 = lean_ctor_get(x_3, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_dec(x_3);
lean_inc(x_32);
x_33 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_32, x_4);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_32);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = l_Lean_Expr_isApp(x_31);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_inc(x_31);
x_38 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_31, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_38, 0);
lean_dec(x_42);
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_dec(x_38);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; 
lean_dec(x_39);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_dec(x_38);
x_3 = x_31;
x_4 = x_45;
goto _start;
}
}
else
{
x_3 = x_31;
x_4 = x_36;
goto _start;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_33, 1);
lean_inc(x_48);
lean_dec(x_33);
lean_inc(x_2);
lean_inc(x_1);
x_49 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_32, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_50);
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = l_Lean_Expr_isApp(x_31);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_inc(x_31);
x_54 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_31, x_52);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
if (x_56 == 0)
{
uint8_t x_57; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_54);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_54, 0);
lean_dec(x_58);
return x_54;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
lean_object* x_61; 
lean_dec(x_55);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
lean_dec(x_54);
x_3 = x_31;
x_4 = x_61;
goto _start;
}
}
else
{
x_3 = x_31;
x_4 = x_52;
goto _start;
}
}
else
{
uint8_t x_64; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_49);
if (x_64 == 0)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_49, 0);
lean_dec(x_65);
return x_49;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_49, 1);
lean_inc(x_66);
lean_dec(x_49);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_50);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
case 6:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_68 = lean_ctor_get(x_3, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_3, 2);
lean_inc(x_69);
lean_dec(x_3);
lean_inc(x_68);
x_70 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_68, x_4);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_dec(x_68);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
lean_inc(x_69);
x_74 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_69, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_unbox(x_75);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_69);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_74);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_74, 0);
lean_dec(x_78);
return x_74;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_dec(x_74);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
else
{
lean_object* x_81; 
lean_dec(x_75);
x_81 = lean_ctor_get(x_74, 1);
lean_inc(x_81);
lean_dec(x_74);
x_3 = x_69;
x_4 = x_81;
goto _start;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_83 = lean_ctor_get(x_70, 1);
lean_inc(x_83);
lean_dec(x_70);
lean_inc(x_2);
lean_inc(x_1);
x_84 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_68, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
lean_dec(x_85);
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_dec(x_84);
lean_inc(x_69);
x_88 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_69, x_87);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_unbox(x_89);
if (x_90 == 0)
{
uint8_t x_91; 
lean_dec(x_69);
lean_dec(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_88);
if (x_91 == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_88, 0);
lean_dec(x_92);
return x_88;
}
else
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_88, 1);
lean_inc(x_93);
lean_dec(x_88);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
else
{
lean_object* x_95; 
lean_dec(x_89);
x_95 = lean_ctor_get(x_88, 1);
lean_inc(x_95);
lean_dec(x_88);
x_3 = x_69;
x_4 = x_95;
goto _start;
}
}
else
{
uint8_t x_97; 
lean_dec(x_69);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_84);
if (x_97 == 0)
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_84, 0);
lean_dec(x_98);
return x_84;
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_84, 1);
lean_inc(x_99);
lean_dec(x_84);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_85);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
case 7:
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_101 = lean_ctor_get(x_3, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_3, 2);
lean_inc(x_102);
lean_dec(x_3);
lean_inc(x_101);
x_103 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_101, x_4);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
lean_dec(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
lean_dec(x_101);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_dec(x_103);
lean_inc(x_102);
x_107 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_102, x_106);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_unbox(x_108);
if (x_109 == 0)
{
uint8_t x_110; 
lean_dec(x_102);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_107);
if (x_110 == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_107, 0);
lean_dec(x_111);
return x_107;
}
else
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_dec(x_107);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_108);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
else
{
lean_object* x_114; 
lean_dec(x_108);
x_114 = lean_ctor_get(x_107, 1);
lean_inc(x_114);
lean_dec(x_107);
x_3 = x_102;
x_4 = x_114;
goto _start;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_116 = lean_ctor_get(x_103, 1);
lean_inc(x_116);
lean_dec(x_103);
lean_inc(x_2);
lean_inc(x_1);
x_117 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_101, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_unbox(x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
lean_dec(x_118);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
lean_dec(x_117);
lean_inc(x_102);
x_121 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_102, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_unbox(x_122);
if (x_123 == 0)
{
uint8_t x_124; 
lean_dec(x_102);
lean_dec(x_2);
lean_dec(x_1);
x_124 = !lean_is_exclusive(x_121);
if (x_124 == 0)
{
lean_object* x_125; 
x_125 = lean_ctor_get(x_121, 0);
lean_dec(x_125);
return x_121;
}
else
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_122);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
else
{
lean_object* x_128; 
lean_dec(x_122);
x_128 = lean_ctor_get(x_121, 1);
lean_inc(x_128);
lean_dec(x_121);
x_3 = x_102;
x_4 = x_128;
goto _start;
}
}
else
{
uint8_t x_130; 
lean_dec(x_102);
lean_dec(x_2);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_117);
if (x_130 == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_117, 0);
lean_dec(x_131);
return x_117;
}
else
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_ctor_get(x_117, 1);
lean_inc(x_132);
lean_dec(x_117);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_118);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
}
case 8:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_134 = lean_ctor_get(x_3, 1);
lean_inc(x_134);
x_135 = lean_ctor_get(x_3, 2);
lean_inc(x_135);
x_136 = lean_ctor_get(x_3, 3);
lean_inc(x_136);
lean_dec(x_3);
lean_inc(x_134);
x_173 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_4);
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_unbox(x_174);
if (x_175 == 0)
{
lean_object* x_176; uint8_t x_177; 
lean_dec(x_134);
x_176 = lean_ctor_get(x_173, 1);
lean_inc(x_176);
lean_dec(x_173);
x_177 = lean_unbox(x_174);
lean_dec(x_174);
x_137 = x_177;
x_138 = x_176;
goto block_172;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
lean_dec(x_174);
x_178 = lean_ctor_get(x_173, 1);
lean_inc(x_178);
lean_dec(x_173);
lean_inc(x_2);
lean_inc(x_1);
x_179 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_134, x_178);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
x_182 = lean_unbox(x_180);
lean_dec(x_180);
x_137 = x_182;
x_138 = x_181;
goto block_172;
}
block_172:
{
if (x_137 == 0)
{
lean_object* x_139; lean_object* x_140; uint8_t x_141; 
lean_inc(x_135);
x_139 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_135, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_unbox(x_140);
lean_dec(x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_135);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
lean_dec(x_139);
lean_inc(x_136);
x_143 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_136, x_142);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_unbox(x_144);
if (x_145 == 0)
{
uint8_t x_146; 
lean_dec(x_136);
lean_dec(x_2);
lean_dec(x_1);
x_146 = !lean_is_exclusive(x_143);
if (x_146 == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_143, 0);
lean_dec(x_147);
return x_143;
}
else
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_143, 1);
lean_inc(x_148);
lean_dec(x_143);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_144);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
else
{
lean_object* x_150; 
lean_dec(x_144);
x_150 = lean_ctor_get(x_143, 1);
lean_inc(x_150);
lean_dec(x_143);
x_3 = x_136;
x_4 = x_150;
goto _start;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_152 = lean_ctor_get(x_139, 1);
lean_inc(x_152);
lean_dec(x_139);
lean_inc(x_2);
lean_inc(x_1);
x_153 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_135, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_unbox(x_154);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
lean_dec(x_154);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
lean_dec(x_153);
lean_inc(x_136);
x_157 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_136, x_156);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_unbox(x_158);
if (x_159 == 0)
{
uint8_t x_160; 
lean_dec(x_136);
lean_dec(x_2);
lean_dec(x_1);
x_160 = !lean_is_exclusive(x_157);
if (x_160 == 0)
{
lean_object* x_161; 
x_161 = lean_ctor_get(x_157, 0);
lean_dec(x_161);
return x_157;
}
else
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_157, 1);
lean_inc(x_162);
lean_dec(x_157);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_158);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
else
{
lean_object* x_164; 
lean_dec(x_158);
x_164 = lean_ctor_get(x_157, 1);
lean_inc(x_164);
lean_dec(x_157);
x_3 = x_136;
x_4 = x_164;
goto _start;
}
}
else
{
uint8_t x_166; 
lean_dec(x_136);
lean_dec(x_2);
lean_dec(x_1);
x_166 = !lean_is_exclusive(x_153);
if (x_166 == 0)
{
lean_object* x_167; 
x_167 = lean_ctor_get(x_153, 0);
lean_dec(x_167);
return x_153;
}
else
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_ctor_get(x_153, 1);
lean_inc(x_168);
lean_dec(x_153);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_154);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_136);
lean_dec(x_135);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_box(x_137);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_138);
return x_171;
}
}
}
case 10:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_183 = lean_ctor_get(x_3, 1);
lean_inc(x_183);
lean_dec(x_3);
lean_inc(x_183);
x_184 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_183, x_4);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_unbox(x_185);
if (x_186 == 0)
{
uint8_t x_187; 
lean_dec(x_183);
lean_dec(x_2);
lean_dec(x_1);
x_187 = !lean_is_exclusive(x_184);
if (x_187 == 0)
{
lean_object* x_188; 
x_188 = lean_ctor_get(x_184, 0);
lean_dec(x_188);
return x_184;
}
else
{
lean_object* x_189; lean_object* x_190; 
x_189 = lean_ctor_get(x_184, 1);
lean_inc(x_189);
lean_dec(x_184);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_185);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
else
{
lean_object* x_191; 
lean_dec(x_185);
x_191 = lean_ctor_get(x_184, 1);
lean_inc(x_191);
lean_dec(x_184);
x_3 = x_183;
x_4 = x_191;
goto _start;
}
}
case 11:
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_193 = lean_ctor_get(x_3, 2);
lean_inc(x_193);
lean_dec(x_3);
lean_inc(x_193);
x_194 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_193, x_4);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_unbox(x_195);
if (x_196 == 0)
{
uint8_t x_197; 
lean_dec(x_193);
lean_dec(x_2);
lean_dec(x_1);
x_197 = !lean_is_exclusive(x_194);
if (x_197 == 0)
{
lean_object* x_198; 
x_198 = lean_ctor_get(x_194, 0);
lean_dec(x_198);
return x_194;
}
else
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_194, 1);
lean_inc(x_199);
lean_dec(x_194);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_195);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
else
{
lean_object* x_201; 
lean_dec(x_195);
x_201 = lean_ctor_get(x_194, 1);
lean_inc(x_201);
lean_dec(x_194);
x_3 = x_193;
x_4 = x_201;
goto _start;
}
}
default: 
{
uint8_t x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_203 = 0;
x_204 = lean_box(x_203);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_4);
return x_205;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_MetavarContext_8__dep___main___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_DependsOn_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Expr_hasFVar(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_Expr_hasMVar(x_3);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_3, x_4);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_3, x_4);
return x_11;
}
}
}
lean_object* l_mkHashMap___at_Lean_MetavarContext_exprDependsOn___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_mkHashSet___at_Lean_MetavarContext_exprDependsOn___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_MetavarContext_exprDependsOn___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_MetavarContext_exprDependsOn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_Lean_Expr_hasMVar(x_3);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_MetavarContext_exprDependsOn___closed__1;
x_9 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_MetavarContext_exprDependsOn___closed__1;
x_12 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_3, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
}
lean_object* l_Lean_MetavarContext_localDeclDependsOn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 3);
x_5 = l_Lean_Expr_hasFVar(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_Expr_hasMVar(x_4);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_box(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_HashMap_Inhabited___closed__1;
lean_inc(x_4);
x_10 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_HashMap_Inhabited___closed__1;
lean_inc(x_4);
x_13 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_4, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_29; 
x_15 = lean_ctor_get(x_3, 3);
x_16 = lean_ctor_get(x_3, 4);
x_29 = l_Lean_Expr_hasFVar(x_15);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Expr_hasMVar(x_15);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; 
x_31 = 0;
x_32 = l_HashMap_Inhabited___closed__1;
x_17 = x_31;
x_18 = x_32;
goto block_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = l_HashMap_Inhabited___closed__1;
lean_inc(x_15);
lean_inc(x_2);
lean_inc(x_1);
x_34 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_15, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_17 = x_37;
x_18 = x_36;
goto block_28;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = l_HashMap_Inhabited___closed__1;
lean_inc(x_15);
lean_inc(x_2);
lean_inc(x_1);
x_39 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_15, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unbox(x_40);
lean_dec(x_40);
x_17 = x_42;
x_18 = x_41;
goto block_28;
}
block_28:
{
if (x_17 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_hasFVar(x_16);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Expr_hasMVar(x_16);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_2);
lean_dec(x_1);
x_21 = 0;
x_22 = lean_box(x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_inc(x_16);
x_23 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_16, x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_inc(x_16);
x_25 = l___private_Init_Lean_MetavarContext_8__dep___main(x_1, x_2, x_16, x_18);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_18);
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_box(x_17);
return x_27;
}
}
}
}
}
lean_object* l_Lean_MetavarContext_localDeclDependsOn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MetavarContext_localDeclDependsOn(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_Array_empty___closed__1;
x_7 = x_3;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_array_fget(x_3, x_2);
x_9 = lean_box(0);
x_10 = x_9;
x_11 = lean_array_fset(x_3, x_2, x_10);
lean_inc(x_1);
x_12 = l_Lean_LocalContext_getFVar_x21(x_1, x_8);
x_13 = l_Lean_LocalDecl_userName(x_12);
lean_dec(x_12);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_13);
lean_dec(x_13);
x_16 = l_Char_HasRepr___closed__1;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = lean_string_append(x_17, x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
x_21 = x_18;
lean_dec(x_8);
x_22 = lean_array_fset(x_11, x_2, x_21);
lean_dec(x_2);
x_2 = x_20;
x_3 = x_22;
goto _start;
}
}
}
lean_object* l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_List_reprAux___main___rarg___closed__1;
x_7 = lean_string_append(x_6, x_4);
x_8 = l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(x_1, x_5);
x_9 = lean_string_append(x_7, x_8);
lean_dec(x_8);
return x_9;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
x_10 = l_String_splitAux___main___closed__1;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
x_13 = 0;
x_14 = l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(x_13, x_12);
lean_inc(x_11);
x_15 = lean_string_append(x_11, x_14);
lean_dec(x_14);
return x_15;
}
}
}
}
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to revert ");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", '");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' depends on them, and it is an auxiliary declaration created by the elaborator");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" (possible solution: use tactic 'clear' to remove '");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' from local context)");
return x_1;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_1, 3);
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Array_umapMAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__1(x_2, x_5, x_3);
x_7 = l_Array_toList___rarg(x_6);
lean_dec(x_6);
x_8 = l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(x_7);
lean_dec(x_7);
x_9 = l_Array_HasRepr___rarg___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Lean_LocalDecl_userName(x_4);
x_16 = l_System_FilePath_dirName___closed__1;
x_17 = l_Lean_Name_toStringWithSep___main(x_16, x_15);
lean_dec(x_15);
x_18 = lean_string_append(x_14, x_17);
x_19 = l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3;
x_20 = lean_string_append(x_18, x_19);
x_21 = l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_string_append(x_22, x_17);
lean_dec(x_17);
x_24 = l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5;
x_25 = lean_string_append(x_23, x_24);
return x_25;
}
}
lean_object* l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__3(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_Exception_toString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_MetavarContext_MkBinding_Exception_toString(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_MkBinding_Exception_toString___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Exception_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1;
return x_1;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 2, x_5);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_11 = lean_apply_1(x_1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_EStateM_MonadState___closed__2;
x_2 = l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1;
x_3 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__2), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2;
x_2 = l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4;
return x_1;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = l_Lean_LocalContext_getFVar_x21(x_1, x_8);
lean_dec(x_8);
x_10 = l_Lean_LocalDecl_index(x_9);
x_11 = l_Lean_LocalDecl_index(x_5);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
if (x_12 == 0)
{
lean_dec(x_9);
x_4 = x_14;
goto _start;
}
else
{
lean_dec(x_5);
x_4 = x_14;
x_5 = x_9;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Lean_Expr_Inhabited;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_array_get(x_3, x_2, x_4);
lean_inc(x_1);
x_6 = l_Lean_LocalContext_getFVar_x21(x_1, x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1(x_1, x_2, x_2, x_7, x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_2);
x_10 = l_Lean_Expr_fvarId_x21(x_8);
lean_dec(x_8);
x_11 = lean_name_eq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_5);
return x_11;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Expr_fvarId_x21(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_13, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_5 = x_18;
goto _start;
}
else
{
lean_dec(x_5);
return x_16;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_5, x_1, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_metavar_ctx_get_expr_assignment(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_MetavarContext_getDecl(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
lean_inc(x_19);
x_20 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_19, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
case 5:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
lean_inc(x_30);
x_31 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_30, x_4);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Lean_Expr_isApp(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_29);
x_36 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_37);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_3 = x_29;
x_4 = x_43;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_dec(x_31);
lean_inc(x_2);
x_47 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_30, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_48);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_Expr_isApp(x_29);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_29);
x_52 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_29, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
x_3 = x_29;
x_4 = x_59;
goto _start;
}
}
else
{
x_3 = x_29;
x_4 = x_50;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_47);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_47, 0);
lean_dec(x_63);
return x_47;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_47, 1);
lean_inc(x_64);
lean_dec(x_47);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 6:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
lean_dec(x_3);
lean_inc(x_66);
x_68 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_66, x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_66);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_67);
x_72 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_73);
if (x_74 == 0)
{
uint8_t x_75; 
lean_dec(x_67);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_3 = x_67;
x_4 = x_79;
goto _start;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_68, 1);
lean_inc(x_81);
lean_dec(x_68);
lean_inc(x_2);
x_82 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_66, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
lean_dec(x_83);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_inc(x_67);
x_86 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_67, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_67);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_86, 0);
lean_dec(x_90);
return x_86;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; 
lean_dec(x_87);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_3 = x_67;
x_4 = x_93;
goto _start;
}
}
else
{
uint8_t x_95; 
lean_dec(x_67);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_82);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_82, 0);
lean_dec(x_96);
return x_82;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_dec(x_82);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
case 7:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_3, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_3, 2);
lean_inc(x_100);
lean_dec(x_3);
lean_inc(x_99);
x_101 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_99, x_4);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_99);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
lean_inc(x_100);
x_105 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
lean_dec(x_100);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_105, 0);
lean_dec(x_109);
return x_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_106);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_3 = x_100;
x_4 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_114 = lean_ctor_get(x_101, 1);
lean_inc(x_114);
lean_dec(x_101);
lean_inc(x_2);
x_115 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_99, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
lean_dec(x_116);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
lean_inc(x_100);
x_119 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_100, x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_100);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_119);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_119, 0);
lean_dec(x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
lean_dec(x_120);
x_126 = lean_ctor_get(x_119, 1);
lean_inc(x_126);
lean_dec(x_119);
x_3 = x_100;
x_4 = x_126;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_dec(x_100);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_115);
if (x_128 == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_115, 0);
lean_dec(x_129);
return x_115;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_115, 1);
lean_inc(x_130);
lean_dec(x_115);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_116);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
case 8:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_132 = lean_ctor_get(x_3, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 3);
lean_inc(x_134);
lean_dec(x_3);
lean_inc(x_132);
x_171 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_4);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_unbox(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_132);
x_174 = lean_ctor_get(x_171, 1);
lean_inc(x_174);
lean_dec(x_171);
x_175 = lean_unbox(x_172);
lean_dec(x_172);
x_135 = x_175;
x_136 = x_174;
goto block_170;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_172);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
lean_inc(x_2);
x_177 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_132, x_176);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_unbox(x_178);
lean_dec(x_178);
x_135 = x_180;
x_136 = x_179;
goto block_170;
}
block_170:
{
if (x_135 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
lean_inc(x_133);
x_137 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_133, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_133);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
lean_inc(x_134);
x_141 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_134);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_141);
if (x_144 == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_141, 0);
lean_dec(x_145);
return x_141;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
lean_dec(x_141);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; 
lean_dec(x_142);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
lean_dec(x_141);
x_3 = x_134;
x_4 = x_148;
goto _start;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
lean_inc(x_2);
x_151 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_133, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_152);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
lean_inc(x_134);
x_155 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_134, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_unbox(x_156);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_134);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_155);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_ctor_get(x_155, 0);
lean_dec(x_159);
return x_155;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_dec(x_155);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
else
{
lean_object* x_162; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_dec(x_155);
x_3 = x_134;
x_4 = x_162;
goto _start;
}
}
else
{
uint8_t x_164; 
lean_dec(x_134);
lean_dec(x_2);
x_164 = !lean_is_exclusive(x_151);
if (x_164 == 0)
{
lean_object* x_165; 
x_165 = lean_ctor_get(x_151, 0);
lean_dec(x_165);
return x_151;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_151, 1);
lean_inc(x_166);
lean_dec(x_151);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_152);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
x_168 = lean_box(x_135);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_136);
return x_169;
}
}
}
case 10:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_ctor_get(x_3, 1);
lean_inc(x_181);
lean_dec(x_3);
lean_inc(x_181);
x_182 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_181, x_4);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
if (x_184 == 0)
{
uint8_t x_185; 
lean_dec(x_181);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_182);
if (x_185 == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_182, 0);
lean_dec(x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_183);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
else
{
lean_object* x_189; 
lean_dec(x_183);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
lean_dec(x_182);
x_3 = x_181;
x_4 = x_189;
goto _start;
}
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_3, 2);
lean_inc(x_191);
lean_dec(x_3);
lean_inc(x_191);
x_192 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_191, x_4);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_unbox(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_191);
lean_dec(x_2);
x_195 = !lean_is_exclusive(x_192);
if (x_195 == 0)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_192, 0);
lean_dec(x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_192, 1);
lean_inc(x_197);
lean_dec(x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
lean_object* x_199; 
lean_dec(x_193);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
lean_dec(x_192);
x_3 = x_191;
x_4 = x_199;
goto _start;
}
}
default: 
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_3);
lean_dec(x_2);
x_201 = 0;
x_202 = lean_box(x_201);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_4);
return x_203;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_10 = l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg(x_1, x_9, x_5);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg(x_1, x_4, x_4, x_5, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg(x_1, x_7, x_7, x_8, x_3);
return x_9;
}
}
}
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_10 = l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg(x_1, x_9, x_5);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = x_3 >> x_4;
x_8 = lean_usize_to_nat(x_7);
x_9 = l_PersistentArray_getAux___main___rarg___closed__1;
x_10 = lean_array_get(x_9, x_6, x_8);
x_11 = 1;
x_12 = x_11 << x_4;
x_13 = x_12 - x_11;
x_14 = x_3 & x_13;
x_15 = 5;
x_16 = x_4 - x_15;
lean_inc(x_1);
x_17 = l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg(x_1, x_10, x_14, x_16, x_5);
lean_dec(x_10);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_8, x_22);
lean_dec(x_8);
x_24 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg(x_1, x_6, x_6, x_23, x_21);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = lean_usize_to_nat(x_3);
x_27 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg(x_1, x_25, x_25, x_26, x_5);
return x_27;
}
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
x_10 = lean_apply_2(x_2, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
x_10 = lean_apply_2(x_2, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 3);
x_6 = lean_nat_dec_le(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_usize_of_nat(x_4);
x_9 = lean_ctor_get_usize(x_1, 4);
lean_inc(x_2);
x_10 = l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg(x_2, x_7, x_8, x_9, x_3);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_ctor_get(x_1, 1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg(x_1, x_2, x_15, x_16, x_14);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_nat_sub(x_4, x_5);
x_20 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg(x_1, x_2, x_18, x_19, x_3);
return x_20;
}
}
}
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_18; uint8_t x_19; 
x_8 = lean_ctor_get(x_6, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1(x_3, x_8, x_3, x_4, x_18);
if (x_19 == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_8, 3);
x_21 = l_Lean_Expr_hasFVar(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_hasMVar(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_5);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = l_HashMap_Inhabited___closed__1;
lean_inc(x_20);
lean_inc(x_1);
x_25 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_5, x_1, x_20, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_5);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_box(0);
x_9 = x_29;
goto block_17;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = l_HashMap_Inhabited___closed__1;
lean_inc(x_20);
lean_inc(x_1);
x_31 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_5, x_1, x_20, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_5);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_9 = x_35;
goto block_17;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; uint8_t x_55; 
x_36 = lean_ctor_get(x_8, 3);
x_37 = lean_ctor_get(x_8, 4);
x_55 = l_Lean_Expr_hasFVar(x_36);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = l_Lean_Expr_hasMVar(x_36);
if (x_56 == 0)
{
uint8_t x_57; lean_object* x_58; 
x_57 = 0;
x_58 = l_HashMap_Inhabited___closed__1;
x_38 = x_57;
x_39 = x_58;
goto block_54;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = l_HashMap_Inhabited___closed__1;
lean_inc(x_36);
lean_inc(x_1);
x_60 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_5, x_1, x_36, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unbox(x_61);
lean_dec(x_61);
x_38 = x_63;
x_39 = x_62;
goto block_54;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = l_HashMap_Inhabited___closed__1;
lean_inc(x_36);
lean_inc(x_1);
x_65 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_5, x_1, x_36, x_64);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_unbox(x_66);
lean_dec(x_66);
x_38 = x_68;
x_39 = x_67;
goto block_54;
}
block_54:
{
if (x_38 == 0)
{
uint8_t x_40; 
x_40 = l_Lean_Expr_hasFVar(x_37);
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_hasMVar(x_37);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_39);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_5);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_inc(x_37);
lean_inc(x_1);
x_43 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_5, x_1, x_37, x_39);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_5);
return x_46;
}
else
{
lean_object* x_47; 
x_47 = lean_box(0);
x_9 = x_47;
goto block_17;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_inc(x_37);
lean_inc(x_1);
x_48 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_5, x_1, x_37, x_39);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_5);
return x_51;
}
else
{
lean_object* x_52; 
x_52 = lean_box(0);
x_9 = x_52;
goto block_17;
}
}
}
else
{
lean_object* x_53; 
lean_dec(x_39);
x_53 = lean_box(0);
x_9 = x_53;
goto block_17;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = l_Lean_LocalDecl_toExpr(x_8);
x_70 = lean_array_push(x_5, x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
return x_71;
}
block_17:
{
uint8_t x_10; uint8_t x_11; 
lean_dec(x_9);
x_10 = l_Lean_LocalDecl_binderInfo(x_8);
x_11 = l_Lean_BinderInfo_isAuxDecl(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_LocalDecl_toExpr(x_8);
x_13 = lean_array_push(x_5, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_15, 2, x_3);
lean_ctor_set(x_15, 3, x_8);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1___boxed), 6, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
x_10 = l_Lean_LocalDecl_index(x_7);
x_11 = l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg(x_8, x_9, x_6, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l___private_Init_Lean_MetavarContext_10__collectDeps(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_7 = l___private_Init_Lean_MetavarContext_9__getLocalDeclWithSmallestIdx(x_2, x_3);
x_8 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_2);
x_9 = l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39(x_1, x_2, x_3, x_4, x_2, x_8, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__12(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__11(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__14(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__10(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__18(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__19(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__17(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__20(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__16(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__15(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__24(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__25(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__23(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__26(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__22(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__21(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__30(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__31(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__29(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__32(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__28(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__27(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__36(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__37(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__35(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__38(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__34(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__33(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__43___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__44___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PersistentArray_foldlMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__42___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__45___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__46___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_PersistentArray_foldlFromMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__41___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__47___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__48___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PersistentArray_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__40___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_LocalContext_foldlFromM___at___private_Init_Lean_MetavarContext_10__collectDeps___spec__39(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
x_11 = l_Lean_Expr_fvarId_x21(x_10);
lean_dec(x_10);
x_12 = lean_local_ctx_erase(x_5, x_11);
x_3 = x_9;
x_4 = lean_box(0);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_3);
return x_5;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_11__reduceLocalContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1(x_2, x_2, x_3, lean_box(0), x_1);
return x_4;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at___private_Init_Lean_MetavarContext_11__reduceLocalContext___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_11__reduceLocalContext___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_MetavarContext_12__visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_6, x_2);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_inc(x_2);
x_8 = lean_apply_2(x_1, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
x_14 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_13, x_2, x_12);
lean_ctor_set(x_10, 2, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
x_18 = lean_ctor_get(x_10, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
lean_inc(x_15);
x_19 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_18, x_2, x_15);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_17);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_8, 1, x_20);
return x_8;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_21, 2);
lean_inc(x_25);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 lean_ctor_release(x_21, 2);
 x_26 = x_21;
} else {
 lean_dec_ref(x_21);
 x_26 = lean_box(0);
}
lean_inc(x_22);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_25, x_2, x_22);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 3, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_8);
if (x_30 == 0)
{
return x_8;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_8, 0);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_8);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_ctor_get(x_7, 0);
lean_inc(x_34);
lean_dec(x_7);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_13__getMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = l_Lean_Expr_fvarId_x21(x_8);
x_10 = l_Lean_LocalContext_contains(x_1, x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_array_push(x_5, x_8);
x_4 = x_12;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_14__getInScope(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_empty___closed__1;
x_5 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1(x_1, x_2, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_14__getInScope___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_14__getInScope___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_MetavarContext_14__getInScope(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Lean_MetavarContext_15__withFreshCache___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_2, 2, x_5);
x_6 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 1);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 2);
lean_dec(x_10);
lean_ctor_set(x_8, 2, x_4);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_4);
lean_ctor_set(x_6, 1, x_13);
return x_6;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 x_18 = x_14;
} else {
 lean_dec_ref(x_14);
 x_18 = lean_box(0);
}
if (lean_is_scalar(x_18)) {
 x_19 = lean_alloc_ctor(0, 3, 0);
} else {
 x_19 = x_18;
}
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_4);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_6);
if (x_21 == 0)
{
return x_6;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_6, 0);
x_23 = lean_ctor_get(x_6, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_6);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = lean_ctor_get(x_2, 1);
x_27 = lean_ctor_get(x_2, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_2);
x_28 = l_HashMap_Inhabited___closed__1;
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_apply_1(x_1, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 lean_ctor_release(x_31, 2);
 x_36 = x_31;
} else {
 lean_dec_ref(x_31);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 3, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_27);
if (lean_is_scalar(x_33)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_33;
}
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_27);
x_39 = lean_ctor_get(x_30, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_41 = x_30;
} else {
 lean_dec_ref(x_30);
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
}
lean_object* l___private_Init_Lean_MetavarContext_15__withFreshCache(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_MetavarContext_15__withFreshCache___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_MetavarContext_16__abstractRangeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_expr_abstract_range(x_8, x_3, x_2);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = lean_expr_abstract_range(x_10, x_3, x_2);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_16__abstractRangeAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_MetavarContext_16__abstractRangeAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_5, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_5, x_10);
lean_dec(x_5);
x_12 = l_Lean_Expr_Inhabited;
x_13 = lean_array_get(x_12, x_3, x_11);
lean_inc(x_2);
x_14 = l_Lean_LocalContext_getFVar_x21(x_2, x_13);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 3);
lean_inc(x_16);
x_17 = lean_ctor_get_uint8(x_14, sizeof(void*)*4);
lean_dec(x_14);
lean_inc(x_1);
x_18 = lean_apply_2(x_1, x_16, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_expr_abstract_range(x_19, x_11, x_3);
lean_dec(x_19);
x_22 = l_Lean_mkForall(x_15, x_17, x_21, x_6);
x_5 = x_11;
x_6 = x_22;
x_7 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_14, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_14, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_14, 4);
lean_inc(x_30);
lean_dec(x_14);
lean_inc(x_1);
x_31 = lean_apply_2(x_1, x_29, x_7);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_expr_abstract_range(x_32, x_11, x_3);
lean_dec(x_32);
lean_inc(x_1);
x_35 = lean_apply_2(x_1, x_30, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_expr_abstract_range(x_36, x_11, x_3);
lean_dec(x_36);
x_39 = 0;
lean_inc(x_34);
lean_inc(x_28);
x_40 = l_Lean_mkLet(x_28, x_34, x_38, x_6, x_39);
x_41 = lean_box(x_4);
if (lean_obj_tag(x_41) == 2)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_expr_lift_loose_bvars(x_40, x_8, x_10);
lean_dec(x_40);
x_43 = 0;
x_44 = l_Lean_mkForall(x_28, x_43, x_34, x_42);
x_5 = x_11;
x_6 = x_44;
x_7 = x_37;
goto _start;
}
else
{
lean_dec(x_41);
lean_dec(x_34);
lean_dec(x_28);
x_5 = x_11;
x_6 = x_40;
x_7 = x_37;
goto _start;
}
}
else
{
uint8_t x_47; 
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_35);
if (x_47 == 0)
{
return x_35;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_35, 0);
x_49 = lean_ctor_get(x_35, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_35);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_31);
if (x_51 == 0)
{
return x_31;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_31, 0);
x_53 = lean_ctor_get(x_31, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_31);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_6);
lean_ctor_set(x_55, 1, x_7);
return x_55;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_get_size(x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_expr_abstract_range(x_9, x_7, x_3);
lean_dec(x_9);
x_12 = l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1(x_1, x_2, x_3, x_4, x_7, x_11, x_10);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Nat_foldRevMAux___main___at___private_Init_Lean_MetavarContext_17__mkAuxMVarType___spec__1(x_1, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Init_Lean_MetavarContext_17__mkAuxMVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_19 = lean_box(x_3);
if (lean_obj_tag(x_19) == 2)
{
lean_object* x_20; 
x_20 = l_Lean_mkApp(x_6, x_9);
x_5 = x_11;
x_6 = x_20;
goto _start;
}
else
{
lean_object* x_22; 
lean_dec(x_19);
x_22 = lean_box(0);
x_12 = x_22;
goto block_18;
}
block_18:
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_12);
lean_inc(x_1);
x_13 = l_Lean_LocalContext_getFVar_x21(x_1, x_9);
x_14 = l_Lean_LocalDecl_isLet(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Lean_mkApp(x_6, x_9);
x_5 = x_11;
x_6 = x_15;
goto _start;
}
else
{
lean_dec(x_9);
x_5 = x_11;
goto _start;
}
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_18__mkMVarApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_1, x_3, x_4, x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Init_Lean_MetavarContext_18__mkMVarApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l___private_Init_Lean_MetavarContext_18__mkMVarApp(x_1, x_2, x_3, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_19__mkAuxMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_name_mk_numeral(x_10, x_11);
x_13 = lean_box(0);
lean_inc(x_12);
x_14 = lean_metavar_ctx_mk_decl(x_9, x_12, x_13, x_1, x_2, x_3, x_4);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_11, x_15);
lean_dec(x_11);
lean_ctor_set(x_7, 1, x_16);
lean_ctor_set(x_5, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_5);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
lean_inc(x_20);
lean_inc(x_19);
x_21 = lean_name_mk_numeral(x_19, x_20);
x_22 = lean_box(0);
lean_inc(x_21);
x_23 = lean_metavar_ctx_mk_decl(x_18, x_21, x_22, x_1, x_2, x_3, x_4);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_20, x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_5, 1, x_26);
lean_ctor_set(x_5, 0, x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_5);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_28 = lean_ctor_get(x_5, 1);
x_29 = lean_ctor_get(x_5, 0);
x_30 = lean_ctor_get(x_5, 2);
lean_inc(x_30);
lean_inc(x_28);
lean_inc(x_29);
lean_dec(x_5);
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_33 = x_28;
} else {
 lean_dec_ref(x_28);
 x_33 = lean_box(0);
}
lean_inc(x_32);
lean_inc(x_31);
x_34 = lean_name_mk_numeral(x_31, x_32);
x_35 = lean_box(0);
lean_inc(x_34);
x_36 = lean_metavar_ctx_mk_decl(x_29, x_34, x_35, x_1, x_2, x_3, x_4);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_32, x_37);
lean_dec(x_32);
if (lean_is_scalar(x_33)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_33;
}
lean_ctor_set(x_39, 0, x_31);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_30);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_19__mkAuxMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_name_eq(x_1, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_name_eq(x_1, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_name_eq(x_1, x_5);
lean_dec(x_5);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
case 2:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_metavar_ctx_get_expr_assignment(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_11 = l_Lean_MetavarContext_getDecl(x_2, x_9);
lean_dec(x_9);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2(x_1, x_13);
lean_dec(x_13);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_9);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
lean_inc(x_17);
x_18 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_17, x_4);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 0);
lean_dec(x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_3 = x_17;
x_4 = x_25;
goto _start;
}
}
}
case 5:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_dec(x_3);
lean_inc(x_28);
x_29 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_28, x_4);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
lean_dec(x_28);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Lean_Expr_isApp(x_27);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_inc(x_27);
x_34 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_27, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
if (x_36 == 0)
{
uint8_t x_37; 
lean_dec(x_27);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_34, 0);
lean_dec(x_38);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
lean_object* x_41; 
lean_dec(x_35);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_dec(x_34);
x_3 = x_27;
x_4 = x_41;
goto _start;
}
}
else
{
x_3 = x_27;
x_4 = x_32;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_dec(x_29);
lean_inc(x_2);
x_45 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_28, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_46);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = l_Lean_Expr_isApp(x_27);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_inc(x_27);
x_50 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_27, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_unbox(x_51);
if (x_52 == 0)
{
uint8_t x_53; 
lean_dec(x_27);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_50, 0);
lean_dec(x_54);
return x_50;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_dec(x_50);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
lean_object* x_57; 
lean_dec(x_51);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_dec(x_50);
x_3 = x_27;
x_4 = x_57;
goto _start;
}
}
else
{
x_3 = x_27;
x_4 = x_48;
goto _start;
}
}
else
{
uint8_t x_60; 
lean_dec(x_27);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_45);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_45, 0);
lean_dec(x_61);
return x_45;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_45, 1);
lean_inc(x_62);
lean_dec(x_45);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_46);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
case 6:
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_3, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_3, 2);
lean_inc(x_65);
lean_dec(x_3);
lean_inc(x_64);
x_66 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_64, x_4);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_64);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
lean_inc(x_65);
x_70 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_65, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
if (x_72 == 0)
{
uint8_t x_73; 
lean_dec(x_65);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_70);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_70, 0);
lean_dec(x_74);
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_71);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
lean_dec(x_70);
x_3 = x_65;
x_4 = x_77;
goto _start;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
lean_dec(x_66);
lean_inc(x_2);
x_80 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_64, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
lean_dec(x_81);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_dec(x_80);
lean_inc(x_65);
x_84 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_65, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
if (x_86 == 0)
{
uint8_t x_87; 
lean_dec(x_65);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_84);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_84, 0);
lean_dec(x_88);
return x_84;
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_dec(x_84);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
lean_object* x_91; 
lean_dec(x_85);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_3 = x_65;
x_4 = x_91;
goto _start;
}
}
else
{
uint8_t x_93; 
lean_dec(x_65);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_80);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_80, 0);
lean_dec(x_94);
return x_80;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_80, 1);
lean_inc(x_95);
lean_dec(x_80);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_81);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
case 7:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_97 = lean_ctor_get(x_3, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_3, 2);
lean_inc(x_98);
lean_dec(x_3);
lean_inc(x_97);
x_99 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_97, x_4);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
lean_dec(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_dec(x_97);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
lean_inc(x_98);
x_103 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_98, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
if (x_105 == 0)
{
uint8_t x_106; 
lean_dec(x_98);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_103);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_103, 0);
lean_dec(x_107);
return x_103;
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
lean_dec(x_103);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
else
{
lean_object* x_110; 
lean_dec(x_104);
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
lean_dec(x_103);
x_3 = x_98;
x_4 = x_110;
goto _start;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_99, 1);
lean_inc(x_112);
lean_dec(x_99);
lean_inc(x_2);
x_113 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_97, x_112);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
lean_dec(x_114);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_dec(x_113);
lean_inc(x_98);
x_117 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_98, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_unbox(x_118);
if (x_119 == 0)
{
uint8_t x_120; 
lean_dec(x_98);
lean_dec(x_2);
x_120 = !lean_is_exclusive(x_117);
if (x_120 == 0)
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_117, 0);
lean_dec(x_121);
return x_117;
}
else
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_117, 1);
lean_inc(x_122);
lean_dec(x_117);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_118);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
else
{
lean_object* x_124; 
lean_dec(x_118);
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_dec(x_117);
x_3 = x_98;
x_4 = x_124;
goto _start;
}
}
else
{
uint8_t x_126; 
lean_dec(x_98);
lean_dec(x_2);
x_126 = !lean_is_exclusive(x_113);
if (x_126 == 0)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_113, 0);
lean_dec(x_127);
return x_113;
}
else
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_113, 1);
lean_inc(x_128);
lean_dec(x_113);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
case 8:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_130 = lean_ctor_get(x_3, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_3, 2);
lean_inc(x_131);
x_132 = lean_ctor_get(x_3, 3);
lean_inc(x_132);
lean_dec(x_3);
lean_inc(x_130);
x_169 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_130, x_4);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_unbox(x_170);
if (x_171 == 0)
{
lean_object* x_172; uint8_t x_173; 
lean_dec(x_130);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
lean_dec(x_169);
x_173 = lean_unbox(x_170);
lean_dec(x_170);
x_133 = x_173;
x_134 = x_172;
goto block_168;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
lean_dec(x_170);
x_174 = lean_ctor_get(x_169, 1);
lean_inc(x_174);
lean_dec(x_169);
lean_inc(x_2);
x_175 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_130, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_unbox(x_176);
lean_dec(x_176);
x_133 = x_178;
x_134 = x_177;
goto block_168;
}
block_168:
{
if (x_133 == 0)
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_inc(x_131);
x_135 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_131, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
lean_dec(x_131);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_dec(x_135);
lean_inc(x_132);
x_139 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_unbox(x_140);
if (x_141 == 0)
{
uint8_t x_142; 
lean_dec(x_132);
lean_dec(x_2);
x_142 = !lean_is_exclusive(x_139);
if (x_142 == 0)
{
lean_object* x_143; 
x_143 = lean_ctor_get(x_139, 0);
lean_dec(x_143);
return x_139;
}
else
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_139, 1);
lean_inc(x_144);
lean_dec(x_139);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_140);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
else
{
lean_object* x_146; 
lean_dec(x_140);
x_146 = lean_ctor_get(x_139, 1);
lean_inc(x_146);
lean_dec(x_139);
x_3 = x_132;
x_4 = x_146;
goto _start;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_148 = lean_ctor_get(x_135, 1);
lean_inc(x_148);
lean_dec(x_135);
lean_inc(x_2);
x_149 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_131, x_148);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_unbox(x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
lean_dec(x_150);
x_152 = lean_ctor_get(x_149, 1);
lean_inc(x_152);
lean_dec(x_149);
lean_inc(x_132);
x_153 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_unbox(x_154);
if (x_155 == 0)
{
uint8_t x_156; 
lean_dec(x_132);
lean_dec(x_2);
x_156 = !lean_is_exclusive(x_153);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_153, 0);
lean_dec(x_157);
return x_153;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_153, 1);
lean_inc(x_158);
lean_dec(x_153);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_154);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
else
{
lean_object* x_160; 
lean_dec(x_154);
x_160 = lean_ctor_get(x_153, 1);
lean_inc(x_160);
lean_dec(x_153);
x_3 = x_132;
x_4 = x_160;
goto _start;
}
}
else
{
uint8_t x_162; 
lean_dec(x_132);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_149);
if (x_162 == 0)
{
lean_object* x_163; 
x_163 = lean_ctor_get(x_149, 0);
lean_dec(x_163);
return x_149;
}
else
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_149, 1);
lean_inc(x_164);
lean_dec(x_149);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_150);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_2);
x_166 = lean_box(x_133);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_134);
return x_167;
}
}
}
case 10:
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_179 = lean_ctor_get(x_3, 1);
lean_inc(x_179);
lean_dec(x_3);
lean_inc(x_179);
x_180 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_179, x_4);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_unbox(x_181);
if (x_182 == 0)
{
uint8_t x_183; 
lean_dec(x_179);
lean_dec(x_2);
x_183 = !lean_is_exclusive(x_180);
if (x_183 == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_180, 0);
lean_dec(x_184);
return x_180;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_dec(x_180);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_181);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
else
{
lean_object* x_187; 
lean_dec(x_181);
x_187 = lean_ctor_get(x_180, 1);
lean_inc(x_187);
lean_dec(x_180);
x_3 = x_179;
x_4 = x_187;
goto _start;
}
}
case 11:
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_189 = lean_ctor_get(x_3, 2);
lean_inc(x_189);
lean_dec(x_3);
lean_inc(x_189);
x_190 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_189, x_4);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_unbox(x_191);
if (x_192 == 0)
{
uint8_t x_193; 
lean_dec(x_189);
lean_dec(x_2);
x_193 = !lean_is_exclusive(x_190);
if (x_193 == 0)
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_190, 0);
lean_dec(x_194);
return x_190;
}
else
{
lean_object* x_195; lean_object* x_196; 
x_195 = lean_ctor_get(x_190, 1);
lean_inc(x_195);
lean_dec(x_190);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_191);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
else
{
lean_object* x_197; 
lean_dec(x_191);
x_197 = lean_ctor_get(x_190, 1);
lean_inc(x_197);
lean_dec(x_190);
x_3 = x_189;
x_4 = x_197;
goto _start;
}
}
default: 
{
uint8_t x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_3);
lean_dec(x_2);
x_199 = 0;
x_200 = lean_box(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_4);
return x_201;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_name_eq(x_1, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10(x_1, x_3, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11(x_1, x_7, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_array_fget(x_3, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = l_Lean_LocalDecl_fvarId(x_12);
lean_dec(x_12);
x_14 = lean_name_eq(x_1, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12(x_1, x_2, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
else
{
return x_4;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_name_eq(x_1, x_5);
lean_dec(x_5);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
case 2:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_metavar_ctx_get_expr_assignment(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_11 = l_Lean_MetavarContext_getDecl(x_2, x_9);
lean_dec(x_9);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8(x_1, x_13);
lean_dec(x_13);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_9);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
lean_inc(x_17);
x_18 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_17, x_4);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 0);
lean_dec(x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_3 = x_17;
x_4 = x_25;
goto _start;
}
}
}
case 5:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_dec(x_3);
lean_inc(x_28);
x_29 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_28, x_4);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
lean_dec(x_28);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Lean_Expr_isApp(x_27);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_inc(x_27);
x_34 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_27, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
if (x_36 == 0)
{
uint8_t x_37; 
lean_dec(x_27);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_34, 0);
lean_dec(x_38);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
lean_object* x_41; 
lean_dec(x_35);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_dec(x_34);
x_3 = x_27;
x_4 = x_41;
goto _start;
}
}
else
{
x_3 = x_27;
x_4 = x_32;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_dec(x_29);
lean_inc(x_2);
x_45 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_28, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_46);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = l_Lean_Expr_isApp(x_27);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_inc(x_27);
x_50 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_27, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_unbox(x_51);
if (x_52 == 0)
{
uint8_t x_53; 
lean_dec(x_27);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_50, 0);
lean_dec(x_54);
return x_50;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_dec(x_50);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
lean_object* x_57; 
lean_dec(x_51);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_dec(x_50);
x_3 = x_27;
x_4 = x_57;
goto _start;
}
}
else
{
x_3 = x_27;
x_4 = x_48;
goto _start;
}
}
else
{
uint8_t x_60; 
lean_dec(x_27);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_45);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_45, 0);
lean_dec(x_61);
return x_45;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_45, 1);
lean_inc(x_62);
lean_dec(x_45);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_46);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
case 6:
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_3, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_3, 2);
lean_inc(x_65);
lean_dec(x_3);
lean_inc(x_64);
x_66 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_64, x_4);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_64);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
lean_inc(x_65);
x_70 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_65, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
if (x_72 == 0)
{
uint8_t x_73; 
lean_dec(x_65);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_70);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_70, 0);
lean_dec(x_74);
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_71);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
lean_dec(x_70);
x_3 = x_65;
x_4 = x_77;
goto _start;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
lean_dec(x_66);
lean_inc(x_2);
x_80 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_64, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
lean_dec(x_81);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_dec(x_80);
lean_inc(x_65);
x_84 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_65, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
if (x_86 == 0)
{
uint8_t x_87; 
lean_dec(x_65);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_84);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_84, 0);
lean_dec(x_88);
return x_84;
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_dec(x_84);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
lean_object* x_91; 
lean_dec(x_85);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_3 = x_65;
x_4 = x_91;
goto _start;
}
}
else
{
uint8_t x_93; 
lean_dec(x_65);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_80);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_80, 0);
lean_dec(x_94);
return x_80;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_80, 1);
lean_inc(x_95);
lean_dec(x_80);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_81);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
case 7:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_97 = lean_ctor_get(x_3, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_3, 2);
lean_inc(x_98);
lean_dec(x_3);
lean_inc(x_97);
x_99 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_97, x_4);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
lean_dec(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_dec(x_97);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
lean_inc(x_98);
x_103 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_98, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
if (x_105 == 0)
{
uint8_t x_106; 
lean_dec(x_98);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_103);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_103, 0);
lean_dec(x_107);
return x_103;
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
lean_dec(x_103);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
else
{
lean_object* x_110; 
lean_dec(x_104);
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
lean_dec(x_103);
x_3 = x_98;
x_4 = x_110;
goto _start;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_99, 1);
lean_inc(x_112);
lean_dec(x_99);
lean_inc(x_2);
x_113 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_97, x_112);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
lean_dec(x_114);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_dec(x_113);
lean_inc(x_98);
x_117 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_98, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_unbox(x_118);
if (x_119 == 0)
{
uint8_t x_120; 
lean_dec(x_98);
lean_dec(x_2);
x_120 = !lean_is_exclusive(x_117);
if (x_120 == 0)
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_117, 0);
lean_dec(x_121);
return x_117;
}
else
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_117, 1);
lean_inc(x_122);
lean_dec(x_117);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_118);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
else
{
lean_object* x_124; 
lean_dec(x_118);
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_dec(x_117);
x_3 = x_98;
x_4 = x_124;
goto _start;
}
}
else
{
uint8_t x_126; 
lean_dec(x_98);
lean_dec(x_2);
x_126 = !lean_is_exclusive(x_113);
if (x_126 == 0)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_113, 0);
lean_dec(x_127);
return x_113;
}
else
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_113, 1);
lean_inc(x_128);
lean_dec(x_113);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
case 8:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_130 = lean_ctor_get(x_3, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_3, 2);
lean_inc(x_131);
x_132 = lean_ctor_get(x_3, 3);
lean_inc(x_132);
lean_dec(x_3);
lean_inc(x_130);
x_169 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_130, x_4);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_unbox(x_170);
if (x_171 == 0)
{
lean_object* x_172; uint8_t x_173; 
lean_dec(x_130);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
lean_dec(x_169);
x_173 = lean_unbox(x_170);
lean_dec(x_170);
x_133 = x_173;
x_134 = x_172;
goto block_168;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
lean_dec(x_170);
x_174 = lean_ctor_get(x_169, 1);
lean_inc(x_174);
lean_dec(x_169);
lean_inc(x_2);
x_175 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_130, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_unbox(x_176);
lean_dec(x_176);
x_133 = x_178;
x_134 = x_177;
goto block_168;
}
block_168:
{
if (x_133 == 0)
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_inc(x_131);
x_135 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_131, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
lean_dec(x_131);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_dec(x_135);
lean_inc(x_132);
x_139 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_unbox(x_140);
if (x_141 == 0)
{
uint8_t x_142; 
lean_dec(x_132);
lean_dec(x_2);
x_142 = !lean_is_exclusive(x_139);
if (x_142 == 0)
{
lean_object* x_143; 
x_143 = lean_ctor_get(x_139, 0);
lean_dec(x_143);
return x_139;
}
else
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_139, 1);
lean_inc(x_144);
lean_dec(x_139);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_140);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
else
{
lean_object* x_146; 
lean_dec(x_140);
x_146 = lean_ctor_get(x_139, 1);
lean_inc(x_146);
lean_dec(x_139);
x_3 = x_132;
x_4 = x_146;
goto _start;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_148 = lean_ctor_get(x_135, 1);
lean_inc(x_148);
lean_dec(x_135);
lean_inc(x_2);
x_149 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_131, x_148);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_unbox(x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
lean_dec(x_150);
x_152 = lean_ctor_get(x_149, 1);
lean_inc(x_152);
lean_dec(x_149);
lean_inc(x_132);
x_153 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_132, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_unbox(x_154);
if (x_155 == 0)
{
uint8_t x_156; 
lean_dec(x_132);
lean_dec(x_2);
x_156 = !lean_is_exclusive(x_153);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_153, 0);
lean_dec(x_157);
return x_153;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_153, 1);
lean_inc(x_158);
lean_dec(x_153);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_154);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
else
{
lean_object* x_160; 
lean_dec(x_154);
x_160 = lean_ctor_get(x_153, 1);
lean_inc(x_160);
lean_dec(x_153);
x_3 = x_132;
x_4 = x_160;
goto _start;
}
}
else
{
uint8_t x_162; 
lean_dec(x_132);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_149);
if (x_162 == 0)
{
lean_object* x_163; 
x_163 = lean_ctor_get(x_149, 0);
lean_dec(x_163);
return x_149;
}
else
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_149, 1);
lean_inc(x_164);
lean_dec(x_149);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_150);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_2);
x_166 = lean_box(x_133);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_134);
return x_167;
}
}
}
case 10:
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_179 = lean_ctor_get(x_3, 1);
lean_inc(x_179);
lean_dec(x_3);
lean_inc(x_179);
x_180 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_179, x_4);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_unbox(x_181);
if (x_182 == 0)
{
uint8_t x_183; 
lean_dec(x_179);
lean_dec(x_2);
x_183 = !lean_is_exclusive(x_180);
if (x_183 == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_180, 0);
lean_dec(x_184);
return x_180;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_dec(x_180);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_181);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
else
{
lean_object* x_187; 
lean_dec(x_181);
x_187 = lean_ctor_get(x_180, 1);
lean_inc(x_187);
lean_dec(x_180);
x_3 = x_179;
x_4 = x_187;
goto _start;
}
}
case 11:
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_189 = lean_ctor_get(x_3, 2);
lean_inc(x_189);
lean_dec(x_3);
lean_inc(x_189);
x_190 = l___private_Init_Lean_MetavarContext_6__visit_x3f(x_189, x_4);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_unbox(x_191);
if (x_192 == 0)
{
uint8_t x_193; 
lean_dec(x_189);
lean_dec(x_2);
x_193 = !lean_is_exclusive(x_190);
if (x_193 == 0)
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_190, 0);
lean_dec(x_194);
return x_190;
}
else
{
lean_object* x_195; lean_object* x_196; 
x_195 = lean_ctor_get(x_190, 1);
lean_inc(x_195);
lean_dec(x_190);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_191);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
else
{
lean_object* x_197; 
lean_dec(x_191);
x_197 = lean_ctor_get(x_190, 1);
lean_inc(x_197);
lean_dec(x_190);
x_3 = x_189;
x_4 = x_197;
goto _start;
}
}
default: 
{
uint8_t x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_3);
lean_dec(x_2);
x_199 = 0;
x_200 = lean_box(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_4);
return x_201;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_4, x_6);
x_10 = l_Lean_Expr_hasFVar(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Expr_hasMVar(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_6 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = l_HashMap_Inhabited___closed__1;
lean_inc(x_1);
x_16 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_3, x_1, x_9, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_unbox(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_6, x_19);
lean_dec(x_6);
x_6 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_6);
lean_dec(x_1);
x_22 = lean_unbox(x_17);
lean_dec(x_17);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = l_HashMap_Inhabited___closed__1;
lean_inc(x_1);
x_24 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_3, x_1, x_9, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_unbox(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_25);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_6, x_27);
lean_dec(x_6);
x_6 = x_28;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_6);
lean_dec(x_1);
x_30 = lean_unbox(x_25);
lean_dec(x_25);
return x_30;
}
}
}
}
}
uint8_t l___private_Init_Lean_MetavarContext_20__anyDependsOn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13(x_1, x_2, x_3, x_2, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__10(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__11(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__9(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__12(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_8__dep___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_20__anyDependsOn___spec__13(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_MetavarContext_20__anyDependsOn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Init_Lean_MetavarContext_20__anyDependsOn(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_expr_eqv(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = 1;
return x_14;
}
}
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = l_Array_shrink___main___rarg(x_2, x_4);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_2, x_3);
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3(x_1, x_8, x_1, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_nat_dec_lt(x_4, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_15 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_3 = x_14;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_fswap(x_2, x_3, x_4);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_20 = lean_nat_add(x_4, x_18);
lean_dec(x_4);
x_2 = x_17;
x_3 = x_19;
x_4 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_3, x_22);
lean_dec(x_3);
x_3 = x_23;
goto _start;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_expr_eqv(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = 1;
return x_14;
}
}
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = l_Array_shrink___main___rarg(x_2, x_4);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_2, x_3);
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6(x_1, x_8, x_1, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_nat_dec_lt(x_4, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_15 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_3 = x_14;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_fswap(x_2, x_3, x_4);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_20 = lean_nat_add(x_4, x_18);
lean_dec(x_4);
x_2 = x_17;
x_3 = x_19;
x_4 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_3, x_22);
lean_dec(x_3);
x_3 = x_23;
goto _start;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_expr_eqv(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = 1;
return x_14;
}
}
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = l_Array_shrink___main___rarg(x_2, x_4);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_2, x_3);
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9(x_1, x_8, x_1, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_nat_dec_lt(x_4, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_15 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_3 = x_14;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_fswap(x_2, x_3, x_4);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_20 = lean_nat_add(x_4, x_18);
lean_dec(x_4);
x_2 = x_17;
x_3 = x_19;
x_4 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_3, x_22);
lean_dec(x_3);
x_3 = x_23;
goto _start;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_14 = l_Lean_Expr_hasMVar(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_inc(x_10);
x_17 = x_10;
lean_dec(x_10);
x_18 = lean_array_fset(x_13, x_2, x_17);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_20, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_inc(x_1);
lean_inc(x_10);
x_22 = lean_apply_2(x_1, x_10, x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_10);
x_27 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_26, x_10, x_24);
lean_ctor_set(x_23, 2, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
x_30 = x_24;
lean_dec(x_10);
x_31 = lean_array_fset(x_13, x_2, x_30);
lean_dec(x_2);
x_2 = x_29;
x_3 = x_31;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_10);
x_36 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_35, x_10, x_24);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
x_40 = x_24;
lean_dec(x_10);
x_41 = lean_array_fset(x_13, x_2, x_40);
lean_dec(x_2);
x_2 = x_39;
x_3 = x_41;
x_4 = x_37;
goto _start;
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_2, x_48);
x_50 = x_47;
lean_dec(x_10);
x_51 = lean_array_fset(x_13, x_2, x_50);
lean_dec(x_2);
x_2 = x_49;
x_3 = x_51;
goto _start;
}
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_5, 0);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_44);
x_45 = lean_metavar_ctx_get_expr_assignment(x_44, x_43);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_46 = l_Lean_MetavarContext_getDecl(x_44, x_43);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
x_48 = l___private_Init_Lean_MetavarContext_14__getInScope(x_47, x_2);
x_49 = lean_array_get_size(x_48);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_nat_dec_eq(x_49, x_50);
lean_dec(x_49);
if (x_51 == 0)
{
uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; 
x_52 = l_Lean_MetavarContext_isExprAssignable(x_44, x_43);
x_53 = lean_ctor_get_uint8(x_46, sizeof(void*)*5);
x_54 = l_Lean_MetavarKind_isSyntheticOpaque(x_53);
if (x_52 == 0)
{
uint8_t x_422; 
x_422 = 2;
x_55 = x_422;
goto block_421;
}
else
{
x_55 = x_53;
goto block_421;
}
block_421:
{
if (x_54 == 0)
{
lean_object* x_56; 
lean_inc(x_1);
x_56 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__2(x_1, x_50, x_4, x_5);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_47);
x_60 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
lean_dec(x_58);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
lean_dec(x_60);
lean_ctor_set_tag(x_56, 1);
lean_ctor_set(x_56, 0, x_61);
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_free_object(x_56);
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_47);
x_63 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_62);
x_64 = lean_ctor_get(x_46, 4);
lean_inc(x_64);
x_65 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4(x_62, x_64, x_50, x_50);
x_66 = lean_ctor_get(x_46, 2);
lean_inc(x_66);
lean_dec(x_46);
lean_inc(x_47);
x_67 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_62, x_55, x_66, x_59);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_63, x_65, x_68, x_55, x_69);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
x_74 = l_Lean_mkMVar(x_72);
lean_inc(x_47);
x_75 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_62, x_55, x_62, x_50, x_74);
x_76 = lean_box(x_55);
if (lean_obj_tag(x_76) == 2)
{
uint8_t x_77; 
lean_dec(x_43);
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_78 = lean_ctor_get(x_73, 0);
x_79 = l_Array_empty___closed__1;
x_80 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_79, x_79, x_50, x_62);
x_81 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_79, x_79, x_50, x_3);
x_82 = lean_metavar_ctx_assign_delayed(x_78, x_72, x_47, x_80, x_81);
lean_ctor_set(x_73, 0, x_82);
x_83 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_75);
lean_dec(x_58);
lean_ctor_set(x_70, 0, x_83);
return x_70;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_84 = lean_ctor_get(x_73, 0);
x_85 = lean_ctor_get(x_73, 1);
x_86 = lean_ctor_get(x_73, 2);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_73);
x_87 = l_Array_empty___closed__1;
x_88 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_87, x_87, x_50, x_62);
x_89 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_87, x_87, x_50, x_3);
x_90 = lean_metavar_ctx_assign_delayed(x_84, x_72, x_47, x_88, x_89);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_85);
lean_ctor_set(x_91, 2, x_86);
x_92 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_75);
lean_dec(x_58);
lean_ctor_set(x_70, 1, x_91);
lean_ctor_set(x_70, 0, x_92);
return x_70;
}
}
else
{
uint8_t x_93; 
lean_dec(x_76);
lean_dec(x_72);
lean_dec(x_62);
lean_dec(x_47);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_73);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_95 = l_Lean_MetavarContext_assignExpr(x_94, x_43, x_75);
lean_ctor_set(x_73, 0, x_95);
x_96 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_75);
lean_dec(x_58);
lean_ctor_set(x_70, 0, x_96);
return x_70;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_ctor_get(x_73, 0);
x_98 = lean_ctor_get(x_73, 1);
x_99 = lean_ctor_get(x_73, 2);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_73);
lean_inc(x_75);
x_100 = l_Lean_MetavarContext_assignExpr(x_97, x_43, x_75);
x_101 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_98);
lean_ctor_set(x_101, 2, x_99);
x_102 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_75);
lean_dec(x_58);
lean_ctor_set(x_70, 1, x_101);
lean_ctor_set(x_70, 0, x_102);
return x_70;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_70, 0);
x_104 = lean_ctor_get(x_70, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_70);
lean_inc(x_103);
x_105 = l_Lean_mkMVar(x_103);
lean_inc(x_47);
x_106 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_62, x_55, x_62, x_50, x_105);
x_107 = lean_box(x_55);
if (lean_obj_tag(x_107) == 2)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_43);
x_108 = lean_ctor_get(x_104, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_104, 2);
lean_inc(x_110);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 lean_ctor_release(x_104, 2);
 x_111 = x_104;
} else {
 lean_dec_ref(x_104);
 x_111 = lean_box(0);
}
x_112 = l_Array_empty___closed__1;
x_113 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_112, x_112, x_50, x_62);
x_114 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_112, x_112, x_50, x_3);
x_115 = lean_metavar_ctx_assign_delayed(x_108, x_103, x_47, x_113, x_114);
if (lean_is_scalar(x_111)) {
 x_116 = lean_alloc_ctor(0, 3, 0);
} else {
 x_116 = x_111;
}
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_109);
lean_ctor_set(x_116, 2, x_110);
x_117 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_106);
lean_dec(x_58);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_107);
lean_dec(x_103);
lean_dec(x_62);
lean_dec(x_47);
lean_dec(x_3);
x_119 = lean_ctor_get(x_104, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_104, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_104, 2);
lean_inc(x_121);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 lean_ctor_release(x_104, 2);
 x_122 = x_104;
} else {
 lean_dec_ref(x_104);
 x_122 = lean_box(0);
}
lean_inc(x_106);
x_123 = l_Lean_MetavarContext_assignExpr(x_119, x_43, x_106);
if (lean_is_scalar(x_122)) {
 x_124 = lean_alloc_ctor(0, 3, 0);
} else {
 x_124 = x_122;
}
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_120);
lean_ctor_set(x_124, 2, x_121);
x_125 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_58, x_58, x_50, x_106);
lean_dec(x_58);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_65);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_58);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_127 = !lean_is_exclusive(x_67);
if (x_127 == 0)
{
return x_67;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_67, 0);
x_129 = lean_ctor_get(x_67, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_67);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_56, 0);
x_132 = lean_ctor_get(x_56, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_56);
lean_inc(x_47);
x_133 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_131);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_132);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_136 = lean_ctor_get(x_133, 0);
lean_inc(x_136);
lean_dec(x_133);
lean_inc(x_47);
x_137 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_136);
x_138 = lean_ctor_get(x_46, 4);
lean_inc(x_138);
x_139 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4(x_136, x_138, x_50, x_50);
x_140 = lean_ctor_get(x_46, 2);
lean_inc(x_140);
lean_dec(x_46);
lean_inc(x_47);
x_141 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_136, x_55, x_140, x_132);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_137, x_139, x_142, x_55, x_143);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_147 = x_144;
} else {
 lean_dec_ref(x_144);
 x_147 = lean_box(0);
}
lean_inc(x_145);
x_148 = l_Lean_mkMVar(x_145);
lean_inc(x_47);
x_149 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_136, x_55, x_136, x_50, x_148);
x_150 = lean_box(x_55);
if (lean_obj_tag(x_150) == 2)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_43);
x_151 = lean_ctor_get(x_146, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_146, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_146, 2);
lean_inc(x_153);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 lean_ctor_release(x_146, 2);
 x_154 = x_146;
} else {
 lean_dec_ref(x_146);
 x_154 = lean_box(0);
}
x_155 = l_Array_empty___closed__1;
x_156 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_155, x_155, x_50, x_136);
x_157 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_155, x_155, x_50, x_3);
x_158 = lean_metavar_ctx_assign_delayed(x_151, x_145, x_47, x_156, x_157);
if (lean_is_scalar(x_154)) {
 x_159 = lean_alloc_ctor(0, 3, 0);
} else {
 x_159 = x_154;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_152);
lean_ctor_set(x_159, 2, x_153);
x_160 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_131, x_131, x_50, x_149);
lean_dec(x_131);
if (lean_is_scalar(x_147)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_147;
}
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_136);
lean_dec(x_47);
lean_dec(x_3);
x_162 = lean_ctor_get(x_146, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_146, 1);
lean_inc(x_163);
x_164 = lean_ctor_get(x_146, 2);
lean_inc(x_164);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 lean_ctor_release(x_146, 2);
 x_165 = x_146;
} else {
 lean_dec_ref(x_146);
 x_165 = lean_box(0);
}
lean_inc(x_149);
x_166 = l_Lean_MetavarContext_assignExpr(x_162, x_43, x_149);
if (lean_is_scalar(x_165)) {
 x_167 = lean_alloc_ctor(0, 3, 0);
} else {
 x_167 = x_165;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_163);
lean_ctor_set(x_167, 2, x_164);
x_168 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_131, x_131, x_50, x_149);
lean_dec(x_131);
if (lean_is_scalar(x_147)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_147;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_139);
lean_dec(x_137);
lean_dec(x_136);
lean_dec(x_131);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_170 = lean_ctor_get(x_141, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_141, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_172 = x_141;
} else {
 lean_dec_ref(x_141);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
}
}
else
{
uint8_t x_174; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_174 = !lean_is_exclusive(x_56);
if (x_174 == 0)
{
return x_56;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_56, 0);
x_176 = lean_ctor_get(x_56, 1);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_56);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
return x_177;
}
}
}
else
{
lean_object* x_178; 
lean_inc(x_43);
lean_inc(x_44);
x_178 = lean_metavar_ctx_get_delayed_assignment(x_44, x_43);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; 
lean_inc(x_1);
x_179 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__5(x_1, x_50, x_4, x_5);
if (lean_obj_tag(x_179) == 0)
{
uint8_t x_180; 
x_180 = !lean_is_exclusive(x_179);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_179, 0);
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_47);
x_183 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; 
lean_dec(x_181);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
lean_dec(x_183);
lean_ctor_set_tag(x_179, 1);
lean_ctor_set(x_179, 0, x_184);
return x_179;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_free_object(x_179);
x_185 = lean_ctor_get(x_183, 0);
lean_inc(x_185);
lean_dec(x_183);
lean_inc(x_47);
x_186 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_185);
x_187 = lean_ctor_get(x_46, 4);
lean_inc(x_187);
x_188 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7(x_185, x_187, x_50, x_50);
x_189 = lean_ctor_get(x_46, 2);
lean_inc(x_189);
lean_dec(x_46);
lean_inc(x_47);
x_190 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_185, x_55, x_189, x_182);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_186, x_188, x_191, x_55, x_192);
x_194 = !lean_is_exclusive(x_193);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_195 = lean_ctor_get(x_193, 0);
x_196 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
x_197 = l_Lean_mkMVar(x_195);
lean_inc(x_47);
x_198 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_185, x_55, x_185, x_50, x_197);
x_199 = lean_box(x_55);
if (lean_obj_tag(x_199) == 2)
{
uint8_t x_200; 
lean_dec(x_43);
x_200 = !lean_is_exclusive(x_196);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_196, 0);
x_202 = l_Array_empty___closed__1;
x_203 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_202, x_202, x_50, x_185);
x_204 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_202, x_202, x_50, x_3);
x_205 = lean_metavar_ctx_assign_delayed(x_201, x_195, x_47, x_203, x_204);
lean_ctor_set(x_196, 0, x_205);
x_206 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_198);
lean_dec(x_181);
lean_ctor_set(x_193, 0, x_206);
return x_193;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_207 = lean_ctor_get(x_196, 0);
x_208 = lean_ctor_get(x_196, 1);
x_209 = lean_ctor_get(x_196, 2);
lean_inc(x_209);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_196);
x_210 = l_Array_empty___closed__1;
x_211 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_210, x_210, x_50, x_185);
x_212 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_210, x_210, x_50, x_3);
x_213 = lean_metavar_ctx_assign_delayed(x_207, x_195, x_47, x_211, x_212);
x_214 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_208);
lean_ctor_set(x_214, 2, x_209);
x_215 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_198);
lean_dec(x_181);
lean_ctor_set(x_193, 1, x_214);
lean_ctor_set(x_193, 0, x_215);
return x_193;
}
}
else
{
uint8_t x_216; 
lean_dec(x_199);
lean_dec(x_195);
lean_dec(x_185);
lean_dec(x_47);
lean_dec(x_3);
x_216 = !lean_is_exclusive(x_196);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_196, 0);
lean_inc(x_198);
x_218 = l_Lean_MetavarContext_assignExpr(x_217, x_43, x_198);
lean_ctor_set(x_196, 0, x_218);
x_219 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_198);
lean_dec(x_181);
lean_ctor_set(x_193, 0, x_219);
return x_193;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_220 = lean_ctor_get(x_196, 0);
x_221 = lean_ctor_get(x_196, 1);
x_222 = lean_ctor_get(x_196, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_196);
lean_inc(x_198);
x_223 = l_Lean_MetavarContext_assignExpr(x_220, x_43, x_198);
x_224 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_222);
x_225 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_198);
lean_dec(x_181);
lean_ctor_set(x_193, 1, x_224);
lean_ctor_set(x_193, 0, x_225);
return x_193;
}
}
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_226 = lean_ctor_get(x_193, 0);
x_227 = lean_ctor_get(x_193, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_193);
lean_inc(x_226);
x_228 = l_Lean_mkMVar(x_226);
lean_inc(x_47);
x_229 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_185, x_55, x_185, x_50, x_228);
x_230 = lean_box(x_55);
if (lean_obj_tag(x_230) == 2)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_43);
x_231 = lean_ctor_get(x_227, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_227, 1);
lean_inc(x_232);
x_233 = lean_ctor_get(x_227, 2);
lean_inc(x_233);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 lean_ctor_release(x_227, 2);
 x_234 = x_227;
} else {
 lean_dec_ref(x_227);
 x_234 = lean_box(0);
}
x_235 = l_Array_empty___closed__1;
x_236 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_235, x_235, x_50, x_185);
x_237 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_235, x_235, x_50, x_3);
x_238 = lean_metavar_ctx_assign_delayed(x_231, x_226, x_47, x_236, x_237);
if (lean_is_scalar(x_234)) {
 x_239 = lean_alloc_ctor(0, 3, 0);
} else {
 x_239 = x_234;
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_232);
lean_ctor_set(x_239, 2, x_233);
x_240 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_229);
lean_dec(x_181);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_239);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_230);
lean_dec(x_226);
lean_dec(x_185);
lean_dec(x_47);
lean_dec(x_3);
x_242 = lean_ctor_get(x_227, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_227, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_227, 2);
lean_inc(x_244);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 lean_ctor_release(x_227, 2);
 x_245 = x_227;
} else {
 lean_dec_ref(x_227);
 x_245 = lean_box(0);
}
lean_inc(x_229);
x_246 = l_Lean_MetavarContext_assignExpr(x_242, x_43, x_229);
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(0, 3, 0);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_243);
lean_ctor_set(x_247, 2, x_244);
x_248 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_181, x_181, x_50, x_229);
lean_dec(x_181);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_188);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_181);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_250 = !lean_is_exclusive(x_190);
if (x_250 == 0)
{
return x_190;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_190, 0);
x_252 = lean_ctor_get(x_190, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_190);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_179, 0);
x_255 = lean_ctor_get(x_179, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_179);
lean_inc(x_47);
x_256 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; lean_object* x_258; 
lean_dec(x_254);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
lean_dec(x_256);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_255);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_259 = lean_ctor_get(x_256, 0);
lean_inc(x_259);
lean_dec(x_256);
lean_inc(x_47);
x_260 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_259);
x_261 = lean_ctor_get(x_46, 4);
lean_inc(x_261);
x_262 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7(x_259, x_261, x_50, x_50);
x_263 = lean_ctor_get(x_46, 2);
lean_inc(x_263);
lean_dec(x_46);
lean_inc(x_47);
x_264 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_259, x_55, x_263, x_255);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_260, x_262, x_265, x_55, x_266);
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_270 = x_267;
} else {
 lean_dec_ref(x_267);
 x_270 = lean_box(0);
}
lean_inc(x_268);
x_271 = l_Lean_mkMVar(x_268);
lean_inc(x_47);
x_272 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_259, x_55, x_259, x_50, x_271);
x_273 = lean_box(x_55);
if (lean_obj_tag(x_273) == 2)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_43);
x_274 = lean_ctor_get(x_269, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_269, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_269, 2);
lean_inc(x_276);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 lean_ctor_release(x_269, 2);
 x_277 = x_269;
} else {
 lean_dec_ref(x_269);
 x_277 = lean_box(0);
}
x_278 = l_Array_empty___closed__1;
x_279 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_278, x_278, x_50, x_259);
x_280 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_278, x_278, x_50, x_3);
x_281 = lean_metavar_ctx_assign_delayed(x_274, x_268, x_47, x_279, x_280);
if (lean_is_scalar(x_277)) {
 x_282 = lean_alloc_ctor(0, 3, 0);
} else {
 x_282 = x_277;
}
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_275);
lean_ctor_set(x_282, 2, x_276);
x_283 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_254, x_254, x_50, x_272);
lean_dec(x_254);
if (lean_is_scalar(x_270)) {
 x_284 = lean_alloc_ctor(0, 2, 0);
} else {
 x_284 = x_270;
}
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_282);
return x_284;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_273);
lean_dec(x_268);
lean_dec(x_259);
lean_dec(x_47);
lean_dec(x_3);
x_285 = lean_ctor_get(x_269, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_269, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_269, 2);
lean_inc(x_287);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 lean_ctor_release(x_269, 2);
 x_288 = x_269;
} else {
 lean_dec_ref(x_269);
 x_288 = lean_box(0);
}
lean_inc(x_272);
x_289 = l_Lean_MetavarContext_assignExpr(x_285, x_43, x_272);
if (lean_is_scalar(x_288)) {
 x_290 = lean_alloc_ctor(0, 3, 0);
} else {
 x_290 = x_288;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_286);
lean_ctor_set(x_290, 2, x_287);
x_291 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_254, x_254, x_50, x_272);
lean_dec(x_254);
if (lean_is_scalar(x_270)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_270;
}
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_290);
return x_292;
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_262);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_254);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_293 = lean_ctor_get(x_264, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_264, 1);
lean_inc(x_294);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_295 = x_264;
} else {
 lean_dec_ref(x_264);
 x_295 = lean_box(0);
}
if (lean_is_scalar(x_295)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_295;
}
lean_ctor_set(x_296, 0, x_293);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
}
}
}
else
{
uint8_t x_297; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_297 = !lean_is_exclusive(x_179);
if (x_297 == 0)
{
return x_179;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_179, 0);
x_299 = lean_ctor_get(x_179, 1);
lean_inc(x_299);
lean_inc(x_298);
lean_dec(x_179);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_298);
lean_ctor_set(x_300, 1, x_299);
return x_300;
}
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_301 = lean_ctor_get(x_178, 0);
lean_inc(x_301);
lean_dec(x_178);
x_302 = lean_ctor_get(x_301, 1);
lean_inc(x_302);
lean_dec(x_301);
lean_inc(x_1);
x_303 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__8(x_1, x_50, x_4, x_5);
if (lean_obj_tag(x_303) == 0)
{
uint8_t x_304; 
x_304 = !lean_is_exclusive(x_303);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_305 = lean_ctor_get(x_303, 0);
x_306 = lean_ctor_get(x_303, 1);
lean_inc(x_47);
x_307 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_307) == 0)
{
lean_object* x_308; 
lean_dec(x_305);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_308 = lean_ctor_get(x_307, 0);
lean_inc(x_308);
lean_dec(x_307);
lean_ctor_set_tag(x_303, 1);
lean_ctor_set(x_303, 0, x_308);
return x_303;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
lean_free_object(x_303);
x_309 = lean_ctor_get(x_307, 0);
lean_inc(x_309);
lean_dec(x_307);
lean_inc(x_47);
x_310 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_309);
x_311 = lean_ctor_get(x_46, 4);
lean_inc(x_311);
x_312 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10(x_309, x_311, x_50, x_50);
x_313 = lean_ctor_get(x_46, 2);
lean_inc(x_313);
lean_dec(x_46);
lean_inc(x_47);
x_314 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_309, x_55, x_313, x_306);
if (lean_obj_tag(x_314) == 0)
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; uint8_t x_318; 
x_315 = lean_ctor_get(x_314, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_314, 1);
lean_inc(x_316);
lean_dec(x_314);
x_317 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_310, x_312, x_315, x_55, x_316);
x_318 = !lean_is_exclusive(x_317);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_319 = lean_ctor_get(x_317, 0);
x_320 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
x_321 = l_Lean_mkMVar(x_319);
lean_inc(x_47);
x_322 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_309, x_55, x_309, x_50, x_321);
x_323 = lean_box(x_55);
if (lean_obj_tag(x_323) == 2)
{
uint8_t x_324; 
lean_dec(x_43);
x_324 = !lean_is_exclusive(x_320);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_325 = lean_ctor_get(x_320, 0);
x_326 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_302, x_302, x_50, x_309);
x_327 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_302, x_302, x_50, x_3);
lean_dec(x_302);
x_328 = lean_metavar_ctx_assign_delayed(x_325, x_319, x_47, x_326, x_327);
lean_ctor_set(x_320, 0, x_328);
x_329 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_322);
lean_dec(x_305);
lean_ctor_set(x_317, 0, x_329);
return x_317;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_330 = lean_ctor_get(x_320, 0);
x_331 = lean_ctor_get(x_320, 1);
x_332 = lean_ctor_get(x_320, 2);
lean_inc(x_332);
lean_inc(x_331);
lean_inc(x_330);
lean_dec(x_320);
x_333 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_302, x_302, x_50, x_309);
x_334 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_302, x_302, x_50, x_3);
lean_dec(x_302);
x_335 = lean_metavar_ctx_assign_delayed(x_330, x_319, x_47, x_333, x_334);
x_336 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_331);
lean_ctor_set(x_336, 2, x_332);
x_337 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_322);
lean_dec(x_305);
lean_ctor_set(x_317, 1, x_336);
lean_ctor_set(x_317, 0, x_337);
return x_317;
}
}
else
{
uint8_t x_338; 
lean_dec(x_323);
lean_dec(x_319);
lean_dec(x_309);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_3);
x_338 = !lean_is_exclusive(x_320);
if (x_338 == 0)
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_339 = lean_ctor_get(x_320, 0);
lean_inc(x_322);
x_340 = l_Lean_MetavarContext_assignExpr(x_339, x_43, x_322);
lean_ctor_set(x_320, 0, x_340);
x_341 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_322);
lean_dec(x_305);
lean_ctor_set(x_317, 0, x_341);
return x_317;
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_342 = lean_ctor_get(x_320, 0);
x_343 = lean_ctor_get(x_320, 1);
x_344 = lean_ctor_get(x_320, 2);
lean_inc(x_344);
lean_inc(x_343);
lean_inc(x_342);
lean_dec(x_320);
lean_inc(x_322);
x_345 = l_Lean_MetavarContext_assignExpr(x_342, x_43, x_322);
x_346 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_343);
lean_ctor_set(x_346, 2, x_344);
x_347 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_322);
lean_dec(x_305);
lean_ctor_set(x_317, 1, x_346);
lean_ctor_set(x_317, 0, x_347);
return x_317;
}
}
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_348 = lean_ctor_get(x_317, 0);
x_349 = lean_ctor_get(x_317, 1);
lean_inc(x_349);
lean_inc(x_348);
lean_dec(x_317);
lean_inc(x_348);
x_350 = l_Lean_mkMVar(x_348);
lean_inc(x_47);
x_351 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_309, x_55, x_309, x_50, x_350);
x_352 = lean_box(x_55);
if (lean_obj_tag(x_352) == 2)
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_43);
x_353 = lean_ctor_get(x_349, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_349, 1);
lean_inc(x_354);
x_355 = lean_ctor_get(x_349, 2);
lean_inc(x_355);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 lean_ctor_release(x_349, 2);
 x_356 = x_349;
} else {
 lean_dec_ref(x_349);
 x_356 = lean_box(0);
}
x_357 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_302, x_302, x_50, x_309);
x_358 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_302, x_302, x_50, x_3);
lean_dec(x_302);
x_359 = lean_metavar_ctx_assign_delayed(x_353, x_348, x_47, x_357, x_358);
if (lean_is_scalar(x_356)) {
 x_360 = lean_alloc_ctor(0, 3, 0);
} else {
 x_360 = x_356;
}
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_354);
lean_ctor_set(x_360, 2, x_355);
x_361 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_351);
lean_dec(x_305);
x_362 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_362, 0, x_361);
lean_ctor_set(x_362, 1, x_360);
return x_362;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_352);
lean_dec(x_348);
lean_dec(x_309);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_3);
x_363 = lean_ctor_get(x_349, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_349, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_349, 2);
lean_inc(x_365);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 lean_ctor_release(x_349, 2);
 x_366 = x_349;
} else {
 lean_dec_ref(x_349);
 x_366 = lean_box(0);
}
lean_inc(x_351);
x_367 = l_Lean_MetavarContext_assignExpr(x_363, x_43, x_351);
if (lean_is_scalar(x_366)) {
 x_368 = lean_alloc_ctor(0, 3, 0);
} else {
 x_368 = x_366;
}
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_364);
lean_ctor_set(x_368, 2, x_365);
x_369 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_305, x_305, x_50, x_351);
lean_dec(x_305);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_368);
return x_370;
}
}
}
else
{
uint8_t x_371; 
lean_dec(x_312);
lean_dec(x_310);
lean_dec(x_309);
lean_dec(x_305);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_371 = !lean_is_exclusive(x_314);
if (x_371 == 0)
{
return x_314;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_372 = lean_ctor_get(x_314, 0);
x_373 = lean_ctor_get(x_314, 1);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_314);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set(x_374, 1, x_373);
return x_374;
}
}
}
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_375 = lean_ctor_get(x_303, 0);
x_376 = lean_ctor_get(x_303, 1);
lean_inc(x_376);
lean_inc(x_375);
lean_dec(x_303);
lean_inc(x_47);
x_377 = l___private_Init_Lean_MetavarContext_10__collectDeps(x_44, x_47, x_48);
if (lean_obj_tag(x_377) == 0)
{
lean_object* x_378; lean_object* x_379; 
lean_dec(x_375);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
lean_dec(x_377);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_378);
lean_ctor_set(x_379, 1, x_376);
return x_379;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_380 = lean_ctor_get(x_377, 0);
lean_inc(x_380);
lean_dec(x_377);
lean_inc(x_47);
x_381 = l___private_Init_Lean_MetavarContext_11__reduceLocalContext(x_47, x_380);
x_382 = lean_ctor_get(x_46, 4);
lean_inc(x_382);
x_383 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10(x_380, x_382, x_50, x_50);
x_384 = lean_ctor_get(x_46, 2);
lean_inc(x_384);
lean_dec(x_46);
lean_inc(x_47);
x_385 = l___private_Init_Lean_MetavarContext_17__mkAuxMVarType(x_1, x_47, x_380, x_55, x_384, x_376);
if (lean_obj_tag(x_385) == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_386 = lean_ctor_get(x_385, 0);
lean_inc(x_386);
x_387 = lean_ctor_get(x_385, 1);
lean_inc(x_387);
lean_dec(x_385);
x_388 = l___private_Init_Lean_MetavarContext_19__mkAuxMVar(x_381, x_383, x_386, x_55, x_387);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
if (lean_is_exclusive(x_388)) {
 lean_ctor_release(x_388, 0);
 lean_ctor_release(x_388, 1);
 x_391 = x_388;
} else {
 lean_dec_ref(x_388);
 x_391 = lean_box(0);
}
lean_inc(x_389);
x_392 = l_Lean_mkMVar(x_389);
lean_inc(x_47);
x_393 = l_Array_iterateMAux___main___at___private_Init_Lean_MetavarContext_18__mkMVarApp___spec__1(x_47, x_380, x_55, x_380, x_50, x_392);
x_394 = lean_box(x_55);
if (lean_obj_tag(x_394) == 2)
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_43);
x_395 = lean_ctor_get(x_390, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_390, 1);
lean_inc(x_396);
x_397 = lean_ctor_get(x_390, 2);
lean_inc(x_397);
if (lean_is_exclusive(x_390)) {
 lean_ctor_release(x_390, 0);
 lean_ctor_release(x_390, 1);
 lean_ctor_release(x_390, 2);
 x_398 = x_390;
} else {
 lean_dec_ref(x_390);
 x_398 = lean_box(0);
}
x_399 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_302, x_302, x_50, x_380);
x_400 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_302, x_302, x_50, x_3);
lean_dec(x_302);
x_401 = lean_metavar_ctx_assign_delayed(x_395, x_389, x_47, x_399, x_400);
if (lean_is_scalar(x_398)) {
 x_402 = lean_alloc_ctor(0, 3, 0);
} else {
 x_402 = x_398;
}
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_396);
lean_ctor_set(x_402, 2, x_397);
x_403 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_375, x_375, x_50, x_393);
lean_dec(x_375);
if (lean_is_scalar(x_391)) {
 x_404 = lean_alloc_ctor(0, 2, 0);
} else {
 x_404 = x_391;
}
lean_ctor_set(x_404, 0, x_403);
lean_ctor_set(x_404, 1, x_402);
return x_404;
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
lean_dec(x_394);
lean_dec(x_389);
lean_dec(x_380);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_3);
x_405 = lean_ctor_get(x_390, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_390, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_390, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_390)) {
 lean_ctor_release(x_390, 0);
 lean_ctor_release(x_390, 1);
 lean_ctor_release(x_390, 2);
 x_408 = x_390;
} else {
 lean_dec_ref(x_390);
 x_408 = lean_box(0);
}
lean_inc(x_393);
x_409 = l_Lean_MetavarContext_assignExpr(x_405, x_43, x_393);
if (lean_is_scalar(x_408)) {
 x_410 = lean_alloc_ctor(0, 3, 0);
} else {
 x_410 = x_408;
}
lean_ctor_set(x_410, 0, x_409);
lean_ctor_set(x_410, 1, x_406);
lean_ctor_set(x_410, 2, x_407);
x_411 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_375, x_375, x_50, x_393);
lean_dec(x_375);
if (lean_is_scalar(x_391)) {
 x_412 = lean_alloc_ctor(0, 2, 0);
} else {
 x_412 = x_391;
}
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_410);
return x_412;
}
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; 
lean_dec(x_383);
lean_dec(x_381);
lean_dec(x_380);
lean_dec(x_375);
lean_dec(x_302);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_3);
x_413 = lean_ctor_get(x_385, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_385, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_385)) {
 lean_ctor_release(x_385, 0);
 lean_ctor_release(x_385, 1);
 x_415 = x_385;
} else {
 lean_dec_ref(x_385);
 x_415 = lean_box(0);
}
if (lean_is_scalar(x_415)) {
 x_416 = lean_alloc_ctor(1, 2, 0);
} else {
 x_416 = x_415;
}
lean_ctor_set(x_416, 0, x_413);
lean_ctor_set(x_416, 1, x_414);
return x_416;
}
}
}
}
else
{
uint8_t x_417; 
lean_dec(x_302);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_3);
lean_dec(x_1);
x_417 = !lean_is_exclusive(x_303);
if (x_417 == 0)
{
return x_303;
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_418 = lean_ctor_get(x_303, 0);
x_419 = lean_ctor_get(x_303, 1);
lean_inc(x_419);
lean_inc(x_418);
lean_dec(x_303);
x_420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_420, 0, x_418);
lean_ctor_set(x_420, 1, x_419);
return x_420;
}
}
}
}
}
}
else
{
uint8_t x_423; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_43);
x_423 = l_Lean_Expr_isLambda(x_3);
if (x_423 == 0)
{
uint8_t x_424; 
x_424 = lean_expr_eqv(x_3, x_3);
if (x_424 == 0)
{
goto _start;
}
else
{
lean_object* x_426; 
x_426 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__11(x_1, x_50, x_4, x_5);
if (lean_obj_tag(x_426) == 0)
{
uint8_t x_427; 
x_427 = !lean_is_exclusive(x_426);
if (x_427 == 0)
{
lean_object* x_428; lean_object* x_429; 
x_428 = lean_ctor_get(x_426, 0);
x_429 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_428, x_428, x_50, x_3);
lean_dec(x_428);
lean_ctor_set(x_426, 0, x_429);
return x_426;
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_430 = lean_ctor_get(x_426, 0);
x_431 = lean_ctor_get(x_426, 1);
lean_inc(x_431);
lean_inc(x_430);
lean_dec(x_426);
x_432 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_430, x_430, x_50, x_3);
lean_dec(x_430);
x_433 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_431);
return x_433;
}
}
else
{
uint8_t x_434; 
lean_dec(x_3);
x_434 = !lean_is_exclusive(x_426);
if (x_434 == 0)
{
return x_426;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = lean_ctor_get(x_426, 0);
x_436 = lean_ctor_get(x_426, 1);
lean_inc(x_436);
lean_inc(x_435);
lean_dec(x_426);
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_436);
return x_437;
}
}
}
}
else
{
lean_object* x_438; 
x_438 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__12(x_1, x_50, x_4, x_5);
if (lean_obj_tag(x_438) == 0)
{
uint8_t x_439; 
x_439 = !lean_is_exclusive(x_438);
if (x_439 == 0)
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; 
x_440 = lean_ctor_get(x_438, 0);
x_441 = l_Array_reverseAux___main___rarg(x_440, x_50);
x_442 = l_Lean_Expr_betaRev(x_3, x_441);
lean_dec(x_441);
lean_dec(x_3);
lean_ctor_set(x_438, 0, x_442);
return x_438;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; 
x_443 = lean_ctor_get(x_438, 0);
x_444 = lean_ctor_get(x_438, 1);
lean_inc(x_444);
lean_inc(x_443);
lean_dec(x_438);
x_445 = l_Array_reverseAux___main___rarg(x_443, x_50);
x_446 = l_Lean_Expr_betaRev(x_3, x_445);
lean_dec(x_445);
lean_dec(x_3);
x_447 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_447, 0, x_446);
lean_ctor_set(x_447, 1, x_444);
return x_447;
}
}
else
{
uint8_t x_448; 
lean_dec(x_3);
x_448 = !lean_is_exclusive(x_438);
if (x_448 == 0)
{
return x_438;
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_449 = lean_ctor_get(x_438, 0);
x_450 = lean_ctor_get(x_438, 1);
lean_inc(x_450);
lean_inc(x_449);
lean_dec(x_438);
x_451 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_451, 0, x_449);
lean_ctor_set(x_451, 1, x_450);
return x_451;
}
}
}
}
}
else
{
lean_object* x_452; uint8_t x_453; 
lean_dec(x_44);
lean_dec(x_43);
x_452 = lean_ctor_get(x_45, 0);
lean_inc(x_452);
lean_dec(x_45);
x_453 = l_Lean_Expr_isLambda(x_452);
if (x_453 == 0)
{
uint8_t x_454; 
x_454 = lean_expr_eqv(x_452, x_3);
lean_dec(x_3);
if (x_454 == 0)
{
x_3 = x_452;
goto _start;
}
else
{
lean_object* x_456; lean_object* x_457; 
x_456 = lean_unsigned_to_nat(0u);
x_457 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__13(x_1, x_456, x_4, x_5);
if (lean_obj_tag(x_457) == 0)
{
uint8_t x_458; 
x_458 = !lean_is_exclusive(x_457);
if (x_458 == 0)
{
lean_object* x_459; lean_object* x_460; 
x_459 = lean_ctor_get(x_457, 0);
x_460 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_459, x_459, x_456, x_452);
lean_dec(x_459);
lean_ctor_set(x_457, 0, x_460);
return x_457;
}
else
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_461 = lean_ctor_get(x_457, 0);
x_462 = lean_ctor_get(x_457, 1);
lean_inc(x_462);
lean_inc(x_461);
lean_dec(x_457);
x_463 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_461, x_461, x_456, x_452);
lean_dec(x_461);
x_464 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_464, 0, x_463);
lean_ctor_set(x_464, 1, x_462);
return x_464;
}
}
else
{
uint8_t x_465; 
lean_dec(x_452);
x_465 = !lean_is_exclusive(x_457);
if (x_465 == 0)
{
return x_457;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_466 = lean_ctor_get(x_457, 0);
x_467 = lean_ctor_get(x_457, 1);
lean_inc(x_467);
lean_inc(x_466);
lean_dec(x_457);
x_468 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_468, 0, x_466);
lean_ctor_set(x_468, 1, x_467);
return x_468;
}
}
}
}
else
{
lean_object* x_469; lean_object* x_470; 
lean_dec(x_3);
x_469 = lean_unsigned_to_nat(0u);
x_470 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__14(x_1, x_469, x_4, x_5);
if (lean_obj_tag(x_470) == 0)
{
uint8_t x_471; 
x_471 = !lean_is_exclusive(x_470);
if (x_471 == 0)
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_470, 0);
x_473 = l_Array_reverseAux___main___rarg(x_472, x_469);
x_474 = l_Lean_Expr_betaRev(x_452, x_473);
lean_dec(x_473);
lean_dec(x_452);
lean_ctor_set(x_470, 0, x_474);
return x_470;
}
else
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_475 = lean_ctor_get(x_470, 0);
x_476 = lean_ctor_get(x_470, 1);
lean_inc(x_476);
lean_inc(x_475);
lean_dec(x_470);
x_477 = l_Array_reverseAux___main___rarg(x_475, x_469);
x_478 = l_Lean_Expr_betaRev(x_452, x_477);
lean_dec(x_477);
lean_dec(x_452);
x_479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_479, 0, x_478);
lean_ctor_set(x_479, 1, x_476);
return x_479;
}
}
else
{
uint8_t x_480; 
lean_dec(x_452);
x_480 = !lean_is_exclusive(x_470);
if (x_480 == 0)
{
return x_470;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_481 = lean_ctor_get(x_470, 0);
x_482 = lean_ctor_get(x_470, 1);
lean_inc(x_482);
lean_inc(x_481);
lean_dec(x_470);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
return x_483;
}
}
}
}
}
else
{
lean_object* x_484; 
x_484 = lean_box(0);
x_6 = x_484;
goto block_42;
}
block_42:
{
lean_object* x_7; lean_object* x_8; uint8_t x_23; 
lean_dec(x_6);
x_23 = l_Lean_Expr_hasMVar(x_3);
if (x_23 == 0)
{
x_7 = x_3;
x_8 = x_5;
goto block_22;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_5, 2);
lean_inc(x_24);
x_25 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_24, x_3);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_inc(x_1);
lean_inc(x_3);
x_26 = lean_apply_2(x_1, x_3, x_5);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 2);
lean_inc(x_28);
x_31 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_30, x_3, x_28);
lean_ctor_set(x_27, 2, x_31);
x_7 = x_28;
x_8 = x_27;
goto block_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
x_34 = lean_ctor_get(x_27, 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
lean_inc(x_28);
x_35 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_34, x_3, x_28);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_35);
x_7 = x_28;
x_8 = x_36;
goto block_22;
}
}
else
{
uint8_t x_37; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_26);
if (x_37 == 0)
{
return x_26;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_26, 0);
x_39 = lean_ctor_get(x_26, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_26);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_3);
x_41 = lean_ctor_get(x_25, 0);
lean_inc(x_41);
lean_dec(x_25);
x_7 = x_41;
x_8 = x_5;
goto block_22;
}
}
block_22:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_umapMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__1(x_1, x_9, x_4, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_12, x_12, x_9, x_7);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_14, x_14, x_9, x_7);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__9(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_filterAux___main___at___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Expr_withAppAux___main___at___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_array_set(x_3, x_4, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_2 = x_6;
x_3 = x_8;
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(x_12, x_1, x_2, x_3, x_5);
lean_dec(x_1);
return x_13;
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_13; lean_object* x_14; 
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main), 3, 1);
lean_closure_set(x_22, 0, x_1);
x_23 = l_Array_empty___closed__1;
x_24 = l___private_Init_Lean_MetavarContext_21__elimMVarDepsApp___main(x_22, x_1, x_2, x_23, x_3);
lean_dec(x_1);
return x_24;
}
case 5:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_25);
x_27 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_26);
x_28 = lean_mk_array(x_26, x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_26, x_29);
lean_dec(x_26);
x_31 = l_Lean_Expr_withAppAux___main___at___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main___spec__1(x_1, x_2, x_28, x_30, x_3);
return x_31;
}
case 6:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_67; 
x_32 = lean_ctor_get(x_2, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 2);
lean_inc(x_33);
x_67 = l_Lean_Expr_hasMVar(x_32);
if (x_67 == 0)
{
x_34 = x_32;
x_35 = x_3;
goto block_66;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_3, 2);
lean_inc(x_68);
x_69 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_68, x_32);
lean_dec(x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
lean_inc(x_32);
lean_inc(x_1);
x_70 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_32, x_3);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
lean_dec(x_70);
x_73 = !lean_is_exclusive(x_71);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_71, 2);
lean_inc(x_72);
x_75 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_74, x_32, x_72);
lean_ctor_set(x_71, 2, x_75);
x_34 = x_72;
x_35 = x_71;
goto block_66;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_71, 0);
x_77 = lean_ctor_get(x_71, 1);
x_78 = lean_ctor_get(x_71, 2);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_71);
lean_inc(x_72);
x_79 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_78, x_32, x_72);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_76);
lean_ctor_set(x_80, 1, x_77);
lean_ctor_set(x_80, 2, x_79);
x_34 = x_72;
x_35 = x_80;
goto block_66;
}
}
else
{
uint8_t x_81; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_70);
if (x_81 == 0)
{
return x_70;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_70, 0);
x_83 = lean_ctor_get(x_70, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_70);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; 
lean_dec(x_32);
x_85 = lean_ctor_get(x_69, 0);
lean_inc(x_85);
lean_dec(x_69);
x_34 = x_85;
x_35 = x_3;
goto block_66;
}
}
block_66:
{
lean_object* x_36; lean_object* x_37; uint8_t x_47; 
x_47 = l_Lean_Expr_hasMVar(x_33);
if (x_47 == 0)
{
lean_dec(x_1);
x_36 = x_33;
x_37 = x_35;
goto block_46;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_35, 2);
lean_inc(x_48);
x_49 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_48, x_33);
lean_dec(x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
lean_inc(x_33);
x_50 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_33, x_35);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 2);
lean_inc(x_52);
x_55 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_54, x_33, x_52);
lean_ctor_set(x_51, 2, x_55);
x_36 = x_52;
x_37 = x_51;
goto block_46;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_51, 0);
x_57 = lean_ctor_get(x_51, 1);
x_58 = lean_ctor_get(x_51, 2);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_51);
lean_inc(x_52);
x_59 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_58, x_33, x_52);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_57);
lean_ctor_set(x_60, 2, x_59);
x_36 = x_52;
x_37 = x_60;
goto block_46;
}
}
else
{
uint8_t x_61; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_50);
if (x_61 == 0)
{
return x_50;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_50, 0);
x_63 = lean_ctor_get(x_50, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_50);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; 
lean_dec(x_33);
lean_dec(x_1);
x_65 = lean_ctor_get(x_49, 0);
lean_inc(x_65);
lean_dec(x_49);
x_36 = x_65;
x_37 = x_35;
goto block_46;
}
}
block_46:
{
if (lean_obj_tag(x_2) == 6)
{
uint64_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
x_39 = (uint8_t)((x_38 << 24) >> 61);
x_40 = lean_expr_update_lambda(x_2, x_39, x_34, x_36);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_2);
x_42 = l_Lean_Expr_Inhabited;
x_43 = l_Lean_Expr_updateLambdaE_x21___closed__1;
x_44 = lean_panic_fn(x_42, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_37);
return x_45;
}
}
}
}
case 7:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_121; 
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_87);
x_121 = l_Lean_Expr_hasMVar(x_86);
if (x_121 == 0)
{
x_88 = x_86;
x_89 = x_3;
goto block_120;
}
else
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_3, 2);
lean_inc(x_122);
x_123 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_122, x_86);
lean_dec(x_122);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; 
lean_inc(x_86);
lean_inc(x_1);
x_124 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_86, x_3);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
x_127 = !lean_is_exclusive(x_125);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_125, 2);
lean_inc(x_126);
x_129 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_128, x_86, x_126);
lean_ctor_set(x_125, 2, x_129);
x_88 = x_126;
x_89 = x_125;
goto block_120;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_125, 0);
x_131 = lean_ctor_get(x_125, 1);
x_132 = lean_ctor_get(x_125, 2);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_125);
lean_inc(x_126);
x_133 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_132, x_86, x_126);
x_134 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_134, 0, x_130);
lean_ctor_set(x_134, 1, x_131);
lean_ctor_set(x_134, 2, x_133);
x_88 = x_126;
x_89 = x_134;
goto block_120;
}
}
else
{
uint8_t x_135; 
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_2);
lean_dec(x_1);
x_135 = !lean_is_exclusive(x_124);
if (x_135 == 0)
{
return x_124;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_124, 0);
x_137 = lean_ctor_get(x_124, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_124);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
lean_object* x_139; 
lean_dec(x_86);
x_139 = lean_ctor_get(x_123, 0);
lean_inc(x_139);
lean_dec(x_123);
x_88 = x_139;
x_89 = x_3;
goto block_120;
}
}
block_120:
{
lean_object* x_90; lean_object* x_91; uint8_t x_101; 
x_101 = l_Lean_Expr_hasMVar(x_87);
if (x_101 == 0)
{
lean_dec(x_1);
x_90 = x_87;
x_91 = x_89;
goto block_100;
}
else
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_89, 2);
lean_inc(x_102);
x_103 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_102, x_87);
lean_dec(x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; 
lean_inc(x_87);
x_104 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_87, x_89);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
lean_dec(x_104);
x_107 = !lean_is_exclusive(x_105);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_105, 2);
lean_inc(x_106);
x_109 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_108, x_87, x_106);
lean_ctor_set(x_105, 2, x_109);
x_90 = x_106;
x_91 = x_105;
goto block_100;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_110 = lean_ctor_get(x_105, 0);
x_111 = lean_ctor_get(x_105, 1);
x_112 = lean_ctor_get(x_105, 2);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_105);
lean_inc(x_106);
x_113 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_112, x_87, x_106);
x_114 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_114, 0, x_110);
lean_ctor_set(x_114, 1, x_111);
lean_ctor_set(x_114, 2, x_113);
x_90 = x_106;
x_91 = x_114;
goto block_100;
}
}
else
{
uint8_t x_115; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_104);
if (x_115 == 0)
{
return x_104;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_104, 0);
x_117 = lean_ctor_get(x_104, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_104);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; 
lean_dec(x_87);
lean_dec(x_1);
x_119 = lean_ctor_get(x_103, 0);
lean_inc(x_119);
lean_dec(x_103);
x_90 = x_119;
x_91 = x_89;
goto block_100;
}
}
block_100:
{
if (lean_obj_tag(x_2) == 7)
{
uint64_t x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
x_93 = (uint8_t)((x_92 << 24) >> 61);
x_94 = lean_expr_update_forall(x_2, x_93, x_88, x_90);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_91);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_90);
lean_dec(x_88);
lean_dec(x_2);
x_96 = l_Lean_Expr_Inhabited;
x_97 = l_Lean_Expr_updateForallE_x21___closed__1;
x_98 = lean_panic_fn(x_96, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_91);
return x_99;
}
}
}
}
case 8:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_196; 
x_140 = lean_ctor_get(x_2, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_2, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_2, 3);
lean_inc(x_142);
x_196 = l_Lean_Expr_hasMVar(x_140);
if (x_196 == 0)
{
x_143 = x_140;
x_144 = x_3;
goto block_195;
}
else
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_3, 2);
lean_inc(x_197);
x_198 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_197, x_140);
lean_dec(x_197);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; 
lean_inc(x_140);
lean_inc(x_1);
x_199 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_140, x_3);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_200 = lean_ctor_get(x_199, 1);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
lean_dec(x_199);
x_202 = !lean_is_exclusive(x_200);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; 
x_203 = lean_ctor_get(x_200, 2);
lean_inc(x_201);
x_204 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_203, x_140, x_201);
lean_ctor_set(x_200, 2, x_204);
x_143 = x_201;
x_144 = x_200;
goto block_195;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_205 = lean_ctor_get(x_200, 0);
x_206 = lean_ctor_get(x_200, 1);
x_207 = lean_ctor_get(x_200, 2);
lean_inc(x_207);
lean_inc(x_206);
lean_inc(x_205);
lean_dec(x_200);
lean_inc(x_201);
x_208 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_207, x_140, x_201);
x_209 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_209, 0, x_205);
lean_ctor_set(x_209, 1, x_206);
lean_ctor_set(x_209, 2, x_208);
x_143 = x_201;
x_144 = x_209;
goto block_195;
}
}
else
{
uint8_t x_210; 
lean_dec(x_142);
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_2);
lean_dec(x_1);
x_210 = !lean_is_exclusive(x_199);
if (x_210 == 0)
{
return x_199;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_199, 0);
x_212 = lean_ctor_get(x_199, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_199);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
else
{
lean_object* x_214; 
lean_dec(x_140);
x_214 = lean_ctor_get(x_198, 0);
lean_inc(x_214);
lean_dec(x_198);
x_143 = x_214;
x_144 = x_3;
goto block_195;
}
}
block_195:
{
lean_object* x_145; lean_object* x_146; uint8_t x_176; 
x_176 = l_Lean_Expr_hasMVar(x_141);
if (x_176 == 0)
{
x_145 = x_141;
x_146 = x_144;
goto block_175;
}
else
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_144, 2);
lean_inc(x_177);
x_178 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_177, x_141);
lean_dec(x_177);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; 
lean_inc(x_141);
lean_inc(x_1);
x_179 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_141, x_144);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 0);
lean_inc(x_181);
lean_dec(x_179);
x_182 = !lean_is_exclusive(x_180);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_180, 2);
lean_inc(x_181);
x_184 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_183, x_141, x_181);
lean_ctor_set(x_180, 2, x_184);
x_145 = x_181;
x_146 = x_180;
goto block_175;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_185 = lean_ctor_get(x_180, 0);
x_186 = lean_ctor_get(x_180, 1);
x_187 = lean_ctor_get(x_180, 2);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_180);
lean_inc(x_181);
x_188 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_187, x_141, x_181);
x_189 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_188);
x_145 = x_181;
x_146 = x_189;
goto block_175;
}
}
else
{
uint8_t x_190; 
lean_dec(x_143);
lean_dec(x_142);
lean_dec(x_141);
lean_dec(x_2);
lean_dec(x_1);
x_190 = !lean_is_exclusive(x_179);
if (x_190 == 0)
{
return x_179;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_179, 0);
x_192 = lean_ctor_get(x_179, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_179);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
else
{
lean_object* x_194; 
lean_dec(x_141);
x_194 = lean_ctor_get(x_178, 0);
lean_inc(x_194);
lean_dec(x_178);
x_145 = x_194;
x_146 = x_144;
goto block_175;
}
}
block_175:
{
lean_object* x_147; lean_object* x_148; uint8_t x_156; 
x_156 = l_Lean_Expr_hasMVar(x_142);
if (x_156 == 0)
{
lean_dec(x_1);
x_147 = x_142;
x_148 = x_146;
goto block_155;
}
else
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_146, 2);
lean_inc(x_157);
x_158 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_157, x_142);
lean_dec(x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; 
lean_inc(x_142);
x_159 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_142, x_146);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 0);
lean_inc(x_161);
lean_dec(x_159);
x_162 = !lean_is_exclusive(x_160);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_ctor_get(x_160, 2);
lean_inc(x_161);
x_164 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_163, x_142, x_161);
lean_ctor_set(x_160, 2, x_164);
x_147 = x_161;
x_148 = x_160;
goto block_155;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_165 = lean_ctor_get(x_160, 0);
x_166 = lean_ctor_get(x_160, 1);
x_167 = lean_ctor_get(x_160, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_160);
lean_inc(x_161);
x_168 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_167, x_142, x_161);
x_169 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_169, 0, x_165);
lean_ctor_set(x_169, 1, x_166);
lean_ctor_set(x_169, 2, x_168);
x_147 = x_161;
x_148 = x_169;
goto block_155;
}
}
else
{
uint8_t x_170; 
lean_dec(x_145);
lean_dec(x_143);
lean_dec(x_142);
lean_dec(x_2);
x_170 = !lean_is_exclusive(x_159);
if (x_170 == 0)
{
return x_159;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_159, 0);
x_172 = lean_ctor_get(x_159, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_159);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
lean_object* x_174; 
lean_dec(x_142);
lean_dec(x_1);
x_174 = lean_ctor_get(x_158, 0);
lean_inc(x_174);
lean_dec(x_158);
x_147 = x_174;
x_148 = x_146;
goto block_155;
}
}
block_155:
{
if (lean_obj_tag(x_2) == 8)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_expr_update_let(x_2, x_143, x_145, x_147);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_143);
lean_dec(x_2);
x_151 = l_Lean_Expr_Inhabited;
x_152 = l_Lean_Expr_updateLet_x21___closed__1;
x_153 = lean_panic_fn(x_151, x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_148);
return x_154;
}
}
}
}
}
case 10:
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_2, 1);
lean_inc(x_215);
x_216 = l_Lean_Expr_hasMVar(x_215);
if (x_216 == 0)
{
lean_dec(x_1);
x_4 = x_215;
x_5 = x_3;
goto block_12;
}
else
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_3, 2);
lean_inc(x_217);
x_218 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_217, x_215);
lean_dec(x_217);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; 
lean_inc(x_215);
x_219 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_215, x_3);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 0);
lean_inc(x_221);
lean_dec(x_219);
x_222 = !lean_is_exclusive(x_220);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; 
x_223 = lean_ctor_get(x_220, 2);
lean_inc(x_221);
x_224 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_223, x_215, x_221);
lean_ctor_set(x_220, 2, x_224);
x_4 = x_221;
x_5 = x_220;
goto block_12;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_225 = lean_ctor_get(x_220, 0);
x_226 = lean_ctor_get(x_220, 1);
x_227 = lean_ctor_get(x_220, 2);
lean_inc(x_227);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_220);
lean_inc(x_221);
x_228 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_227, x_215, x_221);
x_229 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_229, 0, x_225);
lean_ctor_set(x_229, 1, x_226);
lean_ctor_set(x_229, 2, x_228);
x_4 = x_221;
x_5 = x_229;
goto block_12;
}
}
else
{
uint8_t x_230; 
lean_dec(x_215);
lean_dec(x_2);
x_230 = !lean_is_exclusive(x_219);
if (x_230 == 0)
{
return x_219;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_219, 0);
x_232 = lean_ctor_get(x_219, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_219);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
else
{
lean_object* x_234; 
lean_dec(x_215);
lean_dec(x_1);
x_234 = lean_ctor_get(x_218, 0);
lean_inc(x_234);
lean_dec(x_218);
x_4 = x_234;
x_5 = x_3;
goto block_12;
}
}
}
case 11:
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_ctor_get(x_2, 2);
lean_inc(x_235);
x_236 = l_Lean_Expr_hasMVar(x_235);
if (x_236 == 0)
{
lean_dec(x_1);
x_13 = x_235;
x_14 = x_3;
goto block_21;
}
else
{
lean_object* x_237; lean_object* x_238; 
x_237 = lean_ctor_get(x_3, 2);
lean_inc(x_237);
x_238 = l_HashMapImp_find_x3f___at___private_Init_Lean_MetavarContext_2__visit___spec__1(x_237, x_235);
lean_dec(x_237);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; 
lean_inc(x_235);
x_239 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_235, x_3);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
lean_dec(x_239);
x_242 = !lean_is_exclusive(x_240);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; 
x_243 = lean_ctor_get(x_240, 2);
lean_inc(x_241);
x_244 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_243, x_235, x_241);
lean_ctor_set(x_240, 2, x_244);
x_13 = x_241;
x_14 = x_240;
goto block_21;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_245 = lean_ctor_get(x_240, 0);
x_246 = lean_ctor_get(x_240, 1);
x_247 = lean_ctor_get(x_240, 2);
lean_inc(x_247);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_240);
lean_inc(x_241);
x_248 = l_HashMapImp_insert___at___private_Init_Lean_MetavarContext_2__visit___spec__3(x_247, x_235, x_241);
x_249 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_249, 0, x_245);
lean_ctor_set(x_249, 1, x_246);
lean_ctor_set(x_249, 2, x_248);
x_13 = x_241;
x_14 = x_249;
goto block_21;
}
}
else
{
uint8_t x_250; 
lean_dec(x_235);
lean_dec(x_2);
x_250 = !lean_is_exclusive(x_239);
if (x_250 == 0)
{
return x_239;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_239, 0);
x_252 = lean_ctor_get(x_239, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_239);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
else
{
lean_object* x_254; 
lean_dec(x_235);
lean_dec(x_1);
x_254 = lean_ctor_get(x_238, 0);
lean_inc(x_254);
lean_dec(x_238);
x_13 = x_254;
x_14 = x_3;
goto block_21;
}
}
}
default: 
{
lean_object* x_255; 
lean_dec(x_1);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_2);
lean_ctor_set(x_255, 1, x_3);
return x_255;
}
}
block_12:
{
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_expr_update_mdata(x_2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = l_Lean_Expr_Inhabited;
x_9 = l_Lean_Expr_updateMData_x21___closed__2;
x_10 = lean_panic_fn(x_8, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
block_21:
{
if (lean_obj_tag(x_2) == 11)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_expr_update_proj(x_2, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_2);
x_17 = l_Lean_Expr_Inhabited;
x_18 = l_Lean_Expr_updateProj_x21___closed__2;
x_19 = lean_panic_fn(x_17, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_elimMVarDeps(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 2);
x_8 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_3, 2, x_8);
x_9 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 2);
lean_dec(x_13);
lean_ctor_set(x_11, 2, x_7);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_7);
lean_ctor_set(x_9, 1, x_16);
return x_9;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 lean_ctor_release(x_17, 2);
 x_21 = x_17;
} else {
 lean_dec_ref(x_17);
 x_21 = lean_box(0);
}
if (lean_is_scalar(x_21)) {
 x_22 = lean_alloc_ctor(0, 3, 0);
} else {
 x_22 = x_21;
}
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_22, 2, x_7);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_7);
x_24 = !lean_is_exclusive(x_9);
if (x_24 == 0)
{
return x_9;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 0);
x_26 = lean_ctor_get(x_9, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_9);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_3, 0);
x_29 = lean_ctor_get(x_3, 1);
x_30 = lean_ctor_get(x_3, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_3);
x_31 = l_HashMap_Inhabited___closed__1;
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 2, x_31);
x_33 = l___private_Init_Lean_MetavarContext_22__elimMVarDepsAux___main(x_1, x_2, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 lean_ctor_release(x_34, 2);
 x_39 = x_34;
} else {
 lean_dec_ref(x_34);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 3, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_30);
if (lean_is_scalar(x_36)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_36;
}
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_30);
x_42 = lean_ctor_get(x_33, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_44 = x_33;
} else {
 lean_dec_ref(x_33);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_23__abstractRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_expr_abstract_range(x_7, x_2, x_1);
lean_dec(x_1);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_expr_abstract_range(x_9, x_2, x_1);
lean_dec(x_1);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Init_Lean_MetavarContext_23__abstractRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_MetavarContext_23__abstractRange(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Expr_Inhabited;
x_8 = lean_array_get(x_7, x_1, x_4);
x_9 = l_Lean_LocalContext_getFVar_x21(x_2, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 3);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_9, sizeof(void*)*4);
lean_dec(x_9);
lean_inc(x_1);
x_13 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_1, x_11, x_6);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_expr_abstract_range(x_15, x_4, x_1);
lean_dec(x_1);
lean_dec(x_15);
if (x_3 == 0)
{
lean_object* x_17; 
x_17 = l_Lean_mkForall(x_10, x_12, x_16, x_5);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; 
x_18 = l_Lean_mkLambda(x_10, x_12, x_16, x_5);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_expr_abstract_range(x_19, x_4, x_1);
lean_dec(x_1);
lean_dec(x_19);
if (x_3 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_Lean_mkForall(x_10, x_12, x_21, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = l_Lean_mkLambda(x_10, x_12, x_21, x_5);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_9, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_9, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_9, 4);
lean_inc(x_32);
lean_dec(x_9);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_expr_has_loose_bvar(x_5, x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_1);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_5);
lean_ctor_set(x_35, 1, x_6);
return x_35;
}
else
{
lean_object* x_36; 
lean_inc(x_1);
x_36 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_1, x_31, x_6);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_expr_abstract_range(x_37, x_4, x_1);
lean_dec(x_37);
lean_inc(x_1);
x_40 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_1, x_32, x_38);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_expr_abstract_range(x_42, x_4, x_1);
lean_dec(x_1);
lean_dec(x_42);
x_44 = 0;
x_45 = l_Lean_mkLet(x_30, x_39, x_43, x_5, x_44);
lean_ctor_set(x_40, 0, x_45);
return x_40;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
x_48 = lean_expr_abstract_range(x_46, x_4, x_1);
lean_dec(x_1);
lean_dec(x_46);
x_49 = 0;
x_50 = l_Lean_mkLet(x_30, x_39, x_48, x_5, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_47);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_39);
lean_dec(x_30);
lean_dec(x_5);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_40);
if (x_52 == 0)
{
return x_40;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_40, 0);
x_54 = lean_ctor_get(x_40, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_40);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_5);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_36);
if (x_56 == 0)
{
return x_36;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_36, 0);
x_58 = lean_ctor_get(x_36, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_36);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
}
}
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_get_size(x_3);
lean_inc(x_3);
x_7 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_3, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_expr_abstract_range(x_8, x_6, x_3);
lean_dec(x_8);
x_11 = lean_box(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1___boxed), 6, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_11);
x_13 = l_EIO_Monad___closed__1;
x_14 = l_Nat_foldRevMAux___main___rarg(x_13, x_12, x_6, x_10);
lean_dec(x_6);
x_15 = lean_apply_1(x_14, x_9);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_MetavarContext_MkBinding_mkBinding___lambda__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_MetavarContext_MkBinding_mkBinding(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_MetavarContext_mkBinding(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_MetavarContext_MkBinding_mkBinding(x_1, x_4, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_mkBinding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_MetavarContext_mkBinding(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_MetavarContext_mkLambda(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 1;
x_6 = l_Lean_MetavarContext_MkBinding_mkBinding(x_5, x_3, x_1, x_2, x_4);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_mkForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 0;
x_6 = l_Lean_MetavarContext_MkBinding_mkBinding(x_5, x_3, x_1, x_2, x_4);
return x_6;
}
}
lean_object* l_Lean_MetavarContext_isWellFormed___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_LocalContext_contains(x_2, x_4);
lean_dec(x_4);
x_6 = lean_box(x_5);
return x_6;
}
case 2:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_MetavarContext_getDecl(x_1, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_LocalContext_isSubPrefixOf(x_9, x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_inc(x_1);
x_11 = lean_metavar_ctx_get_expr_assignment(x_1, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = 0;
x_13 = lean_box(x_12);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_3 = x_14;
goto _start;
}
}
else
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_1);
x_16 = 1;
x_17 = lean_box(x_16);
return x_17;
}
}
case 5:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
x_20 = l_Lean_Expr_hasExprMVar(x_3);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Expr_hasFVar(x_3);
lean_dec(x_3);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_1);
x_22 = 0;
x_23 = lean_box(x_22);
return x_23;
}
else
{
lean_object* x_24; uint8_t x_25; 
lean_inc(x_1);
x_24 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_18);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_19);
lean_dec(x_1);
x_26 = 0;
x_27 = lean_box(x_26);
return x_27;
}
else
{
x_3 = x_19;
goto _start;
}
}
}
else
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_3);
lean_inc(x_1);
x_29 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_18);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; 
lean_dec(x_19);
lean_dec(x_1);
x_31 = 0;
x_32 = lean_box(x_31);
return x_32;
}
else
{
x_3 = x_19;
goto _start;
}
}
}
case 6:
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_3, 2);
lean_inc(x_35);
x_36 = l_Lean_Expr_hasExprMVar(x_3);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Expr_hasFVar(x_3);
lean_dec(x_3);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_1);
x_38 = 0;
x_39 = lean_box(x_38);
return x_39;
}
else
{
lean_object* x_40; uint8_t x_41; 
lean_inc(x_1);
x_40 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_34);
x_41 = lean_unbox(x_40);
lean_dec(x_40);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; 
lean_dec(x_35);
lean_dec(x_1);
x_42 = 0;
x_43 = lean_box(x_42);
return x_43;
}
else
{
x_3 = x_35;
goto _start;
}
}
}
else
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_3);
lean_inc(x_1);
x_45 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_34);
x_46 = lean_unbox(x_45);
lean_dec(x_45);
if (x_46 == 0)
{
uint8_t x_47; lean_object* x_48; 
lean_dec(x_35);
lean_dec(x_1);
x_47 = 0;
x_48 = lean_box(x_47);
return x_48;
}
else
{
x_3 = x_35;
goto _start;
}
}
}
case 7:
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_3, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_3, 2);
lean_inc(x_51);
x_52 = l_Lean_Expr_hasExprMVar(x_3);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = l_Lean_Expr_hasFVar(x_3);
lean_dec(x_3);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; 
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_1);
x_54 = 0;
x_55 = lean_box(x_54);
return x_55;
}
else
{
lean_object* x_56; uint8_t x_57; 
lean_inc(x_1);
x_56 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_50);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
if (x_57 == 0)
{
uint8_t x_58; lean_object* x_59; 
lean_dec(x_51);
lean_dec(x_1);
x_58 = 0;
x_59 = lean_box(x_58);
return x_59;
}
else
{
x_3 = x_51;
goto _start;
}
}
}
else
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_3);
lean_inc(x_1);
x_61 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_50);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
if (x_62 == 0)
{
uint8_t x_63; lean_object* x_64; 
lean_dec(x_51);
lean_dec(x_1);
x_63 = 0;
x_64 = lean_box(x_63);
return x_64;
}
else
{
x_3 = x_51;
goto _start;
}
}
}
case 8:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_3, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_3, 3);
lean_inc(x_68);
x_69 = l_Lean_Expr_hasExprMVar(x_3);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = l_Lean_Expr_hasFVar(x_3);
lean_dec(x_3);
if (x_70 == 0)
{
uint8_t x_71; lean_object* x_72; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_1);
x_71 = 0;
x_72 = lean_box(x_71);
return x_72;
}
else
{
lean_object* x_73; uint8_t x_74; 
lean_inc(x_1);
x_73 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_66);
x_74 = lean_unbox(x_73);
lean_dec(x_73);
if (x_74 == 0)
{
uint8_t x_75; lean_object* x_76; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_1);
x_75 = 0;
x_76 = lean_box(x_75);
return x_76;
}
else
{
lean_object* x_77; uint8_t x_78; 
lean_inc(x_1);
x_77 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_67);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
if (x_78 == 0)
{
uint8_t x_79; lean_object* x_80; 
lean_dec(x_68);
lean_dec(x_1);
x_79 = 0;
x_80 = lean_box(x_79);
return x_80;
}
else
{
x_3 = x_68;
goto _start;
}
}
}
}
else
{
lean_object* x_82; uint8_t x_83; 
lean_dec(x_3);
lean_inc(x_1);
x_82 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_66);
x_83 = lean_unbox(x_82);
lean_dec(x_82);
if (x_83 == 0)
{
uint8_t x_84; lean_object* x_85; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_1);
x_84 = 0;
x_85 = lean_box(x_84);
return x_85;
}
else
{
lean_object* x_86; uint8_t x_87; 
lean_inc(x_1);
x_86 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_67);
x_87 = lean_unbox(x_86);
lean_dec(x_86);
if (x_87 == 0)
{
uint8_t x_88; lean_object* x_89; 
lean_dec(x_68);
lean_dec(x_1);
x_88 = 0;
x_89 = lean_box(x_88);
return x_89;
}
else
{
x_3 = x_68;
goto _start;
}
}
}
}
case 10:
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_3, 1);
lean_inc(x_91);
lean_dec(x_3);
x_3 = x_91;
goto _start;
}
case 11:
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_3, 2);
lean_inc(x_93);
lean_dec(x_3);
x_3 = x_93;
goto _start;
}
case 12:
{
uint8_t x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_3);
lean_dec(x_1);
x_95 = l_Bool_Inhabited;
x_96 = lean_box(x_95);
x_97 = l_unreachable_x21___rarg(x_96);
return x_97;
}
default: 
{
uint8_t x_98; lean_object* x_99; 
lean_dec(x_3);
lean_dec(x_1);
x_98 = 1;
x_99 = lean_box(x_98);
return x_99;
}
}
}
}
lean_object* l_Lean_MetavarContext_isWellFormed___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isWellFormed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MetavarContext_isWellFormed___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isWellFormed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MetavarContext_isWellFormed(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init_Control_Reader(lean_object*);
lean_object* initialize_Init_Data_Nat(lean_object*);
lean_object* initialize_Init_Data_Option(lean_object*);
lean_object* initialize_Init_Lean_Data_NameGenerator(lean_object*);
lean_object* initialize_Init_Lean_Util_MonadCache(lean_object*);
lean_object* initialize_Init_Lean_LocalContext(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_MetavarContext(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Reader(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Data_NameGenerator(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Util_MonadCache(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_LocalContext(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_LocalInstance_hasBeq___closed__1 = _init_l_Lean_LocalInstance_hasBeq___closed__1();
lean_mark_persistent(l_Lean_LocalInstance_hasBeq___closed__1);
l_Lean_LocalInstance_hasBeq = _init_l_Lean_LocalInstance_hasBeq();
lean_mark_persistent(l_Lean_LocalInstance_hasBeq);
l_Lean_MetavarDecl_Inhabited___closed__1 = _init_l_Lean_MetavarDecl_Inhabited___closed__1();
lean_mark_persistent(l_Lean_MetavarDecl_Inhabited___closed__1);
l_Lean_MetavarDecl_Inhabited = _init_l_Lean_MetavarDecl_Inhabited();
lean_mark_persistent(l_Lean_MetavarDecl_Inhabited);
l_Lean_MetavarContext_Inhabited___closed__1 = _init_l_Lean_MetavarContext_Inhabited___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_Inhabited___closed__1);
l_Lean_MetavarContext_Inhabited = _init_l_Lean_MetavarContext_Inhabited();
lean_mark_persistent(l_Lean_MetavarContext_Inhabited);
l_Lean_MetavarContext_getDecl___closed__1 = _init_l_Lean_MetavarContext_getDecl___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_getDecl___closed__1);
l_Lean_MetavarContext_getDecl___closed__2 = _init_l_Lean_MetavarContext_getDecl___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_getDecl___closed__2);
l_Lean_MetavarContext_getDecl___closed__3 = _init_l_Lean_MetavarContext_getDecl___closed__3();
lean_mark_persistent(l_Lean_MetavarContext_getDecl___closed__3);
l_Lean_MetavarContext_getLevelDepth___closed__1 = _init_l_Lean_MetavarContext_getLevelDepth___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_getLevelDepth___closed__1);
l_Lean_MetavarContext_isLevelAssignable___closed__1 = _init_l_Lean_MetavarContext_isLevelAssignable___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_isLevelAssignable___closed__1);
l_Lean_MetavarContext_isLevelAssignable___closed__2 = _init_l_Lean_MetavarContext_isLevelAssignable___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_isLevelAssignable___closed__2);
l_Lean_MetavarContext_instantiateMVars___closed__1 = _init_l_Lean_MetavarContext_instantiateMVars___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_instantiateMVars___closed__1);
l_Lean_MetavarContext_exprDependsOn___closed__1 = _init_l_Lean_MetavarContext_exprDependsOn___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_exprDependsOn___closed__1);
l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1 = _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_toString___closed__1);
l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2 = _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_toString___closed__2);
l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3 = _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_toString___closed__3);
l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4 = _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_toString___closed__4);
l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5 = _init_l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_toString___closed__5);
l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1 = _init_l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_hasToString___closed__1);
l_Lean_MetavarContext_MkBinding_Exception_hasToString = _init_l_Lean_MetavarContext_MkBinding_Exception_hasToString();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Exception_hasToString);
l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1 = _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__1);
l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2 = _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__2);
l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3 = _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__3);
l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4 = _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter___closed__4);
l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter = _init_l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter();
lean_mark_persistent(l_Lean_MetavarContext_MkBinding_Lean_MonadHashMapCacheAdapter);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
