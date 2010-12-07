#include <lib/class/IO/Term/Process.h>


Optr layout_IO_Term_Process_Class_class;
Optr slot_IO_Term_Process_command;
Optr slot_IO_Term_Process_mode;
Optr slot_IO_Term_Process_in;
Optr slot_IO_Term_Process_out;
Optr slot_IO_Term_Process_returnStatus;
Optr layout_IO_Term_Process;


static void init_SMB_canRead() {
    Symbol SMB_canRead = new_Symbol(L"canRead");
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend9044 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9044, (Optr)&t_method_return);
    Method PMethod9042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9043, 1, PSend9044);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod9042, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9048 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend9050 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9054 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9053 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9054, (Optr)&t_block_return);
    Block PBlock9052 = new_Block_with(empty_Array, empty_Array, PThreadedCode9053, 1, PSend9054);
    // ifTrue:. 
    Send PSend9051 = new_Send((Optr)PSend9050, SMB_ifTrue_, 1, (Optr)PBlock9052);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend9056 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign9055 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend9056);
    Assign PAssign9057 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign9058 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode9049 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9050, (Optr)&t_send_ifTrue_, (Optr)PSend9051, (Optr)PBlock9052, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9055, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9057, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9058, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock9047 = new_Block_with(PArray9048, empty_Array, PThreadedCode9049, 5, PSend9051, PAssign9055, PAssign9057, PAssign9058, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9059 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9047);
    Array PThreadedCode9046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9047, (Optr)&t_send1, (Optr)PSend9059, (Optr)&t_method_return);
    Method PMethod9045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9046, 1, PSend9059);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod9045, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9063 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation9062 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_9063);
    Array PArray9061 = new_Array_with(1, (Optr)PAnnotation9062);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9065 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9065, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9060 = new_NativeMethod_with(empty_Array, empty_Array, PArray9061, PThreadedCode9064, 2, PSend9065, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod9060, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode9067 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod9066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9067, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod9066, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray9069 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9071 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9075 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9075_Const = new_Constant((Optr)string_9075);
    // error:. 
    Send PSend9076 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9075_Const);
    Array PThreadedCode9074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9075, (Optr)&t_send1, (Optr)PSend9076, (Optr)&t_block_return);
    Block PBlock9073 = new_Block_with(empty_Array, empty_Array, PThreadedCode9074, 1, PSend9076);
    // ifTrue:. 
    Send PSend9072 = new_Send((Optr)PSend9071, SMB_ifTrue_, 1, (Optr)PBlock9073);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend9077 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9081 = new_String(L"Invalid read/write mode: ");
    Constant string_9081_Const = new_Constant((Optr)string_9081);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9082 = new_Send((Optr)string_9081_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend9083 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend9082);
    Array PThreadedCode9080 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9081, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9082, (Optr)&t_send1, (Optr)PSend9083, (Optr)&t_block_return);
    Block PBlock9079 = new_Block_with(empty_Array, empty_Array, PThreadedCode9080, 1, PSend9083);
    // ifFalse:. 
    Send PSend9078 = new_Send((Optr)PSend9077, SMB_ifFalse_, 1, (Optr)PBlock9079);
    Assign PAssign9084 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode9070 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9071, (Optr)&t_send_ifTrue_, (Optr)PSend9072, (Optr)PBlock9073, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9077, (Optr)&t_send_ifFalse_, (Optr)PSend9078, (Optr)PBlock9079, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9084, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9068 = new_Method_with(PArray9069, empty_Array, empty_Array, PThreadedCode9070, 4, PSend9072, PSend9078, PAssign9084, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod9068, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode9086 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod9085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9086, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod9085, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9089 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9089, (Optr)&t_method_return);
    Method PMethod9087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9088, 1, PSend9089);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod9087, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend9092 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend9093 = new_Send((Optr)PSend9092, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9094 = new_Send((Optr)PSend9093, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend9097 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend9098 = new_Send((Optr)PSend9097, SMB_isNil, 0);
    // not. 
    Send PSend9099 = new_Send((Optr)PSend9098, SMB_not, 0);
    Array PThreadedCode9096 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9097, (Optr)&t_send0, (Optr)PSend9098, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_block_return);
    Block PBlock9095 = new_Block_with(empty_Array, empty_Array, PThreadedCode9096, 1, PSend9099);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9100 = new_Send((Optr)PSend9094, SMB_or_, 1, (Optr)PBlock9095);
    Array PThreadedCode9091 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9092, (Optr)&t_send0, (Optr)PSend9093, (Optr)&t_send0, (Optr)PSend9094, (Optr)&t_push_closure, (Optr)PBlock9095, (Optr)&t_send1, (Optr)PSend9100, (Optr)&t_method_return);
    Method PMethod9090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9091, 1, PSend9100);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod9090, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode9102 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod9101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9102, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod9101, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9106 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation9105 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_9106);
    Array PArray9104 = new_Array_with(1, (Optr)PAnnotation9105);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9108 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9107 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9108, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9103 = new_NativeMethod_with(empty_Array, empty_Array, PArray9104, PThreadedCode9107, 2, PSend9108, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod9103, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode9110 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod9109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9110, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod9109, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend9113 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend9114 = new_Send((Optr)PSend9113, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend9117 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend9118 = new_Send((Optr)PSend9117, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode9116 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9117, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend9118, (Optr)&t_block_return);
    Block PBlock9115 = new_Block_with(empty_Array, empty_Array, PThreadedCode9116, 1, PSend9118);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9119 = new_Send((Optr)PSend9114, SMB_or_, 1, (Optr)PBlock9115);
    Array PThreadedCode9112 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9113, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend9114, (Optr)&t_push_closure, (Optr)PBlock9115, (Optr)&t_send1, (Optr)PSend9119, (Optr)&t_method_return);
    Method PMethod9111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9112, 1, PSend9119);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod9111, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper9122 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend9123 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9121 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9122, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9123, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9121, 3, PSuper9122, PSend9123, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9120, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9125 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9127 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9131 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9131_Const = new_Constant((Optr)string_9131);
    // error:. 
    Send PSend9132 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9131_Const);
    Array PThreadedCode9130 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9131, (Optr)&t_send1, (Optr)PSend9132, (Optr)&t_block_return);
    Block PBlock9129 = new_Block_with(empty_Array, empty_Array, PThreadedCode9130, 1, PSend9132);
    // ifTrue:. 
    Send PSend9128 = new_Send((Optr)PSend9127, SMB_ifTrue_, 1, (Optr)PBlock9129);
    Assign PAssign9133 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode9126 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9127, (Optr)&t_send_ifTrue_, (Optr)PSend9128, (Optr)PBlock9129, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9133, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9124 = new_Method_with(PArray9125, empty_Array, empty_Array, PThreadedCode9126, 3, PSend9128, PAssign9133, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod9124, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9137 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9139 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9143 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9142 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9143, (Optr)&t_block_return);
    Block PBlock9141 = new_Block_with(empty_Array, empty_Array, PThreadedCode9142, 1, PSend9143);
    // ifTrue:. 
    Send PSend9140 = new_Send((Optr)PSend9139, SMB_ifTrue_, 1, (Optr)PBlock9141);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend9144 = new_Send((Optr)self, SMB_command, 0);
    String string_9147 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9147_Const = new_Constant((Optr)string_9147);
    // error:. 
    Send PSend9148 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9147_Const);
    Array PThreadedCode9146 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9147, (Optr)&t_send1, (Optr)PSend9148, (Optr)&t_block_return);
    Block PBlock9145 = new_Block_with(empty_Array, empty_Array, PThreadedCode9146, 1, PSend9148);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9149 = new_Send((Optr)PSend9144, SMB_ifNil_, 1, (Optr)PBlock9145);
    Assign PAssign9150 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend9151 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode9138 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9139, (Optr)&t_send_ifTrue_, (Optr)PSend9140, (Optr)PBlock9141, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9144, (Optr)&t_push_closure, (Optr)PBlock9145, (Optr)&t_send1, (Optr)PSend9149, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9150, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9151, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9136 = new_Block_with(PArray9137, empty_Array, PThreadedCode9138, 5, PSend9140, PSend9149, PAssign9150, PSend9151, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9152 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9136);
    Array PThreadedCode9135 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9136, (Optr)&t_send1, (Optr)PSend9152, (Optr)&t_method_return);
    Method PMethod9134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9135, 1, PSend9152);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod9134, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9155 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9156 = new_Send((Optr)PSend9155, SMB_not, 0);
    Array PThreadedCode9154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9155, (Optr)&t_send0, (Optr)PSend9156, (Optr)&t_method_return);
    Method PMethod9153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9154, 1, PSend9156);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod9153, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray9158 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend9160 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9163 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9163, (Optr)&t_block_return);
    Block PBlock9161 = new_Block_with(empty_Array, empty_Array, PThreadedCode9162, 1, PSend9163);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9164 = new_Send((Optr)PSend9160, SMB_or_, 1, (Optr)PBlock9161);
    Array PThreadedCode9159 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9160, (Optr)&t_push_closure, (Optr)PBlock9161, (Optr)&t_send1, (Optr)PSend9164, (Optr)&t_method_return);
    Method PMethod9157 = new_Method_with(PArray9158, empty_Array, empty_Array, PThreadedCode9159, 1, PSend9164);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod9157, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode9166 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod9165 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9166, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod9165, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray9168 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9171 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend9173 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend9174 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend9175 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode9172 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend9173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend9174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9175, (Optr)&t_method_return);
    Block PBlock9170 = new_Block_with(PArray9171, empty_Array, PThreadedCode9172, 3, PSend9173, PSend9174, PSend9175);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9176 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9177 = new_Send((Optr)PBlock9170, SMB_value_, 1, (Optr)PSend9176);
    Array PThreadedCode9169 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock9170, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9176, (Optr)&t_send1, (Optr)PSend9177, (Optr)&t_method_return);
    Method PMethod9167 = new_Method_with(PArray9168, empty_Array, empty_Array, PThreadedCode9169, 1, PSend9177);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod9167, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9180 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_9180_Const = new_Constant((Optr)string_9180);
    // require:at:. 
    Send PSend9181 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_9180_Const);
    Array PThreadedCode9179 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_9180, (Optr)&t_send2, (Optr)PSend9181, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9179, 2, PSend9181, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9178, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9183 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend9185 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode9184 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend9185, (Optr)&t_method_return);
    Method PMethod9182 = new_Method_with(PArray9183, empty_Array, empty_Array, PThreadedCode9184, 1, PSend9185);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod9182, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_, MC_SMB_open_);
}

void init_IO_Term_PProcess_layout() {
    layout_IO_Term_Process_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_Process_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_Process_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_Process_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_Process_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_Process_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Process = new_Symbol(L"Process");
    slot_IO_Term_Process_command = (Optr)new_Slot(0, L"command");
    slot_IO_Term_Process_mode = (Optr)new_Slot(1, L"mode");
    slot_IO_Term_Process_in = (Optr)new_Slot(2, L"in");
    slot_IO_Term_Process_out = (Optr)new_Slot(3, L"out");
    slot_IO_Term_Process_returnStatus = (Optr)new_Slot(4, L"returnStatus");
    layout_IO_Term_Process = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_Process)->values[0] = slot_IO_Term_Process_command; // command 
    ((Array)layout_IO_Term_Process)->values[1] = slot_IO_Term_Process_mode; // mode 
    ((Array)layout_IO_Term_Process)->values[2] = slot_IO_Term_Process_in; // in 
    ((Array)layout_IO_Term_Process)->values[3] = slot_IO_Term_Process_out; // out 
    ((Array)layout_IO_Term_Process)->values[4] = slot_IO_Term_Process_returnStatus; // returnStatus 
    IO_Term_Process_Class = (Class)new_Class(Object_Class, layout_IO_Term_Process_Class_class);
    IO_Term_Process_Class->layout = layout_IO_Term_Process;
    IO_Term_Process_Class->name = SMB_Process;
    
}

void init_IO_Term_PProcess_methods() {
    init_SMB_canRead();
    init_SMB_close();
    init_SMB_pclose();
    init_SMB_command();
    init_SMB_mode_();
    init_SMB_in();
    init_SMB_canWrite();
    init_SMB_isOpened();
    init_SMB_out();
    init_SMB_popen();
    init_SMB_returnStatus();
    init_SMB_canReadAndWrite();
    init_SMB_initialize();
    init_SMB_command_();
    init_SMB_open();
    init_SMB_isClosed();
    init_SMB_isValidMode_();
    init_SMB_mode();
    init_class_SMB_open_withMode_();
    init_class_SMB_initialize();
    init_class_SMB_open_();
    
}