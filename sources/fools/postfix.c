
/* end of generated code */

    object scoped_main;
    eval_in_scope(lambda_1_x, env, scoped_main);

    assert(header(scoped_main.pointer).native_class ==
           fools_system->iscope_class);

    object const_scoped_main = (object)make_iconst(scoped_main);

    appcall_object maincall = make_appcall(const_scoped_main, 0);
    
    context_object make_eval_context(ci, maincall, env); 
    build_return(ci, rc);
    
    printf("------- Starting eval ------\n");
    transfer(ci);

    object result = return_value(rc);

    print_object(result);

    return 0;
}