/* sub_08002FC2  (original: 0x08002FC2-0x08002FF8 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08002FC2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar3 * 0x14 + param_1 + 0x194);
    piVar2 = (int *)*piVar1;
    __call_via_r2(piVar1,*(int *)(param_1 + 0x11c) == iVar3,*piVar2 + (int)piVar2,
                  *(int *)(param_1 + 0x11c),param_4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

