// Lean compiler output
// Module: init.lean.parser.command
// Imports: init.lean.parser.declaration
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
obj* l_Lean_Parser_command_namespace_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1;
extern obj* l_Lean_Parser_Term_bracketedBinders_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_Parser___rarg___closed__1;
obj* l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_stringLit;
obj* l_fixCore___rarg___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_check_HasView_x_27;
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_Parser_command_export_HasView_x_27;
obj* l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1(obj*);
obj* l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_include_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_CommandParserM_Monad___closed__1;
obj* l_Lean_Parser_command_omit;
extern obj* l_Lean_Parser_command_reserveNotation_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_reserveNotation_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_commandParser_run(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_symbol_tokens___rarg(obj*, obj*);
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_renaming;
obj* l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__1(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg___boxed(obj*, obj*);
extern obj* l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_initQuot_HasView_x_27;
obj* l_Lean_Parser_command_export_HasView_x_27___lambda__2(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3(obj*);
extern obj* l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_attribute_Parser___closed__1;
obj* l_Lean_Parser_command_variable_Parser___closed__1;
obj* l_Lean_Parser_Combinators_sepBy1_tokens___rarg(obj*, obj*);
obj* l_Lean_Parser_command_namespace;
obj* l_Lean_Parser_command_setOption_HasView_x_27;
extern obj* l_Lean_Parser_stringLit_Parser___at_Lean_Parser_Term_builtinLeadingParsers_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
extern obj* l_mjoin___rarg___closed__1;
extern obj* l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
extern obj* l_Lean_Parser_command_declSig_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_namespace_HasView_x_27;
extern obj* l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
obj* l_Lean_Parser_command_omit_HasView;
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1(obj*);
extern obj* l_Lean_Parser_finishCommentBlock___closed__2;
extern obj* l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
obj* l_Lean_Parser_termParser_run(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1;
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___boxed(obj*);
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2;
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg(obj*, obj*);
obj* l_Lean_Parser_command_Parser(obj*);
obj* l_Lean_Parser_command_builtinCommandParsers;
extern obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_stringLit_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___boxed(obj*);
obj* l_Lean_Parser_ParsecT_labelsMkRes___rarg(obj*, obj*);
obj* l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_attribute;
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_boolOptionValue;
extern obj* l_Lean_Parser_indexed___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_command_variables;
obj* l_Lean_Parser_command_openSpec_hiding;
obj* l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__1(obj*);
obj* l_ReaderT_lift___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__8___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universes_HasView_x_27;
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__1(obj*);
obj* l_List_map___main___rarg(obj*, obj*);
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__4(obj*);
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_Combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__2(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4(obj*);
obj* l_Lean_Parser_commandParser_run___closed__1;
obj* l_Lean_Parser_command_include_Parser___closed__1;
obj* l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_universe_Parser___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Combinators_sepBy1___at_Lean_Parser_command_declAttributes_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_number_HasView;
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4;
obj* l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_check_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_only;
obj* l_Lean_Parser_Substring_toString(obj*);
obj* l_Lean_Parser_command_export_Parser___closed__1;
obj* l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__2(obj*);
obj* l_Lean_Parser_command_section;
extern obj* l_Lean_Parser_command_notation_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_setOption_Parser___closed__1;
obj* l_Lean_Parser_command_omit_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__2(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5(obj*);
obj* l_Lean_Parser_command_attribute_HasView;
obj* l_Lean_Parser_command_Parser___rarg(obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_namespace_HasView_x_27___lambda__2(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg(obj*, obj*);
extern obj* l_Lean_Parser_RecT_runParsec___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_command_export_HasView;
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_Combinators_many___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_variables_HasView;
obj* l_Lean_Parser_command_omit_HasView_x_27___lambda__2(obj*);
extern obj* l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_commandParser_run___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universe_Parser___closed__1;
obj* l_Lean_Parser_command_export_HasView_x_27___lambda__1(obj*);
extern obj* l_Lean_Parser_detailIdent_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_openSpec;
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_Syntax_asNode___main(obj*);
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1;
obj* l_Lean_Parser_command_section_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_attrInstance_HasView;
obj* l_Lean_Parser_command_end_HasView;
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universes_HasView;
obj* l_Lean_Parser_command_end_HasView_x_27;
obj* l_Lean_Parser_command_open_HasView_x_27;
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_end;
obj* l_Lean_Parser_command_variable_HasView;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3;
obj* l_Lean_Parser_Combinators_recurse_view___rarg(obj*, obj*);
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_check_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_export;
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_optionValue_HasView_x_27;
obj* l_Lean_Parser_Term_Parser(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg___boxed(obj*, obj*);
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___boxed(obj*);
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27;
obj* l_Lean_Parser_command_initQuot_Parser___closed__1;
obj* l_Lean_Parser_MonadParsec_observing___at_Lean_Parser_peekToken___spec__2(obj*, obj*, obj*, obj*);
obj* l_List_join___main___rarg(obj*);
obj* l_Lean_Parser_RecT_recurse___at_Lean_Parser_command_Parser_Lean_Parser_HasView___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_omit_Parser___closed__1;
obj* l_Lean_Parser_command_universe_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_setOption_HasView;
extern obj* l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens;
extern obj* l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
extern obj* l_Lean_Parser_number;
obj* l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__2(obj*);
obj* l_Lean_Parser_command_omit_HasView_x_27;
obj* l_Lean_Parser_command_open_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27;
obj* l_Lean_Parser_tryView___at_Lean_Parser_stringLit_Parser___spec__1(obj*, obj*);
extern obj* l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_initQuot;
obj* l_Lean_Parser_command_attrInstance_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_initQuot_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_binder_HasView;
obj* l_Lean_Parser_command_open_HasView;
extern obj* l_Lean_Parser_Combinators_anyOf___rarg___closed__1;
obj* l_Lean_Parser_command_universes;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Syntax_mkNode(obj*, obj*);
extern obj* l_Lean_Parser_Term_binder_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_check;
obj* l_Option_getOrElse___main___rarg(obj*, obj*);
obj* l_Lean_Parser_command_openSpec_hiding_HasView;
obj* l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__2(obj*);
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_include_HasView;
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1(obj*);
obj* l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__1(obj*);
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__1(obj*);
extern obj* l_Lean_Parser_noKind;
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3;
obj* l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens;
obj* l_List_append___rarg(obj*, obj*);
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3;
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_setOption;
obj* l_Lean_Parser_ParsecT_orelseMkRes___rarg(obj*, obj*);
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5;
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView;
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2;
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg(obj*, obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg___boxed(obj*, obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___boxed(obj*);
extern obj* l_Lean_Parser_number_HasView_x_27___lambda__2___closed__4;
obj* l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__2(obj*);
obj* l_Lean_Parser_command_universe_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_tokens___rarg(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_openSpec_HasView;
extern obj* l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__1(obj*);
extern obj* l_Lean_Parser_peekToken___closed__1;
obj* l_Lean_Parser_command_include_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_builtinCommandParsers_Lean_Parser_HasTokens;
obj* l_Lean_Parser_ParsecT_tryMkRes___rarg(obj*);
obj* l_Lean_Parser_command_check_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universe_HasView_x_27;
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2(obj*);
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_as_HasView;
obj* l_Lean_Parser_command_attribute_HasView_x_27;
obj* l_Lean_Parser_tryView___at_Lean_Parser_number_Parser___spec__1(obj*, obj*);
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__4___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_variable;
obj* l_Dlist_singleton___rarg(obj*, obj*);
obj* l_Lean_Parser_command_openSpec_HasView_x_27;
obj* l_Lean_Parser_command_openSpec_Parser___closed__1;
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_attribute_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_end_Parser___closed__1;
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_command_variable_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Combinators_label_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_open;
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_section_HasView;
obj* l_Lean_Parser_command_namespace_Parser___closed__1;
extern obj* l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_Declaration_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bracketedBinders_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_optionValue;
obj* l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_reserveMixfix_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_openSpec_as;
obj* l_Lean_Parser_command_variables_HasView_x_27;
obj* l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27;
obj* l_Lean_Parser_command_openSpec_renaming_item;
obj* l_Lean_Parser_command_universes_HasView_x_27___lambda__2(obj*);
obj* l_Rbnode_find___main___at_Lean_NameMap_contains___spec__2(obj*, obj*, obj*, obj*);
obj* l_String_trim(obj*);
obj* l_Lean_Parser_command_universe;
obj* l_Lean_Parser_ParsecT_bindMkRes___rarg(obj*, obj*);
obj* l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_commandParser_run___lambda__1(obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_binderContent_HasView_x_27___lambda__2___closed__2;
obj* l_Lean_Parser_command_namespace_HasView;
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_openSpec_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_check_Parser___closed__1;
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_variables_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_section_Parser___closed__1;
extern obj* l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
extern obj* l_Lean_Parser_CommandParserM_Lean_Parser_MonadRec___closed__1;
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27;
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1;
extern obj* l_Lean_Parser_Term_bracketedBinders_HasView;
obj* l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_universe_HasView;
extern obj* l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__3;
obj* l_Lean_Parser_token(obj*, obj*, obj*);
obj* l_Lean_Parser_command_mixfix_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_command_Parser___boxed(obj*);
obj* l_Lean_Parser_command_omit_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_List_cons_tokens___rarg(obj*, obj*);
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(obj*);
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_variables_Parser___closed__1;
obj* l_Lean_Parser_Combinators_many1_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_openSpec_only_HasView;
obj* l_Lean_Parser_command_open_Parser___closed__1;
obj* l_Lean_Parser_tokenMapCons_tokens___rarg(obj*, obj*);
obj* l_Lean_Parser_command_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_universe_Parser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_commandParser_run___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__3(obj*, obj*);
obj* l_Lean_Parser_command_section_HasView_x_27;
extern obj* l_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27;
obj* l_Lean_Parser_command_check_HasView;
obj* l_Lean_Parser_command_export_Parser(obj*, obj*, obj*, obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg___boxed(obj*, obj*);
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_end_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__1;
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___boxed(obj*);
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3;
obj* l_Option_toMonad___main___at_Lean_Parser_indexed___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__2(obj*);
obj* l_Lean_Parser_command_optionValue_HasView;
obj* l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_binder_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_commandParser_run___lambda__1___boxed(obj*, obj*, obj*);
extern obj* l_Lean_Parser_CommandParserM_Alternative___closed__1;
obj* l_Lean_Parser_command_variable_HasView_x_27;
obj* l_Lean_Parser_command_notation_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_setOption_Parser(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_stringLit_HasView;
obj* l_Lean_Parser_command_check_HasView_x_27___lambda__2(obj*);
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__2(obj*);
obj* l_String_quote(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___boxed(obj*);
obj* l_Lean_Parser_command_initQuot_HasView;
obj* l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_command_universes_HasView_x_27___lambda__1(obj*);
obj* l_Lean_Parser_Substring_ofString(obj*);
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__1(obj*);
extern obj* l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens;
obj* l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__1(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___boxed(obj*);
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1;
obj* l_Lean_Parser_command_boolOptionValue_HasView;
extern obj* l_Lean_Parser_Combinators_many___rarg___closed__1;
obj* l_Lean_Parser_command_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_TokenMap_ofList___main___rarg(obj*);
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3;
obj* l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__1(obj*);
extern obj* l_String_Iterator_extract___main___closed__1;
obj* l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_namespace_HasView_x_27___lambda__1(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg(obj*, obj*);
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27;
obj* l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1;
obj* l_Lean_Parser_command_openSpec_renaming_HasView;
obj* l_Lean_Parser_command_include_HasView_x_27___lambda__1(obj*);
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6(obj*);
obj* l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasView;
obj* l_Lean_Parser_command_include_HasView_x_27;
extern obj* l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens;
obj* l_Lean_Parser_command_include;
obj* l_List_foldl___main___at_Lean_Parser_command_universe_Parser___spec__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_RecT_recurse___at_Lean_Parser_command_Parser_Lean_Parser_HasView___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_3(x_1, x_0, x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_RecT_recurse___at_Lean_Parser_command_Parser_Lean_Parser_HasView___spec__1), 4, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__8___rarg___boxed), 5, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadRec___closed__1;
x_4 = l_Lean_Parser_Combinators_recurse_view___rarg(x_0, x_3);
x_5 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_6 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_7 = lean::mk_string("command");
x_8 = l_Lean_Parser_Combinators_label_view___rarg(x_5, x_6, x_2, x_7, x_4);
lean::dec(x_7);
lean::dec(x_2);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_tokens___rarg(x_0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_Parser___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("command");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_Lean_Parser_command_Parser___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::box(0);
x_4 = lean::apply_3(x_0, x_3, x_1, x_2);
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = l_Lean_Parser_command_Parser___rarg___closed__1;
x_11 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_5, x_10);
if (lean::is_scalar(x_9)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_9;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_7);
return x_12;
}
}
obj* l_Lean_Parser_command_Parser(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Parser___rarg), 3, 0);
return x_1;
}
}
obj* l_Lean_Parser_command_Parser___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_command_Parser(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_openSpec_as() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("as");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_27; obj* x_28; 
x_27 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_18);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
else
{
obj* x_29; 
x_29 = lean::cnstr_get(x_1, 0);
lean::inc(x_29);
lean::dec(x_1);
switch (lean::obj_tag(x_29)) {
case 1:
{
obj* x_32; obj* x_35; 
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
lean::dec(x_29);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
case 3:
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
default:
{
obj* x_39; obj* x_40; 
lean::dec(x_29);
x_39 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
if (lean::obj_tag(x_1) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = l_Lean_Parser_command_openSpec_as;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_13);
if (lean::is_scalar(x_15)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_15;
}
lean::cnstr_set(x_17, 0, x_16);
x_18 = lean::box(3);
x_19 = l_Option_getOrElse___main___rarg(x_17, x_18);
lean::dec(x_17);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_8);
x_22 = l_Lean_Parser_command_openSpec_as;
x_23 = l_Lean_Parser_Syntax_mkNode(x_22, x_21);
return x_23;
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_as_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_as_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_as_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec_only() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("only");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_4 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_5 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_0);
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_6 = lean::cnstr_get(x_2, 0);
lean::inc(x_6);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
x_12 = l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__1(x_9);
x_13 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_14 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_14, 0, x_0);
lean::cnstr_set(x_14, 1, x_13);
lean::cnstr_set(x_14, 2, x_12);
lean::cnstr_set(x_14, 3, x_0);
return x_14;
}
}
}
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
else
{
obj* x_18; obj* x_20; obj* x_23; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_9, 1);
lean::inc(x_20);
lean::dec(x_9);
x_23 = l_Lean_Parser_Syntax_asNode___main(x_18);
if (lean::obj_tag(x_23) == 0)
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; 
x_24 = lean::box(3);
x_1 = x_20;
x_2 = x_24;
goto lbl_3;
}
else
{
obj* x_25; obj* x_27; 
x_25 = lean::cnstr_get(x_20, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
lean::dec(x_20);
x_1 = x_27;
x_2 = x_25;
goto lbl_3;
}
}
else
{
obj* x_30; obj* x_33; obj* x_36; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
lean::dec(x_23);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_List_append___rarg(x_33, x_20);
if (lean::obj_tag(x_36) == 0)
{
obj* x_37; 
x_37 = lean::box(3);
x_1 = x_36;
x_2 = x_37;
goto lbl_3;
}
else
{
obj* x_38; obj* x_40; 
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_1 = x_40;
x_2 = x_38;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_43; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_45; obj* x_48; 
x_45 = lean::cnstr_get(x_2, 0);
lean::inc(x_45);
lean::dec(x_2);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_45);
x_43 = x_48;
goto lbl_44;
}
case 3:
{
obj* x_49; 
x_49 = lean::box(0);
x_43 = x_49;
goto lbl_44;
}
default:
{
obj* x_51; 
lean::dec(x_2);
x_51 = lean::box(0);
x_43 = x_51;
goto lbl_44;
}
}
lbl_44:
{
obj* x_52; obj* x_53; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_55; 
x_55 = lean::box(3);
x_52 = x_1;
x_53 = x_55;
goto lbl_54;
}
else
{
obj* x_56; obj* x_58; 
x_56 = lean::cnstr_get(x_1, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_1, 1);
lean::inc(x_58);
lean::dec(x_1);
x_52 = x_58;
x_53 = x_56;
goto lbl_54;
}
lbl_54:
{
obj* x_61; 
switch (lean::obj_tag(x_53)) {
case 1:
{
obj* x_63; 
x_63 = lean::cnstr_get(x_53, 0);
lean::inc(x_63);
lean::dec(x_53);
x_61 = x_63;
goto lbl_62;
}
case 3:
{
obj* x_66; 
x_66 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_61 = x_66;
goto lbl_62;
}
default:
{
obj* x_68; 
lean::dec(x_53);
x_68 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_61 = x_68;
goto lbl_62;
}
}
lbl_62:
{
obj* x_69; obj* x_70; 
if (lean::obj_tag(x_52) == 0)
{
obj* x_72; 
x_72 = lean::box(3);
x_69 = x_52;
x_70 = x_72;
goto lbl_71;
}
else
{
obj* x_73; obj* x_75; 
x_73 = lean::cnstr_get(x_52, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_52, 1);
lean::inc(x_75);
lean::dec(x_52);
x_69 = x_75;
x_70 = x_73;
goto lbl_71;
}
lbl_71:
{
obj* x_78; 
x_78 = l_Lean_Parser_Syntax_asNode___main(x_70);
if (lean::obj_tag(x_78) == 0)
{
obj* x_79; 
x_79 = lean::box(0);
if (lean::obj_tag(x_69) == 0)
{
obj* x_80; obj* x_81; 
x_80 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_81 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_81, 0, x_43);
lean::cnstr_set(x_81, 1, x_61);
lean::cnstr_set(x_81, 2, x_80);
lean::cnstr_set(x_81, 3, x_79);
return x_81;
}
else
{
obj* x_82; 
x_82 = lean::cnstr_get(x_69, 0);
lean::inc(x_82);
lean::dec(x_69);
switch (lean::obj_tag(x_82)) {
case 0:
{
obj* x_85; obj* x_88; obj* x_89; obj* x_90; 
x_85 = lean::cnstr_get(x_82, 0);
lean::inc(x_85);
lean::dec(x_82);
x_88 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_88, 0, x_85);
x_89 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_90 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_90, 0, x_43);
lean::cnstr_set(x_90, 1, x_61);
lean::cnstr_set(x_90, 2, x_89);
lean::cnstr_set(x_90, 3, x_88);
return x_90;
}
case 3:
{
obj* x_91; obj* x_92; 
x_91 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_92 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_92, 0, x_43);
lean::cnstr_set(x_92, 1, x_61);
lean::cnstr_set(x_92, 2, x_91);
lean::cnstr_set(x_92, 3, x_79);
return x_92;
}
default:
{
obj* x_94; obj* x_95; 
lean::dec(x_82);
x_94 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_95 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_95, 0, x_43);
lean::cnstr_set(x_95, 1, x_61);
lean::cnstr_set(x_95, 2, x_94);
lean::cnstr_set(x_95, 3, x_79);
return x_95;
}
}
}
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_102; 
x_96 = lean::cnstr_get(x_78, 0);
if (lean::is_exclusive(x_78)) {
 lean::cnstr_set(x_78, 0, lean::box(0));
 x_98 = x_78;
} else {
 lean::inc(x_96);
 lean::dec(x_78);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 1);
lean::inc(x_99);
lean::dec(x_96);
x_102 = l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__1(x_99);
if (lean::obj_tag(x_69) == 0)
{
obj* x_104; obj* x_105; 
lean::dec(x_98);
x_104 = lean::box(0);
x_105 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_105, 0, x_43);
lean::cnstr_set(x_105, 1, x_61);
lean::cnstr_set(x_105, 2, x_102);
lean::cnstr_set(x_105, 3, x_104);
return x_105;
}
else
{
obj* x_106; 
x_106 = lean::cnstr_get(x_69, 0);
lean::inc(x_106);
lean::dec(x_69);
switch (lean::obj_tag(x_106)) {
case 0:
{
obj* x_109; obj* x_112; obj* x_113; 
x_109 = lean::cnstr_get(x_106, 0);
lean::inc(x_109);
lean::dec(x_106);
if (lean::is_scalar(x_98)) {
 x_112 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_112 = x_98;
}
lean::cnstr_set(x_112, 0, x_109);
x_113 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_113, 0, x_43);
lean::cnstr_set(x_113, 1, x_61);
lean::cnstr_set(x_113, 2, x_102);
lean::cnstr_set(x_113, 3, x_112);
return x_113;
}
case 3:
{
obj* x_115; obj* x_116; 
lean::dec(x_98);
x_115 = lean::box(0);
x_116 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_116, 0, x_43);
lean::cnstr_set(x_116, 1, x_61);
lean::cnstr_set(x_116, 2, x_102);
lean::cnstr_set(x_116, 3, x_115);
return x_116;
}
default:
{
obj* x_119; obj* x_120; 
lean::dec(x_106);
lean::dec(x_98);
x_119 = lean::box(0);
x_120 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_120, 0, x_43);
lean::cnstr_set(x_120, 1, x_61);
lean::cnstr_set(x_120, 2, x_102);
lean::cnstr_set(x_120, 3, x_119);
return x_120;
}
}
}
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_3);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
x_13 = l_List_map___main___at_Lean_Parser_command_openSpec_only_HasView_x_27___spec__2(x_5);
x_14 = l_Lean_Parser_noKind;
x_15 = l_Lean_Parser_Syntax_mkNode(x_14, x_13);
if (lean::obj_tag(x_1) == 0)
{
obj* x_16; obj* x_17; obj* x_18; 
x_16 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_12);
x_18 = l_Lean_Parser_Syntax_mkNode(x_14, x_17);
if (lean::obj_tag(x_7) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_19 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_15);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_18);
lean::cnstr_set(x_21, 1, x_20);
x_22 = l_Lean_Parser_command_openSpec_only;
x_23 = l_Lean_Parser_Syntax_mkNode(x_22, x_21);
return x_23;
}
else
{
obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_24 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_26 = x_7;
} else {
 lean::inc(x_24);
 lean::dec(x_7);
 x_26 = lean::box(0);
}
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_24);
if (lean::is_scalar(x_26)) {
 x_28 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_28 = x_26;
}
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::box(3);
x_30 = l_Option_getOrElse___main___rarg(x_28, x_29);
lean::dec(x_28);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_11);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_15);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_18);
lean::cnstr_set(x_34, 1, x_33);
x_35 = l_Lean_Parser_command_openSpec_only;
x_36 = l_Lean_Parser_Syntax_mkNode(x_35, x_34);
return x_36;
}
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_46; 
x_37 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_39 = x_1;
} else {
 lean::inc(x_37);
 lean::dec(x_1);
 x_39 = lean::box(0);
}
x_40 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_40, 0, x_37);
if (lean::is_scalar(x_39)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_39;
}
lean::cnstr_set(x_41, 0, x_40);
x_42 = lean::box(3);
x_43 = l_Option_getOrElse___main___rarg(x_41, x_42);
lean::dec(x_41);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_12);
x_46 = l_Lean_Parser_Syntax_mkNode(x_14, x_45);
if (lean::obj_tag(x_7) == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_15);
lean::cnstr_set(x_48, 1, x_47);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_46);
lean::cnstr_set(x_49, 1, x_48);
x_50 = l_Lean_Parser_command_openSpec_only;
x_51 = l_Lean_Parser_Syntax_mkNode(x_50, x_49);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_52 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_54 = x_7;
} else {
 lean::inc(x_52);
 lean::dec(x_7);
 x_54 = lean::box(0);
}
x_55 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_55, 0, x_52);
if (lean::is_scalar(x_54)) {
 x_56 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_56 = x_54;
}
lean::cnstr_set(x_56, 0, x_55);
x_57 = l_Option_getOrElse___main___rarg(x_56, x_42);
lean::dec(x_56);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_11);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_15);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_46);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_Lean_Parser_command_openSpec_only;
x_63 = l_Lean_Parser_Syntax_mkNode(x_62, x_61);
return x_63;
}
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_only_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_only_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_only_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_item() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("renaming");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean::mk_string("item");
x_12 = lean_name_mk_string(x_10, x_11);
return x_12;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_2 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
lean::cnstr_set(x_2, 2, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_20; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_18 = x_20;
goto lbl_19;
}
case 3:
{
obj* x_23; 
x_23 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_18 = x_23;
goto lbl_19;
}
default:
{
obj* x_25; 
lean::dec(x_2);
x_25 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_18 = x_25;
goto lbl_19;
}
}
lbl_19:
{
obj* x_26; obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_26 = x_1;
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; obj* x_32; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_1, 1);
lean::inc(x_32);
lean::dec(x_1);
x_26 = x_32;
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_35; 
switch (lean::obj_tag(x_27)) {
case 0:
{
obj* x_37; obj* x_40; 
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
lean::dec(x_27);
x_40 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_40, 0, x_37);
x_35 = x_40;
goto lbl_36;
}
case 3:
{
obj* x_41; 
x_41 = lean::box(0);
x_35 = x_41;
goto lbl_36;
}
default:
{
obj* x_43; 
lean::dec(x_27);
x_43 = lean::box(0);
x_35 = x_43;
goto lbl_36;
}
}
lbl_36:
{
if (lean::obj_tag(x_26) == 0)
{
obj* x_44; obj* x_45; 
x_44 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_45 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_45, 0, x_18);
lean::cnstr_set(x_45, 1, x_35);
lean::cnstr_set(x_45, 2, x_44);
return x_45;
}
else
{
obj* x_46; 
x_46 = lean::cnstr_get(x_26, 0);
lean::inc(x_46);
lean::dec(x_26);
switch (lean::obj_tag(x_46)) {
case 1:
{
obj* x_49; obj* x_52; 
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
lean::dec(x_46);
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_18);
lean::cnstr_set(x_52, 1, x_35);
lean::cnstr_set(x_52, 2, x_49);
return x_52;
}
case 3:
{
obj* x_53; obj* x_54; 
x_53 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_18);
lean::cnstr_set(x_54, 1, x_35);
lean::cnstr_set(x_54, 2, x_53);
return x_54;
}
default:
{
obj* x_56; obj* x_57; 
lean::dec(x_46);
x_56 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_57 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_57, 0, x_18);
lean::cnstr_set(x_57, 1, x_35);
lean::cnstr_set(x_57, 2, x_56);
return x_57;
}
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_1);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_5);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
if (lean::obj_tag(x_3) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_8);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_command_openSpec_renaming_item;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_17 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_19 = x_3;
} else {
 lean::inc(x_17);
 lean::dec(x_3);
 x_19 = lean::box(0);
}
x_20 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_20, 0, x_17);
if (lean::is_scalar(x_19)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_19;
}
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::box(3);
x_23 = l_Option_getOrElse___main___rarg(x_21, x_22);
lean::dec(x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_11);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_8);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_Lean_Parser_command_openSpec_renaming_item;
x_28 = l_Lean_Parser_Syntax_mkNode(x_27, x_26);
return x_28;
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_item_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("renaming");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = l_Lean_Parser_command_openSpec_renaming_item_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_Parser_command_openSpec_renaming_item_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_0);
lean::cnstr_set(x_4, 2, x_3);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2;
x_12 = l_List_map___main___rarg(x_11, x_8);
x_13 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_0);
lean::cnstr_set(x_13, 2, x_12);
lean::cnstr_set(x_13, 3, x_0);
return x_13;
}
}
}
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
else
{
obj* x_18; obj* x_20; obj* x_23; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_9, 1);
lean::inc(x_20);
lean::dec(x_9);
x_23 = l_Lean_Parser_Syntax_asNode___main(x_18);
if (lean::obj_tag(x_23) == 0)
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; 
x_24 = lean::box(3);
x_1 = x_20;
x_2 = x_24;
goto lbl_3;
}
else
{
obj* x_25; obj* x_27; 
x_25 = lean::cnstr_get(x_20, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
lean::dec(x_20);
x_1 = x_27;
x_2 = x_25;
goto lbl_3;
}
}
else
{
obj* x_30; obj* x_33; obj* x_36; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
lean::dec(x_23);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_List_append___rarg(x_33, x_20);
if (lean::obj_tag(x_36) == 0)
{
obj* x_37; 
x_37 = lean::box(3);
x_1 = x_36;
x_2 = x_37;
goto lbl_3;
}
else
{
obj* x_38; obj* x_40; 
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_1 = x_40;
x_2 = x_38;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_43; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_45; obj* x_48; 
x_45 = lean::cnstr_get(x_2, 0);
lean::inc(x_45);
lean::dec(x_2);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_45);
x_43 = x_48;
goto lbl_44;
}
case 3:
{
obj* x_49; 
x_49 = lean::box(0);
x_43 = x_49;
goto lbl_44;
}
default:
{
obj* x_51; 
lean::dec(x_2);
x_51 = lean::box(0);
x_43 = x_51;
goto lbl_44;
}
}
lbl_44:
{
obj* x_52; obj* x_53; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_55; 
x_55 = lean::box(3);
x_52 = x_1;
x_53 = x_55;
goto lbl_54;
}
else
{
obj* x_56; obj* x_58; 
x_56 = lean::cnstr_get(x_1, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_1, 1);
lean::inc(x_58);
lean::dec(x_1);
x_52 = x_58;
x_53 = x_56;
goto lbl_54;
}
lbl_54:
{
obj* x_61; 
switch (lean::obj_tag(x_53)) {
case 0:
{
obj* x_63; obj* x_66; 
x_63 = lean::cnstr_get(x_53, 0);
lean::inc(x_63);
lean::dec(x_53);
x_66 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_66, 0, x_63);
x_61 = x_66;
goto lbl_62;
}
case 3:
{
obj* x_67; 
x_67 = lean::box(0);
x_61 = x_67;
goto lbl_62;
}
default:
{
obj* x_69; 
lean::dec(x_53);
x_69 = lean::box(0);
x_61 = x_69;
goto lbl_62;
}
}
lbl_62:
{
obj* x_70; obj* x_71; 
if (lean::obj_tag(x_52) == 0)
{
obj* x_73; 
x_73 = lean::box(3);
x_70 = x_52;
x_71 = x_73;
goto lbl_72;
}
else
{
obj* x_74; obj* x_76; 
x_74 = lean::cnstr_get(x_52, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_52, 1);
lean::inc(x_76);
lean::dec(x_52);
x_70 = x_76;
x_71 = x_74;
goto lbl_72;
}
lbl_72:
{
obj* x_79; 
x_79 = l_Lean_Parser_Syntax_asNode___main(x_71);
if (lean::obj_tag(x_79) == 0)
{
if (lean::obj_tag(x_70) == 0)
{
obj* x_80; obj* x_81; obj* x_82; 
x_80 = lean::box(0);
x_81 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
x_82 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_82, 0, x_43);
lean::cnstr_set(x_82, 1, x_61);
lean::cnstr_set(x_82, 2, x_81);
lean::cnstr_set(x_82, 3, x_80);
return x_82;
}
else
{
obj* x_83; 
x_83 = lean::cnstr_get(x_70, 0);
lean::inc(x_83);
lean::dec(x_70);
switch (lean::obj_tag(x_83)) {
case 0:
{
obj* x_86; obj* x_89; obj* x_90; obj* x_91; 
x_86 = lean::cnstr_get(x_83, 0);
lean::inc(x_86);
lean::dec(x_83);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_86);
x_90 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
x_91 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_91, 0, x_43);
lean::cnstr_set(x_91, 1, x_61);
lean::cnstr_set(x_91, 2, x_90);
lean::cnstr_set(x_91, 3, x_89);
return x_91;
}
case 3:
{
obj* x_92; obj* x_93; obj* x_94; 
x_92 = lean::box(0);
x_93 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
x_94 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_94, 0, x_43);
lean::cnstr_set(x_94, 1, x_61);
lean::cnstr_set(x_94, 2, x_93);
lean::cnstr_set(x_94, 3, x_92);
return x_94;
}
default:
{
obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_83);
x_96 = lean::box(0);
x_97 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1;
x_98 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_98, 0, x_43);
lean::cnstr_set(x_98, 1, x_61);
lean::cnstr_set(x_98, 2, x_97);
lean::cnstr_set(x_98, 3, x_96);
return x_98;
}
}
}
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_105; obj* x_106; 
x_99 = lean::cnstr_get(x_79, 0);
if (lean::is_exclusive(x_79)) {
 lean::cnstr_set(x_79, 0, lean::box(0));
 x_101 = x_79;
} else {
 lean::inc(x_99);
 lean::dec(x_79);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 1);
lean::inc(x_102);
lean::dec(x_99);
x_105 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2;
x_106 = l_List_map___main___rarg(x_105, x_102);
if (lean::obj_tag(x_70) == 0)
{
obj* x_108; obj* x_109; 
lean::dec(x_101);
x_108 = lean::box(0);
x_109 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_109, 0, x_43);
lean::cnstr_set(x_109, 1, x_61);
lean::cnstr_set(x_109, 2, x_106);
lean::cnstr_set(x_109, 3, x_108);
return x_109;
}
else
{
obj* x_110; 
x_110 = lean::cnstr_get(x_70, 0);
lean::inc(x_110);
lean::dec(x_70);
switch (lean::obj_tag(x_110)) {
case 0:
{
obj* x_113; obj* x_116; obj* x_117; 
x_113 = lean::cnstr_get(x_110, 0);
lean::inc(x_113);
lean::dec(x_110);
if (lean::is_scalar(x_101)) {
 x_116 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_116 = x_101;
}
lean::cnstr_set(x_116, 0, x_113);
x_117 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_117, 0, x_43);
lean::cnstr_set(x_117, 1, x_61);
lean::cnstr_set(x_117, 2, x_106);
lean::cnstr_set(x_117, 3, x_116);
return x_117;
}
case 3:
{
obj* x_119; obj* x_120; 
lean::dec(x_101);
x_119 = lean::box(0);
x_120 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_120, 0, x_43);
lean::cnstr_set(x_120, 1, x_61);
lean::cnstr_set(x_120, 2, x_106);
lean::cnstr_set(x_120, 3, x_119);
return x_120;
}
default:
{
obj* x_123; obj* x_124; 
lean::dec(x_110);
lean::dec(x_101);
x_123 = lean::box(0);
x_124 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_124, 0, x_43);
lean::cnstr_set(x_124, 1, x_61);
lean::cnstr_set(x_124, 2, x_106);
lean::cnstr_set(x_124, 3, x_123);
return x_124;
}
}
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_Parser_command_openSpec_renaming_item_HasView;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::box(0);
x_11 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1;
x_12 = l_List_map___main___rarg(x_11, x_5);
x_13 = l_Lean_Parser_noKind;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_15 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_command_reserveNotation_HasView_x_27___lambda__2___closed__1;
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_command_openSpec_renaming;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
else
{
obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_21 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_23 = x_7;
} else {
 lean::inc(x_21);
 lean::dec(x_7);
 x_23 = lean::box(0);
}
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
if (lean::is_scalar(x_23)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_23;
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::box(3);
x_27 = l_Option_getOrElse___main___rarg(x_25, x_26);
lean::dec(x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_10);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_14);
lean::cnstr_set(x_30, 1, x_29);
x_31 = l_Lean_Parser_command_reserveNotation_HasView_x_27___lambda__2___closed__1;
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
x_33 = l_Lean_Parser_command_openSpec_renaming;
x_34 = l_Lean_Parser_Syntax_mkNode(x_33, x_32);
return x_34;
}
}
else
{
obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_35 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_37 = x_3;
} else {
 lean::inc(x_35);
 lean::dec(x_3);
 x_37 = lean::box(0);
}
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_35);
if (lean::is_scalar(x_37)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_37;
}
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::box(3);
x_41 = l_Option_getOrElse___main___rarg(x_39, x_40);
lean::dec(x_39);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_10);
x_44 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_46 = l_Lean_Parser_Syntax_mkNode(x_13, x_45);
if (lean::obj_tag(x_7) == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_14);
lean::cnstr_set(x_48, 1, x_47);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_46);
lean::cnstr_set(x_49, 1, x_48);
x_50 = l_Lean_Parser_command_openSpec_renaming;
x_51 = l_Lean_Parser_Syntax_mkNode(x_50, x_49);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_52 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_54 = x_7;
} else {
 lean::inc(x_52);
 lean::dec(x_7);
 x_54 = lean::box(0);
}
x_55 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_55, 0, x_52);
if (lean::is_scalar(x_54)) {
 x_56 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_56 = x_54;
}
lean::cnstr_set(x_56, 0, x_55);
x_57 = l_Option_getOrElse___main___rarg(x_56, x_40);
lean::dec(x_56);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_10);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_14);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_46);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_Lean_Parser_command_openSpec_renaming;
x_63 = l_Lean_Parser_Syntax_mkNode(x_62, x_61);
return x_63;
}
}
}
else
{
obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_64 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_66 = x_1;
} else {
 lean::inc(x_64);
 lean::dec(x_1);
 x_66 = lean::box(0);
}
x_67 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_67, 0, x_64);
if (lean::is_scalar(x_66)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_66;
}
lean::cnstr_set(x_68, 0, x_67);
x_69 = lean::box(3);
x_70 = l_Option_getOrElse___main___rarg(x_68, x_69);
lean::dec(x_68);
if (lean::obj_tag(x_3) == 0)
{
obj* x_72; obj* x_73; obj* x_74; 
x_72 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_70);
lean::cnstr_set(x_73, 1, x_72);
x_74 = l_Lean_Parser_Syntax_mkNode(x_13, x_73);
if (lean::obj_tag(x_7) == 0)
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_14);
lean::cnstr_set(x_75, 1, x_72);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_75);
x_77 = l_Lean_Parser_command_openSpec_renaming;
x_78 = l_Lean_Parser_Syntax_mkNode(x_77, x_76);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
x_79 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_81 = x_7;
} else {
 lean::inc(x_79);
 lean::dec(x_7);
 x_81 = lean::box(0);
}
x_82 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_82, 0, x_79);
if (lean::is_scalar(x_81)) {
 x_83 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_83 = x_81;
}
lean::cnstr_set(x_83, 0, x_82);
x_84 = l_Option_getOrElse___main___rarg(x_83, x_69);
lean::dec(x_83);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_84);
lean::cnstr_set(x_86, 1, x_10);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_14);
lean::cnstr_set(x_87, 1, x_86);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_74);
lean::cnstr_set(x_88, 1, x_87);
x_89 = l_Lean_Parser_command_openSpec_renaming;
x_90 = l_Lean_Parser_Syntax_mkNode(x_89, x_88);
return x_90;
}
}
else
{
obj* x_91; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; 
x_91 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_93 = x_3;
} else {
 lean::inc(x_91);
 lean::dec(x_3);
 x_93 = lean::box(0);
}
x_94 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_94, 0, x_91);
if (lean::is_scalar(x_93)) {
 x_95 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_95 = x_93;
}
lean::cnstr_set(x_95, 0, x_94);
x_96 = l_Option_getOrElse___main___rarg(x_95, x_69);
lean::dec(x_95);
x_98 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_98, 0, x_96);
lean::cnstr_set(x_98, 1, x_10);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_70);
lean::cnstr_set(x_99, 1, x_98);
x_100 = l_Lean_Parser_Syntax_mkNode(x_13, x_99);
if (lean::obj_tag(x_7) == 0)
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; 
x_101 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_14);
lean::cnstr_set(x_102, 1, x_101);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_100);
lean::cnstr_set(x_103, 1, x_102);
x_104 = l_Lean_Parser_command_openSpec_renaming;
x_105 = l_Lean_Parser_Syntax_mkNode(x_104, x_103);
return x_105;
}
else
{
obj* x_106; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; 
x_106 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_108 = x_7;
} else {
 lean::inc(x_106);
 lean::dec(x_7);
 x_108 = lean::box(0);
}
x_109 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_109, 0, x_106);
if (lean::is_scalar(x_108)) {
 x_110 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_110 = x_108;
}
lean::cnstr_set(x_110, 0, x_109);
x_111 = l_Option_getOrElse___main___rarg(x_110, x_69);
lean::dec(x_110);
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_111);
lean::cnstr_set(x_113, 1, x_10);
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_14);
lean::cnstr_set(x_114, 1, x_113);
x_115 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_115, 0, x_100);
lean::cnstr_set(x_115, 1, x_114);
x_116 = l_Lean_Parser_command_openSpec_renaming;
x_117 = l_Lean_Parser_Syntax_mkNode(x_116, x_115);
return x_117;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_renaming_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_renaming_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec_hiding() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string("hiding");
x_10 = lean_name_mk_string(x_8, x_9);
return x_10;
}
}
obj* l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_0);
lean::cnstr_set(x_4, 2, x_3);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__1(x_8);
x_12 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_0);
lean::cnstr_set(x_12, 2, x_11);
lean::cnstr_set(x_12, 3, x_0);
return x_12;
}
}
}
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; obj* x_28; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_30; 
x_30 = lean::box(3);
x_27 = x_1;
x_28 = x_30;
goto lbl_29;
}
else
{
obj* x_31; obj* x_33; 
x_31 = lean::cnstr_get(x_1, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_1, 1);
lean::inc(x_33);
lean::dec(x_1);
x_27 = x_33;
x_28 = x_31;
goto lbl_29;
}
lbl_29:
{
obj* x_36; 
switch (lean::obj_tag(x_28)) {
case 0:
{
obj* x_38; obj* x_41; 
x_38 = lean::cnstr_get(x_28, 0);
lean::inc(x_38);
lean::dec(x_28);
x_41 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_41, 0, x_38);
x_36 = x_41;
goto lbl_37;
}
case 3:
{
obj* x_42; 
x_42 = lean::box(0);
x_36 = x_42;
goto lbl_37;
}
default:
{
obj* x_44; 
lean::dec(x_28);
x_44 = lean::box(0);
x_36 = x_44;
goto lbl_37;
}
}
lbl_37:
{
obj* x_45; obj* x_46; 
if (lean::obj_tag(x_27) == 0)
{
obj* x_48; 
x_48 = lean::box(3);
x_45 = x_27;
x_46 = x_48;
goto lbl_47;
}
else
{
obj* x_49; obj* x_51; 
x_49 = lean::cnstr_get(x_27, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_27, 1);
lean::inc(x_51);
lean::dec(x_27);
x_45 = x_51;
x_46 = x_49;
goto lbl_47;
}
lbl_47:
{
obj* x_54; 
x_54 = l_Lean_Parser_Syntax_asNode___main(x_46);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; 
x_55 = lean::box(0);
if (lean::obj_tag(x_45) == 0)
{
obj* x_56; obj* x_57; 
x_56 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_57 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_57, 0, x_18);
lean::cnstr_set(x_57, 1, x_36);
lean::cnstr_set(x_57, 2, x_56);
lean::cnstr_set(x_57, 3, x_55);
return x_57;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_45, 0);
lean::inc(x_58);
lean::dec(x_45);
switch (lean::obj_tag(x_58)) {
case 0:
{
obj* x_61; obj* x_64; obj* x_65; obj* x_66; 
x_61 = lean::cnstr_get(x_58, 0);
lean::inc(x_61);
lean::dec(x_58);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_61);
x_65 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_66 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_66, 0, x_18);
lean::cnstr_set(x_66, 1, x_36);
lean::cnstr_set(x_66, 2, x_65);
lean::cnstr_set(x_66, 3, x_64);
return x_66;
}
case 3:
{
obj* x_67; obj* x_68; 
x_67 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_68 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_68, 0, x_18);
lean::cnstr_set(x_68, 1, x_36);
lean::cnstr_set(x_68, 2, x_67);
lean::cnstr_set(x_68, 3, x_55);
return x_68;
}
default:
{
obj* x_70; obj* x_71; 
lean::dec(x_58);
x_70 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_71 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_71, 0, x_18);
lean::cnstr_set(x_71, 1, x_36);
lean::cnstr_set(x_71, 2, x_70);
lean::cnstr_set(x_71, 3, x_55);
return x_71;
}
}
}
}
else
{
obj* x_72; obj* x_74; obj* x_75; obj* x_78; 
x_72 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_set(x_54, 0, lean::box(0));
 x_74 = x_54;
} else {
 lean::inc(x_72);
 lean::dec(x_54);
 x_74 = lean::box(0);
}
x_75 = lean::cnstr_get(x_72, 1);
lean::inc(x_75);
lean::dec(x_72);
x_78 = l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__1(x_75);
if (lean::obj_tag(x_45) == 0)
{
obj* x_80; obj* x_81; 
lean::dec(x_74);
x_80 = lean::box(0);
x_81 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_81, 0, x_18);
lean::cnstr_set(x_81, 1, x_36);
lean::cnstr_set(x_81, 2, x_78);
lean::cnstr_set(x_81, 3, x_80);
return x_81;
}
else
{
obj* x_82; 
x_82 = lean::cnstr_get(x_45, 0);
lean::inc(x_82);
lean::dec(x_45);
switch (lean::obj_tag(x_82)) {
case 0:
{
obj* x_85; obj* x_88; obj* x_89; 
x_85 = lean::cnstr_get(x_82, 0);
lean::inc(x_85);
lean::dec(x_82);
if (lean::is_scalar(x_74)) {
 x_88 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_88 = x_74;
}
lean::cnstr_set(x_88, 0, x_85);
x_89 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_89, 0, x_18);
lean::cnstr_set(x_89, 1, x_36);
lean::cnstr_set(x_89, 2, x_78);
lean::cnstr_set(x_89, 3, x_88);
return x_89;
}
case 3:
{
obj* x_91; obj* x_92; 
lean::dec(x_74);
x_91 = lean::box(0);
x_92 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_92, 0, x_18);
lean::cnstr_set(x_92, 1, x_36);
lean::cnstr_set(x_92, 2, x_78);
lean::cnstr_set(x_92, 3, x_91);
return x_92;
}
default:
{
obj* x_95; obj* x_96; 
lean::dec(x_74);
lean::dec(x_82);
x_95 = lean::box(0);
x_96 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_96, 0, x_18);
lean::cnstr_set(x_96, 1, x_36);
lean::cnstr_set(x_96, 2, x_78);
lean::cnstr_set(x_96, 3, x_95);
return x_96;
}
}
}
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_List_map___main___at_Lean_Parser_command_openSpec_hiding_HasView_x_27___spec__2(x_5);
x_11 = l_Lean_Parser_noKind;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
x_13 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
x_16 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_command_openSpec_hiding;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
else
{
obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_21 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_23 = x_7;
} else {
 lean::inc(x_21);
 lean::dec(x_7);
 x_23 = lean::box(0);
}
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
if (lean::is_scalar(x_23)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_23;
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::box(3);
x_27 = l_Option_getOrElse___main___rarg(x_25, x_26);
lean::dec(x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_13);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_12);
lean::cnstr_set(x_30, 1, x_29);
x_31 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
x_34 = l_Lean_Parser_command_openSpec_hiding;
x_35 = l_Lean_Parser_Syntax_mkNode(x_34, x_33);
return x_35;
}
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_36 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_38 = x_3;
} else {
 lean::inc(x_36);
 lean::dec(x_3);
 x_38 = lean::box(0);
}
x_39 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_39, 0, x_36);
if (lean::is_scalar(x_38)) {
 x_40 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_40 = x_38;
}
lean::cnstr_set(x_40, 0, x_39);
x_41 = lean::box(3);
x_42 = l_Option_getOrElse___main___rarg(x_40, x_41);
lean::dec(x_40);
if (lean::obj_tag(x_7) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_44 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_12);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_46);
x_49 = l_Lean_Parser_command_openSpec_hiding;
x_50 = l_Lean_Parser_Syntax_mkNode(x_49, x_48);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_51 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_53 = x_7;
} else {
 lean::inc(x_51);
 lean::dec(x_7);
 x_53 = lean::box(0);
}
x_54 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_54, 0, x_51);
if (lean::is_scalar(x_53)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_53;
}
lean::cnstr_set(x_55, 0, x_54);
x_56 = l_Option_getOrElse___main___rarg(x_55, x_41);
lean::dec(x_55);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_56);
lean::cnstr_set(x_58, 1, x_13);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_12);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_42);
lean::cnstr_set(x_60, 1, x_59);
x_61 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
x_63 = l_Lean_Parser_command_openSpec_hiding;
x_64 = l_Lean_Parser_Syntax_mkNode(x_63, x_62);
return x_64;
}
}
}
else
{
obj* x_65; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_65 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_67 = x_1;
} else {
 lean::inc(x_65);
 lean::dec(x_1);
 x_67 = lean::box(0);
}
x_68 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_68, 0, x_65);
if (lean::is_scalar(x_67)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_67;
}
lean::cnstr_set(x_69, 0, x_68);
x_70 = lean::box(3);
x_71 = l_Option_getOrElse___main___rarg(x_69, x_70);
lean::dec(x_69);
if (lean::obj_tag(x_3) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_73 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_12);
lean::cnstr_set(x_74, 1, x_73);
x_75 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_74);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_71);
lean::cnstr_set(x_77, 1, x_76);
x_78 = l_Lean_Parser_command_openSpec_hiding;
x_79 = l_Lean_Parser_Syntax_mkNode(x_78, x_77);
return x_79;
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_80 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_82 = x_7;
} else {
 lean::inc(x_80);
 lean::dec(x_7);
 x_82 = lean::box(0);
}
x_83 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_83, 0, x_80);
if (lean::is_scalar(x_82)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_82;
}
lean::cnstr_set(x_84, 0, x_83);
x_85 = l_Option_getOrElse___main___rarg(x_84, x_70);
lean::dec(x_84);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_85);
lean::cnstr_set(x_87, 1, x_13);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_12);
lean::cnstr_set(x_88, 1, x_87);
x_89 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_88);
x_91 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_91, 0, x_71);
lean::cnstr_set(x_91, 1, x_90);
x_92 = l_Lean_Parser_command_openSpec_hiding;
x_93 = l_Lean_Parser_Syntax_mkNode(x_92, x_91);
return x_93;
}
}
else
{
obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_94 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_96 = x_3;
} else {
 lean::inc(x_94);
 lean::dec(x_3);
 x_96 = lean::box(0);
}
x_97 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_97, 0, x_94);
if (lean::is_scalar(x_96)) {
 x_98 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_98 = x_96;
}
lean::cnstr_set(x_98, 0, x_97);
x_99 = l_Option_getOrElse___main___rarg(x_98, x_70);
lean::dec(x_98);
if (lean::obj_tag(x_7) == 0)
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_101 = l_Lean_Parser_detailIdentPartEscaped_HasView_x_27___lambda__2___closed__2;
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_12);
lean::cnstr_set(x_102, 1, x_101);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_99);
lean::cnstr_set(x_103, 1, x_102);
x_104 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_104, 0, x_71);
lean::cnstr_set(x_104, 1, x_103);
x_105 = l_Lean_Parser_command_openSpec_hiding;
x_106 = l_Lean_Parser_Syntax_mkNode(x_105, x_104);
return x_106;
}
else
{
obj* x_107; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_107 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_109 = x_7;
} else {
 lean::inc(x_107);
 lean::dec(x_7);
 x_109 = lean::box(0);
}
x_110 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_110, 0, x_107);
if (lean::is_scalar(x_109)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_109;
}
lean::cnstr_set(x_111, 0, x_110);
x_112 = l_Option_getOrElse___main___rarg(x_111, x_70);
lean::dec(x_111);
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_112);
lean::cnstr_set(x_114, 1, x_13);
x_115 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_115, 0, x_12);
lean::cnstr_set(x_115, 1, x_114);
x_116 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_116, 0, x_99);
lean::cnstr_set(x_116, 1, x_115);
x_117 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_117, 0, x_71);
lean::cnstr_set(x_117, 1, x_116);
x_118 = l_Lean_Parser_command_openSpec_hiding;
x_119 = l_Lean_Parser_Syntax_mkNode(x_118, x_117);
return x_119;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_hiding_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_hiding_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_hiding_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("openSpec");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_Lean_Parser_command_openSpec_renaming_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_Lean_Parser_command_openSpec_only_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_Lean_Parser_command_openSpec_as_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; 
x_2 = lean::box(3);
x_3 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4;
x_0 = x_4;
goto lbl_1;
}
else
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 x_7 = x_3;
} else {
 lean::inc(x_5);
 lean::dec(x_3);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; 
lean::dec(x_7);
x_12 = lean::box(0);
x_0 = x_12;
goto lbl_1;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_22; obj* x_23; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
x_18 = l_Lean_Parser_command_openSpec_as_HasView;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_15);
if (lean::is_scalar(x_7)) {
 x_23 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_23 = x_7;
}
lean::cnstr_set(x_23, 0, x_22);
x_0 = x_23;
goto lbl_1;
}
else
{
obj* x_27; 
lean::dec(x_13);
lean::dec(x_8);
lean::dec(x_7);
x_27 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4;
x_0 = x_27;
goto lbl_1;
}
}
}
lbl_1:
{
obj* x_28; obj* x_30; obj* x_31; 
x_30 = lean::box(3);
x_31 = l_Lean_Parser_Syntax_asNode___main(x_30);
if (lean::obj_tag(x_31) == 0)
{
obj* x_32; 
x_32 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3;
x_28 = x_32;
goto lbl_29;
}
else
{
obj* x_33; obj* x_35; obj* x_36; 
x_33 = lean::cnstr_get(x_31, 0);
if (lean::is_exclusive(x_31)) {
 lean::cnstr_set(x_31, 0, lean::box(0));
 x_35 = x_31;
} else {
 lean::inc(x_33);
 lean::dec(x_31);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
lean::dec(x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_40; 
lean::dec(x_35);
x_40 = lean::box(0);
x_28 = x_40;
goto lbl_29;
}
else
{
obj* x_41; 
x_41 = lean::cnstr_get(x_36, 1);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_43; obj* x_46; obj* x_47; obj* x_50; obj* x_51; 
x_43 = lean::cnstr_get(x_36, 0);
lean::inc(x_43);
lean::dec(x_36);
x_46 = l_Lean_Parser_command_openSpec_only_HasView;
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
lean::dec(x_46);
x_50 = lean::apply_1(x_47, x_43);
if (lean::is_scalar(x_35)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_35;
}
lean::cnstr_set(x_51, 0, x_50);
x_28 = x_51;
goto lbl_29;
}
else
{
obj* x_55; 
lean::dec(x_41);
lean::dec(x_35);
lean::dec(x_36);
x_55 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3;
x_28 = x_55;
goto lbl_29;
}
}
}
lbl_29:
{
obj* x_56; obj* x_58; obj* x_59; 
x_58 = lean::box(3);
x_59 = l_Lean_Parser_Syntax_asNode___main(x_58);
if (lean::obj_tag(x_59) == 0)
{
obj* x_60; 
x_60 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_56 = x_60;
goto lbl_57;
}
else
{
obj* x_61; obj* x_63; obj* x_64; 
x_61 = lean::cnstr_get(x_59, 0);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_set(x_59, 0, lean::box(0));
 x_63 = x_59;
} else {
 lean::inc(x_61);
 lean::dec(x_59);
 x_63 = lean::box(0);
}
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
lean::dec(x_61);
if (lean::obj_tag(x_64) == 0)
{
obj* x_68; 
lean::dec(x_63);
x_68 = lean::box(0);
x_56 = x_68;
goto lbl_57;
}
else
{
obj* x_69; 
x_69 = lean::cnstr_get(x_64, 1);
lean::inc(x_69);
if (lean::obj_tag(x_69) == 0)
{
obj* x_71; obj* x_74; obj* x_75; obj* x_78; obj* x_79; 
x_71 = lean::cnstr_get(x_64, 0);
lean::inc(x_71);
lean::dec(x_64);
x_74 = l_Lean_Parser_command_openSpec_renaming_HasView;
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
lean::dec(x_74);
x_78 = lean::apply_1(x_75, x_71);
if (lean::is_scalar(x_63)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_63;
}
lean::cnstr_set(x_79, 0, x_78);
x_56 = x_79;
goto lbl_57;
}
else
{
obj* x_83; 
lean::dec(x_64);
lean::dec(x_69);
lean::dec(x_63);
x_83 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_56 = x_83;
goto lbl_57;
}
}
}
lbl_57:
{
obj* x_84; obj* x_85; 
x_84 = lean::box(3);
x_85 = l_Lean_Parser_Syntax_asNode___main(x_84);
if (lean::obj_tag(x_85) == 0)
{
obj* x_86; obj* x_87; obj* x_88; 
x_86 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_87 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_88 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_88, 0, x_86);
lean::cnstr_set(x_88, 1, x_0);
lean::cnstr_set(x_88, 2, x_28);
lean::cnstr_set(x_88, 3, x_56);
lean::cnstr_set(x_88, 4, x_87);
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_92; 
x_89 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_set(x_85, 0, lean::box(0));
 x_91 = x_85;
} else {
 lean::inc(x_89);
 lean::dec(x_85);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_91);
x_96 = lean::box(0);
x_97 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_98 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_0);
lean::cnstr_set(x_98, 2, x_28);
lean::cnstr_set(x_98, 3, x_56);
lean::cnstr_set(x_98, 4, x_96);
return x_98;
}
else
{
obj* x_99; 
x_99 = lean::cnstr_get(x_92, 1);
lean::inc(x_99);
if (lean::obj_tag(x_99) == 0)
{
obj* x_101; obj* x_104; obj* x_105; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_92, 0);
lean::inc(x_101);
lean::dec(x_92);
x_104 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_105 = lean::cnstr_get(x_104, 0);
lean::inc(x_105);
lean::dec(x_104);
x_108 = lean::apply_1(x_105, x_101);
if (lean::is_scalar(x_91)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_91;
}
lean::cnstr_set(x_109, 0, x_108);
x_110 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_111 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_111, 0, x_110);
lean::cnstr_set(x_111, 1, x_0);
lean::cnstr_set(x_111, 2, x_28);
lean::cnstr_set(x_111, 3, x_56);
lean::cnstr_set(x_111, 4, x_109);
return x_111;
}
else
{
obj* x_115; obj* x_116; obj* x_117; 
lean::dec(x_99);
lean::dec(x_92);
lean::dec(x_91);
x_115 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_116 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_117 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_117, 0, x_115);
lean::cnstr_set(x_117, 1, x_0);
lean::cnstr_set(x_117, 2, x_28);
lean::cnstr_set(x_117, 3, x_56);
lean::cnstr_set(x_117, 4, x_116);
return x_117;
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_20; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_18 = x_20;
goto lbl_19;
}
case 3:
{
obj* x_23; 
x_23 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_18 = x_23;
goto lbl_19;
}
default:
{
obj* x_25; 
lean::dec(x_2);
x_25 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_18 = x_25;
goto lbl_19;
}
}
lbl_19:
{
obj* x_26; obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_26 = x_1;
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; obj* x_32; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_1, 1);
lean::inc(x_32);
lean::dec(x_1);
x_26 = x_32;
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_35; obj* x_37; 
x_37 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; 
x_38 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4;
x_35 = x_38;
goto lbl_36;
}
else
{
obj* x_39; obj* x_41; obj* x_42; 
x_39 = lean::cnstr_get(x_37, 0);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_set(x_37, 0, lean::box(0));
 x_41 = x_37;
} else {
 lean::inc(x_39);
 lean::dec(x_37);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
lean::dec(x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; 
lean::dec(x_41);
x_46 = lean::box(0);
x_35 = x_46;
goto lbl_36;
}
else
{
obj* x_47; 
x_47 = lean::cnstr_get(x_42, 1);
lean::inc(x_47);
if (lean::obj_tag(x_47) == 0)
{
obj* x_49; obj* x_52; obj* x_53; obj* x_56; obj* x_57; 
x_49 = lean::cnstr_get(x_42, 0);
lean::inc(x_49);
lean::dec(x_42);
x_52 = l_Lean_Parser_command_openSpec_as_HasView;
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
lean::dec(x_52);
x_56 = lean::apply_1(x_53, x_49);
if (lean::is_scalar(x_41)) {
 x_57 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_57 = x_41;
}
lean::cnstr_set(x_57, 0, x_56);
x_35 = x_57;
goto lbl_36;
}
else
{
obj* x_61; 
lean::dec(x_47);
lean::dec(x_41);
lean::dec(x_42);
x_61 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4;
x_35 = x_61;
goto lbl_36;
}
}
}
lbl_36:
{
obj* x_62; obj* x_63; 
if (lean::obj_tag(x_26) == 0)
{
obj* x_65; 
x_65 = lean::box(3);
x_62 = x_26;
x_63 = x_65;
goto lbl_64;
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_26, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_26, 1);
lean::inc(x_68);
lean::dec(x_26);
x_62 = x_68;
x_63 = x_66;
goto lbl_64;
}
lbl_64:
{
obj* x_71; obj* x_73; 
x_73 = l_Lean_Parser_Syntax_asNode___main(x_63);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; 
x_74 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3;
x_71 = x_74;
goto lbl_72;
}
else
{
obj* x_75; obj* x_77; obj* x_78; 
x_75 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_set(x_73, 0, lean::box(0));
 x_77 = x_73;
} else {
 lean::inc(x_75);
 lean::dec(x_73);
 x_77 = lean::box(0);
}
x_78 = lean::cnstr_get(x_75, 1);
lean::inc(x_78);
lean::dec(x_75);
if (lean::obj_tag(x_78) == 0)
{
obj* x_82; 
lean::dec(x_77);
x_82 = lean::box(0);
x_71 = x_82;
goto lbl_72;
}
else
{
obj* x_83; 
x_83 = lean::cnstr_get(x_78, 1);
lean::inc(x_83);
if (lean::obj_tag(x_83) == 0)
{
obj* x_85; obj* x_88; obj* x_89; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_78, 0);
lean::inc(x_85);
lean::dec(x_78);
x_88 = l_Lean_Parser_command_openSpec_only_HasView;
x_89 = lean::cnstr_get(x_88, 0);
lean::inc(x_89);
lean::dec(x_88);
x_92 = lean::apply_1(x_89, x_85);
if (lean::is_scalar(x_77)) {
 x_93 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_93 = x_77;
}
lean::cnstr_set(x_93, 0, x_92);
x_71 = x_93;
goto lbl_72;
}
else
{
obj* x_97; 
lean::dec(x_78);
lean::dec(x_83);
lean::dec(x_77);
x_97 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3;
x_71 = x_97;
goto lbl_72;
}
}
}
lbl_72:
{
obj* x_98; obj* x_100; obj* x_101; obj* x_103; obj* x_104; 
if (lean::obj_tag(x_62) == 0)
{
obj* x_106; 
x_106 = lean::box(3);
x_103 = x_62;
x_104 = x_106;
goto lbl_105;
}
else
{
obj* x_107; obj* x_109; 
x_107 = lean::cnstr_get(x_62, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_62, 1);
lean::inc(x_109);
lean::dec(x_62);
x_103 = x_109;
x_104 = x_107;
goto lbl_105;
}
lbl_99:
{
obj* x_112; obj* x_113; 
x_112 = lean::box(3);
x_113 = l_Lean_Parser_Syntax_asNode___main(x_112);
if (lean::obj_tag(x_113) == 0)
{
obj* x_114; obj* x_115; 
x_114 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_115 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_115, 0, x_18);
lean::cnstr_set(x_115, 1, x_35);
lean::cnstr_set(x_115, 2, x_71);
lean::cnstr_set(x_115, 3, x_98);
lean::cnstr_set(x_115, 4, x_114);
return x_115;
}
else
{
obj* x_116; obj* x_118; obj* x_119; 
x_116 = lean::cnstr_get(x_113, 0);
if (lean::is_exclusive(x_113)) {
 lean::cnstr_set(x_113, 0, lean::box(0));
 x_118 = x_113;
} else {
 lean::inc(x_116);
 lean::dec(x_113);
 x_118 = lean::box(0);
}
x_119 = lean::cnstr_get(x_116, 1);
lean::inc(x_119);
lean::dec(x_116);
if (lean::obj_tag(x_119) == 0)
{
obj* x_123; obj* x_124; 
lean::dec(x_118);
x_123 = lean::box(0);
x_124 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_124, 0, x_18);
lean::cnstr_set(x_124, 1, x_35);
lean::cnstr_set(x_124, 2, x_71);
lean::cnstr_set(x_124, 3, x_98);
lean::cnstr_set(x_124, 4, x_123);
return x_124;
}
else
{
obj* x_125; 
x_125 = lean::cnstr_get(x_119, 1);
lean::inc(x_125);
if (lean::obj_tag(x_125) == 0)
{
obj* x_127; obj* x_130; obj* x_131; obj* x_134; obj* x_135; obj* x_136; 
x_127 = lean::cnstr_get(x_119, 0);
lean::inc(x_127);
lean::dec(x_119);
x_130 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_131 = lean::cnstr_get(x_130, 0);
lean::inc(x_131);
lean::dec(x_130);
x_134 = lean::apply_1(x_131, x_127);
if (lean::is_scalar(x_118)) {
 x_135 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_135 = x_118;
}
lean::cnstr_set(x_135, 0, x_134);
x_136 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_136, 0, x_18);
lean::cnstr_set(x_136, 1, x_35);
lean::cnstr_set(x_136, 2, x_71);
lean::cnstr_set(x_136, 3, x_98);
lean::cnstr_set(x_136, 4, x_135);
return x_136;
}
else
{
obj* x_140; obj* x_141; 
lean::dec(x_119);
lean::dec(x_118);
lean::dec(x_125);
x_140 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_141 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_141, 0, x_18);
lean::cnstr_set(x_141, 1, x_35);
lean::cnstr_set(x_141, 2, x_71);
lean::cnstr_set(x_141, 3, x_98);
lean::cnstr_set(x_141, 4, x_140);
return x_141;
}
}
}
}
lbl_102:
{
obj* x_142; 
x_142 = l_Lean_Parser_Syntax_asNode___main(x_101);
if (lean::obj_tag(x_142) == 0)
{
obj* x_143; obj* x_144; 
x_143 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_144 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_144, 0, x_18);
lean::cnstr_set(x_144, 1, x_35);
lean::cnstr_set(x_144, 2, x_71);
lean::cnstr_set(x_144, 3, x_100);
lean::cnstr_set(x_144, 4, x_143);
return x_144;
}
else
{
obj* x_145; obj* x_147; obj* x_148; 
x_145 = lean::cnstr_get(x_142, 0);
if (lean::is_exclusive(x_142)) {
 lean::cnstr_set(x_142, 0, lean::box(0));
 x_147 = x_142;
} else {
 lean::inc(x_145);
 lean::dec(x_142);
 x_147 = lean::box(0);
}
x_148 = lean::cnstr_get(x_145, 1);
lean::inc(x_148);
lean::dec(x_145);
if (lean::obj_tag(x_148) == 0)
{
obj* x_152; obj* x_153; 
lean::dec(x_147);
x_152 = lean::box(0);
x_153 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_153, 0, x_18);
lean::cnstr_set(x_153, 1, x_35);
lean::cnstr_set(x_153, 2, x_71);
lean::cnstr_set(x_153, 3, x_100);
lean::cnstr_set(x_153, 4, x_152);
return x_153;
}
else
{
obj* x_154; 
x_154 = lean::cnstr_get(x_148, 1);
lean::inc(x_154);
if (lean::obj_tag(x_154) == 0)
{
obj* x_156; obj* x_159; obj* x_160; obj* x_163; obj* x_164; obj* x_165; 
x_156 = lean::cnstr_get(x_148, 0);
lean::inc(x_156);
lean::dec(x_148);
x_159 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_160 = lean::cnstr_get(x_159, 0);
lean::inc(x_160);
lean::dec(x_159);
x_163 = lean::apply_1(x_160, x_156);
if (lean::is_scalar(x_147)) {
 x_164 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_164 = x_147;
}
lean::cnstr_set(x_164, 0, x_163);
x_165 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_165, 0, x_18);
lean::cnstr_set(x_165, 1, x_35);
lean::cnstr_set(x_165, 2, x_71);
lean::cnstr_set(x_165, 3, x_100);
lean::cnstr_set(x_165, 4, x_164);
return x_165;
}
else
{
obj* x_169; obj* x_170; 
lean::dec(x_147);
lean::dec(x_148);
lean::dec(x_154);
x_169 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1;
x_170 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_170, 0, x_18);
lean::cnstr_set(x_170, 1, x_35);
lean::cnstr_set(x_170, 2, x_71);
lean::cnstr_set(x_170, 3, x_100);
lean::cnstr_set(x_170, 4, x_169);
return x_170;
}
}
}
}
lbl_105:
{
obj* x_171; 
x_171 = l_Lean_Parser_Syntax_asNode___main(x_104);
if (lean::obj_tag(x_171) == 0)
{
if (lean::obj_tag(x_103) == 0)
{
obj* x_172; 
x_172 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_98 = x_172;
goto lbl_99;
}
else
{
obj* x_173; obj* x_176; 
x_173 = lean::cnstr_get(x_103, 0);
lean::inc(x_173);
lean::dec(x_103);
x_176 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_100 = x_176;
x_101 = x_173;
goto lbl_102;
}
}
else
{
obj* x_177; obj* x_179; obj* x_180; 
x_177 = lean::cnstr_get(x_171, 0);
if (lean::is_exclusive(x_171)) {
 lean::cnstr_set(x_171, 0, lean::box(0));
 x_179 = x_171;
} else {
 lean::inc(x_177);
 lean::dec(x_171);
 x_179 = lean::box(0);
}
x_180 = lean::cnstr_get(x_177, 1);
lean::inc(x_180);
lean::dec(x_177);
if (lean::obj_tag(x_180) == 0)
{
obj* x_184; 
lean::dec(x_179);
x_184 = lean::box(0);
if (lean::obj_tag(x_103) == 0)
{
x_98 = x_184;
goto lbl_99;
}
else
{
obj* x_185; 
x_185 = lean::cnstr_get(x_103, 0);
lean::inc(x_185);
lean::dec(x_103);
x_100 = x_184;
x_101 = x_185;
goto lbl_102;
}
}
else
{
obj* x_188; 
x_188 = lean::cnstr_get(x_180, 1);
lean::inc(x_188);
if (lean::obj_tag(x_188) == 0)
{
obj* x_190; obj* x_193; obj* x_194; obj* x_197; obj* x_198; 
x_190 = lean::cnstr_get(x_180, 0);
lean::inc(x_190);
lean::dec(x_180);
x_193 = l_Lean_Parser_command_openSpec_renaming_HasView;
x_194 = lean::cnstr_get(x_193, 0);
lean::inc(x_194);
lean::dec(x_193);
x_197 = lean::apply_1(x_194, x_190);
if (lean::is_scalar(x_179)) {
 x_198 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_198 = x_179;
}
lean::cnstr_set(x_198, 0, x_197);
if (lean::obj_tag(x_103) == 0)
{
x_98 = x_198;
goto lbl_99;
}
else
{
obj* x_199; 
x_199 = lean::cnstr_get(x_103, 0);
lean::inc(x_199);
lean::dec(x_103);
x_100 = x_198;
x_101 = x_199;
goto lbl_102;
}
}
else
{
lean::dec(x_179);
lean::dec(x_188);
lean::dec(x_180);
if (lean::obj_tag(x_103) == 0)
{
obj* x_205; 
x_205 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_98 = x_205;
goto lbl_99;
}
else
{
obj* x_206; obj* x_209; 
x_206 = lean::cnstr_get(x_103, 0);
lean::inc(x_206);
lean::dec(x_103);
x_209 = l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2;
x_100 = x_209;
x_101 = x_206;
goto lbl_102;
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_openSpec_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_1);
x_13 = lean::box(0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_16; 
x_16 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_14 = x_16;
goto lbl_15;
}
else
{
obj* x_17; obj* x_20; obj* x_21; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_17 = lean::cnstr_get(x_3, 0);
lean::inc(x_17);
lean::dec(x_3);
x_20 = l_Lean_Parser_command_openSpec_as_HasView;
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
lean::dec(x_20);
x_24 = lean::apply_1(x_21, x_17);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_13);
x_26 = l_Lean_Parser_noKind;
x_27 = l_Lean_Parser_Syntax_mkNode(x_26, x_25);
x_14 = x_27;
goto lbl_15;
}
lbl_15:
{
obj* x_28; obj* x_30; obj* x_31; 
if (lean::obj_tag(x_5) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_33; 
x_33 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_28 = x_33;
goto lbl_29;
}
else
{
obj* x_34; obj* x_37; 
x_34 = lean::cnstr_get(x_7, 0);
lean::inc(x_34);
lean::dec(x_7);
x_37 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_30 = x_37;
x_31 = x_34;
goto lbl_32;
}
}
else
{
obj* x_38; obj* x_41; obj* x_42; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_5, 0);
lean::inc(x_38);
lean::dec(x_5);
x_41 = l_Lean_Parser_command_openSpec_only_HasView;
x_42 = lean::cnstr_get(x_41, 1);
lean::inc(x_42);
lean::dec(x_41);
x_45 = lean::apply_1(x_42, x_38);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_13);
x_47 = l_Lean_Parser_noKind;
x_48 = l_Lean_Parser_Syntax_mkNode(x_47, x_46);
if (lean::obj_tag(x_7) == 0)
{
x_28 = x_48;
goto lbl_29;
}
else
{
obj* x_49; 
x_49 = lean::cnstr_get(x_7, 0);
lean::inc(x_49);
lean::dec(x_7);
x_30 = x_48;
x_31 = x_49;
goto lbl_32;
}
}
lbl_29:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_52 = l_Lean_Parser_Term_binderContent_HasView_x_27___lambda__2___closed__2;
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_28);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_14);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_12);
lean::cnstr_set(x_55, 1, x_54);
x_56 = l_Lean_Parser_command_openSpec;
x_57 = l_Lean_Parser_Syntax_mkNode(x_56, x_55);
return x_57;
}
else
{
obj* x_58; obj* x_61; obj* x_62; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_58 = lean::cnstr_get(x_9, 0);
lean::inc(x_58);
lean::dec(x_9);
x_61 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_62 = lean::cnstr_get(x_61, 1);
lean::inc(x_62);
lean::dec(x_61);
x_65 = lean::apply_1(x_62, x_58);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_13);
x_67 = l_Lean_Parser_noKind;
x_68 = l_Lean_Parser_Syntax_mkNode(x_67, x_66);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_13);
x_70 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_69);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_28);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_14);
lean::cnstr_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_12);
lean::cnstr_set(x_74, 1, x_73);
x_75 = l_Lean_Parser_command_openSpec;
x_76 = l_Lean_Parser_Syntax_mkNode(x_75, x_74);
return x_76;
}
}
lbl_32:
{
obj* x_77; obj* x_78; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_77 = l_Lean_Parser_command_openSpec_renaming_HasView;
x_78 = lean::cnstr_get(x_77, 1);
lean::inc(x_78);
lean::dec(x_77);
x_81 = lean::apply_1(x_78, x_31);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_13);
x_83 = l_Lean_Parser_noKind;
x_84 = l_Lean_Parser_Syntax_mkNode(x_83, x_82);
if (lean::obj_tag(x_9) == 0)
{
obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_85 = l_Lean_Parser_detailIdent_HasView_x_27___lambda__2___closed__1;
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_84);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_30);
lean::cnstr_set(x_87, 1, x_86);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_14);
lean::cnstr_set(x_88, 1, x_87);
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_12);
lean::cnstr_set(x_89, 1, x_88);
x_90 = l_Lean_Parser_command_openSpec;
x_91 = l_Lean_Parser_Syntax_mkNode(x_90, x_89);
return x_91;
}
else
{
obj* x_92; obj* x_95; obj* x_96; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_92 = lean::cnstr_get(x_9, 0);
lean::inc(x_92);
lean::dec(x_9);
x_95 = l_Lean_Parser_command_openSpec_hiding_HasView;
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
lean::dec(x_95);
x_99 = lean::apply_1(x_96, x_92);
x_100 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_13);
x_101 = l_Lean_Parser_Syntax_mkNode(x_83, x_100);
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_101);
lean::cnstr_set(x_102, 1, x_13);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_84);
lean::cnstr_set(x_103, 1, x_102);
x_104 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_104, 0, x_30);
lean::cnstr_set(x_104, 1, x_103);
x_105 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_105, 0, x_14);
lean::cnstr_set(x_105, 1, x_104);
x_106 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_106, 0, x_12);
lean::cnstr_set(x_106, 1, x_105);
x_107 = l_Lean_Parser_command_openSpec;
x_108 = l_Lean_Parser_Syntax_mkNode(x_107, x_106);
return x_108;
}
}
}
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_openSpec_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_openSpec_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_73; obj* x_74; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_98; 
x_0 = lean::mk_string("as");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
lean::inc(x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_7);
lean::inc(x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_6);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_Lean_Parser_command_openSpec_as;
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_14, 0, x_13);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::mk_string("(");
x_17 = l_String_trim(x_16);
lean::dec(x_16);
lean::inc(x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_20, 0, x_17);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_21, 0, x_17);
lean::closure_set(x_21, 1, x_5);
lean::closure_set(x_21, 2, x_20);
lean::inc(x_10);
lean::inc(x_21);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_10);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_25, 0, x_24);
lean::inc(x_8);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__2), 5, 1);
lean::closure_set(x_27, 0, x_8);
x_28 = lean::mk_string(")");
x_29 = l_String_trim(x_28);
lean::dec(x_28);
lean::inc(x_29);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_32, 0, x_29);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_33, 0, x_29);
lean::closure_set(x_33, 1, x_5);
lean::closure_set(x_33, 2, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_7);
lean::inc(x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_27);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_25);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_Lean_Parser_command_openSpec_only;
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_39, 0, x_38);
lean::closure_set(x_39, 1, x_37);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_40, 0, x_39);
x_41 = lean::mk_string("renaming");
x_42 = l_String_trim(x_41);
lean::dec(x_41);
lean::inc(x_42);
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_45, 0, x_42);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_46, 0, x_42);
lean::closure_set(x_46, 1, x_5);
lean::closure_set(x_46, 2, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_7);
lean::inc(x_21);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_21);
lean::cnstr_set(x_49, 1, x_47);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_50, 0, x_49);
x_51 = lean::mk_string("->");
x_52 = l_String_trim(x_51);
lean::dec(x_51);
lean::inc(x_52);
x_55 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_55, 0, x_52);
x_56 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_56, 0, x_52);
lean::closure_set(x_56, 1, x_5);
lean::closure_set(x_56, 2, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_10);
lean::inc(x_8);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_8);
lean::cnstr_set(x_59, 1, x_57);
x_60 = l_Lean_Parser_command_openSpec_renaming_item;
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_61, 0, x_60);
lean::closure_set(x_61, 1, x_59);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_62, 0, x_61);
lean::inc(x_34);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_62);
lean::cnstr_set(x_64, 1, x_34);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_50);
lean::cnstr_set(x_65, 1, x_64);
x_66 = l_Lean_Parser_command_openSpec_renaming;
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_67, 0, x_66);
lean::closure_set(x_67, 1, x_65);
x_68 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_68, 0, x_67);
x_69 = lean::mk_string("hiding");
x_70 = l_String_trim(x_69);
lean::dec(x_69);
lean::inc(x_70);
x_73 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_73, 0, x_70);
x_74 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_74, 0, x_70);
lean::closure_set(x_74, 1, x_5);
lean::closure_set(x_74, 2, x_73);
lean::inc(x_8);
x_76 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_76, 0, x_8);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_34);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_74);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_21);
lean::cnstr_set(x_79, 1, x_78);
x_80 = l_Lean_Parser_command_openSpec_hiding;
x_81 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_81, 0, x_80);
lean::closure_set(x_81, 1, x_79);
x_82 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_82, 0, x_81);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_7);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_68);
lean::cnstr_set(x_84, 1, x_83);
x_85 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_85, 0, x_40);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_15);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_8);
lean::cnstr_set(x_87, 1, x_86);
x_88 = l_Lean_Parser_command_openSpec;
lean::inc(x_87);
x_90 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_90, 0, x_88);
lean::closure_set(x_90, 1, x_87);
x_91 = l_Lean_Parser_CommandParserM_Monad___closed__1;
x_92 = l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
x_93 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_94 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_95 = l_Lean_Parser_command_openSpec_HasView;
x_96 = l_Lean_Parser_Combinators_node_view___rarg(x_91, x_92, x_93, x_94, x_88, x_87, x_95);
lean::dec(x_87);
x_98 = l_Lean_Parser_Combinators_many1_view___rarg(x_91, x_92, x_93, x_94, x_90, x_96);
lean::dec(x_90);
return x_98;
}
}
obj* _init_l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_60; obj* x_63; obj* x_65; obj* x_67; obj* x_68; obj* x_70; obj* x_73; obj* x_76; obj* x_78; obj* x_80; obj* x_82; obj* x_85; obj* x_88; obj* x_91; obj* x_93; obj* x_95; 
x_0 = lean::box(0);
x_1 = lean::mk_string("as");
x_2 = lean::mk_nat_obj(0u);
x_3 = l_Lean_Parser_symbol_tokens___rarg(x_1, x_2);
lean::dec(x_1);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_0, x_0);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_3, x_5);
lean::dec(x_3);
x_8 = l_Lean_Parser_tokens___rarg(x_6);
lean::dec(x_6);
x_10 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
x_12 = lean::mk_string("(");
x_13 = l_Lean_Parser_symbol_tokens___rarg(x_12, x_2);
lean::dec(x_12);
x_15 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_5);
x_16 = l_Lean_Parser_tokens___rarg(x_15);
lean::dec(x_15);
x_18 = l_Lean_Parser_tokens___rarg(x_16);
lean::dec(x_16);
x_20 = l_Lean_Parser_tokens___rarg(x_0);
x_21 = lean::mk_string(")");
x_22 = l_Lean_Parser_symbol_tokens___rarg(x_21, x_2);
lean::dec(x_21);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_22, x_0);
lean::dec(x_22);
x_26 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_24);
lean::dec(x_20);
x_28 = l_Lean_Parser_List_cons_tokens___rarg(x_18, x_26);
lean::dec(x_18);
x_30 = l_Lean_Parser_tokens___rarg(x_28);
lean::dec(x_28);
x_32 = l_Lean_Parser_tokens___rarg(x_30);
lean::dec(x_30);
x_34 = lean::mk_string("renaming");
x_35 = l_Lean_Parser_symbol_tokens___rarg(x_34, x_2);
lean::dec(x_34);
x_37 = l_Lean_Parser_List_cons_tokens___rarg(x_35, x_0);
lean::dec(x_35);
x_39 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_37);
lean::dec(x_37);
x_41 = l_Lean_Parser_tokens___rarg(x_39);
lean::dec(x_39);
x_43 = l_Lean_Parser_tokens___rarg(x_41);
lean::dec(x_41);
x_45 = lean::mk_string("->");
x_46 = l_Lean_Parser_symbol_tokens___rarg(x_45, x_2);
lean::dec(x_45);
x_48 = l_Lean_Parser_List_cons_tokens___rarg(x_46, x_5);
lean::dec(x_5);
lean::dec(x_46);
x_51 = l_Lean_Parser_List_cons_tokens___rarg(x_0, x_48);
lean::dec(x_48);
x_53 = l_Lean_Parser_tokens___rarg(x_51);
lean::dec(x_51);
x_55 = l_Lean_Parser_tokens___rarg(x_53);
lean::dec(x_53);
x_57 = l_Lean_Parser_List_cons_tokens___rarg(x_55, x_24);
lean::dec(x_24);
lean::dec(x_55);
x_60 = l_Lean_Parser_List_cons_tokens___rarg(x_43, x_57);
lean::dec(x_57);
lean::dec(x_43);
x_63 = l_Lean_Parser_tokens___rarg(x_60);
lean::dec(x_60);
x_65 = l_Lean_Parser_tokens___rarg(x_63);
lean::dec(x_63);
x_67 = lean::mk_string("hiding");
x_68 = l_Lean_Parser_symbol_tokens___rarg(x_67, x_2);
lean::dec(x_67);
x_70 = l_Lean_Parser_List_cons_tokens___rarg(x_68, x_26);
lean::dec(x_26);
lean::dec(x_68);
x_73 = l_Lean_Parser_List_cons_tokens___rarg(x_13, x_70);
lean::dec(x_70);
lean::dec(x_13);
x_76 = l_Lean_Parser_tokens___rarg(x_73);
lean::dec(x_73);
x_78 = l_Lean_Parser_tokens___rarg(x_76);
lean::dec(x_76);
x_80 = l_Lean_Parser_List_cons_tokens___rarg(x_78, x_0);
lean::dec(x_78);
x_82 = l_Lean_Parser_List_cons_tokens___rarg(x_65, x_80);
lean::dec(x_80);
lean::dec(x_65);
x_85 = l_Lean_Parser_List_cons_tokens___rarg(x_32, x_82);
lean::dec(x_82);
lean::dec(x_32);
x_88 = l_Lean_Parser_List_cons_tokens___rarg(x_10, x_85);
lean::dec(x_85);
lean::dec(x_10);
x_91 = l_Lean_Parser_List_cons_tokens___rarg(x_0, x_88);
lean::dec(x_88);
x_93 = l_Lean_Parser_tokens___rarg(x_91);
lean::dec(x_91);
x_95 = l_Lean_Parser_tokens___rarg(x_93);
lean::dec(x_93);
return x_95;
}
}
obj* _init_l_Lean_Parser_command_openSpec_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_73; obj* x_74; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_0 = lean::mk_string("as");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
lean::inc(x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_7);
lean::inc(x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_6);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_Lean_Parser_command_openSpec_as;
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_14, 0, x_13);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::mk_string("(");
x_17 = l_String_trim(x_16);
lean::dec(x_16);
lean::inc(x_17);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_20, 0, x_17);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_21, 0, x_17);
lean::closure_set(x_21, 1, x_5);
lean::closure_set(x_21, 2, x_20);
lean::inc(x_10);
lean::inc(x_21);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_21);
lean::cnstr_set(x_24, 1, x_10);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_25, 0, x_24);
lean::inc(x_8);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__2), 5, 1);
lean::closure_set(x_27, 0, x_8);
x_28 = lean::mk_string(")");
x_29 = l_String_trim(x_28);
lean::dec(x_28);
lean::inc(x_29);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_32, 0, x_29);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_33, 0, x_29);
lean::closure_set(x_33, 1, x_5);
lean::closure_set(x_33, 2, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_7);
lean::inc(x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_27);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_25);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_Lean_Parser_command_openSpec_only;
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_39, 0, x_38);
lean::closure_set(x_39, 1, x_37);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_40, 0, x_39);
x_41 = lean::mk_string("renaming");
x_42 = l_String_trim(x_41);
lean::dec(x_41);
lean::inc(x_42);
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_45, 0, x_42);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_46, 0, x_42);
lean::closure_set(x_46, 1, x_5);
lean::closure_set(x_46, 2, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_7);
lean::inc(x_21);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_21);
lean::cnstr_set(x_49, 1, x_47);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_50, 0, x_49);
x_51 = lean::mk_string("->");
x_52 = l_String_trim(x_51);
lean::dec(x_51);
lean::inc(x_52);
x_55 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_55, 0, x_52);
x_56 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_56, 0, x_52);
lean::closure_set(x_56, 1, x_5);
lean::closure_set(x_56, 2, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_10);
lean::inc(x_8);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_8);
lean::cnstr_set(x_59, 1, x_57);
x_60 = l_Lean_Parser_command_openSpec_renaming_item;
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_61, 0, x_60);
lean::closure_set(x_61, 1, x_59);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_62, 0, x_61);
lean::inc(x_34);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_62);
lean::cnstr_set(x_64, 1, x_34);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_50);
lean::cnstr_set(x_65, 1, x_64);
x_66 = l_Lean_Parser_command_openSpec_renaming;
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_67, 0, x_66);
lean::closure_set(x_67, 1, x_65);
x_68 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_68, 0, x_67);
x_69 = lean::mk_string("hiding");
x_70 = l_String_trim(x_69);
lean::dec(x_69);
lean::inc(x_70);
x_73 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_73, 0, x_70);
x_74 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_74, 0, x_70);
lean::closure_set(x_74, 1, x_5);
lean::closure_set(x_74, 2, x_73);
lean::inc(x_8);
x_76 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_76, 0, x_8);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_34);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_74);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_21);
lean::cnstr_set(x_79, 1, x_78);
x_80 = l_Lean_Parser_command_openSpec_hiding;
x_81 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_81, 0, x_80);
lean::closure_set(x_81, 1, x_79);
x_82 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_82, 0, x_81);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_7);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_68);
lean::cnstr_set(x_84, 1, x_83);
x_85 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_85, 0, x_40);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_15);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_8);
lean::cnstr_set(x_87, 1, x_86);
x_88 = l_Lean_Parser_command_openSpec;
x_89 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_89, 0, x_88);
lean::closure_set(x_89, 1, x_87);
return x_89;
}
}
obj* l_Lean_Parser_command_openSpec_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Parser_command_openSpec_Parser___closed__1;
x_5 = l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3(x_4, x_0, x_1, x_2, x_3);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_open() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("open");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = l_Lean_Parser_command_openSpec_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_Parser_command_openSpec_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_12 = l_List_map___main___rarg(x_11, x_8);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3;
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_13; 
x_13 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3;
return x_13;
}
else
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
lean::dec(x_9);
x_17 = lean::box(0);
x_1 = x_17;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_20; obj* x_23; obj* x_26; 
x_20 = lean::cnstr_get(x_9, 1);
lean::inc(x_20);
lean::dec(x_9);
x_23 = lean::cnstr_get(x_18, 0);
lean::inc(x_23);
lean::dec(x_18);
if (lean::is_scalar(x_8)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_8;
}
lean::cnstr_set(x_26, 0, x_23);
if (lean::obj_tag(x_20) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::box(3);
x_28 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_30; 
x_29 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_26);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_39; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_38 = l_List_map___main___rarg(x_37, x_34);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_26);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
else
{
obj* x_40; 
x_40 = lean::cnstr_get(x_20, 0);
lean::inc(x_40);
lean::dec(x_20);
x_1 = x_26;
x_2 = x_40;
goto lbl_3;
}
}
case 3:
{
obj* x_44; 
lean::dec(x_8);
x_44 = lean::cnstr_get(x_9, 1);
lean::inc(x_44);
lean::dec(x_9);
if (lean::obj_tag(x_44) == 0)
{
obj* x_47; 
x_47 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3;
return x_47;
}
else
{
obj* x_48; obj* x_51; 
x_48 = lean::cnstr_get(x_44, 0);
lean::inc(x_48);
lean::dec(x_44);
x_51 = lean::box(0);
x_1 = x_51;
x_2 = x_48;
goto lbl_3;
}
}
default:
{
obj* x_54; 
lean::dec(x_8);
lean::dec(x_18);
x_54 = lean::cnstr_get(x_9, 1);
lean::inc(x_54);
lean::dec(x_9);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; 
x_57 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3;
return x_57;
}
else
{
obj* x_58; obj* x_61; 
x_58 = lean::cnstr_get(x_54, 0);
lean::inc(x_58);
lean::dec(x_54);
x_61 = lean::box(0);
x_1 = x_61;
x_2 = x_58;
goto lbl_3;
}
}
}
}
}
lbl_3:
{
obj* x_62; 
x_62 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; 
x_63 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_1);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
else
{
obj* x_65; obj* x_68; obj* x_71; obj* x_72; obj* x_73; 
x_65 = lean::cnstr_get(x_62, 0);
lean::inc(x_65);
lean::dec(x_62);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
lean::dec(x_65);
x_71 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_72 = l_List_map___main___rarg(x_71, x_68);
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_1);
lean::cnstr_set(x_73, 1, x_72);
return x_73;
}
}
}
}
obj* _init_l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_Parser_command_openSpec_HasView;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Parser_command_open_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1;
x_7 = l_List_map___main___rarg(x_6, x_3);
x_8 = l_Lean_Parser_noKind;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
if (lean::obj_tag(x_1) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_12 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = l_Lean_Parser_command_open;
x_15 = l_Lean_Parser_Syntax_mkNode(x_14, x_13);
return x_15;
}
else
{
obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_16);
if (lean::is_scalar(x_18)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_18;
}
lean::cnstr_set(x_20, 0, x_19);
x_21 = lean::box(3);
x_22 = l_Option_getOrElse___main___rarg(x_20, x_21);
lean::dec(x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_11);
x_25 = l_Lean_Parser_command_open;
x_26 = l_Lean_Parser_Syntax_mkNode(x_25, x_24);
return x_26;
}
}
}
obj* _init_l_Lean_Parser_command_open_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_open_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_open_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_open_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_open_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_10; 
x_0 = lean::mk_string("open");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens;
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_10 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_open_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::mk_string("open");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_Parser), 4, 0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_Lean_Parser_command_open_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_open;
x_5 = l_Lean_Parser_command_open_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_export() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("export");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_12 = l_List_map___main___rarg(x_11, x_8);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_Lean_Parser_command_export_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_13; 
x_13 = l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1;
return x_13;
}
else
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
lean::dec(x_9);
x_17 = lean::box(0);
x_1 = x_17;
x_2 = x_14;
goto lbl_3;
}
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_20; obj* x_23; obj* x_26; 
x_20 = lean::cnstr_get(x_9, 1);
lean::inc(x_20);
lean::dec(x_9);
x_23 = lean::cnstr_get(x_18, 0);
lean::inc(x_23);
lean::dec(x_18);
if (lean::is_scalar(x_8)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_8;
}
lean::cnstr_set(x_26, 0, x_23);
if (lean::obj_tag(x_20) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::box(3);
x_28 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_30; 
x_29 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_26);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_39; 
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_38 = l_List_map___main___rarg(x_37, x_34);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_26);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
else
{
obj* x_40; 
x_40 = lean::cnstr_get(x_20, 0);
lean::inc(x_40);
lean::dec(x_20);
x_1 = x_26;
x_2 = x_40;
goto lbl_3;
}
}
case 3:
{
obj* x_44; 
lean::dec(x_8);
x_44 = lean::cnstr_get(x_9, 1);
lean::inc(x_44);
lean::dec(x_9);
if (lean::obj_tag(x_44) == 0)
{
obj* x_47; 
x_47 = l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1;
return x_47;
}
else
{
obj* x_48; obj* x_51; 
x_48 = lean::cnstr_get(x_44, 0);
lean::inc(x_48);
lean::dec(x_44);
x_51 = lean::box(0);
x_1 = x_51;
x_2 = x_48;
goto lbl_3;
}
}
default:
{
obj* x_54; 
lean::dec(x_8);
lean::dec(x_18);
x_54 = lean::cnstr_get(x_9, 1);
lean::inc(x_54);
lean::dec(x_9);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; 
x_57 = l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1;
return x_57;
}
else
{
obj* x_58; obj* x_61; 
x_58 = lean::cnstr_get(x_54, 0);
lean::inc(x_58);
lean::dec(x_54);
x_61 = lean::box(0);
x_1 = x_61;
x_2 = x_58;
goto lbl_3;
}
}
}
}
}
lbl_3:
{
obj* x_62; 
x_62 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; 
x_63 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1;
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_1);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
else
{
obj* x_65; obj* x_68; obj* x_71; obj* x_72; obj* x_73; 
x_65 = lean::cnstr_get(x_62, 0);
lean::inc(x_65);
lean::dec(x_62);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
lean::dec(x_65);
x_71 = l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2;
x_72 = l_List_map___main___rarg(x_71, x_68);
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_1);
lean::cnstr_set(x_73, 1, x_72);
return x_73;
}
}
}
}
obj* l_Lean_Parser_command_export_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1;
x_7 = l_List_map___main___rarg(x_6, x_3);
x_8 = l_Lean_Parser_noKind;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
if (lean::obj_tag(x_1) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_12 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = l_Lean_Parser_command_export;
x_15 = l_Lean_Parser_Syntax_mkNode(x_14, x_13);
return x_15;
}
else
{
obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_16);
if (lean::is_scalar(x_18)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_18;
}
lean::cnstr_set(x_20, 0, x_19);
x_21 = lean::box(3);
x_22 = l_Option_getOrElse___main___rarg(x_20, x_21);
lean::dec(x_20);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_11);
x_25 = l_Lean_Parser_command_export;
x_26 = l_Lean_Parser_Syntax_mkNode(x_25, x_24);
return x_26;
}
}
}
obj* _init_l_Lean_Parser_command_export_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_export_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_export_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_export_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_export_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_10; 
x_0 = lean::mk_string("export");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens;
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_10 = l_Lean_Parser_tokens___rarg(x_7);
lean::dec(x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_command_export_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::mk_string("export");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_openSpec_Parser), 4, 0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_Lean_Parser_command_export_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_export;
x_5 = l_Lean_Parser_command_export_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_section() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("section");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_7 = x_2;
} else {
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; 
lean::dec(x_7);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_0);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
switch (lean::obj_tag(x_15)) {
case 1:
{
obj* x_18; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
if (lean::is_scalar(x_7)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_7;
}
lean::cnstr_set(x_21, 0, x_18);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_0);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
case 3:
{
obj* x_24; obj* x_25; 
lean::dec(x_7);
x_24 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_0);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
default:
{
obj* x_28; obj* x_29; 
lean::dec(x_7);
lean::dec(x_15);
x_28 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_13);
x_33 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_0);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; 
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_set(x_33, 0, lean::box(0));
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_44; 
lean::dec(x_38);
x_43 = lean::box(0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_18);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
else
{
obj* x_45; 
x_45 = lean::cnstr_get(x_39, 1);
lean::inc(x_45);
if (lean::obj_tag(x_45) == 0)
{
obj* x_47; 
x_47 = lean::cnstr_get(x_39, 0);
lean::inc(x_47);
lean::dec(x_39);
switch (lean::obj_tag(x_47)) {
case 1:
{
obj* x_50; obj* x_53; obj* x_54; 
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
lean::dec(x_47);
if (lean::is_scalar(x_38)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_38;
}
lean::cnstr_set(x_53, 0, x_50);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_18);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
case 3:
{
obj* x_56; obj* x_57; 
lean::dec(x_38);
x_56 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_18);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
default:
{
obj* x_60; obj* x_61; 
lean::dec(x_47);
lean::dec(x_38);
x_60 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_18);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
obj* x_65; obj* x_66; 
lean::dec(x_39);
lean::dec(x_45);
lean::dec(x_38);
x_65 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_18);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Option_getOrElse___main___rarg(x_1, x_2);
x_4 = l_Lean_Parser_noKind;
x_5 = l_Lean_Parser_Syntax_mkNode(x_4, x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
x_8 = l_Lean_Parser_command_section;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
return x_9;
}
}
obj* l_Lean_Parser_command_section_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; 
x_7 = l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1;
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = l_Lean_Parser_noKind;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_6);
x_16 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_Lean_Parser_command_section;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
}
else
{
obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_20 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_22 = x_1;
} else {
 lean::inc(x_20);
 lean::dec(x_1);
 x_22 = lean::box(0);
}
x_23 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::box(3);
x_26 = l_Option_getOrElse___main___rarg(x_24, x_25);
lean::dec(x_24);
if (lean::obj_tag(x_3) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_28 = l_Lean_Parser_detailIdent_HasView_x_27___lambda__2___closed__1;
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_26);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_command_section;
x_31 = l_Lean_Parser_Syntax_mkNode(x_30, x_29);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_32 = lean::cnstr_get(x_3, 0);
lean::inc(x_32);
lean::dec(x_3);
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_32);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_6);
x_37 = l_Lean_Parser_noKind;
x_38 = l_Lean_Parser_Syntax_mkNode(x_37, x_36);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_6);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_26);
lean::cnstr_set(x_40, 1, x_39);
x_41 = l_Lean_Parser_command_section;
x_42 = l_Lean_Parser_Syntax_mkNode(x_41, x_40);
return x_42;
}
}
}
}
obj* _init_l_Lean_Parser_command_section_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_section_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_section_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_section_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_section_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
x_0 = lean::mk_string("section");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_11 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_section_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("section");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_section_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_section;
x_5 = l_Lean_Parser_command_section_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_namespace() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("namespace");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_namespace_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_27; obj* x_28; 
x_27 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_18);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
else
{
obj* x_29; 
x_29 = lean::cnstr_get(x_1, 0);
lean::inc(x_29);
lean::dec(x_1);
switch (lean::obj_tag(x_29)) {
case 1:
{
obj* x_32; obj* x_35; 
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
lean::dec(x_29);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
case 3:
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
default:
{
obj* x_39; obj* x_40; 
lean::dec(x_29);
x_39 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_namespace_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
if (lean::obj_tag(x_1) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = l_Lean_Parser_command_namespace;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_13);
if (lean::is_scalar(x_15)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_15;
}
lean::cnstr_set(x_17, 0, x_16);
x_18 = lean::box(3);
x_19 = l_Option_getOrElse___main___rarg(x_17, x_18);
lean::dec(x_17);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_8);
x_22 = l_Lean_Parser_command_namespace;
x_23 = l_Lean_Parser_Syntax_mkNode(x_22, x_21);
return x_23;
}
}
}
obj* _init_l_Lean_Parser_command_namespace_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_namespace_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_namespace_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_namespace_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_namespace_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_9; 
x_0 = lean::mk_string("namespace");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_5);
lean::dec(x_5);
lean::dec(x_2);
x_9 = l_Lean_Parser_tokens___rarg(x_6);
lean::dec(x_6);
return x_9;
}
}
obj* _init_l_Lean_Parser_command_namespace_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::mk_string("namespace");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_Lean_Parser_command_namespace_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_namespace;
x_5 = l_Lean_Parser_command_namespace_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_variable() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("variable");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_Lean_Parser_Term_binder_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_Term_binder_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(3);
x_6 = lean::apply_1(x_2, x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2;
return x_0;
}
}
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_18; obj* x_21; 
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_18);
if (lean::obj_tag(x_1) == 0)
{
obj* x_22; obj* x_23; 
x_22 = l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1;
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_28; obj* x_31; obj* x_32; 
x_24 = lean::cnstr_get(x_1, 0);
lean::inc(x_24);
lean::dec(x_1);
x_27 = l_Lean_Parser_Term_binder_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
lean::dec(x_27);
x_31 = lean::apply_1(x_28, x_24);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_21);
lean::cnstr_set(x_32, 1, x_31);
return x_32;
}
}
case 3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_33; 
x_33 = l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2;
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_42; obj* x_43; 
x_34 = lean::cnstr_get(x_1, 0);
lean::inc(x_34);
lean::dec(x_1);
x_37 = lean::box(0);
x_38 = l_Lean_Parser_Term_binder_HasView;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
lean::dec(x_38);
x_42 = lean::apply_1(x_39, x_34);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_37);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
default:
{
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_45; 
x_45 = l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2;
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_54; obj* x_55; 
x_46 = lean::cnstr_get(x_1, 0);
lean::inc(x_46);
lean::dec(x_1);
x_49 = lean::box(0);
x_50 = l_Lean_Parser_Term_binder_HasView;
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
lean::dec(x_50);
x_54 = lean::apply_1(x_51, x_46);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_49);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
obj* l_Lean_Parser_command_variable_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_Lean_Parser_Term_binder_HasView;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::apply_1(x_7, x_3);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
if (lean::obj_tag(x_1) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = l_Lean_Parser_command_variable;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_17 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_19 = x_1;
} else {
 lean::inc(x_17);
 lean::dec(x_1);
 x_19 = lean::box(0);
}
x_20 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_20, 0, x_17);
if (lean::is_scalar(x_19)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_19;
}
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::box(3);
x_23 = l_Option_getOrElse___main___rarg(x_21, x_22);
lean::dec(x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_12);
x_26 = l_Lean_Parser_command_variable;
x_27 = l_Lean_Parser_Syntax_mkNode(x_26, x_25);
return x_27;
}
}
}
obj* _init_l_Lean_Parser_command_variable_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variable_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variable_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_variable_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_variable_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_12; 
x_0 = lean::mk_string("variable");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = l_Lean_Parser_Term_binder_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = lean::box(0);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_6);
lean::dec(x_5);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_7);
lean::dec(x_7);
lean::dec(x_2);
x_12 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
return x_12;
}
}
obj* _init_l_Lean_Parser_command_variable_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("variable");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binder_Parser), 5, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_variable_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_variable;
x_5 = l_Lean_Parser_command_variable_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_variables() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("variables");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_Term_bracketedBinders_HasView;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(3);
x_6 = lean::apply_1(x_2, x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1;
return x_0;
}
}
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_18; obj* x_21; 
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_18);
if (lean::obj_tag(x_1) == 0)
{
obj* x_22; obj* x_23; 
x_22 = l_Lean_Parser_command_declSig_HasView_x_27___lambda__1___closed__2;
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_28; obj* x_31; obj* x_32; 
x_24 = lean::cnstr_get(x_1, 0);
lean::inc(x_24);
lean::dec(x_1);
x_27 = l_Lean_Parser_Term_bracketedBinders_HasView;
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
lean::dec(x_27);
x_31 = lean::apply_1(x_28, x_24);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_21);
lean::cnstr_set(x_32, 1, x_31);
return x_32;
}
}
case 3:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_33; 
x_33 = l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1;
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_42; obj* x_43; 
x_34 = lean::cnstr_get(x_1, 0);
lean::inc(x_34);
lean::dec(x_1);
x_37 = lean::box(0);
x_38 = l_Lean_Parser_Term_bracketedBinders_HasView;
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
lean::dec(x_38);
x_42 = lean::apply_1(x_39, x_34);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_37);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
default:
{
lean::dec(x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_45; 
x_45 = l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1;
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_54; obj* x_55; 
x_46 = lean::cnstr_get(x_1, 0);
lean::inc(x_46);
lean::dec(x_1);
x_49 = lean::box(0);
x_50 = l_Lean_Parser_Term_bracketedBinders_HasView;
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
lean::dec(x_50);
x_54 = lean::apply_1(x_51, x_46);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_49);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
obj* l_Lean_Parser_command_variables_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_Lean_Parser_Term_bracketedBinders_HasView;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::apply_1(x_7, x_3);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
if (lean::obj_tag(x_1) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = l_Lean_Parser_command_variables;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_17 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_19 = x_1;
} else {
 lean::inc(x_17);
 lean::dec(x_1);
 x_19 = lean::box(0);
}
x_20 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_20, 0, x_17);
if (lean::is_scalar(x_19)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_19;
}
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::box(3);
x_23 = l_Option_getOrElse___main___rarg(x_21, x_22);
lean::dec(x_21);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_12);
x_26 = l_Lean_Parser_command_variables;
x_27 = l_Lean_Parser_Syntax_mkNode(x_26, x_25);
return x_27;
}
}
}
obj* _init_l_Lean_Parser_command_variables_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variables_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variables_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_variables_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_variables_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_12; 
x_0 = lean::mk_string("variables");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = l_Lean_Parser_Term_bracketedBinders_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = lean::box(0);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_6);
lean::dec(x_5);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_7);
lean::dec(x_7);
lean::dec(x_2);
x_12 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
return x_12;
}
}
obj* _init_l_Lean_Parser_command_variables_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("variables");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bracketedBinders_Parser), 5, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_variables_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_variables;
x_5 = l_Lean_Parser_command_variables_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_include() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("include");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__1(x_8);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_Lean_Parser_command_include_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_39; obj* x_42; obj* x_43; 
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__1(x_39);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_18);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
}
obj* l_Lean_Parser_command_include_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_List_map___main___at_Lean_Parser_command_include_HasView_x_27___spec__2(x_3);
x_7 = l_Lean_Parser_noKind;
x_8 = l_Lean_Parser_Syntax_mkNode(x_7, x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
if (lean::obj_tag(x_1) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_11 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_Lean_Parser_command_include;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_15);
if (lean::is_scalar(x_17)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_17;
}
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::box(3);
x_21 = l_Option_getOrElse___main___rarg(x_19, x_20);
lean::dec(x_19);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_10);
x_24 = l_Lean_Parser_command_include;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
}
}
obj* _init_l_Lean_Parser_command_include_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_include_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_include_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_include_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_include_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
x_0 = lean::mk_string("include ");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_11 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_include_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("include ");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_include_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_include;
x_5 = l_Lean_Parser_command_include_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_omit() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("omit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__1(x_8);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_Lean_Parser_command_omit_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_39; obj* x_42; obj* x_43; 
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__1(x_39);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_18);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
}
obj* l_Lean_Parser_command_omit_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_List_map___main___at_Lean_Parser_command_omit_HasView_x_27___spec__2(x_3);
x_7 = l_Lean_Parser_noKind;
x_8 = l_Lean_Parser_Syntax_mkNode(x_7, x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
if (lean::obj_tag(x_1) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_11 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_Lean_Parser_command_omit;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_15);
if (lean::is_scalar(x_17)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_17;
}
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::box(3);
x_21 = l_Option_getOrElse___main___rarg(x_19, x_20);
lean::dec(x_19);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_10);
x_24 = l_Lean_Parser_command_omit;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
}
}
obj* _init_l_Lean_Parser_command_omit_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_omit_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_omit_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_omit_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_omit_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
x_0 = lean::mk_string("omit ");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_11 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_omit_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("omit ");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_omit_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_omit;
x_5 = l_Lean_Parser_command_omit_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_end() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("end");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_7 = x_2;
} else {
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; 
lean::dec(x_7);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_0);
return x_12;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
switch (lean::obj_tag(x_15)) {
case 1:
{
obj* x_18; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
if (lean::is_scalar(x_7)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_7;
}
lean::cnstr_set(x_21, 0, x_18);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_0);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
case 3:
{
obj* x_24; obj* x_25; 
lean::dec(x_7);
x_24 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_0);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
default:
{
obj* x_28; obj* x_29; 
lean::dec(x_7);
lean::dec(x_15);
x_28 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_13);
x_33 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_0);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; 
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_set(x_33, 0, lean::box(0));
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
if (lean::obj_tag(x_39) == 0)
{
obj* x_43; obj* x_44; 
lean::dec(x_38);
x_43 = lean::box(0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_18);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
else
{
obj* x_45; 
x_45 = lean::cnstr_get(x_39, 1);
lean::inc(x_45);
if (lean::obj_tag(x_45) == 0)
{
obj* x_47; 
x_47 = lean::cnstr_get(x_39, 0);
lean::inc(x_47);
lean::dec(x_39);
switch (lean::obj_tag(x_47)) {
case 1:
{
obj* x_50; obj* x_53; obj* x_54; 
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
lean::dec(x_47);
if (lean::is_scalar(x_38)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_38;
}
lean::cnstr_set(x_53, 0, x_50);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_18);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
case 3:
{
obj* x_56; obj* x_57; 
lean::dec(x_38);
x_56 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_18);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
default:
{
obj* x_60; obj* x_61; 
lean::dec(x_47);
lean::dec(x_38);
x_60 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_18);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
obj* x_65; obj* x_66; 
lean::dec(x_39);
lean::dec(x_45);
lean::dec(x_38);
x_65 = l_Lean_Parser_command_NotationSpec_HasView_x_27___lambda__1___closed__4;
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_18);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Option_getOrElse___main___rarg(x_1, x_2);
x_4 = l_Lean_Parser_noKind;
x_5 = l_Lean_Parser_Syntax_mkNode(x_4, x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
x_8 = l_Lean_Parser_command_end;
x_9 = l_Lean_Parser_Syntax_mkNode(x_8, x_7);
return x_9;
}
}
obj* l_Lean_Parser_command_end_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; 
x_7 = l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1;
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
x_13 = l_Lean_Parser_noKind;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_6);
x_16 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_Lean_Parser_command_end;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
}
else
{
obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_20 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_22 = x_1;
} else {
 lean::inc(x_20);
 lean::dec(x_1);
 x_22 = lean::box(0);
}
x_23 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::box(3);
x_26 = l_Option_getOrElse___main___rarg(x_24, x_25);
lean::dec(x_24);
if (lean::obj_tag(x_3) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_28 = l_Lean_Parser_detailIdent_HasView_x_27___lambda__2___closed__1;
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_26);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_command_end;
x_31 = l_Lean_Parser_Syntax_mkNode(x_30, x_29);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_32 = lean::cnstr_get(x_3, 0);
lean::inc(x_32);
lean::dec(x_3);
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_32);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_6);
x_37 = l_Lean_Parser_noKind;
x_38 = l_Lean_Parser_Syntax_mkNode(x_37, x_36);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_6);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_26);
lean::cnstr_set(x_40, 1, x_39);
x_41 = l_Lean_Parser_command_end;
x_42 = l_Lean_Parser_Syntax_mkNode(x_41, x_40);
return x_42;
}
}
}
}
obj* _init_l_Lean_Parser_command_end_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_end_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_end_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_end_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_end_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
x_0 = lean::mk_string("end");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_11 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
return x_11;
}
}
obj* _init_l_Lean_Parser_command_end_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("end");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_end_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_end;
x_5 = l_Lean_Parser_command_end_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_universes() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("universes");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__1(x_8);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_Lean_Parser_command_universes_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_29; 
x_29 = lean::box(3);
x_27 = x_29;
goto lbl_28;
}
else
{
obj* x_30; 
x_30 = lean::cnstr_get(x_1, 0);
lean::inc(x_30);
lean::dec(x_1);
x_27 = x_30;
goto lbl_28;
}
lbl_28:
{
obj* x_33; 
x_33 = l_Lean_Parser_Syntax_asNode___main(x_27);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_39; obj* x_42; obj* x_43; 
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__1(x_39);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_18);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
}
obj* l_Lean_Parser_command_universes_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_List_map___main___at_Lean_Parser_command_universes_HasView_x_27___spec__2(x_3);
x_7 = l_Lean_Parser_noKind;
x_8 = l_Lean_Parser_Syntax_mkNode(x_7, x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
if (lean::obj_tag(x_1) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_11 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = l_Lean_Parser_command_universes;
x_14 = l_Lean_Parser_Syntax_mkNode(x_13, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_15);
if (lean::is_scalar(x_17)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_17;
}
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::box(3);
x_21 = l_Option_getOrElse___main___rarg(x_19, x_20);
lean::dec(x_19);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_10);
x_24 = l_Lean_Parser_command_universes;
x_25 = l_Lean_Parser_Syntax_mkNode(x_24, x_23);
return x_25;
}
}
}
obj* _init_l_Lean_Parser_command_universes_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_universes_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_universes_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_universes_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_universes_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_universe() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("universe");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_universe_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_27; obj* x_28; 
x_27 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_18);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
else
{
obj* x_29; 
x_29 = lean::cnstr_get(x_1, 0);
lean::inc(x_29);
lean::dec(x_1);
switch (lean::obj_tag(x_29)) {
case 1:
{
obj* x_32; obj* x_35; 
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
lean::dec(x_29);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_18);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
case 3:
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
default:
{
obj* x_39; obj* x_40; 
lean::dec(x_29);
x_39 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_universe_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
if (lean::obj_tag(x_1) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = l_Lean_Parser_command_universe;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_15 = x_1;
} else {
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_13);
if (lean::is_scalar(x_15)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_15;
}
lean::cnstr_set(x_17, 0, x_16);
x_18 = lean::box(3);
x_19 = l_Option_getOrElse___main___rarg(x_17, x_18);
lean::dec(x_17);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_8);
x_22 = l_Lean_Parser_command_universe;
x_23 = l_Lean_Parser_Syntax_mkNode(x_22, x_21);
return x_23;
}
}
}
obj* _init_l_Lean_Parser_command_universe_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_universe_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_universe_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_universe_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_universe_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_11; obj* x_13; obj* x_14; obj* x_16; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_27; 
x_0 = lean::mk_string("universes");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_4);
lean::dec(x_5);
x_8 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_6);
lean::dec(x_6);
lean::dec(x_2);
x_11 = l_Lean_Parser_tokens___rarg(x_8);
lean::dec(x_8);
x_13 = lean::mk_string("universe");
x_14 = l_Lean_Parser_symbol_tokens___rarg(x_13, x_1);
lean::dec(x_13);
x_16 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_4);
x_17 = l_Lean_Parser_List_cons_tokens___rarg(x_14, x_16);
lean::dec(x_16);
lean::dec(x_14);
x_20 = l_Lean_Parser_tokens___rarg(x_17);
lean::dec(x_17);
x_22 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_4);
lean::dec(x_20);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_22);
lean::dec(x_22);
lean::dec(x_11);
x_27 = l_Lean_Parser_tokens___rarg(x_24);
lean::dec(x_24);
return x_27;
}
}
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_9; obj* x_10; 
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_9 = lean::apply_4(x_0, x_2, x_3, x_4, x_5);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_18 = x_9;
} else {
 lean::inc(x_16);
 lean::dec(x_9);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_10);
lean::cnstr_set(x_19, 1, x_16);
return x_19;
}
else
{
uint8 x_20; 
x_20 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (x_20 == 0)
{
obj* x_21; obj* x_24; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_34; 
x_21 = lean::cnstr_get(x_9, 1);
lean::inc(x_21);
lean::dec(x_9);
x_24 = lean::cnstr_get(x_10, 0);
lean::inc(x_24);
lean::dec(x_10);
x_27 = lean::apply_4(x_1, x_2, x_3, x_4, x_21);
x_28 = lean::cnstr_get(x_27, 0);
x_30 = lean::cnstr_get(x_27, 1);
if (lean::is_exclusive(x_27)) {
 x_32 = x_27;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::dec(x_27);
 x_32 = lean::box(0);
}
x_33 = l_Lean_Parser_ParsecT_orelseMkRes___rarg(x_24, x_28);
if (lean::is_scalar(x_32)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_32;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_30);
return x_34;
}
else
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_39 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_41 = x_9;
} else {
 lean::inc(x_39);
 lean::dec(x_9);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_10);
lean::cnstr_set(x_42, 1, x_39);
return x_42;
}
}
}
}
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___rarg), 6, 0);
return x_1;
}
}
obj* l_List_foldl___main___at_Lean_Parser_command_universe_Parser___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; 
x_6 = lean::apply_4(x_0, x_2, x_3, x_4, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___rarg), 6, 2);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_7);
x_0 = x_12;
x_1 = x_9;
goto _start;
}
}
}
obj* l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_universe_Parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = lean::box(0);
x_6 = l_Lean_Parser_Combinators_anyOf___rarg___closed__1;
x_7 = l_mjoin___rarg___closed__1;
x_8 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__4___rarg(x_6, x_7, x_5, x_5, x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_8;
}
else
{
obj* x_12; obj* x_14; obj* x_17; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
x_17 = l_List_foldl___main___at_Lean_Parser_command_universe_Parser___spec__3(x_12, x_14, x_1, x_2, x_3, x_4);
return x_17;
}
}
}
obj* _init_l_Lean_Parser_command_universe_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_0 = lean::mk_string("universes");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many1___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__3), 5, 1);
lean::closure_set(x_9, 0, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_6);
lean::cnstr_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_command_universes;
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_14, 0, x_13);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::mk_string("universe");
x_16 = l_String_trim(x_15);
lean::dec(x_15);
lean::inc(x_16);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_16);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_20, 0, x_16);
lean::closure_set(x_20, 1, x_5);
lean::closure_set(x_20, 2, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_7);
lean::cnstr_set(x_21, 1, x_10);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
x_23 = l_Lean_Parser_command_universe;
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_24, 0, x_23);
lean::closure_set(x_24, 1, x_22);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_10);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_14);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
obj* l_Lean_Parser_command_universe_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Parser_command_universe_Parser___closed__1;
x_5 = l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_universe_Parser___spec__1(x_4, x_0, x_1, x_2, x_3);
return x_5;
}
}
obj* l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_ReaderT_orelse___at_Lean_Parser_command_universe_Parser___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Parser_command_check() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("check");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_Lean_Parser_command_check_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1;
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 x_5 = x_1;
} else {
 lean::inc(x_3);
 lean::dec(x_1);
 x_5 = lean::box(0);
}
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_11);
return x_15;
}
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_6, 0);
lean::inc(x_16);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_6, 1);
lean::inc(x_18);
lean::dec(x_6);
x_21 = lean::cnstr_get(x_16, 0);
lean::inc(x_21);
lean::dec(x_16);
if (lean::is_scalar(x_5)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_5;
}
lean::cnstr_set(x_24, 0, x_21);
if (lean::obj_tag(x_18) == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::box(3);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
else
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
lean::dec(x_18);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_24);
lean::cnstr_set(x_30, 1, x_27);
return x_30;
}
}
case 3:
{
obj* x_32; 
lean::dec(x_5);
x_32 = lean::cnstr_get(x_6, 1);
lean::inc(x_32);
lean::dec(x_6);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; 
x_35 = l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1;
return x_35;
}
else
{
obj* x_36; obj* x_39; obj* x_40; 
x_36 = lean::cnstr_get(x_32, 0);
lean::inc(x_36);
lean::dec(x_32);
x_39 = lean::box(0);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_36);
return x_40;
}
}
default:
{
obj* x_43; 
lean::dec(x_5);
lean::dec(x_16);
x_43 = lean::cnstr_get(x_6, 1);
lean::inc(x_43);
lean::dec(x_6);
if (lean::obj_tag(x_43) == 0)
{
obj* x_46; 
x_46 = l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1;
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_51; 
x_47 = lean::cnstr_get(x_43, 0);
lean::inc(x_47);
lean::dec(x_43);
x_50 = lean::box(0);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_47);
return x_51;
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_check_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
if (lean::obj_tag(x_1) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = l_Lean_Parser_command_check;
x_11 = l_Lean_Parser_Syntax_mkNode(x_10, x_9);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; 
x_12 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_14 = x_1;
} else {
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_15 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_15, 0, x_12);
if (lean::is_scalar(x_14)) {
 x_16 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_16 = x_14;
}
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::box(3);
x_18 = l_Option_getOrElse___main___rarg(x_16, x_17);
lean::dec(x_16);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_7);
x_21 = l_Lean_Parser_command_check;
x_22 = l_Lean_Parser_Syntax_mkNode(x_21, x_20);
return x_22;
}
}
}
obj* _init_l_Lean_Parser_command_check_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_check_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_check_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_check_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_check_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_12; 
x_0 = lean::mk_string("#check");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = l_Lean_Parser_Term_Parser_Lean_Parser_HasTokens___closed__1;
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = lean::box(0);
x_7 = l_Lean_Parser_List_cons_tokens___rarg(x_5, x_6);
lean::dec(x_5);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_7);
lean::dec(x_7);
lean::dec(x_2);
x_12 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
return x_12;
}
}
obj* _init_l_Lean_Parser_command_check_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_0 = lean::mk_string("#check");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_7, 0, x_5);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_CommandParserM_Monad___closed__1;
x_13 = l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
x_14 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_15 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_16 = l_Lean_Parser_command_check;
x_17 = l_Lean_Parser_command_check_HasView;
x_18 = l_Lean_Parser_Combinators_node_view___rarg(x_12, x_13, x_14, x_15, x_16, x_11, x_17);
lean::dec(x_11);
return x_18;
}
}
obj* _init_l_Lean_Parser_command_check_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("#check");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_7, 0, x_5);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_6);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_Lean_Parser_command_check_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_check;
x_5 = l_Lean_Parser_command_check_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_attribute() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("attribute");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(x_4);
switch (lean::obj_tag(x_2)) {
case 1:
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
case 3:
{
obj* x_12; obj* x_13; 
x_12 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
default:
{
obj* x_15; obj* x_16; 
lean::dec(x_2);
x_15 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
if (lean::is_scalar(x_6)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_6;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
}
}
}
}
obj* l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; 
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_6 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 1);
 x_8 = x_2;
} else {
 lean::inc(x_6);
 lean::dec(x_2);
 x_8 = lean::box(0);
}
x_9 = l_Lean_Parser_command_attrInstance_HasView;
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
lean::dec(x_9);
x_13 = lean::apply_1(x_10, x_6);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_8;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
else
{
obj* x_18; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_30; obj* x_31; 
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_4, 0);
x_23 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_25 = x_4;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_4);
 x_25 = lean::box(0);
}
x_26 = l_Lean_Parser_command_attrInstance_HasView;
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
lean::dec(x_26);
x_30 = lean::apply_1(x_27, x_18);
x_31 = l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(x_0, x_1, x_23);
switch (lean::obj_tag(x_21)) {
case 0:
{
obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_32 = lean::cnstr_get(x_21, 0);
lean::inc(x_32);
lean::dec(x_21);
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_32);
x_36 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_36, 0, x_35);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_30);
lean::cnstr_set(x_37, 1, x_36);
if (lean::is_scalar(x_25)) {
 x_38 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_38 = x_25;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_31);
return x_38;
}
case 3:
{
obj* x_39; obj* x_40; obj* x_41; 
x_39 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_30);
lean::cnstr_set(x_40, 1, x_39);
if (lean::is_scalar(x_25)) {
 x_41 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_41 = x_25;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_31);
return x_41;
}
default:
{
obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_21);
x_43 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_30);
lean::cnstr_set(x_44, 1, x_43);
if (lean::is_scalar(x_25)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_25;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_31);
return x_45;
}
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
lean::inc(x_0);
x_15 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__3(x_0, x_6);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_22; 
x_16 = l_Lean_Parser_command_attrInstance_HasView;
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_20 = lean::apply_1(x_17, x_9);
if (lean::is_scalar(x_8)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_8;
}
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_0);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_15);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_27; obj* x_30; 
x_23 = lean::cnstr_get(x_11, 0);
lean::inc(x_23);
lean::dec(x_11);
x_26 = l_Lean_Parser_command_attrInstance_HasView;
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
lean::dec(x_26);
x_30 = lean::apply_1(x_27, x_9);
if (lean::obj_tag(x_23) == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_31 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
if (lean::is_scalar(x_8)) {
 x_32 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_32 = x_8;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_0);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_30);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_15);
return x_34;
}
else
{
obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; 
x_35 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_37 = x_23;
} else {
 lean::inc(x_35);
 lean::dec(x_23);
 x_37 = lean::box(0);
}
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_35);
if (lean::is_scalar(x_37)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_37;
}
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::box(3);
x_41 = l_Option_getOrElse___main___rarg(x_39, x_40);
lean::dec(x_39);
if (lean::is_scalar(x_8)) {
 x_43 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_43 = x_8;
}
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_0);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_30);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_15);
return x_45;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__4(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__4(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("NOTAnIdent");
lean::inc(x_2);
x_4 = l_Lean_Parser_Substring_ofString(x_2);
x_5 = lean::box(0);
x_6 = lean_name_mk_string(x_5, x_2);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_4);
lean::cnstr_set(x_7, 2, x_6);
lean::cnstr_set(x_7, 3, x_1);
lean::cnstr_set(x_7, 4, x_1);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::mk_string(", ");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; 
x_2 = lean::box(3);
x_3 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_0 = x_4;
goto lbl_1;
}
else
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 x_7 = x_3;
} else {
 lean::inc(x_5);
 lean::dec(x_3);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; 
lean::dec(x_7);
x_12 = lean::box(0);
x_0 = x_12;
goto lbl_1;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
switch (lean::obj_tag(x_15)) {
case 0:
{
obj* x_18; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
if (lean::is_scalar(x_7)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_7;
}
lean::cnstr_set(x_21, 0, x_18);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_0 = x_22;
goto lbl_1;
}
case 3:
{
obj* x_24; 
lean::dec(x_7);
x_24 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_0 = x_24;
goto lbl_1;
}
default:
{
obj* x_27; 
lean::dec(x_7);
lean::dec(x_15);
x_27 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_0 = x_27;
goto lbl_1;
}
}
}
else
{
obj* x_31; 
lean::dec(x_13);
lean::dec(x_8);
lean::dec(x_7);
x_31 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_0 = x_31;
goto lbl_1;
}
}
}
lbl_1:
{
obj* x_32; obj* x_33; obj* x_34; 
x_32 = lean::box(0);
x_33 = lean::box(3);
x_34 = l_Lean_Parser_Syntax_asNode___main(x_33);
if (lean::obj_tag(x_34) == 0)
{
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__1;
x_36 = l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1;
x_37 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_37, 0, x_0);
lean::cnstr_set(x_37, 1, x_32);
lean::cnstr_set(x_37, 2, x_32);
lean::cnstr_set(x_37, 3, x_35);
lean::cnstr_set(x_37, 4, x_32);
lean::cnstr_set(x_37, 5, x_36);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_44; obj* x_45; obj* x_46; 
x_38 = lean::cnstr_get(x_34, 0);
lean::inc(x_38);
lean::dec(x_34);
x_41 = lean::cnstr_get(x_38, 1);
lean::inc(x_41);
lean::dec(x_38);
x_44 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(x_41);
x_45 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__1;
x_46 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_46, 0, x_0);
lean::cnstr_set(x_46, 1, x_32);
lean::cnstr_set(x_46, 2, x_32);
lean::cnstr_set(x_46, 3, x_45);
lean::cnstr_set(x_46, 4, x_32);
lean::cnstr_set(x_46, 5, x_44);
return x_46;
}
}
else
{
obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_55; 
x_47 = lean::cnstr_get(x_34, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_47, 1);
lean::inc(x_49);
lean::dec(x_47);
x_52 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__2;
x_53 = l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2;
lean::inc(x_49);
x_55 = l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(x_52, x_53, x_49);
if (lean::obj_tag(x_34) == 0)
{
obj* x_57; obj* x_58; 
lean::dec(x_49);
x_57 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_58 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_58, 0, x_0);
lean::cnstr_set(x_58, 1, x_32);
lean::cnstr_set(x_58, 2, x_32);
lean::cnstr_set(x_58, 3, x_55);
lean::cnstr_set(x_58, 4, x_32);
lean::cnstr_set(x_58, 5, x_57);
return x_58;
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_34);
x_60 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(x_49);
x_61 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_61, 0, x_0);
lean::cnstr_set(x_61, 1, x_32);
lean::cnstr_set(x_61, 2, x_32);
lean::cnstr_set(x_61, 3, x_55);
lean::cnstr_set(x_61, 4, x_32);
lean::cnstr_set(x_61, 5, x_60);
return x_61;
}
}
}
}
}
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
else
{
obj* x_18; obj* x_20; obj* x_23; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_9, 1);
lean::inc(x_20);
lean::dec(x_9);
x_23 = l_Lean_Parser_Syntax_asNode___main(x_18);
if (lean::obj_tag(x_23) == 0)
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; 
x_24 = lean::box(3);
x_1 = x_20;
x_2 = x_24;
goto lbl_3;
}
else
{
obj* x_25; obj* x_27; 
x_25 = lean::cnstr_get(x_20, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_20, 1);
lean::inc(x_27);
lean::dec(x_20);
x_1 = x_27;
x_2 = x_25;
goto lbl_3;
}
}
else
{
obj* x_30; obj* x_33; obj* x_36; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
lean::dec(x_23);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_List_append___rarg(x_33, x_20);
if (lean::obj_tag(x_36) == 0)
{
obj* x_37; 
x_37 = lean::box(3);
x_1 = x_36;
x_2 = x_37;
goto lbl_3;
}
else
{
obj* x_38; obj* x_40; 
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_1 = x_40;
x_2 = x_38;
goto lbl_3;
}
}
}
}
lbl_3:
{
obj* x_43; obj* x_45; 
x_45 = l_Lean_Parser_Syntax_asNode___main(x_2);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; 
x_46 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_43 = x_46;
goto lbl_44;
}
else
{
obj* x_47; obj* x_49; obj* x_50; 
x_47 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_set(x_45, 0, lean::box(0));
 x_49 = x_45;
} else {
 lean::inc(x_47);
 lean::dec(x_45);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
if (lean::obj_tag(x_50) == 0)
{
obj* x_54; 
lean::dec(x_49);
x_54 = lean::box(0);
x_43 = x_54;
goto lbl_44;
}
else
{
obj* x_55; 
x_55 = lean::cnstr_get(x_50, 1);
lean::inc(x_55);
if (lean::obj_tag(x_55) == 0)
{
obj* x_57; 
x_57 = lean::cnstr_get(x_50, 0);
lean::inc(x_57);
lean::dec(x_50);
switch (lean::obj_tag(x_57)) {
case 0:
{
obj* x_60; obj* x_63; obj* x_64; 
x_60 = lean::cnstr_get(x_57, 0);
lean::inc(x_60);
lean::dec(x_57);
if (lean::is_scalar(x_49)) {
 x_63 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_63 = x_49;
}
lean::cnstr_set(x_63, 0, x_60);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
x_43 = x_64;
goto lbl_44;
}
case 3:
{
obj* x_66; 
lean::dec(x_49);
x_66 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_43 = x_66;
goto lbl_44;
}
default:
{
obj* x_69; 
lean::dec(x_49);
lean::dec(x_57);
x_69 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_43 = x_69;
goto lbl_44;
}
}
}
else
{
obj* x_73; 
lean::dec(x_49);
lean::dec(x_55);
lean::dec(x_50);
x_73 = l_Lean_Parser_command_notation_HasView_x_27___lambda__1___closed__1;
x_43 = x_73;
goto lbl_44;
}
}
}
lbl_44:
{
obj* x_74; obj* x_75; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_77; 
x_77 = lean::box(3);
x_74 = x_1;
x_75 = x_77;
goto lbl_76;
}
else
{
obj* x_78; obj* x_80; 
x_78 = lean::cnstr_get(x_1, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_1, 1);
lean::inc(x_80);
lean::dec(x_1);
x_74 = x_80;
x_75 = x_78;
goto lbl_76;
}
lbl_76:
{
obj* x_83; 
switch (lean::obj_tag(x_75)) {
case 0:
{
obj* x_85; obj* x_88; 
x_85 = lean::cnstr_get(x_75, 0);
lean::inc(x_85);
lean::dec(x_75);
x_88 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_88, 0, x_85);
x_83 = x_88;
goto lbl_84;
}
case 3:
{
obj* x_89; 
x_89 = lean::box(0);
x_83 = x_89;
goto lbl_84;
}
default:
{
obj* x_91; 
lean::dec(x_75);
x_91 = lean::box(0);
x_83 = x_91;
goto lbl_84;
}
}
lbl_84:
{
obj* x_92; obj* x_93; 
if (lean::obj_tag(x_74) == 0)
{
obj* x_95; 
x_95 = lean::box(3);
x_92 = x_74;
x_93 = x_95;
goto lbl_94;
}
else
{
obj* x_96; obj* x_98; 
x_96 = lean::cnstr_get(x_74, 0);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_74, 1);
lean::inc(x_98);
lean::dec(x_74);
x_92 = x_98;
x_93 = x_96;
goto lbl_94;
}
lbl_94:
{
obj* x_101; 
switch (lean::obj_tag(x_93)) {
case 0:
{
obj* x_103; obj* x_106; 
x_103 = lean::cnstr_get(x_93, 0);
lean::inc(x_103);
lean::dec(x_93);
x_106 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_106, 0, x_103);
x_101 = x_106;
goto lbl_102;
}
case 3:
{
obj* x_107; 
x_107 = lean::box(0);
x_101 = x_107;
goto lbl_102;
}
default:
{
obj* x_109; 
lean::dec(x_93);
x_109 = lean::box(0);
x_101 = x_109;
goto lbl_102;
}
}
lbl_102:
{
obj* x_110; obj* x_111; 
if (lean::obj_tag(x_92) == 0)
{
obj* x_113; 
x_113 = lean::box(3);
x_110 = x_92;
x_111 = x_113;
goto lbl_112;
}
else
{
obj* x_114; obj* x_116; 
x_114 = lean::cnstr_get(x_92, 0);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_92, 1);
lean::inc(x_116);
lean::dec(x_92);
x_110 = x_116;
x_111 = x_114;
goto lbl_112;
}
lbl_112:
{
obj* x_119; 
x_119 = l_Lean_Parser_Syntax_asNode___main(x_111);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_121; obj* x_122; 
x_120 = lean::box(0);
if (lean::obj_tag(x_110) == 0)
{
obj* x_124; 
x_124 = lean::box(3);
x_121 = x_110;
x_122 = x_124;
goto lbl_123;
}
else
{
obj* x_125; obj* x_127; 
x_125 = lean::cnstr_get(x_110, 0);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_110, 1);
lean::inc(x_127);
lean::dec(x_110);
x_121 = x_127;
x_122 = x_125;
goto lbl_123;
}
lbl_123:
{
obj* x_130; 
switch (lean::obj_tag(x_122)) {
case 0:
{
obj* x_132; obj* x_135; 
x_132 = lean::cnstr_get(x_122, 0);
lean::inc(x_132);
lean::dec(x_122);
x_135 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_135, 0, x_132);
x_130 = x_135;
goto lbl_131;
}
case 3:
{
x_130 = x_120;
goto lbl_131;
}
default:
{
lean::dec(x_122);
x_130 = x_120;
goto lbl_131;
}
}
lbl_131:
{
obj* x_137; 
if (lean::obj_tag(x_121) == 0)
{
obj* x_139; 
x_139 = lean::box(3);
x_137 = x_139;
goto lbl_138;
}
else
{
obj* x_140; 
x_140 = lean::cnstr_get(x_121, 0);
lean::inc(x_140);
lean::dec(x_121);
x_137 = x_140;
goto lbl_138;
}
lbl_138:
{
obj* x_143; 
x_143 = l_Lean_Parser_Syntax_asNode___main(x_137);
if (lean::obj_tag(x_143) == 0)
{
obj* x_144; obj* x_145; obj* x_146; 
x_144 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__1;
x_145 = l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1;
x_146 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_146, 0, x_43);
lean::cnstr_set(x_146, 1, x_83);
lean::cnstr_set(x_146, 2, x_101);
lean::cnstr_set(x_146, 3, x_144);
lean::cnstr_set(x_146, 4, x_130);
lean::cnstr_set(x_146, 5, x_145);
return x_146;
}
else
{
obj* x_147; obj* x_150; obj* x_153; obj* x_154; obj* x_155; 
x_147 = lean::cnstr_get(x_143, 0);
lean::inc(x_147);
lean::dec(x_143);
x_150 = lean::cnstr_get(x_147, 1);
lean::inc(x_150);
lean::dec(x_147);
x_153 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(x_150);
x_154 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__1;
x_155 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_155, 0, x_43);
lean::cnstr_set(x_155, 1, x_83);
lean::cnstr_set(x_155, 2, x_101);
lean::cnstr_set(x_155, 3, x_154);
lean::cnstr_set(x_155, 4, x_130);
lean::cnstr_set(x_155, 5, x_153);
return x_155;
}
}
}
}
}
else
{
obj* x_156; obj* x_158; obj* x_159; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; 
x_156 = lean::cnstr_get(x_119, 0);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_set(x_119, 0, lean::box(0));
 x_158 = x_119;
} else {
 lean::inc(x_156);
 lean::dec(x_119);
 x_158 = lean::box(0);
}
x_159 = lean::cnstr_get(x_156, 1);
lean::inc(x_159);
lean::dec(x_156);
x_162 = l_Lean_Parser_command_declAttributes_HasView_x_27___lambda__1___closed__2;
x_163 = l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2;
x_164 = l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(x_162, x_163, x_159);
if (lean::obj_tag(x_110) == 0)
{
obj* x_168; 
x_168 = lean::box(3);
x_165 = x_110;
x_166 = x_168;
goto lbl_167;
}
else
{
obj* x_169; obj* x_171; 
x_169 = lean::cnstr_get(x_110, 0);
lean::inc(x_169);
x_171 = lean::cnstr_get(x_110, 1);
lean::inc(x_171);
lean::dec(x_110);
x_165 = x_171;
x_166 = x_169;
goto lbl_167;
}
lbl_167:
{
obj* x_174; 
switch (lean::obj_tag(x_166)) {
case 0:
{
obj* x_176; obj* x_179; 
x_176 = lean::cnstr_get(x_166, 0);
lean::inc(x_176);
lean::dec(x_166);
if (lean::is_scalar(x_158)) {
 x_179 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_179 = x_158;
}
lean::cnstr_set(x_179, 0, x_176);
x_174 = x_179;
goto lbl_175;
}
case 3:
{
obj* x_181; 
lean::dec(x_158);
x_181 = lean::box(0);
x_174 = x_181;
goto lbl_175;
}
default:
{
obj* x_184; 
lean::dec(x_158);
lean::dec(x_166);
x_184 = lean::box(0);
x_174 = x_184;
goto lbl_175;
}
}
lbl_175:
{
obj* x_185; 
if (lean::obj_tag(x_165) == 0)
{
obj* x_187; 
x_187 = lean::box(3);
x_185 = x_187;
goto lbl_186;
}
else
{
obj* x_188; 
x_188 = lean::cnstr_get(x_165, 0);
lean::inc(x_188);
lean::dec(x_165);
x_185 = x_188;
goto lbl_186;
}
lbl_186:
{
obj* x_191; 
x_191 = l_Lean_Parser_Syntax_asNode___main(x_185);
if (lean::obj_tag(x_191) == 0)
{
obj* x_192; obj* x_193; 
x_192 = l_Lean_Parser_command_structBinderContent_HasView_x_27___lambda__1___closed__1;
x_193 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_193, 0, x_43);
lean::cnstr_set(x_193, 1, x_83);
lean::cnstr_set(x_193, 2, x_101);
lean::cnstr_set(x_193, 3, x_164);
lean::cnstr_set(x_193, 4, x_174);
lean::cnstr_set(x_193, 5, x_192);
return x_193;
}
else
{
obj* x_194; obj* x_197; obj* x_200; obj* x_201; 
x_194 = lean::cnstr_get(x_191, 0);
lean::inc(x_194);
lean::dec(x_191);
x_197 = lean::cnstr_get(x_194, 1);
lean::inc(x_197);
lean::dec(x_194);
x_200 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__1(x_197);
x_201 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_201, 0, x_43);
lean::cnstr_set(x_201, 1, x_83);
lean::cnstr_set(x_201, 2, x_101);
lean::cnstr_set(x_201, 3, x_164);
lean::cnstr_set(x_201, 4, x_174);
lean::cnstr_set(x_201, 5, x_200);
return x_201;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_attribute_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 4);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 5);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::box(0);
x_15 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__3(x_14, x_7);
x_16 = l_List_join___main___rarg(x_15);
x_17 = l_Lean_Parser_noKind;
x_18 = l_Lean_Parser_Syntax_mkNode(x_17, x_16);
x_19 = l_List_map___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__4(x_11);
x_20 = l_Lean_Parser_Syntax_mkNode(x_17, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_14);
if (lean::obj_tag(x_1) == 0)
{
obj* x_24; 
x_24 = l_Lean_Parser_Combinators_many___rarg___closed__1;
x_22 = x_24;
goto lbl_23;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_1, 0);
lean::inc(x_25);
lean::dec(x_1);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = l_Lean_Parser_command_notation_HasView_x_27___lambda__2___closed__1;
x_22 = x_28;
goto lbl_23;
}
else
{
obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; 
x_29 = lean::cnstr_get(x_25, 0);
if (lean::is_exclusive(x_25)) {
 x_31 = x_25;
} else {
 lean::inc(x_29);
 lean::dec(x_25);
 x_31 = lean::box(0);
}
x_32 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_32, 0, x_29);
if (lean::is_scalar(x_31)) {
 x_33 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_33 = x_31;
}
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::box(3);
x_35 = l_Option_getOrElse___main___rarg(x_33, x_34);
lean::dec(x_33);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_14);
x_38 = l_Lean_Parser_Syntax_mkNode(x_17, x_37);
x_22 = x_38;
goto lbl_23;
}
}
lbl_23:
{
obj* x_39; 
if (lean::obj_tag(x_3) == 0)
{
obj* x_41; 
x_41 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_39 = x_41;
goto lbl_40;
}
else
{
obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_42 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_44 = x_3;
} else {
 lean::inc(x_42);
 lean::dec(x_3);
 x_44 = lean::box(0);
}
x_45 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_45, 0, x_42);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::box(3);
x_48 = l_Option_getOrElse___main___rarg(x_46, x_47);
lean::dec(x_46);
x_39 = x_48;
goto lbl_40;
}
lbl_40:
{
obj* x_50; obj* x_51; obj* x_52; 
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_39);
lean::cnstr_set(x_50, 1, x_14);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_22);
lean::cnstr_set(x_51, 1, x_50);
x_52 = l_Lean_Parser_Syntax_mkNode(x_17, x_51);
if (lean::obj_tag(x_5) == 0)
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_53 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_21);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_18);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_52);
lean::cnstr_set(x_57, 1, x_56);
x_58 = l_Lean_Parser_command_attribute;
x_59 = l_Lean_Parser_Syntax_mkNode(x_58, x_57);
return x_59;
}
else
{
obj* x_60; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_60 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_62 = x_9;
} else {
 lean::inc(x_60);
 lean::dec(x_9);
 x_62 = lean::box(0);
}
x_63 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_63, 0, x_60);
if (lean::is_scalar(x_62)) {
 x_64 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_64 = x_62;
}
lean::cnstr_set(x_64, 0, x_63);
x_65 = lean::box(3);
x_66 = l_Option_getOrElse___main___rarg(x_64, x_65);
lean::dec(x_64);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_66);
lean::cnstr_set(x_68, 1, x_21);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_18);
lean::cnstr_set(x_69, 1, x_68);
x_70 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_69);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_52);
lean::cnstr_set(x_72, 1, x_71);
x_73 = l_Lean_Parser_command_attribute;
x_74 = l_Lean_Parser_Syntax_mkNode(x_73, x_72);
return x_74;
}
}
else
{
obj* x_75; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_75 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_77 = x_5;
} else {
 lean::inc(x_75);
 lean::dec(x_5);
 x_77 = lean::box(0);
}
x_78 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_78, 0, x_75);
if (lean::is_scalar(x_77)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_77;
}
lean::cnstr_set(x_79, 0, x_78);
x_80 = lean::box(3);
x_81 = l_Option_getOrElse___main___rarg(x_79, x_80);
lean::dec(x_79);
if (lean::obj_tag(x_9) == 0)
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_83 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_21);
x_85 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_85, 0, x_18);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_81);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_52);
lean::cnstr_set(x_87, 1, x_86);
x_88 = l_Lean_Parser_command_attribute;
x_89 = l_Lean_Parser_Syntax_mkNode(x_88, x_87);
return x_89;
}
else
{
obj* x_90; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_90 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_92 = x_9;
} else {
 lean::inc(x_90);
 lean::dec(x_9);
 x_92 = lean::box(0);
}
x_93 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_93, 0, x_90);
if (lean::is_scalar(x_92)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_92;
}
lean::cnstr_set(x_94, 0, x_93);
x_95 = l_Option_getOrElse___main___rarg(x_94, x_80);
lean::dec(x_94);
x_97 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_97, 0, x_95);
lean::cnstr_set(x_97, 1, x_21);
x_98 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_98, 0, x_18);
lean::cnstr_set(x_98, 1, x_97);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_81);
lean::cnstr_set(x_99, 1, x_98);
x_100 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_100, 0, x_52);
lean::cnstr_set(x_100, 1, x_99);
x_101 = l_Lean_Parser_command_attribute;
x_102 = l_Lean_Parser_Syntax_mkNode(x_101, x_100);
return x_102;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_command_attribute_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_attribute_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_attribute_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_parser_combinators_3__sepBy_viewAux___main___at_Lean_Parser_command_attribute_HasView_x_27___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_command_attribute_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_attribute_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_37; obj* x_40; obj* x_43; obj* x_46; 
x_0 = lean::mk_string("local ");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = l_Lean_Parser_tokens___rarg(x_2);
lean::dec(x_2);
x_6 = lean::mk_string("attribute ");
x_7 = l_Lean_Parser_symbol_tokens___rarg(x_6, x_1);
lean::dec(x_6);
x_9 = lean::box(0);
x_10 = l_Lean_Parser_List_cons_tokens___rarg(x_7, x_9);
lean::dec(x_7);
x_12 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_10);
lean::dec(x_10);
lean::dec(x_4);
x_15 = l_Lean_Parser_tokens___rarg(x_12);
lean::dec(x_12);
x_17 = l_Lean_Parser_tokens___rarg(x_15);
lean::dec(x_15);
x_19 = lean::mk_string("[");
x_20 = l_Lean_Parser_symbol_tokens___rarg(x_19, x_1);
lean::dec(x_19);
x_22 = lean::mk_string(", ");
x_23 = l_Lean_Parser_symbol_tokens___rarg(x_22, x_1);
lean::dec(x_22);
x_25 = l_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens;
x_26 = l_Lean_Parser_Combinators_sepBy1_tokens___rarg(x_25, x_23);
lean::dec(x_23);
x_28 = lean::mk_string("] ");
x_29 = l_Lean_Parser_symbol_tokens___rarg(x_28, x_1);
lean::dec(x_28);
x_31 = l_Lean_Parser_tokens___rarg(x_9);
x_32 = l_Lean_Parser_List_cons_tokens___rarg(x_31, x_9);
lean::dec(x_31);
x_34 = l_Lean_Parser_List_cons_tokens___rarg(x_29, x_32);
lean::dec(x_32);
lean::dec(x_29);
x_37 = l_Lean_Parser_List_cons_tokens___rarg(x_26, x_34);
lean::dec(x_34);
lean::dec(x_26);
x_40 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_37);
lean::dec(x_37);
lean::dec(x_20);
x_43 = l_Lean_Parser_List_cons_tokens___rarg(x_17, x_40);
lean::dec(x_40);
lean::dec(x_17);
x_46 = l_Lean_Parser_tokens___rarg(x_43);
lean::dec(x_43);
return x_46;
}
}
obj* _init_l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_0 = lean::mk_string("local ");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("attribute ");
x_9 = l_String_trim(x_8);
lean::dec(x_8);
lean::inc(x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_12, 0, x_9);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_13, 0, x_9);
lean::closure_set(x_13, 1, x_5);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_7);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_17, 0, x_16);
x_18 = lean::mk_string("[");
x_19 = l_String_trim(x_18);
lean::dec(x_18);
lean::inc(x_19);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_22, 0, x_19);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_23, 0, x_19);
lean::closure_set(x_23, 1, x_5);
lean::closure_set(x_23, 2, x_22);
x_24 = lean::mk_string(", ");
x_25 = l_String_trim(x_24);
lean::dec(x_24);
lean::inc(x_25);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_28, 0, x_25);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_29, 0, x_25);
lean::closure_set(x_29, 1, x_5);
lean::closure_set(x_29, 2, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_attrInstance_Parser), 4, 0);
x_31 = 1;
x_32 = lean::box(x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_sepBy1___at_Lean_Parser_command_declAttributes_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_33, 0, x_30);
lean::closure_set(x_33, 1, x_29);
lean::closure_set(x_33, 2, x_32);
x_34 = lean::mk_string("] ");
x_35 = l_String_trim(x_34);
lean::dec(x_34);
lean::inc(x_35);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_38, 0, x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_39, 0, x_35);
lean::closure_set(x_39, 1, x_5);
lean::closure_set(x_39, 2, x_38);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__2), 5, 1);
lean::closure_set(x_41, 0, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_14);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_33);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_23);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_17);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_Lean_Parser_CommandParserM_Monad___closed__1;
x_48 = l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
x_49 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_50 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_51 = l_Lean_Parser_command_attribute;
x_52 = l_Lean_Parser_command_attribute_HasView;
x_53 = l_Lean_Parser_Combinators_node_view___rarg(x_47, x_48, x_49, x_50, x_51, x_46, x_52);
lean::dec(x_46);
return x_53;
}
}
obj* _init_l_Lean_Parser_command_attribute_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_0 = lean::mk_string("local ");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_optional___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__1), 5, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string("attribute ");
x_9 = l_String_trim(x_8);
lean::dec(x_8);
lean::inc(x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_12, 0, x_9);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_13, 0, x_9);
lean::closure_set(x_13, 1, x_5);
lean::closure_set(x_13, 2, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_7);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasView___lambda__1), 5, 1);
lean::closure_set(x_17, 0, x_16);
x_18 = lean::mk_string("[");
x_19 = l_String_trim(x_18);
lean::dec(x_18);
lean::inc(x_19);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_22, 0, x_19);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_23, 0, x_19);
lean::closure_set(x_23, 1, x_5);
lean::closure_set(x_23, 2, x_22);
x_24 = lean::mk_string(", ");
x_25 = l_String_trim(x_24);
lean::dec(x_24);
lean::inc(x_25);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_28, 0, x_25);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_29, 0, x_25);
lean::closure_set(x_29, 1, x_5);
lean::closure_set(x_29, 2, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_attrInstance_Parser), 4, 0);
x_31 = 1;
x_32 = lean::box(x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_sepBy1___at_Lean_Parser_command_declAttributes_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_33, 0, x_30);
lean::closure_set(x_33, 1, x_29);
lean::closure_set(x_33, 2, x_32);
x_34 = lean::mk_string("] ");
x_35 = l_String_trim(x_34);
lean::dec(x_34);
lean::inc(x_35);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_38, 0, x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_39, 0, x_35);
lean::closure_set(x_39, 1, x_5);
lean::closure_set(x_39, 2, x_38);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_many___at_Lean_Parser_command_attrInstance_Parser_Lean_Parser_HasTokens___spec__2), 5, 1);
lean::closure_set(x_41, 0, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_14);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_33);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_23);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_17);
lean::cnstr_set(x_46, 1, x_45);
return x_46;
}
}
obj* l_Lean_Parser_command_attribute_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_attribute;
x_5 = l_Lean_Parser_command_attribute_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_initQuot() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("initQuot");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_Option_getOrElse___main___rarg(x_1, x_2);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_0);
x_5 = l_Lean_Parser_command_initQuot;
x_6 = l_Lean_Parser_Syntax_mkNode(x_5, x_4);
return x_6;
}
}
obj* l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_4 = x_0;
} else {
 lean::inc(x_2);
 lean::dec(x_0);
 x_4 = lean::box(0);
}
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_2);
if (lean::is_scalar(x_4)) {
 x_7 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_7 = x_4;
}
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::box(3);
x_9 = l_Option_getOrElse___main___rarg(x_7, x_8);
lean::dec(x_7);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_5);
x_12 = l_Lean_Parser_command_initQuot;
x_13 = l_Lean_Parser_Syntax_mkNode(x_12, x_11);
return x_13;
}
}
}
obj* _init_l_Lean_Parser_command_initQuot_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_stringLit_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_initQuot_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_initQuot_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_7; 
x_0 = lean::mk_string("initQuot");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_4);
lean::dec(x_2);
x_7 = l_Lean_Parser_tokens___rarg(x_5);
lean::dec(x_5);
return x_7;
}
}
obj* _init_l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_0 = lean::mk_string("initQuot");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_Lean_Parser_CommandParserM_Monad___closed__1;
x_10 = l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
x_11 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_12 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_13 = l_Lean_Parser_command_initQuot;
x_14 = l_Lean_Parser_command_initQuot_HasView;
x_15 = l_Lean_Parser_Combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
lean::dec(x_8);
return x_15;
}
}
obj* _init_l_Lean_Parser_command_initQuot_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::mk_string("initQuot");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_Lean_Parser_command_initQuot_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_initQuot;
x_5 = l_Lean_Parser_command_initQuot_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_boolOptionValue() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("boolOptionValue");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; uint8 x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::nat_dec_eq(x_0, x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; 
x_2 = lean::box(3);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
else
{
obj* x_4; obj* x_5; 
x_4 = lean::box(3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
}
obj* _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("boolOptionValue");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_8; obj* x_11; uint8 x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2;
x_12 = lean_name_dec_eq(x_6, x_11);
lean::dec(x_6);
if (x_12 == 0)
{
obj* x_15; 
lean::dec(x_8);
x_15 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_15;
}
else
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_16; 
x_16 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_16;
}
else
{
obj* x_17; 
x_17 = lean::cnstr_get(x_8, 1);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; obj* x_22; 
x_19 = lean::cnstr_get(x_8, 0);
lean::inc(x_19);
lean::dec(x_8);
x_22 = l_Lean_Parser_Syntax_asNode___main(x_19);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; 
x_23 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_23;
}
else
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_22, 0);
lean::inc(x_24);
lean::dec(x_22);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
switch (lean::obj_tag(x_27)) {
case 0:
{
obj* x_30; 
lean::dec(x_24);
x_30 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_30;
}
case 1:
{
obj* x_33; 
lean::dec(x_27);
lean::dec(x_24);
x_33 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_33;
}
default:
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_34 = lean::cnstr_get(x_24, 1);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_27, 1);
lean::inc(x_39);
lean::dec(x_27);
x_42 = lean::box(0);
x_43 = lean_name_dec_eq(x_37, x_42);
lean::dec(x_37);
if (x_43 == 0)
{
obj* x_47; 
lean::dec(x_34);
lean::dec(x_39);
x_47 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_47;
}
else
{
if (lean::obj_tag(x_34) == 0)
{
obj* x_49; 
lean::dec(x_39);
x_49 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_49;
}
else
{
obj* x_50; 
x_50 = lean::cnstr_get(x_34, 1);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_52; obj* x_55; uint8 x_56; 
x_52 = lean::cnstr_get(x_34, 0);
lean::inc(x_52);
lean::dec(x_34);
x_55 = lean::mk_nat_obj(0u);
x_56 = lean::nat_dec_eq(x_39, x_55);
lean::dec(x_39);
if (x_56 == 0)
{
obj* x_58; 
x_58 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_58, 0, x_52);
return x_58;
}
else
{
obj* x_59; 
x_59 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_59, 0, x_52);
return x_59;
}
}
else
{
obj* x_63; 
lean::dec(x_50);
lean::dec(x_34);
lean::dec(x_39);
x_63 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_63;
}
}
}
}
}
}
}
else
{
obj* x_66; 
lean::dec(x_8);
lean::dec(x_17);
x_66 = l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1;
return x_66;
}
}
}
}
}
}
obj* l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_2);
lean::cnstr_set(x_5, 1, x_1);
x_6 = l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__1;
x_7 = l_Lean_Parser_Syntax_mkNode(x_6, x_5);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_command_boolOptionValue;
x_10 = l_Lean_Parser_Syntax_mkNode(x_9, x_8);
return x_10;
}
else
{
obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_11);
lean::cnstr_set(x_14, 1, x_1);
x_15 = l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__3;
x_16 = l_Lean_Parser_Syntax_mkNode(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_1);
x_18 = l_Lean_Parser_command_boolOptionValue;
x_19 = l_Lean_Parser_Syntax_mkNode(x_18, x_17);
return x_19;
}
}
}
obj* _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_boolOptionValue_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_boolOptionValue_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_optionValue() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("optionValue");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; uint8 x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::nat_dec_eq(x_0, x_0);
if (x_1 == 0)
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(1u);
x_3 = lean::nat_dec_eq(x_0, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_number_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::box(3);
x_9 = lean::apply_1(x_5, x_8);
x_10 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_11 = l_Lean_Parser_stringLit_HasView;
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
lean::dec(x_11);
x_15 = lean::box(3);
x_16 = lean::apply_1(x_12, x_15);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
else
{
obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_24; 
x_18 = l_Lean_Parser_command_boolOptionValue_HasView;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::box(3);
x_23 = lean::apply_1(x_19, x_22);
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
}
}
obj* _init_l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("optionValue");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_8; obj* x_11; uint8 x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2;
x_12 = lean_name_dec_eq(x_6, x_11);
lean::dec(x_6);
if (x_12 == 0)
{
obj* x_15; 
lean::dec(x_8);
x_15 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_15;
}
else
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_16; 
x_16 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_16;
}
else
{
obj* x_17; 
x_17 = lean::cnstr_get(x_8, 1);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; obj* x_22; 
x_19 = lean::cnstr_get(x_8, 0);
lean::inc(x_19);
lean::dec(x_8);
x_22 = l_Lean_Parser_Syntax_asNode___main(x_19);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; 
x_23 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_23;
}
else
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_22, 0);
lean::inc(x_24);
lean::dec(x_22);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
switch (lean::obj_tag(x_27)) {
case 0:
{
obj* x_30; 
lean::dec(x_24);
x_30 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_30;
}
case 1:
{
obj* x_33; 
lean::dec(x_27);
lean::dec(x_24);
x_33 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_33;
}
default:
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_34 = lean::cnstr_get(x_24, 1);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_27, 1);
lean::inc(x_39);
lean::dec(x_27);
x_42 = lean::box(0);
x_43 = lean_name_dec_eq(x_37, x_42);
lean::dec(x_37);
if (x_43 == 0)
{
obj* x_47; 
lean::dec(x_34);
lean::dec(x_39);
x_47 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_47;
}
else
{
if (lean::obj_tag(x_34) == 0)
{
obj* x_49; 
lean::dec(x_39);
x_49 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_49;
}
else
{
obj* x_50; 
x_50 = lean::cnstr_get(x_34, 1);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_52; obj* x_55; uint8 x_56; 
x_52 = lean::cnstr_get(x_34, 0);
lean::inc(x_52);
lean::dec(x_34);
x_55 = lean::mk_nat_obj(0u);
x_56 = lean::nat_dec_eq(x_39, x_55);
if (x_56 == 0)
{
obj* x_57; uint8 x_58; 
x_57 = lean::mk_nat_obj(1u);
x_58 = lean::nat_dec_eq(x_39, x_57);
lean::dec(x_39);
if (x_58 == 0)
{
obj* x_60; obj* x_61; obj* x_64; obj* x_65; 
x_60 = l_Lean_Parser_number_HasView;
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
lean::dec(x_60);
x_64 = lean::apply_1(x_61, x_52);
x_65 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_67; obj* x_70; obj* x_71; 
x_66 = l_Lean_Parser_stringLit_HasView;
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
lean::dec(x_66);
x_70 = lean::apply_1(x_67, x_52);
x_71 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_71, 0, x_70);
return x_71;
}
}
else
{
obj* x_73; obj* x_74; obj* x_77; obj* x_78; 
lean::dec(x_39);
x_73 = l_Lean_Parser_command_boolOptionValue_HasView;
x_74 = lean::cnstr_get(x_73, 0);
lean::inc(x_74);
lean::dec(x_73);
x_77 = lean::apply_1(x_74, x_52);
x_78 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_78, 0, x_77);
return x_78;
}
}
else
{
obj* x_82; 
lean::dec(x_50);
lean::dec(x_34);
lean::dec(x_39);
x_82 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_82;
}
}
}
}
}
}
}
else
{
obj* x_85; 
lean::dec(x_8);
lean::dec(x_17);
x_85 = l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1;
return x_85;
}
}
}
}
}
}
obj* l_Lean_Parser_command_optionValue_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_Lean_Parser_command_boolOptionValue_HasView;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
x_9 = lean::apply_1(x_6, x_2);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__1;
x_12 = l_Lean_Parser_Syntax_mkNode(x_11, x_10);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_Lean_Parser_command_optionValue;
x_15 = l_Lean_Parser_Syntax_mkNode(x_14, x_13);
return x_15;
}
case 1:
{
obj* x_16; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = l_Lean_Parser_stringLit_HasView;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_23 = lean::apply_1(x_20, x_16);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_Lean_Parser_detailIdentPart_HasView_x_27___lambda__2___closed__3;
x_26 = l_Lean_Parser_Syntax_mkNode(x_25, x_24);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_1);
x_28 = l_Lean_Parser_command_optionValue;
x_29 = l_Lean_Parser_Syntax_mkNode(x_28, x_27);
return x_29;
}
default:
{
obj* x_30; obj* x_33; obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_30 = lean::cnstr_get(x_0, 0);
lean::inc(x_30);
lean::dec(x_0);
x_33 = l_Lean_Parser_number_HasView;
x_34 = lean::cnstr_get(x_33, 1);
lean::inc(x_34);
lean::dec(x_33);
x_37 = lean::apply_1(x_34, x_30);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_1);
x_39 = l_Lean_Parser_number_HasView_x_27___lambda__2___closed__4;
x_40 = l_Lean_Parser_Syntax_mkNode(x_39, x_38);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_1);
x_42 = l_Lean_Parser_command_optionValue;
x_43 = l_Lean_Parser_Syntax_mkNode(x_42, x_41);
return x_43;
}
}
}
}
obj* _init_l_Lean_Parser_command_optionValue_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_optionValue_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_optionValue_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_optionValue_HasView_x_27;
return x_0;
}
}
obj* _init_l_Lean_Parser_command_setOption() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("setOption");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_Lean_Parser_command_optionValue_HasView;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_2 = l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1;
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; obj* x_28; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_30; 
x_30 = lean::box(3);
x_27 = x_1;
x_28 = x_30;
goto lbl_29;
}
else
{
obj* x_31; obj* x_33; 
x_31 = lean::cnstr_get(x_1, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_1, 1);
lean::inc(x_33);
lean::dec(x_1);
x_27 = x_33;
x_28 = x_31;
goto lbl_29;
}
lbl_29:
{
obj* x_36; 
switch (lean::obj_tag(x_28)) {
case 1:
{
if (lean::obj_tag(x_27) == 0)
{
obj* x_38; obj* x_41; obj* x_42; 
x_38 = lean::cnstr_get(x_28, 0);
lean::inc(x_38);
lean::dec(x_28);
x_41 = l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1;
x_42 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_42, 0, x_18);
lean::cnstr_set(x_42, 1, x_38);
lean::cnstr_set(x_42, 2, x_41);
return x_42;
}
else
{
obj* x_43; obj* x_46; obj* x_49; obj* x_50; obj* x_53; obj* x_54; 
x_43 = lean::cnstr_get(x_28, 0);
lean::inc(x_43);
lean::dec(x_28);
x_46 = lean::cnstr_get(x_27, 0);
lean::inc(x_46);
lean::dec(x_27);
x_49 = l_Lean_Parser_command_optionValue_HasView;
x_50 = lean::cnstr_get(x_49, 0);
lean::inc(x_50);
lean::dec(x_49);
x_53 = lean::apply_1(x_50, x_46);
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_18);
lean::cnstr_set(x_54, 1, x_43);
lean::cnstr_set(x_54, 2, x_53);
return x_54;
}
}
case 3:
{
obj* x_55; 
x_55 = lean::box(0);
x_36 = x_55;
goto lbl_37;
}
default:
{
obj* x_57; 
lean::dec(x_28);
x_57 = lean::box(0);
x_36 = x_57;
goto lbl_37;
}
}
lbl_37:
{
lean::dec(x_36);
if (lean::obj_tag(x_27) == 0)
{
obj* x_59; obj* x_60; obj* x_61; 
x_59 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_60 = l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1;
x_61 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_61, 0, x_18);
lean::cnstr_set(x_61, 1, x_59);
lean::cnstr_set(x_61, 2, x_60);
return x_61;
}
else
{
obj* x_62; obj* x_65; obj* x_66; obj* x_69; obj* x_70; obj* x_71; 
x_62 = lean::cnstr_get(x_27, 0);
lean::inc(x_62);
lean::dec(x_27);
x_65 = l_Lean_Parser_command_optionValue_HasView;
x_66 = lean::cnstr_get(x_65, 0);
lean::inc(x_66);
lean::dec(x_65);
x_69 = lean::apply_1(x_66, x_62);
x_70 = l_Lean_Parser_ident_Parser_View___rarg___lambda__1___closed__1;
x_71 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_71, 0, x_18);
lean::cnstr_set(x_71, 1, x_70);
lean::cnstr_set(x_71, 2, x_69);
return x_71;
}
}
}
}
}
}
}
obj* l_Lean_Parser_command_setOption_HasView_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_3);
x_9 = l_Lean_Parser_command_optionValue_HasView;
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_13 = lean::apply_1(x_10, x_5);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_15);
if (lean::obj_tag(x_1) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_17 = l_Lean_Parser_raw_view___rarg___lambda__2___closed__1;
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_command_setOption;
x_20 = l_Lean_Parser_Syntax_mkNode(x_19, x_18);
return x_20;
}
else
{
obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; 
x_21 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_23 = x_1;
} else {
 lean::inc(x_21);
 lean::dec(x_1);
 x_23 = lean::box(0);
}
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_21);
if (lean::is_scalar(x_23)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_23;
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::box(3);
x_27 = l_Option_getOrElse___main___rarg(x_25, x_26);
lean::dec(x_25);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_16);
x_30 = l_Lean_Parser_command_setOption;
x_31 = l_Lean_Parser_Syntax_mkNode(x_30, x_29);
return x_31;
}
}
}
obj* _init_l_Lean_Parser_command_setOption_HasView_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_setOption_HasView_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_setOption_HasView_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_command_setOption_HasView() {
_start:
{
obj* x_0; 
x_0 = l_Lean_Parser_command_setOption_HasView_x_27;
return x_0;
}
}
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
lean::inc(x_5);
x_10 = l_Lean_Parser_token(x_5, x_3, x_4);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_set(x_10, 1, lean::box(0));
 x_15 = x_10;
} else {
 lean::inc(x_13);
 lean::dec(x_10);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_11, 0);
x_18 = lean::cnstr_get(x_11, 1);
x_20 = lean::cnstr_get(x_11, 2);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_set(x_11, 0, lean::box(0));
 lean::cnstr_set(x_11, 1, lean::box(0));
 lean::cnstr_set(x_11, 2, lean::box(0));
 x_22 = x_11;
} else {
 lean::inc(x_16);
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_11);
 x_22 = lean::box(0);
}
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_25; obj* x_27; obj* x_30; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_25, 1);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_27);
x_23 = x_30;
goto lbl_24;
}
case 1:
{
obj* x_31; obj* x_33; obj* x_36; obj* x_38; 
x_31 = lean::cnstr_get(x_16, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_31, 1);
lean::inc(x_33);
lean::dec(x_31);
x_36 = l_Lean_Parser_Substring_toString(x_33);
lean::dec(x_33);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_36);
x_23 = x_38;
goto lbl_24;
}
default:
{
obj* x_39; 
x_39 = lean::box(0);
x_23 = x_39;
goto lbl_24;
}
}
lbl_24:
{
uint8 x_40; 
if (lean::obj_tag(x_23) == 0)
{
uint8 x_42; 
x_42 = 1;
x_40 = x_42;
goto lbl_41;
}
else
{
obj* x_43; uint8 x_46; 
x_43 = lean::cnstr_get(x_23, 0);
lean::inc(x_43);
lean::dec(x_23);
x_46 = lean::string_dec_eq(x_43, x_0);
lean::dec(x_43);
if (x_46 == 0)
{
uint8 x_48; 
x_48 = 1;
x_40 = x_48;
goto lbl_41;
}
else
{
uint8 x_49; 
x_49 = 0;
x_40 = x_49;
goto lbl_41;
}
}
lbl_41:
{
if (x_40 == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_0);
x_53 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_22)) {
 x_54 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_54 = x_22;
}
lean::cnstr_set(x_54, 0, x_16);
lean::cnstr_set(x_54, 1, x_18);
lean::cnstr_set(x_54, 2, x_53);
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_20, x_54);
x_56 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_57 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_56, x_55);
x_58 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_57);
if (lean::is_scalar(x_15)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_15;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_13);
return x_59;
}
else
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_71; 
lean::dec(x_15);
lean::dec(x_22);
x_62 = l_String_quote(x_0);
x_63 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_63, 0, x_62);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_3);
x_65 = lean::box(0);
x_66 = l_String_Iterator_extract___main___closed__1;
x_67 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_66, x_63, x_64, x_65, x_5, x_18, x_13);
lean::dec(x_18);
lean::dec(x_5);
lean::dec(x_64);
x_71 = lean::cnstr_get(x_67, 0);
lean::inc(x_71);
if (lean::obj_tag(x_71) == 0)
{
obj* x_73; obj* x_75; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_73 = lean::cnstr_get(x_67, 1);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 x_75 = x_67;
} else {
 lean::inc(x_73);
 lean::dec(x_67);
 x_75 = lean::box(0);
}
x_76 = lean::cnstr_get(x_71, 1);
x_78 = lean::cnstr_get(x_71, 2);
if (lean::is_exclusive(x_71)) {
 lean::cnstr_release(x_71, 0);
 x_80 = x_71;
} else {
 lean::inc(x_76);
 lean::inc(x_78);
 lean::dec(x_71);
 x_80 = lean::box(0);
}
x_81 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
if (lean::is_scalar(x_80)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_80;
}
lean::cnstr_set(x_82, 0, x_16);
lean::cnstr_set(x_82, 1, x_76);
lean::cnstr_set(x_82, 2, x_81);
x_83 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_78, x_82);
x_84 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_20, x_83);
x_85 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_81, x_84);
x_86 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_85);
if (lean::is_scalar(x_75)) {
 x_87 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_87 = x_75;
}
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_73);
return x_87;
}
else
{
obj* x_89; obj* x_91; obj* x_92; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
lean::dec(x_16);
x_89 = lean::cnstr_get(x_67, 1);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 x_91 = x_67;
} else {
 lean::inc(x_89);
 lean::dec(x_67);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_71, 0);
x_94 = lean::cnstr_get_scalar<uint8>(x_71, sizeof(void*)*1);
if (lean::is_exclusive(x_71)) {
 x_95 = x_71;
} else {
 lean::inc(x_92);
 lean::dec(x_71);
 x_95 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_92);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_94);
x_97 = x_96;
x_98 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_20, x_97);
x_99 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_100 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_99, x_98);
x_101 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_100);
if (lean::is_scalar(x_91)) {
 x_102 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_102 = x_91;
}
lean::cnstr_set(x_102, 0, x_101);
lean::cnstr_set(x_102, 1, x_89);
return x_102;
}
}
}
}
}
else
{
obj* x_106; obj* x_108; obj* x_109; uint8 x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_0);
x_106 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_108 = x_10;
} else {
 lean::inc(x_106);
 lean::dec(x_10);
 x_108 = lean::box(0);
}
x_109 = lean::cnstr_get(x_11, 0);
x_111 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (lean::is_exclusive(x_11)) {
 x_112 = x_11;
} else {
 lean::inc(x_109);
 lean::dec(x_11);
 x_112 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_113 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_113 = x_112;
}
lean::cnstr_set(x_113, 0, x_109);
lean::cnstr_set_scalar(x_113, sizeof(void*)*1, x_111);
x_114 = x_113;
x_115 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_116 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_114);
x_117 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_116);
if (lean::is_scalar(x_108)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_108;
}
lean::cnstr_set(x_118, 0, x_117);
lean::cnstr_set(x_118, 1, x_106);
return x_118;
}
}
}
obj* l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
lean::inc(x_2);
lean::inc(x_4);
x_9 = l_Lean_Parser_token(x_4, x_2, x_3);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_12 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_set(x_9, 1, lean::box(0));
 x_14 = x_9;
} else {
 lean::inc(x_12);
 lean::dec(x_9);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_10, 0);
x_17 = lean::cnstr_get(x_10, 1);
x_19 = lean::cnstr_get(x_10, 2);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_set(x_10, 0, lean::box(0));
 lean::cnstr_set(x_10, 1, lean::box(0));
 lean::cnstr_set(x_10, 2, lean::box(0));
 x_21 = x_10;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_10);
 x_21 = lean::box(0);
}
x_22 = l_Lean_Parser_stringLit;
lean::inc(x_15);
x_24 = l_Lean_Parser_tryView___at_Lean_Parser_stringLit_Parser___spec__1(x_22, x_15);
if (lean::obj_tag(x_24) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_15);
lean::dec(x_14);
lean::dec(x_21);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_2);
x_29 = lean::box(0);
x_30 = l_String_Iterator_extract___main___closed__1;
x_31 = l_Lean_Parser_stringLit_Parser___at_Lean_Parser_Term_builtinLeadingParsers_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_32 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_30, x_31, x_28, x_29, x_4, x_17, x_12);
lean::dec(x_17);
lean::dec(x_4);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_32, 0);
x_38 = lean::cnstr_get(x_32, 1);
if (lean::is_exclusive(x_32)) {
 x_40 = x_32;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_32);
 x_40 = lean::box(0);
}
x_41 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_42 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_41, x_36);
x_43 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_42);
x_44 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_41, x_43);
x_45 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_44, x_31);
x_46 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_45);
if (lean::is_scalar(x_40)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_40;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_38);
return x_47;
}
else
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_24);
x_51 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_21)) {
 x_52 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_52 = x_21;
}
lean::cnstr_set(x_52, 0, x_15);
lean::cnstr_set(x_52, 1, x_17);
lean::cnstr_set(x_52, 2, x_51);
x_53 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_52);
x_54 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_54, x_53);
x_56 = l_Lean_Parser_stringLit_Parser___at_Lean_Parser_Term_builtinLeadingParsers_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_57 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_55, x_56);
x_58 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_57);
if (lean::is_scalar(x_14)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_14;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_12);
return x_59;
}
}
else
{
obj* x_62; obj* x_64; obj* x_65; uint8 x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_4);
lean::dec(x_2);
x_62 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_64 = x_9;
} else {
 lean::inc(x_62);
 lean::dec(x_9);
 x_64 = lean::box(0);
}
x_65 = lean::cnstr_get(x_10, 0);
x_67 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 x_68 = x_10;
} else {
 lean::inc(x_65);
 lean::dec(x_10);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_65);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_67);
x_70 = x_69;
x_71 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_72 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_71, x_70);
x_73 = l_Lean_Parser_stringLit_Parser___at_Lean_Parser_Term_builtinLeadingParsers_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_74 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_72, x_73);
x_75 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_74);
if (lean::is_scalar(x_64)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_64;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_62);
return x_76;
}
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
lean::inc(x_2);
lean::inc(x_4);
x_9 = l_Lean_Parser_token(x_4, x_2, x_3);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_12 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_set(x_9, 1, lean::box(0));
 x_14 = x_9;
} else {
 lean::inc(x_12);
 lean::dec(x_9);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_10, 0);
x_17 = lean::cnstr_get(x_10, 1);
x_19 = lean::cnstr_get(x_10, 2);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_set(x_10, 0, lean::box(0));
 lean::cnstr_set(x_10, 1, lean::box(0));
 lean::cnstr_set(x_10, 2, lean::box(0));
 x_21 = x_10;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_10);
 x_21 = lean::box(0);
}
x_22 = l_Lean_Parser_number;
lean::inc(x_15);
x_24 = l_Lean_Parser_tryView___at_Lean_Parser_number_Parser___spec__1(x_22, x_15);
if (lean::obj_tag(x_24) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_15);
lean::dec(x_14);
lean::dec(x_21);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_2);
x_29 = lean::box(0);
x_30 = l_String_Iterator_extract___main___closed__1;
x_31 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_32 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_30, x_31, x_28, x_29, x_4, x_17, x_12);
lean::dec(x_17);
lean::dec(x_4);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_32, 0);
x_38 = lean::cnstr_get(x_32, 1);
if (lean::is_exclusive(x_32)) {
 x_40 = x_32;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_32);
 x_40 = lean::box(0);
}
x_41 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_42 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_41, x_36);
x_43 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_42);
x_44 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_41, x_43);
x_45 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_44, x_31);
x_46 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_45);
if (lean::is_scalar(x_40)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_40;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_38);
return x_47;
}
else
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_24);
x_51 = l_Lean_Parser_finishCommentBlock___closed__2;
if (lean::is_scalar(x_21)) {
 x_52 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_52 = x_21;
}
lean::cnstr_set(x_52, 0, x_15);
lean::cnstr_set(x_52, 1, x_17);
lean::cnstr_set(x_52, 2, x_51);
x_53 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_19, x_52);
x_54 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_55 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_54, x_53);
x_56 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_57 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_55, x_56);
x_58 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_57);
if (lean::is_scalar(x_14)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_14;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_12);
return x_59;
}
}
else
{
obj* x_62; obj* x_64; obj* x_65; uint8 x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_4);
lean::dec(x_2);
x_62 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_64 = x_9;
} else {
 lean::inc(x_62);
 lean::dec(x_9);
 x_64 = lean::box(0);
}
x_65 = lean::cnstr_get(x_10, 0);
x_67 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 x_68 = x_10;
} else {
 lean::inc(x_65);
 lean::dec(x_10);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_65);
lean::cnstr_set_scalar(x_69, sizeof(void*)*1, x_67);
x_70 = x_69;
x_71 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_72 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_71, x_70);
x_73 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser_Lean_Parser_HasTokens___spec__1___rarg___closed__1;
x_74 = l_Lean_Parser_ParsecT_labelsMkRes___rarg(x_72, x_73);
x_75 = l_Lean_Parser_ParsecT_tryMkRes___rarg(x_74);
if (lean::is_scalar(x_64)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_64;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_62);
return x_76;
}
}
}
obj* _init_l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; 
x_0 = lean::mk_string("setOption");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Parser_symbol_tokens___rarg(x_0, x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_4);
x_6 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_5);
lean::dec(x_5);
x_8 = l_Lean_Parser_tokens___rarg(x_6);
x_9 = l_Lean_Parser_List_cons_tokens___rarg(x_8, x_4);
lean::dec(x_8);
x_11 = l_Lean_Parser_tokens___rarg(x_9);
lean::dec(x_9);
x_13 = l_Lean_Parser_List_cons_tokens___rarg(x_11, x_6);
lean::dec(x_6);
lean::dec(x_11);
x_16 = l_Lean_Parser_tokens___rarg(x_13);
lean::dec(x_13);
x_18 = l_Lean_Parser_List_cons_tokens___rarg(x_16, x_4);
lean::dec(x_16);
x_20 = l_Lean_Parser_tokens___rarg(x_18);
lean::dec(x_18);
x_22 = l_Lean_Parser_List_cons_tokens___rarg(x_20, x_4);
lean::dec(x_20);
x_24 = l_Lean_Parser_List_cons_tokens___rarg(x_4, x_22);
lean::dec(x_22);
x_26 = l_Lean_Parser_List_cons_tokens___rarg(x_2, x_24);
lean::dec(x_24);
lean::dec(x_2);
x_29 = l_Lean_Parser_tokens___rarg(x_26);
lean::dec(x_26);
return x_29;
}
}
obj* l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasView() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_0 = lean::mk_string("setOption");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::mk_string("True");
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1___boxed), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
lean::inc(x_8);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__2), 6, 2);
lean::closure_set(x_13, 0, x_12);
lean::closure_set(x_13, 1, x_5);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_9);
x_15 = l_Lean_Parser_command_boolOptionValue;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_16, 0, x_15);
lean::closure_set(x_16, 1, x_14);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3___boxed), 4, 0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_9);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2___boxed), 4, 0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_16);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__2), 6, 2);
lean::closure_set(x_22, 0, x_21);
lean::closure_set(x_22, 1, x_5);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_9);
x_24 = l_Lean_Parser_command_optionValue;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_25, 0, x_24);
lean::closure_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_6);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_CommandParserM_Monad___closed__1;
x_31 = l_Lean_Parser_CommandParserM_MonadExcept___closed__1;
x_32 = l_Lean_Parser_CommandParserM_Lean_Parser_MonadParsec___closed__1;
x_33 = l_Lean_Parser_CommandParserM_Alternative___closed__1;
x_34 = l_Lean_Parser_command_setOption;
x_35 = l_Lean_Parser_command_setOption_HasView;
x_36 = l_Lean_Parser_Combinators_node_view___rarg(x_30, x_31, x_32, x_33, x_34, x_29, x_35);
lean::dec(x_29);
return x_36;
}
}
obj* _init_l_Lean_Parser_command_setOption_Parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_0 = lean::mk_string("setOption");
x_1 = l_String_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_docComment_Parser_Lean_Parser_HasTokens___spec__1___boxed), 7, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::mk_string("True");
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolOrIdent___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__1___boxed), 5, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::box(0);
lean::inc(x_8);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__2), 6, 2);
lean::closure_set(x_13, 0, x_12);
lean::closure_set(x_13, 1, x_5);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_9);
x_15 = l_Lean_Parser_command_boolOptionValue;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_16, 0, x_15);
lean::closure_set(x_16, 1, x_14);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_number_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__3___boxed), 4, 0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_9);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_stringLit_Parser___at_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens___spec__2___boxed), 4, 0);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_16);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_choiceAux___main___at_Lean_Parser_command_declModifiers_Parser_Lean_Parser_HasTokens___spec__2), 6, 2);
lean::closure_set(x_22, 0, x_21);
lean::closure_set(x_22, 1, x_5);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_9);
x_24 = l_Lean_Parser_command_optionValue;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4), 6, 2);
lean::closure_set(x_25, 0, x_24);
lean::closure_set(x_25, 1, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_ident_Parser___at_Lean_Parser_command_introRule_Parser_Lean_Parser_HasTokens___spec__1___boxed), 4, 0);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_6);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
}
obj* l_Lean_Parser_command_setOption_Parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Parser_command_setOption;
x_5 = l_Lean_Parser_command_setOption_Parser___closed__1;
x_6 = l_Lean_Parser_Combinators_node___at_Lean_Parser_command_docComment_Parser___spec__4(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_Lean_Parser_command_builtinCommandParsers_Lean_Parser_HasTokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_31; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_47; obj* x_50; obj* x_52; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_76; obj* x_78; obj* x_79; obj* x_81; obj* x_83; obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_97; obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_107; obj* x_109; 
x_0 = l_Lean_Parser_command_notation_Parser_Lean_Parser_HasTokens;
x_1 = l_Lean_Parser_tokens___rarg(x_0);
x_2 = l_Lean_Parser_command_reserveNotation_Parser_Lean_Parser_HasTokens;
x_3 = l_Lean_Parser_tokens___rarg(x_2);
x_4 = l_Lean_Parser_command_mixfix_Parser_Lean_Parser_HasTokens;
x_5 = l_Lean_Parser_tokens___rarg(x_4);
x_6 = l_Lean_Parser_command_reserveMixfix_Parser_Lean_Parser_HasTokens;
x_7 = l_Lean_Parser_tokens___rarg(x_6);
x_8 = lean::box(0);
x_9 = l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens;
x_10 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_9, x_8);
x_11 = l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens;
x_12 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_11, x_10);
lean::dec(x_10);
x_14 = l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens;
x_15 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_14, x_12);
lean::dec(x_12);
x_17 = l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens;
x_18 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_17, x_15);
lean::dec(x_15);
x_20 = l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens;
x_21 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_20, x_18);
lean::dec(x_18);
x_23 = l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens;
x_24 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_23, x_21);
lean::dec(x_21);
x_26 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_23, x_24);
lean::dec(x_24);
x_28 = l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens;
x_29 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_28, x_26);
lean::dec(x_26);
x_31 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_7, x_29);
lean::dec(x_29);
lean::dec(x_7);
x_34 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_31);
lean::dec(x_31);
x_36 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_34);
lean::dec(x_34);
x_38 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_36);
lean::dec(x_36);
x_40 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_38);
lean::dec(x_38);
x_42 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_40);
lean::dec(x_40);
x_44 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_5, x_42);
lean::dec(x_42);
lean::dec(x_5);
x_47 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_3, x_44);
lean::dec(x_44);
lean::dec(x_3);
x_50 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_1, x_47);
lean::dec(x_47);
x_52 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_1, x_50);
lean::dec(x_50);
lean::dec(x_1);
x_55 = l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens;
x_56 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_55, x_52);
lean::dec(x_52);
x_58 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_55, x_56);
lean::dec(x_56);
x_60 = l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens;
x_61 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_60, x_58);
lean::dec(x_58);
x_63 = l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens;
x_64 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_63, x_61);
lean::dec(x_61);
x_66 = l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens;
x_67 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_66, x_64);
lean::dec(x_64);
x_69 = l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens;
x_70 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_69, x_67);
lean::dec(x_67);
x_72 = l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens;
x_73 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_72, x_70);
lean::dec(x_70);
x_75 = l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens;
x_76 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_75, x_73);
lean::dec(x_73);
x_78 = l_Lean_Parser_command_Declaration_Parser_Lean_Parser_HasTokens;
x_79 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_76);
lean::dec(x_76);
x_81 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_79);
lean::dec(x_79);
x_83 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_81);
lean::dec(x_81);
x_85 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_83);
lean::dec(x_83);
x_87 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_85);
lean::dec(x_85);
x_89 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_87);
lean::dec(x_87);
x_91 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_89);
lean::dec(x_89);
x_93 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_91);
lean::dec(x_91);
x_95 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_93);
lean::dec(x_93);
x_97 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_95);
lean::dec(x_95);
x_99 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_97);
lean::dec(x_97);
x_101 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_99);
lean::dec(x_99);
x_103 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_101);
lean::dec(x_101);
x_105 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_103);
lean::dec(x_103);
x_107 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_105);
lean::dec(x_105);
x_109 = l_Lean_Parser_tokenMapCons_tokens___rarg(x_78, x_107);
lean::dec(x_107);
return x_109;
}
}
obj* _init_l_Lean_Parser_command_builtinCommandParsers() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_112; obj* x_113; obj* x_114; obj* x_117; obj* x_118; obj* x_119; obj* x_121; obj* x_122; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_129; obj* x_130; obj* x_131; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; 
x_0 = lean::box(0);
x_1 = lean::mk_string("/--");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_Declaration_Parser), 4, 0);
lean::inc(x_3);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_2);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string("@[");
x_7 = lean_name_mk_string(x_0, x_6);
lean::inc(x_3);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_3);
x_10 = lean::mk_string("private");
x_11 = lean_name_mk_string(x_0, x_10);
lean::inc(x_3);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_3);
x_14 = lean::mk_string("protected");
x_15 = lean_name_mk_string(x_0, x_14);
lean::inc(x_3);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_3);
x_18 = lean::mk_string("noncomputable");
x_19 = lean_name_mk_string(x_0, x_18);
lean::inc(x_3);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_3);
x_22 = lean::mk_string("unsafe");
x_23 = lean_name_mk_string(x_0, x_22);
lean::inc(x_3);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_3);
x_26 = lean::mk_string("def");
x_27 = lean_name_mk_string(x_0, x_26);
lean::inc(x_3);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_3);
x_30 = lean::mk_string("abbreviation");
x_31 = lean_name_mk_string(x_0, x_30);
lean::inc(x_3);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_3);
x_34 = lean::mk_string("abbrev");
x_35 = lean_name_mk_string(x_0, x_34);
lean::inc(x_3);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_3);
x_38 = lean::mk_string("theorem");
x_39 = lean_name_mk_string(x_0, x_38);
lean::inc(x_3);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_3);
x_42 = lean::mk_string("instance");
x_43 = lean_name_mk_string(x_0, x_42);
lean::inc(x_3);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_3);
x_46 = lean::mk_string("axiom");
x_47 = lean_name_mk_string(x_0, x_46);
lean::inc(x_3);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_3);
x_50 = lean::mk_string("constant");
x_51 = lean_name_mk_string(x_0, x_50);
lean::inc(x_3);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_51);
lean::cnstr_set(x_53, 1, x_3);
x_54 = lean::mk_string("class");
x_55 = lean_name_mk_string(x_0, x_54);
lean::inc(x_3);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_3);
x_58 = lean::mk_string("inductive");
x_59 = lean_name_mk_string(x_0, x_58);
lean::inc(x_3);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_3);
x_62 = lean::mk_string("structure");
x_63 = lean_name_mk_string(x_0, x_62);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_3);
x_65 = lean::mk_string("variable");
x_66 = lean_name_mk_string(x_0, x_65);
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variable_Parser), 4, 0);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_66);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::mk_string("variables");
x_70 = lean_name_mk_string(x_0, x_69);
x_71 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_variables_Parser), 4, 0);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_70);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::mk_string("namespace");
x_74 = lean_name_mk_string(x_0, x_73);
x_75 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_namespace_Parser), 4, 0);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::mk_string("end");
x_78 = lean_name_mk_string(x_0, x_77);
x_79 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_end_Parser), 4, 0);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_78);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::mk_string("open");
x_82 = lean_name_mk_string(x_0, x_81);
x_83 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_open_Parser), 4, 0);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_82);
lean::cnstr_set(x_84, 1, x_83);
x_85 = lean::mk_string("section");
x_86 = lean_name_mk_string(x_0, x_85);
x_87 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_section_Parser), 4, 0);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_86);
lean::cnstr_set(x_88, 1, x_87);
x_89 = lean::mk_string("universe");
x_90 = lean_name_mk_string(x_0, x_89);
x_91 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_universe_Parser), 4, 0);
lean::inc(x_91);
x_93 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_93, 0, x_90);
lean::cnstr_set(x_93, 1, x_91);
x_94 = lean::mk_string("universes");
x_95 = lean_name_mk_string(x_0, x_94);
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_91);
x_97 = lean::mk_string("local");
x_98 = lean_name_mk_string(x_0, x_97);
x_99 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_notation_Parser), 5, 0);
x_100 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_100, 0, x_99);
lean::inc(x_100);
lean::inc(x_98);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_98);
lean::cnstr_set(x_103, 1, x_100);
x_104 = lean::mk_string("notation");
x_105 = lean_name_mk_string(x_0, x_104);
x_106 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_106, 1, x_100);
x_107 = lean::mk_string("reserve");
x_108 = lean_name_mk_string(x_0, x_107);
x_109 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveNotation_Parser), 5, 0);
x_110 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_110, 0, x_109);
lean::inc(x_108);
x_112 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_112, 0, x_108);
lean::cnstr_set(x_112, 1, x_110);
x_113 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_mixfix_Parser), 5, 0);
x_114 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_114, 0, x_113);
lean::inc(x_114);
lean::inc(x_98);
x_117 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_117, 0, x_98);
lean::cnstr_set(x_117, 1, x_114);
x_118 = lean::mk_string("prefix");
x_119 = lean_name_mk_string(x_0, x_118);
lean::inc(x_114);
x_121 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_121, 0, x_119);
lean::cnstr_set(x_121, 1, x_114);
x_122 = lean::mk_string("infix");
x_123 = lean_name_mk_string(x_0, x_122);
lean::inc(x_114);
x_125 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_125, 0, x_123);
lean::cnstr_set(x_125, 1, x_114);
x_126 = lean::mk_string("infixl");
x_127 = lean_name_mk_string(x_0, x_126);
lean::inc(x_114);
x_129 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_129, 0, x_127);
lean::cnstr_set(x_129, 1, x_114);
x_130 = lean::mk_string("infixr");
x_131 = lean_name_mk_string(x_0, x_130);
lean::inc(x_114);
x_133 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_133, 0, x_131);
lean::cnstr_set(x_133, 1, x_114);
x_134 = lean::mk_string("postfix");
x_135 = lean_name_mk_string(x_0, x_134);
x_136 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_114);
x_137 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_reserveMixfix_Parser), 5, 0);
x_138 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser_run), 5, 1);
lean::closure_set(x_138, 0, x_137);
x_139 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_139, 0, x_108);
lean::cnstr_set(x_139, 1, x_138);
x_140 = lean::mk_string("#check");
x_141 = lean_name_mk_string(x_0, x_140);
x_142 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_check_Parser), 4, 0);
x_143 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_143, 0, x_141);
lean::cnstr_set(x_143, 1, x_142);
x_144 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_attribute_Parser), 4, 0);
lean::inc(x_144);
x_146 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_146, 0, x_98);
lean::cnstr_set(x_146, 1, x_144);
x_147 = lean::mk_string("attribute");
x_148 = lean_name_mk_string(x_0, x_147);
x_149 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_149, 0, x_148);
lean::cnstr_set(x_149, 1, x_144);
x_150 = lean::mk_string("export");
x_151 = lean_name_mk_string(x_0, x_150);
x_152 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_export_Parser), 4, 0);
x_153 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_153, 0, x_151);
lean::cnstr_set(x_153, 1, x_152);
x_154 = lean::mk_string("include");
x_155 = lean_name_mk_string(x_0, x_154);
x_156 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_include_Parser), 4, 0);
x_157 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_157, 0, x_155);
lean::cnstr_set(x_157, 1, x_156);
x_158 = lean::mk_string("omit");
x_159 = lean_name_mk_string(x_0, x_158);
x_160 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_omit_Parser), 4, 0);
x_161 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_161, 0, x_159);
lean::cnstr_set(x_161, 1, x_160);
x_162 = lean::mk_string("initQuot");
x_163 = lean_name_mk_string(x_0, x_162);
x_164 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_initQuot_Parser), 4, 0);
x_165 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_165, 0, x_163);
lean::cnstr_set(x_165, 1, x_164);
x_166 = lean::mk_string("setOption");
x_167 = lean_name_mk_string(x_0, x_166);
x_168 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_command_setOption_Parser), 4, 0);
x_169 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_169, 0, x_167);
lean::cnstr_set(x_169, 1, x_168);
x_170 = lean::box(0);
x_171 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_171, 0, x_169);
lean::cnstr_set(x_171, 1, x_170);
x_172 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_172, 0, x_165);
lean::cnstr_set(x_172, 1, x_171);
x_173 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_173, 0, x_161);
lean::cnstr_set(x_173, 1, x_172);
x_174 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_174, 0, x_157);
lean::cnstr_set(x_174, 1, x_173);
x_175 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_175, 0, x_153);
lean::cnstr_set(x_175, 1, x_174);
x_176 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_176, 0, x_149);
lean::cnstr_set(x_176, 1, x_175);
x_177 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_177, 0, x_146);
lean::cnstr_set(x_177, 1, x_176);
x_178 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_178, 0, x_143);
lean::cnstr_set(x_178, 1, x_177);
x_179 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_179, 0, x_139);
lean::cnstr_set(x_179, 1, x_178);
x_180 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_180, 0, x_136);
lean::cnstr_set(x_180, 1, x_179);
x_181 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_181, 0, x_133);
lean::cnstr_set(x_181, 1, x_180);
x_182 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_182, 0, x_129);
lean::cnstr_set(x_182, 1, x_181);
x_183 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_183, 0, x_125);
lean::cnstr_set(x_183, 1, x_182);
x_184 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_184, 0, x_121);
lean::cnstr_set(x_184, 1, x_183);
x_185 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_185, 0, x_117);
lean::cnstr_set(x_185, 1, x_184);
x_186 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_186, 0, x_112);
lean::cnstr_set(x_186, 1, x_185);
x_187 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_187, 0, x_106);
lean::cnstr_set(x_187, 1, x_186);
x_188 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_188, 0, x_103);
lean::cnstr_set(x_188, 1, x_187);
x_189 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_189, 0, x_96);
lean::cnstr_set(x_189, 1, x_188);
x_190 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_190, 0, x_93);
lean::cnstr_set(x_190, 1, x_189);
x_191 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_191, 0, x_88);
lean::cnstr_set(x_191, 1, x_190);
x_192 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_192, 0, x_84);
lean::cnstr_set(x_192, 1, x_191);
x_193 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_193, 0, x_80);
lean::cnstr_set(x_193, 1, x_192);
x_194 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_194, 0, x_76);
lean::cnstr_set(x_194, 1, x_193);
x_195 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_195, 0, x_72);
lean::cnstr_set(x_195, 1, x_194);
x_196 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_196, 0, x_68);
lean::cnstr_set(x_196, 1, x_195);
x_197 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_197, 0, x_64);
lean::cnstr_set(x_197, 1, x_196);
x_198 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_198, 0, x_61);
lean::cnstr_set(x_198, 1, x_197);
x_199 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_199, 0, x_57);
lean::cnstr_set(x_199, 1, x_198);
x_200 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_200, 0, x_53);
lean::cnstr_set(x_200, 1, x_199);
x_201 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_201, 0, x_49);
lean::cnstr_set(x_201, 1, x_200);
x_202 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_202, 0, x_45);
lean::cnstr_set(x_202, 1, x_201);
x_203 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_203, 0, x_41);
lean::cnstr_set(x_203, 1, x_202);
x_204 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_204, 0, x_37);
lean::cnstr_set(x_204, 1, x_203);
x_205 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_205, 0, x_33);
lean::cnstr_set(x_205, 1, x_204);
x_206 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_206, 0, x_29);
lean::cnstr_set(x_206, 1, x_205);
x_207 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_207, 0, x_25);
lean::cnstr_set(x_207, 1, x_206);
x_208 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_208, 0, x_21);
lean::cnstr_set(x_208, 1, x_207);
x_209 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_209, 0, x_17);
lean::cnstr_set(x_209, 1, x_208);
x_210 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_210, 0, x_13);
lean::cnstr_set(x_210, 1, x_209);
x_211 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_211, 0, x_9);
lean::cnstr_set(x_211, 1, x_210);
x_212 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_212, 0, x_5);
lean::cnstr_set(x_212, 1, x_211);
x_213 = l_Lean_Parser_TokenMap_ofList___main___rarg(x_212);
return x_213;
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = l_Option_getOrElse___main___rarg(x_2, x_4);
x_7 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
lean::cnstr_set(x_7, 2, x_1);
lean::cnstr_set(x_7, 3, x_3);
x_8 = 0;
x_9 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set_scalar(x_9, sizeof(void*)*1, x_8);
x_10 = x_9;
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_5);
return x_11;
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_Rbnode_find___main___at_Lean_NameMap_contains___spec__2(x_2, lean::box(0), x_0, x_1);
return x_3;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_Rbnode_find___main___at_Lean_NameMap_contains___spec__2(x_2, lean::box(0), x_0, x_1);
return x_3;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_Rbnode_find___main___at_Lean_NameMap_contains___spec__2(x_2, lean::box(0), x_0, x_1);
return x_3;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_Rbnode_find___main___at_Lean_NameMap_contains___spec__2(x_2, lean::box(0), x_0, x_1);
return x_3;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_Lean_Parser_peekToken___closed__1;
lean::inc(x_5);
x_10 = l_Lean_Parser_MonadParsec_observing___at_Lean_Parser_peekToken___spec__2(x_8, x_5, x_3, x_4);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; 
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_20; obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_13);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
x_20 = lean::cnstr_get(x_11, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_11, 2);
lean::inc(x_22);
lean::dec(x_11);
x_25 = lean::box(0);
x_26 = l_String_Iterator_extract___main___closed__1;
x_27 = l_mjoin___rarg___closed__1;
x_28 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_26, x_27, x_25, x_25, x_5, x_20, x_17);
lean::dec(x_20);
lean::dec(x_5);
x_31 = lean::cnstr_get(x_28, 0);
x_33 = lean::cnstr_get(x_28, 1);
if (lean::is_exclusive(x_28)) {
 x_35 = x_28;
} else {
 lean::inc(x_31);
 lean::inc(x_33);
 lean::dec(x_28);
 x_35 = lean::box(0);
}
x_36 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_22, x_31);
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_33);
return x_37;
}
else
{
obj* x_38; 
x_38 = lean::cnstr_get(x_13, 0);
lean::inc(x_38);
lean::dec(x_13);
switch (lean::obj_tag(x_38)) {
case 0:
{
obj* x_41; obj* x_44; obj* x_47; obj* x_49; obj* x_52; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
lean::dec(x_38);
x_44 = lean::cnstr_get(x_10, 1);
lean::inc(x_44);
lean::dec(x_10);
x_47 = lean::cnstr_get(x_11, 1);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_11, 2);
lean::inc(x_49);
lean::dec(x_11);
x_52 = lean::cnstr_get(x_41, 1);
lean::inc(x_52);
lean::dec(x_41);
x_55 = lean::box(0);
x_56 = lean_name_mk_string(x_55, x_52);
x_57 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg(x_0, x_56);
lean::dec(x_56);
x_59 = l_Option_toMonad___main___at_Lean_Parser_indexed___spec__2___rarg(x_57, x_5, x_47, x_44);
lean::dec(x_5);
x_61 = lean::cnstr_get(x_59, 0);
x_63 = lean::cnstr_get(x_59, 1);
if (lean::is_exclusive(x_59)) {
 x_65 = x_59;
} else {
 lean::inc(x_61);
 lean::inc(x_63);
 lean::dec(x_59);
 x_65 = lean::box(0);
}
x_66 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_67 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_66, x_61);
x_68 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_49, x_67);
if (lean::is_scalar(x_65)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_65;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_63);
return x_69;
}
case 1:
{
obj* x_71; obj* x_74; obj* x_76; obj* x_79; obj* x_80; obj* x_81; obj* x_83; obj* x_85; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
lean::dec(x_38);
x_71 = lean::cnstr_get(x_10, 1);
lean::inc(x_71);
lean::dec(x_10);
x_74 = lean::cnstr_get(x_11, 1);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_11, 2);
lean::inc(x_76);
lean::dec(x_11);
x_79 = l_Lean_Parser_indexed___rarg___lambda__1___closed__1;
x_80 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg(x_0, x_79);
x_81 = l_Option_toMonad___main___at_Lean_Parser_indexed___spec__2___rarg(x_80, x_5, x_74, x_71);
lean::dec(x_5);
x_83 = lean::cnstr_get(x_81, 0);
x_85 = lean::cnstr_get(x_81, 1);
if (lean::is_exclusive(x_81)) {
 x_87 = x_81;
} else {
 lean::inc(x_83);
 lean::inc(x_85);
 lean::dec(x_81);
 x_87 = lean::box(0);
}
x_88 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_89 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_88, x_83);
x_90 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_76, x_89);
if (lean::is_scalar(x_87)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_87;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_85);
return x_91;
}
case 2:
{
obj* x_92; obj* x_95; obj* x_97; obj* x_100; obj* x_103; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
x_92 = lean::cnstr_get(x_10, 1);
lean::inc(x_92);
lean::dec(x_10);
x_95 = lean::cnstr_get(x_11, 1);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_11, 2);
lean::inc(x_97);
lean::dec(x_11);
x_100 = lean::cnstr_get(x_38, 0);
lean::inc(x_100);
lean::dec(x_38);
x_103 = lean::cnstr_get(x_100, 0);
lean::inc(x_103);
lean::dec(x_100);
x_106 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg(x_0, x_103);
lean::dec(x_103);
x_108 = l_Option_toMonad___main___at_Lean_Parser_indexed___spec__2___rarg(x_106, x_5, x_95, x_92);
lean::dec(x_5);
x_110 = lean::cnstr_get(x_108, 0);
x_112 = lean::cnstr_get(x_108, 1);
if (lean::is_exclusive(x_108)) {
 x_114 = x_108;
} else {
 lean::inc(x_110);
 lean::inc(x_112);
 lean::dec(x_108);
 x_114 = lean::box(0);
}
x_115 = l_Lean_Parser_Parsec_Result_mkEps___rarg___closed__1;
x_116 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_115, x_110);
x_117 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_97, x_116);
if (lean::is_scalar(x_114)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_114;
}
lean::cnstr_set(x_118, 0, x_117);
lean::cnstr_set(x_118, 1, x_112);
return x_118;
}
default:
{
obj* x_119; obj* x_122; obj* x_124; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_132; 
x_119 = lean::cnstr_get(x_10, 1);
lean::inc(x_119);
lean::dec(x_10);
x_122 = lean::cnstr_get(x_11, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_11, 2);
lean::inc(x_124);
lean::dec(x_11);
x_127 = lean::box(0);
x_128 = l_String_Iterator_extract___main___closed__1;
x_129 = l_mjoin___rarg___closed__1;
x_130 = l_Lean_Parser_MonadParsec_error___at___private_init_lean_parser_token_1__finishCommentBlockAux___main___spec__1___rarg(x_128, x_129, x_127, x_127, x_5, x_122, x_119);
lean::dec(x_122);
x_132 = lean::cnstr_get(x_130, 0);
lean::inc(x_132);
if (lean::obj_tag(x_132) == 0)
{
obj* x_134; obj* x_137; obj* x_139; obj* x_141; obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_152; obj* x_153; obj* x_154; obj* x_155; 
x_134 = lean::cnstr_get(x_130, 1);
lean::inc(x_134);
lean::dec(x_130);
x_137 = lean::cnstr_get(x_132, 0);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_132, 1);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_132, 2);
lean::inc(x_141);
lean::dec(x_132);
x_144 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg(x_0, x_137);
lean::dec(x_137);
x_146 = l_Option_toMonad___main___at_Lean_Parser_indexed___spec__2___rarg(x_144, x_5, x_139, x_134);
lean::dec(x_5);
x_148 = lean::cnstr_get(x_146, 0);
x_150 = lean::cnstr_get(x_146, 1);
if (lean::is_exclusive(x_146)) {
 x_152 = x_146;
} else {
 lean::inc(x_148);
 lean::inc(x_150);
 lean::dec(x_146);
 x_152 = lean::box(0);
}
x_153 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_141, x_148);
x_154 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_124, x_153);
if (lean::is_scalar(x_152)) {
 x_155 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_155 = x_152;
}
lean::cnstr_set(x_155, 0, x_154);
lean::cnstr_set(x_155, 1, x_150);
return x_155;
}
else
{
obj* x_158; obj* x_160; obj* x_161; uint8 x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; 
lean::dec(x_5);
lean::dec(x_0);
x_158 = lean::cnstr_get(x_130, 1);
if (lean::is_exclusive(x_130)) {
 lean::cnstr_release(x_130, 0);
 x_160 = x_130;
} else {
 lean::inc(x_158);
 lean::dec(x_130);
 x_160 = lean::box(0);
}
x_161 = lean::cnstr_get(x_132, 0);
x_163 = lean::cnstr_get_scalar<uint8>(x_132, sizeof(void*)*1);
if (lean::is_exclusive(x_132)) {
 x_164 = x_132;
} else {
 lean::inc(x_161);
 lean::dec(x_132);
 x_164 = lean::box(0);
}
if (lean::is_scalar(x_164)) {
 x_165 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_165 = x_164;
}
lean::cnstr_set(x_165, 0, x_161);
lean::cnstr_set_scalar(x_165, sizeof(void*)*1, x_163);
x_166 = x_165;
x_167 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_124, x_166);
if (lean::is_scalar(x_160)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_160;
}
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set(x_168, 1, x_158);
return x_168;
}
}
}
}
}
else
{
obj* x_171; obj* x_173; obj* x_174; uint8 x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; 
lean::dec(x_5);
lean::dec(x_0);
x_171 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_173 = x_10;
} else {
 lean::inc(x_171);
 lean::dec(x_10);
 x_173 = lean::box(0);
}
x_174 = lean::cnstr_get(x_11, 0);
x_176 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (lean::is_exclusive(x_11)) {
 x_177 = x_11;
} else {
 lean::inc(x_174);
 lean::dec(x_11);
 x_177 = lean::box(0);
}
if (lean::is_scalar(x_177)) {
 x_178 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_178 = x_177;
}
lean::cnstr_set(x_178, 0, x_174);
lean::cnstr_set_scalar(x_178, sizeof(void*)*1, x_176);
x_179 = x_178;
if (lean::is_scalar(x_173)) {
 x_180 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_180 = x_173;
}
lean::cnstr_set(x_180, 0, x_179);
lean::cnstr_set(x_180, 1, x_171);
return x_180;
}
}
}
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_Lean_Parser_commandParser_run___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::box(0);
x_4 = l_Lean_Parser_RecT_runParsec___rarg___lambda__1___closed__1;
x_5 = l_mjoin___rarg___closed__1;
x_6 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg(x_4, x_5, x_3, x_3, x_1, x_2);
return x_6;
}
}
obj* l_Lean_Parser_commandParser_run___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_8; 
lean::inc(x_1);
x_7 = l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg(x_0, x_1, x_2, x_4, x_5);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; obj* x_13; obj* x_15; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_8, 2);
lean::inc(x_17);
lean::dec(x_8);
x_20 = l_Lean_Parser_Combinators_anyOf___at_Lean_Parser_command_universe_Parser___spec__1(x_13, x_1, x_2, x_15, x_10);
x_21 = lean::cnstr_get(x_20, 0);
x_23 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_25 = x_20;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_20);
 x_25 = lean::box(0);
}
x_26 = l_Lean_Parser_ParsecT_bindMkRes___rarg(x_17, x_21);
if (lean::is_scalar(x_25)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_25;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_23);
return x_27;
}
else
{
obj* x_30; obj* x_32; obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_1);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_7, 1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_32 = x_7;
} else {
 lean::inc(x_30);
 lean::dec(x_7);
 x_32 = lean::box(0);
}
x_33 = lean::cnstr_get(x_8, 0);
x_35 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 x_36 = x_8;
} else {
 lean::inc(x_33);
 lean::dec(x_8);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_32)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_32;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_30);
return x_39;
}
}
}
obj* _init_l_Lean_Parser_commandParser_run___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_commandParser_run___lambda__1___boxed), 3, 0);
return x_0;
}
}
obj* l_Lean_Parser_commandParser_run(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::inc(x_2);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_commandParser_run___lambda__2___boxed), 6, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = l_Lean_Parser_commandParser_run___closed__1;
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_fixCore___rarg___boxed), 3, 2);
lean::closure_set(x_8, 0, x_7);
lean::closure_set(x_8, 1, x_6);
x_9 = lean::apply_4(x_1, x_2, x_8, x_3, x_4);
return x_9;
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
lean::dec(x_4);
return x_6;
}
}
obj* l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_MonadParsec_error___at_Lean_Parser_commandParser_run___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__4(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__5(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Rbmap_find___main___at_Lean_Parser_commandParser_run___spec__6(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_indexed___at_Lean_Parser_commandParser_run___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Parser_commandParser_run___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_commandParser_run___lambda__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Parser_commandParser_run___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_Parser_commandParser_run___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
return x_6;
}
}
obj* initialize_init_lean_parser_declaration(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_parser_command(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_parser_declaration(w);
 l_Lean_Parser_command_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_Parser___rarg___closed__1 = _init_l_Lean_Parser_command_Parser___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_command_Parser___rarg___closed__1);
 l_Lean_Parser_command_openSpec_as = _init_l_Lean_Parser_command_openSpec_as();
lean::mark_persistent(l_Lean_Parser_command_openSpec_as);
 l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_as_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_as_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_as_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_as_HasView_x_27);
 l_Lean_Parser_command_openSpec_as_HasView = _init_l_Lean_Parser_command_openSpec_as_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_as_HasView);
 l_Lean_Parser_command_openSpec_only = _init_l_Lean_Parser_command_openSpec_only();
lean::mark_persistent(l_Lean_Parser_command_openSpec_only);
 l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_only_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_only_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_only_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_only_HasView_x_27);
 l_Lean_Parser_command_openSpec_only_HasView = _init_l_Lean_Parser_command_openSpec_only_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_only_HasView);
 l_Lean_Parser_command_openSpec_renaming_item = _init_l_Lean_Parser_command_openSpec_renaming_item();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_item);
 l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_item_HasView_x_27);
 l_Lean_Parser_command_openSpec_renaming_item_HasView = _init_l_Lean_Parser_command_openSpec_renaming_item_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_item_HasView);
 l_Lean_Parser_command_openSpec_renaming = _init_l_Lean_Parser_command_openSpec_renaming();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming);
 l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3 = _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__1___closed__3);
 l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1 = _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView_x_27___lambda__2___closed__1);
 l_Lean_Parser_command_openSpec_renaming_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_renaming_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView_x_27);
 l_Lean_Parser_command_openSpec_renaming_HasView = _init_l_Lean_Parser_command_openSpec_renaming_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_renaming_HasView);
 l_Lean_Parser_command_openSpec_hiding = _init_l_Lean_Parser_command_openSpec_hiding();
lean::mark_persistent(l_Lean_Parser_command_openSpec_hiding);
 l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_hiding_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_hiding_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_hiding_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_hiding_HasView_x_27);
 l_Lean_Parser_command_openSpec_hiding_HasView = _init_l_Lean_Parser_command_openSpec_hiding_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_hiding_HasView);
 l_Lean_Parser_command_openSpec = _init_l_Lean_Parser_command_openSpec();
lean::mark_persistent(l_Lean_Parser_command_openSpec);
 l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3 = _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__3);
 l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4 = _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__4);
 l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5 = _init_l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27___lambda__1___closed__5);
 l_Lean_Parser_command_openSpec_HasView_x_27 = _init_l_Lean_Parser_command_openSpec_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView_x_27);
 l_Lean_Parser_command_openSpec_HasView = _init_l_Lean_Parser_command_openSpec_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_HasView);
 l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_openSpec_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_openSpec_Parser___closed__1 = _init_l_Lean_Parser_command_openSpec_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_openSpec_Parser___closed__1);
 l_Lean_Parser_command_open = _init_l_Lean_Parser_command_open();
lean::mark_persistent(l_Lean_Parser_command_open);
 l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3 = _init_l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_open_HasView_x_27___lambda__1___closed__3);
 l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1 = _init_l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1();
lean::mark_persistent(l_Lean_Parser_command_open_HasView_x_27___lambda__2___closed__1);
 l_Lean_Parser_command_open_HasView_x_27 = _init_l_Lean_Parser_command_open_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_open_HasView_x_27);
 l_Lean_Parser_command_open_HasView = _init_l_Lean_Parser_command_open_HasView();
lean::mark_persistent(l_Lean_Parser_command_open_HasView);
 l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_open_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_open_Parser___closed__1 = _init_l_Lean_Parser_command_open_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_open_Parser___closed__1);
 l_Lean_Parser_command_export = _init_l_Lean_Parser_command_export();
lean::mark_persistent(l_Lean_Parser_command_export);
 l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_export_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_export_HasView_x_27 = _init_l_Lean_Parser_command_export_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_export_HasView_x_27);
 l_Lean_Parser_command_export_HasView = _init_l_Lean_Parser_command_export_HasView();
lean::mark_persistent(l_Lean_Parser_command_export_HasView);
 l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_export_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_export_Parser___closed__1 = _init_l_Lean_Parser_command_export_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_export_Parser___closed__1);
 l_Lean_Parser_command_section = _init_l_Lean_Parser_command_section();
lean::mark_persistent(l_Lean_Parser_command_section);
 l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_section_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1 = _init_l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1();
lean::mark_persistent(l_Lean_Parser_command_section_HasView_x_27___lambda__2___closed__1);
 l_Lean_Parser_command_section_HasView_x_27 = _init_l_Lean_Parser_command_section_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_section_HasView_x_27);
 l_Lean_Parser_command_section_HasView = _init_l_Lean_Parser_command_section_HasView();
lean::mark_persistent(l_Lean_Parser_command_section_HasView);
 l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_section_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_section_Parser___closed__1 = _init_l_Lean_Parser_command_section_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_section_Parser___closed__1);
 l_Lean_Parser_command_namespace = _init_l_Lean_Parser_command_namespace();
lean::mark_persistent(l_Lean_Parser_command_namespace);
 l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_namespace_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_namespace_HasView_x_27 = _init_l_Lean_Parser_command_namespace_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_namespace_HasView_x_27);
 l_Lean_Parser_command_namespace_HasView = _init_l_Lean_Parser_command_namespace_HasView();
lean::mark_persistent(l_Lean_Parser_command_namespace_HasView);
 l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_namespace_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_namespace_Parser___closed__1 = _init_l_Lean_Parser_command_namespace_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_namespace_Parser___closed__1);
 l_Lean_Parser_command_variable = _init_l_Lean_Parser_command_variable();
lean::mark_persistent(l_Lean_Parser_command_variable);
 l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3 = _init_l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_variable_HasView_x_27___lambda__1___closed__3);
 l_Lean_Parser_command_variable_HasView_x_27 = _init_l_Lean_Parser_command_variable_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_variable_HasView_x_27);
 l_Lean_Parser_command_variable_HasView = _init_l_Lean_Parser_command_variable_HasView();
lean::mark_persistent(l_Lean_Parser_command_variable_HasView);
 l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_variable_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_variable_Parser___closed__1 = _init_l_Lean_Parser_command_variable_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_variable_Parser___closed__1);
 l_Lean_Parser_command_variables = _init_l_Lean_Parser_command_variables();
lean::mark_persistent(l_Lean_Parser_command_variables);
 l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_variables_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_variables_HasView_x_27 = _init_l_Lean_Parser_command_variables_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_variables_HasView_x_27);
 l_Lean_Parser_command_variables_HasView = _init_l_Lean_Parser_command_variables_HasView();
lean::mark_persistent(l_Lean_Parser_command_variables_HasView);
 l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_variables_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_variables_Parser___closed__1 = _init_l_Lean_Parser_command_variables_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_variables_Parser___closed__1);
 l_Lean_Parser_command_include = _init_l_Lean_Parser_command_include();
lean::mark_persistent(l_Lean_Parser_command_include);
 l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_include_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_include_HasView_x_27 = _init_l_Lean_Parser_command_include_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_include_HasView_x_27);
 l_Lean_Parser_command_include_HasView = _init_l_Lean_Parser_command_include_HasView();
lean::mark_persistent(l_Lean_Parser_command_include_HasView);
 l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_include_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_include_Parser___closed__1 = _init_l_Lean_Parser_command_include_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_include_Parser___closed__1);
 l_Lean_Parser_command_omit = _init_l_Lean_Parser_command_omit();
lean::mark_persistent(l_Lean_Parser_command_omit);
 l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_omit_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_omit_HasView_x_27 = _init_l_Lean_Parser_command_omit_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_omit_HasView_x_27);
 l_Lean_Parser_command_omit_HasView = _init_l_Lean_Parser_command_omit_HasView();
lean::mark_persistent(l_Lean_Parser_command_omit_HasView);
 l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_omit_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_omit_Parser___closed__1 = _init_l_Lean_Parser_command_omit_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_omit_Parser___closed__1);
 l_Lean_Parser_command_end = _init_l_Lean_Parser_command_end();
lean::mark_persistent(l_Lean_Parser_command_end);
 l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_end_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1 = _init_l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1();
lean::mark_persistent(l_Lean_Parser_command_end_HasView_x_27___lambda__2___closed__1);
 l_Lean_Parser_command_end_HasView_x_27 = _init_l_Lean_Parser_command_end_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_end_HasView_x_27);
 l_Lean_Parser_command_end_HasView = _init_l_Lean_Parser_command_end_HasView();
lean::mark_persistent(l_Lean_Parser_command_end_HasView);
 l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_end_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_end_Parser___closed__1 = _init_l_Lean_Parser_command_end_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_end_Parser___closed__1);
 l_Lean_Parser_command_universes = _init_l_Lean_Parser_command_universes();
lean::mark_persistent(l_Lean_Parser_command_universes);
 l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_universes_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_universes_HasView_x_27 = _init_l_Lean_Parser_command_universes_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_universes_HasView_x_27);
 l_Lean_Parser_command_universes_HasView = _init_l_Lean_Parser_command_universes_HasView();
lean::mark_persistent(l_Lean_Parser_command_universes_HasView);
 l_Lean_Parser_command_universe = _init_l_Lean_Parser_command_universe();
lean::mark_persistent(l_Lean_Parser_command_universe);
 l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_universe_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_universe_HasView_x_27 = _init_l_Lean_Parser_command_universe_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_universe_HasView_x_27);
 l_Lean_Parser_command_universe_HasView = _init_l_Lean_Parser_command_universe_HasView();
lean::mark_persistent(l_Lean_Parser_command_universe_HasView);
 l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_universe_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_universe_Parser___closed__1 = _init_l_Lean_Parser_command_universe_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_universe_Parser___closed__1);
 l_Lean_Parser_command_check = _init_l_Lean_Parser_command_check();
lean::mark_persistent(l_Lean_Parser_command_check);
 l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_check_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_check_HasView_x_27 = _init_l_Lean_Parser_command_check_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_check_HasView_x_27);
 l_Lean_Parser_command_check_HasView = _init_l_Lean_Parser_command_check_HasView();
lean::mark_persistent(l_Lean_Parser_command_check_HasView);
 l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_check_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_check_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_check_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_check_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_check_Parser___closed__1 = _init_l_Lean_Parser_command_check_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_check_Parser___closed__1);
 l_Lean_Parser_command_attribute = _init_l_Lean_Parser_command_attribute();
lean::mark_persistent(l_Lean_Parser_command_attribute);
 l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3 = _init_l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_command_attribute_HasView_x_27___lambda__1___closed__3);
 l_Lean_Parser_command_attribute_HasView_x_27 = _init_l_Lean_Parser_command_attribute_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_attribute_HasView_x_27);
 l_Lean_Parser_command_attribute_HasView = _init_l_Lean_Parser_command_attribute_HasView();
lean::mark_persistent(l_Lean_Parser_command_attribute_HasView);
 l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_attribute_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_attribute_Parser___closed__1 = _init_l_Lean_Parser_command_attribute_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_attribute_Parser___closed__1);
 l_Lean_Parser_command_initQuot = _init_l_Lean_Parser_command_initQuot();
lean::mark_persistent(l_Lean_Parser_command_initQuot);
 l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_initQuot_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_initQuot_HasView_x_27 = _init_l_Lean_Parser_command_initQuot_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_initQuot_HasView_x_27);
 l_Lean_Parser_command_initQuot_HasView = _init_l_Lean_Parser_command_initQuot_HasView();
lean::mark_persistent(l_Lean_Parser_command_initQuot_HasView);
 l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_initQuot_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_initQuot_Parser___closed__1 = _init_l_Lean_Parser_command_initQuot_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_initQuot_Parser___closed__1);
 l_Lean_Parser_command_boolOptionValue = _init_l_Lean_Parser_command_boolOptionValue();
lean::mark_persistent(l_Lean_Parser_command_boolOptionValue);
 l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_boolOptionValue_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_boolOptionValue_HasView_x_27 = _init_l_Lean_Parser_command_boolOptionValue_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_boolOptionValue_HasView_x_27);
 l_Lean_Parser_command_boolOptionValue_HasView = _init_l_Lean_Parser_command_boolOptionValue_HasView();
lean::mark_persistent(l_Lean_Parser_command_boolOptionValue_HasView);
 l_Lean_Parser_command_optionValue = _init_l_Lean_Parser_command_optionValue();
lean::mark_persistent(l_Lean_Parser_command_optionValue);
 l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_optionValue_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_optionValue_HasView_x_27 = _init_l_Lean_Parser_command_optionValue_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_optionValue_HasView_x_27);
 l_Lean_Parser_command_optionValue_HasView = _init_l_Lean_Parser_command_optionValue_HasView();
lean::mark_persistent(l_Lean_Parser_command_optionValue_HasView);
 l_Lean_Parser_command_setOption = _init_l_Lean_Parser_command_setOption();
lean::mark_persistent(l_Lean_Parser_command_setOption);
 l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1 = _init_l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__1);
 l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2 = _init_l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_command_setOption_HasView_x_27___lambda__1___closed__2);
 l_Lean_Parser_command_setOption_HasView_x_27 = _init_l_Lean_Parser_command_setOption_HasView_x_27();
lean::mark_persistent(l_Lean_Parser_command_setOption_HasView_x_27);
 l_Lean_Parser_command_setOption_HasView = _init_l_Lean_Parser_command_setOption_HasView();
lean::mark_persistent(l_Lean_Parser_command_setOption_HasView);
 l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasTokens);
 l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasView = _init_l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasView();
lean::mark_persistent(l_Lean_Parser_command_setOption_Parser_Lean_Parser_HasView);
 l_Lean_Parser_command_setOption_Parser___closed__1 = _init_l_Lean_Parser_command_setOption_Parser___closed__1();
lean::mark_persistent(l_Lean_Parser_command_setOption_Parser___closed__1);
 l_Lean_Parser_command_builtinCommandParsers_Lean_Parser_HasTokens = _init_l_Lean_Parser_command_builtinCommandParsers_Lean_Parser_HasTokens();
lean::mark_persistent(l_Lean_Parser_command_builtinCommandParsers_Lean_Parser_HasTokens);
 l_Lean_Parser_command_builtinCommandParsers = _init_l_Lean_Parser_command_builtinCommandParsers();
lean::mark_persistent(l_Lean_Parser_command_builtinCommandParsers);
 l_Lean_Parser_commandParser_run___closed__1 = _init_l_Lean_Parser_commandParser_run___closed__1();
lean::mark_persistent(l_Lean_Parser_commandParser_run___closed__1);
return w;
}
