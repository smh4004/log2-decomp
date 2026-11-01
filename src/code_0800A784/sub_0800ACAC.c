/* sub_0800ACAC  (original: 0x0800ACAC-0x0800ACEA in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068B8();
extern int sub_08012A68();
extern undefined volatile DAT_03001120;
extern undefined volatile gUnknown_083B5CE8;


void sub_0800ACAC(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2] + -3;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2] + -3;
  uVar1 = sub_08012A68(0,&local_c,&gUnknown_083B5CE8);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

