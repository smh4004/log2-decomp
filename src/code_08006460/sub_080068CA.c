/* sub_080068CA  (original: 0x080068CA-0x08006942 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@04000000.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08026528();
extern undefined4 volatile DAT_03001f20;


void sub_080068CA(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = param_1 + 4;
  iVar1 = -1;
  iVar2 = iVar1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      param_3 = *(int **)(iVar3 * 4 + iVar5 + 4);
      iVar2 = iVar3;
      if (param_3 == param_2) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  if (iVar2 == -1) {
    piVar4 = (int *)(param_1 + 0x40c);
    iVar5 = *piVar4;
    iVar2 = iVar1;
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = iVar3;
        param_3 = (int *)piVar4[iVar2 + 1];
        if (param_3 == param_2) break;
        iVar3 = iVar2 + 1;
        iVar2 = iVar1;
      } while (iVar3 < iVar5);
    }
    sub_08026528(piVar4,iVar2,param_3,iVar5,param_4);
    piVar4[*piVar4 + 1] = (int)&DAT_03001f20;
  }
  else {
    sub_08026528(iVar5);
    *(undefined4 **)(*(int *)(param_1 + 4) * 4 + iVar5 + 4) = &DAT_03001f20;
  }
  __call_via_r1(param_2,*(int *)(*param_2 + 4) + *param_2);
  return;
}

