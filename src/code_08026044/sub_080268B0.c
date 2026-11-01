/* sub_080268B0  (original: 0x080268B0-0x080268C4 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023DCC;


void sub_080268B0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

