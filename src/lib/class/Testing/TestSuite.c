#include <lib/class/Testing/TestSuite.h>


Optr layout_Testing_TestSuite_Class_class;
Optr slot_Testing_TestSuite_tests;
Optr slot_Testing_TestSuite_resources;
Optr slot_Testing_TestSuite_name;
Optr layout_Testing_TestSuite;


static void init_SMB_resources() {
    Symbol SMB_resources = new_Symbol(L"resources");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11436 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11441 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11440 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11441);
    Array PThreadedCode11439 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11440, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11441, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11438 = new_Block_with(empty_Array, empty_Array, PThreadedCode11439, 1, PAssign11440);
    // ifTrue:. 
    Send PSend11437 = new_Send((Optr)PSend11436, SMB_ifTrue_, 1, (Optr)PBlock11438);
    Array PThreadedCode11435 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11436, (Optr)&t_send_ifTrue_, (Optr)PSend11437, (Optr)PBlock11438, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11434 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11435, 2, PSend11437, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11434, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11444 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11445 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11447 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11450 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11452 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11453 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11452);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11454 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11451 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11452, (Optr)&t_send1, (Optr)PSend11453, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11454, (Optr)&t_method_return);
    Block PBlock11449 = new_Block_with(PArray11450, empty_Array, PThreadedCode11451, 2, PSend11453, PSend11454);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11455 = new_Send((Optr)PBlock11449, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11448 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11449, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11455, (Optr)&t_method_return);
    Block PBlock11446 = new_Block_with(PArray11447, empty_Array, PThreadedCode11448, 1, PSend11455);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11456 = new_Send((Optr)PSend11444, SMB_inject_into_, 2, (Optr)PSend11445, (Optr)PBlock11446);
    Array PThreadedCode11443 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11444, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11445, (Optr)&t_push_closure, (Optr)PBlock11446, (Optr)&t_send2, (Optr)PSend11456, (Optr)&t_method_return);
    Method PMethod11442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11443, 1, PSend11456);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11442, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11458 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11460 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11461 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11463 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11465 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11465, (Optr)&t_method_return);
    Block PBlock11462 = new_Block_with(PArray11463, empty_Array, PThreadedCode11464, 1, PSend11465);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11466 = new_Send((Optr)PSend11461, SMB_do_, 1, (Optr)PBlock11462);
    Array PThreadedCode11459 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11460, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11461, (Optr)&t_push_closure, (Optr)PBlock11462, (Optr)&t_send1, (Optr)PSend11466, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11457 = new_Method_with(PArray11458, empty_Array, empty_Array, PThreadedCode11459, 3, PSend11460, PSend11466, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11457, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11468 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11471 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11474 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11473 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11474);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11475 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11477 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11479 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11483 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11483);
    Array PThreadedCode11482 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11483, (Optr)&t_send1, (Optr)PSend11484, (Optr)&t_block_return);
    Block PBlock11481 = new_Block_with(empty_Array, empty_Array, PThreadedCode11482, 1, PSend11484);
    // ifFalse:. 
    Send PSend11480 = new_Send((Optr)PSend11479, SMB_ifFalse_, 1, (Optr)PBlock11481);
    Array PThreadedCode11478 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11479, (Optr)&t_send_ifFalse_, (Optr)PSend11480, (Optr)PBlock11481, (Optr)&t_method_return);
    Block PBlock11476 = new_Block_with(PArray11477, empty_Array, PThreadedCode11478, 1, PSend11480);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11485 = new_Send((Optr)PSend11475, SMB_do_, 1, (Optr)PBlock11476);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11488 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11487 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11488, (Optr)&t_block_return);
    Block PBlock11486 = new_Block_with(empty_Array, empty_Array, PThreadedCode11487, 1, PSend11488);
    // resources. 
    Send PSend11491 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11493 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11495 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11494 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11495, (Optr)&t_method_return);
    Block PBlock11492 = new_Block_with(PArray11493, empty_Array, PThreadedCode11494, 1, PSend11495);
    // do:. 
    Send PSend11496 = new_Send((Optr)PSend11491, SMB_do_, 1, (Optr)PBlock11492);
    Array PThreadedCode11490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11491, (Optr)&t_push_closure, (Optr)PBlock11492, (Optr)&t_send1, (Optr)PSend11496, (Optr)&t_block_return);
    Block PBlock11489 = new_Block_with(empty_Array, empty_Array, PThreadedCode11490, 1, PSend11496);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11497 = new_Send((Optr)PBlock11486, SMB_ensure_, 1, (Optr)PBlock11489);
    Array PThreadedCode11472 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11473, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11475, (Optr)&t_push_closure, (Optr)PBlock11476, (Optr)&t_send1, (Optr)PSend11485, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11486, (Optr)&t_push_closure, (Optr)PBlock11489, (Optr)&t_send1, (Optr)PSend11497, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11470 = new_Block_with(PArray11471, empty_Array, PThreadedCode11472, 4, PAssign11473, PSend11485, PSend11497, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11498 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11470);
    Array PThreadedCode11469 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11470, (Optr)&t_send1, (Optr)PSend11498, (Optr)&t_method_return);
    Method PMethod11467 = new_Method_with(empty_Array, PArray11468, empty_Array, PThreadedCode11469, 1, PSend11498);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11467, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11500 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11502 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11503 = new_Send((Optr)PSend11502, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11501 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11502, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11503, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11499 = new_Method_with(PArray11500, empty_Array, empty_Array, PThreadedCode11501, 2, PSend11503, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11499, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11505 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11507 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11507, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11504 = new_Method_with(PArray11505, empty_Array, empty_Array, PThreadedCode11506, 2, PAssign11507, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11504, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11509 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11512 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11514 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11513 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11514, (Optr)&t_method_return);
    Block PBlock11511 = new_Block_with(PArray11512, empty_Array, PThreadedCode11513, 1, PSend11514);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11515 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11511);
    Array PThreadedCode11510 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11511, (Optr)&t_send1, (Optr)PSend11515, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11508 = new_Method_with(PArray11509, empty_Array, empty_Array, PThreadedCode11510, 2, PSend11515, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11508, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11517 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11519 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11520 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11522 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11524 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11524, (Optr)&t_method_return);
    Block PBlock11521 = new_Block_with(PArray11522, empty_Array, PThreadedCode11523, 1, PSend11524);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11525 = new_Send((Optr)PSend11520, SMB_do_, 1, (Optr)PBlock11521);
    Array PThreadedCode11518 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11519, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11520, (Optr)&t_push_closure, (Optr)PBlock11521, (Optr)&t_send1, (Optr)PSend11525, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11516 = new_Method_with(PArray11517, empty_Array, empty_Array, PThreadedCode11518, 3, PSend11519, PSend11525, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11516, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11527 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11529 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11531 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11533 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11532 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11533, (Optr)&t_method_return);
    Block PBlock11530 = new_Block_with(PArray11531, empty_Array, PThreadedCode11532, 1, PSend11533);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11534 = new_Send((Optr)PSend11529, SMB_do_, 1, (Optr)PBlock11530);
    Array PThreadedCode11528 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11529, (Optr)&t_push_closure, (Optr)PBlock11530, (Optr)&t_send1, (Optr)PSend11534, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11526 = new_Method_with(PArray11527, empty_Array, empty_Array, PThreadedCode11528, 2, PSend11534, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11526, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11536 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11538 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11538, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11535 = new_Method_with(PArray11536, empty_Array, empty_Array, PThreadedCode11537, 2, PAssign11538, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11535, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11540 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11540, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11539, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11543 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11548 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11547 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11548);
    Array PThreadedCode11546 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11547, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11548, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11545 = new_Block_with(empty_Array, empty_Array, PThreadedCode11546, 1, PAssign11547);
    // ifTrue:. 
    Send PSend11544 = new_Send((Optr)PSend11543, SMB_ifTrue_, 1, (Optr)PBlock11545);
    Array PThreadedCode11542 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11543, (Optr)&t_send_ifTrue_, (Optr)PSend11544, (Optr)PBlock11545, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11542, 2, PSend11544, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11541, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11550 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11553 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11555 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11556 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11554 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11556, (Optr)&t_method_return);
    Block PBlock11552 = new_Block_with(PArray11553, empty_Array, PThreadedCode11554, 2, PSend11555, PSend11556);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11557 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11558 = new_Send((Optr)PBlock11552, SMB_value_, 1, (Optr)PSend11557);
    Array PThreadedCode11551 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11552, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11557, (Optr)&t_send1, (Optr)PSend11558, (Optr)&t_method_return);
    Method PMethod11549 = new_Method_with(PArray11550, empty_Array, empty_Array, PThreadedCode11551, 1, PSend11558);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11549, HEADER(Testing_TestSuite_Class));
    store_method(HEADER(Testing_TestSuite_Class), SMB_named_, MC_SMB_named_);
}

void init_Testing_TestSuite_layout() {
    layout_Testing_TestSuite_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestSuite_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestSuite_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestSuite_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestSuite_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestSuite_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestSuite = new_Symbol(L"TestSuite");
    slot_Testing_TestSuite_tests = (Optr)new_Slot(0, L"tests");
    slot_Testing_TestSuite_resources = (Optr)new_Slot(1, L"resources");
    slot_Testing_TestSuite_name = (Optr)new_Slot(2, L"name");
    layout_Testing_TestSuite = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Testing_TestSuite)->values[0] = slot_Testing_TestSuite_tests; // tests 
    ((Array)layout_Testing_TestSuite)->values[1] = slot_Testing_TestSuite_resources; // resources 
    ((Array)layout_Testing_TestSuite)->values[2] = slot_Testing_TestSuite_name; // name 
    Testing_TestSuite_Class = (Class)new_Class(Object_Class, layout_Testing_TestSuite_Class_class);
    Class_set_superclass(Testing_TestSuite_Class, Object_Class);
    Testing_TestSuite_Class->layout = layout_Testing_TestSuite;
    HEADER(Testing_TestSuite_Class)->layout = layout_Testing_TestSuite_Class_class;
    Testing_TestSuite_Class->name = SMB_TestSuite;
    
}

void init_Testing_TestSuite_methods() {
    init_SMB_resources();
    init_SMB_defaultResources();
    init_SMB_addDependentToHierachy_();
    init_SMB_run();
    init_SMB_addTest_();
    init_SMB_resources_();
    init_SMB_addTests_();
    init_SMB_removeDependentFromHierachy_();
    init_SMB_run_();
    init_SMB_name_();
    init_SMB_name();
    init_SMB_tests();
    init_class_SMB_named_();
    
}