#include <lib/class/Kernel/AST/AbstractVariable.h>


Optr layout_Kernel_AST_AbstractVariable_Class_class;
Optr slot_Kernel_AST_AbstractVariable_name;
Optr layout_Kernel_AST_AbstractVariable;


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4717 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend4720 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign4719 = new_Assign((Optr)slot_Kernel_AST_AbstractVariable_name, (Optr)PSend4720);
    Array PThreadedCode4718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign4719, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4720, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4716 = new_Method_with(PArray4717, empty_Array, empty_Array, PThreadedCode4718, 2, PAssign4719, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod4716, Kernel_AST_AbstractVariable_Class);
    store_method(Kernel_AST_AbstractVariable_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4722 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper4724 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // <<. 
    Send PSend4726 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4725_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend4727 = new_Send((Optr)self, SMB_name, 0);
    // printOn:. 
    Send PSend4728 = new_Send((Optr)PSend4727, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode4723 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper4724, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend4726, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4727, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4728, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4721 = new_Method_with(PArray4722, empty_Array, empty_Array, PThreadedCode4723, 4, PSuper4724, PSend4726, PSend4728, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4721, Kernel_AST_AbstractVariable_Class);
    store_method(Kernel_AST_AbstractVariable_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray4730 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    // assignVariable:to:. 
    Send PSend4732 = new_Send((Optr)VAR_visitor_0_0, SMB_assignVariable_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode4731 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend4732, (Optr)&t_method_return);
    Method PMethod4729 = new_Method_with(PArray4730, empty_Array, empty_Array, PThreadedCode4731, 1, PSend4732);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod4729, Kernel_AST_AbstractVariable_Class);
    store_method(Kernel_AST_AbstractVariable_Class, SMB_assignFor_to_, MC_SMB_assignFor_to_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode4734 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractVariable_name, (Optr)&t_method_return);
    Method PMethod4733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4734, 1, slot_Kernel_AST_AbstractVariable_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod4733, Kernel_AST_AbstractVariable_Class);
    store_method(Kernel_AST_AbstractVariable_Class, SMB_name, MC_SMB_name);
}

void init_Kernel_AST_PAbstractVariable_layout() {
    layout_Kernel_AST_AbstractVariable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_AbstractVariable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_AbstractVariable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_AbstractVariable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_AbstractVariable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_AbstractVariable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractVariable = new_Symbol(L"AbstractVariable");
    slot_Kernel_AST_AbstractVariable_name = (Optr)new_Slot(0, L"name");
    layout_Kernel_AST_AbstractVariable = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Kernel_AST_AbstractVariable)->values[0] = slot_Kernel_AST_AbstractVariable_name; // name 
    Kernel_AST_AbstractVariable_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_AbstractVariable_Class_class);
    Kernel_AST_AbstractVariable_Class->layout = layout_Kernel_AST_AbstractVariable;
    Kernel_AST_AbstractVariable_Class->name = SMB_AbstractVariable;
    
}

void init_Kernel_AST_PAbstractVariable_methods() {
    init_SMB_name_();
    init_SMB_printOn_();
    init_SMB_assignFor_to_();
    init_SMB_name();
    
}