/* sub_0800A622  (original: 0x0800A622-0x0800A638 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F2F4();
extern undefined volatile _08025C88;


void sub_0800A622(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08025C88;
  }
  sub_0801F2F4();
  return;
}

