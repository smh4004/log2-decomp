/* sub_080233B4  (original: 0x080233B4-0x080233D0 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002224;
extern undefined * volatile DAT_03002228;
extern undefined volatile _08025004;
extern undefined volatile _08025A70;


void sub_080233B4(void)

{
  DAT_03002224 = &_08025A70;
  DAT_03002228 = &_08025004;
  return;
}

