/* sub_0800D584  (original: 0x0800D584-0x0800D5B8 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 91% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __call_via_r2();
extern int sub_0800D1AC();
extern undefined volatile _0802504C;


undefined4 * sub_0800D584(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,param_2);
  *puVar1 = &_0802504C;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  return puVar1;
}

