/* sub_0801F232  (original: 0x0801F232-0x0801F248 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0801F232(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = param_1[1] + 1;
  iVar1 = *(int *)*param_1;
  iVar2 = *(int *)(iVar1 + 0x10);
  __call_via_r1((int *)*param_1,iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

