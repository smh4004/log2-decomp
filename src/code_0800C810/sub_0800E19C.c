/* sub_0800E19C  (original: 0x0800E19C-0x0800E1BE in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800E19C(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 2;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  }
  return;
}

