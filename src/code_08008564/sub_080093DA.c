/* sub_080093DA  (original: 0x080093DA-0x080093EE in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int * volatile DAT_03001fac;


void sub_080093DA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_03001fac;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

