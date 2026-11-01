/* sub_080076EE  (original: 0x080076EE-0x0800772A in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080076EE(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x28) = param_2;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(int *)(param_1 + 0x24) = param_2;
  }
  else if (param_2 == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x2c);
  }
  else {
    *(int *)(param_1 + 0x24) = param_1 + 0x50;
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x2c) + iVar2);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0x50) = *(undefined1 *)(param_2 + (uint)*pbVar1);
    } while (iVar2 < 0x100);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

