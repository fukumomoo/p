#include <pinocchio.h>
#include <bootstrap.h>
#include <locale.h>
#include <string.h>

Object start_send(void** code, Object receiver)
{
    Object * arg = alloca(sizeof(Object));
    arg[0] = receiver;
    return method_context( code, arg );
}

void pinocchio()
{
    RawArray code;

    code = new_RawArray(2, lookup_native(new_NativeName( L"SmallInteger", L"smaller")), 0);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"<"), code);

    code = new_RawArray(2, lookup_native(new_NativeName( L"SmallInteger", L"minus")), 0);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"-"), code);

    code = new_RawArray(2, lookup_native(new_NativeName( L"SmallInteger", L"plus")), 0);
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"+"), code);

    code = new_RawArray(57,
            &method_context, (uns_int)3,
            OP(self), (uns_int)0,
            OP(load_constant), new_SmallInteger(2), (uns_int)1, 
            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"<"), 
            OP(iftrue_iffalse), (uns_int)5, (uns_int)0,
            OP(return_constant), new_SmallInteger(1),
            
            OP(self), (uns_int)0,
            OP(load_constant), new_SmallInteger(2), (uns_int)1, 
            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"-"),
            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"fib"),

            OP(move), (uns_int)0, (uns_int)2,            

            OP(self), (uns_int)0,
            OP(load_constant), new_SmallInteger(1), (uns_int)1,
            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"-"),
            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"fib"),

            OP(move), (uns_int)2, (uns_int)1,

            OP(send), (uns_int)0, (uns_int)0, new_Symbol(L"+"),

            OP(return_result));

    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"fib"), code);

    SmallInteger integer = new_SmallInteger(34);

    SmallInteger result = (SmallInteger)start_send(code->data, (Object)integer);
}

Array get_args(int argc, const char ** argv)
{
    Array args = new_Array(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        String sarg = raw_String(length);
        assert1(
            mbstowcs(sarg->character, arg, length) != -1,
            "failed to parse arguments");
        args->value[i-1] = (Object)sarg;
    }
    return args;
}

#ifndef UNIT_TESTING

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    pinocchio_bootstrap();

    //Array args = get_args(argc, argv);
    pinocchio();
    return EXIT_SUCCESS;
}

#endif
