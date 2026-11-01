/* sub_08021924  (original: 0x08021924-0x08021948 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern short volatile DAT_030038a2;
extern undefined1 volatile DAT_030038a4;


void sub_08021924(void)

{
  if ((DAT_030038a2 != 0) && (DAT_030038a2 = DAT_030038a2 + -1, DAT_030038a2 == 0)) {
    DAT_030038a4 = 1;
  }
  return;
}

