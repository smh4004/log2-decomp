/* sub_0800772A  (original: 0x0800772A-0x0800775A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800772A(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1c);
  __call_via_r2(*(int **)(param_1 + 0x1c),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 8) + iVar1);
  return;
}

