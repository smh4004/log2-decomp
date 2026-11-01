/* sub_080094B0  (original: 0x080094B0-0x080094CC in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03000e90;
extern undefined volatile gUnknown_080E2840;


void sub_080094B0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&gUnknown_080E2840 + (DAT_03000e90 + 0x30) * 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

