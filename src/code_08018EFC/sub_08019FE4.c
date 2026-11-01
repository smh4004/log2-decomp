/* sub_08019FE4  (original: 0x08019FE4-0x0801A006 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007688();


void sub_08019FE4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 3;
  }
  else {
    *(undefined2 *)(param_2 + 0x14) = 2;
    sub_08007688();
  }
  return;
}

