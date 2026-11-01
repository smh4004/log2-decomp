/* sub_0801F2CE  (original: 0x0801F2CE-0x0801F2F4 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_030022b8;
extern undefined4 volatile _03000E1C;


void sub_0801F2CE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _03000E1C;
  _03000E1C = &DAT_030022b8;
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000E1C = param_1;
  return;
}

