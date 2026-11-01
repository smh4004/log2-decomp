/* sub_0800F162  (original: 0x0800F162-0x0800F1AE in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/4 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08006942();
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;
extern undefined volatile DAT_03001120;


void sub_0800F162(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[9];
  sub_080063E0(param_1 + 4,DAT_030010fc,1,param_4,param_4);
  sub_080063E0(param_1 + 4,DAT_03001104,1);
  sub_08006942(&DAT_03001120,param_1,param_1[10]);
  param_1[10] = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  __call_via_r1(iVar1,*(undefined4 *)(iVar1 + 8));
  return;
}

