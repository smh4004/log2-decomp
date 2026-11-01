/* sub_0801ED0C  (original: 0x0801ED0C-0x0801ED3C in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F2CE();
extern int sub_0800020C();
extern int sub_0801F08C();
extern undefined volatile _080242D0;
extern undefined1 volatile REG_BLDALPHA;


undefined4 sub_0801ED0C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar2;
  REG_BLDALPHA = (char)iVar2;
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)sub_0801F08C(0xbc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_0800020C(puVar1);
      *puVar1 = &_080242D0;
    }
    sub_0801F2CE(puVar1);
  }
  return 0;
}

