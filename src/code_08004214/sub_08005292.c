/* sub_08005292  (original: 0x08005292-0x080052C0 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08005292(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  return;
}

