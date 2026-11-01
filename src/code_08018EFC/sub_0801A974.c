/* sub_0801A974  (original: 0x0801A974-0x0801A98C in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801A974(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 400);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 0xc);
    __call_via_r2(piVar1,param_2,iVar2 + *piVar1,iVar2,param_4);
  }
  return;
}

