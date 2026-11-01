/* sub_0801A844  (original: 0x0801A844-0x0801A8B0 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0802141C();
extern undefined volatile gUnknown_086FF3D0;


void sub_0801A844(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(byte *)(param_2 + 99) ^ 1;
  iVar1 = sub_0802141C(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar1 + 0x60)) >> 7;
  *(uint *)(((int)uVar2 >> 1 ^ 1U) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FF3D0 + uVar2 * 4);
  iVar1 = sub_0802141C(0x8000);
  *(int *)(((int)uVar2 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar1 + -0x4000)) >> 0xc;
  *(char *)(param_2 + 4) = (char)uVar2;
  __call_via_r2(param_2,2,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}

