/* sub_0801BC84  (original: 0x0801BC84-0x0801BCA4 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007662();
extern int sub_0801F08C();
extern undefined volatile _08024A3C;


void sub_0801BC84(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024A3C;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  sub_08007662(param_2,puVar1);
  return;
}

