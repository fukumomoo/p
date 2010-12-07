#include <lib/class/Alias/Alias.h>


Optr layout_Alias_Alias_Class_class;
Optr slot_Alias_Alias_origin;
Optr slot_Alias_Alias_context;
Optr slot_Alias_Alias_value;
Optr layout_Alias_Alias;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21599 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21601 = new_Assign((Optr)slot_Alias_Alias_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21600 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21601, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21598 = new_Method_with(PArray21599, empty_Array, empty_Array, PThreadedCode21600, 2, PAssign21601, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod21598, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_origin() {
    Symbol SMB_origin = new_Symbol(L"origin");
    Array PThreadedCode21603 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_origin, (Optr)&t_method_return);
    Method PMethod21602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21603, 1, slot_Alias_Alias_origin);
    
    MethodClosure MC_SMB_origin = new_MethodClosure((Method)PMethod21602, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin, MC_SMB_origin);
}


static void init_SMB_alias_() {
    /*
    alias: anAlias
// 	^ self new alias: anAlias
    */
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21605 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Assign PAssign21607 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21609 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Assign PAssign21608 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)PSend21609);
    Array PThreadedCode21606 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21607, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21608, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend21609, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21604 = new_Method_with(PArray21605, empty_Array, empty_Array, PThreadedCode21606, 3, PAssign21607, PAssign21608, self);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21604, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_alias_, MC_SMB_alias_);
}


static void init_SMB_origin_() {
    Symbol SMB_origin_ = new_Symbol(L"origin:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21611 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21613 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21613, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21610 = new_Method_with(PArray21611, empty_Array, empty_Array, PThreadedCode21612, 2, PAssign21613, self);
    
    MethodClosure MC_SMB_origin_ = new_MethodClosure((Method)PMethod21610, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin_, MC_SMB_origin_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode21615 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_value, (Optr)&t_method_return);
    Method PMethod21614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21615, 1, slot_Alias_Alias_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod21614, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21617 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21619 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21618 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21619, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21616 = new_Method_with(PArray21617, empty_Array, empty_Array, PThreadedCode21618, 2, PAssign21619, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod21616, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21621 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21623 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21626 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21626_Const = new_Constant((Optr)string_21626);
    // <<. 
    Send PSend21627 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21626_Const);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend21628 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend21629 = new_Send((Optr)PSend21628, SMB_closure, 0);
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend21630 = new_Send((Optr)PSend21629, SMB_host, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21631 = new_Send((Optr)PSend21630, SMB_name, 0);
    // <<. 
    Send PSend21632 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21631);
    String string_21633 = new_String(L">>");
    Constant string_21633_Const = new_Constant((Optr)string_21633);
    // <<. 
    Send PSend21634 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21633_Const);
    // homeContext. 
    Send PSend21635 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    // closure. 
    Send PSend21636 = new_Send((Optr)PSend21635, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend21637 = new_Send((Optr)PSend21636, SMB_selector, 0);
    // <<. 
    Send PSend21638 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21637);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21639 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21625 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21626, (Optr)&t_send1, (Optr)PSend21627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21628, (Optr)&t_send0, (Optr)PSend21629, (Optr)&t_send0, (Optr)PSend21630, (Optr)&t_send0, (Optr)PSend21631, (Optr)&t_send1, (Optr)PSend21632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21633, (Optr)&t_send1, (Optr)PSend21634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21635, (Optr)&t_send0, (Optr)PSend21636, (Optr)&t_send0, (Optr)PSend21637, (Optr)&t_send1, (Optr)PSend21638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21639, (Optr)&t_block_return);
    Block PBlock21624 = new_Block_with(empty_Array, empty_Array, PThreadedCode21625, 5, PSend21627, PSend21632, PSend21634, PSend21638, PSend21639);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21640 = new_Send((Optr)slot_Alias_Alias_context, SMB_ifNotNil_, 1, (Optr)PBlock21624);
    Array PThreadedCode21622 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21623, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_push_closure, (Optr)PBlock21624, (Optr)&t_send1, (Optr)PSend21640, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21620 = new_Method_with(PArray21621, empty_Array, empty_Array, PThreadedCode21622, 3, PSuper21623, PSend21640, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21620, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode21642 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_method_return);
    Method PMethod21641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21642, 1, slot_Alias_Alias_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod21641, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context, MC_SMB_context);
}


static void init_class_SMB_alias_() {
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21644 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21646 = new_Send((Optr)self, SMB_new, 0);
    // alias:. 
    Send PSend21647 = new_Send((Optr)PSend21646, SMB_alias_, 1, (Optr)VAR_anAlias_0_0);
    Array PThreadedCode21645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21646, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send1, (Optr)PSend21647, (Optr)&t_method_return);
    Method PMethod21643 = new_Method_with(PArray21644, empty_Array, empty_Array, PThreadedCode21645, 1, PSend21647);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21643, HEADER(Alias_Alias_Class));
    store_method(HEADER(Alias_Alias_Class), SMB_alias_, MC_SMB_alias_);
}

void init_Alias_PAlias_layout() {
    layout_Alias_Alias_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Alias_Alias_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Alias_Alias_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Alias_Alias_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Alias_Alias_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Alias_Alias_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Alias = new_Symbol(L"Alias");
    slot_Alias_Alias_origin = (Optr)new_Slot(0, L"origin");
    slot_Alias_Alias_context = (Optr)new_Slot(1, L"context");
    slot_Alias_Alias_value = (Optr)new_Slot(2, L"value");
    layout_Alias_Alias = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Alias_Alias)->values[0] = slot_Alias_Alias_origin; // origin 
    ((Array)layout_Alias_Alias)->values[1] = slot_Alias_Alias_context; // context 
    ((Array)layout_Alias_Alias)->values[2] = slot_Alias_Alias_value; // value 
    Alias_Alias_Class = (Class)new_Class(Object_Class, layout_Alias_Alias_Class_class);
    Alias_Alias_Class->layout = layout_Alias_Alias;
    Alias_Alias_Class->name = SMB_Alias;
    
}

void init_Alias_PAlias_methods() {
    init_SMB_context_();
    init_SMB_origin();
    init_SMB_alias_();
    init_SMB_origin_();
    init_SMB_value();
    init_SMB_value_();
    init_SMB_printOn_();
    init_SMB_context();
    init_class_SMB_alias_();
    
}