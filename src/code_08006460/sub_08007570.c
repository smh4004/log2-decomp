/* sub_08007570  (original: 0x08007570-0x08007588 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_08007570(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(0xf0 < (uVar1 & 0xff));
  return;
}

