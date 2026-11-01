/* sub_0800B494  (original: 0x0800B494-0x0800B4AE in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern undefined volatile _08024AA0;


void sub_0800B494(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024AA0;
  }
  return;
}

