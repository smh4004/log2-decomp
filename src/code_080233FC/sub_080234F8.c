/* sub_080234F8  (original: 0x080234F8-0x0802351C in asm/code_080233FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300227c;
extern undefined * volatile DAT_03002280;
extern undefined volatile _08023F84;
extern undefined * volatile DAT_03002284;
extern undefined volatile _08024BB4;
extern undefined volatile _080251E0;


void sub_080234F8(void)

{
  DAT_0300227c = &_080251E0;
  DAT_03002280 = &_08024BB4;
  DAT_03002284 = &_08023F84;
  return;
}

