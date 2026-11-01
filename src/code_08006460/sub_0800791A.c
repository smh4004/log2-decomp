/* sub_0800791A  (original: 0x0800791A-0x0800793A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int * sub_0800791A(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x15c);
  *param_1 = *(int *)(param_2 + 0x158) >> 8;
  param_1[1] = iVar1 >> 8;
  return param_1 + 2;
}

