#include <lib/class/Bridge/Test/SuperClassTestClass.h>


Optr slot_Bridge_Test_SuperClassTestClass_Class_class_a;
Optr slot_Bridge_Test_SuperClassTestClass_Class_class_b;
Optr layout_Bridge_Test_SuperClassTestClass_Class_class;
Optr slot_Bridge_Test_SuperClassTestClass_a;
Optr layout_Bridge_Test_SuperClassTestClass;


static void init_SMB_a_() {
    /*
    a: anObject
// 	a := anObject
    */
    Symbol SMB_a_ = new_Symbol(L"a:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24306 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24308 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24307 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24308, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24305 = new_Method_with(PArray24306, empty_Array, empty_Array, PThreadedCode24307, 2, PAssign24308, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24305, Bridge_Test_SuperClassTestClass_Class);
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_a_, MC_SMB_a_);
}


static void init_SMB_a() {
    /*
    a
// 	^ a
    */
    Symbol SMB_a = new_Symbol(L"a");
    Array PThreadedCode24310 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)&t_method_return);
    Method PMethod24309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24310, 1, slot_Bridge_Test_SuperClassTestClass_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24309, Bridge_Test_SuperClassTestClass_Class);
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_a, MC_SMB_a);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_10 = new_SmallInt(10);
    Array PThreadedCode24312 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_method_return);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Method PMethod24311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24312, 1, int_10_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod24311, Bridge_Test_SuperClassTestClass_Class);
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_test, MC_SMB_test);
}


static void init_class_SMB_a() {
    Symbol SMB_a = new_Symbol(L"a");
    Array PThreadedCode24314 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)&t_method_return);
    Method PMethod24313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24314, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24313, HEADER(Bridge_Test_SuperClassTestClass_Class));
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_a, MC_SMB_a);
}


static void init_class_SMB_a_() {
    Symbol SMB_a_ = new_Symbol(L"a:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24316 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24318 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24317 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24318, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24315 = new_Method_with(PArray24316, empty_Array, empty_Array, PThreadedCode24317, 2, PAssign24318, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24315, HEADER(Bridge_Test_SuperClassTestClass_Class));
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_a_, MC_SMB_a_);
}


static void init_class_SMB_b() {
    Symbol SMB_b = new_Symbol(L"b");
    Array PThreadedCode24320 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)&t_method_return);
    Method PMethod24319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24320, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_b);
    
    MethodClosure MC_SMB_b = new_MethodClosure((Method)PMethod24319, HEADER(Bridge_Test_SuperClassTestClass_Class));
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_b, MC_SMB_b);
}


static void init_class_SMB_b_() {
    Symbol SMB_b_ = new_Symbol(L"b:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24322 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24324 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24324, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24321 = new_Method_with(PArray24322, empty_Array, empty_Array, PThreadedCode24323, 2, PAssign24324, self);
    
    MethodClosure MC_SMB_b_ = new_MethodClosure((Method)PMethod24321, HEADER(Bridge_Test_SuperClassTestClass_Class));
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_b_, MC_SMB_b_);
}

void init_Bridge_Test_SuperClassTestClass_layout() {
    slot_Bridge_Test_SuperClassTestClass_Class_class_a = (Optr)new_Slot(5, L"a");
    slot_Bridge_Test_SuperClassTestClass_Class_class_b = (Optr)new_Slot(6, L"b");
    layout_Bridge_Test_SuperClassTestClass_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[5] = slot_Bridge_Test_SuperClassTestClass_Class_class_a; // a 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[6] = slot_Bridge_Test_SuperClassTestClass_Class_class_b; // b 
    
    Symbol  SMB_SuperClassTestClass = new_Symbol(L"SuperClassTestClass");
    slot_Bridge_Test_SuperClassTestClass_a = (Optr)new_Slot(0, L"a");
    layout_Bridge_Test_SuperClassTestClass = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Bridge_Test_SuperClassTestClass)->values[0] = slot_Bridge_Test_SuperClassTestClass_a; // a 
    Bridge_Test_SuperClassTestClass_Class = (Class)new_Class(Object_Class, layout_Bridge_Test_SuperClassTestClass_Class_class);
    Bridge_Test_SuperClassTestClass_Class->layout = layout_Bridge_Test_SuperClassTestClass;
    Bridge_Test_SuperClassTestClass_Class->name = SMB_SuperClassTestClass;
    
}

void init_Bridge_Test_SuperClassTestClass_methods() {
    init_SMB_a_();
    init_SMB_a();
    init_SMB_test();
    init_class_SMB_a();
    init_class_SMB_a_();
    init_class_SMB_b();
    init_class_SMB_b_();
    
}