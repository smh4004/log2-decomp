/* sub_08012714  (original: 0x08012714-0x0801272C in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _080238F0;


void sub_08012714(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080238F0;
  }
  return;
}

