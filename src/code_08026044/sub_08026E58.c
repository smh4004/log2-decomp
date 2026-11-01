/* sub_08026E58  (original: 0x08026E58-0x08026E84 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08020EAA();
extern undefined volatile _08023720;


void sub_08026E58(undefined4 *param_1)

{
  sub_08020EAA(param_1 + 0x1f,0);
  sub_08020EAA(param_1 + 0x11,0);
  sub_08020EAA(param_1 + 3,0);
  *param_1 = &_08023720;
  return;
}

