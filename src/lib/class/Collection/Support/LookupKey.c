#include <lib/class/Collection/Support/LookupKey.h>


Optr layout_Collection_Support_LookupKey_Class_class;
Optr slot_Collection_Support_LookupKey_key;
Optr layout_Collection_Support_LookupKey;


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7464 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend7466 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt_, 1, (Optr)self);
    Array PThreadedCode7465 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7466, (Optr)&t_method_return);
    Method PMethod7463 = new_Method_with(PArray7464, empty_Array, empty_Array, PThreadedCode7465, 1, PSend7466);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod7463, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend7469 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB_hash, 0);
    Array PThreadedCode7468 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_send0, (Optr)PSend7469, (Optr)&t_method_return);
    Method PMethod7467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7468, 1, PSend7469);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod7467, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_key_() {
    /*
    key: aKey 
// 	"Answer an instance of me with the argument as the lookup up."
// 
// 	^self basicNew key: aKey
    */
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7471 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7473 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7473, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7470 = new_Method_with(PArray7471, empty_Array, empty_Array, PThreadedCode7472, 2, PAssign7473, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7470, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7475 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend7477 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode7476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7477, (Optr)&t_method_return);
    Method PMethod7474 = new_Method_with(PArray7475, empty_Array, empty_Array, PThreadedCode7476, 1, PSend7477);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod7474, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7479 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7481 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // <. 
    Send PSend7482 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__lt_, 1, (Optr)PSend7481);
    Array PThreadedCode7480 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7481, (Optr)&t_send1, (Optr)PSend7482, (Optr)&t_method_return);
    Method PMethod7478 = new_Method_with(PArray7479, empty_Array, empty_Array, PThreadedCode7480, 1, PSend7482);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod7478, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7484 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7487 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7489 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7490 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_species, 0);
    // =. 
    Send PSend7491 = new_Send((Optr)PSend7489, SMB__equals_, 1, (Optr)PSend7490);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7495 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // =. 
    Send PSend7496 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__equals_, 1, (Optr)PSend7495);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7497 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7496);
    Array PThreadedCode7494 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7495, (Optr)&t_send1, (Optr)PSend7496, (Optr)&t_send1, (Optr)PSend7497, (Optr)&t_block_return);
    Block PBlock7493 = new_Block_with(empty_Array, empty_Array, PThreadedCode7494, 1, PSend7497);
    // escape:. 
    Send PSend7500 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7499 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7500, (Optr)&t_block_return);
    Block PBlock7498 = new_Block_with(empty_Array, empty_Array, PThreadedCode7499, 1, PSend7500);
    // ifTrue:ifFalse:. 
    Send PSend7492 = new_Send((Optr)PSend7491, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock7493, (Optr)PBlock7498);
    Array PThreadedCode7488 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7489, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7490, (Optr)&t_send1, (Optr)PSend7491, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend7492, (Optr)PBlock7493, (Optr)PBlock7498, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7486 = new_Block_with(PArray7487, empty_Array, PThreadedCode7488, 2, PSend7492, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7501 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7486);
    Array PThreadedCode7485 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7486, (Optr)&t_send1, (Optr)PSend7501, (Optr)&t_method_return);
    Method PMethod7483 = new_Method_with(PArray7484, empty_Array, empty_Array, PThreadedCode7485, 1, PSend7501);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7483, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode7503 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_method_return);
    Method PMethod7502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7503, 1, slot_Collection_Support_LookupKey_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod7502, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key, MC_SMB_key);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7505 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7507 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend7508 = new_Send((Optr)PSend7507, SMB_not, 0);
    Array PThreadedCode7506 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend7507, (Optr)&t_send0, (Optr)PSend7508, (Optr)&t_method_return);
    Method PMethod7504 = new_Method_with(PArray7505, empty_Array, empty_Array, PThreadedCode7506, 1, PSend7508);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod7504, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray7510 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend7512 = new_Send((Optr)self, SMB_basicNew, 0);
    // key:. 
    Send PSend7513 = new_Send((Optr)PSend7512, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Array PThreadedCode7511 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7512, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend7513, (Optr)&t_method_return);
    Method PMethod7509 = new_Method_with(PArray7510, empty_Array, empty_Array, PThreadedCode7511, 1, PSend7513);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7509, HEADER(Collection_Support_LookupKey_Class));
    store_method(HEADER(Collection_Support_LookupKey_Class), SMB_key_, MC_SMB_key_);
}

void init_Collection_Support_PLookupKey_layout() {
    layout_Collection_Support_LookupKey_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_LookupKey = new_Symbol(L"LookupKey");
    slot_Collection_Support_LookupKey_key = (Optr)new_Slot(0, L"key");
    layout_Collection_Support_LookupKey = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Collection_Support_LookupKey)->values[0] = slot_Collection_Support_LookupKey_key; // key 
    Collection_Support_LookupKey_Class = (Class)new_Class(Object_Class, layout_Collection_Support_LookupKey_Class_class);
    Collection_Support_LookupKey_Class->layout = layout_Collection_Support_LookupKey;
    Collection_Support_LookupKey_Class->name = SMB_LookupKey;
    
}

void init_Collection_Support_PLookupKey_methods() {
    init_SMB__gt_();
    init_SMB_hash();
    init_SMB_key_();
    init_SMB__gt__equals_();
    init_SMB__lt_();
    init_SMB__equals_();
    init_SMB_key();
    init_SMB__lt__equals_();
    init_class_SMB_key_();
    
}