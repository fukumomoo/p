#include <lib/class/IO/WriteFile.h>


Optr layout_IO_WriteFile_Class_class;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9727 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_lf, (Optr)SMB_IO_minus_File);
    Array PArray9726 = new_Array_with(1, (Optr)PAnnotation9727);
    // lf. 
    Send PSend9729 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9730 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9729);
    Array PThreadedCode9728 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9729, (Optr)&t_send1, (Optr)PSend9730, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9725 = new_NativeMethod_with(empty_Array, empty_Array, PArray9726, PThreadedCode9728, 2, PSend9730, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PNativeMethod9725, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray9732 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9734 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_write_, (Optr)SMB_IO_minus_File);
    Array PArray9733 = new_Array_with(1, (Optr)PAnnotation9734);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9736 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9735 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9736, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9731 = new_NativeMethod_with(PArray9732, empty_Array, PArray9733, PThreadedCode9735, 2, PSend9736, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PNativeMethod9731, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9738 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9740 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeAll_, (Optr)SMB_IO_minus_File);
    Array PArray9739 = new_Array_with(1, (Optr)PAnnotation9740);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9742 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9741 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9742, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9737 = new_NativeMethod_with(PArray9738, empty_Array, PArray9739, PThreadedCode9741, 2, PSend9742, self);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PNativeMethod9737, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend9745 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9746 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9745);
    Array PThreadedCode9744 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9745, (Optr)&t_send1, (Optr)PSend9746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9744, 2, PSend9746, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9743, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_space, MC_SMB_space);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9748 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9750 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9751 = new_Send((Optr)self, SMB_writeAll_, 1, (Optr)PSend9750);
    Array PThreadedCode9749 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend9750, (Optr)&t_send1, (Optr)PSend9751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9747 = new_Method_with(PArray9748, empty_Array, empty_Array, PThreadedCode9749, 2, PSend9751, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod9747, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9754 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_flush, (Optr)SMB_IO_minus_File);
    Array PArray9753 = new_Array_with(1, (Optr)PAnnotation9754);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9756 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9755 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9756, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9752 = new_NativeMethod_with(empty_Array, empty_Array, PArray9753, PThreadedCode9755, 2, PSend9756, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PNativeMethod9752, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9759 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9760 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9759);
    Array PThreadedCode9758 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9759, (Optr)&t_send1, (Optr)PSend9760, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9758, 2, PSend9760, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod9757, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9762 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_writeOpen_ = new_Symbol(L"writeOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9764 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9763 = new_Array_with(1, (Optr)PAnnotation9764);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9766 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9765 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9766, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9761 = new_NativeMethod_with(PArray9762, empty_Array, PArray9763, PThreadedCode9765, 2, PSend9766, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9761, HEADER(IO_WriteFile_Class));
    store_method(HEADER(IO_WriteFile_Class), SMB_open_, MC_SMB_open_);
}

void init_IO_PWriteFile_layout() {
    layout_IO_WriteFile_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_WriteFile_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_WriteFile_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_WriteFile_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_WriteFile_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_WriteFile_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WriteFile = new_Symbol(L"WriteFile");
    IO_WriteFile_Class = (Class)new_Class(IO_File_Class, layout_IO_WriteFile_Class_class);
    IO_WriteFile_Class->layout = empty_object_layout;
    IO_WriteFile_Class->name = SMB_WriteFile;
    
}

void init_IO_PWriteFile_methods() {
    init_SMB_lf();
    init_SMB_write_();
    init_SMB_writeAll_();
    init_SMB_space();
    init_SMB__shiftLeft_();
    init_SMB_flush();
    init_SMB_tab();
    init_class_SMB_open_();
    
}