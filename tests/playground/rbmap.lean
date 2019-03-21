/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.data.Ordering.basic init.coe init.data.Option.basic init.IO

universes u v w w'

inductive color
| Red | Black

inductive Node
| Leaf  {}                                                                       : Node
| Node  (color : color) (lchild : Node) (key : Nat) (val : Bool) (rchild : Node) : Node

variables {σ : Type w}
open color Nat Node

def fold (f : Nat → Bool → σ → σ) : Node → σ → σ
| Leaf b               := b
| (Node _ l k v r)   b := fold r (f k v (fold l b))

def balance1 : Node → Node → Node
| (Node _ _ kv vv t) (Node _ (Node Red l kx vx r₁) ky vy r₂) := Node Red (Node Black l kx vx r₁) ky vy (Node Black r₂ kv vv t)
| (Node _ _ kv vv t) (Node _ l₁ ky vy (Node Red l₂ kx vx r)) := Node Red (Node Black l₁ ky vy l₂) kx vx (Node Black r kv vv t)
| (Node _ _ kv vv t) (Node _ l  ky vy r)                     := Node Black (Node Red l ky vy r) kv vv t
| _                                                        _ := Leaf

def balance2 : Node → Node → Node
| (Node _ t kv vv _) (Node _ (Node Red l kx₁ vx₁ r₁) ky vy r₂)  := Node Red (Node Black t kv vv l) kx₁ vx₁ (Node Black r₁ ky vy r₂)
| (Node _ t kv vv _) (Node _ l₁ ky vy (Node Red l₂ kx₂ vx₂ r₂)) := Node Red (Node Black t kv vv l₁) ky vy (Node Black l₂ kx₂ vx₂ r₂)
| (Node _ t kv vv _) (Node _ l ky vy r)                         := Node Black t kv vv (Node Red l ky vy r)
| _                                                        _    := Leaf

def isRed : Node → Bool
| (Node Red _ _ _ _) := tt
| _                  := ff

def ins : Node → Nat → Bool → Node
| Leaf                 kx vx := Node Red Leaf kx vx Leaf
| (Node Red a ky vy b) kx vx :=
   (if kx < ky then Node Red (ins a kx vx) ky vy b
    else if kx = ky then Node Red a kx vx b
    else Node Red a ky vy (ins b kx vx))
| (Node Black a ky vy b) kx vx :=
    if kx < ky then
      (if isRed a then balance1 (Node Black Leaf ky vy b) (ins a kx vx)
       else Node Black (ins a kx vx) ky vy b)
    else if kx = ky then Node Black a kx vx b
    else if isRed b then balance2 (Node Black a ky vy Leaf) (ins b kx vx)
         else Node Black a ky vy (ins b kx vx)

def setBlack : Node → Node
| (Node _ l k v r) := Node Black l k v r
| e                := e

def insert (t : Node) (k : Nat) (v : Bool) : Node :=
if isRed t then setBlack (ins t k v)
else ins t k v

def mkMapAux : Nat → Node → Node
| 0 m := m
| (n+1) m := mkMapAux n (insert m n (n % 10 = 0))

def mkMap (n : Nat) :=
mkMapAux n Leaf

def main (xs : List String) : IO UInt32 :=
let m := mkMap xs.head.toNat in
let v := fold (λ (k : Nat) (v : Bool) (r : Nat), if v then r + 1 else r) m 0 in
IO.println (toString v) *>
pure 0
