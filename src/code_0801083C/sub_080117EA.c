/* sub_080117EA  (original: 0x080117EA-0x08011802 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080117EA(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18);
  iVar1 = *param_3;
  param_1[1] = param_3[1] - *(int *)(param_2 + 0x1c);
  *param_1 = iVar1 - (iVar2 >> 1);
  return;
}

