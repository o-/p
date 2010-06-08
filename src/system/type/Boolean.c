#include <stdlib.h>
#include <stdio.h>
#include <system/type/Boolean.h>

/* ========================================================================= */

Object true;
Object false;
Constant false_Const;
Constant true_Const;

/* ========================================================================= */

Object get_bool(bool value)
{
    return value ? true : false;
}

/* ========================================================================= */

void CNT_loop_apply()
{
    Object closure = peek_EXP(1);
    push_EXP(closure);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

/* ========================================================================= */

NATIVE1(True_whileTrue_)
    push_CNT(loop_apply);
    push_EXP(nil);
}

NATIVE1(False_whileFalse_)
    push_CNT(loop_apply);
    push_EXP(nil);
}

NATIVE2(True_ifTrue_ifFalse_)
    Object closure = NATIVE_ARG(0);
    zapn_EXP(2);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

NATIVE2(False_ifTrue_ifFalse_)
    Object closure = NATIVE_ARG(1);
    zapn_EXP(2);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, 0);
}

/* ========================================================================= */

void post_init_Boolean()
{
    true         = instantiate(True_Class);
    true_Const   = new_Constant((Object)true);

    false        = instantiate(False_Class);
    false_Const  = new_Constant((Object)false);

    Dictionary natives;
    
    natives = add_plugin(L"Type.True");
    store_native(natives, new_Symbol_cached(L"whileTrue:"), NM_True_whileTrue_);
    store_native(natives, new_Symbol_cached(L"ifTrue:ifFalse:"), NM_True_ifTrue_ifFalse_);

    natives = add_plugin(L"Type.False");
    store_native(natives, new_Symbol_cached(L"whileFalse:"), NM_False_whileFalse_);
    store_native(natives, new_Symbol_cached(L"ifTrue:ifFalse:"), NM_False_ifTrue_ifFalse_);
}

