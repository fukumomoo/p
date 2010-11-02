#include <lib/class/Collection/Benchmark/Set.h>


Optr layout_Collection_Benchmark_Set_Class_class;
Optr layout_Collection_Benchmark_Set;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Super PSuper7394 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_setSize = new_Symbol(L"setSize");
    // setSize. 
    Send PSend7397 = new_Send((Optr)self, SMB_setSize, 0);
    // new:. 
    Send PSend7396 = new_Send((Optr)Set_classReference, SMB_new_, 1, (Optr)PSend7397);
    Assign PAssign7395 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)PSend7396);
    // setSize. 
    Send PSend7398 = new_Send((Optr)self, SMB_setSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7400 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7402 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7403 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7402);
    Array PThreadedCode7401 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7402, (Optr)&t_send1, (Optr)PSend7403, (Optr)&t_method_return);
    Block PBlock7399 = new_Block_with(PArray7400, empty_Array, PThreadedCode7401, 1, PSend7403);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7404 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7398, (Optr)PBlock7399);
    Array PThreadedCode7393 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7394, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7395, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7397, (Optr)&t_send1, (Optr)PSend7396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7398, (Optr)&t_push_closure, (Optr)PBlock7399, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7404, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7393, 4, PSuper7394, PAssign7395, PSend7404, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7392, Collection_Benchmark_Set_Class);
    store_method(Collection_Benchmark_Set_Class, SMB_setUp, MC_SMB_setUp);
}

void init_Collection_Benchmark_PBSet_layout() {
    layout_Collection_Benchmark_Set_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Benchmark_Set_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Benchmark_Set_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Benchmark_Set_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Benchmark_Set_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Benchmark_Set_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Set = new_Symbol(L"Set");
    layout_Collection_Benchmark_Set = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Collection_Benchmark_Set)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Collection_Benchmark_Set)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Collection_Benchmark_Set)->values[2] = slot_PBenchmark_Collection_Set_AbstractSet_set; // set 
    ((Array)layout_Collection_Benchmark_Set)->values[3] = slot_PBenchmark_Collection_Set_AbstractSet_setSize; // setSize 
    Collection_Benchmark_Set_Class = (Class)new_Class(PBenchmark_Collection_Set_AbstractSet_Class, layout_Collection_Benchmark_Set_Class_class);
    Collection_Benchmark_Set_Class->layout = layout_Collection_Benchmark_Set;
    Collection_Benchmark_Set_Class->name = SMB_Set;
    
}

void init_Collection_Benchmark_PBSet_methods() {
    init_SMB_setUp();
    
}