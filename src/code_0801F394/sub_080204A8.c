/* sub_080204A8  (original: 0x080204A8-0x080204D2 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();


void sub_080204A8(int *param_1)

{
  sub_0801FE20();
  if ((*(byte *)(param_1 + 0x16) & 0x11) != 0) {
    *param_1 = (uint)*(byte *)((int)param_1 + 0x5e) << 0x16;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
  }
  return;
}

