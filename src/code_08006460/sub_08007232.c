/* sub_08007232  (original: 0x08007232-0x08007298 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;


undefined4 sub_08007232(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)((*(int *)(param_1 + 0x18) - DAT_030010ac) * 0x800000) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = *(int *)(param_1 + 0x1c) - DAT_030010b0 & 0xffU | uVar2 & 0xfe00ff00 | uVar3;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0xe) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}

