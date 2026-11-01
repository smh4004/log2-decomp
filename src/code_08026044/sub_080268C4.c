/* sub_080268C4  (original: 0x080268C4-0x080268F0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern undefined volatile _08023720;


void sub_080268C4(undefined4 *param_1)

{
  sub_08020EAA(param_1 + 0x1f,0);
  sub_08020EAA(param_1 + 0x11,0);
  sub_08020EAA(param_1 + 3,0);
  *param_1 = &_08023720;
  return;
}

