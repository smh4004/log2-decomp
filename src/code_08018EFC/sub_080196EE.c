/* sub_080196EE  (original: 0x080196EE-0x0801970A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080177A0();
extern int sub_08017794();
extern undefined2 volatile REG_BLDCNT;


void sub_080196EE(int param_1)

{
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    sub_08017794();
    REG_BLDCNT = 0x3e41;
  }
  else {
    sub_080177A0();
  }
  return;
}

