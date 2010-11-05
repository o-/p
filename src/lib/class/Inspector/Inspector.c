#include <lib/class/Inspector/Inspector.h>


Optr slot_Inspector_Inspector_Class_class_inspector;
Optr layout_Inspector_Inspector_Class_class;


static void init_SMB_shallowInspect_on_() {
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray12083 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend12085 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_1);
    Array PThreadedCode12084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend12085, (Optr)&t_method_return);
    Method PMethod12082 = new_Method_with(PArray12083, empty_Array, empty_Array, PThreadedCode12084, 1, PSend12085);
    
    MethodClosure MC_SMB_shallowInspect_on_ = new_MethodClosure((Method)PMethod12082, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_shallowInspect_on_, MC_SMB_shallowInspect_on_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12088 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12087 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12088, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12086 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12087, 2, PSend12088, self);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12086, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray12090 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12092 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12091 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12092, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12089 = new_Method_with(PArray12090, empty_Array, empty_Array, PThreadedCode12091, 2, PSend12092, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12089, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspect_() {
    /*
    inspect: anObject
// 	inspector ifNil: [ inspector := self new ].
// 	inspector inspect: anObject.
    */
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12094 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12097 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12099 = new_Send((Optr)VAR_anObject_0_0, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12103 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode12102 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12103, (Optr)&t_block_return);
    Block PBlock12101 = new_Block_with(empty_Array, empty_Array, PThreadedCode12102, 1, PSend12103);
    // ifTrue:. 
    Send PSend12100 = new_Send((Optr)PSend12099, SMB_ifTrue_, 1, (Optr)PBlock12101);
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    // titleStream. 
    Send PSend12104 = new_Send((Optr)self, SMB_titleStream, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12105 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)VAR_anObject_0_0, (Optr)PSend12104);
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    // inspectChildren:. 
    Send PSend12106 = new_Send((Optr)self, SMB_inspectChildren_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12098 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12099, (Optr)&t_send_ifTrue_, (Optr)PSend12100, (Optr)PBlock12101, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12104, (Optr)&t_send2, (Optr)PSend12105, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12106, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12096 = new_Block_with(PArray12097, empty_Array, PThreadedCode12098, 4, PSend12100, PSend12105, PSend12106, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12107 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12096);
    Array PThreadedCode12095 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12096, (Optr)&t_send1, (Optr)PSend12107, (Optr)&t_method_return);
    Method PMethod12093 = new_Method_with(PArray12094, empty_Array, empty_Array, PThreadedCode12095, 1, PSend12107);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12093, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspect_, MC_SMB_inspect_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12109 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    // inspectChildrenOn:. 
    Send PSend12111 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectChildrenOn_, 1, (Optr)self);
    Array PThreadedCode12110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12111, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12108 = new_Method_with(PArray12109, empty_Array, empty_Array, PThreadedCode12110, 2, PSend12111, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12108, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_class_SMB_inspect_() {
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12113 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12118 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign12117 = new_Assign((Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)PSend12118);
    Array PThreadedCode12116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12117, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12118, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12115 = new_Block_with(empty_Array, empty_Array, PThreadedCode12116, 1, PAssign12117);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12119 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_ifNil_, 1, (Optr)PBlock12115);
    // inspect:. 
    Send PSend12120 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_inspect_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12114 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_closure, (Optr)PBlock12115, (Optr)&t_send1, (Optr)PSend12119, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12120, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12112 = new_Method_with(PArray12113, empty_Array, empty_Array, PThreadedCode12114, 3, PSend12119, PSend12120, self);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12112, HEADER(Inspector_Inspector_Class));
    store_method(HEADER(Inspector_Inspector_Class), SMB_inspect_, MC_SMB_inspect_);
}

void init_Inspector_PInspector_layout() {
    slot_Inspector_Inspector_Class_class_inspector = (Optr)new_Slot(5, L"inspector");
    layout_Inspector_Inspector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Inspector_Inspector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Inspector_Inspector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Inspector_Inspector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Inspector_Inspector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Inspector_Inspector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Inspector_Inspector_Class_class)->values[5] = slot_Inspector_Inspector_Class_class_inspector; // inspector 
    
    Symbol  SMB_Inspector = new_Symbol(L"Inspector");
    Inspector_Inspector_Class = (Class)new_Class(Object_Class, layout_Inspector_Inspector_Class_class);
    Inspector_Inspector_Class->layout = empty_object_layout;
    Inspector_Inspector_Class->name = SMB_Inspector;
    
}

void init_Inspector_PInspector_methods() {
    init_SMB_shallowInspect_on_();
    init_SMB_titleStream();
    init_SMB_child_value_();
    init_SMB_inspect_();
    init_SMB_inspectChildren_();
    init_class_SMB_inspect_();
    
}