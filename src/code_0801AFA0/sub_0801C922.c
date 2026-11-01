/* sub_0801C922  (original: 0x0801C922-0x0801C946 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int sub_0801F08C();
extern undefined volatile _0802455C;


void sub_0801C922(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)sub_0801F08C(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0802455C;
      *(char *)(puVar1 + 1) = (char)iVar2;
    }
    sub_0800763C(param_2,puVar1);
  }
  return;
}

