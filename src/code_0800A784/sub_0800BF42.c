/* sub_0800BF42  (original: 0x0800BF42-0x0800BF6E in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 38% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800BF42(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      puVar1 = *(undefined4 **)(param_3 + iVar4 * 4);
      iVar2 = __call_via_r1(puVar1,*puVar1);
      iVar3 = *param_1;
      iVar4 = iVar4 + 1;
      *param_1 = iVar3 + 1;
      param_1[iVar3 + 1] = iVar2;
    } while (iVar4 < param_2);
  }
  return;
}

