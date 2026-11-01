/* sub_08014DF4  (original: 0x08014DF4-0x08014E86 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08007A26();
extern int sub_0800EAD8();
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000ea0;


void sub_08014DF4(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_14 (*(int *)((char *)__frame + 0x4))
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    if (uVar1 == 0x10) {
      *(undefined2 *)(param_2 + 5) = 1;
    }
  }
  else {
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if ((*(char *)(param_1 + 4) == '\0') || (*(short *)(&DAT_03000ea0 + iVar2) < 3)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(short *)(&DAT_03000ea0 + iVar2) = *(short *)(&DAT_03000ea0 + iVar2) + -2;
    *(short *)(param_2 + 5) = 3 - (short)param_2[5];
    *(undefined2 *)((int)param_2 + 0x12) = 0x10;
  }
  if ((*(ushort *)((int)param_2 + 0x12) & 0xf) == 0) {
    sub_08007A26(auStack_18,param_2);
    if ((DAT_03000e90 == 0) && (1 < *(byte *)(param_2 + 4))) {
      iStack_14 = iStack_14 + 2;
    }
    sub_0800EAD8(auStack_18,param_2);
  }
  return;
}

