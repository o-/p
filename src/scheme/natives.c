#include <model.h>
#include <bootstrap.h>
#include <system.h>
#include <scheme/natives.h>
#include <scheme/behaviour.h>
#include <scheme/symbols.h>
#include <print.h>
#include <thread.h>

#include <assert.h>
#include <stdio.h>

#define preval1(name, context, argument, body) \
void name##_##do() {\
    context_object context = get_context();\
    object argument = argument_at(context, 0);\
    body;\
}\
void scheme##_##name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, 1);\
    push_eval_of(context, 0);\
    context->code = &name##_##do;\
}

#define preval2(name) \
void name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, 2);\
    push_eval_of(context, 0);\
    push_eval_of(context, 1);\
    context->code = &name##_##func_do;\
}

#define init_op(name)\
    scheme##_##name = (object)make_iconst(\
                        (object)make_object(0,\
                            (object)make_native(&scheme##_##name##_##func)));
#define init_direct_op(name)\
    scheme##_##name = (object)make_object(0,\
                        (object)make_native(&scheme##_##name##_##func));

#define bin_eval_with(name, type1, type2, func)\
object scheme##_##name;\
static void scheme##_##name##_##func_do() {\
    dec();\
    debug("scheme>>"#name"\n");\
    context_object context = get_context();\
    object result = func(argument_at(context, 0).type1,\
                         argument_at(context, 1).type2);\
    return_from_context(context, result);\
    debug("ret>>scheme>>"#name"\n");\
}\
preval2(scheme##_##name);

#define bin_io_op(name, input, output, op)\
object inline scheme##_##name##_##native(input##_##object left, input##_##object right) {\
    return (object)make##_##output(input##_##value(left) op input##_##value(right));\
}\
bin_eval_with(name, input, input, scheme##_##name##_##native)


#define bin_number_number_op(name, op)\
    bin_io_op(name, number, number, op)

#define bin_number_bool_op(name, op)\
    bin_io_op(name, number, bool, op)

#define object_value(o) o
#define bin_object_bool_op(name, op)\
    bin_io_op(name, object, bool, op)

object inline make_bool(int bl) {
    if (bl) {
        return scheme_true;
    } else {
        return scheme_false;
    }
}

object scheme_true;
void scheme_true_func() {
    context_object context = get_context();
    debug("scheme>>true\n");
    object if_true = argument_at(context, 0);

    new_target(context, if_true);
    set_message(context, EVAL);

    debug("ret>>scheme>>true\n");
}

object scheme_false;
void scheme_false_func() {
    context_object context = get_context();
    debug("scheme>>false\n");
    object if_false = argument_at(context, 1);

    new_target(context, if_false);
    set_message(context, EVAL);

    debug("ret>>scheme>>false\n");
}

bin_number_number_op( plus,      +  )
bin_number_number_op( minus,     -  )
bin_number_bool_op  ( smallerp,  <  )
bin_number_bool_op  ( equalp,    == )
bin_object_bool_op  ( eqp,       == )

static void scheme_display_func_do() {
    debug("scheme>>display\n");
    context_object context = get_context();
    object v = argument_at(context, 0);
    print_object(v);
    return_from_context(context, v);
    debug("ret>>scheme>>display\n");
}

static void scheme_display_func() {
    context_object context = get_context();
    assert_argsize(context, 1);
    push_eval_of(context, 0);
    context->code = &scheme_display_func_do;
}
object scheme_display;

object scheme_callec;
object scheme_continue;

object make_ec() {
    object_object ec = make_object(1, scheme_continue);
    object_at_put(ec, 0, (object)get_context());
    return (object)ec;
}

preval1(callec, context, lambda,
    object env = context->env;
    pop_context();
    object ec = make_ec();
    context = make_context(lambda, 1);
    context->env = env;
    set_argument(context, 0, (object)make_iconst(ec));
    // marker on return_context
    set_argument(return_context(context), 1, ec);
)

preval1(cont, context, value,
    object self = context->self;
    context_object return_context = object_at(self.object, 0).context;
    if (argument_at(return_context, 1).object != self.object) {
        // TODO
        printf("Continuing finished escape continuation\n");
        exit(-1);
    }
    return_to_context(return_context, value);
)

object scheme_exit;

preval1(exit, context, value,
    exit(number_value(value.number));
)

void bootstrap_scheme() {
    bootstrap_scheme_symbols();
    init_op(plus);
    init_op(minus);
    init_op(smallerp);
    init_op(equalp);
    init_op(eqp);
    init_direct_op(true);
    init_direct_op(false);

    scheme_continue = (object)make_native(&scheme_cont_func);

    fools_system->true      = scheme_true;
    fools_system->false     = scheme_false;

    init_op(callec);
    init_op(display);
    init_op(exit);
}