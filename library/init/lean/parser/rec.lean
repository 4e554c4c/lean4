/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich

Recursion monad transformer
-/
prelude
import init.lean.parser.parsec

namespace lean.parser

/-- A small wrapper of `reader_t` that simplifies introducing and invoking
    recursion points in a computation. -/
def rec_t (α δ : Type) (m : Type → Type) (β : Type) :=
reader_t (α → m δ) m β

namespace rec_t
variables {m : Type → Type} {α δ β : Type} [monad m]
local attribute [reducible] rec_t

/-- Continue at the recursion point stored at `run`. -/
def recurse (a : α) : rec_t α δ m δ :=
do x ← read,
   monad_lift (x a)

private def run_aux (base : α → m δ) (rec : α → rec_t α δ m δ) : nat → α → m δ
| 0     := base
| (n+1) := λ a, (rec a).run (run_aux n)

/-- Execute `x`, executing `rec a` whenever `recurse a` is called.
    After `max_rec` recursion steps, `base` is executed instead. -/
protected def run (x : rec_t α δ m β) (base : α → m δ) (rec : α → rec_t α δ m δ) (max_rec : ℕ) : m β :=
x.run (run_aux base rec max_rec)

protected def run_parsec {γ ε : Type} [monad_parsec γ ε m] [parsec.expected ε] (x : rec_t α δ m β)
  (rec : α → rec_t α δ m δ) : m β :=
do it ← monad_parsec.left_over,
   rec_t.run x (λ _, monad_parsec.error "rec_t.run_parsec: no progress") rec (it.remaining+1)

-- not clear how to auto-derive these given the additional constraints
instance : monad (rec_t α δ m) := infer_instance
instance [alternative m] : alternative (rec_t α δ m) := infer_instance
instance : has_monad_lift m (rec_t α δ m) := infer_instance
instance (ε) [monad_except ε m] : monad_except ε (rec_t α δ m) := infer_instance
instance (μ ε) [monad_parsec μ ε m] : monad_parsec μ ε (rec_t α δ m) :=
infer_instance
-- NOTE: does not allow to vary `m` because of its occurrence in the reader state
instance [monad m] : monad_functor m m (rec_t α δ m) (rec_t α δ m) :=
infer_instance
end rec_t

class monad_rec (α δ : out_param Type) (m : Type → Type) :=
(recurse {} : α → m δ)
export monad_rec (recurse)

instance monad_rec.trans (α δ m m') [has_monad_lift m m'] [monad_rec α δ m] [monad m] : monad_rec α δ m' :=
{ recurse := λ a, monad_lift (recurse a : m δ) }

instance monad_rec.base (α δ m) [monad m] : monad_rec α δ (rec_t α δ m) :=
{ recurse := rec_t.recurse }

end lean.parser
