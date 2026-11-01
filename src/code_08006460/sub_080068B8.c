/* sub_080068B8  (original: 0x080068B8-0x080068CA in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_080068B8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar1[iVar2 + 1] = param_2;
  return;
}

