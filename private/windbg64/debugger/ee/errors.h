#ifdef __cplusplus
} // extern "C" {
#endif

#ifdef NEVER
// use debmsg.rc for WIN32 EE error messages

ERRDAT (ERR_NONE,           "no error condition")
// Note the ERR_EXCEPTION must be the first error message
ERRDAT (ERR_FCNCALLERR,     "error attempting to execute user function")
ERRDAT (ERR_PTRACE,         "error accessing user memory")
ERRDAT (ERR_INTERNAL,        "internal error in expression evaluator")
ERRDAT (ERR_SYNTAX,         "syntax error")
ERRDAT (ERR_OPNOTSUPP,        "operator not supported")
ERRDAT (ERR_MISSINGLP,        "missing left parenthesis")
ERRDAT (ERR_MISSINGRP,        "missing right parenthesis")
ERRDAT (ERR_MISSINGDQ,        "missing double quotation mark (\") at end of string")
ERRDAT (ERR_MISSINGSQ,        "missing single quotation mark (') after character constant")
ERRDAT (ERR_MISSINGLB,        "missing left bracket")
ERRDAT (ERR_MISSINGRB,        "missing right bracket")
ERRDAT (ERR_MISSINGLC,        "missing left curly brace")
ERRDAT (ERR_NOOPERATOR,     "missing operator")
ERRDAT (ERR_NOOPERAND,        "missing operand")
ERRDAT (ERR_TOOCOMPLEX,     "expression too complex (stack overflow)")
ERRDAT (ERR_CONSTANT,        "constant too big")
ERRDAT (ERR_UNKNOWNSYMBOL,    "symbol \"%Fs\" not found")
ERRDAT (ERR_BADREGISTER,    "bad register name")
ERRDAT (ERR_TYPECAST,        "bad type cast")
ERRDAT (ERR_OPERANDTYPES,    "operand types bad for this operation")
ERRDAT (ERR_STRUCT,         "struct or union used as scalar")
ERRDAT (ERR_FCNCALL,        "function call before _main")
ERRDAT (ERR_RADIX,          "bad radix")
ERRDAT (ERR_NEEDLVALUE,     "operation needs l-value")
ERRDAT (ERR_NEEDSTRUCT,     "operator needs class/struct/union")
ERRDAT (ERR_FORMAT,         "bad format string")
ERRDAT (ERR_NOTLVALUE,        "tp addr not lvalue")
ERRDAT (ERR_NOTELEMENT,     "not struct/union element")
ERRDAT (ERR_NOTSTRUCTPTR,    "not struct pointer")
ERRDAT (ERR_NOTEVALUATABLE,    "expression cannot be evaluated")
ERRDAT (ERR_NOTEXPANDABLE,    "expression cannot be evaluated")
ERRDAT (ERR_DIVIDEBYZERO,    "divide by 0")
ERRDAT (ERR_BADOMF,         "error in OMF type information")
ERRDAT (ERR_TYPEINCOMPAT,    "types incompatible with operator")
ERRDAT (ERR_NOTRESIDENT,    "overlay not resident")
ERRDAT (ERR_BADCONTEXT,     "bad context {...} specification")
ERRDAT (ERR_NOMEMORY,        "out of memory")
ERRDAT (ERR_FCNERROR,        "function argument count and/or type mismatch")
ERRDAT (ERR_AMBIGUOUS,        "symbol is ambiguous")
ERRDAT (ERR_CANTCONVERT,    "argument type not supported")
ERRDAT (ERR_NOTSTATIC,        "class element must be static member or member function")
ERRDAT (ERR_BADLINE,        "bad line number")
ERRDAT (ERR_BADTHIS,        "this pointer used outside of member function")
ERRDAT (ERR_NEEDSBIRD,        "use of _based(void) pointer requires :> operator")
ERRDAT (ERR_NOTFCN,         "not a function")
ERRDAT (ERR_NOARGLIST,        "argument list required for member function")
ERRDAT (ERR_ARGLIST,        "argument list does not match a function")
ERRDAT (ERR_CALLSEQ,        "calling sequence not supported")
ERRDAT (ERR_OLDOMF,         "obsolete OMF - please relink program")
ERRDAT (ERR_BSCOPE,         "left side of :: must be class/struct/union type")
ERRDAT (ERR_BPAMBIGUOUS,    "more than one overloaded symbol specified in breakpoint")
ERRDAT (ERR_METHODNP,        "member function not present")
ERRDAT (ERR_SYMCONFLICT,    "nonfunction symbol match while binding breakpoints")
ERRDAT (ERR_REGINBP,        "register in breakpoint expression illegal")
ERRDAT (ERR_AMBCONTEXT,     "ambiguous symbol in context operator")
ERRDAT (ERR_LINENUMBER,     "error in line number")
ERRDAT (ERR_NOCODE,         "no code at line number")
ERRDAT (ERR_NOOVERLOAD,     "overloaded operator not found")
ERRDAT (ERR_CLASSNOTFCN,    "left operand is class not a function name")
ERRDAT (ERR_REGNOTAVAIL,    "register is not available")
ERRDAT (ERR_FCNTOODEEP,     "function nesting depth exceeded")
ERRDAT (ERR_CONSTRUCTOR,    "constructor calls not supported")
ERRDAT (ERR_OVLPOINTSTO,    "overloaded operator -> not supported")
ERRDAT (ERR_NOVIRTUALBP,    "can't set breakpoint on bound virtual member function")
ERRDAT (ERR_NOCLASSASSIGN,    "class assignment not supported")
ERRDAT (ERR_NOMODIFIABLELV,    "l-value is not modifiable")
ERRDAT (ERR_INVENUMVAL,        "Illegal Enum Value")
ERRDAT (ERR_TYPESUPPORT,    "type not supported")
ERRDAT (ERR_NOSTACKFRAME,    "variable needs stack frame")
ERRDAT (ERR_STMEMBERNP,        "static member not present")
ERRDAT (ERR_NOFUNCEVAL,        "function evaluation not supported")

#endif

#ifdef __cplusplus
} // extern "C" {
#endif
