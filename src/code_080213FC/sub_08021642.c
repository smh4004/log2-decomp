/* sub_08021642  (original: 0x08021642-0x08021658 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08021642(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * 0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * 0x400;
  return;
}

