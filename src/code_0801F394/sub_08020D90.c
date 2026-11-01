/* sub_08020D90  (original: 0x08020D90-0x08020E5C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08027FEC();


void sub_08020D90(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  int iVar7;
  unsigned int __frame[14];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_38 (*(int *)((char *)__frame + 0x0))
#define local_34 (*(int *)((char *)__frame + 0x4))
#define local_30 (*(int *)((char *)__frame + 0x8))
#define local_2c (*(int *)((char *)__frame + 0xc))
#define local_28 (*(int *)((char *)__frame + 0x10))
#define local_24 (*(int *)((char *)__frame + 0x14))
#define local_20 (*(int *)((char *)__frame + 0x18))
#define local_1c (*(int *)((char *)__frame + 0x1c))
#define local_18 (*(uint *)((char *)__frame + 0x20))
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
  if (uVar2 != 0) {
    puVar6 = (ushort *)(uVar2 * 2 + *(int *)(param_1 + 0xc));
    local_18 = (uint)*puVar6;
    local_24 = param_3[1];
    local_28 = *param_3;
    local_20 = local_28 + local_18;
    local_1c = local_24 + 0x10;
    sub_08027FEC(&local_38,&local_28,param_1 + 0x10);
    if ((local_38 < local_30) && (local_34 < local_2c)) {
      iVar4 = param_3[1];
      puVar6 = puVar6 + (local_38 - *param_3) + 1;
      iVar7 = 0;
      puVar5 = (undefined1 *)
               (*(int *)(param_1 + 0x2c) * local_34 + *(int *)(param_1 + 0x24) + local_38);
      if (0 < local_30 - local_38) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar5;
          for (uVar2 = (uint)(uVar1 >> (local_34 - iVar4 & 0xffU)) &
                       (1 << (local_2c - local_34 & 0xffU)) - 1U; uVar2 != 0;
              uVar2 = (int)uVar2 >> 1) {
            if ((int)(uVar2 << 0x1f) < 0) {
              *puVar3 = *(undefined1 *)(param_1 + 0x29);
            }
            puVar3 = puVar3 + *(int *)(param_1 + 0x2c);
          }
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_30 - local_38);
      }
    }
    *param_3 = *param_3 + local_18 + 1;
  }
  return;
}

