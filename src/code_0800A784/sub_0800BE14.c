/* sub_0800BE14  (original: 0x0800BE14-0x0800BE6C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined2 volatile DAT_05000000;
extern undefined volatile gUnknown_083ECBA4;


int sub_0800BE14(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0x100;
  pbVar4 = &gUnknown_083ECBA4;
  if ((param_4 < 0x101) && (iVar5 = param_4, param_4 < 0)) {
    iVar5 = 0;
  }
  puVar3 = &DAT_05000000;
  iVar2 = 0x100 - iVar5;
  iVar1 = 0x200;
  do {
    *puVar3 = (ushort)((int)(iVar2 * (uint)*pbVar4 + iVar5 * param_1) >> 0xb) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[1] + iVar5 * param_2) >> 0xb) << 5) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[2] + iVar5 * param_3) >> 0xb) << 10);
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
