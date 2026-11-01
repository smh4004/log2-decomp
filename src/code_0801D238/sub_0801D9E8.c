/* sub_0801D9E8  (original: 0x0801D9E8-0x0801DA1A in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern ushort volatile DAT_030022b0;


void sub_0801D9E8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)((int)param_2 + 0x12);
  if ((DAT_030022b0 & 1) != 0) {
    uVar1 = uVar1 - 0x10;
  }
  iVar2 = uVar1 - 1;
  if (iVar2 < 1) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  else {
    *(short *)(param_2 + 5) = 2 - (short)(iVar2 * 0x8000000 >> 0x1f);
    *(short *)((int)param_2 + 0x12) = (short)iVar2;
  }
  return;
}

