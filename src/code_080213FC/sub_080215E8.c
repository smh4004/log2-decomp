/* sub_080215E8  (original: 0x080215E8-0x08021642 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087FD104;


void sub_080215E8(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*param_2 >> 10;
  iVar3 = *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x16));
  uVar2 = *param_2 & 0x3ff;
  iVar4 = *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 0x41) * 0x1000000) >> 0x16));
  iVar1 = (int)((0x400 - uVar2) * *(int *)(&gUnknown_087FD104 + ((uint)(iVar1 << 0x18) >> 0x16)) +
               uVar2 * *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 1) * 0x1000000) >> 0x16))) >>
          0x10;
  param_1[2] = iVar1;
  param_1[1] = -iVar1;
  iVar1 = (int)((0x400 - uVar2) * iVar3 + uVar2 * iVar4) >> 0x10;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

