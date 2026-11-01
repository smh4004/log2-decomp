/* sub_0800C9FE  (original: 0x0800C9FE-0x0800CA90 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08022008();


undefined4 sub_0800C9FE(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = param_2[1];
  param_2[1] = iVar4 + 0x20;
  iVar5 = param_2[2];
  param_2[2] = iVar5 + 1;
  iVar6 = 0;
  uVar8 = (uint)(iVar5 << 0x1b) >> 2;
  puVar3 = (uint *)*param_2;
  do {
    puVar2 = puVar3;
    uVar7 = iVar6 * 0x200000 + 0x80006180;
    *puVar2 = uVar7;
    iVar5 = iVar6 * 0x10;
    iVar6 = iVar6 + 1;
    puVar2[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar5 & 0x3ff | puVar2[1] & 0xfffffc00;
    *puVar2 = uVar7 & 0xc1ffffff | uVar8;
    puVar3 = puVar2 + 2;
  } while (iVar6 < 7);
  *puVar3 = 0x40e02180;
  puVar2[3] = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff | puVar2[3] & 0xfffffc00;
  uVar8 = uVar8 | 0x40e02180;
  *puVar3 = uVar8;
  *param_2 = puVar2 + 4;
  *(undefined2 *)(iVar4 + 6) = 0x100;
  *(undefined2 *)(iVar4 + 0xe) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0;
  if (*(byte *)(param_1 + 0x10) < 0x11) {
    uVar1 = sub_08022008(*(byte *)(param_1 + 0x10),0x1000,0x100,uVar8,param_4);
    *(undefined2 *)(iVar4 + 0x1e) = uVar1;
  }
  else {
    *(undefined2 *)(iVar4 + 0x1e) = 0x100;
  }
  return 0;
}

