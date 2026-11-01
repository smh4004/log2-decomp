/* sub_08009E80  (original: 0x08009E80-0x08009EBA in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800791A();
extern int sub_08009370();


void sub_08009E80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(uint *)((char *)__frame + 0x4))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = sub_08009370(param_1[iVar1]);
  sub_0800791A(&local_10,uVar2);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = local_c & 0xffff | local_10 << 0x10;
  return;
}

