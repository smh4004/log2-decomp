/* sub_0800E838  (original: 0x0800E838-0x0800E870 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800D5B8();


void sub_0800E838(int param_1,int *param_2)

{
  undefined4 uVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(undefined2 *)((char *)__frame + 0x4))
#define local_16 (*(undefined2 *)((char *)__frame + 0x6))
#define local_14 (*(undefined2 *)((char *)__frame + 0x8))
  local_1c = 0;
  local_14 = 0x200;
  local_18 = (undefined2)*(undefined4 *)(param_1 + 0x10);
  local_16 = (undefined2)*(undefined4 *)(param_1 + 0x14);
  __call_via_r1(param_2,*(int *)(*param_2 + 0x30) + *param_2);
  uVar1 = sub_0800D5B8(&local_1c,param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

