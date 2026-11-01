/* sub_080234CC  (original: 0x080234CC-0x080234E8 in asm/code_080233FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002270;
extern undefined * volatile DAT_03002274;
extern undefined volatile _080256D8;
extern undefined volatile _08024B7C;


void sub_080234CC(void)

{
  DAT_03002270 = &_080256D8;
  DAT_03002274 = &_08024B7C;
  return;
}

