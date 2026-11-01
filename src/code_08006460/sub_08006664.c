/* sub_08006664  (original: 0x08006664-0x0800678C in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 54% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006618();
extern int sub_0800659E();
extern int sub_08006534();
extern int sub_0800656A();


void sub_08006664(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[(param_2 >> 1) + 0xc00];
  uVar5 = (uint)bVar1;
  param_1[uVar5 * 10 + 0x694] = 0;
  uVar2 = (uint)param_1[uVar5 * 10 + 0x69a];
  if (uVar2 == 0xff) {
    uVar2 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar2 == 0xff) {
      *param_1 = bVar1;
      param_1[uVar5 * 10 + 0x69c] = 0xff;
      param_1[uVar5 * 10 + 0x69d] = 0xff;
    }
    else if (param_1[uVar2 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar2 * 10 + 0x698) =
           *(short *)(param_1 + uVar2 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar2 * 10 + 0x69a] = 0xff;
      sub_0800656A(param_1,uVar5);
    }
    else {
      sub_08006534(param_1,uVar5,param_1[uVar2 * 10 + 0x694],uVar2 * 4,param_4);
    }
  }
  else {
    pbVar3 = param_1 + uVar2 * 10 + 0x694;
    uVar4 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar4 == 0xff) {
      if (*pbVar3 == 0) {
        sub_0800659E(param_1,uVar5,uVar2);
      }
      else {
        sub_08006534(param_1,uVar5);
      }
    }
    else if (*pbVar3 == 0) {
      if (param_1[uVar4 * 10 + 0x694] == 0) {
        sub_08006618(param_1);
        *(short *)(param_1 + uVar4 * 10 + 0x698) =
             *(short *)(param_1 + uVar5 * 10 + 0x698) + *(short *)(pbVar3 + 4) +
             *(short *)(param_1 + uVar4 * 10 + 0x698);
        param_1[uVar4 * 10 + 0x69a] = pbVar3[6];
        if (pbVar3[6] != 0xff) {
          param_1[(uint)pbVar3[6] * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
        }
        sub_0800656A(param_1,param_1[uVar5 * 10 + 0x69a]);
        sub_0800656A(param_1,uVar5);
      }
      else {
        sub_0800659E(param_1,uVar5,uVar2);
      }
    }
    else if (param_1[uVar4 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar4 * 10 + 0x698) =
           *(short *)(param_1 + uVar4 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar4 * 10 + 0x69a] = param_1[uVar5 * 10 + 0x69a];
      param_1[uVar2 * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
      sub_0800656A(param_1,uVar5);
    }
    else {
      sub_08006534(param_1,uVar5);
    }
  }
  return;
}

