/* sub_0801FEC6  (original: 0x0801FEC6-0x0801FEE8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();
extern char volatile DAT_030026ca;
extern char volatile DAT_030026c9;
extern int volatile DAT_030026d8;


void sub_0801FEC6(int param_1)

{
  sub_0801FE20();
  DAT_030026c9 = DAT_030026ca + -1;
  DAT_030026d8 = *(byte *)(param_1 + 0x5e) - 1;
  return;
}

