/* sub_08002726  (original: 0x08002726-0x0800273A in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BLDCNT;


void sub_08002726(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  REG_BLDCNT = 0x2f4f;
  return;
}

