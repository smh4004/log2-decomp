/* sub_0802130A  (original: 0x0802130A-0x08021344 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 13/13 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_0802130A(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = param_2[2];
  iVar4 = *param_2;
  iVar3 = param_2[1];
  if (iVar3 < param_2[3]) {
    do {
      puVar5 = (undefined1 *)
               (*(int *)(param_1 + 0x24) + iVar3 * *(int *)(param_1 + 0x2c) + *param_2);
      for (iVar1 = iVar2 - iVar4; -1 < iVar1; iVar1 = iVar1 + -1) {
        *puVar5 = param_3;
        puVar5 = puVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2[3]);
  }
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
