#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21468 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21468, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21467, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21470 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21472 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21472, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21469 = new_Method_with(PArray21470, empty_Array, empty_Array, PThreadedCode21471, 2, PAssign21472, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21469, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21474 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21476 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21476, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21473 = new_Method_with(PArray21474, empty_Array, empty_Array, PThreadedCode21475, 2, PAssign21476, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21473, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21478 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21481 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend21483 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21484 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21485 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21484);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21486 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21482 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend21483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21484, (Optr)&t_send1, (Optr)PSend21485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21486, (Optr)&t_method_return);
    Block PBlock21480 = new_Block_with(PArray21481, empty_Array, PThreadedCode21482, 3, PSend21483, PSend21485, PSend21486);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21487 = new_Send((Optr)PBlock21480, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21479 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21480, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21487, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21477 = new_Method_with(PArray21478, empty_Array, empty_Array, PThreadedCode21479, 2, PSend21487, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21477, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21489 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21491 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21491, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21488 = new_Method_with(PArray21489, empty_Array, empty_Array, PThreadedCode21490, 2, PAssign21491, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21488, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21493 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21492 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21493, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21492, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21495, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21494, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21497 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21500 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21502 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21503 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21504 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21505 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21501 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21505, (Optr)&t_method_return);
    Block PBlock21499 = new_Block_with(PArray21500, empty_Array, PThreadedCode21501, 4, PSend21502, PSend21503, PSend21504, PSend21505);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21506 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21507 = new_Send((Optr)PBlock21499, SMB_value_, 1, (Optr)PSend21506);
    Array PThreadedCode21498 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21499, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21506, (Optr)&t_send1, (Optr)PSend21507, (Optr)&t_method_return);
    Method PMethod21496 = new_Method_with(PArray21497, empty_Array, empty_Array, PThreadedCode21498, 1, PSend21507);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21496, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21510 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21512 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21514 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21515 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21516 = new_Send((Optr)PSend21514, SMB__equals_, 1, (Optr)PSend21515);
    Array PThreadedCode21513 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21514, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21515, (Optr)&t_send1, (Optr)PSend21516, (Optr)&t_method_return);
    Block PBlock21511 = new_Block_with(PArray21512, empty_Array, PThreadedCode21513, 1, PSend21516);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21517 = new_Send((Optr)PSend21510, SMB_detect_, 1, (Optr)PBlock21511);
    Array PThreadedCode21509 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21510, (Optr)&t_push_closure, (Optr)PBlock21511, (Optr)&t_send1, (Optr)PSend21517, (Optr)&t_method_return);
    Method PMethod21508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21509, 1, PSend21517);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21508, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21521 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21523 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21524 = new_String(L"Universal Time");
    String string_21525 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21524_Const = new_Constant((Optr)string_21524);
    Constant string_21525_Const = new_Constant((Optr)string_21525);
    // offset:name:abbreviation:. 
    Send PSend21526 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21523, (Optr)string_21524_Const, (Optr)string_21525_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21527 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21526);
    // hours. 
    Send PSend21528 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21529 = new_String(L"Greenwich Mean Time");
    String string_21530 = new_String(L"GMT");
    Constant string_21529_Const = new_Constant((Optr)string_21529);
    Constant string_21530_Const = new_Constant((Optr)string_21530);
    // offset:name:abbreviation:. 
    Send PSend21531 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21528, (Optr)string_21529_Const, (Optr)string_21530_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21532 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21531);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21533 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21534 = new_String(L"British Summer Time");
    String string_21535 = new_String(L"BST");
    Constant string_21534_Const = new_Constant((Optr)string_21534);
    Constant string_21535_Const = new_Constant((Optr)string_21535);
    // offset:name:abbreviation:. 
    Send PSend21536 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21533, (Optr)string_21534_Const, (Optr)string_21535_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21537 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21536);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21538 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21539 = new_String(L"South African Standard Time");
    String string_21540 = new_String(L"SAST");
    Constant string_21539_Const = new_Constant((Optr)string_21539);
    Constant string_21540_Const = new_Constant((Optr)string_21540);
    // offset:name:abbreviation:. 
    Send PSend21541 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21538, (Optr)string_21539_Const, (Optr)string_21540_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21542 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21541);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21543 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21544 = new_String(L"Pacific Standard Time");
    String string_21545 = new_String(L"PST");
    Constant string_21544_Const = new_Constant((Optr)string_21544);
    Constant string_21545_Const = new_Constant((Optr)string_21545);
    // offset:name:abbreviation:. 
    Send PSend21546 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21543, (Optr)string_21544_Const, (Optr)string_21545_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21547 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21546);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21548 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21549 = new_String(L"Pacific Daylight Time");
    String string_21550 = new_String(L"PDT");
    Constant string_21549_Const = new_Constant((Optr)string_21549);
    Constant string_21550_Const = new_Constant((Optr)string_21550);
    // offset:name:abbreviation:. 
    Send PSend21551 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21548, (Optr)string_21549_Const, (Optr)string_21550_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21552 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21551);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21553 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21554 = new_String(L"Mountain Standard Time");
    String string_21555 = new_String(L"MST");
    Constant string_21554_Const = new_Constant((Optr)string_21554);
    Constant string_21555_Const = new_Constant((Optr)string_21555);
    // offset:name:abbreviation:. 
    Send PSend21556 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21553, (Optr)string_21554_Const, (Optr)string_21555_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21557 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21556);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21558 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21559 = new_String(L"Mountain Daylight Time");
    String string_21560 = new_String(L"MDT");
    Constant string_21559_Const = new_Constant((Optr)string_21559);
    Constant string_21560_Const = new_Constant((Optr)string_21560);
    // offset:name:abbreviation:. 
    Send PSend21561 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21558, (Optr)string_21559_Const, (Optr)string_21560_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21562 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21561);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21563 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21564 = new_String(L"Central Standard Time");
    String string_21565 = new_String(L"CST");
    Constant string_21564_Const = new_Constant((Optr)string_21564);
    Constant string_21565_Const = new_Constant((Optr)string_21565);
    // offset:name:abbreviation:. 
    Send PSend21566 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21563, (Optr)string_21564_Const, (Optr)string_21565_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21567 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21566);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21568 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21569 = new_String(L"Central Daylight Time");
    String string_21570 = new_String(L"CDT");
    Constant string_21569_Const = new_Constant((Optr)string_21569);
    Constant string_21570_Const = new_Constant((Optr)string_21570);
    // offset:name:abbreviation:. 
    Send PSend21571 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21568, (Optr)string_21569_Const, (Optr)string_21570_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21572 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21571);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21573 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21574 = new_String(L"Eastern Standard Time");
    String string_21575 = new_String(L"EST");
    Constant string_21574_Const = new_Constant((Optr)string_21574);
    Constant string_21575_Const = new_Constant((Optr)string_21575);
    // offset:name:abbreviation:. 
    Send PSend21576 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21573, (Optr)string_21574_Const, (Optr)string_21575_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21577 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21576);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21578 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21579 = new_String(L"Eastern Daylight Time");
    String string_21580 = new_String(L"EDT");
    Constant string_21579_Const = new_Constant((Optr)string_21579);
    Constant string_21580_Const = new_Constant((Optr)string_21580);
    // offset:name:abbreviation:. 
    Send PSend21581 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21578, (Optr)string_21579_Const, (Optr)string_21580_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21582 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21581);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21583 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21522 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21523, (Optr)&t_push1, (Optr)string_21524, (Optr)&t_push1, (Optr)string_21525, (Optr)&t_send3, (Optr)PSend21526, (Optr)&t_send2, (Optr)PSend21527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21528, (Optr)&t_push1, (Optr)string_21529, (Optr)&t_push1, (Optr)string_21530, (Optr)&t_send3, (Optr)PSend21531, (Optr)&t_send2, (Optr)PSend21532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21533, (Optr)&t_push1, (Optr)string_21534, (Optr)&t_push1, (Optr)string_21535, (Optr)&t_send3, (Optr)PSend21536, (Optr)&t_send2, (Optr)PSend21537, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21538, (Optr)&t_push1, (Optr)string_21539, (Optr)&t_push1, (Optr)string_21540, (Optr)&t_send3, (Optr)PSend21541, (Optr)&t_send2, (Optr)PSend21542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21543, (Optr)&t_push1, (Optr)string_21544, (Optr)&t_push1, (Optr)string_21545, (Optr)&t_send3, (Optr)PSend21546, (Optr)&t_send2, (Optr)PSend21547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21548, (Optr)&t_push1, (Optr)string_21549, (Optr)&t_push1, (Optr)string_21550, (Optr)&t_send3, (Optr)PSend21551, (Optr)&t_send2, (Optr)PSend21552, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21553, (Optr)&t_push1, (Optr)string_21554, (Optr)&t_push1, (Optr)string_21555, (Optr)&t_send3, (Optr)PSend21556, (Optr)&t_send2, (Optr)PSend21557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21558, (Optr)&t_push1, (Optr)string_21559, (Optr)&t_push1, (Optr)string_21560, (Optr)&t_send3, (Optr)PSend21561, (Optr)&t_send2, (Optr)PSend21562, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21563, (Optr)&t_push1, (Optr)string_21564, (Optr)&t_push1, (Optr)string_21565, (Optr)&t_send3, (Optr)PSend21566, (Optr)&t_send2, (Optr)PSend21567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21568, (Optr)&t_push1, (Optr)string_21569, (Optr)&t_push1, (Optr)string_21570, (Optr)&t_send3, (Optr)PSend21571, (Optr)&t_send2, (Optr)PSend21572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21573, (Optr)&t_push1, (Optr)string_21574, (Optr)&t_push1, (Optr)string_21575, (Optr)&t_send3, (Optr)PSend21576, (Optr)&t_send2, (Optr)PSend21577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21578, (Optr)&t_push1, (Optr)string_21579, (Optr)&t_push1, (Optr)string_21580, (Optr)&t_send3, (Optr)PSend21581, (Optr)&t_send2, (Optr)PSend21582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21583, (Optr)&t_method_return);
    Block PBlock21520 = new_Block_with(PArray21521, empty_Array, PThreadedCode21522, 13, PSend21527, PSend21532, PSend21537, PSend21542, PSend21547, PSend21552, PSend21557, PSend21562, PSend21567, PSend21572, PSend21577, PSend21582, PSend21583);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21584 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21585 = new_Send((Optr)PBlock21520, SMB_value_, 1, (Optr)PSend21584);
    Array PThreadedCode21519 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21520, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21584, (Optr)&t_send1, (Optr)PSend21585, (Optr)&t_method_return);
    Method PMethod21518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21519, 1, PSend21585);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21518, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_timeZones, MC_SMB_timeZones);
}

void init_Chronology_PTimeZone_layout() {
    layout_Chronology_TimeZone_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_TimeZone_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TimeZone = new_Symbol(L"TimeZone");
    slot_Chronology_TimeZone_offset = (Optr)new_Slot(0, L"offset");
    slot_Chronology_TimeZone_abbreviation = (Optr)new_Slot(1, L"abbreviation");
    slot_Chronology_TimeZone_name = (Optr)new_Slot(2, L"name");
    layout_Chronology_TimeZone = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Chronology_TimeZone)->values[0] = slot_Chronology_TimeZone_offset; // offset 
    ((Array)layout_Chronology_TimeZone)->values[1] = slot_Chronology_TimeZone_abbreviation; // abbreviation 
    ((Array)layout_Chronology_TimeZone)->values[2] = slot_Chronology_TimeZone_name; // name 
    Chronology_TimeZone_Class = (Class)new_Class(Object_Class, layout_Chronology_TimeZone_Class_class);
    Chronology_TimeZone_Class->layout = layout_Chronology_TimeZone;
    Chronology_TimeZone_Class->name = SMB_TimeZone;
    
}

void init_Chronology_PTimeZone_methods() {
    init_SMB_offset();
    init_SMB_abbreviation_();
    init_SMB_name_();
    init_SMB_printOn_();
    init_SMB_offset_();
    init_SMB_abbreviation();
    init_SMB_name();
    init_class_SMB_offset_name_abbreviation_();
    init_class_SMB_default();
    init_class_SMB_timeZones();
    
}