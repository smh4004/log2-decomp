/* sub_080205E2  (original: 0x080205E2-0x080205FE in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();


void sub_080205E2(int param_1)

{
  sub_0801FE20();
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x5e);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}

