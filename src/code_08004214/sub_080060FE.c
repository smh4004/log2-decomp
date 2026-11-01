/* sub_080060FE  (original: 0x080060FE-0x08006152 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080060FE(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_2;
  piVar2 = (int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar1 < 0) {
    *piVar2 = iVar1 + iVar3 * 0x400;
  }
  else if (iVar1 >> 10 < iVar3) {
    *piVar2 = iVar1;
  }
  else {
    *piVar2 = iVar1 + iVar3 * -0x400;
  }
  piVar2 = (int *)(param_1 + 8);
  if (param_2[1] < 0) {
    *piVar2 = param_2[1] + *(int *)(param_1 + 0x58) * 0x400;
  }
  else {
    iVar1 = param_2[1];
    if (iVar1 >> 10 < *(int *)(param_1 + 0x58)) {
      *piVar2 = iVar1;
    }
    else {
      *piVar2 = iVar1 + *(int *)(param_1 + 0x58) * -0x400;
    }
  }
  return;
}

