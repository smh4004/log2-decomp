/* sub_08004F76  (original: 0x08004F76-0x08004FCC in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BG0HOFS;
extern undefined2 volatile REG_BG0VOFS;


void sub_08004F76(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(iVar4 + 4);
  iVar7 = *(int *)(iVar4 + 0x10);
  iVar8 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(iVar4 + 0x18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] =
       (short)(*(int *)(param_2 + 0xc) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc) +
               *(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x34) * *(int *)(iVar3 + 0x14) >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(iVar6 * iVar5 + iVar7 + iVar8 + iVar2 * iVar4 >> 10);
  return;
}

