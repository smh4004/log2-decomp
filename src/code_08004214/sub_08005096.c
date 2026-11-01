/* sub_08005096  (original: 0x08005096-0x080050C8 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08005096(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_2 + 0x10) + iVar2 * 4);
      *(undefined2 *)(param_1 + iVar1 * 2 + 1) = 0;
      iVar2 = iVar2 + 1;
      *(short *)((int)param_1 + iVar1 * 8 + 6) = (short)iVar2;
      param_1[iVar1 * 2 + 2] = iVar3;
    } while (iVar2 < *(int *)(param_2 + 0xc));
  }
  return;
}

