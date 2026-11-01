/* sub_08009658  (original: 0x08009658-0x08009670 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006274();
extern undefined volatile DAT_03001090;


void sub_08009658(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006274(&DAT_03001090,param_1[iVar1],param_3,param_4,param_4);
  return;
}

