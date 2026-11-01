/* sub_08026A10  (original: 0x08026A10-0x08026A3C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 61% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801F110();
extern undefined volatile _08023DB8;


void sub_08026A10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08023DB8;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

