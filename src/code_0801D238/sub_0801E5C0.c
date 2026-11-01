/* sub_0801E5C0  (original: 0x0801E5C0-0x0801E5D6 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08023E5C;


void sub_0801E5C0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E5C;
    puVar1[1] = 0;
  }
  return;
}

