/* sub_080184AE  (original: 0x080184AE-0x080184D0 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080184AE(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfe00ff00;
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = uVar1 | (uint)(*param_2 << 0x17) >> 7;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x10) = param_2[1] & 0xffU | uVar1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

