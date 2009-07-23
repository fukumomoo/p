#include <system.h>
#include <scheme/symbols.h>

// Global symbols, readable format
// General purpose
object EVAL;
object EVAL_;
object HASH;
// Variable
object ASSIGN_IN;
object FETCH_FROM;
// Environment
object PARENT;
object SCOPEID_SIZE_;
object PARENT_;
object STORE_AT_IN_;
object SUBSCOPE_KEY_;
// Iscope_class
object NEW_SIZE_;
// Iscope
object APPLY_IN_;
object SCOPE;
object SHIFT;
// ast_capture
object INSTANCE;
// ast_assign
object TO_EXPRESSION_;
// ast_call
object TO_SIZED_;
// Ifixed
object DELEGATE;
object DISPATCH_DELEGATE_SIZE_;
object BASICNEW;
object OBJECT_AT_;
object OBJECT_AT_PUT_;
object DISPATCH_DELEGATE_;
object SIZE;
object BASICNEW_;
object SIZE_;
// File
object ATEND;
object ON_;
object READCHAR;
object READALLCHARS;
object WRITE_CHAR_;

void bootstrap_scheme_symbols() {
    // Ensure all symbols used by the VM are bootstrapped.
    define_symbol(APPLY_IN_,                L"apply:in:");
    define_symbol(BASICNEW,                 L"basicNew");
    define_symbol(DELEGATE,                 L"delegate");
    define_symbol(DISPATCH_DELEGATE_SIZE_,  L"dispatch:delegate:size:");
    define_symbol(ATEND,                    L"atEnd");
    define_symbol(EVAL,                     L"eval");
    define_symbol(HASH,                     L"hash");
    define_symbol(INSTANCE,                 L"instance");
    define_symbol(NEW_SIZE_,                L"new:size:");
    define_symbol(OBJECT_AT_,               L"objectAt:");
    define_symbol(OBJECT_AT_PUT_,           L"objectAt:put:");
    define_symbol(ON_,                      L"on:");
    define_symbol(PARENT,                   L"parent");
    define_symbol(EVAL_,             		L"eval:");
    define_symbol(READCHAR,                 L"readChar");
    define_symbol(READALLCHARS,             L"readAllChars")
    define_symbol(SCOPE,                  L"scopeId");
    define_symbol(SCOPEID_SIZE_,            L"scopeId:size:");
    define_symbol(DISPATCH_DELEGATE_,   	L"dispatch:delegate:");
    define_symbol(PARENT_,               	L"parent:");
    define_symbol(SHIFT,                    L"shift");
    define_symbol(SIZE,                     L"size");
    define_symbol(BASICNEW_,                L"basicNew:");
    define_symbol(STORE_AT_IN_,             L"store:at:in:");
    define_symbol(SUBSCOPE_KEY_,            L"subScope:key:");
    define_symbol(TO_EXPRESSION_,           L"to:expression:");
    define_symbol(TO_SIZED_,                L"to:sized:");
    define_symbol(SIZE_,                	L"size:");
    define_symbol(WRITE_CHAR_,              L"writeChar:");
}
