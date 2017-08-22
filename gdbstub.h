#ifndef GDBSTUB_H
#define GDBSTUB_H

#include <stdbool.h>

void gdbstub_init(bool break_on_init);
void gdbstub_do_break(void);

#endif
