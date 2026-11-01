/* sub_08013656  (original: 0x08013656-0x080136A6 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 28% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern undefined volatile DAT_03001120;


void sub_08013656(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x30) = uVar3;
  if (uVar3 >> 0x10 != 0) {
    iVar2 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      sub_080068CA(&DAT_03001120,param_1);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    *(char **)(param_1 + 0x3c) = (char *)(iVar2 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10) - (int)*(char *)(iVar2 + 0xc);
    *(int *)(param_1 + 0x20) = iVar4;
    iVar5 = *(int *)(param_1 + 0x14) - (int)*(char *)(iVar2 + 0xd);
    *(int *)(param_1 + 0x24) = iVar5;
    bVar1 = *(byte *)(iVar2 + 0xe);
    *(uint *)(param_1 + 0x2c) = iVar5 + (uint)*(byte *)(iVar2 + 0xf);
    *(uint *)(param_1 + 0x28) = iVar4 + (uint)bVar1;
  }
  *(uint *)(param_1 + 0x30) = uVar3 & 0xffff;
  return;
}

