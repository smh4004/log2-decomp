/* sub_08003E5E  (original: 0x08003E5E-0x08003E74 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_08003E5E(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0xb4) = (byte)(1 << (param_2 & 7)) | *(byte *)(param_1 + 0xb4);
  return;
}

