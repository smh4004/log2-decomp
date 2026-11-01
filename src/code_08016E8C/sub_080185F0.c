/* sub_080185F0  (original: 0x080185F0-0x080186A0 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08018F4E();
extern int sub_08018F72();


void sub_080185F0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      iVar2 = iVar1 * 0x1c + param_1 + 0x78;
      if ((((*(int *)(iVar2 + 0xc) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x14))) &&
          (*(int *)(iVar2 + 0x10) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x18))) {
        iVar3 = *param_2 - (*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14) >> 1);
        iVar5 = param_2[1] - (*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x18) >> 1);
        if (iVar3 * iVar3 + iVar5 * iVar5 < 0x7fffffff) {
          iVar4 = *(int *)(iVar2 + 0x1c);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x404) != iVar4) {
    if (*(int *)(param_1 + 0x404) != 0) {
      sub_08018F72();
    }
    *(int *)(param_1 + 0x404) = iVar4;
    if (iVar4 != 0) {
      sub_08018F4E(iVar4);
    }
  }
  return;
}

