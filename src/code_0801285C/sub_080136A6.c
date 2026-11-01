/* sub_080136A6  (original: 0x080136A6-0x080136F2 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a0;
extern int volatile DAT_030010a4;
extern int volatile DAT_030010a8;


undefined4 sub_080136A6(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - DAT_030010a0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - DAT_0300109c;
  *(int *)(param_1 + 0x1c) = iVar2;
  if ((((*(int *)(param_1 + 0x20) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x28))) &&
      (*(int *)(param_1 + 0x24) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x2c))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

