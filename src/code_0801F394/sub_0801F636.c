/* sub_0801F636  (original: 0x0801F636-0x0801F6D8 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0801F636(char *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_1c (*(int *)((char *)__frame + 0x0))
#define iStack_18 (*(int *)((char *)__frame + 0x4))
  pbVar8 = param_2;
  while( true ) {
    for (; (*param_2 != 0 && (*param_2 != 10)); param_2 = param_2 + 1) {
    }
    iVar3 = (int)param_2 - (int)pbVar8;
    if (iVar3 != 0) {
      iVar4 = 0;
      pbVar7 = pbVar8;
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
      iStack_18 = *(int *)(param_1 + 8) + -0xc;
      cVar2 = *param_1;
      if (cVar2 == '\0') {
        iStack_1c = *(int *)(param_1 + 4);
        if (*param_2 == 0) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar4;
        }
      }
      else if (cVar2 == '\x01') {
        iStack_1c = *(int *)(param_1 + 4) - (iVar5 + 2 >> 1);
      }
      else if (cVar2 == '\x02') {
        iStack_1c = *(int *)(param_1 + 4) - iVar4;
      }
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        __call_via_r3(param_1,bVar1,&iStack_1c,*(undefined4 *)(param_1 + 0x20));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
    pbVar8 = param_2;
  }
  return;
}

