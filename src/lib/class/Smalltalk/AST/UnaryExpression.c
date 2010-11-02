#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15020 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15022 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15022, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15019 = new_Method_with(PArray15020, empty_Array, empty_Array, PThreadedCode15021, 2, PAssign15022, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15019, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15024 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15024, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15023, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15026 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15029 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15031 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15035 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15034 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15035, (Optr)&t_block_return);
    Block PBlock15033 = new_Block_with(empty_Array, empty_Array, PThreadedCode15034, 1, PSend15035);
    // ifFalse:. 
    Send PSend15032 = new_Send((Optr)PSuper15031, SMB_ifFalse_, 1, (Optr)PBlock15033);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15036 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15037 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15038 = new_Send((Optr)PSend15036, SMB__equals_, 1, (Optr)PSend15037);
    // escape:. 
    Send PSend15042 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15041 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15042, (Optr)&t_block_return);
    Block PBlock15040 = new_Block_with(empty_Array, empty_Array, PThreadedCode15041, 1, PSend15042);
    // ifFalse:. 
    Send PSend15039 = new_Send((Optr)PSend15038, SMB_ifFalse_, 1, (Optr)PBlock15040);
    Array PThreadedCode15030 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15031, (Optr)&t_send_ifFalse_, (Optr)PSend15032, (Optr)PBlock15033, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15036, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15037, (Optr)&t_send1, (Optr)PSend15038, (Optr)&t_send_ifFalse_, (Optr)PSend15039, (Optr)PBlock15040, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15028 = new_Block_with(PArray15029, empty_Array, PThreadedCode15030, 3, PSend15032, PSend15039, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15043 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15028);
    Array PThreadedCode15027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15028, (Optr)&t_send1, (Optr)PSend15043, (Optr)&t_method_return);
    Method PMethod15025 = new_Method_with(PArray15026, empty_Array, empty_Array, PThreadedCode15027, 1, PSend15043);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15025, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15045 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15047 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15046 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15047, (Optr)&t_method_return);
    Method PMethod15044 = new_Method_with(PArray15045, empty_Array, empty_Array, PThreadedCode15046, 1, PSend15047);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15044, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15049 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15051 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15052 = new_Send((Optr)PSend15051, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15053 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15054 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15050 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15051, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15053, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15048 = new_Method_with(PArray15049, empty_Array, empty_Array, PThreadedCode15050, 4, PSend15052, PSend15053, PSuper15054, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15048, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15058 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15057 = new_Block_with(empty_Array, empty_Array, PThreadedCode15058, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15061 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15060 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15061, (Optr)&t_block_return);
    Block PBlock15059 = new_Block_with(empty_Array, empty_Array, PThreadedCode15060, 1, PSend15061);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15062 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15057, (Optr)PBlock15059);
    Array PThreadedCode15056 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15057, (Optr)&t_push_closure, (Optr)PBlock15059, (Optr)&t_send2, (Optr)PSend15062, (Optr)&t_method_return);
    Method PMethod15055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15056, 1, PSend15062);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15055, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTUnaryExpression_layout() {
    layout_Smalltalk_AST_UnaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnaryExpression = new_Symbol(L"UnaryExpression");
    slot_Smalltalk_AST_UnaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    layout_Smalltalk_AST_UnaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[1] = slot_Smalltalk_AST_UnaryExpression_receiver; // receiver 
    Smalltalk_AST_UnaryExpression_Class = (Class)new_Class(Smalltalk_AST_UnarySelector_Class, layout_Smalltalk_AST_UnaryExpression_Class_class);
    Smalltalk_AST_UnaryExpression_Class->layout = layout_Smalltalk_AST_UnaryExpression;
    Smalltalk_AST_UnaryExpression_Class->name = SMB_UnaryExpression;
    
}

void init_Smalltalk_AST_ASTUnaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_hasReturnExpression();
    
}