/* sub_0801177C  (original: 0x0801177C-0x080117C2 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800D8AE();
extern undefined volatile _08023F18;
extern undefined volatile _08025FE0;


undefined4 * sub_0801177C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = sub_0800D8AE();
  *param_1 = &_08025FE0;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(param_2 + 0x18) + -0xf;
  *(short *)((int)param_1 + 6) = (short)uVar2 + -7;
  *(short *)(param_1 + 2) = (short)uVar3;
  *(short *)((int)param_1 + 10) = (short)uVar4;
  *param_1 = &_08023F18;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  return param_1;
}

