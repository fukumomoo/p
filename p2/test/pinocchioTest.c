#include <pinocchio.h>
#include <unistd.h> 
#include <test/pinocchioTest.h>
#include <test/pinocchioTest.hi>

#ifdef __linux
#include <stdio_ext.h>
#endif

/* ========================================================================= */

jmp_buf Test_Continue;
int TEST_CASE_FAILED;

#define ERROR_BUFFER_LEN 1024*1024
char error_buffer[ERROR_BUFFER_LEN] = {0};
int out_pipe[2];
int saved_stdout;

void test_suite_begin(char * suiteName)
{
    TEST_CASE_FAILED = 0;
    #ifndef TEST_FAIL
    fflush(stdout);
    // redirect stdout
    if(pipe(out_pipe) != 0) {
        exit(1);
    }
    dup2(out_pipe[1], STDOUT_FILENO);
    close(out_pipe[1]);
    #endif // TEST_FAIL
}


void test_suite_end(char * suiteName)
{
    #ifdef __linux
        __fpurge(stdout);
    #endif
    #ifdef __APPLE__
        fpurge(stdout);
    #endif
    if (TEST_CASE_FAILED) {
        /* reads out contents of pipe to the error_buffer */
        read(out_pipe[0], error_buffer, ERROR_BUFFER_LEN);
        dup2(saved_stdout, STDOUT_FILENO);
        printf("\033[31m===================================================================\033[0m\n");
        printf(">>> \033[31m%s\033[0m \033[100D\033[60C[\033[31mERROR\033[0m]\n", suiteName);
        printf("%s", error_buffer);
        printf("<<< \033[31m%s\033[0m\n", suiteName);
        printf("\033[31m===================================================================\033[0m\n");
    } else {
        dup2(saved_stdout, STDOUT_FILENO);
        printf("%s \033[100D\033[60C[\033[32mDONE\033[0m]\n", suiteName);
    }
}

void init_Exception_Handling()
{
    // save the default stdout
    saved_stdout = dup(STDOUT_FILENO);
    
    #ifndef TEST_FAIL
    if(setjmp(Assert_Fail)) {
        printf("Test Failed\n");
        TEST_CASE_FAILED = 1;
        IN_EVAL = 0;
        longjmp(Test_Continue, 1);
    }
    #endif // TEST_FAIL
}


/* ========================================================================= */

Object Eval_SendConst(Object self, Type_Symbol symbol, Type_Array args) 
{
    return (Object)Eval((Object)new_AST_Send((Object)self, (Object)symbol, args));
}

Object Eval_Send(Object self, Type_Symbol symbol, Type_Array args) 
{
    AST_Constant self_const = new_AST_Constant(self);
    int i;
    for (i=0; i<args->size->value; i++) {
        args->values[i] = (Object)new_AST_Constant(args->values[i]);
    }
    return Eval_SendConst((Object)self_const, symbol, args);
}

Object Eval_Send0(Object self, Type_Symbol symbol)
{
    return Eval_Send(self, symbol, Empty_Type_Array);
}

Object Eval_Send1(Object self, Type_Symbol symbol, Object arg)
{
    return Eval_Send(self, symbol, new_Type_Array_With(1, arg));
}

/* ========================================================================= */

void run_tests()
{
    #include <test/pinocchioTest.ci>
}
