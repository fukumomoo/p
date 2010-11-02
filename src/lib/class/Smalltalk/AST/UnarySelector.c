#include <lib/class/Smalltalk/AST/UnarySelector.h>


Optr layout_Smalltalk_AST_UnarySelector_Class_class;
Optr layout_Smalltalk_AST_UnarySelector;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15016 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    // visitUnarySelector:. 
    Send PSend15018 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnarySelector_, 1, (Optr)self);
    Array PThreadedCode15017 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15018, (Optr)&t_method_return);
    Method PMethod15015 = new_Method_with(PArray15016, empty_Array, empty_Array, PThreadedCode15017, 1, PSend15018);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15015, Smalltalk_AST_UnarySelector_Class);
    store_method(Smalltalk_AST_UnarySelector_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTUnarySelector_layout() {
    layout_Smalltalk_AST_UnarySelector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnarySelector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnarySelector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnarySelector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnarySelector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnarySelector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnarySelector = new_Symbol(L"UnarySelector");
    layout_Smalltalk_AST_UnarySelector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_UnarySelector)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_UnarySelector_Class = (Class)new_Class(Smalltalk_AST_Selector_Class, layout_Smalltalk_AST_UnarySelector_Class_class);
    Smalltalk_AST_UnarySelector_Class->layout = layout_Smalltalk_AST_UnarySelector;
    Smalltalk_AST_UnarySelector_Class->name = SMB_UnarySelector;
    
}

void init_Smalltalk_AST_ASTUnarySelector_methods() {
    init_SMB_accept_();
    
}