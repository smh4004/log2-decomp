/* sub_0802054C  (original: 0x0802054C-0x08020566 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0802054C(int param_1)

{
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined4 *)(param_1 + 0x54) = 0x8020535;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}

