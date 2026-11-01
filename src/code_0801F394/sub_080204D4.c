/* sub_080204D4  (original: 0x080204D4-0x08020500 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0-void.
 */
#include "ghidra_types.h"


void sub_080204D4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 5;
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
  }
  return;
}

