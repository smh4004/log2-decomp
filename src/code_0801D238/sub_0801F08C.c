/* sub_0801F08C  (original: 0x0801F08C-0x0801F110 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 79% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801EFBC();
extern ushort * volatile DAT_030022b4;
extern undefined volatile DAT_02000004;


ushort * sub_0801F08C(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  uVar3 = param_1 + 3 >> 2;
  puVar7 = (ushort *)0x0;
  uVar5 = 0x7fffffff;
  puVar8 = DAT_030022b4;
  while( true ) {
    uVar4 = (uint)puVar8[1];
    if (uVar4 < uVar5) {
      if (uVar4 == uVar3) {
        sub_0801EFBC(puVar8);
        return puVar8 + 4;
      }
      if ((int)uVar3 < (int)uVar4) {
        uVar5 = uVar4;
        puVar7 = puVar8;
      }
    }
    if (puVar8[4] == 0) break;
    puVar8 = (ushort *)((uint)puVar8[4] * 4 + 0x2000000);
  }
  iVar6 = (puVar7[1] - uVar3) + -2;
  if (iVar6 < 1) {
    sub_0801EFBC(puVar7);
    return puVar7 + 4;
  }
  uVar1 = *puVar7;
  puVar7[iVar6 * 2 + 4] = uVar1;
  uVar2 = (ushort)((int)(puVar7 + iVar6 * 2 + -0xfffffc) >> 2);
  if (uVar1 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)uVar1 * 4) = uVar2;
  }
  puVar7[iVar6 * 2 + 5] = (ushort)uVar3;
  puVar7[iVar6 * 2 + 6] = (ushort)((int)(puVar7 + -0x1000000) >> 2);
  *(undefined1 *)(puVar7 + iVar6 * 2 + 7) = 1;
  *puVar7 = uVar2;
  puVar7[1] = (ushort)iVar6;
  return puVar7 + iVar6 * 2 + 8;
}

