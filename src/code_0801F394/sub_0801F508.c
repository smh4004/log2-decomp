/* sub_0801F508  (original: 0x0801F508-0x0801F54C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes the snapshot tests but changes game output on tools/harness/decomp_explore.txt (found by gamebisect.py).
 */
#include "ghidra_types.h"


void sub_0801F508(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  psVar3 = (short *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *psVar3 = param_3;
          psVar3 = psVar3 + 1;
          param_3 = param_3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      psVar3 = psVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}

