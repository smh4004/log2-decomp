/* sub_0800942A  (original: 0x0800942A-0x0800943E in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03002080;


void sub_0800942A(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002080;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}

