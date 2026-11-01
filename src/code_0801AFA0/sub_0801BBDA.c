/* sub_0801BBDA  (original: 0x0801BBDA-0x0801BC1E in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007A26();
extern int __call_via_r2();
extern int sub_0800EAD8();


void sub_0801BBDA(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_14 ((undefined1 *)((char *)__frame + 0x0))
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      sub_08007A26(auStack_14,param_2);
      sub_0800EAD8(auStack_14,param_2);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

