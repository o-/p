#include <model.h>
#include <system.h>
#include <bootstrap.h>

#include <stdio.h>

#define test_type(type)\
    if (pheader(o.pointer) == fools_system->type##_##class.pointer) {\
        printf(#type"\n");\
        return;\
    }


void print_object(object o) {

    if (pheader(o.pointer) == fools_system->number_class.pointer) {
        printf("%i\n", o.number->value);
        return;
    }

    if (pheader(o.pointer) == fools_system->string_class.pointer) {
        printf("%s\n", o.string->value);
        return;
    }

    if (o.pointer == fools_system->true.pointer) {
        printf("true\n");
        return;
    }

    if (o.pointer == fools_system->false.pointer) {
        printf("false\n");
        return;
    }

    if (o.nil == fools_system->nil) {
        printf("nil\n");
        return;
    }

    test_type(iconst);
    test_type(iassign);
    if (pheader(o.pointer) == fools_system->ivar_class.pointer) {
        printf("ivar(\"%s\")\n", o.ivar->name->value);
        return;
    }
    test_type(icall);
    test_type(ilist);
    test_type(iscoped);
    test_type(dict);
    test_type(env);
    if (*pheader(o.pointer) == &ifixed_shift_level) {
        printf("an object\n");
        return;
    }
    if (pheader(o.pointer) == fools_system->array_class.pointer) {
        printf("array(%i) [\n", array_size(o.array));
        int i;
        for (i = 0; i < array_size(o.array); i++) {
            printf("    ");
            print_object(raw_array_at(o.array, i));
        }
        printf("]\n");
        return;
    }

    printf("Unknown type at: %p\n", o.pointer);
}
