/* sub_08008F44  (original: 0x08008F44-0x08008F5A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08008F44(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  *param_2 = pbVar3 + 1;
  iVar2 = *param_1;
  bVar1 = *pbVar3;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}

