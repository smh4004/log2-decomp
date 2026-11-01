/* sub_0800F8B6  (original: 0x0800F8B6-0x0800F910 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08010124();
extern int sub_080079B8();
extern int sub_080102A2();


void sub_0800F8B6(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
  sub_080079B8(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18 + -2;
  if ((-*(int *)(param_1 + 0x178) < 8) && (iVar2 = *(int *)(param_1 + 0x17c), iVar2 != 0)) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_2;
    sub_08010124();
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
    uVar1 = sub_080102A2(&local_24,param_2,4,0);
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
  }
  return;
}

