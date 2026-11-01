/* sub_08006D70  (original: 0x08006D70-0x08006DA6 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08006D70(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = *param_1;
    while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
      if (uVar4 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
        uVar4 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
      }
      bVar1 = param_1[uVar2 * 10 + 0x69c];
    }
    iVar3 = uVar4 << 6;
  }
  return iVar3;
}

