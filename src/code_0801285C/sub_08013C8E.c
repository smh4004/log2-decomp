/* sub_08013C8E  (original: 0x08013C8E-0x08013CDE in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010a4;
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a8;
extern int volatile DAT_030010a0;


undefined4 sub_08013C8E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x28) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x30))) &&
      (*(int *)(param_1 + 0x2c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x34))) {
    iVar2 = *(int *)(param_1 + 0x28) - DAT_0300109c;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) - DAT_030010a0;
    *(int *)(param_1 + 0x38) = iVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

