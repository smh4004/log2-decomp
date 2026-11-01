/* sub_0801AAD4  (original: 0x0801AAD4-0x0801AB08 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801AAD4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  piVar2 = (int *)piVar1[(iVar3 + -1) * 2 + 1];
  iVar4 = *piVar2;
  __call_via_r2(piVar2,*param_1,*(int *)(iVar4 + 8) + iVar4,param_4,param_4);
  iVar4 = param_1[0xc];
  iVar3 = piVar1[(iVar3 + -1) * 2 + 1];
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = iVar3;
  return;
}

