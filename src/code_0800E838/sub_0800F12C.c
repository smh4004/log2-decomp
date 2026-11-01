/* sub_0800F12C  (original: 0x0800F12C-0x0800F13C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800F12C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0x20);
  __call_via_r1(*(int **)(param_1 + 0x28),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

