/* sub_0801FC0C  (original: 0x0801FC0C-0x0801FC22 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0801FC0C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40 + param_1;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
  } while (iVar1 < 0x10);
  return;
}

