/* sub_08008FA4  (original: 0x08008FA4-0x08008FC6 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_083B5F70;


void sub_08008FA4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2],(&gUnknown_083B5F70)[bVar1],&gUnknown_083B5F70,pbVar3,param_4);
  return;
}

