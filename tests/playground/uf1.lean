def StateT (m : Type → Type) (σ : Type) (α : Type) := (Unit × σ) → m (α × σ)
namespace StateT
variable {m : Type → Type} [Monad m] {σ : Type} {α β : Type}
@[inline] protected def pure (a : α) : StateT m σ α := λ ⟨_, s⟩, pure (a, s)
@[inline] protected def bind (x : StateT m σ α) (f : α → StateT m σ β) : StateT m σ β := λ p, do (a, s') ← x p, f a ((), s')
@[inline] def read : StateT m σ σ := λ ⟨_, s⟩, pure (s, s)
@[inline] def write (s' : σ) : StateT m σ Unit := λ ⟨_, s⟩, pure ((), s')
@[inline] def updt (f : σ → σ) : StateT m σ Unit := λ ⟨_, s⟩, pure ((), f s)
instance : Monad (StateT m σ) :=
{pure := @StateT.pure _ _ _, bind := @StateT.bind _ _ _}
end StateT

def ExceptT (m : Type → Type) (ε : Type) (α : Type) := { e : Except ε Unit // e = Except.ok () } → m (Except ε α)
namespace ExceptT
variable {m : Type → Type} [Monad m] {ε : Type} {α β : Type}
@[inline] protected def pure (a : α) : ExceptT m ε α :=
λ e, match e with
     | ⟨Except.ok _, h⟩    := pure (Except.ok a)
     | ⟨Except.error _, h⟩ := Except.noConfusion h
@[inline] protected def bind (x : ExceptT m ε α) (f : α → ExceptT m ε β) : ExceptT m ε β :=
λ e, do v ← x e,
        match v with
        | Except.error e := pure (Except.error e)
        | Except.ok a    := f a ⟨Except.ok (), rfl⟩
@[inline] def error (e : ε) : ExceptT m ε α :=
λ e', match e' with
     | ⟨Except.ok _, h⟩    := pure (Except.error e)
     | ⟨Except.error _, h⟩ := Except.noConfusion h
@[inline] def lift (x : m α) : ExceptT m ε α := λ e, do {a ← x, pure (Except.ok a)}
instance : Monad (ExceptT m ε) :=
{pure := @ExceptT.pure _ _ _, bind := @ExceptT.bind _ _ _}
end ExceptT

abbreviation Node := Nat

structure nodeData :=
(find : Node) (rank : Nat := 0)

abbreviation ufData := Array nodeData

abbreviation M (α : Type) := ExceptT (StateT id ufData) String α
@[inline] def read : M ufData := ExceptT.lift StateT.read
@[inline] def write (s : ufData) : M Unit := ExceptT.lift (StateT.write s)
@[inline] def updt (f : ufData → ufData) : M Unit := ExceptT.lift (StateT.updt f)
@[inline] def error {α : Type} (e : String) : M α := ExceptT.error e
def run {α : Type} (x : M α) (s : ufData := Array.nil) : Except String α × ufData :=
x ⟨Except.ok (), rfl⟩ ((), s)

def capacity : M Nat :=
do d ← read, pure d.size

def findEntryAux : Nat → Node → M nodeData
| 0     n := error "out of fuel"
| (i+1) n :=
  do s ← read,
     if h : n < s.size then
       do { let e := s.read ⟨n, h⟩,
            if e.find = n then pure e
            else do e₁ ← findEntryAux i e.find,
                    updt (λ s, s.write' n e₁),
                    pure e₁ }
     else error "invalid Node"

def findEntry (n : Node) : M nodeData :=
do c ← capacity,
   findEntryAux c n

def find (n : Node) : M Node :=
do e ← findEntry n, pure e.find

def mk : M Node :=
do n ← capacity,
   updt $ λ s, s.push {find := n, rank := 1},
   pure n

def union (n₁ n₂ : Node) : M Unit :=
do r₁ ← findEntry n₁,
   r₂ ← findEntry n₂,
   if r₁.find = r₂.find then pure ()
   else updt $ λ s,
     if r₁.rank < r₂.rank then s.write' r₁.find { find := r₂.find }
     else if r₁.rank = r₂.rank then
        let s₁ := s.write' r₁.find { find := r₂.find } in
        s₁.write' r₂.find { rank := r₂.rank + 1, .. r₂}
     else s.write' r₂.find { find := r₁.find }


def mkNodes : Nat → M Unit
| 0     := pure ()
| (n+1) := mk *> mkNodes n

def checkEq (n₁ n₂ : Node) : M Unit :=
do r₁ ← find n₁, r₂ ← find n₂,
   unless (r₁ = r₂) $ error "nodes are not equal"

def mergePackAux : Nat → Nat → Nat → M Unit
| 0     _ _ := pure ()
| (i+1) n d :=
  do c ← capacity,
  if (n+d) < c
  then union n (n+d) *> mergePackAux i (n+1) d
  else pure ()

def mergePack (d : Nat) : M Unit :=
do c ← capacity, mergePackAux c 0 d

def numEqsAux : Nat → Node → Nat → M Nat
| 0     _ r := pure r
| (i+1) n r :=
  do c ← capacity,
     if n < c
     then do { n₁ ← find n, numEqsAux i (n+1) (if n = n₁ then r else r+1) }
     else pure r

def numEqs : M Nat :=
do c ← capacity,
   numEqsAux c 0 0

def test (n : Nat) : M Nat :=
if n < 2 then error "input must be greater than 1"
else do
  mkNodes n,
  mergePack 50000,
  mergePack 10000,
  mergePack 5000,
  mergePack 1000,
  numEqs

def main (xs : List String) : IO UInt32 :=
let n := xs.head.toNat in
match run (test n) with
| (Except.ok v, s)    := IO.println ("ok " ++ toString v) *> pure 0
| (Except.error e, s) := IO.println ("Error : " ++ e) *> pure 1
