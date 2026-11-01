/* sub_08021140  (original: 0x08021140-0x08021188 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08021140(int param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = (char *)(*(int *)(param_1 + 0x2c) * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  puVar4 = param_2 + 2;
  if (param_2[1] != 0) {
    do {
      iVar3 = 0;
      pcVar2 = pcVar5;
      if (*param_2 != 0) {
        do {
          uVar1 = *puVar4;
          puVar4 = (ushort *)((int)puVar4 + 1);
          if ((char)uVar1 != '\0') {
            *pcVar2 = (char)uVar1;
          }
          pcVar2 = pcVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*param_2);
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + *(int *)(param_1 + 0x2c);
    } while (iVar6 < (int)(uint)param_2[1]);
  }
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
