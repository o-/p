#ifndef MODEL_H
#define MODEL_H

#include <gc.h>
#include <stdlib.h>

#define header_size sizeof(object)

#define POINTER_INC(p) (((pointer) p) + 1) 
#define POINTER_DEC(p) (((pointer) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout*, layout, 1)

#define NEW_ARRAYED(type, layout, size) \
            (type)(\
               POINTER_INC(PALLOC(header_size + sizeof(layout[size]))))

#define new_instance(cls)\
    cls##_##object result = NEW(struct cls);\
    header(result)        = (object)woodstock->cls##_##t_class;

#define header(o) (*(object*)POINTER_DEC(o))

#define pheader(o) header(o).pointer

#define ntarget(o) native_target((o).native)

#define declare_metaclass(name)\
    object name##_##t_class;\
    object name##_##t_stub_class;

struct env;
struct object_object;
struct symbol;
struct number;
struct array;
struct dict;
struct nil;
struct native;
struct native_class;
struct context;
struct infile;
struct outfile;
struct chr;

struct ilist;
struct iassign;
struct icall;
struct iconst;
struct ivar;
struct iscoped;
struct icapture;
struct ifixed;
struct fallback;

typedef struct ilist*            ilist_object;
typedef struct iassign*          iassign_object;
typedef struct icall*            icall_object;
typedef struct iconst*           iconst_object;
typedef struct ivar*             ivar_object;
typedef struct iscoped*          iscoped_object;
typedef struct icapture*         icapture_object;
typedef struct ifixed*           ifixed_object;
typedef struct fallback*         fallback_object;
typedef struct runtime_env*      runtime_env_object;
typedef struct object_object*    object_object;
typedef struct symbol*           symbol_object;
typedef struct symbol*           string_object;
typedef struct number*           number_object;
typedef struct array*            array_object;
typedef struct dict*             dict_object;
typedef struct nil*              nil_object;
typedef struct native*           native_object;
typedef struct native_class*     native_class_object;
typedef struct context*          context_object;
typedef struct infile*           infile_object;
typedef struct outfile*          outfile_object;
typedef struct chr*              chr_object;
typedef void**                   pointer;

typedef void (*transfer_target)();

struct woodstock;
typedef struct woodstock*       woodstock_t;

typedef union {
    ilist_object        ilist;
    iassign_object      iassign;
    icall_object        icall;
    iconst_object       iconst;
    ivar_object         ivar;
    iscoped_object      iscoped;
    icapture_object     icapture;
    ifixed_object       ifixed;
    fallback_object     fallback;
    object_object       object;
    symbol_object       symbol;
    string_object       string;
    number_object       number;
    array_object        array;
    dict_object         dict;
    nil_object          nil;
    native_object       native;
    native_class_object native_class;
    context_object      context;
    runtime_env_object  env;
    transfer_target     target;
    infile_object       infile;
    outfile_object      outfile;
    chr_object          chr;
    pointer             pointer;
} object;

// TODO push these structs directly into the system/*/*.h
struct object_object {
    object fields[0]; // 0 to tell CC that it can be empty.
};

struct array {
    int                 size;
    object              values[];
};

struct env {
    object              scope;
    object              parent;
    array_object        values;
};

struct nil { };

struct native {
    object          target;
};

struct native_class {
    object          cdisp;
    object          dispatch;
    object          delegate;
};

struct woodstock {
    // Objects known to the system
    nil_object          nil;
    object              true;
    object              false;
    array_object        empty;
    object              icapture;
    object              ifixed;
    object              array;
    object              error;

    // Evaluation related classes
    object ilist_class;
    object icall_class;
    object iconst_class;
    object ivar_class;
    object iassign_class;
    object icapture_class;
    object iscoped_class;
    object fixed_class;
    object env_class;

    // Classes related to object formats
    declare_metaclass(array);
    declare_metaclass(ast_assign);
    declare_metaclass(ast_call);
    declare_metaclass(ast_capture);
    declare_metaclass(ast_const);
    declare_metaclass(ast_list);
    declare_metaclass(ast_scoped);
    declare_metaclass(ast_var);
    declare_metaclass(char);
    declare_metaclass(dict);
    declare_metaclass(fixed);
    declare_metaclass(ifixed);
    declare_metaclass(infile);
    declare_metaclass(number);
    declare_metaclass(outfile);
    declare_metaclass(runtime_env);
    declare_metaclass(string);
    declare_metaclass(symbol);

    // Level shifting
    object level_shifter;

    // Minimal native classes
    object number_class;
    object string_class;
    object symbol_class;
    object array_class;
    object dict_class;
    object infile_class;
    object outfile_class;
    object nil_class;
    object chr_class;
};

extern object_object            make_object(int size, object interpreter);
extern array_object             make_array(int size);
extern env_object               make_env(object scope, object parent, int size);
extern nil_object               make_nil();

extern native_object            make_native(transfer_target native);
extern native_class_object      make_native_class(object header, transfer_target cdisp);

extern int              inline array_size(array_object array);
extern object           inline array_at(array_object array, int index);
extern object           inline raw_array_at(array_object array, int index);
extern void             inline array_at_put(array_object array,
                                            int index, object new_value);
extern void             inline raw_array_at_put(array_object array,
                                                int index, object new_value);
extern transfer_target  inline native_target(native_object native);
extern object           inline symbol_known_to_the_vm(int index);
extern object           inline object_at(object_object object, int index);
extern void             inline object_at_put(object_object o,
                                             int index, object value);
extern object           inline env_at(env_object env, int index);
extern void             inline env_at_put(env_object env, int index, object value);
#define assert_argsize(context, size)\
    if (ensure_greater_equals(context_size(context), size,\
        L"%s, line %u, Argument mismatch. Given: %i, expected %i\n", __FILE__, __LINE__))\
    { return; }
    

#define empty_env make_env((object)woodstock->nil,\
                           (object)woodstock->nil, 0)

#define array_check_bounds(array, index)\
    ensure(0 <= index, L"Out of bounds");\
    ensure(index < array_size(array), L"Out of bounds");


#endif // MODEL_H
