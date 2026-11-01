/* sub_080075A8  (original: 0x080075A8-0x080075F8 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080067AC();
extern int __call_via_r2();
extern undefined volatile DAT_03001120;
extern undefined4 volatile DAT_03001f3c;
extern undefined volatile _08023A1C;
extern undefined volatile _0802489C;


undefined4 * sub_080075A8(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = *param_2;
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  uVar1 = sub_080067AC(&DAT_03001120);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802489C;
  param_1[0x12] = param_2;
  param_1[6] = param_3;
  param_1[7] = &DAT_03001f3c;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = *(undefined4 *)(param_2 + 4);
  param_1[0xb] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  uVar2 = sub_0801F08C(*param_2);
  param_1[0xc] = uVar2;
  piVar3 = *(int **)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*piVar3 + (int)piVar3);
  return param_1;
}

