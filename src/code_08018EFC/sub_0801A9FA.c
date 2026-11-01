/* sub_0801A9FA  (original: 0x0801A9FA-0x0801AA46 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801A9CC();
extern int __call_via_r1();
extern int sub_0801F110();


void sub_0801A9FA(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  sub_0801A9CC();
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r2(piVar1,*param_1,*(int *)(iVar2 + 8) + iVar2);
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

