/* sub_08026414  (original: 0x08026414-0x08026440 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08026414(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  param_1[1] = param_2[1] + param_2[3] >> 1;
  *param_1 = iVar1 + iVar2 >> 1;
  return;
}

