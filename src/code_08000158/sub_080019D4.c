/* sub_080019D4  (original: 0x080019D4-0x080019F6 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_080019D4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int)((uint)*(byte *)(iVar1 * 0x164 + param_1 + 1) << 0x1f) < 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0;
}

