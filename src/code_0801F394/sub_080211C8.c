/* sub_080211C8  (original: 0x080211C8-0x08021202 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes the snapshot tests but changes game output on tools/harness/decomp_explore.txt (found by gamebisect.py).
 */
#include "ghidra_types.h"


void sub_080211C8(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  iVar6 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  iVar4 = iVar6;
  do {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 != '\0') {
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar2 = pcVar2 + (iVar3 - iVar6);
    iVar5 = iVar5 + -1;
    iVar4 = iVar6;
  } while (iVar5 != 0);
  return;
}

