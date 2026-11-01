/* sub_0801D72E  (original: 0x0801D72E-0x0801D748 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801D72E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = *(int **)(param_1 + 0xc);
  }
  iVar2 = *(int *)(*piVar1 + 8);
  __call_via_r2(piVar1,param_2,iVar2 + *piVar1,iVar2,param_4);
  return;
}

