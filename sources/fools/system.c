#include <system.h>
#include <model.h>
#include <ast.h>
#include <assert.h>
#include <bootstrap.h>

// Transferring primitives.

void inline native(context_object context) {
    context_object passed_context = array_at(context->arguments, 0).context;
    native_target(passed_context->self.native)(passed_context);
}

void inline transfer(context_object context) {

    while (context->self.pointer != fools_system->native.pointer) {
        context = make_meta_context(context);
    }
    
    native_target(context->self.native)(context);
}


// Context handling

void inline return_from_context(context_object context) {
    object return_context = context->return_context;
    if (return_context.nil != fools_system->nil) {
        transfer(return_context.context);
    }
}


// AST Handling

void ilist_eval(context_object context) {
    context_object ilist_context = array_at(context->arguments, 0).context;
    ilist_object ilist = (ilist_object)ilist_context->self.pointer;

    if (number_value(ilist->size) == 0) {
        return return_from_context(context);
    }
    
    context->self       = fools_system->ilist_continue_eval;
    context->arguments  = make_array(2);
    array_at_put(context->arguments, 0, (object)ilist_context);
    array_at_put(context->arguments, 1, (object)make_number(0));

    transfer(context);
}

void ilist_continue_eval(context_object context) {
    context_object ilist_context = array_at(context->arguments, 0).context;
    int index = number_value(array_at(context->arguments, 1).number);
    ilist_object ilist = (ilist_object)ilist_context->self.pointer;
    int size = number_value(ilist->size) - 1;

    object instruction = (object)raw_ilist_at(ilist, index);

    if (index != size) {
        array_at_put(context->arguments, 0, (object)make_number(index + 1));
        context_object icontext = make_context(instruction, 0);
        icontext->return_context = (object)context;
        context = icontext;
    } else { // tailcall.
        context->self = instruction;
        context->arguments = make_array(0);
    }

    transfer(context);
}

/** WORK IN PROGRESS
 *
void iassign_eval(context_object context) {
    context_object iassign_context = array_at(context->arguments, 0).context;
    iassign_object assignment = (iassign_object)iassign_context->self.pointer;
    context->self       = assignment->expression;
    context->arguments  = make_array(0);
    return_context_object return_context =
        make_return_context(fools_system->iassign_continue_eval, 1);
    array_at_put(return_context->arguments, 0, assignment);
    expression_context->return_context = return_context;
}

void iassign_continue_eval(context_object context) {
    return_context_object return_context = (return_context_object)context;
    iassign_object assignment =
        array_at(return_context->arguments, 0).instruction.assignment;

    *assignment->variable = return_context->return_value;
    return_from_context(context);
}
*/

// Native class handling

void with_native_class_lookup(context_object context) {
    context_object class_context    = array_at(context->arguments, 0).context;
    context_object receiver_context = array_at(class_context->arguments, 0).context;
    native_class_object class       = class_context->self.native_class;
    dict_object natives             = class->natives;
    array_object arguments          = receiver_context->arguments;
    object selector                 = array_at(arguments, 0);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        class_context->self = class->class;
    } else {
        class_context->self = native;
    }
    transfer(class_context);
}
