/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.data.rbmap.basic
universes u v w

def rbtree (α : Type u) (lt : α → α → Prop) : Type u :=
rbmap α unit lt

@[inline] def mkRbtree (α : Type u) (lt : α → α → Prop) : rbtree α lt :=
mkRbmap α unit lt

namespace rbtree
variables {α : Type u} {β : Type v} {lt : α → α → Prop}

@[inline] def depth (f : nat → nat → nat) (t : rbtree α lt) : nat :=
rbmap.depth f t

@[inline] def fold (f : α → β → β) (t : rbtree α lt) (b : β) : β :=
rbmap.fold (λ a _ r, f a r) t b

@[inline] def revFold (f : α → β → β) (t : rbtree α lt) (b : β) : β :=
rbmap.revFold (λ a _ r, f a r) t b

@[inline] def mfold {m : Type v → Type w} [monad m] (f : α → β → m β) (t : rbtree α lt) (b : β) : m β :=
rbmap.mfold (λ a _ r, f a r) t b

@[inline] def mfor {m : Type v → Type w} [monad m] (f : α → m β) (t : rbtree α lt) : m punit :=
t.mfold (λ a _, f a *> pure ⟨⟩) ⟨⟩

@[inline] def empty (t : rbtree α lt) : bool :=
rbmap.empty t

@[specialize] def toList (t : rbtree α lt) : list α :=
t.revFold (::) []

@[inline] protected def min (t : rbtree α lt) : option α :=
match rbmap.min t with
| some ⟨a, _⟩ := some a
| none        := none

@[inline] protected def max (t : rbtree α lt) : option α :=
match rbmap.max t with
| some ⟨a, _⟩ := some a
| none        := none

instance [hasRepr α] : hasRepr (rbtree α lt) :=
⟨λ t, "rbtreeOf " ++ repr t.toList⟩

variables [decidableRel lt]

@[inline] def insert (t : rbtree α lt) (a : α) : rbtree α lt :=
rbmap.insert t a ()

@[specialize] def ofList : list α → rbtree α lt
| []      := mkRbtree _ _
| (x::xs) := (ofList xs).insert x

def find (t : rbtree α lt) (a : α) : option α :=
match rbmap.findCore t a with
| some ⟨a, _⟩ := some a
| none        := none

@[inline] def contains (t : rbtree α lt) (a : α) : bool :=
(t.find a).isSome

def fromList (l : list α) (lt : α → α → Prop) [decidableRel lt] : rbtree α lt :=
l.foldl insert (mkRbtree α lt)

@[inline] def all (t : rbtree α lt) (p : α → bool) : bool :=
rbmap.all t (λ a _, p a)

@[inline] def any (t : rbtree α lt) (p : α → bool) : bool :=
rbmap.any t (λ a _, p a)

def subset (t₁ t₂ : rbtree α lt) : bool :=
t₁.all $ λ a, (t₂.find a).toBool

def seteq (t₁ t₂ : rbtree α lt) : bool :=
subset t₁ t₂ && subset t₂ t₁

end rbtree

def rbtreeOf {α : Type u} (l : list α) (lt : α → α → Prop) [decidableRel lt] : rbtree α lt :=
rbtree.fromList l lt
