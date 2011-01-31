#ifndef KERNEL_INTERPRETER_CONTEXT_H
#define KERNEL_INTERPRETER_CONTEXT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Context {
    Header              header;
    Raw                 program_counter;
    Object              closure;
    Context             home_context;
    Context             return_context;
    Object              self;
    Object              locals[];
};

extern Class MethodContext_class;
extern Class BlockContext_class;

/* ======================================================================= */

extern Context new_BlockContext(uns_int size);
extern Context new_MethodContext(uns_int size);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_CONTEXT_H