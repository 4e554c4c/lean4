/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich

Message Type used by the Lean frontend
-/
prelude
import init.data.toString init.Lean.Position

namespace Lean
inductive MessageSeverity
| information | warning | error

-- TODO: structured messages
structure Message :=
(filename : String)
(pos      : Position)
(endPos  : Option Position  := none)
(severity : MessageSeverity := MessageSeverity.error)
(caption  : String           := "")
(text     : String)

namespace Message
protected def toString (msg : Message) : String :=
msg.filename ++ ":" ++ toString msg.pos.line ++ ":" ++ toString msg.pos.column ++ ": " ++
(match msg.severity with
 | MessageSeverity.information := ""
 | MessageSeverity.warning := "warning: "
 | MessageSeverity.error := "error: ") ++
(if msg.caption = "" then "" else msg.caption ++ ":\n") ++
msg.text

instance : HasToString Message :=
⟨Message.toString⟩
end Message

structure MessageLog :=
-- messages are stored in reverse for efficient append
(revList : List Message)

namespace MessageLog
def Empty : MessageLog :=
⟨[]⟩

def add (msg : Message) (log : MessageLog) : MessageLog :=
⟨msg :: log.revList⟩

protected def append (l₁ l₂ : MessageLog) : MessageLog :=
⟨l₂.revList ++ l₁.revList⟩

instance : HasAppend MessageLog :=
⟨MessageLog.append⟩

def hasErrors (log : MessageLog) : Bool :=
log.revList.any $ λ m, match m.severity with
| MessageSeverity.error := tt
| _                      := ff

def toList (log : MessageLog) : List Message :=
log.revList.reverse
end MessageLog
end Lean
