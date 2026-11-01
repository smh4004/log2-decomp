/* sub_0801560E  (original: 0x0801560E-0x0801563C in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int volatile DAT_03000e98;


void sub_0801560E(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    DAT_03000e98 = DAT_03000e98 + 0x14;
    *(ushort *)(param_2 + 0x14) = *(ushort *)(param_2 + 0x12) >> 4;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  }
  return;
}

