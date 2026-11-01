/* sub_08021188  (original: 0x08021188-0x080211C8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08021188(int param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  if (iVar5 * iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
    iVar6 = iVar4;
    do {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 != '\0') {
          *pcVar2 = cVar1;
        }
        pcVar2 = pcVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar2 = pcVar2 + (iVar3 - iVar4);
      param_2 = param_2 + (param_4 - iVar4);
      iVar5 = iVar5 + -1;
      iVar6 = iVar4;
    } while (iVar5 != 0);
  }
  return;
}

