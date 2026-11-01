/* sub_08016310  (original: 0x08016310-0x0801633C in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_08016310(int param_1)

{
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 8) * 0xc,0x40,0);
  return;
}

