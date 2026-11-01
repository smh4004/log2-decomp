/* sub_080107D4  (original: 0x080107D4-0x08010818 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();


void sub_080107D4(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    *(short *)(param_2 + 5) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
    if ((0x78 < uVar2) &&
       (iVar3 = **(int **)(param_1 + 4),
       iVar3 = __call_via_r1(*(int **)(param_1 + 4),*(int *)(iVar3 + 0x14) + iVar3), iVar3 != 0)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
  }
  return;
}

