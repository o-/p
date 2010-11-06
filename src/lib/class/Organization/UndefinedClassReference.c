#include <lib/class/Organization/UndefinedClassReference.h>


Optr layout_Organization_UndefinedClassReference_Class_class;
Optr slot_Organization_UndefinedClassReference_reference;
Optr layout_Organization_UndefinedClassReference;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21869 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21872 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_21874 = new_String(L"Reference to undefined class in package ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21874_Const = new_Constant((Optr)string_21874);
    // <<. 
    Send PSend21875 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21874_Const);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21876 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21877 = new_Send((Optr)PSend21876, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // package. 
    Send PSend21878 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray21880 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21882 = new_Send((Optr)VAR_value_2_1, SMB__pequals_, 1, (Optr)slot_Organization_UndefinedClassReference_reference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_21886 = new_String(L": ");
    Constant string_21886_Const = new_Constant((Optr)string_21886);
    // <<. 
    Send PSend21887 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21886_Const);
    // <<. 
    Send PSend21888 = new_Send((Optr)PSend21887, SMB__shiftLeft_, 1, (Optr)VAR_key_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21889 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21888);
    Array PThreadedCode21885 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21886, (Optr)&t_send1, (Optr)PSend21887, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_send1, (Optr)PSend21888, (Optr)&t_send1, (Optr)PSend21889, (Optr)&t_block_return);
    Block PBlock21884 = new_Block_with(empty_Array, empty_Array, PThreadedCode21885, 1, PSend21889);
    // ifTrue:. 
    Send PSend21883 = new_Send((Optr)PSend21882, SMB_ifTrue_, 1, (Optr)PBlock21884);
    Array PThreadedCode21881 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send1, (Optr)PSend21882, (Optr)&t_send_ifTrue_, (Optr)PSend21883, (Optr)PBlock21884, (Optr)&t_method_return);
    Block PBlock21879 = new_Block_with(PArray21880, empty_Array, PThreadedCode21881, 1, PSend21883);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21890 = new_Send((Optr)PSend21878, SMB_keysAndValuesDo_, 1, (Optr)PBlock21879);
    Array PThreadedCode21873 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21874, (Optr)&t_send1, (Optr)PSend21875, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend21876, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21877, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend21878, (Optr)&t_push_closure, (Optr)PBlock21879, (Optr)&t_send1, (Optr)PSend21890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21871 = new_Block_with(PArray21872, empty_Array, PThreadedCode21873, 4, PSend21875, PSend21877, PSend21890, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21891 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21871);
    Array PThreadedCode21870 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21871, (Optr)&t_send1, (Optr)PSend21891, (Optr)&t_method_return);
    Method PMethod21868 = new_Method_with(PArray21869, empty_Array, empty_Array, PThreadedCode21870, 1, PSend21891);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod21868, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_reference() {
    Symbol SMB_reference = new_Symbol(L"reference");
    Array PThreadedCode21893 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_method_return);
    Method PMethod21892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21893, 1, slot_Organization_UndefinedClassReference_reference);
    
    MethodClosure MC_SMB_reference = new_MethodClosure((Method)PMethod21892, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference, MC_SMB_reference);
}


static void init_SMB_reference_() {
    Symbol SMB_reference_ = new_Symbol(L"reference:");
    Variable VAR_ref_0_0 = new_Variable_named(L"ref", 0);
    Array PArray21895 = new_Array_with(1, (Optr)VAR_ref_0_0);
    Assign PAssign21897 = new_Assign((Optr)slot_Organization_UndefinedClassReference_reference, (Optr)VAR_ref_0_0);
    Array PThreadedCode21896 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21897, (Optr)&t_push_variable, (Optr)VAR_ref_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21894 = new_Method_with(PArray21895, empty_Array, empty_Array, PThreadedCode21896, 2, PAssign21897, self);
    
    MethodClosure MC_SMB_reference_ = new_MethodClosure((Method)PMethod21894, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference_, MC_SMB_reference_);
}

void init_Organization_PUndefinedClassReference_layout() {
    layout_Organization_UndefinedClassReference_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UndefinedClassReference = new_Symbol(L"UndefinedClassReference");
    slot_Organization_UndefinedClassReference_reference = (Optr)new_Slot(1, L"reference");
    layout_Organization_UndefinedClassReference = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Organization_UndefinedClassReference)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Organization_UndefinedClassReference)->values[1] = slot_Organization_UndefinedClassReference_reference; // reference 
    UndefinedClassReference_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Organization_UndefinedClassReference_Class_class);
    UndefinedClassReference_Class->layout = layout_Organization_UndefinedClassReference;
    UndefinedClassReference_Class->name = SMB_UndefinedClassReference;
    
}

void init_Organization_PUndefinedClassReference_methods() {
    init_SMB_warnOn_();
    init_SMB_reference();
    init_SMB_reference_();
    
}