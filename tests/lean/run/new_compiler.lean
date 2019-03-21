import init.Lean.Parser.Parsec
import init.control.coroutine
universes u v w r s

setOption Trace.Compiler.stage1 True
-- setOption pp.implicit True
setOption pp.binderTypes False
setOption pp.proofs True

def foo (n : Nat) : Nat :=
let x := Nat.zero in
let x1 := Nat.succ x in
let x2 := Nat.succ x1 in
let x3 := Nat.succ x2 in
let x4 := Nat.succ x3 in
let x5 := Nat.succ x4 in
let x6 := Nat.succ x5 in
let x7 := Nat.succ x   in
let x8 := Nat.succ x7 in
let y1 := x in
let y2 := y1 in
y2 + n

def cseTst (n : Nat) : Nat :=
let y := Nat.succ ((λ x, x) n) in
let z := Nat.succ n in
y + z

def tst1 (n : Nat) : Nat :=
let p := (Nat.succ n, n) in
let q := (p, p) in
Prod.casesOn q (λ x y, Prod.casesOn x (λ z w, z))

def tst2 (n : Nat) : Nat :=
let p := (λ x, Nat.succ x, Nat.zero)  in
let f := λ p : (Nat → Nat) × Nat, p.1 in
f p n

def add' : Nat → Nat → Nat
| 0 b     := Nat.succ b
| (a+1) b := Nat.succ (Nat.succ (add' a b))

def aux (i : Nat) (h : i > 0) :=
i

def foo2 : Nat :=
@False.rec (λ _, Nat) sorry

setOption pp.notation False

def foo3 (n : Nat) : Nat :=
(λ a : Nat, a + a + a) (n*n)

def boo (a : Nat) (l : List Nat) : List Nat :=
let f := @List.cons Nat in
f a (f a l)

def bla (i : Nat) (h : i > 0 ∧ i ≠ 10) : Nat :=
@and.rec _ _ (λ _, Nat) (λ h₁ h₂, aux i h₁ + aux i h₁) h

def bla' (i : Nat) (h : i > 0 ∧ i ≠ 10) : Nat :=
@and.casesOn _ _ (λ _, Nat) h (λ h₁ h₂, aux i h₁ + aux i h₁)

inductive vec (α : Type u) : Nat → Type u
| nil {}  : vec 0
| cons    : Π {n}, α → vec n → vec (Nat.succ n)

def vec.map {α β σ : Type u} (f : α → β → σ) : Π {n : Nat}, vec α n → vec β n → vec σ n
| _ vec.nil vec.nil                 := vec.nil
| _ (vec.cons a as) (vec.cons b bs) := vec.cons (f a b) (vec.map as bs)

namespace coroutine
variables {α : Type u} {δ : Type v} {β γ : Type w}

def pipe2 : coroutine α δ β → coroutine δ γ β → coroutine α γ β
| (mk k₁) (mk k₂) := mk $ λ a,
  match k₁ a, rfl : ∀ (n : _), n = k₁ a → _ with
  | done b, h        := done b
  | yielded d k₁', h :=
    match k₂ d with
    | done b        := done b
    | yielded r k₂' :=
      -- have directSubcoroutine k₁' (mk k₁), { apply directSubcoroutine.mk k₁ a d, rw h },
      yielded r (pipe2 k₁' k₂')

end coroutine

setOption pp.all True
setOption pp.binderTypes True
