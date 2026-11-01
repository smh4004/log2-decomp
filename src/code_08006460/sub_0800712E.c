/* sub_0800712E  (original: 0x0800712E-0x08007162 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 36% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800712E(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar4 + -1;
  if (-1 < iVar3) {
    piVar5 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar5;
      piVar1 = (int *)piVar4[iVar3 + 1];
      *piVar5 = iVar2 + 1;
      piVar5[iVar2 + 1] = (int)piVar1;
      __call_via_r1(piVar1,*(int *)(*piVar1 + 0x20) + *piVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *piVar4 = 0;
  return;
}

