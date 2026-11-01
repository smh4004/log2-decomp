/* sub_08008766  (original: 0x08008766-0x08008784 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800772A();


void sub_08008766(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x180);
  __call_via_r2(*(int **)(param_1 + 0x180),param_1,*(int *)(iVar1 + 4) + iVar1);
  sub_0800772A(param_1);
  return;
}

