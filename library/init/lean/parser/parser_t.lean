/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich

Implementation for the parsec parser combinators described in the
paper:
https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/parsec-paper-letter.pdf
-/
prelude
import init.data.to_string init.data.string.basic init.data.list.basic init.control.except
import init.data.repr init.lean.name init.data.dlist init.control.monad_fail init.control.combinators
namespace lean
namespace parser
@[reducible] def position : Type := nat

structure message :=
(pos        : position     := 0)
(unexpected : string       := "")          -- unexpected input
(expected   : dlist string := dlist.empty) -- expected productions

open string (iterator)

def expected.to_string : list string → string
| []       := ""
| [e]      := e
| [e1, e2] := e1 ++ " or " ++ e2
| (e::es)  := e ++ ", " ++ expected.to_string es

protected def message.to_string (input : string) (msg : message) : string :=
let (line, col) := input.line_column msg.pos in
"error at line " ++ to_string line ++ ", column " ++ to_string col ++ ":\n" ++
(if msg.unexpected = "" then "" else "unexpected " ++ msg.unexpected ++ "\n") ++
let ex_list := msg.expected.to_list in
if ex_list = [] then "" else "expected " ++ expected.to_string ex_list

def message.repr (msg : message) : string :=
"{pos := " ++ repr msg.pos ++ ", " ++
 "unexpected := " ++ repr msg.unexpected ++ ", " ++
 "expected := dlist.of_list " ++ repr msg.expected.to_list ++ "}"

instance message_has_repr : has_repr message :=
⟨message.repr⟩

/-
Remark: we store expected "error" messages in `ok_eps` results.
They contain the error that would have occurred if a
successful "epsilon" alternative was not taken.
-/
inductive result (α : Type)
| ok (a : α) (it : iterator)                               : result
| ok_eps (a : α) (it : iterator) (expected : dlist string) : result
| error {} (msg : message) (consumed : bool)               : result

@[inline] def result.mk_eps {α : Type} (a : α) (it : iterator) : result α :=
result.ok_eps a it dlist.empty

def parser_t (m : Type → Type) (α : Type) :=
iterator → m (result α)

abbreviation parser (α : Type) := parser_t id α

namespace parser_t
variables {m : Type → Type} [monad m] {α β : Type}
open result

def run (p : parser_t m α) (s : string) (fname := "") : m (except message α) :=
do r ← p s.mk_iterator,
   pure $ match r with
   | ok a _       := except.ok a
   | ok_eps a _ _ := except.ok a
   | error msg _  := except.error msg

protected def pure (a : α) : parser_t m α :=
λ it, pure $ mk_eps a it

def eps : parser_t m unit :=
parser_t.pure ()

protected def failure : parser_t m α :=
λ it, pure $ error { unexpected := "failure", pos := it.offset } ff

def merge (msg₁ msg₂ : message) : message :=
{ expected := msg₁.expected ++ msg₂.expected, ..msg₁ }

/--
  The `bind p q` combinator behaves as follows:
  1- If `p` fails, then it fails.
  2- If `p` succeeds and consumes input, then execute `q`
  3- If `q` succeeds but does not consume input, then execute `q`
     and merge error messages if both do not consume any input.
-/
protected def bind (p : parser_t m α) (q : α → parser_t m β) : parser_t m β :=
λ it, do r ← p it,
         match r with
         | ok a it :=
           do r ← q a it,
              pure (match r with
                | ok_eps b it msg₂ := ok b it
                | error msg ff     := error msg tt
                | other            := other)
         | ok_eps a it ex₁ :=
           do r ← q a it,
              pure (match r with
                | ok_eps b it ex₂ := ok_eps b it (ex₁ ++ ex₂)
                | error msg₂ ff   := error { expected := ex₁ ++ msg₂.expected, .. msg₂ } ff
                | other           := other)
         | error msg c := pure $ error msg c

instance : monad (parser_t m) :=
{ bind := λ _ _, parser_t.bind, pure := λ _, parser_t.pure }

instance : monad_fail (parser_t m) :=
{ fail := λ _ s it, pure $ error { unexpected := s, pos := it.offset } ff }

instance : has_monad_lift m (parser_t m) :=
{ monad_lift := λ _ x it, do a ← x,
                             pure (mk_eps a it) }

def expect (msg : message) (exp : string) : message :=
{expected := dlist.singleton exp, ..msg}

@[inline] def label (p : parser_t m α) (ex : string) : parser_t m α :=
λ it, do r ← p it,
         pure $ match r with
          | ok_eps a it _  := ok_eps a it (dlist.singleton ex)
          | error msg ff   := error (expect msg ex) ff
          | other          := other

/--
`try p` behaves like `p`, but it pretends `p` hasn't
consumed any input when `p` fails.

It is useful for implementing infinite lookahead.
The parser `try p <|> q` will try `q` even when
`p` has consumed input.

It is also useful for specifying both the lexer and parser
together.
```
    (do try (ch 'l' >> ch 'e' >> ch 't'), whitespace, ...)
    <|>
    ...
```
Without the `try` combinator we will not be able to backtrack on the `let` keyword.
-/
def try (p : parser_t m α) : parser_t m α :=
λ it, do r ← p it,
         pure $ match r with
           | error msg _  := error msg ff
           | other        := other

/--
  The `orelse p q` combinator behaves as follows:
  1- If `p` consumed input, then return result produced by `p`
     even if it produced an error.
     Recall that the `try p` combinator can be used to
     pretend that `p` did not consume any input, and
     simulate infinite lookahead.
  2- If `p` did not consume any input, and `q` consumed
     input, then return result produced by `q`.
     Note that, `q`'s result is returned even if
     `p` succeeded without consuming input.
  3- If `p` and `q` did not consume any input, then
     it combines their error messages (even if one of
     them succeeded).
-/
protected def orelse (p q : parser_t m α) : parser_t m α :=
λ it, do r ← p it,
      match r with
      | ok_eps a it' ex₁ :=
        do r' ← q it,
        pure (match r' with
          | ok_eps _ _ ex₂ := ok_eps a it' (ex₁ ++ ex₂)
          | error msg₂ ff  := ok_eps a it' (ex₁ ++ msg₂.expected)
          | other          := other)
      | error msg₁ ff :=
        do r' ← q it,
        pure (match r' with
         | ok_eps a it' ex₂ := ok_eps a it' (msg₁.expected ++ ex₂)
         | error msg₂ ff    := error (merge msg₁ msg₂) ff
         | other            := other)
      | other              := pure other

instance : alternative (parser_t m) :=
{ orelse  := λ _, parser_t.orelse,
  failure := λ _, parser_t.failure }

/-- Parse `p` without consuming any input. -/
def lookahead (p : parser_t m α) : parser_t m α :=
λ it, do r ← p it,
         pure $ match r with
           | ok a s' := mk_eps a it
           | other   := other

/-- `not_followed_by p` succeeds when parser `p` fails -/
def not_followed_by (p : parser_t m α) (msg : string := "input") : parser_t m unit :=
λ it, do r ← p it,
         pure $ match r with
           | ok _ _       := error { pos := it.offset, unexpected := msg } ff
           | ok_eps _ _ _ := error { pos := it.offset, unexpected := msg } ff
           | error _ _    := mk_eps () it

/-- Parse `p`, returning errors explicitly.
    If `p` does not fail, `observing p` behaves like `except.ok <$> p`. -/
def observing (p : parser_t m α) : parser_t m (except message α) :=
λ it, do r ← p it,
         pure $ match r with
           | ok a it'        := ok (except.ok a) it'
           | ok_eps a it' ex := ok_eps (except.ok a) it' ex
           | error msg _     := ok (except.error msg) it
end parser_t

/- Type class for abstracting from concrete monad stacks containing a `parser_t` somewhere. -/
class monad_parser (m : Type → Type) :=
-- analogous to e.g. `monad_state.lift`
(lift {} {α : Type} : parser α → m α)
-- Analogous to e.g. `monad_reader_adapter.map` before simplification (see there).
-- Its usage seems to be way too common to justify moving it into a separate type class.
(map {} {α : Type} : (∀ {n} [monad n] {α}, parser_t n α → parser_t n α) → m α → m α)
(map_except {} {α : Type} : (∀ {n} [monad n] {α}, parser_t n α → parser_t n (except message α)) → m α → m (except message α))
(map_unit {} {α : Type} : (∀ {n} [monad n] {α}, parser_t n α → parser_t n unit) → m α → m unit)

instance {m : Type → Type} [monad m] : monad_parser (parser_t m) :=
{ lift := λ α p it, pure $ p it,
  map  := λ α f x, f x,
  map_except := λ α f x, f x,
  map_unit := λ α f x, f x }

structure void_t (m : Type → Type) (α : Type) := mk {} ::
(run : m unit)

instance (m) [monad m] : monad (void_t m) :=
{ pure := λ α a, ⟨pure ()⟩,
  bind := λ α β x f, ⟨pure ()⟩ }

def reader_t.comm_void_t {ρ m α} [monad m] (x : reader_t ρ (void_t m) α) : void_t (reader_t ρ m) α :=
⟨⟨λ r, (x.run r).run⟩⟩

instance reader_t.has_comm_void_t (ρ) : comm_monad_t (reader_t ρ) void_t :=
⟨@reader_t.comm_void_t _⟩

def state_t.comm_void_t {σ m α} [monad m] (x : state_t σ (void_t m) α) : void_t (state_t σ m) α :=
⟨⟨λ st, do a ← (x.run st).run, pure (a, st)⟩⟩

instance state_t.has_comm_void_t (σ) : comm_monad_t (state_t σ) void_t :=
⟨@state_t.comm_void_t _⟩

instance monad_parser_trans {m n : Type → Type} [has_monad_lift m n] [monad_functor m m n n]
  [monad_functor m (except_t message m) n (except_t message n)]
  [monad_functor m (void_t m) n (void_t n)]
  [monad_parser m] : monad_parser n :=
{ lift := λ α p, monad_lift (monad_parser.lift p : m α),
  map  := λ α f x,
    monad_map (λ β x, (monad_parser.map @f x : m β)) x,
  map_except := λ α f x,
    except_t.run (monad_map (λ β x, (⟨monad_parser.map_except @f x⟩ : except_t message m β)) x),
  map_unit := λ α f x,
    void_t.run (@monad_map m (void_t m) n (void_t n) _ α (λ β x, void_t.mk (monad_parser.map_unit @f x)) x) }

namespace monad_parser
variables {m : Type → Type} [monad m] [monad_parser m] [alternative m] {α β : Type}

@[inline] def error {α : Type} (unexpected : string := "") (expected : dlist string := dlist.empty) : m α :=
lift $ λ it, result.error ⟨it.offset, unexpected, expected⟩ ff

@[inline] def left_over : m iterator :=
lift $ λ it, result.mk_eps it it

@[inline] def set_left_over (it : iterator) : m unit :=
lift $ λ _, result.mk_eps () it

@[inline] def label (p : m α) (ex : string) : m α :=
map (λ n inst α p, @parser_t.label _ inst _ p ex) p

infixr ` <?> `:2 := label

/--
`try p` behaves like `p`, but it pretends `p` hasn't
consumed any input when `p` fails.

It is useful for implementing infinite lookahead.
The parser `try p <|> q` will try `q` even when
`p` has consumed input.

It is also useful for specifying both the lexer and parser
together.
```
    (do try (ch 'l' >> ch 'e' >> ch 't'), whitespace, ...)
    <|>
    ...
```
Without the `try` combinator we will not be able to backtrack on the `let` keyword.
-/
@[inline] def try (p : m α) : m α :=
map @parser_t.try p

/-- Parse `p` without consuming any input. -/
@[inline] def lookahead (p : m α) : m α :=
map @parser_t.lookahead p

/-- Parse `p`, returning errors explicitly.
    If `p` does not fail, `observing p` behaves like `except.ok <$> p`. -/
def observing (p : m α) : m (except message α) :=
map_except @parser_t.observing p

/-- `not_followed_by p` succeeds when parser `p` fails -/
@[inline] def not_followed_by (p : m α) (msg : string := "input") : m unit :=
map_unit (λ _ inst _ p, @parser_t.not_followed_by _ inst _ p msg) p

/-- Faster version of `not_followed_by (satisfy p)` -/
@[inline] def not_followed_by_sat (p : char → bool) : m unit :=
do it ← left_over,
   if !it.has_next then pure ()
   else let c := it.curr in
       if p c then error (repr c)
       else pure ()

@[inline] def eoi_error (pos : position) : result α :=
result.error { pos := pos, unexpected := "end of input" } ff

def curr : m char :=
string.iterator.curr <$> left_over

@[inline] def cond (p : char → bool) (t : m α) (e : m α) : m α :=
mcond (p <$> curr) t e

/--
If the next character `c` satisfies `p`, then
update position and return `c`. Otherwise,
generate error message with current position and character. -/
@[inline] def satisfy (p : char → bool) : m char :=
lift $ λ it,
  if !it.has_next then eoi_error it.offset
  else let c := it.curr in
      if p c then result.ok c it.next
      else result.error { pos := it.offset, unexpected := repr c } ff

def ch (c : char) : m char :=
satisfy (= c)

def alpha : m char :=
satisfy char.is_alpha

def digit : m char :=
satisfy char.is_digit

def upper : m char :=
satisfy char.is_upper

def lower : m char :=
satisfy char.is_lower

def any : m char :=
satisfy (λ _, true)

private def str_aux : nat → iterator → iterator → option iterator
| 0     _    it := some it
| (n+1) s_it it :=
  if it.has_next ∧ s_it.curr = it.curr then str_aux n s_it.next it.next
  else none

/--
`str s` parses a sequence of elements that match `s`. Returns the parsed string (i.e. `s`).
This parser consumes no input if it fails (even if a partial match).
Note: The behaviour of this parser is different to that the `string` parser in the Parsec Haskell library,
as this one is all-or-nothing.
-/
def str (s : string) : m string :=
if s.is_empty then pure ""
else lift $ λ it, match str_aux s.length s.mk_iterator it with
  | some it' := result.ok s it'
  | none     := result.error { pos := it.offset, expected := dlist.singleton (repr s) } ff

private def take_aux : nat → string → iterator → result string
| 0     r it := result.ok r it
| (n+1) r it :=
  if !it.has_next then eoi_error it.offset
  else take_aux n (r.push (it.curr)) it.next

/-- Consume `n` characters. -/
def take (n : nat) : m string :=
if n = 0 then pure ""
else lift $ take_aux n ""

@[inline] private def mk_string_result (r : string) (it : iterator) : result string :=
if r.is_empty then result.mk_eps r it
else result.ok r it

private def take_while_aux (p : char → bool) : nat → string → iterator → result string
| 0     r it := mk_string_result r it
| (n+1) r it :=
  if !it.has_next then mk_string_result r it
  else let c := it.curr in
       if p c then take_while_aux n (r.push c) it.next
       else mk_string_result r it

/--
Consume input as long as the predicate returns `tt`, and return the consumed input.
This parser does not fail. It will return an empty string if the predicate
returns `ff` on the current character. -/
def take_while (p : char → bool) : m string :=
lift $ λ it, take_while_aux p it.remaining "" it

def take_while_cont (p : char → bool) (ini : string) : m string :=
lift $ λ it, take_while_aux p it.remaining ini it

/--
Consume input as long as the predicate returns `tt`, and return the consumed input.
This parser requires the predicate to succeed on at least once. -/
def take_while1 (p : char → bool) : m string :=
lift $ λ it,
  if !it.has_next then eoi_error it.offset
  else let c := it.curr in
      if p c
      then let input := it.next in
            take_while_aux p input.remaining (to_string c) input
      else result.error { pos := it.offset, unexpected := repr c } ff

/--
Consume input as long as the predicate returns `ff` (i.e. until it returns `tt`), and return the consumed input.
This parser does not fail. -/
def take_until (p : char → bool) : m string :=
take_while (λ c, !p c)

def take_until1 (p : char → bool) : m string :=
take_while1 (λ c, !p c)

@[inline] private def mk_consumed_result (consumed : bool) (it : iterator) : result unit :=
if consumed then result.ok () it
else result.mk_eps () it

private def take_while_aux' (p : char → bool) : nat → bool → iterator → result unit
| 0     consumed it := mk_consumed_result consumed it
| (n+1) consumed it :=
  if !it.has_next then mk_consumed_result consumed it
  else let c := it.curr in
       if p c then take_while_aux' n tt it.next
       else mk_consumed_result consumed it

/-- Similar to `take_while` but it does not return the consumed input. -/
def take_while' (p : char → bool) : m unit :=
lift $ λ it, take_while_aux' p it.remaining ff it

/-- Similar to `take_while1` but it does not return the consumed input. -/
def take_while1' (p : char → bool) : m unit :=
lift $ λ it,
  if !it.has_next then eoi_error it.offset
  else let c := it.curr in
      if p c
      then let input := it.next in
            take_while_aux' p input.remaining tt input
      else result.error { pos := it.offset, unexpected := repr c } ff

/-- Consume zero or more whitespaces. -/
def whitespace : m unit :=
take_while' char.is_whitespace

/-- Shorthand for `p <* whitespace` -/
def lexeme (p : m α) : m α :=
p <* whitespace

/-- Parse a numeral in decimal. -/
def num : m nat :=
string.to_nat <$> (take_while1 char.is_digit)

/-- Return the number of characters left to be parsed. -/
def remaining : m nat :=
string.iterator.remaining <$> left_over

/-- Succeed only if there are at least `n` characters left. -/
def ensure (n : nat) : m unit :=
do it ← left_over,
   if n ≤ it.remaining then pure ()
   else error "end of input" (dlist.singleton ("at least " ++ to_string n ++ " characters"))

/-- Return the current position. -/
def pos : m position :=
string.iterator.offset <$> left_over

def many1_aux (p : m α) : nat → m (list α)
| 0     := do a ← p, return [a]
| (n+1) := do a ← p,
              as ← (many1_aux n <|> return []),
              return (a::as)

def many1 (p : m α) : m (list α) :=
do r ← remaining, many1_aux p r

def many (p : m α) : m (list α) :=
many1 p <|> return []

def many1_aux' (p : m α) : nat → m unit
| 0     := p >> return ()
| (n+1) := p >> (many1_aux' n <|> return ())

def many1' (p : m α) : m unit :=
do r ← remaining, many1_aux' p r

def many' (p : m α) : m unit :=
many1' p <|> return ()

def eoi : m unit :=
do it ← left_over,
   if it.remaining = 0 then pure ()
   else error (repr it.curr) (dlist.singleton ("end of input"))

def sep_by1 (p : m α) (sep : m β) : m (list α) :=
(::) <$> p <*> many (sep >> p)

def sep_by (p : m α) (sep : m β) : m (list α) :=
sep_by1 p sep <|> return []

def fix_aux (f : m α → m α) : nat → m α
| 0     := failure
| (n+1) := f (fix_aux n)

def fix (f : m α → m α) : m α :=
do n ← remaining, fix_aux f (n+1)

def foldr_aux (f : α → β → β) (p : m α) (b : β) : nat → m β
| 0     := return b
| (n+1) := (f <$> p <*> foldr_aux n) <|> return b

/-- Matches zero or more occurrences of `p`, and folds the result. -/
def foldr (f : α → β → β) (p : m α) (b : β) : m β :=
do it ← left_over,
   foldr_aux f p b it.remaining

def foldl_aux (f : α → β → α) (p : m β) : α → nat → m α
| a 0     := return a
| a (n+1) := (do x ← p, foldl_aux (f a x) n) <|> return a

/-- Matches zero or more occurrences of `p`, and folds the result. -/
def foldl (f : α → β → α) (a : α) (p : m β) : m α :=
do it ← left_over,
   foldl_aux f p a it.remaining

def unexpected (msg : string) : m α :=
error msg

def unexpected_at (msg : string) (pos : position) : m α :=
lift $ λ _, result.error {unexpected := msg, pos := pos} ff

end monad_parser

namespace parser_t
open monad_parser
variables {m : Type → Type} [monad m] {α β : Type}

def parse (p : parser_t m α) (s : string) (fname := "") : m (except message α) :=
run p s fname

def parse_with_eoi (p : parser_t m α) (s : string) (fname := "") : m (except message α) :=
run (p <* eoi) s fname

def parse_with_left_over (p : parser_t m α) (s : string) (fname := "") : m (except message (α × iterator)) :=
run (prod.mk <$> p <*> left_over) s fname

end parser_t
end parser
end lean
