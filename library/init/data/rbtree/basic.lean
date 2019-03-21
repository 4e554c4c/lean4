/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.data.rbmap.basic
universes u v w

def RBTree (α : Type u) (lt : α → α → Prop) : Type u :=
RBMap α Unit lt

@[inline] def mkRBTree (α : Type u) (lt : α → α → Prop) : RBTree α lt :=
mkRBMap α Unit lt

namespace RBTree
variables {α : Type u} {β : Type v} {lt : α → α → Prop}

@[inline] def depth (f : Nat → Nat → Nat) (t : RBTree α lt) : Nat :=
RBMap.depth f t

@[inline] def fold (f : α → β → β) (t : RBTree α lt) (b : β) : β :=
RBMap.fold (λ a _ r, f a r) t b

@[inline] def revFold (f : α → β → β) (t : RBTree α lt) (b : β) : β :=
RBMap.revFold (λ a _ r, f a r) t b

@[inline] def mfold {m : Type v → Type w} [Monad m] (f : α → β → m β) (t : RBTree α lt) (b : β) : m β :=
RBMap.mfold (λ a _ r, f a r) t b

@[inline] def mfor {m : Type v → Type w} [Monad m] (f : α → m β) (t : RBTree α lt) : m PUnit :=
t.mfold (λ a _, f a *> pure ⟨⟩) ⟨⟩

@[inline] def Empty (t : RBTree α lt) : Bool :=
RBMap.Empty t

@[specialize] def toList (t : RBTree α lt) : List α :=
t.revFold (::) []

@[inline] protected def min (t : RBTree α lt) : Option α :=
match RBMap.min t with
| some ⟨a, _⟩ := some a
| none        := none

@[inline] protected def max (t : RBTree α lt) : Option α :=
match RBMap.max t with
| some ⟨a, _⟩ := some a
| none        := none

instance [HasRepr α] : HasRepr (RBTree α lt) :=
⟨λ t, "rbtreeOf " ++ repr t.toList⟩

variables [DecidableRel lt]

@[inline] def insert (t : RBTree α lt) (a : α) : RBTree α lt :=
RBMap.insert t a ()

@[specialize] def ofList : List α → RBTree α lt
| []      := mkRBTree _ _
| (x::xs) := (ofList xs).insert x

def find (t : RBTree α lt) (a : α) : Option α :=
match RBMap.findCore t a with
| some ⟨a, _⟩ := some a
| none        := none

@[inline] def contains (t : RBTree α lt) (a : α) : Bool :=
(t.find a).isSome

def fromList (l : List α) (lt : α → α → Prop) [DecidableRel lt] : RBTree α lt :=
l.foldl insert (mkRBTree α lt)

@[inline] def all (t : RBTree α lt) (p : α → Bool) : Bool :=
RBMap.all t (λ a _, p a)

@[inline] def any (t : RBTree α lt) (p : α → Bool) : Bool :=
RBMap.any t (λ a _, p a)

def subset (t₁ t₂ : RBTree α lt) : Bool :=
t₁.all $ λ a, (t₂.find a).toBool

def seteq (t₁ t₂ : RBTree α lt) : Bool :=
subset t₁ t₂ && subset t₂ t₁

end RBTree

def rbtreeOf {α : Type u} (l : List α) (lt : α → α → Prop) [DecidableRel lt] : RBTree α lt :=
RBTree.fromList l lt
