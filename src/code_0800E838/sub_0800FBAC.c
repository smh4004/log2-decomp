/* sub_0800FBAC  (original: 0x0800FBAC-0x0800FC2C in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern int sub_0800FC50();
extern int sub_080068B8();
extern int sub_080068CA();
extern int sub_0800791A();
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_0800FBAC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
  if (*(int *)(param_1 + 4) == 0x70) {
    sub_0800791A(&local_18,*(undefined4 *)(param_1 + 0x10));
    local_14 = (local_14 + -0x16) - *(int *)(*(int *)(param_1 + 8) + 0xc);
    local_18 = (local_18 + 8) - (*(int *)(*(int *)(param_1 + 8) + 8) >> 1);
    uVar1 = sub_0800FC50(0,*(int *)(param_1 + 8) + 0x18,&local_18);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    sub_080068B8(&DAT_03001120,uVar1);
    if (*(short *)(*(int *)(param_1 + 8) + 4) == 0x5c) {
      iVar2 = 3;
    }
    else {
      iVar2 = 4;
    }
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + iVar2 * 0xc,0x40,0);
  }
  if (*(int *)(param_1 + 4) == 0x20) {
    sub_080068CA(&DAT_03001120,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

