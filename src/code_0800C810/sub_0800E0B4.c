/* sub_0800E0B4  (original: 0x0800E0B4-0x0800E0F8 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800E0B4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x100) {
    if (uVar2 < 0xe1) {
      if (uVar2 < 0x20) {
        *(ushort *)(param_2 + 5) = uVar1 >> 4;
      }
      else {
        *(short *)(param_2 + 5) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
      }
    }
    else {
      *(short *)(param_2 + 5) = (short)((int)(0x100 - uVar2) >> 4);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

