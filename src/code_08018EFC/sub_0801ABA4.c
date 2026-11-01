/* sub_0801ABA4  (original: 0x0801ABA4-0x0801AC16 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0802141C();
extern undefined volatile gUnknown_086FF3F8;


void sub_0801ABA4(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_2 + 99);
  iVar2 = sub_0802141C(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar2 + 0x60)) >> 7;
  *(uint *)((bVar1 >> 1 ^ 1) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FF3F8 + (uint)bVar1 * 4);
  iVar2 = sub_0802141C(0x8000);
  *(int *)((uint)(bVar1 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar2 + -0x4000)) >> 0xc;
  param_2[0x5a] = 0;
  *(byte *)(param_2 + 4) = bVar1;
  __call_via_r2(param_2,2,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}

