/* sub_0800E142  (original: 0x0800E142-0x0800E160 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007688();


void sub_0800E142(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 4;
  }
  else {
    sub_08007688();
  }
  return;
}

