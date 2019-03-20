/-
Copyright (c) 2019 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich
-/
prelude
import init.lean.position init.io

namespace Lean

/-- Print and accumulate run time of `act` when Option `profiler` is set to `True`. -/
@[extern 5 "lean_lean_profileit"]
constant profileit {α : Type} (category : @& String) (pos : @& Position) (act : IO α) : IO α := act
def profileitPure {α : Type} (category : String) (pos : Position) (fn : Unit → α) : IO α :=
profileit category pos $ IO.lazyPure fn

end Lean
