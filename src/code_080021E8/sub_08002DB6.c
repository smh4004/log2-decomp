/* sub_08002DB6  (original: 0x08002DB6-0x08002DC8 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08002DB6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = *(int *)*param_1;
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}

