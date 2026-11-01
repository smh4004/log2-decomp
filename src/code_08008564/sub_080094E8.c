/* sub_080094E8  (original: 0x080094E8-0x08009508 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;


void sub_080094E8(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}

