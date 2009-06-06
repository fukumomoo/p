#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>
#include <bootstrap.h>
#include <assert.h>
#include <stdio.h>

#include <debug.h>

#include <system/env.h>
#include <system/iassign.h>
#include <system/icall.h>
#include <system/icapture.h>
#include <system/iconst.h>
#include <system/ilist.h>
#include <system/iscoped.h>
#include <system/ivar.h>
#include <system/shift.h>
#include <system/ifixed.h>
#include <system/ival.h>
#include <system/fallback.h>

#include <system/array.h>
#include <system/dict.h>
#include <system/string.h>

// Starting an evaluation thread.
extern object inline transfer();

// Meta-interpretation primitives.
extern void inline new_target(context_object context, object target);

// Convenience macros.
#define return_value(rc) argument_at(rc, 1)

#define accessor_for(cls, element)\
static void inline cls##_##element() {\
    debug(#cls">>"#element"\n");\
    context_object context = get_context();\
    return_from_context(context, context->self.cls->element);\
    debug("ret>>"#cls">>"#element"\n");\
}

#define make_eval_context(name, todo, environment)\
    name = make_context((object)todo, 1);\
    set_message(name, EVAL);\
    name->env = (object)environment;

#define eval_in_scope(input, env, output)\
    { \
        context_object make_eval_context(ci, input, env);\
        output = transfer();\
    }

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

#define dispatch_header(context, selector)\
    context_object context = get_context();\
    assert_argsize(context, 1);\
    object selector = message(context);

#define define_bootstrapping_class(type, messages)\
void type##_##class_dispatch() {\
    dispatch_header(context, selector);\
    messages;\
    new_target(context, context->self.ifixed->delegate);\
}\
void type##_##stub_class_dispatch() {\
    dispatch_header(context, selector);\
    messages;\
    if_selector(selector, SET_DISPATCH_DELEGATE, set_dispatch_delegate);\
    doesnotunderstand(#type"_stub_class", selector);\
}

#define with_pre_eval1(name, context, first, body)\
static void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first = argument_at(context, 1);\
    body;\
    debug("ret>>"#name"\n");\
}\
static void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 2);\
    push_eval_of(context, 1);\
    context->code = &name##_##do;\
}

#define with_pre_eval2(name, context, first, second, body)\
static void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first  = argument_at(context, 1);\
    object second = argument_at(context, 2);\
    body;\
    debug("ret>>"#name"\n");\
}\
static void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 3);\
    push_eval_of(context, 1);\
    push_eval_of(context, 2);\
    context->code = &name##_##do;\
}

#define with_pre_eval3(name, context, first, second, third, body)\
static void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first  = argument_at(context, 1);\
    object second = argument_at(context, 2);\
    object third = argument_at(context, 3);\
    body;\
    debug("ret>>"#name"\n");\
}\
static void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 4);\
    push_eval_of(context, 1);\
    push_eval_of(context, 2);\
    push_eval_of(context, 3);\
    context->code = &name##_##do;\
}

/* Globally used functions */
extern void pre_eval_env();
extern void doesnotunderstand(const char* class, object selector);

#endif
