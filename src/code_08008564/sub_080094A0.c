/* sub_080094A0  (original: 0x080094A0-0x080094B0 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080094A0(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_2;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}

