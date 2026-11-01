/* sub_0800AA10  (original: 0x0800AA10-0x0800AA34 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


void sub_0800AA10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 2;
  return;
}

