#include <lib/class/PEG/ZeroOrMoreExpression.h>


Optr layout_PEG_ZeroOrMoreExpression_Class_class;
Optr slot_PEG_ZeroOrMoreExpression_child;
Optr layout_PEG_ZeroOrMoreExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19273 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19276 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19275 = new_Assign((Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)PSend19276);
    Array PThreadedCode19274 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19275, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19272 = new_Method_with(PArray19273, empty_Array, empty_Array, PThreadedCode19274, 2, PAssign19275, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19272, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19278 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19278, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19277, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19280 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19284 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19285 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19283 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19284, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19285, (Optr)&t_block_return);
    Block PBlock19282 = new_Block_with(empty_Array, empty_Array, PThreadedCode19283, 2, PSend19284, PSend19285);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19286 = new_Send((Optr)PBlock19282, SMB_whileTrue, 0);
    Array PThreadedCode19281 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19282, (Optr)&t_send0, (Optr)PSend19286, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19279 = new_Method_with(PArray19280, empty_Array, empty_Array, PThreadedCode19281, 2, PSend19286, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19279, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_child() {
    Symbol SMB_child = new_Symbol(L"child");
    Array PThreadedCode19288 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_method_return);
    Method PMethod19287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19288, 1, slot_PEG_ZeroOrMoreExpression_child);
    
    MethodClosure MC_SMB_child = new_MethodClosure((Method)PMethod19287, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_child, MC_SMB_child);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19290 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19294 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19295 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19293 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19294, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19295, (Optr)&t_block_return);
    Block PBlock19292 = new_Block_with(empty_Array, empty_Array, PThreadedCode19293, 2, PSend19294, PSend19295);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19296 = new_Send((Optr)PBlock19292, SMB_whileTrue, 0);
    Array PThreadedCode19291 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19292, (Optr)&t_send0, (Optr)PSend19296, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19289 = new_Method_with(PArray19290, empty_Array, empty_Array, PThreadedCode19291, 2, PSend19296, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19289, PEG_ZeroOrMoreExpression_Class);
    store_method(PEG_ZeroOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGZeroOrMoreExpression_layout() {
    layout_PEG_ZeroOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ZeroOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ZeroOrMoreExpression = new_Symbol(L"ZeroOrMoreExpression");
    slot_PEG_ZeroOrMoreExpression_child = (Optr)new_Slot(0, L"child");
    layout_PEG_ZeroOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ZeroOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_ZeroOrMoreExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_ZeroOrMoreExpression_Class_class);
    PEG_ZeroOrMoreExpression_Class->layout = layout_PEG_ZeroOrMoreExpression;
    PEG_ZeroOrMoreExpression_Class->name = SMB_ZeroOrMoreExpression;
    
}

void init_PEG_PEGZeroOrMoreExpression_methods() {
    init_SMB_initialize_();
    init_SMB_optional();
    init_SMB_parseOn_();
    init_SMB_child();
    init_SMB_omitMatch_();
    
}