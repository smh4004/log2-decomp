/* sub_08005D6C  (original: 0x08005D6C-0x08005DD4 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 92% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08005D6C(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((-1 < *param_1) && (-1 < param_1[1])) && (param_1[2] < 0x801)) && (param_1[3] < 0x801)) {
    iVar2 = param_1[1] >> 3;
    do {
      if (param_1[3] + 7 >> 3 <= iVar2) {
        return 1;
      }
      for (uVar1 = *param_1 >> 3; (int)uVar1 < param_1[2] + 7 >> 3; uVar1 = uVar1 + 1) {
        if ((*(uint *)(iVar2 * 0x20 + param_2 + ((int)uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0)
        {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while( true );
  }
  return 0;
}

