/* sub_0800656A  (original: 0x0800656A-0x0800659E in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800656A(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2 * 10 + param_1;
  *(undefined1 *)(iVar2 + 0x694) = 0xff;
  *(undefined1 *)(iVar2 + 0x69b) = 0xff;
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(iVar2 + 0x69a) = bVar1;
  if (bVar1 != 0xff) {
    *(char *)((uint)bVar1 * 10 + param_1 + 0x69b) = (char)param_2;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}

