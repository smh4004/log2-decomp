/* sub_080067AC  (original: 0x080067AC-0x080068A6 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006618();


int sub_080067AC(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)*param_1;
  uVar3 = param_2 >> 6;
  uVar7 = 0xff;
  uVar4 = 0x7fffffff;
  if (uVar6 != 0xff) {
    do {
      uVar5 = (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x698);
      if (uVar5 < uVar4) {
        if (uVar5 == uVar3) {
          param_1[uVar6 * 10 + 0x694] = 1;
          sub_08006618(param_1,uVar6);
          param_1[*(ushort *)(param_1 + uVar6 * 10 + 0x696) + 0xc00] = (byte)uVar6;
          return (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x696) << 1;
        }
        if ((int)uVar3 < (int)uVar5) {
          uVar4 = uVar5;
          uVar7 = uVar6;
        }
      }
      uVar6 = (uint)param_1[uVar6 * 10 + 0x69c];
    } while (uVar6 != 0xff);
    if (uVar7 != 0xff) {
      bVar1 = param_1[1];
      uVar4 = (uint)bVar1;
      if (uVar4 != 0xff) {
        bVar2 = param_1[uVar4 * 10 + 0x69a];
        param_1[1] = bVar2;
        if (bVar2 != 0xff) {
          param_1[(uint)bVar2 * 10 + 0x69b] = 0xff;
        }
        param_1[uVar4 * 10 + 0x69b] = (byte)uVar7;
        param_1[uVar4 * 10 + 0x69a] = param_1[uVar7 * 10 + 0x69a];
        if (param_1[uVar7 * 10 + 0x69a] != 0xff) {
          param_1[(uint)param_1[uVar7 * 10 + 0x69a] * 10 + 0x69b] = bVar1;
        }
        param_1[uVar7 * 10 + 0x69a] = bVar1;
        *(short *)(param_1 + uVar7 * 10 + 0x698) =
             *(short *)(param_1 + uVar7 * 10 + 0x698) - (short)uVar3;
        param_1[uVar4 * 10 + 0x694] = 1;
        *(short *)(param_1 + uVar4 * 10 + 0x696) =
             *(short *)(param_1 + uVar7 * 10 + 0x696) + *(short *)(param_1 + uVar7 * 10 + 0x698);
        *(short *)(param_1 + uVar4 * 10 + 0x698) = (short)uVar3;
        param_1[*(ushort *)(param_1 + uVar4 * 10 + 0x696) + 0xc00] = bVar1;
        return (uint)*(ushort *)(param_1 + uVar4 * 10 + 0x696) << 1;
      }
      param_1[uVar7 * 10 + 0x694] = 1;
      sub_08006618(param_1,uVar7);
      param_1[*(ushort *)(param_1 + uVar7 * 10 + 0x696) + 0xc00] = (byte)uVar7;
      return (uint)*(ushort *)(param_1 + uVar7 * 10 + 0x696) << 1;
    }
  }
  return -1;
}

