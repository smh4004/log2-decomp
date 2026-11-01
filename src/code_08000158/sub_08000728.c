/* sub_08000728  (original: 0x08000728-0x08000756 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08000728(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar3 * 0x14 + param_1 + 0xb4);
    piVar2 = (int *)*piVar1;
    __call_via_r2(piVar1,*(int *)(param_1 + 8) == iVar3,*piVar2 + (int)piVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

