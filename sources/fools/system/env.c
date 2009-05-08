#include <system.h>

// env>>fetch:from:
void inline env_fetch_from() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>fetch:from:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 2).pointer) {
        int index = number_value(array_at(receiver->arguments, 1).number);
        object value = env_at(env, index);
        array_at_put(receiver->return_context.context->arguments, 1, value);
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        assert(NULL); // XXX should go to error-handler here.
    }
    new_target(receiver, env->parent);
    debug("ret>>env>>fetch:from:\n");
    set_transfer(receiver);
}

// env>>store:at:in:
void inline env_store_at_in() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>store:at:in:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 4);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 3).pointer) {
        int index = number_value(array_at(receiver->arguments, 2).number);
        object value = array_at(receiver->arguments, 1);
        env_at_put(env, index, value);
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        return;
    }
    new_target(receiver, env->parent);
    debug("ret>>env>>store:at:in:\n");
    set_transfer(receiver);
}

// env>>subScope:key:
void inline env_subscope() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>subScope:key:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    object env  = header(receiver);
    // arguments at: 0 -> selector
    int size    = number_value(argument_at(receiver, 1).number);
    object key  = argument_at(receiver, 2);

    env_object new_env = make_env(key, env, size);
    set_argument(return_context(receiver), 1, (object)new_env);

    debug("ret>>env>>subScope:key:\n");

    return_from_context(receiver);
}

// env>>parent:
void inline env_set_parent() {
    debug("env>>parent:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 2);
    // arguments at: 0 -> selector
    object env = header(receiver);
    object new_env = argument_at(receiver, 1);

    env.env->parent = new_env;

    // Don't accidentally set parent to self!
    assert(env.env->parent.env != env.env);
    debug("ret>>env>>parent:\n");
    return_from_context(receiver);
}

// env>>env:parent:
void inline env_set_env_parent() {
    debug("env>>env:parent:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    object env = argument_at(receiver, 1);
    object new_env = argument_at(receiver, 2);

    context_object context = make_context(new_env, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    context->return_context = (object)receiver;

    set_new_message(receiver, PARENT);
    receiver->code = &env_set_parent;

    debug("ret>>env>>env:parent:\n");
    set_transfer(context);
}

// env>>parent
void inline env_parent() {
    debug("env>>envParent:\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    object env = header(receiver);
    set_argument(return_context(receiver), 1, env.env->parent);
    debug("ret>>env>>envParent:\n");
    return_from_context(receiver);
}

void env_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, FETCH_FROM,       env_fetch_from);
    if_selector(selector, STORE_AT_IN,      env_store_at_in);
    if_selector(selector, SUBSCOPE_KEY,     env_subscope);
    if_selector(selector, ENV_SET_PARENT,   env_set_env_parent);
    if_selector(selector, ENV_PARENT,       env_parent);
    doesnotunderstand("env", selector);
}
