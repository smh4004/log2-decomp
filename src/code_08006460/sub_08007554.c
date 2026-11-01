/* sub_08007554  (original: 0x08007554-0x08007570 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_08007554(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0802141C(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x4c;
  return;
}

