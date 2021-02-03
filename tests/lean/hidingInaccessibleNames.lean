def f : (xs : List Nat) → Nat → xs ≠ [] → Nat
  | [], _, _ => _
  | [a,b], _, _ => _
  | _, _, _ => _

set_option pp.inaccessibleNames true in
def f : (xs : List Nat) → Nat → xs ≠ [] → Nat
  | [], _, _ => _
  | [a,b], _, _ => _
  | _, _, _ =>  _

theorem ex1 : p ∨ q → q ∨ p := by
  intro h
  cases h
  traceState
  apply Or.inr
  assumption
  apply Or.inl
  assumption
  done

theorem ex2 : {p : Prop} → [Decidable p] → p → decide p = true := @fun
  | _, isTrue  _, _   => _
  | _, isFalse h₁, h₂ => absurd h₂ h₁

theorem ex3 : ∀ {c d : Char}, c = d → c.val = d.val
  | rfl => _
