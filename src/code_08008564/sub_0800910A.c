/* sub_0800910A  (original: 0x0800910A-0x08009128 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0800910A(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar3 = param_1[iVar3];
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  if (iVar3 == 0) {
    *param_2 = pbVar2 + bVar1;
  }
  return;
}

