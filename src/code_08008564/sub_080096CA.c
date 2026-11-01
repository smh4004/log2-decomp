/* sub_080096CA  (original: 0x080096CA-0x080096E8 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03000fbb;


void sub_080096CA(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000fbb)[param_1[iVar1]] = (&DAT_03000fbb)[param_1[iVar1]] + -1;
  return;
}

