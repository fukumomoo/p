#include <lib/class/PEG/TerminalChoiceStrongTimes.h>


Optr layout_PEG_TerminalChoiceStrongTimes_Class_class;
Optr layout_PEG_TerminalChoiceStrongTimes;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19556 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    // pushAllIn:. 
    Send PSend19558 = new_Send((Optr)VAR_input_0_0, SMB_pushAllIn_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19557 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19558, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19555 = new_Method_with(PArray19556, empty_Array, empty_Array, PThreadedCode19557, 2, PSend19558, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19555, PEG_TerminalChoiceStrongTimes_Class);
    store_method(PEG_TerminalChoiceStrongTimes_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19560 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    // scanAllIn:. 
    Send PSend19562 = new_Send((Optr)VAR_input_0_0, SMB_scanAllIn_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19561 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19562, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19559 = new_Method_with(PArray19560, empty_Array, empty_Array, PThreadedCode19561, 2, PSend19562, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19559, PEG_TerminalChoiceStrongTimes_Class);
    store_method(PEG_TerminalChoiceStrongTimes_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGTerminalChoiceStrongTimes_layout() {
    layout_PEG_TerminalChoiceStrongTimes_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_TerminalChoiceStrongTimes_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_TerminalChoiceStrongTimes_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_TerminalChoiceStrongTimes_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_TerminalChoiceStrongTimes_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_TerminalChoiceStrongTimes_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TerminalChoiceStrongTimes = new_Symbol(L"TerminalChoiceStrongTimes");
    layout_PEG_TerminalChoiceStrongTimes = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_TerminalChoiceStrongTimes)->values[0] = slot_PEG_Terminal_terminal; // terminal 
    PEG_TerminalChoiceStrongTimes_Class = (Class)new_Class(PEG_TerminalChoice_Class, layout_PEG_TerminalChoiceStrongTimes_Class_class);
    PEG_TerminalChoiceStrongTimes_Class->layout = layout_PEG_TerminalChoiceStrongTimes;
    PEG_TerminalChoiceStrongTimes_Class->name = SMB_TerminalChoiceStrongTimes;
    
}

void init_PEG_PEGTerminalChoiceStrongTimes_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}