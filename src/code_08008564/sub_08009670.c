/* sub_08009670  (original: 0x08009670-0x08009688 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006298();
extern undefined volatile DAT_03001090;


void sub_08009670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006298(&DAT_03001090,param_1[iVar1],param_3,param_4,param_4);
  return;
}

