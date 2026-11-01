/* sub_08004FF8  (original: 0x08004FF8-0x08005014 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r0();
extern undefined volatile _08025FE0;


undefined4 * sub_08004FF8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &_08025FE0;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  uVar1 = __call_via_r0(*(undefined4 *)(param_2 + 4));
  param_1[3] = uVar1;
  return param_1;
}

