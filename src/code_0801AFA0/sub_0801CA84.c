/* sub_0801CA84  (original: 0x0801CA84-0x0801CA9A in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08024528;


undefined4 * sub_0801CA84(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024528;
    puVar1[1] = uVar2;
  }
  return puVar1;
}

