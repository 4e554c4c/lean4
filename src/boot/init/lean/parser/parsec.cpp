// Lean compiler output
// Module: init.lean.parser.parsec
// Imports: init.data.to_string init.data.string.basic init.data.list.basic init.control.except init.data.repr init.lean.name init.data.dlist init.control.monad_fail init.control.combinators
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
obj* l_lean_parser_parsec__t_expect(obj*);
obj* l_lean_parser_monad__parsec_fix__aux___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_hidden___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2(obj*);
obj* l_lean_parser_parsec__t_monad__fail(obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___boxed(obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__1(obj*, obj*, obj*);
extern obj* l_except__t_lift___rarg___closed__1;
obj* l_lean_parser_monad__parsec_foldr___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t;
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_has__monad__lift___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix__aux(obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__until___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj*, obj*);
uint8 l_char_is__whitespace(uint32);
obj* l_lean_parser_monad__parsec_foldl___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_left__over(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1(obj*, obj*);
obj* l_lean_parser_parsec__t_orelse__mk__res(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_orelse___boxed(obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__11(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_pos___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_try___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_has__monad__lift___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_has__lift(obj*);
extern uint8 l_true_decidable;
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_expect___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_whitespace___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_eps___rarg(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__fail___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1(obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_bind__mk__res(obj*, obj*);
obj* l_lean_parser_parsec__t_parse___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_whitespace___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_orelse___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
uint8 l_char_is__lower(uint32);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_lean_parser_monad__parsec___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_text(obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at(obj*, obj*);
obj* l_lean_parser_monad__parsec_observing___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ch(obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_has__lift___boxed(obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1(obj*);
obj* l_lean_parser_parsec__t_bind__mk__res___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by1___rarg___closed__1;
obj* l_lean_parser_monad__parsec_label___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_curr___rarg(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___boxed(obj*);
obj* l_lean_parser_parsec__t_merge(obj*);
obj* l_lean_parser_parsec__t_alternative___rarg(obj*, obj*);
obj* l_string_iterator_remaining___boxed(obj*);
obj* l_lean_parser_monad__parsec_str___boxed(obj*, obj*);
obj* l_lean_parser_parsec_message_text___rarg___closed__4;
obj* l_lean_parser_monad__parsec_label___rarg___closed__1;
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_pos___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__until1___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__13___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__until___rarg(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg(obj*, uint8, obj*);
obj* l_lean_parser_monad__parsec_digit___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_try(obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_num(obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_labels(obj*);
obj* l_lean_parser_monad__parsec_fix___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_cond(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1_x_27(obj*, obj*);
obj* l_lean_parser_monad__parsec_observing___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lexeme(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix__aux___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___boxed(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_result_mk__eps___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___boxed(obj*);
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj*);
obj* l_lean_parser_monad__parsec_observing___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_eps(obj*);
obj* l_lean_parser_monad__parsec_curr___boxed(obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg(obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___boxed(obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___rarg(obj*, obj*);
uint8 l_char_is__digit(uint32);
obj* l_lean_parser_monad__parsec_fix__aux___boxed(obj*, obj*);
obj* l_lean_parser_parsec_message_to__string___boxed(obj*);
obj* l_lean_parser_monad__parsec_many1__aux___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__2(obj*, obj*, uint32);
obj* l_lean_parser_parsec__t_parse___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_curr(obj*, obj*);
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1(obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_cond___boxed(obj*, obj*);
obj* l_lean_parser_parsec_result_mk__eps(obj*, obj*);
obj* l_lean_parser_monad__parsec_fix__aux___main___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux___rarg(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
obj* l_lean_parser_monad__parsec_alpha___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_lower(obj*, obj*);
obj* l_lean_parser_monad__parsec__trans(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_hidden___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_zip___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_left__over___rarg___lambda__1(obj*);
namespace lean {
obj* string_iterator_next(obj*);
}
obj* l_lean_parser_monad__parsec_pos___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take___boxed(obj*, obj*);
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_hidden(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_alpha___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_cond___rarg___lambda__1(obj*, obj*, uint8);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___main___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux___main___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__2(obj*, uint8, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_labels___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_length(obj*);
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi(obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_monad(obj*);
uint8 l_string_is__empty(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_failure(obj*);
uint8 l_char_is__upper(uint32);
obj* l___private_init_lean_parser_parsec_4__take__while__aux(obj*);
obj* l_lean_parser_monad__parsec_try___rarg(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___rarg(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5(obj*);
obj* l_lean_parser_monad__parsec_longest__match___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
uint8 l_char_is__alpha(uint32);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run(obj*);
namespace lean {
uint32 string_iterator_curr(obj*);
}
obj* l_lean_parser_monad__parsec_digit___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_observing___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_upper(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_left__over___rarg(obj*);
obj* l_lean_parser_monad__parsec_take__until(obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__11___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg(obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_lean_parser_parsec__t_bind___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lower___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__4(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by__sat(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___boxed(obj*);
obj* l_lean_parser_monad__parsec_many(obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__9(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by1___boxed(obj*, obj*);
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__10(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___lambda__1(obj*);
obj* l_lean_parser_monad__parsec_take__while1___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_alternative(obj*);
obj* l_lean_parser_monad__parsec_fix__aux___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___rarg(obj*, obj*, obj*);
obj* l_string_intercalate(obj*, obj*);
obj* l___private_init_lean_parser_parsec_1__str__aux___main(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_digit___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___boxed(obj*);
obj* l_lean_parser_monad__parsec_many_x_27___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_labels__mk__res(obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_label___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__fail___boxed(obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_label___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___boxed(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___rarg(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main(obj*);
obj* l_lean_parser_parsec__t_run___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_has__to__string___boxed(obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux___main___boxed(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg(obj*, obj*, uint32);
obj* l_lean_parser_monad__parsec_whitespace___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_pure___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_string_iterator_curr___boxed(obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg(obj*, obj*, uint8, obj*);
obj* l_lean_parser_parsec__t_bind___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_text___rarg___closed__3;
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_parser_parsec_x_27;
obj* l_lean_parser_parsec_parse___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_alpha___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__1(obj*, uint32, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_label___rarg___lambda__1(obj*, obj*);
extern obj* l_list_repr__aux___main___rarg___closed__1;
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec_parse___rarg(obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_to__string___rarg(obj*);
obj* l_lean_parser_parsec__t_parse__with__eoi(obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_merge___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_string_to__nat(obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__5___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_3__mk__string__result(obj*);
obj* l_lean_parser_monad__parsec_lower___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
namespace lean {
uint8 string_iterator_has_next(obj*);
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_lean_parser_monad__parsec___rarg(obj*);
obj* l_lean_parser_parsec_message_text___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_digit___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_has__monad__lift(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_orelse__mk__res___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_except__t_monad___rarg___lambda__8___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi__error___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_label___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_orelse___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_remaining___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi__error___rarg(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
extern obj* l_lean_format_be___main___closed__1;
obj* l_string_line__column(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ensure___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_char_has__repr___closed__1;
obj* l_lean_parser_parsec__t_monad___rarg___lambda__14___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_bind___rarg___lambda__1(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___boxed(obj*);
obj* l___private_init_lean_parser_parsec_3__mk__string__result___boxed(obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lexeme___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1_x_27___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2(obj*);
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_label(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr(obj*, obj*);
obj* l_lean_parser_parsec;
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_left__over___rarg___closed__1;
obj* l_lean_parser_monad__parsec_fix___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
obj* l_lean_parser_parsec__t_pure___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_has__monad__lift___boxed(obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_alpha(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_string_iterator_offset___boxed(obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__13(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by___boxed(obj*, obj*);
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___boxed(obj*);
obj* l_lean_parser_monad__parsec_str__core___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_pure(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_to__string(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__until___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_bind(obj*);
obj* l_lean_parser_monad__parsec_take__until1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg(obj*);
obj* l_lean_parser_monad__parsec_ch___rarg___lambda__1(obj*, obj*, uint32, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux(obj*, obj*);
obj* l_lean_parser_monad__parsec_cond___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any(obj*, obj*);
obj* l_lean_parser_parsec_message_text___rarg___closed__2;
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27(obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_parsec_message_text___rarg___closed__5;
obj* l_lean_parser_parsec_message_text___boxed(obj*);
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected(obj*, obj*);
obj* l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_failure___rarg___closed__1;
obj* l_lean_parser_monad__parsec_satisfy(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__2(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_pure___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__eoi___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_upper___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi__error(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___main(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg(obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_text___rarg(obj*);
namespace lean {
obj* string_iterator_offset(obj*);
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix__aux___main(obj*, obj*);
obj* l_lean_parser_monad__parsec_upper___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___rarg___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_to__string___rarg___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1(obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__6(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by1___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_failure___boxed(obj*);
obj* l_lean_parser_monad__parsec_remaining___rarg___closed__1;
obj* l_lean_parser_parsec__t_monad___rarg___lambda__8___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___boxed(obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1;
obj* l_lean_parser_parsec__t_monad__except___boxed(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_parsec__t_failure___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_alpha___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux(obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_cond___rarg___lambda__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___rarg___lambda__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_merge___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__8(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_has__to__string(obj*);
obj* l_lean_parser_lean_parser_monad__parsec(obj*, obj*);
obj* l_lean_parser_parsec__t_expect___boxed(obj*);
obj* l_lean_parser_monad__parsec_ensure___rarg(obj*, obj*, obj*);
obj* l_lean_parser_parsec_expected_to__string(obj*);
obj* l_lean_parser_monad__parsec_try___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lower___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_run___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main(obj*, obj*);
obj* l_lean_parser_parsec_expected_to__string___main(obj*);
obj* l_lean_parser_monad__parsec_fix___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try___boxed(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_labels__mk__res___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__4(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_num___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___boxed(obj*);
obj* l_lean_parser_parsec__t_orelse___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lexeme___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by__sat___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1(obj*, obj*);
obj* l_lean_parser_parsec__t_eps___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_eps___boxed(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___boxed(obj*);
obj* l_lean_parser_monad__parsec_longest__match(obj*, obj*);
obj* l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1;
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg(obj*, uint32);
obj* l_lean_parser_parsec_parse___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_labels___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try__mk__res(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__3(obj*, obj*);
obj* l_lean_parser_parsec_message_text___rarg___boxed(obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_alternative___rarg___boxed(obj*, obj*);
namespace lean {
obj* string_iterator_remaining(obj*);
}
namespace lean {
obj* string_mk_iterator(obj*);
}
obj* l_lean_parser_monad__parsec_take(obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg(obj*, obj*, uint8, obj*);
obj* l_lean_parser_monad__parsec_cond___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_fix(obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr__aux___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___boxed(obj*);
obj* l_lean_parser_monad__parsec_many_x_27(obj*, obj*);
obj* l_lean_parser_parsec_parse(obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux(obj*);
obj* l_lean_parser_monad__parsec_pos(obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_try___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec_result_mk__eps___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_labels___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_to__string___rarg___closed__2;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(uint8, obj*);
obj* l_lean_parser_monad__parsec_lexeme___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_labels___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_parsec_message_to__string___rarg___closed__3;
obj* l_lean_parser_monad__parsec_lower___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__14(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ensure___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_lookahead___rarg___closed__1;
obj* l_lean_parser_monad__parsec_unexpected__at___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
uint8 l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_run___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_parsec__t_orelse___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_failure___rarg(obj*, obj*, obj*, obj*);
obj* l_nat_repr(obj*);
obj* l_lean_parser_monad__parsec_foldl___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___rarg(obj*, obj*, uint32);
obj* l_lean_parser_monad__parsec_remaining___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_digit(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many_x_27___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_try___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_3__mk__string__result___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_curr___rarg___closed__1;
obj* l_lean_parser_monad__parsec_sep__by1(obj*, obj*);
obj* l_lean_parser_monad__parsec_eoi___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__5(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_remaining(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ensure(obj*, obj*);
obj* l_lean_parser_monad__parsec_any___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_try___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_left__over___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__7(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__3(obj*, obj*, obj*);
obj* l_lean_parser_parsec_position;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_upper___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__1(obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_take__while(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_has__monad__lift___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux___main(obj*);
obj* l_lean_parser_monad__parsec_try(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_parsec_expected_to__string___main___closed__1;
obj* l_lean_parser_monad__parsec_many1__aux_x_27___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_lean_parser_parsec_message_to__string___rarg___closed__1;
obj* l_lean_parser_monad__parsec_many1_x_27___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_label___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_alternative___boxed(obj*);
obj* l_lean_parser_monad__parsec_ensure___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1_x_27(obj*, obj*);
obj* l_lean_parser_monad__parsec_whitespace(obj*, obj*);
obj* l_lean_parser_monad__parsec_num___rarg___closed__1;
obj* l_lean_parser_monad__parsec_str(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_2__take__aux___boxed(obj*);
obj* l_lean_parser_parsec__t_orelse(obj*);
obj* l_lean_parser_monad__parsec_hidden___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try__mk__res___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_upper___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_expect___rarg___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1_x_27___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__3(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_x_27;
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_iterator_to_string(obj*);
}
obj* l_lean_parser_parsec__t_try___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_num___boxed(obj*, obj*);
obj* l___private_init_lean_parser_parsec_1__str__aux(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__until1(obj*, obj*);
obj* l_lean_parser_monad__parsec_sep__by(obj*, obj*);
obj* l_lean_parser_parsec__t_merge___boxed(obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__12(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1_x_27___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_str___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldr___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_char_quote__core(uint32);
obj* l_lean_parser_monad__parsec_fix__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many_x_27___rarg(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_monad___rarg___lambda__3(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_monad__parsec_observing(obj*, obj*);
obj* l_lean_parser_parsec__t_parse(obj*, obj*);
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_labels___boxed(obj*);
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__4(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_bind___boxed(obj*);
obj* _init_l_lean_parser_parsec_position() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_parsec_expected_to__string___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(" or ");
return x_0;
}
}
obj* l_lean_parser_parsec_expected_to__string___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_string_join___closed__1;
return x_1;
}
else
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
return x_4;
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::cnstr_get(x_2, 0);
lean::inc(x_12);
lean::dec(x_2);
x_15 = l_lean_parser_parsec_expected_to__string___main___closed__1;
x_16 = lean::string_append(x_9, x_15);
x_17 = lean::string_append(x_16, x_12);
lean::dec(x_12);
return x_17;
}
else
{
obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_20 = lean::cnstr_get(x_0, 0);
lean::inc(x_20);
lean::dec(x_0);
x_23 = l_list_repr__aux___main___rarg___closed__1;
x_24 = lean::string_append(x_20, x_23);
x_25 = l_lean_parser_parsec_expected_to__string___main(x_2);
x_26 = lean::string_append(x_24, x_25);
lean::dec(x_25);
return x_26;
}
}
}
}
}
obj* l_lean_parser_parsec_expected_to__string(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_expected_to__string___main(x_0);
return x_1;
}
}
uint8 l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
else
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; uint8 x_9; 
x_5 = lean::cnstr_get(x_0, 0);
x_6 = lean::cnstr_get(x_0, 1);
x_7 = lean::cnstr_get(x_1, 0);
x_8 = lean::cnstr_get(x_1, 1);
x_9 = lean::string_dec_eq(x_5, x_7);
if (x_9 == 0)
{
uint8 x_10; 
x_10 = 0;
return x_10;
}
else
{
uint8 x_11; 
x_11 = l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(x_6, x_8);
if (x_11 == 0)
{
uint8 x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8 x_13; 
x_13 = 1;
return x_13;
}
}
}
}
}
}
obj* _init_l_lean_parser_parsec_message_text___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected ");
return x_0;
}
}
obj* _init_l_lean_parser_parsec_message_text___rarg___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_0 = lean::box(0);
x_1 = l_lean_parser_parsec_expected_to__string___main(x_0);
x_2 = lean::mk_string("expected ");
x_3 = lean::string_append(x_2, x_1);
lean::dec(x_1);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_0);
return x_5;
}
}
obj* _init_l_lean_parser_parsec_message_text___rarg___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = l_lean_parser_parsec_expected_to__string___main(x_0);
x_2 = lean::mk_string("expected ");
x_3 = lean::string_append(x_2, x_1);
lean::dec(x_1);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_0);
x_6 = l_list_append___rarg(x_0, x_5);
x_7 = lean::mk_string("\n");
x_8 = l_string_intercalate(x_7, x_6);
return x_8;
}
}
obj* _init_l_lean_parser_parsec_message_text___rarg___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_list_append___rarg(x_0, x_0);
x_2 = lean::mk_string("\n");
x_3 = l_string_intercalate(x_2, x_1);
return x_3;
}
}
obj* _init_l_lean_parser_parsec_message_text___rarg___closed__5() {
_start:
{
obj* x_0; uint8 x_1; 
x_0 = lean::box(0);
x_1 = l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(x_0, x_0);
if (x_1 == 0)
{
obj* x_2; 
x_2 = l_lean_parser_parsec_message_text___rarg___closed__3;
return x_2;
}
else
{
obj* x_3; 
x_3 = l_lean_parser_parsec_message_text___rarg___closed__4;
return x_3;
}
}
}
obj* l_lean_parser_parsec_message_text___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; uint8 x_3; 
x_1 = lean::cnstr_get(x_0, 1);
x_2 = l_string_join___closed__1;
x_3 = lean::string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; uint8 x_5; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::box(0);
x_5 = l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(x_4, x_4);
x_6 = l_lean_parser_parsec_message_text___rarg___closed__1;
x_7 = lean::string_append(x_6, x_1);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
if (x_5 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = l_lean_parser_parsec_message_text___rarg___closed__2;
x_10 = l_list_append___rarg(x_8, x_9);
x_11 = l_lean_format_be___main___closed__1;
x_12 = l_string_intercalate(x_11, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = l_list_append___rarg(x_8, x_4);
x_14 = l_lean_format_be___main___closed__1;
x_15 = l_string_intercalate(x_14, x_13);
return x_15;
}
}
else
{
obj* x_16; 
x_16 = l_lean_parser_parsec_message_text___rarg___closed__5;
return x_16;
}
}
}
obj* l_lean_parser_parsec_message_text(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_message_text___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_has__dec__eq___main___at_lean_parser_parsec_message_text___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_parsec_message_text___rarg___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_message_text___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec_message_text___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_message_text(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_parsec_message_to__string___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("error at line ");
return x_0;
}
}
obj* _init_l_lean_parser_parsec_message_to__string___rarg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", column ");
return x_0;
}
}
obj* _init_l_lean_parser_parsec_message_to__string___rarg___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(":\n");
return x_0;
}
}
obj* l_lean_parser_parsec_message_to__string___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_1 = lean::cnstr_get(x_0, 0);
x_2 = lean::string_iterator_to_string(x_1);
x_3 = lean::string_iterator_offset(x_1);
x_4 = l_string_line__column(x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_nat_repr(x_5);
x_11 = l_lean_parser_parsec_message_to__string___rarg___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = l_lean_parser_parsec_message_to__string___rarg___closed__2;
x_15 = lean::string_append(x_12, x_14);
x_16 = l_nat_repr(x_7);
x_17 = lean::string_append(x_15, x_16);
lean::dec(x_16);
x_19 = l_lean_parser_parsec_message_to__string___rarg___closed__3;
x_20 = lean::string_append(x_17, x_19);
x_21 = l_lean_parser_parsec_message_text___rarg(x_0);
x_22 = lean::string_append(x_20, x_21);
lean::dec(x_21);
return x_22;
}
}
obj* l_lean_parser_parsec_message_to__string(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_message_to__string___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_lean_parser_parsec_message_to__string___rarg___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_message_to__string___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec_message_to__string___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_message_to__string(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec_has__to__string(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_message_to__string___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_lean_parser_parsec_has__to__string___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_has__to__string(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec_has__lift(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_message_to__string___rarg___boxed), 1, 0);
return x_1;
}
}
obj* l_lean_parser_parsec_has__lift___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec_has__lift(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_parsec_result_mk__eps___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_parsec_result_mk__eps___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_parser_parsec_result_mk__eps(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_result_mk__eps___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_parsec_result_mk__eps___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec_result_mk__eps(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_parser_parsec__t() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_parsec() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_parsec_x_27() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l_lean_parser_parsec__t_run___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::apply_2(x_5, lean::box(0), x_11);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
x_19 = lean::cnstr_get(x_1, 0);
lean::inc(x_19);
lean::dec(x_1);
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_19);
x_23 = lean::apply_2(x_16, lean::box(0), x_22);
return x_23;
}
}
}
obj* l_lean_parser_parsec__t_run___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::string_mk_iterator(x_4);
x_9 = lean::apply_1(x_3, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___rarg___lambda__1), 2, 1);
lean::closure_set(x_10, 0, x_0);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_9, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_run(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_run___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_run___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_parsec__t_run___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_run(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_pure___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_12 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_4);
lean::cnstr_set(x_12, 2, x_11);
x_13 = lean::apply_2(x_8, lean::box(0), x_12);
return x_13;
}
}
obj* l_lean_parser_parsec__t_pure(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_pure___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_pure___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_pure___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_parsec__t_pure___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_pure(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_eps___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::box(0);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_2);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::apply_2(x_6, lean::box(0), x_11);
return x_12;
}
}
obj* l_lean_parser_parsec__t_eps(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_eps___rarg___boxed), 3, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_eps___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec__t_eps___rarg(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_parsec__t_eps___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_eps(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_parsec__t_failure___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("failure");
return x_0;
}
}
obj* l_lean_parser_parsec__t_failure___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::box(0);
x_11 = l_lean_parser_parsec__t_failure___rarg___closed__1;
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_13, 0, x_3);
lean::cnstr_set(x_13, 1, x_11);
lean::cnstr_set(x_13, 2, x_12);
lean::cnstr_set(x_13, 3, x_10);
x_14 = 0;
x_15 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set_scalar(x_15, sizeof(void*)*1, x_14);
x_16 = x_15;
x_17 = lean::apply_2(x_7, lean::box(0), x_16);
return x_17;
}
}
obj* l_lean_parser_parsec__t_failure(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_failure___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_failure___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_parsec__t_failure___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_parsec__t_failure___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_failure(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_merge___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 3);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_10, 0, x_2);
lean::cnstr_set(x_10, 1, x_4);
lean::cnstr_set(x_10, 2, x_9);
lean::cnstr_set(x_10, 3, x_6);
return x_10;
}
}
obj* l_lean_parser_parsec__t_merge(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_merge___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_merge___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_merge___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_merge___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_merge(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 2);
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_2);
lean::cnstr_set(x_7, 1, x_4);
lean::cnstr_set(x_7, 2, x_0);
return x_7;
}
else
{
obj* x_8; obj* x_10; uint8 x_11; obj* x_12; obj* x_13; 
x_8 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_10 = x_1;
} else {
 lean::inc(x_8);
 lean::dec(x_1);
 x_10 = lean::box(0);
}
x_11 = 1;
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set_scalar(x_12, sizeof(void*)*1, x_11);
x_13 = x_12;
return x_13;
}
}
else
{
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_15; 
x_15 = lean::cnstr_get(x_1, 2);
lean::inc(x_15);
if (lean::obj_tag(x_15) == 0)
{
return x_1;
}
else
{
obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_15);
x_18 = lean::cnstr_get(x_1, 0);
x_20 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 2);
 x_22 = x_1;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_1);
 x_22 = lean::box(0);
}
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_18);
lean::cnstr_set(x_24, 1, x_20);
lean::cnstr_set(x_24, 2, x_23);
return x_24;
}
}
else
{
uint8 x_25; 
x_25 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*1);
if (x_25 == 0)
{
obj* x_26; obj* x_28; obj* x_29; obj* x_31; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_26 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_28 = x_1;
} else {
 lean::inc(x_26);
 lean::dec(x_1);
 x_28 = lean::box(0);
}
x_29 = lean::cnstr_get(x_26, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_26, 1);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_26, 3);
lean::inc(x_33);
lean::dec(x_26);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_37, 0, x_29);
lean::cnstr_set(x_37, 1, x_31);
lean::cnstr_set(x_37, 2, x_36);
lean::cnstr_set(x_37, 3, x_33);
if (lean::is_scalar(x_28)) {
 x_38 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_38 = x_28;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_25);
x_39 = x_38;
return x_39;
}
else
{
return x_1;
}
}
}
}
}
obj* l_lean_parser_parsec__t_bind__mk__res(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_bind__mk__res___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_bind__mk__res(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_bind___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_13; obj* x_16; obj* x_19; obj* x_20; obj* x_21; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
lean::dec(x_13);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_19, 0, x_7);
x_20 = lean::apply_2(x_1, x_3, x_5);
x_21 = lean::apply_4(x_16, lean::box(0), lean::box(0), x_19, x_20);
return x_21;
}
else
{
obj* x_23; uint8 x_25; obj* x_26; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_1);
x_23 = lean::cnstr_get(x_2, 0);
x_25 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_26 = x_2;
} else {
 lean::inc(x_23);
 lean::dec(x_2);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_0, 0);
lean::inc(x_27);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
if (lean::is_scalar(x_26)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_26;
}
lean::cnstr_set(x_33, 0, x_23);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_25);
x_34 = x_33;
x_35 = lean::apply_2(x_30, lean::box(0), x_34);
return x_35;
}
}
}
obj* l_lean_parser_parsec__t_bind___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::apply_1(x_4, x_6);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind___rarg___lambda__1), 3, 2);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_5);
x_11 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_9, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_bind(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind___rarg___boxed), 7, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_bind___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_parser_parsec__t_bind___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_7;
}
}
obj* l_lean_parser_parsec__t_bind___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_bind(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_13; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_3 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_7 = lean::cnstr_get(x_2, 2);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_18, 0, x_7);
x_19 = lean::apply_1(x_1, x_3);
x_20 = lean::cnstr_get(x_10, 1);
lean::inc(x_20);
lean::dec(x_10);
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_9)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_9;
}
lean::cnstr_set(x_24, 0, x_19);
lean::cnstr_set(x_24, 1, x_5);
lean::cnstr_set(x_24, 2, x_23);
x_25 = lean::apply_2(x_20, lean::box(0), x_24);
x_26 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_18, x_25);
return x_26;
}
else
{
obj* x_28; uint8 x_30; obj* x_31; obj* x_32; obj* x_35; obj* x_38; obj* x_39; obj* x_40; 
lean::dec(x_1);
x_28 = lean::cnstr_get(x_2, 0);
x_30 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_31 = x_2;
} else {
 lean::inc(x_28);
 lean::dec(x_2);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
lean::dec(x_0);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
if (lean::is_scalar(x_31)) {
 x_38 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_38 = x_31;
}
lean::cnstr_set(x_38, 0, x_28);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_30);
x_39 = x_38;
x_40 = lean::apply_2(x_35, lean::box(0), x_39);
return x_40;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_4, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_3 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_2, 2);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_7 = x_2;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
lean::dec(x_11);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_16, 0, x_5);
x_17 = lean::cnstr_get(x_8, 1);
lean::inc(x_17);
lean::dec(x_8);
x_20 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_7)) {
 x_21 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_21 = x_7;
}
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_3);
lean::cnstr_set(x_21, 2, x_20);
x_22 = lean::apply_2(x_17, lean::box(0), x_21);
x_23 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_16, x_22);
return x_23;
}
else
{
obj* x_25; uint8 x_27; obj* x_28; obj* x_29; obj* x_32; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_1);
x_25 = lean::cnstr_get(x_2, 0);
x_27 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_28 = x_2;
} else {
 lean::inc(x_25);
 lean::dec(x_2);
 x_28 = lean::box(0);
}
x_29 = lean::cnstr_get(x_0, 0);
lean::inc(x_29);
lean::dec(x_0);
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
lean::dec(x_29);
if (lean::is_scalar(x_28)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_28;
}
lean::cnstr_set(x_35, 0, x_25);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_27);
x_36 = x_35;
x_37 = lean::apply_2(x_32, lean::box(0), x_36);
return x_37;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_4, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__3), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_3);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_2);
lean::cnstr_set(x_11, 1, x_3);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::apply_2(x_7, lean::box(0), x_11);
return x_12;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
x_8 = lean::cnstr_get(x_3, 2);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_11, 0, x_8);
x_12 = lean::apply_1(x_0, x_4);
x_13 = lean::cnstr_get(x_1, 1);
lean::inc(x_13);
lean::dec(x_1);
x_16 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_10)) {
 x_17 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_17 = x_10;
}
lean::cnstr_set(x_17, 0, x_12);
lean::cnstr_set(x_17, 1, x_6);
lean::cnstr_set(x_17, 2, x_16);
x_18 = lean::apply_2(x_13, lean::box(0), x_17);
x_19 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_11, x_18);
return x_19;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_0);
lean::dec(x_2);
x_22 = lean::cnstr_get(x_3, 0);
x_24 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 x_25 = x_3;
} else {
 lean::inc(x_22);
 lean::dec(x_3);
 x_25 = lean::box(0);
}
x_26 = lean::cnstr_get(x_1, 1);
lean::inc(x_26);
lean::dec(x_1);
if (lean::is_scalar(x_25)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_25;
}
lean::cnstr_set(x_29, 0, x_22);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_24);
x_30 = x_29;
x_31 = lean::apply_2(x_26, lean::box(0), x_30);
return x_31;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_3, 2);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
lean::dec(x_14);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_19, 0, x_8);
x_20 = lean::apply_1(x_1, x_6);
lean::inc(x_16);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__6), 4, 3);
lean::closure_set(x_22, 0, x_4);
lean::closure_set(x_22, 1, x_11);
lean::closure_set(x_22, 2, x_16);
x_23 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_20, x_22);
x_24 = lean::apply_4(x_16, lean::box(0), lean::box(0), x_19, x_23);
return x_24;
}
else
{
obj* x_27; uint8 x_29; obj* x_30; obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_1);
lean::dec(x_2);
x_27 = lean::cnstr_get(x_3, 0);
x_29 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 x_30 = x_3;
} else {
 lean::inc(x_27);
 lean::dec(x_3);
 x_30 = lean::box(0);
}
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
lean::dec(x_0);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
if (lean::is_scalar(x_30)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_30;
}
lean::cnstr_set(x_37, 0, x_27);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_29);
x_38 = x_37;
x_39 = lean::apply_2(x_34, lean::box(0), x_38);
return x_39;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_3, x_5);
lean::inc(x_6);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__7), 4, 3);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_6);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_4 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 2);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_9, 0, x_6);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_8)) {
 x_14 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_14 = x_8;
}
lean::cnstr_set(x_14, 0, x_1);
lean::cnstr_set(x_14, 1, x_4);
lean::cnstr_set(x_14, 2, x_13);
x_15 = lean::apply_2(x_10, lean::box(0), x_14);
x_16 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_9, x_15);
return x_16;
}
else
{
obj* x_19; uint8 x_21; obj* x_22; obj* x_23; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_1);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_3, 0);
x_21 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 x_22 = x_3;
} else {
 lean::inc(x_19);
 lean::dec(x_3);
 x_22 = lean::box(0);
}
x_23 = lean::cnstr_get(x_0, 1);
lean::inc(x_23);
lean::dec(x_0);
if (lean::is_scalar(x_22)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_22;
}
lean::cnstr_set(x_26, 0, x_19);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_21);
x_27 = x_26;
x_28 = lean::apply_2(x_23, lean::box(0), x_27);
return x_28;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_3, 2);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
lean::dec(x_14);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_19, 0, x_8);
x_20 = lean::apply_1(x_1, x_6);
lean::inc(x_16);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__9), 4, 3);
lean::closure_set(x_22, 0, x_11);
lean::closure_set(x_22, 1, x_4);
lean::closure_set(x_22, 2, x_16);
x_23 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_20, x_22);
x_24 = lean::apply_4(x_16, lean::box(0), lean::box(0), x_19, x_23);
return x_24;
}
else
{
obj* x_27; uint8 x_29; obj* x_30; obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_1);
lean::dec(x_2);
x_27 = lean::cnstr_get(x_3, 0);
x_29 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 x_30 = x_3;
} else {
 lean::inc(x_27);
 lean::dec(x_3);
 x_30 = lean::box(0);
}
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
lean::dec(x_0);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
if (lean::is_scalar(x_30)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_30;
}
lean::cnstr_set(x_37, 0, x_27);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_29);
x_38 = x_37;
x_39 = lean::apply_2(x_34, lean::box(0), x_38);
return x_39;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_3, x_5);
lean::inc(x_6);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__10), 4, 3);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_4);
lean::closure_set(x_10, 2, x_6);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_17; obj* x_18; obj* x_19; 
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 2);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_17, 0, x_5);
x_18 = lean::apply_1(x_1, x_3);
x_19 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_17, x_18);
return x_19;
}
else
{
obj* x_21; uint8 x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_1);
x_21 = lean::cnstr_get(x_2, 0);
x_23 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_24 = x_2;
} else {
 lean::inc(x_21);
 lean::dec(x_2);
 x_24 = lean::box(0);
}
x_25 = lean::cnstr_get(x_0, 0);
lean::inc(x_25);
lean::dec(x_0);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
if (lean::is_scalar(x_24)) {
 x_31 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_31 = x_24;
}
lean::cnstr_set(x_31, 0, x_21);
lean::cnstr_set_scalar(x_31, sizeof(void*)*1, x_23);
x_32 = x_31;
x_33 = lean::apply_2(x_28, lean::box(0), x_32);
return x_33;
}
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_3, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__12), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_4);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_3, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_4);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_monad___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__2___boxed), 6, 1);
lean::closure_set(x_3, 0, x_0);
lean::inc(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__4___boxed), 6, 1);
lean::closure_set(x_5, 0, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_5);
lean::inc(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__5___boxed), 4, 1);
lean::closure_set(x_8, 0, x_0);
lean::inc(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__8___boxed), 6, 1);
lean::closure_set(x_10, 0, x_0);
lean::inc(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__11___boxed), 6, 1);
lean::closure_set(x_12, 0, x_0);
lean::inc(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__13___boxed), 6, 1);
lean::closure_set(x_14, 0, x_0);
x_15 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_15, 0, x_6);
lean::cnstr_set(x_15, 1, x_8);
lean::cnstr_set(x_15, 2, x_10);
lean::cnstr_set(x_15, 3, x_12);
lean::cnstr_set(x_15, 4, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__14___boxed), 6, 1);
lean::closure_set(x_16, 0, x_0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
obj* l_lean_parser_parsec__t_monad(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__4(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__5___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_parsec__t_monad___rarg___lambda__5(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__8(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__11(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__13(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___lambda__14___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_monad___rarg___lambda__14(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_monad___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_monad___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_monad___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_monad(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad__fail___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; 
x_2 = lean::box(0);
x_3 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_4 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_0);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_3);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* l_lean_parser_parsec__t_monad__fail(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__fail___rarg), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad__fail___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_monad__fail(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; uint8 x_10; obj* x_11; obj* x_12; obj* x_13; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = 0;
x_11 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_11, 0, x_2);
lean::cnstr_set_scalar(x_11, sizeof(void*)*1, x_10);
x_12 = x_11;
x_13 = lean::apply_2(x_7, lean::box(0), x_12);
return x_13;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__2(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_6; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_2(x_6, lean::box(0), x_2);
return x_9;
}
else
{
uint8 x_10; 
x_10 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (x_1 == 0)
{
obj* x_11; obj* x_14; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 x_19 = x_2;
} else {
 lean::inc(x_17);
 lean::dec(x_2);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set_scalar(x_20, sizeof(void*)*1, x_10);
x_21 = x_20;
x_22 = lean::apply_2(x_14, lean::box(0), x_21);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_29 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 x_31 = x_2;
} else {
 lean::inc(x_29);
 lean::dec(x_2);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_1);
x_33 = x_32;
x_34 = lean::apply_2(x_26, lean::box(0), x_33);
return x_34;
}
}
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_9; obj* x_12; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
x_12 = lean::apply_2(x_9, lean::box(0), x_3);
return x_12;
}
else
{
obj* x_13; uint8 x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_3, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
lean::dec(x_3);
x_17 = lean::cnstr_get(x_13, 0);
lean::inc(x_17);
x_19 = lean::apply_2(x_1, x_13, x_17);
x_20 = lean::box(x_15);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__except___rarg___lambda__2___boxed), 3, 2);
lean::closure_set(x_21, 0, x_0);
lean::closure_set(x_21, 1, x_20);
x_22 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_19, x_21);
return x_22;
}
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::apply_1(x_2, x_4);
lean::inc(x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__except___rarg___lambda__3), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_3);
lean::closure_set(x_9, 2, x_5);
x_10 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__except___rarg___lambda__1___boxed), 4, 1);
lean::closure_set(x_3, 0, x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__except___rarg___lambda__4___boxed), 5, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
return x_5;
}
}
obj* l_lean_parser_parsec__t_monad__except(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad__except___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_parsec__t_monad__except___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l_lean_parser_parsec__t_monad__except___rarg___lambda__2(x_0, x_3, x_2);
return x_4;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_monad__except___rarg___lambda__4(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_lean_parser_parsec__t_monad__except___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_monad__except___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_monad__except___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_monad__except(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_has__monad__lift___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_2);
lean::cnstr_set(x_10, 1, x_1);
lean::cnstr_set(x_10, 2, x_9);
x_11 = lean::apply_2(x_6, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_has__monad__lift___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_has__monad__lift___rarg___lambda__1), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_4);
x_8 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_3, x_7);
return x_8;
}
}
obj* l_lean_parser_parsec__t_has__monad__lift(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_has__monad__lift___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_has__monad__lift___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_has__monad__lift___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_parsec__t_has__monad__lift___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_has__monad__lift(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_expect___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 3);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_10, 0, x_2);
lean::cnstr_set(x_10, 1, x_4);
lean::cnstr_set(x_10, 2, x_9);
lean::cnstr_set(x_10, 3, x_6);
return x_10;
}
}
obj* l_lean_parser_parsec__t_expect(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_expect___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_expect___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_expect___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_expect___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_expect(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_5 = x_2;
} else {
 lean::dec(x_2);
 x_5 = lean::box(0);
}
x_6 = lean::cnstr_get(x_0, 0);
x_8 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 2);
 x_10 = x_0;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_5)) {
 x_11 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_11 = x_5;
}
lean::cnstr_set(x_11, 0, x_1);
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_6);
lean::cnstr_set(x_12, 1, x_8);
lean::cnstr_set(x_12, 2, x_11);
return x_12;
}
}
else
{
uint8 x_13; 
x_13 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*1);
if (x_13 == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_26; 
x_14 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_16 = x_0;
} else {
 lean::inc(x_14);
 lean::dec(x_0);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_14, 3);
lean::inc(x_21);
lean::dec(x_14);
x_24 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_19);
lean::cnstr_set(x_24, 2, x_1);
lean::cnstr_set(x_24, 3, x_21);
if (lean::is_scalar(x_16)) {
 x_25 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_25 = x_16;
}
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set_scalar(x_25, sizeof(void*)*1, x_13);
x_26 = x_25;
return x_26;
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
}
obj* l_lean_parser_parsec__t_labels__mk__res(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_labels__mk__res___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_labels__mk__res___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_labels__mk__res(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_labels___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_2, x_1);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_labels___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_3, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_labels___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_4);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_labels(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_labels___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_labels___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_labels___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_labels___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_labels(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
return x_0;
}
else
{
obj* x_1; obj* x_3; uint8 x_4; obj* x_5; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_3 = x_0;
} else {
 lean::inc(x_1);
 lean::dec(x_0);
 x_3 = lean::box(0);
}
x_4 = 0;
if (lean::is_scalar(x_3)) {
 x_5 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_5 = x_3;
}
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set_scalar(x_5, sizeof(void*)*1, x_4);
x_6 = x_5;
return x_6;
}
}
}
obj* l_lean_parser_parsec__t_try__mk__res(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_try__mk__res___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_try__mk__res___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_try__mk__res(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_try___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_parser_parsec__t_try__mk__res___rarg(x_1);
x_9 = lean::apply_2(x_5, lean::box(0), x_8);
return x_9;
}
}
obj* l_lean_parser_parsec__t_try___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::apply_1(x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_try___rarg___lambda__1), 2, 1);
lean::closure_set(x_8, 0, x_0);
x_9 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* l_lean_parser_parsec__t_try(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_try___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_try___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_try___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_parsec__t_try___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_try(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
uint8 x_3; 
x_3 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*1);
if (x_3 == 0)
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_6 = x_1;
} else {
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = l_lean_parser_parsec__t_merge___rarg(x_0, x_4);
lean::dec(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set_scalar(x_9, sizeof(void*)*1, x_3);
x_10 = x_9;
return x_10;
}
else
{
lean::dec(x_0);
return x_1;
}
}
}
}
obj* l_lean_parser_parsec__t_orelse__mk__res(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_orelse__mk__res___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_orelse__mk__res___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_orelse__mk__res(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_orelse___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_1, x_2);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_orelse___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_10 = lean::box(0);
x_5 = x_10;
goto lbl_6;
}
else
{
uint8 x_11; 
x_11 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (x_11 == 0)
{
obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_12 = lean::cnstr_get(x_4, 0);
lean::inc(x_12);
lean::dec(x_4);
x_15 = lean::apply_1(x_1, x_2);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_orelse___rarg___lambda__1), 3, 2);
lean::closure_set(x_16, 0, x_0);
lean::closure_set(x_16, 1, x_12);
x_17 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_15, x_16);
return x_17;
}
else
{
obj* x_21; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_21 = lean::box(0);
x_5 = x_21;
goto lbl_6;
}
}
lbl_6:
{
obj* x_23; obj* x_26; obj* x_29; 
lean::dec(x_5);
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_29 = lean::apply_2(x_26, lean::box(0), x_4);
return x_29;
}
}
}
obj* l_lean_parser_parsec__t_orelse___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_11; obj* x_12; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::inc(x_5);
x_9 = lean::apply_1(x_3, x_5);
lean::inc(x_6);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_orelse___rarg___lambda__2), 5, 4);
lean::closure_set(x_11, 0, x_0);
lean::closure_set(x_11, 1, x_4);
lean::closure_set(x_11, 2, x_5);
lean::closure_set(x_11, 3, x_6);
x_12 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_9, x_11);
return x_12;
}
}
obj* l_lean_parser_parsec__t_orelse(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_orelse___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_orelse___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_orelse___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_parsec__t_orelse___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_orelse(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::inc(x_4);
x_8 = lean::apply_1(x_2, x_4);
lean::inc(x_5);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_orelse___rarg___lambda__2), 5, 4);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_3);
lean::closure_set(x_10, 2, x_4);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_8, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec__t_failure___rarg(x_0, lean::box(0), lean::box(0), x_2);
return x_3;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; 
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__2___boxed), 6, 1);
lean::closure_set(x_3, 0, x_0);
lean::inc(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__4___boxed), 6, 1);
lean::closure_set(x_5, 0, x_0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_5);
lean::inc(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__5___boxed), 4, 1);
lean::closure_set(x_8, 0, x_0);
lean::inc(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__8___boxed), 6, 1);
lean::closure_set(x_10, 0, x_0);
lean::inc(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__11___boxed), 6, 1);
lean::closure_set(x_12, 0, x_0);
lean::inc(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__13___boxed), 6, 1);
lean::closure_set(x_14, 0, x_0);
x_15 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_15, 0, x_6);
lean::cnstr_set(x_15, 1, x_8);
lean::cnstr_set(x_15, 2, x_10);
lean::cnstr_set(x_15, 3, x_12);
lean::cnstr_set(x_15, 4, x_14);
lean::inc(x_0);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_alternative___rarg___lambda__1___boxed), 5, 1);
lean::closure_set(x_17, 0, x_0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_alternative___rarg___lambda__2___boxed), 3, 1);
lean::closure_set(x_18, 0, x_0);
x_19 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_19, 0, x_15);
lean::cnstr_set(x_19, 1, x_17);
lean::cnstr_set(x_19, 2, x_18);
return x_19;
}
}
obj* l_lean_parser_parsec__t_alternative(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_alternative___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_alternative___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec__t_alternative___rarg___lambda__2(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_parsec__t_alternative___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_alternative___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_alternative___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_alternative(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_lookahead___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_11 = x_2;
} else {
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_11)) {
 x_13 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_13 = x_11;
}
lean::cnstr_set(x_13, 0, x_9);
lean::cnstr_set(x_13, 1, x_1);
lean::cnstr_set(x_13, 2, x_12);
x_14 = lean::apply_2(x_6, lean::box(0), x_13);
return x_14;
}
else
{
obj* x_16; obj* x_19; obj* x_22; 
lean::dec(x_1);
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::apply_2(x_19, lean::box(0), x_2);
return x_22;
}
}
}
obj* l_lean_parser_parsec__t_lookahead___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::inc(x_4);
x_8 = lean::apply_1(x_3, x_4);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_lookahead___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_4);
x_10 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_parsec__t_lookahead(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_lookahead___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_lookahead___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_lookahead___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_parsec__t_lookahead___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_lookahead(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_monad__parsec_x_27() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = lean::apply_1(x_2, x_3);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_5(x_2, lean::box(0), x_0, lean::box(0), x_3, x_4);
return x_5;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::inc(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1___boxed), 4, 1);
lean::closure_set(x_2, 0, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2___boxed), 5, 1);
lean::closure_set(x_3, 0, x_0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_parser_lean_parser_monad__parsec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_lean_parser_monad__parsec___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_lean_parser_monad__parsec___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_lean_parser_monad__parsec___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_lean_parser_lean_parser_monad__parsec___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_lean_parser_monad__parsec(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::apply_2(x_4, lean::box(0), x_3);
x_8 = lean::apply_2(x_1, lean::box(0), x_7);
return x_8;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::apply_3(x_4, lean::box(0), x_1, x_3);
return x_7;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec__trans___rarg___lambda__2___boxed), 4, 2);
lean::closure_set(x_5, 0, x_0);
lean::closure_set(x_5, 1, x_3);
x_6 = lean::apply_3(x_1, lean::box(0), x_5, x_4);
return x_6;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
lean::inc(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec__trans___rarg___lambda__1___boxed), 4, 2);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec__trans___rarg___lambda__3___boxed), 5, 2);
lean::closure_set(x_5, 0, x_2);
lean::closure_set(x_5, 1, x_1);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec__trans(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec__trans___rarg), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec__trans___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec__trans___rarg___lambda__2(x_0, x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec__trans___rarg___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec__trans___rarg___lambda__3(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec__trans___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec__trans(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; 
x_5 = l_option_get__or__else___main___rarg(x_0, x_4);
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
lean::cnstr_set(x_6, 2, x_2);
lean::cnstr_set(x_6, 3, x_3);
x_7 = 0;
x_8 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set_scalar(x_8, sizeof(void*)*1, x_7);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_error___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_error___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_left__over___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* _init_l_lean_parser_monad__parsec_left__over___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_left__over___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_left__over___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_4; obj* x_5; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_5 = lean::apply_2(x_1, lean::box(0), x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_left__over(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_left__over___rarg), 1, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_left__over___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_left__over(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* _init_l_lean_parser_monad__parsec_remaining___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_string_iterator_remaining___boxed), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_remaining___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_15 = lean::apply_2(x_11, lean::box(0), x_14);
x_16 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
x_17 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_16, x_15);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_remaining(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_remaining___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_remaining___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_remaining(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_labels___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
x_8 = lean::apply_1(x_4, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_labels___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_2);
lean::closure_set(x_9, 1, x_0);
x_10 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_labels___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_labels___rarg___lambda__1___boxed), 6, 1);
lean::closure_set(x_7, 0, x_3);
x_8 = lean::apply_3(x_4, lean::box(0), x_7, x_2);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_labels(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_labels___rarg___boxed), 4, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_labels___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_labels___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_3);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_labels___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_labels___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_labels___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_labels(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_label___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_1, x_8);
x_10 = lean::apply_2(x_5, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_label___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::apply_1(x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_label___rarg___lambda__1), 2, 1);
lean::closure_set(x_8, 0, x_1);
x_9 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* _init_l_lean_parser_monad__parsec_label___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_label___rarg___lambda__2___boxed), 5, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_label___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_lean_parser_monad__parsec_label___rarg___closed__1;
x_8 = lean::apply_3(x_4, lean::box(0), x_7, x_2);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_label(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_label___rarg___boxed), 4, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_label___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_label___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_label___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_label___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_label___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_label(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_hidden___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_monad__parsec_label___rarg___closed__1;
x_7 = lean::apply_3(x_3, lean::box(0), x_6, x_2);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_hidden(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_hidden___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_hidden___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_hidden___rarg(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_hidden___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_hidden(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_try___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::apply_1(x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_try___rarg___lambda__1), 2, 1);
lean::closure_set(x_8, 0, x_1);
x_9 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* _init_l_lean_parser_monad__parsec_try___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_try___rarg___lambda__1___boxed), 5, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_try___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_monad__parsec_try___rarg___closed__1;
x_7 = lean::apply_3(x_3, lean::box(0), x_6, x_2);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_try(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_try___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_try___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_try___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_try___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_try___rarg(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_try___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_try(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_lookahead___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_lookahead___rarg(x_1, lean::box(0), lean::box(0), x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_monad__parsec_lookahead___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_lookahead___rarg___lambda__1___boxed), 5, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_lookahead___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_monad__parsec_lookahead___rarg___closed__1;
x_7 = lean::apply_3(x_3, lean::box(0), x_6, x_2);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_lookahead(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_lookahead___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_lookahead___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_lookahead___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_lookahead___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_lookahead___rarg(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_lookahead___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_lookahead(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_10; obj* x_13; obj* x_14; 
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::box(0);
x_14 = lean::apply_2(x_10, lean::box(0), x_13);
return x_14;
}
else
{
uint32 x_15; obj* x_16; obj* x_17; uint8 x_18; 
x_15 = lean::string_iterator_curr(x_3);
x_16 = lean::box_uint32(x_15);
x_17 = lean::apply_1(x_1, x_16);
x_18 = lean::unbox(x_17);
if (x_18 == 0)
{
obj* x_20; obj* x_23; obj* x_26; obj* x_27; 
lean::dec(x_2);
x_20 = lean::cnstr_get(x_0, 0);
lean::inc(x_20);
lean::dec(x_0);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
x_26 = lean::box(0);
x_27 = lean::apply_2(x_23, lean::box(0), x_26);
return x_27;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_0);
x_29 = l_char_quote__core(x_15);
x_30 = l_char_has__repr___closed__1;
x_31 = lean::string_append(x_30, x_29);
lean::dec(x_29);
x_33 = lean::string_append(x_31, x_30);
x_34 = lean::box(0);
x_35 = lean::box(0);
x_36 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg(x_2, lean::box(0), x_33, x_35, x_34, x_34);
return x_36;
}
}
}
}
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_8 = lean::apply_2(x_5, lean::box(0), x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_1);
x_10 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by__sat(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by__sat___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by__sat___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_not__followed__by__sat___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by__sat___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_not__followed__by__sat(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_eoi__error___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("end of input");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_eoi__error___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set(x_4, 2, x_3);
lean::cnstr_set(x_4, 3, x_1);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* l_lean_parser_monad__parsec_eoi__error(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_eoi__error___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_eoi__error___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_eoi__error(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_curr___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_string_iterator_curr___boxed), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_curr___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_15 = lean::apply_2(x_11, lean::box(0), x_14);
x_16 = l_lean_parser_monad__parsec_curr___rarg___closed__1;
x_17 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_16, x_15);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_curr(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_curr___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_curr___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_curr(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_cond___rarg___lambda__1(obj* x_0, obj* x_1, uint8 x_2) {
_start:
{
if (x_2 == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
lean::inc(x_1);
return x_1;
}
}
}
obj* l_lean_parser_monad__parsec_cond___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_monad__parsec_curr___rarg(x_0, x_1);
x_17 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_3, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_cond___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_18, 0, x_5);
lean::closure_set(x_18, 1, x_4);
x_19 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_17, x_18);
return x_19;
}
}
obj* l_lean_parser_monad__parsec_cond(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_cond___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_cond___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
x_4 = l_lean_parser_monad__parsec_cond___rarg___lambda__1(x_0, x_1, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_cond___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_cond___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_cond___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_cond(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__1(obj* x_0, uint32 x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::string_iterator_next(x_0);
x_4 = lean::box(0);
x_5 = lean::box_uint32(x_1);
x_6 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
lean::cnstr_set(x_6, 2, x_4);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_4);
if (x_5 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_11 = lean::box(0);
x_12 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg(x_1, lean::box(0), x_10, x_11, x_9, x_9);
return x_12;
}
else
{
uint32 x_13; obj* x_14; obj* x_16; uint8 x_17; 
x_13 = lean::string_iterator_curr(x_4);
x_14 = lean::box_uint32(x_13);
lean::inc(x_14);
x_16 = lean::apply_1(x_2, x_14);
x_17 = lean::unbox(x_16);
if (x_17 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_21 = l_char_quote__core(x_13);
x_22 = l_char_has__repr___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_25 = lean::string_append(x_23, x_22);
x_26 = lean::box(0);
x_27 = lean::box(0);
x_28 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg(x_1, lean::box(0), x_25, x_27, x_26, x_26);
return x_28;
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_1);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_30, 0, x_4);
lean::closure_set(x_30, 1, x_14);
x_31 = lean::apply_2(x_3, lean::box(0), x_30);
return x_31;
}
}
}
}
obj* l_lean_parser_monad__parsec_satisfy___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_5);
x_9 = lean::apply_2(x_5, lean::box(0), x_7);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__2___boxed), 5, 4);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_1);
lean::closure_set(x_10, 2, x_2);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_9, x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_satisfy(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_satisfy___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; 
x_3 = lean::unbox_uint32(x_1);
x_4 = l_lean_parser_monad__parsec_satisfy___rarg___lambda__1(x_0, x_3, x_2);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_satisfy___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_satisfy___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_satisfy___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_satisfy(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_ch___rarg___lambda__1(obj* x_0, obj* x_1, uint32 x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_4);
if (x_5 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_4);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_10 = lean::box(0);
x_11 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg(x_1, lean::box(0), x_9, x_10, x_8, x_8);
return x_11;
}
else
{
uint32 x_12; uint8 x_13; 
x_12 = lean::string_iterator_curr(x_4);
x_13 = x_12 == x_2;
if (x_13 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_4);
lean::dec(x_3);
x_16 = l_char_quote__core(x_12);
x_17 = l_char_has__repr___closed__1;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_20 = lean::string_append(x_18, x_17);
x_21 = lean::box(0);
x_22 = lean::box(0);
x_23 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg(x_1, lean::box(0), x_20, x_22, x_21, x_21);
return x_23;
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_1);
x_25 = lean::box_uint32(x_12);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_26, 0, x_4);
lean::closure_set(x_26, 1, x_25);
x_27 = lean::apply_2(x_3, lean::box(0), x_26);
return x_27;
}
}
}
}
obj* l_lean_parser_monad__parsec_ch___rarg(obj* x_0, obj* x_1, uint32 x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_5);
x_9 = lean::apply_2(x_5, lean::box(0), x_7);
x_10 = lean::box_uint32(x_2);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ch___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_11, 0, x_0);
lean::closure_set(x_11, 1, x_1);
lean::closure_set(x_11, 2, x_10);
lean::closure_set(x_11, 3, x_5);
x_12 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_9, x_11);
return x_12;
}
}
obj* l_lean_parser_monad__parsec_ch(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ch___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ch___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_ch___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint32 x_5; obj* x_6; 
x_5 = lean::unbox_uint32(x_2);
x_6 = l_lean_parser_monad__parsec_ch___rarg___lambda__1(x_0, x_1, x_5, x_3, x_4);
lean::dec(x_0);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_ch___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; 
x_3 = lean::unbox_uint32(x_2);
x_4 = l_lean_parser_monad__parsec_ch___rarg(x_0, x_1, x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_ch___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_ch(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_alpha___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_char_is__alpha(x_11);
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_alpha___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_alpha___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_4);
x_10 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_alpha(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_alpha___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_alpha___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_alpha___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_alpha___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_alpha___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_alpha(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_digit___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_char_is__digit(x_11);
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_digit___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_digit___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_4);
x_10 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_digit(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_digit___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_digit___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_digit___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_digit___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_digit___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_digit(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_upper___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_char_is__upper(x_11);
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_upper___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_upper___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_4);
x_10 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_upper(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_upper___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_upper___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_upper___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_upper___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_upper___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_upper(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_lower___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_char_is__lower(x_11);
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_lower___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_lower___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_4);
x_10 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_lower(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_lower___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_lower___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_lower___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_lower___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_lower___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_lower(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_any___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_true_decidable;
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_any___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_any___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
lean::closure_set(x_9, 2, x_4);
x_10 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_any(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_any___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_any___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_any___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_any___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_any___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_any(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_1__str__aux___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_9 = lean::box(0);
return x_9;
}
else
{
uint32 x_10; uint32 x_11; uint8 x_12; 
x_10 = lean::string_iterator_curr(x_1);
x_11 = lean::string_iterator_curr(x_2);
x_12 = x_10 == x_11;
if (x_12 == 0)
{
obj* x_16; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_16 = lean::box(0);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_21; 
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_sub(x_0, x_17);
lean::dec(x_0);
x_20 = lean::string_iterator_next(x_1);
x_21 = lean::string_iterator_next(x_2);
x_0 = x_18;
x_1 = x_20;
x_2 = x_21;
goto _start;
}
}
}
else
{
obj* x_25; 
lean::dec(x_1);
lean::dec(x_0);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_2);
return x_25;
}
}
}
obj* l___private_init_lean_parser_parsec_1__str__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_parser_parsec_1__str__aux___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_str__core___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::string_length(x_0);
lean::inc(x_0);
x_5 = lean::string_mk_iterator(x_0);
lean::inc(x_2);
x_7 = l___private_init_lean_parser_parsec_1__str__aux___main(x_3, x_5, x_2);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; 
lean::dec(x_0);
x_9 = lean::box(0);
x_10 = l_string_join___closed__1;
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_2);
lean::cnstr_set(x_11, 1, x_10);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_9);
x_12 = 0;
x_13 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*1, x_12);
x_14 = x_13;
return x_14;
}
else
{
obj* x_17; obj* x_20; obj* x_21; 
lean::dec(x_1);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_7, 0);
lean::inc(x_17);
lean::dec(x_7);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_0);
lean::cnstr_set(x_21, 1, x_17);
lean::cnstr_set(x_21, 2, x_20);
return x_21;
}
}
}
obj* l_lean_parser_monad__parsec_str__core___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_string_is__empty(x_2);
if (x_4 == 0)
{
obj* x_6; obj* x_9; obj* x_10; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_str__core___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_2);
lean::closure_set(x_9, 1, x_3);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_21; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_string_join___closed__1;
x_21 = lean::apply_2(x_17, lean::box(0), x_20);
return x_21;
}
}
}
obj* l_lean_parser_monad__parsec_str__core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_str__core___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str__core___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_str__core(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = l_string_is__empty(x_2);
if (x_4 == 0)
{
obj* x_6; obj* x_9; obj* x_10; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_str__core___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_2);
lean::closure_set(x_9, 1, x_3);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_21; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_string_join___closed__1;
x_21 = lean::apply_2(x_17, lean::box(0), x_20);
return x_21;
}
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_str(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_str___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_str__core___at_lean_parser_monad__parsec_str___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_str(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_8; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg(x_2);
return x_8;
}
else
{
obj* x_9; obj* x_10; uint32 x_12; obj* x_13; obj* x_14; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_0, x_9);
lean::dec(x_0);
x_12 = lean::string_iterator_curr(x_2);
x_13 = lean::string_push(x_1, x_12);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_10;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_0);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_18, 0, x_1);
lean::cnstr_set(x_18, 1, x_2);
lean::cnstr_set(x_18, 2, x_17);
return x_18;
}
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_2__take__aux___main___rarg), 3, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_2__take__aux___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_parser_parsec_2__take__aux___main___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_2__take__aux___rarg), 3, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_2__take__aux___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_2__take__aux(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = l_string_join___closed__1;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_2__take__aux___rarg), 3, 2);
lean::closure_set(x_10, 0, x_2);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::apply_2(x_6, lean::box(0), x_10);
return x_11;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_21; 
lean::dec(x_1);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_string_join___closed__1;
x_21 = lean::apply_2(x_17, lean::box(0), x_20);
return x_21;
}
}
}
obj* l_lean_parser_monad__parsec_take(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_take___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_3__mk__string__result___rarg(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_string_is__empty(x_0);
if (x_2 == 0)
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_6 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_1);
lean::cnstr_set(x_6, 2, x_5);
return x_6;
}
}
}
obj* l___private_init_lean_parser_parsec_3__mk__string__result(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_3__mk__string__result___rarg), 2, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_3__mk__string__result___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_3__mk__string__result(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_3);
if (x_6 == 0)
{
obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
x_9 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_9;
}
else
{
uint32 x_10; obj* x_11; obj* x_13; uint8 x_14; 
x_10 = lean::string_iterator_curr(x_3);
x_11 = lean::box_uint32(x_10);
lean::inc(x_0);
x_13 = lean::apply_1(x_0, x_11);
x_14 = lean::unbox(x_13);
if (x_14 == 0)
{
obj* x_17; 
lean::dec(x_1);
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_21; obj* x_22; 
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_sub(x_1, x_18);
lean::dec(x_1);
x_21 = lean::string_push(x_2, x_10);
x_22 = lean::string_iterator_next(x_3);
x_1 = x_19;
x_2 = x_21;
x_3 = x_22;
goto _start;
}
}
}
else
{
obj* x_26; 
lean::dec(x_1);
lean::dec(x_0);
x_26 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_26;
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg), 4, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_4__take__while__aux___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_4__take__while__aux___rarg), 4, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_4__take__while__aux(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::string_iterator_remaining(x_1);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg(x_0, x_2, x_3, x_1);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___rarg___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::apply_2(x_2, lean::box(0), x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___rarg), 2, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::string_iterator_remaining(x_2);
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___rarg(x_0, x_3, x_1, x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___rarg___lambda__1), 3, 2);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
x_7 = lean::apply_2(x_3, lean::box(0), x_6);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___rarg), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while__cont(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_4);
if (x_5 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_11 = lean::box(0);
x_12 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg(x_1, lean::box(0), x_10, x_11, x_9, x_9);
return x_12;
}
else
{
uint32 x_13; obj* x_14; obj* x_16; uint8 x_17; 
x_13 = lean::string_iterator_curr(x_4);
x_14 = lean::box_uint32(x_13);
lean::inc(x_14);
x_16 = lean::apply_1(x_2, x_14);
x_17 = lean::unbox(x_16);
if (x_17 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_21 = l_char_quote__core(x_13);
x_22 = l_char_has__repr___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_25 = lean::string_append(x_23, x_22);
x_26 = lean::box(0);
x_27 = lean::box(0);
x_28 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg(x_1, lean::box(0), x_25, x_27, x_26, x_26);
return x_28;
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_1);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_30, 0, x_4);
lean::closure_set(x_30, 1, x_14);
x_31 = lean::apply_2(x_3, lean::box(0), x_30);
return x_31;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__2(obj* x_0, obj* x_1, uint32 x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_string_join___closed__1;
x_4 = lean::string_push(x_3, x_2);
x_5 = l_lean_parser_monad__parsec_take__while__cont___rarg(x_0, x_1, x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_5);
x_9 = lean::apply_2(x_5, lean::box(0), x_7);
lean::inc(x_2);
lean::inc(x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_5);
lean::inc(x_3);
x_14 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_9, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___rarg___lambda__2___boxed), 3, 2);
lean::closure_set(x_15, 0, x_1);
lean::closure_set(x_15, 1, x_2);
x_16 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_14, x_15);
return x_16;
}
}
obj* l_lean_parser_monad__parsec_take__while1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_take__while1___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while1___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; 
x_3 = lean::unbox_uint32(x_2);
x_4 = l_lean_parser_monad__parsec_take__while1___rarg___lambda__2(x_0, x_1, x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__while1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_3);
if (x_6 == 0)
{
obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
x_9 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_9;
}
else
{
uint32 x_10; obj* x_11; obj* x_13; uint8 x_14; 
x_10 = lean::string_iterator_curr(x_3);
x_11 = lean::box_uint32(x_10);
lean::inc(x_0);
x_13 = lean::apply_1(x_0, x_11);
x_14 = lean::unbox(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_15 = lean::mk_nat_obj(1u);
x_16 = lean::nat_sub(x_1, x_15);
lean::dec(x_1);
x_18 = lean::string_push(x_2, x_10);
x_19 = lean::string_iterator_next(x_3);
x_1 = x_16;
x_2 = x_18;
x_3 = x_19;
goto _start;
}
else
{
obj* x_23; 
lean::dec(x_1);
lean::dec(x_0);
x_23 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_23;
}
}
}
else
{
obj* x_26; 
lean::dec(x_1);
lean::dec(x_0);
x_26 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_26;
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___rarg), 4, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::string_iterator_remaining(x_1);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___rarg(x_0, x_2, x_3, x_1);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::apply_2(x_2, lean::box(0), x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg), 2, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__until___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___rarg(x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__until(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__until___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while___at_lean_parser_monad__parsec_take__until___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__until___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__until___rarg(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__until___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__until(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_3);
if (x_6 == 0)
{
obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
x_9 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_9;
}
else
{
uint32 x_10; obj* x_11; obj* x_13; uint8 x_14; 
x_10 = lean::string_iterator_curr(x_3);
x_11 = lean::box_uint32(x_10);
lean::inc(x_0);
x_13 = lean::apply_1(x_0, x_11);
x_14 = lean::unbox(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_18; obj* x_19; 
x_15 = lean::mk_nat_obj(1u);
x_16 = lean::nat_sub(x_1, x_15);
lean::dec(x_1);
x_18 = lean::string_push(x_2, x_10);
x_19 = lean::string_iterator_next(x_3);
x_1 = x_16;
x_2 = x_18;
x_3 = x_19;
goto _start;
}
else
{
obj* x_23; 
lean::dec(x_1);
lean::dec(x_0);
x_23 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_23;
}
}
}
else
{
obj* x_26; 
lean::dec(x_1);
lean::dec(x_0);
x_26 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_2, x_3);
return x_26;
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___rarg), 4, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::string_iterator_remaining(x_2);
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___rarg(x_0, x_3, x_1, x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg(obj* x_0, obj* x_1, uint32 x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_8; obj* x_9; 
x_3 = l_string_join___closed__1;
x_4 = lean::string_push(x_3, x_2);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___lambda__1), 3, 2);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_4);
x_9 = lean::apply_2(x_5, lean::box(0), x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_4);
if (x_5 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_11 = lean::box(0);
x_12 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg(x_1, lean::box(0), x_10, x_11, x_9, x_9);
return x_12;
}
else
{
uint32 x_13; obj* x_14; obj* x_16; uint8 x_17; 
x_13 = lean::string_iterator_curr(x_4);
x_14 = lean::box_uint32(x_13);
lean::inc(x_14);
x_16 = lean::apply_1(x_2, x_14);
x_17 = lean::unbox(x_16);
if (x_17 == 0)
{
obj* x_19; obj* x_20; 
lean::dec(x_1);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_19, 0, x_4);
lean::closure_set(x_19, 1, x_14);
x_20 = lean::apply_2(x_3, lean::box(0), x_19);
return x_20;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_24 = l_char_quote__core(x_13);
x_25 = l_char_has__repr___closed__1;
x_26 = lean::string_append(x_25, x_24);
lean::dec(x_24);
x_28 = lean::string_append(x_26, x_25);
x_29 = lean::box(0);
x_30 = lean::box(0);
x_31 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg(x_1, lean::box(0), x_28, x_30, x_29, x_29);
return x_31;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_5);
x_9 = lean::apply_2(x_5, lean::box(0), x_7);
lean::inc(x_2);
lean::inc(x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_5);
lean::inc(x_3);
x_14 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_9, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___boxed), 3, 2);
lean::closure_set(x_15, 0, x_1);
lean::closure_set(x_15, 1, x_2);
x_16 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_14, x_15);
return x_16;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_take__until1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__until1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__until1___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__until1___spec__3(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_take__until1___spec__5(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; 
x_3 = lean::unbox_uint32(x_2);
x_4 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___rarg(x_0, x_1, x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_take__until1___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_take__until1___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_take__until1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__until1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(uint8 x_0, obj* x_1) {
_start:
{
if (x_0 == 0)
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::box(0);
x_3 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_3);
return x_4;
}
else
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::box(0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_1);
lean::cnstr_set(x_7, 2, x_5);
return x_7;
}
}
}
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_0);
x_3 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_2, x_1);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_5__mk__consumed__result(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg(obj* x_0, obj* x_1, uint8 x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_3);
if (x_6 == 0)
{
obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
x_9 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_2, x_3);
return x_9;
}
else
{
uint32 x_10; obj* x_11; obj* x_13; uint8 x_14; 
x_10 = lean::string_iterator_curr(x_3);
x_11 = lean::box_uint32(x_10);
lean::inc(x_0);
x_13 = lean::apply_1(x_0, x_11);
x_14 = lean::unbox(x_13);
if (x_14 == 0)
{
obj* x_17; 
lean::dec(x_1);
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_2, x_3);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_21; uint8 x_22; 
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_sub(x_1, x_18);
lean::dec(x_1);
x_21 = lean::string_iterator_next(x_3);
x_22 = 1;
x_1 = x_19;
x_2 = x_22;
x_3 = x_21;
goto _start;
}
}
}
else
{
obj* x_26; 
lean::dec(x_1);
lean::dec(x_0);
x_26 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_2, x_3);
return x_26;
}
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_2);
x_5 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg(x_0, x_1, x_4, x_3);
return x_5;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg(obj* x_0, obj* x_1, uint8 x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_2);
x_5 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___rarg(x_0, x_1, x_4, x_3);
return x_5;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; obj* x_4; 
x_2 = lean::string_iterator_remaining(x_1);
x_3 = 0;
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___rarg(x_0, x_2, x_3, x_1);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___rarg___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::apply_2(x_2, lean::box(0), x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___rarg), 2, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while_x_27(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_4);
if (x_5 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_11 = lean::box(0);
x_12 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg(x_1, lean::box(0), x_10, x_11, x_9, x_9);
return x_12;
}
else
{
uint32 x_13; obj* x_14; obj* x_16; uint8 x_17; 
x_13 = lean::string_iterator_curr(x_4);
x_14 = lean::box_uint32(x_13);
lean::inc(x_14);
x_16 = lean::apply_1(x_2, x_14);
x_17 = lean::unbox(x_16);
if (x_17 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_21 = l_char_quote__core(x_13);
x_22 = l_char_has__repr___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_25 = lean::string_append(x_23, x_22);
x_26 = lean::box(0);
x_27 = lean::box(0);
x_28 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg(x_1, lean::box(0), x_25, x_27, x_26, x_26);
return x_28;
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_1);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_30, 0, x_4);
lean::closure_set(x_30, 1, x_14);
x_31 = lean::apply_2(x_3, lean::box(0), x_30);
return x_31;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 4);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_10);
x_14 = lean::apply_2(x_10, lean::box(0), x_12);
lean::inc(x_2);
lean::inc(x_1);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_17, 0, x_0);
lean::closure_set(x_17, 1, x_1);
lean::closure_set(x_17, 2, x_2);
lean::closure_set(x_17, 3, x_10);
x_18 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_14, x_17);
x_19 = l_lean_parser_monad__parsec_take__while_x_27___rarg(x_1, x_2);
x_20 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_18, x_19);
return x_20;
}
}
obj* l_lean_parser_monad__parsec_take__while1_x_27(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1_x_27___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_take__while1_x_27___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_take__while1_x_27___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while1_x_27___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__while1_x_27(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__whitespace(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; uint8 x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_iterator_next(x_2);
x_16 = 1;
x_0 = x_13;
x_1 = x_16;
x_2 = x_15;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg___boxed), 3, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; uint8 x_2; obj* x_3; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = 0;
x_3 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg(x_1, x_2, x_0);
return x_3;
}
}
obj* _init_l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_4; obj* x_5; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1;
x_5 = lean::apply_2(x_1, lean::box(0), x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg), 1, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_whitespace___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_whitespace(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_whitespace___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___rarg(x_0, x_3, x_2);
return x_4;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at_lean_parser_monad__parsec_whitespace___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_whitespace___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_whitespace___rarg(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_whitespace___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_whitespace(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_lexeme___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
x_9 = l_lean_parser_monad__parsec_whitespace___rarg(x_0, x_1);
lean::dec(x_0);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_3, x_9);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_lexeme(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_lexeme___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_lexeme___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_lexeme___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_lexeme___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_lexeme(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__digit(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___rarg), 3, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::string_iterator_remaining(x_1);
x_3 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___rarg(x_2, x_0, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg(obj* x_0, uint32 x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_7; obj* x_8; 
x_2 = l_string_join___closed__1;
x_3 = lean::string_push(x_2, x_1);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___lambda__1), 2, 1);
lean::closure_set(x_7, 0, x_3);
x_8 = lean::apply_2(x_4, lean::box(0), x_7);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_3);
if (x_4 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_10;
}
else
{
uint32 x_11; uint8 x_12; 
x_11 = lean::string_iterator_curr(x_3);
x_12 = l_char_is__digit(x_11);
if (x_12 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_char_quote__core(x_11);
x_16 = l_char_has__repr___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_19 = lean::string_append(x_17, x_16);
x_20 = lean::box(0);
x_21 = lean::box(0);
x_22 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg(x_1, lean::box(0), x_19, x_21, x_20, x_20);
return x_22;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_24 = lean::box_uint32(x_11);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_satisfy___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_25, 0, x_3);
lean::closure_set(x_25, 1, x_24);
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_4);
x_8 = lean::apply_2(x_4, lean::box(0), x_6);
lean::inc(x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_1);
lean::closure_set(x_10, 2, x_4);
lean::inc(x_2);
x_12 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_8, x_10);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___boxed), 2, 1);
lean::closure_set(x_13, 0, x_1);
x_14 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_12, x_13);
return x_14;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_num___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_string_to__nat), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_num___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg(x_0, x_1);
x_11 = l_lean_parser_monad__parsec_num___rarg___closed__1;
x_12 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_11, x_10);
return x_12;
}
}
obj* l_lean_parser_monad__parsec_num(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_num___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__2(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_num___spec__3(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_monad__parsec_num___spec__5(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_1);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___rarg(x_0, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_monad__parsec_num___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_monad__parsec_num___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_num___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_num(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_ensure___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::string_iterator_remaining(x_3);
x_5 = lean::nat_dec_le(x_0, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_8 = lean::box(0);
x_9 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_10 = lean::box(0);
x_11 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg(x_2, lean::box(0), x_9, x_10, x_8, x_8);
return x_11;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_20; 
lean::dec(x_2);
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
x_19 = lean::box(0);
x_20 = lean::apply_2(x_16, lean::box(0), x_19);
return x_20;
}
}
}
obj* l_lean_parser_monad__parsec_ensure___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_8 = lean::apply_2(x_5, lean::box(0), x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ensure___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_9, 0, x_2);
lean::closure_set(x_9, 1, x_0);
lean::closure_set(x_9, 2, x_1);
x_10 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_ensure(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ensure___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_ensure___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_ensure___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_ensure___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_ensure___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_ensure(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_pos___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_string_iterator_offset___boxed), 1, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_pos___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_15 = lean::apply_2(x_11, lean::box(0), x_14);
x_16 = l_lean_parser_monad__parsec_pos___rarg___closed__1;
x_17 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_16, x_15);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_pos(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_pos___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_pos___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_pos(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; obj* x_4; 
x_2 = 1;
x_3 = lean::box(x_2);
x_4 = lean::apply_2(x_0, lean::box(0), x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, uint8 x_5) {
_start:
{
if (x_5 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_0);
x_8 = lean::box(0);
x_9 = lean::box(0);
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg(x_2, lean::box(0), x_3, x_9, x_7, x_8);
return x_10;
}
else
{
obj* x_14; obj* x_15; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::box(0);
x_15 = lean::apply_2(x_4, lean::box(0), x_14);
return x_15;
}
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_10; obj* x_12; obj* x_14; uint8 x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_10, 1);
lean::inc(x_14);
lean::dec(x_10);
x_17 = 0;
x_18 = lean::box(x_17);
lean::inc(x_14);
x_20 = lean::apply_2(x_14, lean::box(0), x_18);
x_21 = lean::apply_4(x_12, lean::box(0), lean::box(0), x_2, x_20);
lean::inc(x_14);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_23, 0, x_14);
x_24 = lean::apply_3(x_7, lean::box(0), x_21, x_23);
x_25 = lean::cnstr_get(x_3, 1);
lean::inc(x_25);
x_27 = l_lean_parser_monad__parsec_lookahead___rarg___closed__1;
x_28 = lean::apply_3(x_25, lean::box(0), x_27, x_24);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2___boxed), 6, 5);
lean::closure_set(x_29, 0, x_6);
lean::closure_set(x_29, 1, x_1);
lean::closure_set(x_29, 2, x_3);
lean::closure_set(x_29, 3, x_4);
lean::closure_set(x_29, 4, x_14);
x_30 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_28, x_29);
return x_30;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_11 = lean::apply_2(x_8, lean::box(0), x_10);
lean::inc(x_6);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__3), 7, 6);
lean::closure_set(x_13, 0, x_3);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_4);
lean::closure_set(x_13, 3, x_1);
lean::closure_set(x_13, 4, x_5);
lean::closure_set(x_13, 5, x_6);
x_14 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_11, x_13);
return x_14;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_not__followed__by___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_not__followed__by___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_5);
x_7 = l_lean_parser_monad__parsec_not__followed__by___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_6);
lean::dec(x_1);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_not__followed__by___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_not__followed__by___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_not__followed__by(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_eoi___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::string_iterator_remaining(x_2);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_3, x_4);
lean::dec(x_3);
if (x_5 == 0)
{
uint32 x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_0);
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_quote__core(x_8);
x_10 = l_char_has__repr___closed__1;
x_11 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_13 = lean::string_append(x_11, x_10);
x_14 = lean::box(0);
x_15 = lean::box(0);
x_16 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg(x_1, lean::box(0), x_13, x_15, x_14, x_14);
return x_16;
}
else
{
obj* x_18; obj* x_21; obj* x_24; obj* x_25; 
lean::dec(x_1);
x_18 = lean::cnstr_get(x_0, 0);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
x_24 = lean::box(0);
x_25 = lean::apply_2(x_21, lean::box(0), x_24);
return x_25;
}
}
}
obj* l_lean_parser_monad__parsec_eoi___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_7 = lean::apply_2(x_4, lean::box(0), x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_eoi___rarg___lambda__1___boxed), 3, 2);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_1);
x_9 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_eoi(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_eoi___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_eoi___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_eoi___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_eoi___rarg___lambda__1(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_eoi___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_eoi(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::apply_2(x_1, lean::box(0), x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::inc(x_0);
x_9 = l_lean_parser_monad__parsec_many1__aux___main___rarg(x_1, lean::box(0), x_0, x_2, x_3);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::box(0);
lean::inc(x_13);
x_18 = lean::apply_2(x_13, lean::box(0), x_16);
x_19 = lean::apply_3(x_6, lean::box(0), x_9, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_20, 0, x_5);
lean::closure_set(x_20, 1, x_13);
x_21 = lean::apply_4(x_4, lean::box(0), lean::box(0), x_19, x_20);
return x_21;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::apply_2(x_5, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_13; obj* x_14; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
lean::inc(x_9);
lean::inc(x_3);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2___boxed), 6, 5);
lean::closure_set(x_13, 0, x_2);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_3);
lean::closure_set(x_13, 3, x_8);
lean::closure_set(x_13, 4, x_9);
x_14 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_3, x_13);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_19; 
x_15 = lean::cnstr_get(x_0, 1);
lean::inc(x_15);
lean::dec(x_0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__3), 2, 1);
lean::closure_set(x_18, 0, x_2);
x_19 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_3, x_18);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___main___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_many1__aux___main___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many1__aux___main___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_monad__parsec_many1__aux___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_many1__aux___main___rarg(x_0, lean::box(0), x_3, x_4, x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_many1__aux(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_many1__aux___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many1__aux(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
lean::dec(x_7);
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_1, 0);
lean::inc(x_15);
lean::dec(x_1);
x_18 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_19 = lean::apply_2(x_15, lean::box(0), x_18);
x_20 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
x_21 = lean::apply_4(x_12, lean::box(0), lean::box(0), x_20, x_19);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux___main___rarg___boxed), 5, 4);
lean::closure_set(x_22, 0, x_0);
lean::closure_set(x_22, 1, lean::box(0));
lean::closure_set(x_22, 2, x_3);
lean::closure_set(x_22, 3, x_4);
x_23 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_21, x_22);
return x_23;
}
}
obj* l_lean_parser_monad__parsec_many1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many1___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_many1___rarg(x_0, x_1, lean::box(0), x_3, x_4);
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::box(0);
x_16 = lean::apply_2(x_12, lean::box(0), x_15);
x_17 = lean::apply_3(x_5, lean::box(0), x_8, x_16);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_many(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_5 = lean::mk_nat_obj(1u);
x_6 = lean::nat_sub(x_2, x_5);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 4);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
lean::inc(x_1);
x_14 = l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg(x_0, x_1, x_6);
lean::dec(x_6);
x_16 = lean::cnstr_get(x_7, 1);
lean::inc(x_16);
lean::dec(x_7);
x_19 = lean::box(0);
x_20 = lean::apply_2(x_16, lean::box(0), x_19);
x_21 = lean::apply_3(x_11, lean::box(0), x_14, x_20);
x_22 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_1, x_21);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_31; obj* x_32; obj* x_33; 
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::cnstr_get(x_23, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
x_31 = lean::box(0);
x_32 = lean::apply_2(x_28, lean::box(0), x_31);
x_33 = lean::apply_4(x_26, lean::box(0), lean::box(0), x_1, x_32);
return x_33;
}
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many1__aux_x_27___main(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux_x_27___rarg___boxed), 3, 0);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_many1__aux_x_27___rarg(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many1__aux_x_27(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1_x_27___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_10; obj* x_13; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 0);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::cnstr_get(x_1, 0);
lean::inc(x_16);
lean::dec(x_1);
x_19 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_20 = lean::apply_2(x_16, lean::box(0), x_19);
x_21 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
x_22 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_21, x_20);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg___boxed), 3, 2);
lean::closure_set(x_23, 0, x_3);
lean::closure_set(x_23, 1, x_4);
x_24 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_22, x_23);
return x_24;
}
}
obj* l_lean_parser_monad__parsec_many1_x_27(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1_x_27___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1_x_27___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many1_x_27___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1_x_27___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many1_x_27(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many_x_27___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_15; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_31; obj* x_34; obj* x_35; obj* x_36; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_1, 0);
lean::inc(x_18);
lean::dec(x_1);
x_21 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_22 = lean::apply_2(x_18, lean::box(0), x_21);
x_23 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
x_24 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_23, x_22);
lean::inc(x_3);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many1__aux_x_27___main___rarg___boxed), 3, 2);
lean::closure_set(x_26, 0, x_3);
lean::closure_set(x_26, 1, x_4);
x_27 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_24, x_26);
x_28 = lean::cnstr_get(x_3, 0);
lean::inc(x_28);
lean::dec(x_3);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::box(0);
x_35 = lean::apply_2(x_31, lean::box(0), x_34);
x_36 = lean::apply_3(x_5, lean::box(0), x_27, x_35);
return x_36;
}
}
obj* l_lean_parser_monad__parsec_many_x_27(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_many_x_27___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many_x_27___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_many_x_27___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many_x_27___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_many_x_27(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_sep__by1___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_sep__by1___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_sep__by1___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_lean_parser_monad__parsec_sep__by1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_24; 
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_7, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
lean::dec(x_11);
x_16 = l_lean_parser_monad__parsec_sep__by1___rarg___closed__1;
lean::inc(x_5);
x_18 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_16, x_5);
x_19 = lean::cnstr_get(x_7, 4);
lean::inc(x_19);
lean::dec(x_7);
x_22 = lean::apply_4(x_19, lean::box(0), lean::box(0), x_6, x_5);
x_23 = l_lean_parser_monad__parsec_many___rarg(x_0, x_1, lean::box(0), x_4, x_22);
x_24 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_18, x_23);
return x_24;
}
}
obj* l_lean_parser_monad__parsec_sep__by1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_sep__by1___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_sep__by1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_parser_monad__parsec_sep__by1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_2);
lean::dec(x_3);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_sep__by1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_sep__by1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_sep__by___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; obj* x_14; obj* x_17; obj* x_18; obj* x_19; 
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::inc(x_4);
x_10 = l_lean_parser_monad__parsec_sep__by1___rarg(x_0, x_1, lean::box(0), lean::box(0), x_4, x_5, x_6);
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::box(0);
x_18 = lean::apply_2(x_14, lean::box(0), x_17);
x_19 = lean::apply_3(x_7, lean::box(0), x_10, x_18);
return x_19;
}
}
obj* l_lean_parser_monad__parsec_sep__by(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_sep__by___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_sep__by___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_parser_monad__parsec_sep__by___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_2);
lean::dec(x_3);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_sep__by___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_sep__by(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* _init_l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("fix_aux: no progress");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
lean::inc(x_3);
x_10 = l_lean_parser_monad__parsec_fix__aux___main___rarg(x_0, x_1, lean::box(0), x_3, x_8);
lean::dec(x_8);
x_12 = lean::apply_1(x_3, x_10);
return x_12;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_3);
x_14 = lean::box(0);
x_15 = l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1;
x_16 = lean::box(0);
x_17 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg(x_1, lean::box(0), x_15, x_16, x_14, x_14);
return x_17;
}
}
}
obj* l_lean_parser_monad__parsec_fix__aux___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_fix__aux___main___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_fix__aux___main___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_fix__aux___main___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_fix__aux___main(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_fix__aux___main___rarg(x_0, x_1, lean::box(0), x_4, x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_fix__aux(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_fix__aux___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_fix__aux___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_fix__aux___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_fix__aux(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_fix___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::mk_nat_obj(1u);
x_5 = lean::nat_add(x_3, x_4);
x_6 = l_lean_parser_monad__parsec_fix__aux___main___rarg(x_0, x_1, lean::box(0), x_2, x_5);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_fix___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
lean::dec(x_7);
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_1, 0);
lean::inc(x_15);
x_17 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_18 = lean::apply_2(x_15, lean::box(0), x_17);
x_19 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
x_20 = lean::apply_4(x_12, lean::box(0), lean::box(0), x_19, x_18);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_fix___rarg___lambda__1___boxed), 4, 3);
lean::closure_set(x_21, 0, x_0);
lean::closure_set(x_21, 1, x_1);
lean::closure_set(x_21, 2, x_4);
x_22 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_20, x_21);
return x_22;
}
}
obj* l_lean_parser_monad__parsec_fix(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_fix___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_fix___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_fix___rarg___lambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_fix___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_fix___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
lean::dec(x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_fix___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_fix(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_22; obj* x_24; obj* x_26; obj* x_27; obj* x_30; obj* x_31; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
lean::dec(x_15);
lean::inc(x_2);
lean::inc(x_1);
x_22 = lean::apply_4(x_17, lean::box(0), lean::box(0), x_1, x_2);
lean::inc(x_3);
x_24 = l_lean_parser_monad__parsec_foldr__aux___main___rarg(x_0, x_1, x_2, x_3, x_8);
lean::dec(x_8);
x_26 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_22, x_24);
x_27 = lean::cnstr_get(x_11, 1);
lean::inc(x_27);
lean::dec(x_11);
x_30 = lean::apply_2(x_27, lean::box(0), x_3);
x_31 = lean::apply_3(x_9, lean::box(0), x_26, x_30);
return x_31;
}
else
{
obj* x_34; obj* x_37; obj* x_40; 
lean::dec(x_1);
lean::dec(x_2);
x_34 = lean::cnstr_get(x_0, 0);
lean::inc(x_34);
lean::dec(x_0);
x_37 = lean::cnstr_get(x_34, 1);
lean::inc(x_37);
lean::dec(x_34);
x_40 = lean::apply_2(x_37, lean::box(0), x_3);
return x_40;
}
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldr__aux___main___rarg___boxed), 5, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_foldr__aux___main___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___main___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_foldr__aux___main(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_foldr__aux___main___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldr__aux___rarg___boxed), 5, 0);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_foldr__aux___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_foldr__aux___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_foldr__aux(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_foldr___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::string_iterator_remaining(x_4);
x_6 = l_lean_parser_monad__parsec_foldr__aux___main___rarg(x_0, x_1, x_2, x_3, x_5);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_foldr___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
x_14 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_15 = lean::apply_2(x_11, lean::box(0), x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldr___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_16, 0, x_4);
lean::closure_set(x_16, 1, x_5);
lean::closure_set(x_16, 2, x_6);
lean::closure_set(x_16, 3, x_7);
x_17 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_15, x_16);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_foldr(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldr___rarg___boxed), 8, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldr___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_foldr___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_foldr___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_lean_parser_monad__parsec_foldr___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_2);
lean::dec(x_3);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldr___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_foldr(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_8; obj* x_9; 
lean::inc(x_0);
x_8 = lean::apply_2(x_0, x_1, x_6);
x_9 = l_lean_parser_monad__parsec_foldl__aux___main___rarg(x_2, lean::box(0), lean::box(0), x_3, x_0, x_4, x_8, x_5);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_19; obj* x_20; obj* x_21; obj* x_24; obj* x_27; obj* x_28; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_7, x_10);
x_12 = lean::cnstr_get(x_3, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::inc(x_5);
lean::inc(x_3);
lean::inc(x_6);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1___boxed), 7, 6);
lean::closure_set(x_19, 0, x_4);
lean::closure_set(x_19, 1, x_6);
lean::closure_set(x_19, 2, x_0);
lean::closure_set(x_19, 3, x_3);
lean::closure_set(x_19, 4, x_5);
lean::closure_set(x_19, 5, x_11);
x_20 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_5, x_19);
x_21 = lean::cnstr_get(x_3, 0);
lean::inc(x_21);
lean::dec(x_3);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = lean::apply_2(x_24, lean::box(0), x_6);
x_28 = lean::apply_3(x_12, lean::box(0), x_20, x_27);
return x_28;
}
else
{
obj* x_32; obj* x_35; obj* x_38; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_0);
x_32 = lean::cnstr_get(x_3, 0);
lean::inc(x_32);
lean::dec(x_3);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
x_38 = lean::apply_2(x_35, lean::box(0), x_6);
return x_38;
}
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl__aux___main___rarg___boxed), 8, 0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_parser_monad__parsec_foldl__aux___main___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_lean_parser_monad__parsec_foldl__aux___main___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_7);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_monad__parsec_foldl__aux___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_parser_monad__parsec_foldl__aux___main___rarg(x_0, lean::box(0), lean::box(0), x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl__aux___rarg___boxed), 9, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_lean_parser_monad__parsec_foldl__aux___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_foldl__aux(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldl___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::string_iterator_remaining(x_5);
x_7 = l_lean_parser_monad__parsec_foldl__aux___main___rarg(x_0, lean::box(0), lean::box(0), x_1, x_2, x_3, x_4, x_6);
lean::dec(x_6);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_foldl___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
lean::dec(x_1);
x_13 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_14 = lean::apply_2(x_10, lean::box(0), x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl___rarg___lambda__1___boxed), 6, 5);
lean::closure_set(x_15, 0, x_0);
lean::closure_set(x_15, 1, x_4);
lean::closure_set(x_15, 2, x_5);
lean::closure_set(x_15, 3, x_7);
lean::closure_set(x_15, 4, x_6);
x_16 = lean::apply_4(x_8, lean::box(0), lean::box(0), x_14, x_15);
return x_16;
}
}
obj* l_lean_parser_monad__parsec_foldl(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl___rarg___boxed), 8, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldl___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_foldl___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_foldl___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_lean_parser_monad__parsec_foldl___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_2);
lean::dec(x_3);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldl___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_foldl(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_unexpected___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::box(0);
x_5 = lean::box(0);
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg(x_1, lean::box(0), x_3, x_5, x_4, x_4);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_unexpected(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_unexpected___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_unexpected___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_parser_monad__parsec_unexpected___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_unexpected___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_unexpected(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_9, 0, x_4);
lean::closure_set(x_9, 1, x_2);
lean::closure_set(x_9, 2, x_3);
lean::closure_set(x_9, 3, x_5);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::box(0);
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg(x_1, lean::box(0), x_3, x_7, x_5, x_6);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_unexpected__at___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_unexpected__at___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_unexpected__at___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_unexpected__at(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; 
x_5 = l_option_get__or__else___main___rarg(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
lean::cnstr_set(x_6, 2, x_1);
lean::cnstr_set(x_6, 3, x_3);
x_7 = 0;
x_8 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set_scalar(x_8, sizeof(void*)*1, x_7);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
if (lean::obj_tag(x_2) == 0)
{
obj* x_12; 
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; uint8 x_21; 
x_14 = lean::cnstr_get(x_2, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 1);
lean::inc(x_16);
x_18 = lean::string_iterator_offset(x_3);
x_19 = lean::string_iterator_offset(x_16);
lean::dec(x_16);
x_21 = lean::nat_dec_lt(x_18, x_19);
if (x_21 == 0)
{
obj* x_22; uint8 x_23; 
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_22 = x_2;
} else {
 lean::dec(x_2);
 x_22 = lean::box(0);
}
x_23 = lean::nat_dec_lt(x_19, x_18);
lean::dec(x_18);
lean::dec(x_19);
if (x_23 == 0)
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_1);
lean::cnstr_set(x_26, 1, x_14);
if (lean::is_scalar(x_22)) {
 x_27 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_27 = x_22;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_3);
lean::cnstr_set(x_27, 2, x_12);
x_28 = lean::apply_2(x_7, lean::box(0), x_27);
return x_28;
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_1);
lean::cnstr_set(x_31, 1, x_30);
if (lean::is_scalar(x_22)) {
 x_32 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_32 = x_22;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_3);
lean::cnstr_set(x_32, 2, x_12);
x_33 = lean::apply_2(x_7, lean::box(0), x_32);
return x_33;
}
}
else
{
obj* x_39; 
lean::dec(x_14);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_18);
lean::dec(x_19);
x_39 = lean::apply_2(x_7, lean::box(0), x_2);
return x_39;
}
}
else
{
obj* x_42; 
lean::dec(x_12);
lean::dec(x_2);
x_42 = lean::box(0);
x_10 = x_42;
goto lbl_11;
}
}
else
{
obj* x_44; 
lean::dec(x_2);
x_44 = lean::box(0);
x_10 = x_44;
goto lbl_11;
}
lbl_11:
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_10);
x_46 = lean::box(0);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_1);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::box(0);
x_49 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_3);
lean::cnstr_set(x_49, 2, x_48);
x_50 = lean::apply_2(x_7, lean::box(0), x_49);
return x_50;
}
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__1), 4, 3);
lean::closure_set(x_5, 0, x_0);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_1);
x_6 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_3, x_5);
return x_6;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_8; obj* x_11; 
lean::dec(x_3);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::apply_2(x_8, lean::box(0), x_1);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; uint8 x_28; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_1, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_3, 0);
lean::inc(x_20);
x_22 = lean::string_iterator_offset(x_20);
lean::dec(x_20);
x_24 = lean::cnstr_get(x_18, 0);
lean::inc(x_24);
x_26 = lean::string_iterator_offset(x_24);
lean::dec(x_24);
x_28 = lean::nat_dec_lt(x_22, x_26);
if (x_28 == 0)
{
obj* x_29; uint8 x_30; 
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_29 = x_1;
} else {
 lean::dec(x_1);
 x_29 = lean::box(0);
}
x_30 = lean::nat_dec_lt(x_26, x_22);
lean::dec(x_26);
if (x_30 == 0)
{
obj* x_32; obj* x_34; uint8 x_35; 
x_32 = l_lean_parser_parsec__t_merge___rarg(x_3, x_18);
lean::dec(x_18);
x_34 = lean::string_iterator_offset(x_2);
x_35 = lean::nat_dec_lt(x_34, x_22);
lean::dec(x_22);
lean::dec(x_34);
if (x_35 == 0)
{
uint8 x_38; obj* x_39; obj* x_40; obj* x_41; 
x_38 = 0;
if (lean::is_scalar(x_29)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_29;
}
lean::cnstr_set(x_39, 0, x_32);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_38);
x_40 = x_39;
x_41 = lean::apply_2(x_15, lean::box(0), x_40);
return x_41;
}
else
{
uint8 x_42; obj* x_43; obj* x_44; obj* x_45; 
x_42 = 1;
if (lean::is_scalar(x_29)) {
 x_43 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_43 = x_29;
}
lean::cnstr_set(x_43, 0, x_32);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_42);
x_44 = x_43;
x_45 = lean::apply_2(x_15, lean::box(0), x_44);
return x_45;
}
}
else
{
uint8 x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_22);
lean::dec(x_18);
x_48 = 1;
if (lean::is_scalar(x_29)) {
 x_49 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_49 = x_29;
}
lean::cnstr_set(x_49, 0, x_3);
lean::cnstr_set_scalar(x_49, sizeof(void*)*1, x_48);
x_50 = x_49;
x_51 = lean::apply_2(x_15, lean::box(0), x_50);
return x_51;
}
}
else
{
obj* x_56; 
lean::dec(x_3);
lean::dec(x_22);
lean::dec(x_26);
lean::dec(x_18);
x_56 = lean::apply_2(x_15, lean::box(0), x_1);
return x_56;
}
}
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; obj* x_22; 
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
lean::dec(x_0);
lean::inc(x_2);
lean::inc(x_7);
lean::inc(x_1);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__2), 5, 4);
lean::closure_set(x_14, 0, x_1);
lean::closure_set(x_14, 1, x_7);
lean::closure_set(x_14, 2, x_2);
lean::closure_set(x_14, 3, x_3);
x_15 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_4, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3___boxed), 4, 3);
lean::closure_set(x_16, 0, x_1);
lean::closure_set(x_16, 1, x_7);
lean::closure_set(x_16, 2, x_5);
x_17 = lean::apply_3(x_8, lean::box(0), x_15, x_16);
x_18 = lean::cnstr_get(x_6, 1);
lean::inc(x_18);
lean::dec(x_6);
x_21 = l_lean_parser_monad__parsec_lookahead___rarg___closed__1;
x_22 = lean::apply_3(x_18, lean::box(0), x_21, x_17);
return x_22;
}
}
obj* _init_l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("longest_match: empty list");
return x_0;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_16; obj* x_19; 
lean::dec(x_1);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1;
x_10 = lean::box(0);
x_11 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg(x_9, x_10, x_8, x_8, x_4);
lean::dec(x_4);
x_13 = lean::cnstr_get(x_0, 0);
lean::inc(x_13);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
x_19 = lean::apply_2(x_16, lean::box(0), x_11);
return x_19;
}
else
{
obj* x_20; obj* x_22; obj* x_25; obj* x_27; obj* x_29; obj* x_30; obj* x_35; obj* x_37; obj* x_38; 
x_20 = lean::cnstr_get(x_5, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_5, 1);
lean::inc(x_22);
lean::dec(x_5);
x_25 = lean::cnstr_get(x_0, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_1, 0);
lean::inc(x_27);
x_29 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_30 = lean::apply_2(x_27, lean::box(0), x_29);
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_1);
lean::inc(x_0);
x_35 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg(x_0, x_1, lean::box(0), x_3, x_4, x_22);
lean::inc(x_25);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__4), 8, 7);
lean::closure_set(x_37, 0, x_3);
lean::closure_set(x_37, 1, x_0);
lean::closure_set(x_37, 2, x_25);
lean::closure_set(x_37, 3, x_30);
lean::closure_set(x_37, 4, x_20);
lean::closure_set(x_37, 5, x_4);
lean::closure_set(x_37, 6, x_1);
x_38 = lean::apply_4(x_25, lean::box(0), lean::box(0), x_35, x_37);
return x_38;
}
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_longest__match___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_monad___rarg___lambda__8___boxed), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::apply_2(x_0, lean::box(0), x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_longest__match___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg(x_0, x_1, lean::box(0), x_2, x_6, x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_longest__match___rarg___lambda__1), 2, 1);
lean::closure_set(x_8, 0, x_4);
x_9 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_longest__match___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_7);
x_11 = lean::apply_2(x_7, lean::box(0), x_9);
lean::inc(x_5);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_longest__match___rarg___lambda__2), 7, 6);
lean::closure_set(x_13, 0, x_0);
lean::closure_set(x_13, 1, x_1);
lean::closure_set(x_13, 2, x_3);
lean::closure_set(x_13, 3, x_4);
lean::closure_set(x_13, 4, x_7);
lean::closure_set(x_13, 5, x_5);
x_14 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_11, x_13);
return x_14;
}
}
obj* l_lean_parser_monad__parsec_longest__match(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_longest__match___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_error___at_lean_parser_monad__parsec_longest__match___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___lambda__3(x_0, x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_longest__match___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_longest__match___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_longest__match___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_longest__match(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_observing___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_1);
x_6 = lean::apply_2(x_2, lean::box(0), x_5);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_observing___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
lean::dec(x_11);
x_16 = l_except__t_lift___rarg___closed__1;
x_17 = lean::apply_4(x_13, lean::box(0), lean::box(0), x_16, x_4);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_observing___rarg___lambda__1), 2, 1);
lean::closure_set(x_18, 0, x_8);
x_19 = lean::apply_3(x_5, lean::box(0), x_17, x_18);
return x_19;
}
}
obj* l_lean_parser_monad__parsec_observing(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_observing___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_observing___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_observing___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_observing___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_observing(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_parse___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_run___rarg(x_0, lean::box(0), lean::box(0), x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_parser_parsec__t_parse(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_parse___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_parse___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_parsec__t_parse___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_parse(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_10; obj* x_13; obj* x_14; uint8 x_15; obj* x_16; obj* x_17; obj* x_18; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = l_option_get__or__else___main___rarg(x_4, x_6);
x_14 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_2);
lean::cnstr_set(x_14, 2, x_3);
lean::cnstr_set(x_14, 3, x_5);
x_15 = 0;
x_16 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set_scalar(x_16, sizeof(void*)*1, x_15);
x_17 = x_16;
x_18 = lean::apply_2(x_10, lean::box(0), x_17);
return x_18;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_9 = lean::cnstr_get(x_4, 2);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 lean::cnstr_set(x_4, 2, lean::box(0));
 x_11 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_18, 0, x_9);
x_19 = lean::string_iterator_remaining(x_5);
x_20 = lean::mk_nat_obj(0u);
x_21 = lean::nat_dec_eq(x_19, x_20);
lean::dec(x_19);
if (x_21 == 0)
{
uint32 x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_37; 
lean::dec(x_3);
lean::dec(x_11);
lean::dec(x_2);
x_26 = lean::string_iterator_curr(x_5);
lean::dec(x_5);
x_28 = l_char_quote__core(x_26);
x_29 = l_char_has__repr___closed__1;
x_30 = lean::string_append(x_29, x_28);
lean::dec(x_28);
x_32 = lean::string_append(x_30, x_29);
x_33 = lean::box(0);
x_34 = lean::box(0);
x_35 = l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg(x_1, lean::box(0), x_32, x_34, x_33, x_33, x_7);
lean::dec(x_7);
x_37 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_18, x_35);
return x_37;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_5);
lean::dec(x_1);
x_40 = lean::box(0);
if (lean::is_scalar(x_11)) {
 x_41 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_41 = x_11;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_7);
lean::cnstr_set(x_41, 2, x_2);
x_42 = lean::apply_2(x_3, lean::box(0), x_41);
x_43 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_18, x_42);
return x_43;
}
}
else
{
obj* x_47; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_47 = lean::cnstr_get(x_4, 0);
x_49 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 x_50 = x_4;
} else {
 lean::inc(x_47);
 lean::dec(x_4);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_53 = lean::apply_2(x_3, lean::box(0), x_52);
return x_53;
}
}
}
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
x_8 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_1);
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_1);
lean::cnstr_set(x_10, 2, x_8);
lean::inc(x_6);
x_12 = lean::apply_2(x_6, lean::box(0), x_10);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg___lambda__1), 5, 4);
lean::closure_set(x_13, 0, x_4);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_8);
lean::closure_set(x_13, 3, x_6);
x_14 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_12, x_13);
return x_14;
}
}
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::string_mk_iterator(x_4);
x_9 = lean::apply_1(x_3, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___rarg___lambda__1), 2, 1);
lean::closure_set(x_10, 0, x_0);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_9, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_22; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
lean::dec(x_12);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_17, 0, x_7);
x_18 = l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___rarg(x_0, x_5);
lean::inc(x_14);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_monad___rarg___lambda__9), 4, 3);
lean::closure_set(x_20, 0, x_10);
lean::closure_set(x_20, 1, x_3);
lean::closure_set(x_20, 2, x_14);
x_21 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_18, x_20);
x_22 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_17, x_21);
return x_22;
}
else
{
obj* x_24; uint8 x_26; obj* x_27; obj* x_28; obj* x_31; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_1);
x_24 = lean::cnstr_get(x_2, 0);
x_26 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_27 = x_2;
} else {
 lean::inc(x_24);
 lean::dec(x_2);
 x_27 = lean::box(0);
}
x_28 = lean::cnstr_get(x_0, 0);
lean::inc(x_28);
lean::dec(x_0);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
if (lean::is_scalar(x_27)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_27;
}
lean::cnstr_set(x_34, 0, x_24);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_26);
x_35 = x_34;
x_36 = lean::apply_2(x_31, lean::box(0), x_35);
return x_36;
}
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::apply_1(x_1, x_2);
lean::inc(x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__1), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_3);
x_8 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_5, x_7);
return x_8;
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::inc(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__eoi___rarg___lambda__2), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg(x_0, lean::box(0), lean::box(0), x_6, x_3, x_4);
return x_7;
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__eoi___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_1);
lean::dec(x_4);
lean::dec(x_6);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_error___at_lean_parser_parsec__t_parse__with__eoi___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_monad__parsec_eoi___at_lean_parser_parsec__t_parse__with__eoi___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__eoi___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_parse__with__eoi___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_parsec__t_parse__with__eoi___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_parse__with__eoi(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
x_8 = lean::string_mk_iterator(x_4);
x_9 = lean::apply_1(x_3, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___rarg___lambda__1), 2, 1);
lean::closure_set(x_10, 0, x_0);
x_11 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_9, x_10);
return x_11;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg___boxed), 6, 0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
lean::dec(x_12);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_17, 0, x_6);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_list_zip___rarg___lambda__1), 2, 1);
lean::closure_set(x_18, 0, x_2);
x_19 = lean::cnstr_get(x_9, 1);
lean::inc(x_19);
lean::dec(x_9);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_8)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_8;
}
lean::cnstr_set(x_23, 0, x_18);
lean::cnstr_set(x_23, 1, x_4);
lean::cnstr_set(x_23, 2, x_22);
x_24 = lean::apply_2(x_19, lean::box(0), x_23);
x_25 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_17, x_24);
return x_25;
}
else
{
obj* x_26; uint8 x_28; obj* x_29; obj* x_30; obj* x_33; obj* x_36; obj* x_37; obj* x_38; 
x_26 = lean::cnstr_get(x_1, 0);
x_28 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*1);
if (lean::is_exclusive(x_1)) {
 x_29 = x_1;
} else {
 lean::inc(x_26);
 lean::dec(x_1);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_0, 0);
lean::inc(x_30);
lean::dec(x_0);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
if (lean::is_scalar(x_29)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_29;
}
lean::cnstr_set(x_36, 0, x_26);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_28);
x_37 = x_36;
x_38 = lean::apply_2(x_33, lean::box(0), x_37);
return x_38;
}
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_9 = lean::cnstr_get(x_4, 2);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_12, 0, x_9);
x_13 = lean::apply_1(x_0, x_5);
if (lean::is_scalar(x_11)) {
 x_14 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_14 = x_11;
}
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_7);
lean::cnstr_set(x_14, 2, x_1);
x_15 = lean::apply_2(x_2, lean::box(0), x_14);
x_16 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_12, x_15);
return x_16;
}
else
{
obj* x_20; uint8 x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
x_20 = lean::cnstr_get(x_4, 0);
x_22 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 x_23 = x_4;
} else {
 lean::inc(x_20);
 lean::dec(x_4);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_20);
lean::cnstr_set_scalar(x_24, sizeof(void*)*1, x_22);
x_25 = x_24;
x_26 = lean::apply_2(x_2, lean::box(0), x_25);
return x_26;
}
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_13; obj* x_15; obj* x_18; obj* x_19; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_30; 
x_3 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_7 = lean::cnstr_get(x_2, 2);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_bind__mk__res___rarg), 2, 1);
lean::closure_set(x_18, 0, x_7);
x_19 = lean::cnstr_get(x_10, 1);
lean::inc(x_19);
lean::dec(x_10);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_5);
if (lean::is_scalar(x_9)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_9;
}
lean::cnstr_set(x_24, 0, x_5);
lean::cnstr_set(x_24, 1, x_5);
lean::cnstr_set(x_24, 2, x_22);
lean::inc(x_19);
x_26 = lean::apply_2(x_19, lean::box(0), x_24);
lean::inc(x_15);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__2), 5, 4);
lean::closure_set(x_28, 0, x_3);
lean::closure_set(x_28, 1, x_22);
lean::closure_set(x_28, 2, x_19);
lean::closure_set(x_28, 3, x_15);
x_29 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_26, x_28);
x_30 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_18, x_29);
return x_30;
}
else
{
obj* x_32; uint8 x_34; obj* x_35; obj* x_36; obj* x_39; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_1);
x_32 = lean::cnstr_get(x_2, 0);
x_34 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 x_35 = x_2;
} else {
 lean::inc(x_32);
 lean::dec(x_2);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
lean::dec(x_0);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
if (lean::is_scalar(x_35)) {
 x_42 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_42 = x_35;
}
lean::cnstr_set(x_42, 0, x_32);
lean::cnstr_set_scalar(x_42, sizeof(void*)*1, x_34);
x_43 = x_42;
x_44 = lean::apply_2(x_39, lean::box(0), x_43);
return x_44;
}
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::apply_1(x_1, x_2);
lean::inc(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__1), 2, 1);
lean::closure_set(x_7, 0, x_0);
lean::inc(x_3);
x_9 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_5, x_7);
lean::inc(x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__3), 3, 2);
lean::closure_set(x_11, 0, x_0);
lean::closure_set(x_11, 1, x_3);
x_12 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_9, x_11);
return x_12;
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::inc(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__left__over___rarg___lambda__4), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg(x_0, lean::box(0), lean::box(0), x_6, x_3, x_4);
return x_7;
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_parse__with__left__over___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_5);
return x_6;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_parsec__t_run___at_lean_parser_parsec__t_parse__with__left__over___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_parse__with__left__over___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_4);
return x_5;
}
}
obj* l_lean_parser_parsec__t_parse__with__left__over___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_parse__with__left__over(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::string_mk_iterator(x_1);
x_4 = lean::apply_1(x_0, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_12; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_12, 0, x_9);
return x_12;
}
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_lean_parser_parsec_parse___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_parsec_parse(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec_parse___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_parser_parsec_parse___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_parsec_parse___rarg(x_0, x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_lean_parser_parsec_parse___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_parsec_parse(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
void initialize_init_data_to__string();
void initialize_init_data_string_basic();
void initialize_init_data_list_basic();
void initialize_init_control_except();
void initialize_init_data_repr();
void initialize_init_lean_name();
void initialize_init_data_dlist();
void initialize_init_control_monad__fail();
void initialize_init_control_combinators();
static bool _G_initialized = false;
void initialize_init_lean_parser_parsec() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_to__string();
 initialize_init_data_string_basic();
 initialize_init_data_list_basic();
 initialize_init_control_except();
 initialize_init_data_repr();
 initialize_init_lean_name();
 initialize_init_data_dlist();
 initialize_init_control_monad__fail();
 initialize_init_control_combinators();
 l_lean_parser_parsec_position = _init_l_lean_parser_parsec_position();
lean::mark_persistent(l_lean_parser_parsec_position);
 l_lean_parser_parsec_expected_to__string___main___closed__1 = _init_l_lean_parser_parsec_expected_to__string___main___closed__1();
lean::mark_persistent(l_lean_parser_parsec_expected_to__string___main___closed__1);
 l_lean_parser_parsec_message_text___rarg___closed__1 = _init_l_lean_parser_parsec_message_text___rarg___closed__1();
lean::mark_persistent(l_lean_parser_parsec_message_text___rarg___closed__1);
 l_lean_parser_parsec_message_text___rarg___closed__2 = _init_l_lean_parser_parsec_message_text___rarg___closed__2();
lean::mark_persistent(l_lean_parser_parsec_message_text___rarg___closed__2);
 l_lean_parser_parsec_message_text___rarg___closed__3 = _init_l_lean_parser_parsec_message_text___rarg___closed__3();
lean::mark_persistent(l_lean_parser_parsec_message_text___rarg___closed__3);
 l_lean_parser_parsec_message_text___rarg___closed__4 = _init_l_lean_parser_parsec_message_text___rarg___closed__4();
lean::mark_persistent(l_lean_parser_parsec_message_text___rarg___closed__4);
 l_lean_parser_parsec_message_text___rarg___closed__5 = _init_l_lean_parser_parsec_message_text___rarg___closed__5();
lean::mark_persistent(l_lean_parser_parsec_message_text___rarg___closed__5);
 l_lean_parser_parsec_message_to__string___rarg___closed__1 = _init_l_lean_parser_parsec_message_to__string___rarg___closed__1();
lean::mark_persistent(l_lean_parser_parsec_message_to__string___rarg___closed__1);
 l_lean_parser_parsec_message_to__string___rarg___closed__2 = _init_l_lean_parser_parsec_message_to__string___rarg___closed__2();
lean::mark_persistent(l_lean_parser_parsec_message_to__string___rarg___closed__2);
 l_lean_parser_parsec_message_to__string___rarg___closed__3 = _init_l_lean_parser_parsec_message_to__string___rarg___closed__3();
lean::mark_persistent(l_lean_parser_parsec_message_to__string___rarg___closed__3);
 l_lean_parser_parsec_result_mk__eps___rarg___closed__1 = _init_l_lean_parser_parsec_result_mk__eps___rarg___closed__1();
lean::mark_persistent(l_lean_parser_parsec_result_mk__eps___rarg___closed__1);
 l_lean_parser_parsec__t = _init_l_lean_parser_parsec__t();
lean::mark_persistent(l_lean_parser_parsec__t);
 l_lean_parser_parsec = _init_l_lean_parser_parsec();
lean::mark_persistent(l_lean_parser_parsec);
 l_lean_parser_parsec_x_27 = _init_l_lean_parser_parsec_x_27();
lean::mark_persistent(l_lean_parser_parsec_x_27);
 l_lean_parser_parsec__t_failure___rarg___closed__1 = _init_l_lean_parser_parsec__t_failure___rarg___closed__1();
lean::mark_persistent(l_lean_parser_parsec__t_failure___rarg___closed__1);
 l_lean_parser_monad__parsec_x_27 = _init_l_lean_parser_monad__parsec_x_27();
lean::mark_persistent(l_lean_parser_monad__parsec_x_27);
 l_lean_parser_monad__parsec_left__over___rarg___closed__1 = _init_l_lean_parser_monad__parsec_left__over___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_left__over___rarg___closed__1);
 l_lean_parser_monad__parsec_remaining___rarg___closed__1 = _init_l_lean_parser_monad__parsec_remaining___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_remaining___rarg___closed__1);
 l_lean_parser_monad__parsec_label___rarg___closed__1 = _init_l_lean_parser_monad__parsec_label___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_label___rarg___closed__1);
 l_lean_parser_monad__parsec_try___rarg___closed__1 = _init_l_lean_parser_monad__parsec_try___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_try___rarg___closed__1);
 l_lean_parser_monad__parsec_lookahead___rarg___closed__1 = _init_l_lean_parser_monad__parsec_lookahead___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_lookahead___rarg___closed__1);
 l_lean_parser_monad__parsec_eoi__error___rarg___closed__1 = _init_l_lean_parser_monad__parsec_eoi__error___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_eoi__error___rarg___closed__1);
 l_lean_parser_monad__parsec_curr___rarg___closed__1 = _init_l_lean_parser_monad__parsec_curr___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_curr___rarg___closed__1);
 l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1 = _init_l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_take__while_x_27___at_lean_parser_monad__parsec_whitespace___spec__1___rarg___closed__1);
 l_lean_parser_monad__parsec_num___rarg___closed__1 = _init_l_lean_parser_monad__parsec_num___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_num___rarg___closed__1);
 l_lean_parser_monad__parsec_pos___rarg___closed__1 = _init_l_lean_parser_monad__parsec_pos___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_pos___rarg___closed__1);
 l_lean_parser_monad__parsec_sep__by1___rarg___closed__1 = _init_l_lean_parser_monad__parsec_sep__by1___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_sep__by1___rarg___closed__1);
 l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1 = _init_l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_fix__aux___main___rarg___closed__1);
 l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1 = _init_l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1();
lean::mark_persistent(l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1);
}
