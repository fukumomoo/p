#include <system.h>

// iassign>>eval:
void inline iassign_eval() {
    context_object iassign_context = get_context();
    assert_argsize(iassign_context, 2);

    iassign_object iassign = header(iassign_context).iassign;

    debug("iassign>>eval:\n");
    
    object env = argument_at(iassign_context, 1);

    new_target(iassign_context, iassign->expression);

    context_object context = make_context((object)iassign->variable, 3);
    set_message(context, ASSIGN_IN);
    set_argument(context, 2, env);
    context->return_context = iassign_context->return_context;

    iassign_context->return_context = (object)context;

    debug("ret>>iassign>>eval:\n");
}

void iassign_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         iassign_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("iassign", selector);
}

// Object creation
iassign_object make_iassign(ivar_object variable, object expression) {
    iassign_object result   = NEW(struct assignment);
    result->variable        = variable;
    result->expression      = expression;
    header(result)          = (object)fools_system->iassign_class;
    return result;
}
