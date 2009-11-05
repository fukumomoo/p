#ifndef RUNTIME_BLOCKCONTEXT_H
#define RUNTIME_BLOCKCONTEXT_H

#include <pinocchio.h>

/* ========================================================================= */

#define IS_CONTEXT(env) (HEADER(env) == (Object)Runtime_BlockContext_Class || \
                         HEADER(env) == (Object)Runtime_MethodContext_Class)

/* ========================================================================= */

#define RUNTIME_BLOCKCONTEXT_SIZE 5
#define RUNTIME_BLOCKCONTEXT_VARS\
    L"pc", L"closure", L"values", L"homeContext", L"parent"

struct Runtime_BlockContext_t {
    uns_int                 pc;
    Type_Array              values;
    Runtime_BlockClosure    closure;
    Runtime_MethodContext   home_context;
    Runtime_BlockContext    parent;
    struct Type_Array_t     locals;
};

CREATE_INITIALIZERS(Runtime_BlockContext)

extern Runtime_BlockContext new_Runtime_BlockContext(Runtime_BlockClosure block);

/* ========================================================================= */

extern Object Runtime_BlockContext_lookup(
    Runtime_BlockContext self, uns_int index, Object key);
extern void Runtime_BlockContext_assign(
    Runtime_BlockContext self, uns_int index, Object key, Object value);

/* ========================================================================= */

extern Runtime_BlockContext current_env();
extern void set_env(Object env);

/* ========================================================================= */

#endif // RUNTIME_BLOCKCONTEXT_H
