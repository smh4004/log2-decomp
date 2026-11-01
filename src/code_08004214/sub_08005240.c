/* sub_08005240  (original: 0x08005240-0x08005272 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08005240(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 4;
    piVar1 = *(int **)(param_1 + iVar5);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
    }
    puVar3 = *(undefined4 **)(iVar5 + param_2 + 0x14);
    uVar2 = __call_via_r2(iVar4,puVar3,*puVar3);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar5) = uVar2;
  } while (iVar4 < 4);
  return;
}

