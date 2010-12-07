#include <lib/class/Interpretation/AliasInterpreter.h>


Optr layout_Interpretation_AliasInterpreter_Class_class;
Optr layout_Interpretation_AliasInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray17140 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17142 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17143 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode17141 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17142, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper17143, (Optr)&t_method_return);
    Method PMethod17139 = new_Method_with(PArray17140, empty_Array, empty_Array, PThreadedCode17141, 2, PSend17142, PSuper17143);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod17139, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17145 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17147 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value, 0);
    Super PSuper17148 = new_Super(SMB_blockclosureValue_message_, 2, (Optr)PSend17147, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17146 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend17147, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17148, (Optr)&t_method_return);
    Method PMethod17144 = new_Method_with(PArray17145, empty_Array, empty_Array, PThreadedCode17146, 1, PSuper17148);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod17144, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray17150 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17152 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend17153 = new_Send((Optr)PSend17152, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    // asAliased. 
    Send PSend17154 = new_Send((Optr)VAR_aClosure_0_0, SMB_asAliased, 0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend17155 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend17153, (Optr)PSend17154);
    Array PThreadedCode17151 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend17152, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend17153, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend17154, (Optr)&t_send2, (Optr)PSend17155, (Optr)&t_method_return);
    Method PMethod17149 = new_Method_with(PArray17150, empty_Array, empty_Array, PThreadedCode17151, 1, PSend17155);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod17149, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17157 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17159 = new_Send((Optr)VAR_aContinuation_0_0, SMB_value, 0);
    Super PSuper17160 = new_Super(SMB_continueEscape_message_, 2, (Optr)PSend17159, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17158 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend17159, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17160, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17156 = new_Method_with(PArray17157, empty_Array, empty_Array, PThreadedCode17158, 2, PSuper17160, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod17156, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray17162 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_unwrappedMessage_0_3 = new_Variable_named(L"unwrappedMessage", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray17163 = new_Array_with(2, (Optr)VAR_unwrappedMessage_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17166 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17170 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    // new:. 
    Send PSend17169 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend17170);
    Assign PAssign17168 = new_Assign((Optr)VAR_unwrappedMessage_0_3, (Optr)PSend17169);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17171 = new_Send((Optr)VAR_aMessage_0_2, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend17172 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_selector_, 1, (Optr)PSend17171);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray17174 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17176 = new_Send((Optr)VAR_arg_2_0, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17177 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_at_put_, 2, (Optr)VAR_index_2_1, (Optr)PSend17176);
    Array PThreadedCode17175 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_send0, (Optr)PSend17176, (Optr)&t_send2, (Optr)PSend17177, (Optr)&t_method_return);
    Block PBlock17173 = new_Block_with(PArray17174, empty_Array, PThreadedCode17175, 1, PSend17177);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17178 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock17173);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray17182 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend17184 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend17185 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend17186 = new_Send((Optr)VAR__receiver__2_0, SMB_closure_, 1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend17187 = new_Send((Optr)VAR__receiver__2_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17183 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend17184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send1, (Optr)PSend17185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend17186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17187, (Optr)&t_method_return);
    Block PBlock17181 = new_Block_with(PArray17182, empty_Array, PThreadedCode17183, 4, PSend17184, PSend17185, PSend17186, PSend17187);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17188 = new_Send((Optr)PNativeMethodContext_classReference, SMB_new, 0);
    // value:. 
    Send PSend17180 = new_Send((Optr)PBlock17181, SMB_value_, 1, (Optr)PSend17188);
    Assign PAssign17179 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17180);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    // value. 
    Send PSend17191 = new_Send((Optr)VAR_receiver_0_1, SMB_value, 0);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend17195 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17194 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17195);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend17196 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17197 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17196);
    Array PThreadedCode17193 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17194, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend17196, (Optr)&t_send1, (Optr)PSend17197, (Optr)&t_block_return);
    Block PBlock17192 = new_Block_with(empty_Array, empty_Array, PThreadedCode17193, 2, PAssign17194, PSend17197);
    Super PSuper17190 = new_Super(SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)PSend17191, (Optr)VAR_unwrappedMessage_0_3, (Optr)PBlock17192);
    Assign PAssign17189 = new_Assign((Optr)VAR_result_0_4, (Optr)PSuper17190);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17199 = new_Send((Optr)VAR_result_0_4, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Assign PAssign17198 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend17199);
    // returnContext. 
    Send PSend17201 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17200 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17201);
    Array PThreadedCode17167 = instantiate_Array_with(ThreadedCode_Class, 0, 78, (Optr)&t_push1, (Optr)PAssign17168, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17170, (Optr)&t_send1, (Optr)PSend17169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17171, (Optr)&t_send1, (Optr)PSend17172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock17173, (Optr)&t_send1, (Optr)PSend17178, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17179, (Optr)&t_push_closure, (Optr)PBlock17181, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_send1, (Optr)PSend17180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17189, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend17191, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_closure, (Optr)PBlock17192, (Optr)&t_super4, (Optr)PSuper17190, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17198, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17199, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17200, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock17165 = new_Block_with(PArray17166, empty_Array, PThreadedCode17167, 8, PAssign17168, PSend17172, PSend17178, PAssign17179, PAssign17189, PAssign17198, PAssign17200, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17202 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17165);
    Array PThreadedCode17164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17165, (Optr)&t_send1, (Optr)PSend17202, (Optr)&t_method_return);
    Method PMethod17161 = new_Method_with(PArray17162, PArray17163, empty_Array, PThreadedCode17164, 1, PSend17202);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod17161, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray17204 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17205 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17208 = new_Super(SMB_interpretMethod_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign17207 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17208);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17209 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17210 = new_Send((Optr)PSend17209, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17206 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17207, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_super1, (Optr)PSuper17208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17209, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17210, (Optr)&t_method_return);
    Method PMethod17203 = new_Method_with(PArray17204, PArray17205, empty_Array, PThreadedCode17206, 2, PAssign17207, PSend17210);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod17203, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17212 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Variable VAR_alias_0_2 = new_Variable_named(L"alias", 0);
    Array PArray17213 = new_Array_with(1, (Optr)VAR_alias_0_2);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17216 = new_Send((Optr)PFieldWriteAlias_classReference, SMB_alias_, 1, (Optr)VAR_anAlias_0_1);
    Assign PAssign17215 = new_Assign((Optr)VAR_alias_0_2, (Optr)PSend17216);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17217 = new_Send((Optr)VAR_alias_0_2, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17218 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend17219 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17218);
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    // predecessor:. 
    Send PSend17220 = new_Send((Optr)VAR_alias_0_2, SMB_predecessor_, 1, (Optr)PSend17219);
    // currentUnwrappedSelf. 
    Send PSend17221 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17222 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_alias_0_2, (Optr)PSend17221);
    Array PThreadedCode17214 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign17215, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send1, (Optr)PSend17216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17218, (Optr)&t_send1, (Optr)PSend17219, (Optr)&t_send1, (Optr)PSend17220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17221, (Optr)&t_send2, (Optr)PSend17222, (Optr)&t_method_return);
    Method PMethod17211 = new_Method_with(PArray17212, PArray17213, empty_Array, PThreadedCode17214, 4, PAssign17215, PSend17217, PSend17220, PSend17222);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod17211, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17224 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17225 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17228 = new_Super(SMB_interpretBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17227 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17228);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17229 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17230 = new_Send((Optr)PSend17229, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17226 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17227, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17229, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17230, (Optr)&t_method_return);
    Method PMethod17223 = new_Method_with(PArray17224, PArray17225, empty_Array, PThreadedCode17226, 2, PAssign17227, PSend17230);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod17223, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_anUnsintSlot_0_0 = new_Variable_named(L"anUnsintSlot", 0);
    Array PArray17232 = new_Array_with(1, (Optr)VAR_anUnsintSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17233 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17237 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17236 = new_Send((Optr)VAR_anUnsintSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17237);
    Assign PAssign17235 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17236);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17238 = new_Send((Optr)VAR_result_0_1, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17234 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17235, (Optr)&t_push_variable, (Optr)VAR_anUnsintSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17237, (Optr)&t_send1, (Optr)PSend17236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17238, (Optr)&t_method_return);
    Method PMethod17231 = new_Method_with(PArray17232, PArray17233, empty_Array, PThreadedCode17234, 2, PAssign17235, PSend17238);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod17231, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray17240 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray17241 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper17244 = new_Super(SMB_continueOn_message_, 2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Assign PAssign17243 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper17244);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17246 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17248 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17249 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17247 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend17248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17249, (Optr)&t_method_return);
    Block PBlock17245 = new_Block_with(PArray17246, empty_Array, PThreadedCode17247, 2, PSend17248, PSend17249);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17250 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17251 = new_Send((Optr)PBlock17245, SMB_value_, 1, (Optr)PSend17250);
    Array PThreadedCode17242 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17243, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_super2, (Optr)PSuper17244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17245, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17250, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_method_return);
    Method PMethod17239 = new_Method_with(PArray17240, PArray17241, empty_Array, PThreadedCode17242, 2, PAssign17243, PSend17251);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod17239, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17253 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_closure_0_1 = new_Variable_named(L"closure", 0);
    Array PArray17254 = new_Array_with(1, (Optr)VAR_closure_0_1);
    Super PSuper17257 = new_Super(SMB_visitBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17256 = new_Assign((Optr)VAR_closure_0_1, (Optr)PSuper17257);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17259 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17261 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17262 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17260 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_1, (Optr)&t_send1, (Optr)PSend17261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17262, (Optr)&t_method_return);
    Block PBlock17258 = new_Block_with(PArray17259, empty_Array, PThreadedCode17260, 2, PSend17261, PSend17262);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17263 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17264 = new_Send((Optr)PBlock17258, SMB_value_, 1, (Optr)PSend17263);
    Array PThreadedCode17255 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17256, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17257, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17258, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_send1, (Optr)PSend17264, (Optr)&t_method_return);
    Method PMethod17252 = new_Method_with(PArray17253, PArray17254, empty_Array, PThreadedCode17255, 2, PAssign17256, PSend17264);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod17252, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Array PArray17266 = new_Array_with(1, (Optr)VAR_anSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17267 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17271 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17270 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17271);
    Assign PAssign17269 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17270);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17272 = new_Send((Optr)PFieldReadAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17273 = new_Send((Optr)PSend17272, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17268 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17269, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17271, (Optr)&t_send1, (Optr)PSend17270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFieldReadAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17272, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17273, (Optr)&t_method_return);
    Method PMethod17265 = new_Method_with(PArray17266, PArray17267, empty_Array, PThreadedCode17268, 2, PAssign17269, PSend17273);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod17265, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray17275 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17277 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17278 = new_Send((Optr)PSend17277, SMB_class, 0);
    Array PThreadedCode17276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend17277, (Optr)&t_send0, (Optr)PSend17278, (Optr)&t_method_return);
    Method PMethod17274 = new_Method_with(PArray17275, empty_Array, empty_Array, PThreadedCode17276, 1, PSend17278);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod17274, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray17280 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17283 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend17285 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17286 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17285);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17287 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17284 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend17285, (Optr)&t_send1, (Optr)PSend17286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17287, (Optr)&t_method_return);
    Block PBlock17282 = new_Block_with(PArray17283, empty_Array, PThreadedCode17284, 2, PSend17286, PSend17287);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17288 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17289 = new_Send((Optr)PBlock17282, SMB_value_, 1, (Optr)PSend17288);
    Array PThreadedCode17281 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17282, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17288, (Optr)&t_send1, (Optr)PSend17289, (Optr)&t_method_return);
    Method PMethod17279 = new_Method_with(PArray17280, empty_Array, empty_Array, PThreadedCode17281, 1, PSend17289);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod17279, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_aliasArguments_() {
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Array PArray17291 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray17294 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17296 = new_Send((Optr)PParameterAlias_classReference, SMB_alias_, 1, (Optr)VAR_arg_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17297 = new_Send((Optr)PSend17296, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17298 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend17297);
    Array PThreadedCode17295 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send1, (Optr)PSend17296, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17297, (Optr)&t_send2, (Optr)PSend17298, (Optr)&t_method_return);
    Block PBlock17293 = new_Block_with(PArray17294, empty_Array, PThreadedCode17295, 1, PSend17298);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17299 = new_Send((Optr)VAR_aMessage_0_0, SMB_withIndexDo_, 1, (Optr)PBlock17293);
    Array PThreadedCode17292 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_closure, (Optr)PBlock17293, (Optr)&t_send1, (Optr)PSend17299, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17290 = new_Method_with(PArray17291, empty_Array, empty_Array, PThreadedCode17292, 2, PSend17299, self);
    
    MethodClosure MC_SMB_aliasArguments_ = new_MethodClosure((Method)PMethod17290, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_aliasArguments_, MC_SMB_aliasArguments_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray17301 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17304 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend17306 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17307 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17306);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17308 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17305 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend17306, (Optr)&t_send1, (Optr)PSend17307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17308, (Optr)&t_method_return);
    Block PBlock17303 = new_Block_with(PArray17304, empty_Array, PThreadedCode17305, 2, PSend17307, PSend17308);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17309 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17310 = new_Send((Optr)PBlock17303, SMB_value_, 1, (Optr)PSend17309);
    Array PThreadedCode17302 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17303, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17309, (Optr)&t_send1, (Optr)PSend17310, (Optr)&t_method_return);
    Method PMethod17300 = new_Method_with(PArray17301, empty_Array, empty_Array, PThreadedCode17302, 1, PSend17310);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod17300, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray17312 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    String string_17314 = new_String(L"Recursive doesNotUnderstand: ");
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17315 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend17316 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)PSend17315);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17317 = new_Send((Optr)PSend17316, SMB_name, 0);
    Constant string_17314_Const = new_Constant((Optr)string_17314);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend17318 = new_Send((Optr)string_17314_Const, SMB__append_, 1, (Optr)PSend17317);
    String string_17319 = new_String(L">>");
    Constant string_17319_Const = new_Constant((Optr)string_17319);
    // ,. 
    Send PSend17320 = new_Send((Optr)PSend17318, SMB__append_, 1, (Optr)string_17319_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend17321 = new_Send((Optr)VAR_aMessage_0_0, SMB_asString, 0);
    // ,. 
    Send PSend17322 = new_Send((Optr)PSend17320, SMB__append_, 1, (Optr)PSend17321);
    String string_17323 = new_String(L" in ");
    Constant string_17323_Const = new_Constant((Optr)string_17323);
    // ,. 
    Send PSend17324 = new_Send((Optr)PSend17322, SMB__append_, 1, (Optr)string_17323_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17325 = new_Send((Optr)self, SMB_class, 0);
    // name. 
    Send PSend17326 = new_Send((Optr)PSend17325, SMB_name, 0);
    // ,. 
    Send PSend17327 = new_Send((Optr)PSend17324, SMB__append_, 1, (Optr)PSend17326);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend17328 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend17327);
    Array PThreadedCode17313 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_17314, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17315, (Optr)&t_send1, (Optr)PSend17316, (Optr)&t_send0, (Optr)PSend17317, (Optr)&t_send1, (Optr)PSend17318, (Optr)&t_push1, (Optr)string_17319, (Optr)&t_send1, (Optr)PSend17320, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend17321, (Optr)&t_send1, (Optr)PSend17322, (Optr)&t_push1, (Optr)string_17323, (Optr)&t_send1, (Optr)PSend17324, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17325, (Optr)&t_send0, (Optr)PSend17326, (Optr)&t_send1, (Optr)PSend17327, (Optr)&t_send1, (Optr)PSend17328, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17311 = new_Method_with(PArray17312, empty_Array, empty_Array, PThreadedCode17313, 2, PSend17328, self);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod17311, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentUnwrappedSelf() {
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17331 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend17332 = new_Send((Optr)PSend17331, SMB_receiver, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17333 = new_Send((Optr)PSend17332, SMB_value, 0);
    Array PThreadedCode17330 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17331, (Optr)&t_send0, (Optr)PSend17332, (Optr)&t_send0, (Optr)PSend17333, (Optr)&t_method_return);
    Method PMethod17329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17330, 1, PSend17333);
    
    MethodClosure MC_SMB_currentUnwrappedSelf = new_MethodClosure((Method)PMethod17329, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_currentUnwrappedSelf, MC_SMB_currentUnwrappedSelf);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17335 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17337 = new_Send((Optr)VAR_anAlias_0_1, SMB_value, 0);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17338 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17339 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)PSend17337, (Optr)PSend17338);
    Array PThreadedCode17336 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send0, (Optr)PSend17337, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17338, (Optr)&t_send2, (Optr)PSend17339, (Optr)&t_method_return);
    Method PMethod17334 = new_Method_with(PArray17335, empty_Array, empty_Array, PThreadedCode17336, 1, PSend17339);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod17334, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray17341 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17343 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17344 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Array PThreadedCode17342 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17343, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_super4, (Optr)PSuper17344, (Optr)&t_method_return);
    Method PMethod17340 = new_Method_with(PArray17341, empty_Array, empty_Array, PThreadedCode17342, 2, PSend17343, PSuper17344);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod17340, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}

void init_Interpretation_PAliasInterpreter_layout() {
    layout_Interpretation_AliasInterpreter_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AliasInterpreter = new_Symbol(L"AliasInterpreter");
    layout_Interpretation_AliasInterpreter = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Interpretation_AliasInterpreter)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_AliasInterpreter)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    Interpretation_AliasInterpreter_Class = (Class)new_Class(Interpretation_Interpreter_Class, layout_Interpretation_AliasInterpreter_Class_class);
    Interpretation_AliasInterpreter_Class->layout = layout_Interpretation_AliasInterpreter;
    Interpretation_AliasInterpreter_Class->name = SMB_AliasInterpreter;
    
}

void init_Interpretation_PAliasInterpreter_methods() {
    init_SMB_send_to_class_();
    init_SMB_blockclosureValue_message_();
    init_SMB_interpret_();
    init_SMB_continueEscape_message_();
    init_SMB_invokeNativeMethod_on_message_();
    init_SMB_interpretMethod_();
    init_SMB_assignSlot_to_();
    init_SMB_interpretBlock_();
    init_SMB_visitUnsintSlot_();
    init_SMB_continueOn_message_();
    init_SMB_visitBlock_();
    init_SMB_visitSlot_();
    init_SMB_classOf_();
    init_SMB_visitClassReference_();
    init_SMB_aliasArguments_();
    init_SMB_visitConstant_();
    init_SMB_recursiveDoesNotUnderstand_on_();
    init_SMB_currentUnwrappedSelf();
    init_SMB_assignUnsintSlot_to_();
    init_SMB_send_to_class_for_();
    
}