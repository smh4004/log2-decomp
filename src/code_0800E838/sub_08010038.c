/* sub_08010038  (original: 0x08010038-0x08010098 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001fa8;


uint sub_08010038(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_03001fa8 != 0) {
    iVar2 = *(int *)(DAT_03001fa8 + 0x158) - *(int *)(param_2 + 0x158);
    iVar3 = *(int *)(DAT_03001fa8 + 0x15c) - *(int *)(param_2 + 0x15c);
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar4 < iVar5) {
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
    }
    else if (iVar2 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
  }
  uVar1 = *(int *)(param_1 + 4) - 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1 >> 0x1f;
}

