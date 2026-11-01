/* sub_080093A4  (original: 0x080093A4-0x080093B6 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001fb4;


void sub_080093A4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb4;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

