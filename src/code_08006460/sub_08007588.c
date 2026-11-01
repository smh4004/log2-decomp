/* sub_08007588  (original: 0x08007588-0x080075A6 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();


void sub_08007588(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0802141C(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x1ac;
  return;
}

