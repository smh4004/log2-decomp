/* sub_08026EA8  (original: 0x08026EA8-0x08026EBC in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023DCC;


void sub_08026EA8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

