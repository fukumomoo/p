#include <lib/class/Concurrency/Semaphore.h>


Optr layout_Concurrency_Semaphore_Class_class;
Optr slot_Concurrency_Semaphore_lock;
Optr layout_Concurrency_Semaphore;


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24610 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_v_0_1 = new_Variable_named(L"v", 0);
    Array PArray24611 = new_Array_with(1, (Optr)VAR_v_0_1);
    Symbol SMB_testAndSet = new_Symbol(L"testAndSet");
    // testAndSet. 
    Send PSend24615 = new_Send((Optr)slot_Concurrency_Semaphore_lock, SMB_testAndSet, 0);
    Array PThreadedCode24614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Concurrency_Semaphore_lock, (Optr)&t_send0, (Optr)PSend24615, (Optr)&t_block_return);
    Block PBlock24613 = new_Block_with(empty_Array, empty_Array, PThreadedCode24614, 1, PSend24615);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend24618 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_yield = new_Symbol(L"yield");
    // yield. 
    Send PSend24619 = new_Send((Optr)PSend24618, SMB_yield, 0);
    Array PThreadedCode24617 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend24618, (Optr)&t_send0, (Optr)PSend24619, (Optr)&t_block_return);
    Block PBlock24616 = new_Block_with(empty_Array, empty_Array, PThreadedCode24617, 1, PSend24619);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend24620 = new_Send((Optr)PBlock24613, SMB_whileTrue_, 1, (Optr)PBlock24616);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24624 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Assign PAssign24623 = new_Assign((Optr)VAR_v_0_1, (Optr)PSend24624);
    Array PThreadedCode24622 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign24623, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend24624, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24621 = new_Block_with(empty_Array, empty_Array, PThreadedCode24622, 1, PAssign24623);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24627 = new_Send((Optr)slot_Concurrency_Semaphore_lock, SMB_value_, 1, (Optr)false_Const);
    Array PThreadedCode24626 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Concurrency_Semaphore_lock, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend24627, (Optr)&t_block_return);
    Block PBlock24625 = new_Block_with(empty_Array, empty_Array, PThreadedCode24626, 1, PSend24627);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend24628 = new_Send((Optr)PBlock24621, SMB_ensure_, 1, (Optr)PBlock24625);
    Array PThreadedCode24612 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_closure, (Optr)PBlock24613, (Optr)&t_push_closure, (Optr)PBlock24616, (Optr)&t_send1, (Optr)PSend24620, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24621, (Optr)&t_push_closure, (Optr)PBlock24625, (Optr)&t_send1, (Optr)PSend24628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_1, (Optr)&t_method_return);
    Method PMethod24609 = new_Method_with(PArray24610, PArray24611, empty_Array, PThreadedCode24612, 3, PSend24620, PSend24628, VAR_v_0_1);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod24609, Concurrency_Semaphore_Class);
    store_method(Concurrency_Semaphore_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_lock() {
    Symbol SMB_lock = new_Symbol(L"lock");
    Array PThreadedCode24630 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Concurrency_Semaphore_lock, (Optr)&t_method_return);
    Method PMethod24629 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24630, 1, slot_Concurrency_Semaphore_lock);
    
    MethodClosure MC_SMB_lock = new_MethodClosure((Method)PMethod24629, Concurrency_Semaphore_Class);
    store_method(Concurrency_Semaphore_Class, SMB_lock, MC_SMB_lock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24634 = new_Send((Optr)PAtomicBoolean_classReference, SMB_new, 0);
    Assign PAssign24633 = new_Assign((Optr)slot_Concurrency_Semaphore_lock, (Optr)PSend24634);
    Array PThreadedCode24632 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign24633, (Optr)&t_push_class_reference, (Optr)PAtomicBoolean_classReference, (Optr)&t_send0, (Optr)PSend24634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24632, 2, PAssign24633, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24631, Concurrency_Semaphore_Class);
    store_method(Concurrency_Semaphore_Class, SMB_initialize, MC_SMB_initialize);
}

void init_Concurrency_Semaphore_layout() {
    layout_Concurrency_Semaphore_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Concurrency_Semaphore_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Concurrency_Semaphore_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Concurrency_Semaphore_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Concurrency_Semaphore_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Concurrency_Semaphore_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Semaphore = new_Symbol(L"Semaphore");
    slot_Concurrency_Semaphore_lock = (Optr)new_Slot(0, L"lock");
    layout_Concurrency_Semaphore = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Concurrency_Semaphore)->values[0] = slot_Concurrency_Semaphore_lock; // lock 
    Concurrency_Semaphore_Class = (Class)new_Class(Object_Class, layout_Concurrency_Semaphore_Class_class);
    Class_set_superclass(Concurrency_Semaphore_Class, Object_Class);
    Concurrency_Semaphore_Class->layout = layout_Concurrency_Semaphore;
    HEADER(Concurrency_Semaphore_Class)->layout = layout_Concurrency_Semaphore_Class_class;
    Concurrency_Semaphore_Class->name = SMB_Semaphore;
    
}

void init_Concurrency_Semaphore_methods() {
    init_SMB_critical_();
    init_SMB_lock();
    init_SMB_initialize();
    
}