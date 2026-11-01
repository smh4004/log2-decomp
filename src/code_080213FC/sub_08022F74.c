/* sub_08022F74  (original: 0x08022F74-0x08022F90 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03001f2c;
extern undefined * volatile DAT_03001f30;
extern undefined volatile _08024A00;
extern undefined volatile _080254EC;


void sub_08022F74(void)

{
  DAT_03001f2c = &_080254EC;
  DAT_03001f30 = &_08024A00;
  return;
}

