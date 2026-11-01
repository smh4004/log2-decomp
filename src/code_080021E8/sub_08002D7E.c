/* sub_08002D7E  (original: 0x08002D7E-0x08002DB6 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080236B4();
extern int sub_080236A8();


void sub_08002D7E(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  *(int *)(iVar1 + 0x2c) = iVar2;
  *(int *)(iVar1 + 0x30) = iVar3;
  *(int *)(iVar1 + 0x34) = iVar3 * iVar2;
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 0x1c) = iVar3;
  iVar1 = (uint)*(byte *)(param_1 + 8) * 4;
  sub_080236A8(*(int *)(*(int *)(param_1 + 4) + 0x24),
               *(int *)(iVar1 + **(int **)(param_1 + 0x10) + 4),iVar1,iVar3 * iVar2);
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}

