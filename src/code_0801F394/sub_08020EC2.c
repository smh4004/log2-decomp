/* sub_08020EC2  (original: 0x08020EC2-0x08020FDC in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08027FEC();


void sub_08020EC2(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  int iVar10;
  unsigned int __frame[34];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_88 (*(ushort * *)((char *)__frame + 0x0))
#define local_84 ((ushort *)((char *)__frame + 0x4))
#define local_44 (*(uint *)((char *)__frame + 0x44))
#define local_40 (*(uint *)((char *)__frame + 0x48))
#define local_3c (*(int *)((char *)__frame + 0x4c))
#define local_38 (*(int *)((char *)__frame + 0x50))
#define local_34 (*(int *)((char *)__frame + 0x54))
#define local_30 (*(int *)((char *)__frame + 0x58))
#define local_2c (*(int *)((char *)__frame + 0x5c))
#define local_28 (*(int *)((char *)__frame + 0x60))
#define local_24 (*(int *)((char *)__frame + 0x64))
#define local_20 (*(int *)((char *)__frame + 0x68))
#define local_1c (*(int *)((char *)__frame + 0x6c))
#define local_18 (*(ushort * *)((char *)__frame + 0x70))
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
  if (uVar4 != 0) {
    puVar8 = (ushort *)(uVar4 * 2 + *(int *)(param_1 + 0xc));
    uVar4 = (uint)*puVar8;
    local_24 = param_3[1];
    local_28 = *param_3;
    local_20 = local_28 + uVar4 + 1;
    local_1c = local_24 + 0x10;
    sub_08027FEC(&local_38,&local_28,param_1 + 0x10);
    if ((local_38 < local_30) && (local_34 < local_2c)) {
      local_3c = local_30 - local_38;
      local_40 = local_34 - param_3[1];
      local_44 = (1 << (local_2c - local_34 & 0xffU)) - 1;
      iVar10 = 0;
      if (uVar4 != 0) {
        do {
          iVar5 = iVar10 + 1;
          local_84[iVar10 + 1] = puVar8[iVar10 + 1] << 1;
          iVar10 = iVar5;
        } while (iVar5 < (int)uVar4);
      }
      local_18 = puVar8 + (local_38 - *param_3) + 1;
      local_88 = local_84 + (local_38 - *param_3);
      puVar9 = (undefined1 *)
               (*(int *)(param_1 + 0x2c) * local_34 + *(int *)(param_1 + 0x24) + local_38);
      iVar10 = 0;
      if (0 < local_3c) {
        do {
          uVar1 = *local_18;
          local_18 = local_18 + 1;
          uVar3 = uVar1 >> (local_40 & 0xff) & local_44;
          uVar1 = *local_88;
          local_88 = local_88 + 1;
          uVar6 = uVar1 >> (local_40 & 0xff) & local_44;
          puVar7 = puVar9;
          if (uVar3 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar3 << 0x1f) < 0) {
                *puVar7 = *(undefined1 *)(param_1 + 0x29);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar7 = *(undefined1 *)(param_1 + 0x28);
              }
              puVar7 = puVar7 + *(int *)(param_1 + 0x2c);
              uVar2 = uVar3 | uVar6;
              uVar3 = (int)uVar3 >> 1;
              uVar6 = (int)uVar6 >> 1;
            } while ((int)uVar2 >> 1 != 0);
          }
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_3c);
      }
    }
    *param_3 = *param_3 + uVar4 + 1;
  }
  return;
}

