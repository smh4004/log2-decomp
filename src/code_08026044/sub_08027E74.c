/* sub_08027E74  (original: 0x08027E74-0x08027E9C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 50% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_08027E74(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*param_1 + 8);
  bVar2 = *(byte *)(*param_2 + 8);
  if (bVar1 != bVar2) {
    if (bVar2 < bVar1) {
      return 1;
    }
    return 0;
  }
  if (*(int *)(*param_1 + 4) < *(int *)(*param_2 + 4)) {
    return 1;
  }
  return 0;
}

