/* sub_080088E0  (original: 0x080088E0-0x0800891C in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


uint * sub_080088E0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_2 + 0x158) >> 8;
  uVar1 = *(int *)(param_2 + 0x15c) >> 8;
  *param_1 = uVar2 & 0xfffffff8;
  param_1[1] = uVar1 & 0xfffffff8;
  param_1[2] = uVar2 + 0x17 & 0xfffffff8;
  param_1[3] = uVar1 + 0xf & 0xfffffff8;
  return param_1 + 4;
}

