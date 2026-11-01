/* sub_0800AA58  (original: 0x0800AA58-0x0800AA7C in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000eb0;


void sub_0800AA58(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 0x20;
  return;
}

