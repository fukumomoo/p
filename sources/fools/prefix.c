#include <assert.h>
#include <model.h>
#include <ast.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <scheme_natives.h>
#include <print.h>

#define eval_in_scope(input, env, output)\
    { \
        context_object make_eval_context(ci, input, env);\
        build_return(ci, rc);\
        transfer(ci);\
        output = return_value(rc);\
    }


int main () {
    bootstrap();
    bootstrap_scheme();

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

/* Generated code */
