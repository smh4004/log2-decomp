/* sub_08013CDE  (original: 0x08013CDE-0x08013D40 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


bool sub_08013CDE(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x38) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x3c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  return *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x10);
}

