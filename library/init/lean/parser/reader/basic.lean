/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich

Reader for the Lean language
-/
prelude
import init.lean.parser.parser_t init.lean.parser.syntax init.lean.parser.macro
import init.lean.parser.identifier

namespace lean
-- TODO: enhance massively
def message := string

namespace parser

structure token_config :=
(«prefix» : string)
-- reading a token should not need any state
/- An optional parser that is activated after matching `prefix`.
   It should return a syntax tree with a "hole" for the
   `source_info` surrounding the token, which will be supplied
   by the `token` reader. -/
(token_reader : option (parser (source_info → syntax)) := none)

structure reader_state :=
(tokens : list token_config)
(fatal : bool)
(errors : list lean.message)

def reader_state.empty : reader_state :=
⟨[], ff, []⟩

structure reader_config := mk

@[irreducible] def read_m := reader_t reader_config $ state_t reader_state $ parser

structure reader :=
(read : read_m syntax)
(tokens : list token_config := [])

namespace read_m
local attribute [reducible] read_m
instance : monad read_m := infer_instance
instance : alternative read_m := infer_instance
instance : monad_reader reader_config read_m := infer_instance
instance : monad_state reader_state read_m := infer_instance
set_option class.instance_max_depth 128
instance : monad_parser read_m := infer_instance

--TODO(Sebastian): expose `reader_state.errors`
protected def run {α : Type} (cfg : reader_config) (st : reader_state) (s : string) (r : read_m α) :
  except parser.message α :=
prod.fst <$> ((r.run cfg).run st).parse_with_eoi s
end read_m

namespace reader
open monad_parser

protected def parse (cfg : reader_config) (s : string) (r : reader) :
  except parser.message syntax :=
-- the only hardcoded tokens, because they are never directly mentioned by a `reader`
let tokens : list token_config := [⟨"/-", none⟩, ⟨"--", none⟩] in
r.read.run cfg ⟨r.tokens ++ tokens, ff, []⟩ s

def node (m : macro) (ps : list reader) : reader :=
{ read := do {
    args ← ps.mmap reader.read,
    pure $ syntax.node ⟨m.name, args⟩
  },
  tokens := ps.bind reader.tokens }

def many (p : reader) : reader :=
{ p with read := do
    args ← many p.read,
    pure $ syntax.node ⟨name.anonymous, args⟩ }

def many1 (p : reader) : reader :=
{ p with read := do
    args ← many1 p.read,
    pure $ syntax.node ⟨name.anonymous, args⟩ }

def optional (p : reader) : reader :=
{ p with read := do
    r ← optional p.read,
    pure $ match r with
    | some r := syntax.node ⟨name.anonymous, [r]⟩
    | none   := syntax.node ⟨name.anonymous, []⟩ }

end reader
end parser
end lean
