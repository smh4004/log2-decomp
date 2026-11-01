/* sub_0802351C  (original: 0x0802351C-0x08023538 in asm/code_080233FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002288;
extern undefined * volatile DAT_0300228c;
extern undefined volatile _080254C4;
extern undefined volatile _080249B8;


void sub_0802351C(void)

{
  DAT_03002288 = &_080254C4;
  DAT_0300228c = &_080249B8;
  return;
}

