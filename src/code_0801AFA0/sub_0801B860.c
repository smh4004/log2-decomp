/* sub_0801B860  (original: 0x0801B860-0x0801B886 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801B722();
extern int sub_0801F08C();
extern undefined volatile _08024D98;


undefined4 * sub_0801B860(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0801B722(puVar1,param_1,param_2);
    *puVar1 = &_08024D98;
  }
  return puVar1;
}

