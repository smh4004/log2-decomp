/* sub_08020500  (original: 0x08020500-0x08020530 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();


void sub_08020500(int param_1)

{
  sub_0801FE20();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x5e);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80204d5;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}

