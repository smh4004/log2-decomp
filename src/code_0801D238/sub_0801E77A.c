/* sub_0801E77A  (original: 0x0801E77A-0x0801E794 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08024518;


void sub_0801E77A(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024518;
    puVar1[1] = 0;
    puVar1[2] = param_1;
  }
  return;
}

