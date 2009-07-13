#ifndef SYSTEM_ILIST_H
#define SYSTEM_ILIST_H

// Creation
#include <system/type/type.h>
export_type(ast_list);

extern ilist_object make_ilist(int size);

// Accessors
extern object      inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, object i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, object i);
extern int         inline ilist_size(ilist_object ilist);

// Structure
struct ilist {
    int             size;
    object          instructions[];
};

#endif // SYSTEM_ILIST_H
