/* sub_0800E884  (original: 0x0800E884-0x0800E8AE in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800E884(undefined4 param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = *(short *)(param_2 + 0x12);
  uVar2 = sVar1 + 1;
  *(ushort *)(param_2 + 0x12) = uVar2;
  if (uVar2 < 0x80) {
    *(ushort *)(param_2 + 0x14) = uVar2 >> 5;
    return;
  }
  if (0xf0 < (sVar1 + 0x81U & 0xff)) {
    *(undefined2 *)(param_2 + 0x14) = 3;
    return;
  }
  *(undefined2 *)(param_2 + 0x14) = 4;
  return;
}

