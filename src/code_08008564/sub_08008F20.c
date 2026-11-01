/* sub_08008F20  (original: 0x08008F20-0x08008F44 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08008F20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar3 = uVar2 & 0x7f;
    iVar1 = iVar1 * 0x80 + uVar3;
  } while ((int)(uVar2 << 0x18) < 0);
  if ((int)(uVar3 << 0x1f) < 0) {
    return -(iVar1 >> 1);
  }
  return iVar1 >> 1;
}

