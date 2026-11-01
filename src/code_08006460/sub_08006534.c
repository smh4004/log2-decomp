/* sub_08006534  (original: 0x08006534-0x0800656A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08006534(byte *param_1,int param_2)

{
  byte bVar1;
  
  param_1[param_2 * 10 + 0x694] = 0;
  param_1[param_2 * 10 + 0x69d] = 0xff;
  bVar1 = *param_1;
  param_1[param_2 * 10 + 0x69c] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69d] = (byte)param_2;
  }
  *param_1 = (byte)param_2;
  return;
}

