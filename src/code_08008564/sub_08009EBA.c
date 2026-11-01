/* sub_08009EBA  (original: 0x08009EBA-0x08009EFC in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E04C();
extern int sub_08009370();
extern int sub_08026620();
extern undefined4 volatile DAT_030020f8;


void sub_08009EBA(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar3 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  local_10 = iVar3 >> 0x10;
  local_c = (int)(short)iVar3;
  uVar1 = sub_08009370(param_1[iVar4 + -1]);
  uVar2 = sub_08026620(0,&local_10);
  sub_0800E04C(&DAT_030020f8,uVar2,uVar1);
  return;
}

