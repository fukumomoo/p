#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19640 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19640, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19639, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19644 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19643 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19644);
    Array PThreadedCode19642 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19643, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19644, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19642, 2, PAssign19643, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19641, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19648 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19647 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19648);
    Array PThreadedCode19646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19647, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19648, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19646, 2, PAssign19647, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19645, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19650 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19651 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19654 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19653 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19654);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19655 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19656 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19657 = new_Send((Optr)PSend19655, SMB__equals_, 1, (Optr)PSend19656);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19661 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19663 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19665 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19666 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19665);
    Array PThreadedCode19664 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19665, (Optr)&t_send1, (Optr)PSend19666, (Optr)&t_method_return);
    Block PBlock19662 = new_Block_with(PArray19663, empty_Array, PThreadedCode19664, 1, PSend19666);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19667 = new_Send((Optr)PSend19661, SMB_do_, 1, (Optr)PBlock19662);
    Array PThreadedCode19660 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19661, (Optr)&t_push_closure, (Optr)PBlock19662, (Optr)&t_send1, (Optr)PSend19667, (Optr)&t_block_return);
    Block PBlock19659 = new_Block_with(empty_Array, empty_Array, PThreadedCode19660, 1, PSend19667);
    // asChildParser. 
    Send PSend19670 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19671 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19670);
    Array PThreadedCode19669 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19670, (Optr)&t_send1, (Optr)PSend19671, (Optr)&t_block_return);
    Block PBlock19668 = new_Block_with(empty_Array, empty_Array, PThreadedCode19669, 1, PSend19671);
    // ifTrue:ifFalse:. 
    Send PSend19658 = new_Send((Optr)PSend19657, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19659, (Optr)PBlock19668);
    Array PThreadedCode19652 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19653, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19655, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19656, (Optr)&t_send1, (Optr)PSend19657, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19658, (Optr)PBlock19659, (Optr)PBlock19668, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19649 = new_Method_with(PArray19650, PArray19651, empty_Array, PThreadedCode19652, 3, PAssign19653, PSend19658, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19649, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19673 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19674 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19677 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19680 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19679 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19680);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19683 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19682 = new_Send((Optr)PSend19683, SMB_position, 0);
    Assign PAssign19681 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19682);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19684 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19685 = new_Send((Optr)PSend19684, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19689 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19689, (Optr)&t_block_return);
    Block PBlock19687 = new_Block_with(empty_Array, empty_Array, PThreadedCode19688, 1, PSend19689);
    // ifFalse:. 
    Send PSend19686 = new_Send((Optr)PSend19685, SMB_ifFalse_, 1, (Optr)PBlock19687);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19690 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19692 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19694 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19695 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19696 = new_Send((Optr)PSend19695, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19700 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19701 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19702 = new_Send((Optr)PSend19701, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19703 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19699 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19701, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19703, (Optr)&t_block_return);
    Block PBlock19698 = new_Block_with(empty_Array, empty_Array, PThreadedCode19699, 3, PSend19700, PSend19702, PSend19703);
    // ifFalse:. 
    Send PSend19697 = new_Send((Optr)PSend19696, SMB_ifFalse_, 1, (Optr)PBlock19698);
    Array PThreadedCode19693 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19694, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19695, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19696, (Optr)&t_send_ifFalse_, (Optr)PSend19697, (Optr)PBlock19698, (Optr)&t_method_return);
    Block PBlock19691 = new_Block_with(PArray19692, empty_Array, PThreadedCode19693, 2, PSend19694, PSend19697);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19704 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19690, (Optr)PBlock19691);
    Array PThreadedCode19678 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19679, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19681, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19683, (Optr)&t_send0, (Optr)PSend19682, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19684, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19685, (Optr)&t_send_ifFalse_, (Optr)PSend19686, (Optr)PBlock19687, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19690, (Optr)&t_push_closure, (Optr)PBlock19691, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19704, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19676 = new_Block_with(PArray19677, empty_Array, PThreadedCode19678, 5, PAssign19679, PAssign19681, PSend19686, PSend19704, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19705 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19676);
    Array PThreadedCode19675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19676, (Optr)&t_send1, (Optr)PSend19705, (Optr)&t_method_return);
    Method PMethod19672 = new_Method_with(PArray19673, PArray19674, empty_Array, PThreadedCode19675, 1, PSend19705);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19672, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19707 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19708 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19711 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19714 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19713 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19714);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19715 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19716 = new_Send((Optr)PSend19715, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19720 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19719 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19720, (Optr)&t_block_return);
    Block PBlock19718 = new_Block_with(empty_Array, empty_Array, PThreadedCode19719, 1, PSend19720);
    // ifFalse:. 
    Send PSend19717 = new_Send((Optr)PSend19716, SMB_ifFalse_, 1, (Optr)PBlock19718);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19721 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19723 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19725 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19726 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19727 = new_Send((Optr)PSend19726, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19731 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19730 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19731, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19732, (Optr)&t_block_return);
    Block PBlock19729 = new_Block_with(empty_Array, empty_Array, PThreadedCode19730, 2, PSend19731, PSend19732);
    // ifFalse:. 
    Send PSend19728 = new_Send((Optr)PSend19727, SMB_ifFalse_, 1, (Optr)PBlock19729);
    Array PThreadedCode19724 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19725, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19726, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19727, (Optr)&t_send_ifFalse_, (Optr)PSend19728, (Optr)PBlock19729, (Optr)&t_method_return);
    Block PBlock19722 = new_Block_with(PArray19723, empty_Array, PThreadedCode19724, 2, PSend19725, PSend19728);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19733 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19721, (Optr)PBlock19722);
    Array PThreadedCode19712 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19713, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19714, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19715, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19716, (Optr)&t_send_ifFalse_, (Optr)PSend19717, (Optr)PBlock19718, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19721, (Optr)&t_push_closure, (Optr)PBlock19722, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19733, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19710 = new_Block_with(PArray19711, empty_Array, PThreadedCode19712, 4, PAssign19713, PSend19717, PSend19733, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19734 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19710);
    Array PThreadedCode19709 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19710, (Optr)&t_send1, (Optr)PSend19734, (Optr)&t_method_return);
    Method PMethod19706 = new_Method_with(PArray19707, PArray19708, empty_Array, PThreadedCode19709, 1, PSend19734);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19706, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGSequenceExpression_layout() {
    layout_PEG_SequenceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SequenceExpression = new_Symbol(L"SequenceExpression");
    slot_PEG_SequenceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_SequenceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_SequenceExpression)->values[0] = slot_PEG_SequenceExpression_children; // children 
    PEG_SequenceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_SequenceExpression_Class_class);
    PEG_SequenceExpression_Class->layout = layout_PEG_SequenceExpression;
    PEG_SequenceExpression_Class->name = SMB_SequenceExpression;
    
}

void init_PEG_PEGSequenceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB__lt__and_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}