#include <lib/class/Kernel/AST/Constant.h>


Optr layout_Kernel_AST_Constant_Class_class;
Optr slot_Kernel_AST_Constant_constant;
Optr layout_Kernel_AST_Constant;


static void init_SMB_constant() {
    Symbol SMB_constant = new_Symbol(L"constant");
    Array PThreadedCode4107 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Constant_constant, (Optr)&t_method_return);
    Method PMethod4106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4107, 1, slot_Kernel_AST_Constant_constant);
    
    MethodClosure MC_SMB_constant = new_MethodClosure((Method)PMethod4106, Constant_Class);
    store_method(Constant_Class, SMB_constant, MC_SMB_constant);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_object_0_1 = new_Variable_named(L"object", 0);
    Array PArray4109 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_object_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4112 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant_ = new_Symbol(L"constant:");
    // constant:. 
    Send PSend4114 = new_Send((Optr)VAR__receiver__1_0, SMB_constant_, 1, (Optr)self);
    Symbol SMB_object_ = new_Symbol(L"object:");
    // object:. 
    Send PSend4115 = new_Send((Optr)VAR__receiver__1_0, SMB_object_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_environment_ = new_Symbol(L"environment:");
    // environment:. 
    Send PSend4116 = new_Send((Optr)VAR__receiver__1_0, SMB_environment_, 1, (Optr)VAR_object_0_1);
    Array PThreadedCode4113 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend4115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_object_0_1, (Optr)&t_send1, (Optr)PSend4116, (Optr)&t_method_return);
    Block PBlock4111 = new_Block_with(PArray4112, empty_Array, PThreadedCode4113, 3, PSend4114, PSend4115, PSend4116);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4117 = new_Send((Optr)PAssignmentFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4118 = new_Send((Optr)PBlock4111, SMB_value_, 1, (Optr)PSend4117);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend4119 = new_Send((Optr)PSend4118, SMB_signal, 0);
    Array PThreadedCode4110 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock4111, (Optr)&t_push_class_reference, (Optr)PAssignmentFailure_classReference, (Optr)&t_send0, (Optr)PSend4117, (Optr)&t_send1, (Optr)PSend4118, (Optr)&t_send0, (Optr)PSend4119, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4108 = new_Method_with(PArray4109, empty_Array, empty_Array, PThreadedCode4110, 2, PSend4119, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod4108, Constant_Class);
    store_method(Constant_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray4121 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4124 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4126 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4127 = new_Send((Optr)VAR_aConstant_0_0, SMB_species, 0);
    // =. 
    Send PSend4128 = new_Send((Optr)PSend4126, SMB__equals_, 1, (Optr)PSend4127);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4132 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4132, (Optr)&t_block_return);
    Block PBlock4130 = new_Block_with(empty_Array, empty_Array, PThreadedCode4131, 1, PSend4132);
    // ifFalse:. 
    Send PSend4129 = new_Send((Optr)PSend4128, SMB_ifFalse_, 1, (Optr)PBlock4130);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend4133 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    // =. 
    Send PSend4134 = new_Send((Optr)slot_Kernel_AST_Constant_constant, SMB__equals_, 1, (Optr)PSend4133);
    Array PThreadedCode4125 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4126, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend4127, (Optr)&t_send1, (Optr)PSend4128, (Optr)&t_send_ifFalse_, (Optr)PSend4129, (Optr)PBlock4130, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Constant_constant, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend4133, (Optr)&t_send1, (Optr)PSend4134, (Optr)&t_method_return);
    Block PBlock4123 = new_Block_with(PArray4124, empty_Array, PThreadedCode4125, 2, PSend4129, PSend4134);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4135 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4123);
    Array PThreadedCode4122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4123, (Optr)&t_send1, (Optr)PSend4135, (Optr)&t_method_return);
    Method PMethod4120 = new_Method_with(PArray4121, empty_Array, empty_Array, PThreadedCode4122, 1, PSend4135);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4120, Constant_Class);
    store_method(Constant_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4137 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    // visitConstant:. 
    Send PSend4139 = new_Send((Optr)VAR_visitor_0_0, SMB_visitConstant_, 1, (Optr)self);
    Array PThreadedCode4138 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4139, (Optr)&t_method_return);
    Method PMethod4136 = new_Method_with(PArray4137, empty_Array, empty_Array, PThreadedCode4138, 1, PSend4139);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4136, Constant_Class);
    store_method(Constant_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4141 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_4143 = new_String(L"Constant(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_4143_Const = new_Constant((Optr)string_4143);
    // <<. 
    Send PSend4144 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_4143_Const);
    // printOn:. 
    Send PSend4145 = new_Send((Optr)slot_Kernel_AST_Constant_constant, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend4147 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode4142 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_4143, (Optr)&t_send1, (Optr)PSend4144, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Constant_constant, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend4145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend4147, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4140 = new_Method_with(PArray4141, empty_Array, empty_Array, PThreadedCode4142, 4, PSend4144, PSend4145, PSend4147, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4140, Constant_Class);
    store_method(Constant_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_constant_() {
    Symbol SMB_constant_ = new_Symbol(L"constant:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4149 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4151 = new_Assign((Optr)slot_Kernel_AST_Constant_constant, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4151, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4148 = new_Method_with(PArray4149, empty_Array, empty_Array, PThreadedCode4150, 2, PAssign4151, self);
    
    MethodClosure MC_SMB_constant_ = new_MethodClosure((Method)PMethod4148, Constant_Class);
    store_method(Constant_Class, SMB_constant_, MC_SMB_constant_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray4153 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper4155 = new_Super(SMB_new, 0);
    Symbol SMB_constant_ = new_Symbol(L"constant:");
    // constant:. 
    Send PSend4156 = new_Send((Optr)PSuper4155, SMB_constant_, 1, (Optr)VAR_aConstant_0_0);
    Array PThreadedCode4154 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper4155, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send1, (Optr)PSend4156, (Optr)&t_method_return);
    Method PMethod4152 = new_Method_with(PArray4153, empty_Array, empty_Array, PThreadedCode4154, 1, PSend4156);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod4152, HEADER(Constant_Class));
    store_method(HEADER(Constant_Class), SMB_new_, MC_SMB_new_);
}

void init_Kernel_AST_PConstant_layout() {
    layout_Kernel_AST_Constant_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Constant_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Constant_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Constant_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Constant_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Constant_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Constant = new_Symbol(L"Constant");
    slot_Kernel_AST_Constant_constant = (Optr)new_Slot(0, L"constant");
    layout_Kernel_AST_Constant = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Kernel_AST_Constant)->values[0] = slot_Kernel_AST_Constant_constant; // constant 
    Constant_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_Constant_Class_class);
    Constant_Class->layout = layout_Kernel_AST_Constant;
    Constant_Class->name = SMB_Constant;
    
}

void init_Kernel_AST_PConstant_methods() {
    init_SMB_constant();
    init_SMB_assign_on_();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_constant_();
    init_class_SMB_new_();
    
}