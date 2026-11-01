/* sub_080095E4  (original: 0x080095E4-0x08009608 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006E64();
extern undefined1 volatile DAT_03000fbb;
extern undefined volatile DAT_03001120;


void sub_080095E4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = param_1[iVar2];
  bVar1 = (&DAT_03000fbb)[iVar3];
  iVar3 = sub_08006E64(&DAT_03001120,0x17,iVar3,param_4,param_4);
  param_1[iVar2] = (uint)bVar1 + iVar3;
  return;
}

