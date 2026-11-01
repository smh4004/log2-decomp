/* sub_08009554  (original: 0x08009554-0x08009568 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_08009554(int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_3 + param_2 + 0x12);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}

