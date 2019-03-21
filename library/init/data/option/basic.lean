/-
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.core init.control.monad init.control.alternative init.coe
open Decidable

universes u v

namespace Option

def toMonad {m : Type → Type} [Monad m] [Alternative m] {A} : Option A → m A
| none := failure
| (some a) := pure a

def getOrElse {α : Type u} : Option α → α → α
| (some x) _ := x
| none     e := e

def get {α : Type u} [Inhabited α] : Option α → α
| (some x) := x
| none     := default α

def toBool {α : Type u} : Option α → Bool
| (some _) := true
| none     := false

def isSome {α : Type u} : Option α → Bool
| (some _) := true
| none     := false

def isNone {α : Type u} : Option α → Bool
| (some _) := false
| none     := true

@[inline] protected def bind {α : Type u} {β : Type v} : Option α → (α → Option β) → Option β
| none     b := none
| (some a) b := b a

@[inline] protected def map {α β} (f : α → β) (o : Option α) : Option β :=
Option.bind o (some ∘ f)

theorem mapId {α} : (Option.map id : Option α → Option α) = id :=
funext (λo, match o with | none := rfl | some x := rfl)

instance : Monad Option :=
{pure := @some, bind := @Option.bind, map := @Option.map}

protected def orelse {α : Type u} : Option α → Option α → Option α
| (some a) o         := some a
| none     (some a)  := some a
| none     none      := none

instance : Alternative Option :=
{ failure := @none,
  orelse  := @Option.orelse,
  ..Option.Monad }

protected def lt {α : Type u} (r : α → α → Prop) : Option α → Option α → Prop
| none (some x)     := True
| (some x) (some y) := r x y
| _ _               := False

instance decidableRelLt {α : Type u} (r : α → α → Prop) [s : DecidableRel r] : DecidableRel (Option.lt r)
| none     (some y) := isTrue  trivial
| (some x) (some y) := s x y
| (some x) none     := isFalse notFalse
| none     none     := isFalse notFalse

end Option

instance (α : Type u) : Inhabited (Option α) :=
⟨none⟩

instance {α : Type u} [DecidableEq α] : DecidableEq (Option α) :=
{decEq := λ a b, match a, b with
 | none,      none      := isTrue rfl
 | none,      (some v₂) := isFalse (λ h, Option.noConfusion h)
 | (some v₁), none      := isFalse (λ h, Option.noConfusion h)
 | (some v₁), (some v₂) :=
   match decEq v₁ v₂ with
   | (isTrue e)  := isTrue (congrArg (@some α) e)
   | (isFalse n) := isFalse (λ h, Option.noConfusion h (λ e, absurd e n))}

instance {α : Type u} [HasLt α] : HasLt (Option α) := ⟨Option.lt (<)⟩
