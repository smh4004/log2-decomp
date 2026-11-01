/* sub_0800634A  (original: 0x0800634A-0x08006366 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800634A(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x28) = param_2[1];
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4) + iVar1 >> 10;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) >> 10;
  return;
}

