#include <system.h>
#include <scheme/symbols.h>

// Global symbols, readable format
// General purpose
object EVAL;
object PRE_EVAL_ENV;
// Variable
object ASSIGN_IN;
object FETCH_FROM;
// Environment
object STORE_AT_IN;
object SUBSCOPE_KEY;
object SCOPE_KEY;
object SET_PARENT;
object PARENT;
// Iscope_class
object NEW_SIZE;
// Iscope
object IAPPLY;
object APPLY_IN;
object SCOPE;
object SHIFT;
// Icapture
object INSTANCE;
// Iassign
object TO_EXPRESSION;
// Icall
object TO_SIZED;
// Ifixed
object OBJECT_AT;
object OBJECT_AT_PUT;
object NEW;
object SIZED;
object DELEGATE;
object SIZE;
object DISPATCH_DELEGATE_SIZE;
object SET_DISPATCH_DELEGATE;
object WITH_SIZE;

// Global symbols, generatable format
object SYMBOLdispatch_col_delegate_col_;
object SYMBOLbasicNew;
object SYMBOLobjectAt_col_put_col_;
object SYMBOLsuperclass;
object SYMBOLmethodDictionary;
object SYMBOLlayout;
object SYMBOLname;
object SYMBOLinstance;
object SYMBOLMetaclass;
object SYMBOLclass_col_super_col_instvars_col_classvars_col_;
object SYMBOLObject;
object SYMBOLsubclass_col_instvars_col_classvars_col_;
object SYMBOLprint;
object SYMBOLdoesNotUnderstand_col_env_col_args_col_;
object SYMBOLclass;
object SYMBOLdelegate;
object SYMBOLdispatch_col_delegate_col_size_col_;
object SYMBOLobjectAt_col_;
object SYMBOLeval;
object SYMBOLstore_col_at_col_in_col_;
object SYMBOLsubScope_col_key_col_;
object SYMBOLscope_col_key_col_;
object SYMBOLparent_col_;
object SYMBOLparent;
object SYMBOLsize_col_;
object SYMBOLnew_col_size_col_;
object SYMBOLiapply_col_;
object SYMBOLscope;
object SYMBOLbasicNew_col_;
object SYMBOLshift;
object SYMBOLtestMethod;
object SYMBOLArray;
object SYMBOLOrderedCollection;
object SYMBOLArrayedCollection;
object SYMBOLSequenceableCollection;
object SYMBOLCollection;
object SYMBOLFalse;
object SYMBOLTrue;
object SYMBOLBoolean;
object SYMBOLInteger;
object SYMBOLNumber;
object SYMBOLMagnitude;
object SYMBOLClass;
object SYMBOLClassBehaviour;
object SYMBOLnew;
object SYMBOLsize;
object SYMBOLlookup;
object SYMBOLeval_col_;
object SYMBOLdoesNotUnderstand_col_in_col_with_col_;
object SYMBOLapply_col_in_col_;
object SYMBOLlookup_col_;
object SYMBOLinitialize;
object SYMBOLIFixed;
object SYMBOLEnvironment;
object SYMBOLkey;
object SYMBOLindex;
object SYMBOLto_col_expression_col_;
object SYMBOLto_col_sized_col_;

void bootstrap_scheme_symbols() {
    // Ensure all symbols used by the VM are bootstrapped.
    define_symbol(SYMBOLeval,                                "eval");
    define_symbol(SYMBOLeval_col_,                           "eval:");
    define_symbol(SYMBOLstore_col_at_col_in_col_,            "store:at:in:");
    define_symbol(SYMBOLsubScope_col_key_col_,               "subScope:key:");
    define_symbol(SYMBOLscope_col_key_col_,                  "scope:key:");
    define_symbol(SYMBOLparent_col_,                         "parent:");
    define_symbol(SYMBOLparent,                              "parent");
    define_symbol(SYMBOLiapply_col_,                         "iapply:");
    define_symbol(SYMBOLapply_col_in_col_,                   "apply:in:");
    define_symbol(SYMBOLscope,                               "scope");
    define_symbol(SYMBOLobjectAt_col_,                       "objectAt:");
    define_symbol(SYMBOLobjectAt_col_put_col_,               "objectAt:put:");
    define_symbol(SYMBOLbasicNew,                            "basicNew");
    define_symbol(SYMBOLbasicNew_col_,                       "basicNew:");
    define_symbol(SYMBOLdelegate,                            "delegate");
    define_symbol(SYMBOLdispatch_col_delegate_col_,          "dispatch:delegate:");
    define_symbol(SYMBOLsize,                                "size");
    define_symbol(SYMBOLsize_col_,                           "size:");
    define_symbol(SYMBOLnew_col_size_col_,                   "new:size:");
    define_symbol(SYMBOLdispatch_col_delegate_col_size_col_, "dispatch:delegate:size:");
    define_symbol(SYMBOLshift,                               "shift");
    define_symbol(SYMBOLinstance,                            "instance");
    define_symbol(SYMBOLto_col_expression_col_,              "to:expression:");
    define_symbol(SYMBOLto_col_sized_col_,                   "to:sized:");
    EVAL                    = SYMBOLeval;
    PRE_EVAL_ENV            = SYMBOLeval_col_;
    STORE_AT_IN             = SYMBOLstore_col_at_col_in_col_;
    SUBSCOPE_KEY            = SYMBOLsubScope_col_key_col_;
    SCOPE_KEY               = SYMBOLscope_col_key_col_;
    SET_PARENT              = SYMBOLparent_col_;
    PARENT                  = SYMBOLparent;
    WITH_SIZE               = SYMBOLsize_col_;
    NEW_SIZE                = SYMBOLnew_col_size_col_;
    IAPPLY                  = SYMBOLiapply_col_;
    APPLY_IN                = SYMBOLapply_col_in_col_;
    SCOPE                   = SYMBOLscope;
    OBJECT_AT               = SYMBOLobjectAt_col_;
    OBJECT_AT_PUT           = SYMBOLobjectAt_col_put_col_;
    NEW                     = SYMBOLbasicNew;
    SIZED                   = SYMBOLbasicNew_col_;
    DELEGATE                = SYMBOLdelegate;
    SET_DISPATCH_DELEGATE   = SYMBOLdispatch_col_delegate_col_;
    SIZE                    = SYMBOLsize;
    DISPATCH_DELEGATE_SIZE  = SYMBOLdispatch_col_delegate_col_size_col_;
    SHIFT                   = SYMBOLshift;
    INSTANCE                = SYMBOLinstance;
    TO_EXPRESSION           = SYMBOLto_col_expression_col_;
    TO_SIZED                = SYMBOLto_col_sized_col_;
}
