/* sub_08023388  (original: 0x08023388-0x080233A4 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002218;
extern undefined * volatile DAT_0300221c;
extern undefined volatile _080247DC;
extern undefined volatile _080251B4;


void sub_08023388(void)

{
  DAT_03002218 = &_080251B4;
  DAT_0300221c = &_080247DC;
  return;
}

