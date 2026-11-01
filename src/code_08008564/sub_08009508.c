/* sub_08009508  (original: 0x08009508-0x08009528 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9e;


void sub_08009508(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}

