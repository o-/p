
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
#include <system/ast/Method.h>
#include <pinocchio.h>

/* ======================================================================== */

extern AST_Method new_Method(unsigned int paramc, Type_Array body)
{
    AST_Method result = NEW_t(AST_Method);
    HEADER(result)      = (Object)Method_Class;
    result->paramc      = paramc;
    result->body        = body;
    return result;
}

extern void pre_initialize_Method()
{
    Method_Class        = new_Named_Class((Object)Object_Class, L"Method");
}

/* ======================================================================== */

extern void CNT_AST_Method_continue()
{
    Runtime_Env env = (Runtime_Env)current_env();
    poke_EXP(1, env->method->body->values[env->pc]);
    
    env->pc++;
    if (env->method->body->size->value <= env->pc) {
        zap_CNT();
    } 
    push_CNT(CNT_send_Eval);
}

extern void AST_Method_invoke(AST_Method method, Object self,
                              Object class, Type_Array args)
{
    push_restore_env();
    
    Runtime_Env env = new_Env(method->environment, (Object)method, args);
    
    env->self   = self;
    env->class  = class;
    env->method = method;
    env->pc     = 1;
    
    Env = (Object)env;
    
    if (method->body->size->value == 0 ) { 
        push_EXP(self);
        return; 
    }
    
    if (1 < method->body->size->value) {
        push_CNT(CNT_AST_Method_continue);
    }
    
    push_EXP(method->body->values[0]);
    push_CNT(CNT_send_Eval);
}

NATIVE(NM_AST_Method_eval)
    AST_Method_invoke((AST_Method) self, self, class, args);
}

NATIVE(NM_AST_Method_eval_)
    AST_Method_invoke((AST_Method) self, self, class, args);
}

extern void Method_invoke(Object method, Object self,
                          Object class, Type_Array args)
{
    Type_Class type = (Type_Class)HEADER(method);
    if (type == Method_Class) {
        return AST_Method_invoke((AST_Method)method, self, class, args);
    }
    if (type == Native_Method_Class) {
        return AST_Native_Method_invoke((AST_Native_Method)method, self,
                                        class, args);
    }
    // Only AST_Method supported for now
    if (!type) {
        printf("Expected Method NULL given");
    } else {
        printf("Expected Method got %ls\n", ((Type_Class)type)->name->value);
    }
    assert(NULL);
}

/* ======================================================================== */

extern void post_initialize_Method()
{
    store_native_method((Type_Class)Method_Class,SMB_eval, NM_AST_Method_eval);
    // TODO for now accecpt any number of arguments
    store_native_method((Type_Class)Method_Class,SMB_eval_, NM_AST_Method_eval_);
}