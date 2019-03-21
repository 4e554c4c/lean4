@[noinline]
def h (x : Nat) : UInt32 :=
UInt32.ofNat x

def f (x y : UInt32) : UInt32 :=
let a1 : UInt32 := 128 * 100 - 100 in
let v  : Nat := 10 + x.toNat in
let a2 : UInt32 := x + a1 in
let a3 : UInt32 := 10 in
y + a2 + h v + a3

def g : UInt32 → UInt32 → UInt32 | x y :=
if x = 0 then y else g (x-1) (y+2)

def foo : UInt8 :=
let x : UInt8 := 100 in
x + x + x

def main : IO UInt32 :=
IO.println (toString (f 10 20)) *>
IO.println (toString (f 0 0)) *>
IO.println (toString (g 3 5)) *>
IO.println (toString (g 0 6)) *>
IO.println (toString foo) *>
pure 0
