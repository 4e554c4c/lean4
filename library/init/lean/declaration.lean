/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.lean.expr

namespace lean
/--
Reducibility hints are used in the convertibility checker.
When trying to solve a constraint such a

           (f ...) =?= (g ...)

where f and g are definitions, the checker has to decide which one will be unfolded.
  If      f (g) is opaque,     then g (f) is unfolded if it is also not marked as opaque,
  Else if f (g) is abbrev,     then f (g) is unfolded if g (f) is also not marked as abbrev,
  Else if f and g are regular, then we unfold the one with the biggest definitional height.
  Otherwise both are unfolded.

The arguments of the `regular` constructor are: the definitional height and the flag `self_opt`.

The definitional height is by default computed by the kernel. It only takes into account
other regular definitions used in a definition. When creating declarations using meta-programming,
we can specify the definitional depth manually.

Remark: the hint only affects performance. None of the hints prevent the kernel from unfolding a
declaration during type checking.

Remark: the reducibility_hints are not related to the attributes: reducible/irrelevance/semireducible.
These attributes are used by the elaborator. The reducibility_hints are used by the kernel (and elaborator).
Moreover, the reducibility_hints cannot be changed after a declaration is added to the kernel. -/
inductive reducibility_hints
| opaque  : reducibility_hints
| abbrev  : reducibility_hints
| regular : uint32 → reducibility_hints

structure declaration_val :=
(id : name) (lparams : list name) (type : expr)

structure axiom_val extends declaration_val :=
(is_meta : bool)

/- TODO(Leo): the `value` field for `definition_val` and `theorem_val` should be a thunk. We will make this change
   as soon as we add support for serializing thunks.
   We need this feature to be able to load their values on demand in the kernel. -/

structure definition_val extends declaration_val :=
(value : expr) (hints : reducibility_hints) (is_meta : bool)

structure theorem_val extends declaration_val :=
(value : expr)

structure constructor :=
(id : name) (type : expr)

structure inductive_type :=
(id : name) (type : expr) (cnstrs : list constructor)

/-- Declaration object that can be sent to the kernel. -/
inductive declaration
| axiom_decl       (val : axiom_val)
| defn_decl        (val : definition_val)
| thm_decl         (val : theorem_val)
| quot_decl
| mutual_defn_decl (defns : list definition_val) -- All definitions must be marked as `meta`
| induct_decl      (lparams : list name) (nparams : nat) (types : list inductive_type) (is_meta : bool)

/-- The kernel compiles (mutual) inductive declarations (see `declaration.induct_decl`) into a set of
    - `constant_info.induct` (for each inductive datatype in the mutual declaration),
    - `constant_info.cnstr`  (for each constructor in the mutual declaration),
    - `constant_info.rec`    (automatically generated recursors).

    This data is used to implement iota-reduction efficiently and compile nested inductive
    declarations.

    A series of checks are performed by the kernel to check whether a `declaration.induct_decl`
    is valid or not. -/
structure inductive_val extends declaration_val :=
(nparams : nat)       -- Number of parameters
(nindices : nat)      -- Number of indices
(all : list name)     -- List of all (including this one) inductive datatypes in the mutual declaration containing this one
(cnstrs : list name)  -- List of all constructors for this inductive datatype
(recs : list name)    -- List of all recursors generated when the mutual inductive declaration containing this declaration was accepted by the kernel
                      -- Remark: `recs.length` may be greater than `all.length` if declaration contains nested inductives
                      -- The first element in the list is the recursor of this inductive declaration
(is_rec : bool)       -- `tt` iff it is recursive
(is_meta : bool)

structure constructor_val extends declaration_val :=
(induct  : name)  -- Inductive type this constructor is a member of
(nparams : nat)   -- Number of parameters in inductive datatype `induct`
(is_meta : bool)

/-- Information for reducing a recursor -/
structure recursor_rule :=
(cnstr : name)  -- Reduction rule for this constructor
(nfields : nat) -- Number of fields (i.e., without counting inductive datatype parameters)
(rhs : expr)    -- Right hand side of the reduction rule

structure recursor_val extends declaration_val :=
(all : list name)            -- List of all inductive datatypes in the mutual declaration that generated this recursor
(nparams : nat)              -- Number of parameters
(nindices : nat)             -- Number of indices
(nmotives : nat)             -- Number of motives
(nminor : nat)               -- Number of minor premises
(k : bool)                   -- It supports K-like reduction
(rules : list recursor_rule) -- A reduction for each constructor
(is_meta : bool)

inductive quot_kind
| type  -- `quot`
| cnstr -- `quot.mk`
| lift  -- `quot.lift`
| ind   -- `quot.ind`

structure quot_val extends declaration_val :=
(kind : quot_kind)

/-- Information associated with constant declarations. -/
inductive constant_info
| axiom_info    (val : axiom_val)
| defn_info     (val : definition_val)
| thm_info      (val : theorem_val)
| quot_info     (val : quot_val)
| induct_info   (val : inductive_val)
| cnstr_info    (val : constructor_val)
| rec_info      (val : recursor_val)

namespace constant_info

def to_declaration_val : constant_info → declaration_val
| (defn_info     {to_declaration_val := d, ..}) := d
| (axiom_info    {to_declaration_val := d, ..}) := d
| (thm_info      {to_declaration_val := d, ..}) := d
| (quot_info     {to_declaration_val := d, ..}) := d
| (induct_info   {to_declaration_val := d, ..}) := d
| (cnstr_info    {to_declaration_val := d, ..}) := d
| (rec_info      {to_declaration_val := d, ..}) := d

def id (d : constant_info) : name :=
d.to_declaration_val.id

def lparams (d : constant_info) : list name :=
d.to_declaration_val.lparams

def type (d : constant_info) : expr :=
d.to_declaration_val.type

def value : constant_info → option expr
| (defn_info {value := r, ..}) := some r
| (thm_info  {value := r, ..}) := some r
| _                            := none

def hints : constant_info → reducibility_hints
| (defn_info {hints := r, ..}) := r
| _                            := reducibility_hints.opaque

end constant_info

end lean
