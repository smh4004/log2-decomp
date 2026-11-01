/* sub_0801CB44  (original: 0x0801CB44-0x0801CB6E in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08025208;


void sub_0801CB44(undefined4 *param_1,int *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025208;
    param_1[1] = *param_2 * 0x71d >> 8;
    param_1[2] = param_2[1] * 0x71d >> 8;
  }
  return;
}

