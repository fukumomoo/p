#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>
#include <system/ast/Continue.h>
#include <system/ast/Callec.h>

/* ========================================================================= */

Type_Class AST_Callec_Class;

/* ========================================================================= */

AST_Callec new_AST_Callec(Object target)
{
    NEW_OBJECT(AST_Callec);
    result->target = target;
    return result;
}

void pre_init_AST_Callec()
{
    AST_Callec_Class = new_Named_Class((Object)Type_Object_Class,
                                       L"AST_Callec",
                                       create_type(3, OBJECT));
}

/* ========================================================================= */

void apply(Object closure, uns_int argc)
{
    // TODO in the alternative case, send "apply" message.
    printf("cls: %ls\n", ((Type_Class)HEADER(closure))->name->value);
    assert0(HEADER(closure) == (Object)Runtime_Closure_Class);
    Runtime_Closure_apply((Runtime_Closure)closure, argc);
}

NATIVE1(AST_Callec_on_)
    LOGFUN;
    AST_Continue cont   = new_AST_Continue();
    cont->exp_offset = (_EXP_ - &(Double_Stack[0]) - (argc + 1));
    cont->cnt_offset = (&(Double_Stack[STACK_SIZE]) - (Object*)_CNT_);
    cont->Env = (Object)current_env();
    // optimization, reuse array object.
    // make sure to undo when introducing others
    // TODO do this more cleanly!
    Object closure = NATIVE_ARG(0);
    poke_EXP(1, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_AST_Callec()
{
    store_native_method((Type_Class)HEADER(AST_Callec_Class),
                        SMB_on_, NM_AST_Callec_on_);
}
