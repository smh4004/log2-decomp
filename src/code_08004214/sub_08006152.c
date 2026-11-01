/* sub_08006152  (original: 0x08006152-0x08006250 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_080060B0();
extern int sub_0801F412();
extern int sub_08005FBA();
extern int sub_0801F08C();
extern int sub_08005F1A();
extern int sub_0801F394();
extern int sub_080060FE();
extern int sub_08005DD4();
extern undefined4 volatile REG_DMA3SAD;


void sub_08006152(undefined4 *param_1,undefined2 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(int *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x4))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x8))
#define puStack_20 (*(undefined2 * *)((char *)__frame + 0xc))
#define piStack_1c (*(int * *)((char *)__frame + 0x10))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x14))
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0x14] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x1a] = 1;
  puStack_24 = param_1;
  puStack_20 = param_2;
  piStack_1c = param_3;
  uStack_18 = param_4;
  if (param_1[0x1b] == 0) {
    uVar1 = sub_0801F08C(0x2000);
    param_1[0x1b] = uVar1;
  }
  if (param_1[0x1c] == 0) {
    uVar1 = sub_0801F08C(0x2000);
    param_1[0x1c] = uVar1;
  }
  if (param_1[0x1d] == 0) {
    uVar1 = sub_0801F08C(0x2000);
    param_1[0x1d] = uVar1;
  }
  sub_0801F394(*(undefined4 *)(param_2 + 0x1a),param_1[0x1b]);
  sub_0801F394(*(undefined4 *)(param_2 + 0x1c),param_1[0x1c]);
  sub_0801F412(&REG_DMA3SAD,param_1[0x1d],param_1[0x1b],0x2000);
  *(short *)(param_1 + 0x17) = param_2[4] + -1;
  *(short *)((int)param_1 + 0x5e) = param_2[5] + -1;
  param_1[0x15] = (ushort)param_2[4] + 0xef;
  param_1[0x16] = (ushort)param_2[5] + 0x9f;
  sub_08005FBA(param_1,param_2);
  if (*(int *)(param_2 + 0x1e) == 0) {
    sub_080060B0(param_1,param_3);
    param_1[0xb] = param_1[3];
    param_1[0xc] = param_1[4];
    *(undefined2 *)((int)param_1 + 0x62) = 8000;
  }
  else {
    local_28 = (param_3[1] + 0x4c) * 0x400;
    local_2c = (*param_3 + 0x70) * 0x400;
    sub_080060FE(param_1,&local_2c);
    sub_08005DD4(param_1);
    *(undefined2 *)((int)param_1 + 0x62) = 0x1741;
  }
  param_1[0x1e] = (uint)*(byte *)(param_2 + 2);
  param_1[0x1f] = (uint)*(byte *)((int)param_2 + 5);
  param_1[0x20] = (uint)*(byte *)(param_2 + 3);
  param_1[0x21] = (uint)*(byte *)((int)param_2 + 7);
  *(undefined2 *)(param_1 + 0x19) = *param_2;
  *(undefined1 *)((int)param_1 + 0x61) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((int)param_2 + 3);
  sub_08005F1A(param_1,uStack_18);
  param_1[0x1a] = 0;
  return;
}

