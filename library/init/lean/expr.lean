/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.lean.level init.lean.kvmap

namespace Lean

inductive Literal
| natVal (val : Nat)
| strVal (val : String)

inductive BinderInfo
| default | implicit | strictImplicit | instImplicit | auxDecl

/-
TODO(Leo): fix the `mvar` Constructor.
In Lean3 (and Lean4), we have two kinds of metavariables: regular and temporary.
The Type of regular metavariables is stored in the metavarContext.
The Type of temporary metavariables is stored in the metavar itself. This decision is legacy from Lean2.
Moreover, the `Name` in temporary metavariables are supposed to be (small) numerals. So,
we can store their assignment as an Array. Actually, it is a numeral with a hidden unique prefix.
The decision of storing the Type of the tmp metavar is also debatable.
For example, we can avoid this by have another Array with their types.
For regular metavariables, the `Expr` field is a dummy value.

We should have two different constructors:
`| mvar : Name → Expr` for regular metavariables
and
`| tmvar : Usize → Expr` for temporary metavariables
The `Usize` makes it clear that we can use arrays to store tmp metavar assignments and their types.
-/
inductive Expr
| bvar  : Nat → Expr                                -- bound variables
| fvar  : Name → Expr                               -- free variables
| mvar  : Name → Expr → Expr                        -- (temporary) meta variables
| sort  : Level → Expr                              -- Sort
| const : Name → List Level → Expr                  -- constants
| app   : Expr → Expr → Expr                        -- application
| lam   : Name → BinderInfo → Expr → Expr → Expr   -- lambda abstraction
| pi    : Name → BinderInfo → Expr → Expr → Expr   -- Pi
| elet  : Name → Expr → Expr → Expr → Expr          -- let expressions
| lit   : Literal → Expr                            -- literals
| mdata : Kvmap → Expr → Expr                       -- metadata
| proj  : Name → Nat → Expr → Expr                  -- projection

instance exprIsInhabited : Inhabited Expr :=
⟨Expr.sort Level.zero⟩

attribute [extern "lean_expr_mk_bvar"]   Expr.bvar
attribute [extern "lean_expr_mk_fvar"]   Expr.fvar
attribute [extern "lean_expr_mk_mvar"]   Expr.mvar
attribute [extern "lean_expr_mk_sort"]   Expr.sort
attribute [extern "lean_expr_mk_const"]  Expr.const
attribute [extern "lean_expr_mk_app"]    Expr.app
attribute [extern "lean_expr_mk_lambda"] Expr.lam
attribute [extern "lean_expr_mk_pi"]     Expr.pi
attribute [extern "lean_expr_mk_let"]    Expr.elet
attribute [extern "lean_expr_mk_lit"]    Expr.lit
attribute [extern "lean_expr_mk_mdata"]  Expr.mdata
attribute [extern "lean_expr_mk_proj"]   Expr.proj

namespace Expr
def mkApp (fn : Expr) (args : List Expr) : Expr :=
args.foldl Expr.app fn

def mkCapp (fn : Name) (args : List Expr) : Expr :=
mkApp (Expr.const fn []) args

@[extern "lean_expr_hash"]
constant hash (n : @& Expr) : USize := default USize

@[extern "lean_expr_dbg_to_string"]
constant dbgToString (e : @& Expr) : String := default String

end Expr

def getAppFn : Expr → Expr
| (Expr.app f a) := getAppFn f
| e              := e

def mkBinApp (f a b : Expr) :=
Expr.app (Expr.app f a) b

def mkDecIsTrue (pred proof : Expr) :=
mkBinApp (Expr.const `Decidable.isTrue []) pred proof

def mkDecIsFalse (pred proof : Expr) :=
mkBinApp (Expr.const `Decidable.isFalse []) pred proof

end Lean
