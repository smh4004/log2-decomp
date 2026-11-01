/* sub_0800A638  (original: 0x0800A638-0x0800A65C in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F2F4();
extern undefined volatile _08023D2C;


void sub_0800A638(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023D2C;
    puVar1[1] = iVar2;
  }
  sub_0801F2F4(puVar1);
  return;
}

