#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockClosure.h>

/* ========================================================================= */

BlockClosure new_BlockClosure(Block code, 
                                              BlockContext context) {
    NEW_OBJECT(BlockClosure);
    assert1(HEADER(context) == BlockContext_Class ||
            HEADER(context) == MethodContext_Class,
            "Wrong type of context!");
    result->code      = code;
    result->context   = context;
    context->captured = 1;
    return result;
}

/* ========================================================================= */

BlockContext activation_from_native(uns_int argc)
{
    BlockClosure closure = current_env()->closure;
    Block block          = closure->code;
    uns_int paramc       = block->params->size;
    uns_int localc       = block->locals->size;

    //assert1(argc == paramc, "Catch-all arguments not supported yet!");

    BlockContext context = current_env();

    while (argc > 0) {
        argc--;
        context->locals[argc] = pop_EXP();
    }
    zap_EXP(); // remove self

    argc = paramc;
    // Set locals to nil.
    while (argc < paramc + localc) {
        context->locals[argc] = nil;
        argc++;
    }

    return context;
}

CNT(restore_pop_env)
    set_env(peek_EXP(1));
    Optr result = pop_EXP();
    poke_EXP(0, result);

}

void BlockClosure_apply(BlockClosure closure, uns_int argc)
{
    Block block = closure->code;
    assert1(argc == block->params->size, "Argument count mismatch");

    if (block->size == 0) { 
        RETURN_FROM_NATIVE(nil);
        return; 
    }

    if (block->locals->size == 0 && argc == 0) {
        BlockContext env = current_env();
        if (env != closure->context) {
            zap_EXP();
            poke_EXP(0, env);
            push_CNT(restore_pop_env);
            set_env((Optr)closure->context);
        } else {
            zapn_EXP(2);
        }
        push_CNT_raw(block->threaded);
        push_CNT_raw(0);
        push_CNT(eval_threaded);
        return CNT_eval_threaded();
    }
    
    set_env((Optr)new_BlockContext(closure));
    activation_from_native(argc);

    push_CNT(restore_env);
    push_CNT_raw(block->threaded);
    push_CNT_raw(0);
    push_CNT(eval_threaded);
    zap_EXP();
    CNT_eval_threaded();
}

void apply(Optr closure, uns_int argc)
{
    // TODO in the alternative case, send "value:*" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == BlockClosure_Class);
    BlockClosure_apply((BlockClosure)closure, argc);
}

CNT(check_while_true)
    Optr boolean = peek_EXP(0);

    if (boolean == (Optr)true) {
        Optr closure = peek_EXP(1);
        poke_EXP(0, nil);
        push_EXP(closure);
        BlockClosure_apply((BlockClosure)closure, 0);
        return;
    }

    if (boolean == (Optr)false) {
        zap_CNT();
        zapn_EXP(3);
        poke_EXP(0, nil);
        return;
    }
    
    assert1(NULL, "Non-boolean type receiver for truth");
}

void CNT_while_true()
{
    Optr self = peek_EXP(2);
    push_CNT(check_while_true);
    poke_EXP(0, nil);
    push_EXP(self);
    BlockClosure_apply((BlockClosure)self, 0);
}

/* ========================================================================= */

NATIVE1(BlockClosure_whileTrue_)
    push_CNT(while_true);
    push_CNT(check_while_true);
    push_EXP(nil);
    push_EXP(self);
    BlockClosure_apply((BlockClosure)self, 0);
}

NATIVE(BlockClosure_apply_)
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, argc);
}

NATIVE0(BlockClosure_numArgs) 
    RETURN_FROM_NATIVE(new_SmallInt(((BlockClosure) self)->code->params->size));
}

NATIVE1(BlockClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);

    long pos = 0;
    while(pos < args->size) {
        push_EXP(args->values[pos]);
        pos++;
    }
    
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_BlockClosure()
{
    Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_blockclosureValue_message_, NM_BlockClosure_apply_);
    store_native(natives, SMB_blockclosureValueWithArguments_message_,
                          NM_BlockClosure_valueWithArguments_);
    natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_numArgs, NM_BlockClosure_numArgs);
    store_native(natives, new_Symbol_cached(L"whileTrue:"), NM_BlockClosure_whileTrue_);
}
