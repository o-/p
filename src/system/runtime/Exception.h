#ifndef RUNTIME_EXCEPTION_H
#define RUNTIME_EXCEPTION_H

extern void handle_assert(const char * message);
extern void fail(Object exception_class, uns_int argc, ...);

#endif // RUNTIME_EXCEPTION_H