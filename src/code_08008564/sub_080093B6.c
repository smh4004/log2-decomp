/* sub_080093B6  (original: 0x080093B6-0x080093C8 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001fb8;


void sub_080093B6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb8;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

