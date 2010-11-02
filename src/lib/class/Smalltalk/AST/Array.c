#include <lib/class/Smalltalk/AST/Array.h>


Optr layout_Smalltalk_AST_Array_Class_class;
Optr slot_Smalltalk_AST_Array_literals;
Optr layout_Smalltalk_AST_Array;


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15164 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15165 = new_Send((Optr)PSend15164, SMB_isEmpty, 0);
    Array PThreadedCode15163 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15164, (Optr)&t_send0, (Optr)PSend15165, (Optr)&t_method_return);
    Method PMethod15162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15163, 1, PSend15165);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15162, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15167 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15170 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15172 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15176 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15175 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15176, (Optr)&t_block_return);
    Block PBlock15174 = new_Block_with(empty_Array, empty_Array, PThreadedCode15175, 1, PSend15176);
    // ifFalse:. 
    Send PSend15173 = new_Send((Optr)PSuper15172, SMB_ifFalse_, 1, (Optr)PBlock15174);
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15177 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15178 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15179 = new_Send((Optr)PSend15177, SMB__equals_, 1, (Optr)PSend15178);
    // escape:. 
    Send PSend15183 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15182 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15183, (Optr)&t_block_return);
    Block PBlock15181 = new_Block_with(empty_Array, empty_Array, PThreadedCode15182, 1, PSend15183);
    // ifFalse:. 
    Send PSend15180 = new_Send((Optr)PSend15179, SMB_ifFalse_, 1, (Optr)PBlock15181);
    Array PThreadedCode15171 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15172, (Optr)&t_send_ifFalse_, (Optr)PSend15173, (Optr)PBlock15174, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15177, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15178, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_send_ifFalse_, (Optr)PSend15180, (Optr)PBlock15181, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15169 = new_Block_with(PArray15170, empty_Array, PThreadedCode15171, 3, PSend15173, PSend15180, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15184 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15169);
    Array PThreadedCode15168 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15169, (Optr)&t_send1, (Optr)PSend15184, (Optr)&t_method_return);
    Method PMethod15166 = new_Method_with(PArray15167, empty_Array, empty_Array, PThreadedCode15168, 1, PSend15184);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15166, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15186 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15188 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15187 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15188, (Optr)&t_method_return);
    Method PMethod15185 = new_Method_with(PArray15186, empty_Array, empty_Array, PThreadedCode15187, 1, PSend15188);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15185, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_literals() {
    Symbol SMB_literals = new_Symbol(L"literals");
    Array PThreadedCode15190 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15190, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15189, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals, MC_SMB_literals);
}


static void init_SMB_literals_() {
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15192 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15194 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15194, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15191 = new_Method_with(PArray15192, empty_Array, empty_Array, PThreadedCode15193, 2, PAssign15194, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15191, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals_, MC_SMB_literals_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_literals = new_Symbol(L"literals");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_literals_Const = new_Constant((Optr)SMB_literals);
    // with:. 
    Send PSend15197 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15197, (Optr)&t_method_return);
    Method PMethod15195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15196, 1, PSend15197);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15195, HEADER(Smalltalk_AST_Array_Class));
    store_method(HEADER(Smalltalk_AST_Array_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTArray_layout() {
    layout_Smalltalk_AST_Array_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Array = new_Symbol(L"Array");
    slot_Smalltalk_AST_Array_literals = (Optr)new_Slot(0, L"literals");
    layout_Smalltalk_AST_Array = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Array)->values[0] = slot_Smalltalk_AST_Array_literals; // literals 
    Smalltalk_AST_Array_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Array_Class_class);
    Smalltalk_AST_Array_Class->layout = layout_Smalltalk_AST_Array;
    Smalltalk_AST_Array_Class->name = SMB_Array;
    
}

void init_Smalltalk_AST_ASTArray_methods() {
    init_SMB_isEmpty();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_literals();
    init_SMB_literals_();
    init_class_SMB_astSelectors();
    
}