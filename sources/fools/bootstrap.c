#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <assert.h>

fools_object fools_system;

void inline define_native(native_class_object cls,
                          const char* name,
                          transfer_target native) {
    dict_at_put(cls->natives,
                symbol_known_to_the_vm(name),
                (object)make_native(native));
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    nil_object nil                          = make_nil();
    fools_system->nil                       = nil;
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->symbols_known_to_the_vm   = make_array(5);

    fools_system->native_metaclass = (object)make_native(&with_native_class_lookup);

    fools_system->dict_class = make_native_class(2);
    header(fools_system->dict_class->natives) = (object)fools_system->dict_class;
    define_native(fools_system->dict_class, "at:",                  &prim_dict_at);
    define_native(fools_system->dict_class, "at:put:",              &prim_dict_at_put);

    fools_system->ilist_class = make_native_class(2);
    define_native(fools_system->ilist_class, "return:continue:",    &ilist_continue_eval);
    define_native(fools_system->ilist_class, "eval",                &ilist_eval);
    
    fools_system->iconst_class = make_native_class(1);
    define_native(fools_system->iconst_class, "eval",               &iconst_eval);

    fools_system->icall_class = make_native_class(1);
    define_native(fools_system->icall_class, "eval",                &icall_eval);
    

    return fools_system;
}
