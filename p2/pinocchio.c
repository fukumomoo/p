#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>

/* ======================================================================== */

Object Nil;

/* ======================================================================== */

Type_Class * MetaClass_Class;
Type_Class * Class_Class;
Type_Class * Object_Class;

/* ======================================================================== */

Object Double_Stack[STACK_SIZE];
Object * _EXP_;
cont   * _CNT_;

jmp_buf Eval_Exit;
jmp_buf Eval_Continue;

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
void continue_eval()
{
    longjmp(Eval_Continue, 1);
}


void restore_env()
{
    zap_CNT();
    Object result = pop_EXP();
    Env = peek_EXP(1);
    poke_EXP(1, result);
}

void init_Stack(unsigned int size)
{
    // TODO allocate the stack with the giben size
    _EXP_ = (Object *)&Double_Stack[0];
    _CNT_ = (cont *)&Double_Stack[STACK_SIZE - 1];
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
}


Object current_env() { return Env; }

/* ========================================================================== */

#include <system/type/Symbol.c>
#include <system/type/SmallInt.c>
#include <system/type/Character.c>
#include <system/type/Boolean.c>
#include <system/type/String.c>
#include <system/type/Array.c>
#include <system/type/Dictionary.c>
#include <system/type/Object.c>
#include <system/type/Class.c>

#include <system/io/File.c>

#include <system/ast/Self.c>
#include <system/ast/Super.c>
#include <system/ast/Constant.c>
#include <system/ast/Variable.c>
#include <system/ast/Assign.c>
#include <system/ast/Send.c>
#include <system/ast/Method.c>
#include <system/ast/NativeMethod.c>
#include <system/ast/Continue.c>
#include <system/ast/Callec.c>

#include <system/runtime/Env.c>

/* ========================================================================== */

#include <pinocchio_helper.c>

/* ========================================================================== */

void send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Type_Class * class = (Type_Class *)HEADER(exp);
    // TODO get rid of this switch and do a "double dispatch"
    if (class == Constant_Class) {
        return AST_Constant_eval((AST_Constant *)exp);
    }
    if (class == Variable_Class) {
        return AST_Variable_eval((AST_Variable *)exp);
    }
    if (class == Assign_Class) {
        return AST_Assign_eval((AST_Assign *)exp);
    }
    if (class == Send_Class) {
        return AST_Send_eval((AST_Send *)exp);
    }
    if (class == Self_Class) {
        return AST_Self_eval();
    }
    if (class == Super_Class) {
        return AST_Super_eval((AST_Super *)exp);
    }
    /*if (class == Continue_Class) {
        //return AST_Continue_eval((AST_Continue *)exp);
    }*/
    if (class == Callec_Class) {
        return AST_Callec_eval((AST_Callec *)exp);
    }
    
    printf("\"%ls\" has no native eval function. Maybe you wanted wrap it in a Constant?\n", 
           ((Type_Class*)class)->name->value);
    assert(NULL);
}


void end_eval()
{
    longjmp(Eval_Exit, 1);
}

/*
 * setjmp and longjmp have an overhead but they allow us to avoid testing if
 * we are at the end of the stack. It's only expensive for starting new
 * threads, and the boosts performance for longer living threads.
 */
Object
Eval(Object code)
{
    push_EXP(code);
    push_CNT(end_eval);
    push_CNT(send_Eval);

    if (!setjmp(Eval_Exit)) {
        setjmp(Eval_Continue);
        for (;;) {
            peek_CNT(1)();
        }
    }
    
    zap_CNT();
    Object result = pop_EXP();
    return result;
}

Object EvalSendConst(Object self, Object symbol, Type_Array * args) 
{
    return Eval((Object)new_Send((Object)self, symbol, args));
}


Object EvalSend(Object self, Object symbol, Type_Array * args) 
{
    AST_Constant * self_const = new_Constant(self);
    int i;
    for (i=0; i<args->size->value; i++) {
        args->values[i] = (Object)new_Constant(args->values[i]);
    }
    return EvalSendConst((Object)self_const, symbol, args);
}

Object EvalSend0(Object self, Object symbol)
{
    return EvalSend(self, symbol, Empty_Array);
}

Object EvalSend1(Object self, Object symbol, Object arg)
{
    return EvalSend(self, symbol, new_Array_With(1, arg));
}

/* ========================================================================== */

#include <pinocchioTest.c>

/* ========================================================================== */

int main()
{
    Nil            = (Object) NEW(Type_Nil);
    
    pre_initialize_Object();
    pre_initialize_Type_SmallInt();
    pre_initialize_Symbol();
    
    pre_initialize_Array();
    pre_initialize_Assign();
    pre_initialize_Callec();
    pre_initialize_Character();
    pre_initialize_Constant();
    pre_initialize_Continue();
    pre_initialize_Dictionary();
    pre_initialize_File();
    pre_initialize_Method();
    pre_initialize_Native_Method();
    pre_initialize_Self();
    pre_initialize_Send();
    pre_initialize_String();
    pre_initialize_Super();
    pre_initialize_Type_Boolean();
    pre_initialize_Variable();

    initialize_Symbol();
    initialize_Thread();
    
    post_initialize_Object();
    
    post_initialize_Array();
    post_initialize_Assign();
    post_initialize_Callec();
    post_initialize_Character();
    post_initialize_Constant();
    post_initialize_Continue();
    post_initialize_Dictionary();
    post_initialize_Env();
    post_initialize_File();
    post_initialize_Method();
    post_initialize_Native_Method();
    post_initialize_Self();
    post_initialize_Send();
    post_initialize_String();
    post_initialize_Super();
    post_initialize_Symbol();
    post_initialize_Type_Boolean();
    post_initialize_Type_SmallInt();
    post_initialize_Variable();
    
    run_tests();

    return EXIT_SUCCESS;
}
