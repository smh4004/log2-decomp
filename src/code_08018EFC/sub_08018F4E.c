/* sub_08018F4E  (original: 0x08018F4E-0x08018F72 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007662();
extern int sub_0801F08C();
extern undefined volatile _08024A28;


void sub_08018F4E(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024A28;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  sub_08007662(param_1,puVar1);
  *(undefined1 *)(param_1 + 8) = 0x18;
  return;
}

