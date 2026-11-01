/* sub_08011A7C  (original: 0x08011A7C-0x08011AA0 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08007662();
extern undefined volatile _0802459C;


void sub_08011A7C(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802459C;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,puVar1);
  return;
}

