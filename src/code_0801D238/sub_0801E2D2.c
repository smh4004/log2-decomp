/* sub_0801E2D2  (original: 0x0801E2D2-0x0801E42A in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005D6C();
extern int sub_08006DA6();
extern int sub_0802141C();
extern int sub_080068CA();
extern int sub_0801FC9C();
extern undefined volatile gUnknown_086DB2E4;
extern undefined4 volatile DAT_03001100;
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_0801E2D2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_50 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_4c (*(int *)((char *)__frame + 0x4))
#define iStack_48 (*(int *)((char *)__frame + 0x8))
#define iStack_44 (*(int *)((char *)__frame + 0xc))
#define iStack_40 (*(int *)((char *)__frame + 0x10))
#define uStack_3c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_34 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_24 (*(int *)((char *)__frame + 0x2c))
#define iStack_20 (*(int *)((char *)__frame + 0x30))
#define iStack_1c (*(int *)((char *)__frame + 0x34))
#define iStack_18 (*(int *)((char *)__frame + 0x38))
  if (*(char *)(param_1 + 0x34) == '\0') {
    iVar1 = *(int *)(param_1 + 0x24) >> 3;
    iStack_24 = *(int *)(param_1 + 0x14) + iVar1 * *(int *)(param_1 + 0x1c);
    iStack_18 = *(int *)(param_1 + 0x18) + iVar1 * *(int *)(param_1 + 0x20);
    iStack_1c = iStack_24;
    uStack_30 = *(undefined4 *)(param_1 + 0x2c);
    uStack_3c = *(undefined1 *)(param_1 + 0x11);
    puStack_34 = &gUnknown_086DB2E4;
    uStack_38 = 0x400;
    auStack_50[0] = 0;
    iStack_20 = param_1;
    if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x30)) {
      iStack_4c = iStack_24 + -4;
      iStack_48 = iStack_18 + -4;
      iStack_44 = iStack_24 + 4;
      iStack_40 = iStack_18 + 4;
      iVar1 = sub_08005D6C(&iStack_4c,DAT_03001100);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
      }
    }
    piVar4 = (int *)(param_1 + 0x18);
    if (((param_2 != 0) && (*(int *)(param_1 + 0x2c) != 0)) && (*(char *)(param_1 + 0x12) == '\0'))
    {
      piVar2 = (int *)(param_1 + 0x14);
      piVar3 = piVar2;
      if (iStack_1c < *(int *)(param_1 + 0x14)) {
        piVar3 = &iStack_1c;
      }
      iStack_4c = *piVar3 + -4;
      piVar3 = piVar4;
      if (iStack_18 < *piVar4) {
        piVar3 = &iStack_18;
      }
      iStack_48 = *piVar3 + -4;
      if (*piVar2 < iStack_1c) {
        piVar2 = &iStack_1c;
      }
      iStack_44 = *piVar2 + 4;
      piVar2 = piVar4;
      if (*piVar4 < iStack_18) {
        piVar2 = &iStack_18;
      }
      iStack_40 = *piVar2 + 4;
      iVar1 = sub_08006DA6(&DAT_03001120,0,auStack_50);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x12) = 1;
        iVar1 = sub_0802141C(3);
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
      }
    }
    if (*piVar4 < iStack_18) {
      piVar4 = &iStack_18;
    }
    *(int *)(param_1 + 4) = *piVar4;
  }
  else if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x24) + -8;
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20);
    if (iVar1 < 1) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  return;
}

