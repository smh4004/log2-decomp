/* sub_08008390  (original: 0x08008390-0x080083C0 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08007662();
extern int sub_08010760();
extern undefined volatile _08024BC8;


void sub_08008390(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  sub_08010760();
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024BC8;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 8;
  }
  sub_08007662(param_2,puVar1);
  return;
}

