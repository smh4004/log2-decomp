/* sub_08003E74  (original: 0x08003E74-0x08003E8A in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08003E74(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & ~(byte)(1 << (param_2 & 7));
  return;
}

