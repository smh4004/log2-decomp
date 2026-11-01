/* sub_0800BFC0  (original: 0x0800BFC0-0x0800C06E in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/15 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800791A();
extern int __call_via_r3();
extern int volatile DAT_03001fa8;
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;


void sub_0800BFC0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 ((short *)((char *)__frame + 0x0))
#define local_1c (*(short *)((char *)__frame + 0x4))
#define local_18 (*(int * *)((char *)__frame + 0x8))
  iVar2 = DAT_03001fa8;
  if ((DAT_03001fa8 != 0) && (*(short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c) != 0)) {
    sub_0800791A(local_20,DAT_03001fa8);
    local_18 = param_1 + 0x20;
    param_1[0x21] = param_1[0x21] + 1;
    param_1[0x23] = 1;
    iVar1 = *param_1;
    do {
      iVar4 = iVar1 + -1;
      if (iVar4 < 0) break;
      iVar3 = param_1[iVar1];
      iVar1 = iVar4;
    } while ((((local_20[0] < *(short *)(iVar3 + 4)) || (*(short *)(iVar3 + 8) <= local_20[0])) ||
             (local_1c < *(short *)(iVar3 + 6))) ||
            ((*(short *)(iVar3 + 10) <= local_1c ||
             (iVar4 = **(int **)(iVar3 + 0xc),
             iVar4 = __call_via_r3(*(int **)(iVar3 + 0xc),iVar3,iVar2,*(int *)(iVar4 + 4) + iVar4),
             iVar4 == 0))));
    local_18[3] = 0;
  }
  return;
}

