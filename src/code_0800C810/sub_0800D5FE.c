/* sub_0800D5FE  (original: 0x0800D5FE-0x0800D624 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800D1AC();
extern undefined volatile _08024E1C;


undefined4 * sub_0800D5FE(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,param_2);
  *puVar1 = &_08024E1C;
  return puVar1;
}

