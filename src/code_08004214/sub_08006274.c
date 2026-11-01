/* sub_08006274  (original: 0x08006274-0x08006298 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_DISPCNT;


void sub_08006274(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x62) & ~(ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x62) = uVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    REG_DISPCNT = uVar1;
  }
  return;
}

