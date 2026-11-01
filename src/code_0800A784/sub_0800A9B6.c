/* sub_0800A9B6  (original: 0x0800A9B6-0x0800A9DA in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


void sub_0800A9B6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 1;
  return;
}

