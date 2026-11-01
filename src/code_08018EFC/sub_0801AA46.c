/* sub_0801AA46  (original: 0x0801AA46-0x0801AA98 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile gUnknown_086D5194;


void sub_0801AA46(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(&gUnknown_086D5194 + param_2 * 8);
  piVar2 = (int *)__call_via_r2(puVar1,*param_1,*puVar1,param_4,param_4);
  iVar3 = param_1[1];
  puVar1 = param_1 + iVar3 * 2 + 1 + -1;
  iVar4 = *(int *)*puVar1;
  __call_via_r2((int *)*puVar1,*param_1,*(int *)(iVar4 + 8) + iVar4);
  iVar4 = param_1[0xc];
  uVar5 = *puVar1;
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = uVar5;
  *puVar1 = piVar2;
  param_1[iVar3 * 2 + 1] = &gUnknown_086D5194 + param_2 * 8;
  __call_via_r2(piVar2,*param_1,*(int *)*piVar2 + *piVar2);
  return;
}

