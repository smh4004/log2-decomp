/* sub_0800F008  (original: 0x0800F008-0x0800F034 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801F110();
extern undefined volatile _08025FEC;
extern undefined volatile _08025720;


void sub_0800F008(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08025720;
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

