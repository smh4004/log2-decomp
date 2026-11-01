/* sub_080267E4  (original: 0x080267E4-0x080267F8 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023DCC;


void sub_080267E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

