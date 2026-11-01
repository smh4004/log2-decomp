/* sub_0800FD3E  (original: 0x0800FD3E-0x0800FD92 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;
extern int volatile DAT_030010a4;
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a8;
extern int volatile DAT_030010a0;


undefined4 sub_0800FD3E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c) - DAT_030010b0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030010ac;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((((*(int *)(param_1 + 0x18) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x24))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

