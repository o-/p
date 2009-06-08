#include <system.h>
#include <thread.h>

accessor_for(iconst, constant)

with_pre_eval1(iconst_new, context, constant,
    return_from_context(context, (object)make_iconst(constant));
)

define_bootstrapping_class(iconst, 
    // instance
    if_selector(selector, EVAL,         iconst_constant);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);,
    // class
    if_selector(selector, SIZED,        iconst_new);
)

// Object creation
iconst_object make_iconst(object constant) {
    new_instance(iconst);
    result->constant        = constant;
    return result;
}
