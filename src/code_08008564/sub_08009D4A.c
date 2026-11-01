/* sub_08009D4A  (original: 0x08009D4A-0x08009D94 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0800E04C();
extern int sub_08009370();
extern int sub_08026620();
extern undefined4 volatile DAT_030020f8;


void sub_08009D4A(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_c = param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_10 = param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  uVar1 = sub_08009370(param_1[iVar3]);
  uVar2 = sub_08026620(0,&local_10);
  sub_0800E04C(&DAT_030020f8,uVar2,uVar1);
  return;
}

