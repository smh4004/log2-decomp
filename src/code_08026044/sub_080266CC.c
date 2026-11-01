/* sub_080266CC  (original: 0x080266CC-0x080266E0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08025FEC;


void sub_080266CC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

