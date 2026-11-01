/* sub_08026B50  (original: 0x08026B50-0x08026B64 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023DCC;


void sub_08026B50(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

