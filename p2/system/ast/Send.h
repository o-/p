#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Send_t {
    InlineCache     cache;
    Object          receiver;
    Object          message;
    Type_Array arguments;
};

CREATE_INITIALIZERS(Send)

extern AST_Send new_Send(Object receiver, Object msg, Type_Array arguments);

/* ======================================================================== */

extern void AST_Send_send();
extern void CNT_store_argument();
extern void AST_Send_eval(AST_Send self);

/* ======================================================================== */

#endif // SEND_H