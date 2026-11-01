/* sub_08001A26  (original: 0x08001A26-0x08001A44 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08003E00();


undefined4 sub_08001A26(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_2 * 0x164 + param_1 + 1) << 0x1f) < 0) {
    uVar1 = sub_08003E00();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

