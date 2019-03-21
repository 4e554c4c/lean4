inductive Expr
| Var : Nat → Expr
| Val : Nat → Expr
| Add : Expr → Expr → Expr
| Mul : Expr → Expr → Expr

open Expr Nat

def mkExpr : Nat → Nat → Expr
| 0     v := if v = 0 then Var 1 else Val v
| (n+1) v := Add (mkExpr n (v+1)) (mkExpr n (v-1))

def appendAdd : Expr → Expr → Expr
| (Add e₁ e₂) e₃ := Add e₁ (appendAdd e₂ e₃)
| e₁          e₂ := Add e₁ e₂

def appendMul : Expr → Expr → Expr
| (Mul e₁ e₂) e₃ := Mul e₁ (appendMul e₂ e₃)
| e₁          e₂ := Mul e₁ e₂

def reassoc : Expr → Expr
| (Add e₁ e₂) :=
  let e₁' := reassoc e₁ in
  let e₂' := reassoc e₂ in
  appendAdd e₁' e₂'
| (Mul e₁ e₂) :=
  let e₁' := reassoc e₁ in
  let e₂' := reassoc e₂ in
  appendMul e₁' e₂'
| e := e

def constFolding : Expr → Expr
| (Add e₁ e₂) :=
  let e₁ := constFolding e₁ in
  let e₂ := constFolding e₂ in
  (match e₁, e₂ with
   | Val a, Val b         := Val (a+b)
   | Val a, Add e (Val b) := Add (Val (a+b)) e
   | Val a, Add (Val b) e := Add (Val (a+b)) e
   | _,     _             := Add e₁ e₂)
| (Mul e₁ e₂) :=
  let e₁ := constFolding e₁ in
  let e₂ := constFolding e₂ in
  (match e₁, e₂ with
   | Val a, Val b         := Val (a*b)
   | Val a, Mul e (Val b) := Mul (Val (a*b)) e
   | Val a, Mul (Val b) e := Mul (Val (a*b)) e
   | _,     _             := Mul e₁ e₂)
| e         := e

def size : Expr → Nat
| (Add l r) := size l + size r + 1
| (Mul l r) := size l + size r + 1
| e         := 1

def toStringAux : Expr → String → String
| (Var v)     r := r ++ "#" ++ toString v
| (Val v)     r := r ++ toString v
| (Add e₁ e₂) r := (toStringAux e₂ ((toStringAux e₁ (r ++ "(")) ++ " + ")) ++ ")"
| (Mul e₁ e₂) r := (toStringAux e₂ ((toStringAux e₁ (r ++ "(")) ++ " * ")) ++ ")"

def eval : Expr → Nat
| (Var x) := 0
| (Val v) := v
| (Add l r) := eval l + eval r
| (Mul l r) := eval l * eval r

def main : IO UInt32 :=
let e  := (mkExpr 23 1) in
let v₁ := eval e in
let v₂ := eval (constFolding (reassoc e)) in
IO.println (toString v₁ ++ " " ++ toString v₂) *>
pure 0
