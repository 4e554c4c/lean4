/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.meta.expr
universes u v

/-- Quoted expressions. They can be converted into expressions by using a tactic. -/
meta constant pexpr : Type
-- @[reducible] meta def pexpr := expr ff
protected meta constant pexpr.of_expr  : expr → pexpr
protected meta constant pexpr.to_expr  : pexpr → expr
@[instance] protected meta constant pexpr.reflect (e : pexpr) : reflected e

protected meta constant expr.subst (elab : bool) : pexpr → pexpr → pexpr

local attribute [reducible] reflected

@[inline] meta def reflected.subst {α : Sort v} {β : α → Sort u} {f : Π a : α, β a} {a : α} :
  reflected f → reflected a → reflected (f a) :=
λ ef ea, match ef with
| (expr.lam _ _ _ _) := pexpr.to_expr (expr.subst ff (pexpr.of_expr ef) (pexpr.of_expr ea))
| _                  := expr.app ef ea

attribute [irreducible] reflected reflected.subst reflected.to_expr

meta class has_to_pexpr (α : Sort u) :=
(to_pexpr : α → pexpr)

meta def to_pexpr {α : Sort u} [has_to_pexpr α] : α → pexpr :=
has_to_pexpr.to_pexpr

meta instance : has_to_pexpr pexpr :=
⟨id⟩

meta instance : has_to_pexpr expr :=
⟨pexpr.of_expr⟩
