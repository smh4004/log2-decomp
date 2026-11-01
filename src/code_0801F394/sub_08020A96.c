/* sub_08020A96  (original: 0x08020A96-0x08020AC8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08020A96(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    param_1[iVar1 * 0x60 + 0x62] = 0;
    param_1[iVar1 * 0x60 + 0x77] = 0;
    param_1[iVar1 * 0x60 + 0x70] = 0;
    param_1[iVar1 * 0x60 + 0x28] = 0;
    iVar2 = iVar1 + 1;
    *(undefined1 **)(param_1 + iVar1 * 0x60 + 0x44) = param_1 + iVar1 * 0x60 + 0x18;
    iVar1 = iVar2;
  } while (iVar2 < 0xf);
  param_1[1] = param_1[2];
  *param_1 = 1;
  return;
}

