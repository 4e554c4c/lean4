/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
prelude
import init.data.uint
@[inline, reducible] def isValidChar (n : Uint32) : Prop :=
n < 0xd800 ∨ (0xdfff < n ∧ n < 0x110000)

/-- The `Char` Type represents an unicode scalar value.
    See http://www.unicode.org/glossary/#unicode_scalar_value). -/
structure Char :=
(val : Uint32) (valid : isValidChar val)

instance : HasSizeof Char :=
⟨λ c, c.val.toNat⟩

namespace Char
local infix `&`:65 := Uint32.land

def utf8Size (c : Char) : Uint32 :=
let v := c.val in
     if v & 0x80 = 0    then 1
else if v & 0xE0 = 0xC0 then 2
else if v & 0xF0 = 0xE0 then 3
else if v & 0xF8 = 0xF0 then 4
else if v & 0xFC = 0xF8 then 5
else if v & 0xFE = 0xFC then 6
else if v = 0xFF        then 1
else 0

protected def lt (a b : Char) : Prop := a.val < b.val
protected def le (a b : Char) : Prop := a.val ≤ b.val

instance : HasLt Char := ⟨Char.lt⟩
instance : HasLe Char := ⟨Char.le⟩

instance decLt (a b : Char) :  Decidable (a < b) :=
Uint32.decLt _ _

instance decLe (a b : Char) : Decidable (a ≤ b) :=
Uint32.decLe _ _

axiom isValidChar0 : isValidChar 0

@[noinline, pattern] def ofNat (n : Nat) : Char :=
if h : isValidChar (Uint32.ofNat n) then {val := Uint32.ofNat n, valid := h} else {val := 0, valid := isValidChar0}

@[inline] def toNat (c : Char) : Nat :=
c.val.toNat

lemma eqOfVeq : ∀ {c d : Char}, c.val = d.val → c = d
| ⟨v, h⟩ ⟨_, _⟩ rfl := rfl

lemma veqOfEq : ∀ {c d : Char}, c = d → c.val = d.val
| _ _ rfl := rfl

lemma neOfVne {c d : Char} (h : c.val ≠ d.val) : c ≠ d :=
λ h', absurd (veqOfEq h') h

lemma vneOfNe {c d : Char} (h : c ≠ d) : c.val ≠ d.val :=
λ h', absurd (eqOfVeq h') h

instance : DecidableEq Char :=
{decEq := λ i j, decidableOfDecidableOfIff
  (decEq i.val j.val) ⟨Char.eqOfVeq, Char.veqOfEq⟩}

instance : Inhabited Char :=
⟨'A'⟩

def isWhitespace (c : Char) : Bool :=
c = ' ' || c = '\t' || c = '\n'

def isUpper (c : Char) : Bool :=
c.val ≥ 65 && c.val ≤ 90

def isLower (c : Char) : Bool :=
c.val ≥ 97 && c.val ≤ 122

def isAlpha (c : Char) : Bool :=
c.isUpper || c.isLower

def isDigit (c : Char) : Bool :=
c.val ≥ 48 && c.val ≤ 57

def isAlphanum (c : Char) : Bool :=
c.isAlpha || c.isDigit

def toLower (c : Char) : Char :=
let n := toNat c in
if n >= 65 ∧ n <= 90 then ofNat (n + 32) else c

end Char
