/* sub_0800DF98  (original: 0x0800DF98-0x0800DFEC in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800DF98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x158) - *(int *)(param_2 + 0x158);
    iVar3 = *(int *)(iVar2 + 0x15c) - *(int *)(param_2 + 0x15c);
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if (iVar2 < iVar4) {
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
    }
    else if (iVar1 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
  }
  return;
}

