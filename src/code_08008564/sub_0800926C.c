/* sub_0800926C  (original: 0x0800926C-0x0800929A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800926C(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x44);
  bVar1 = *(byte *)*param_2;
  piVar4 = (int *)(param_1 + 0x44);
  *param_2 = (int)((byte *)*param_2 + 1);
  iVar3 = piVar4[iVar2] + -1;
  piVar4[iVar2] = iVar3;
  if (iVar3 == 0) {
    *piVar4 = *piVar4 + -1;
  }
  else {
    *param_2 = *param_2 - (uint)bVar1;
  }
  return;
}

