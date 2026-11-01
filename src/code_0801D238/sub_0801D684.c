/* sub_0801D684  (original: 0x0801D684-0x0801D6A8 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801D5D0();


void sub_0801D684(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801D5D0();
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  else {
    piVar2 = *(int **)(param_1 + 0xc);
  }
  __call_via_r2(piVar2,param_2,*(int *)*piVar2 + *piVar2);
  return;
}

