/* sub_0801F702  (original: 0x0801F702-0x0801F7E2 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0801F702(char *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define pcStack_20 (*(char * *)((char *)__frame + 0x8))
#define iStack_1c (*(int *)((char *)__frame + 0xc))
#define pbStack_18 (*(byte * *)((char *)__frame + 0x10))
  local_24 = *(int *)(param_1 + 8) + -0xc;
  pcStack_20 = param_1;
  iStack_1c = param_2;
  pbStack_18 = param_3;
  do {
    pbVar9 = param_3;
    if (*(int *)(param_1 + 0x1c) <= local_24) {
      return;
    }
    while( true ) {
      if (*pbVar9 == 0) {
        return;
      }
      if (*pbVar9 != 0x20) break;
      pbVar9 = pbVar9 + 1;
    }
    iVar3 = 0;
    pbVar7 = (byte *)0x0;
    for (param_3 = pbVar9; uVar8 = (uint)*param_3, uVar8 != 0; param_3 = param_3 + 1) {
      if (uVar8 == 10) {
        param_3 = param_3 + 1;
        break;
      }
      if (uVar8 == 0x20) {
        pbVar7 = param_3;
      }
      iVar3 = *(ushort *)
               (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + uVar8 * 2) * 2
               ) + 1 + iVar3;
      if (iStack_1c < iVar3) {
        if (pbVar7 != (byte *)0x0) {
          param_3 = pbVar7;
        }
        break;
      }
    }
    iVar3 = (int)param_3 - (int)pbVar9;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x14) + -0x10 < local_24)) {
      iVar4 = 0;
      pbVar7 = pbVar9;
      iVar6 = iVar3;
      do {
        iVar6 = iVar6 + -1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = (uint)*(ushort *)
                       (*(int *)(param_1 + 0xc) +
                       (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar4;
        iVar4 = iVar5 + 1;
      } while (iVar6 != 0);
      cVar2 = *param_1;
      if (cVar2 == '\0') {
        iStack_28 = *(int *)(param_1 + 4);
      }
      else if (cVar2 == '\x01') {
        iStack_28 = *(int *)(param_1 + 4) - (iVar5 + 2 >> 1);
      }
      else if (cVar2 == '\x02') {
        iStack_28 = *(int *)(param_1 + 4) - iVar4;
      }
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        __call_via_r3(param_1,bVar1,&iStack_28,*(undefined4 *)(param_1 + 0x20));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_24 = local_24 + (uint)(byte)param_1[1];
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
  } while( true );
}

