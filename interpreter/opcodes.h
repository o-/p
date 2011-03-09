#ifndef INTERPRETER_OPCODES_H
#define INTERPRETER_OPCODES_H

#include <pinocchio.h>

typedef void (*opcode)(Thread);
#define DECLARE_OPCODE(name) extern void op_##name(Thread thread);

/* ======================================================================= */

DECLARE_OPCODE(block_return);
DECLARE_OPCODE(cache_send);
DECLARE_OPCODE(exit);
DECLARE_OPCODE(goto);
DECLARE_OPCODE(iffalse_iftrue);
DECLARE_OPCODE(iftrue_iffalse);
DECLARE_OPCODE(load_constant);
DECLARE_OPCODE(lookup);
DECLARE_OPCODE(move);
DECLARE_OPCODE(poly_send);
DECLARE_OPCODE(return);
DECLARE_OPCODE(return_self);
DECLARE_OPCODE(self);
DECLARE_OPCODE(send);
DECLARE_OPCODE(slot_read);
DECLARE_OPCODE(slot_write);

/* ======================================================================= */

#endif // INTERPRETER_OPCODES_H