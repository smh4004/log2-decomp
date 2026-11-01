/* sub_0800ED4E  (original: 0x0800ED4E-0x0800ED96 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern ushort volatile DAT_03002142;


undefined4 sub_0800ED4E(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x2000;
  uVar1 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7 | 0x2000;
  *puVar2 = uVar1;
  *puVar2 = *(uint *)(param_1 + 0x24) & 0xff | uVar1;
  puVar2[1] = (puVar2[1] & 0xfffff3ff) + 0x800 & 0xfffffc00 | DAT_03002142 & 0x3ff;
  return 0;
}

