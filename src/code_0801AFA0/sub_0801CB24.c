/* sub_0801CB24  (original: 0x0801CB24-0x0801CB42 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0801CB24(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 8) {
    *(undefined2 *)(param_2 + 0x14) = 0;
    return;
  }
  *(short *)(param_2 + 0x14) = 1 - (short)((int)((uint)uVar1 << 0x1c) >> 0x1f);
  return;
}

