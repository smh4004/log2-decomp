/* sub_0800C06E  (original: 0x0800C06E-0x0800C0F8 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 32% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800791A();
extern int __call_via_r2();
extern int volatile DAT_03001fa8;


undefined4 sub_0800C06E(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define asStack_1c ((short *)((char *)__frame + 0x0))
#define sStack_18 (*(short *)((char *)__frame + 0x4))
  iVar2 = DAT_03001fa8;
  if (DAT_03001fa8 == 0) {
    uVar3 = 0;
  }
  else {
    sub_0800791A(asStack_1c,DAT_03001fa8);
    iVar1 = *param_1;
    do {
      iVar5 = iVar1 + -1;
      if (iVar5 < 0) {
        return 0;
      }
      iVar4 = param_1[iVar1];
      iVar1 = iVar5;
    } while ((((asStack_1c[0] < *(short *)(iVar4 + 4)) || (*(short *)(iVar4 + 8) <= asStack_1c[0]))
             || (sStack_18 < *(short *)(iVar4 + 6))) ||
            ((*(short *)(iVar4 + 10) <= sStack_18 ||
             (iVar5 = **(int **)(iVar4 + 0xc),
             iVar5 = __call_via_r2(*(int **)(iVar4 + 0xc),iVar2,*(int *)(iVar5 + 8) + iVar5),
             iVar5 == 0))));
    uVar3 = 1;
  }
  return uVar3;
}

