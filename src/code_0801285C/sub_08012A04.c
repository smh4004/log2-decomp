/* sub_08012A04  (original: 0x08012A04-0x08012A28 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800763C();
extern undefined volatile _080258A0;


void sub_08012A04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080258A0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
  }
  sub_0800763C(param_1,puVar1);
  return;
}

