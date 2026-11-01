/* sub_08027E1C  (original: 0x08027E1C-0x08027E30 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08025FEC;


void sub_08027E1C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

