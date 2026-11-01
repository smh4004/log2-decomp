/* sub_0801FFC8  (original: 0x0801FFC8-0x0801FFE6 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087FCE9C;


void sub_0801FFC8(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}

