/* sub_0801F4C4  (original: 0x0801F4C4-0x0801F508 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0801F4C4(int *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  puVar3 = (undefined2 *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *puVar3 = param_3;
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      puVar3 = puVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}

