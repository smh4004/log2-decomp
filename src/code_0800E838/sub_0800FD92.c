/* sub_0800FD92  (original: 0x0800FD92-0x0800FDE6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 3/3 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


undefined4 sub_0800FD92(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x2c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}

