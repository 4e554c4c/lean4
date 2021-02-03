universe u

inductive Vec (α : Type u) : Nat → Type u
  | nil  : Vec α 0
  | cons : α → {n : Nat} → Vec α n → Vec α (n+1)

def Vec.append1 {α} : {m n : Nat} → Vec α m → Vec α n → Vec α (n + m)
  | nil,      ys => ys
  | cons x xs, ys => cons x (append1 xs ys)

def Vec.append2 {α} : {m n : Nat} → Vec α m → Vec α n → Vec α (n + m)
  | nil,      ys => ys
  | cons x xs, ys => cons x (append2 xs ys)

def Vec.append3 {α} : {m n : Nat} → Vec α m → Vec α n → Vec α (n + m) :=
  @fun
    | .(_), m,  nil,      ys => ys
    | .(_), m, cons x xs, ys => cons x (append3 xs ys)

inductive F : Nat → Type
| fzero : {n : Nat} → F (n+1)

namespace F

def fmin1 : {n : Nat} → (x y : F n) → F n :=
  @fun
    | .(_), fzero, fzero => fzero

def fmin2 : {n : Nat} → (x y : F n) → F n
  | fzero, fzero => fzero

def fmin3 : {n : Nat} → (x y : F n) → F n :=
  @fun
  | n+1, fzero, fzero => fzero

def fmin4 : {n : Nat} → (x y : F n) → F n :=
  @fun
  | .(n+1), @fzero n, @fzero .(n) => fzero

def fmin5 : {n : Nat} → (x y : F n) → F n :=
  @fun
  | .(Nat.succ n), @fzero .(n), @fzero n => fzero

def fmin6 : {n : Nat} → (x y : F n) → F n :=
  @fun
  | .(Nat.succ _), fzero, fzero => fzero

theorem ex1 (n : Nat) (x y : F n) : fmin1 x y = fmin2 x y :=
rfl

theorem ex2 (n : Nat) (x y : F n) : fmin1 x y = fmin3 x y := by
cases x; exact rfl

theorem ex3 (n : Nat) (x y : F n) : fmin1 x y = fmin4 x y :=
rfl

theorem ex4 (n : Nat) (x y : F n) : fmin1 x y = fmin4 x y :=
rfl

theorem ex5 (n : Nat) (x y : F n) : fmin1 x y = fmin5 x y :=
rfl

theorem ex6 (n : Nat) (x y : F n) : fmin1 x y = fmin6 x y :=
rfl
