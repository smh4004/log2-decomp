/* sub_0801CDFC  (original: 0x0801CDFC-0x0801CE94 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801CD32();
extern int sub_08013BF4();
extern int sub_08006DA6();
extern undefined volatile gUnknown_086DB2D4;
extern undefined volatile DAT_03001120;
extern undefined volatile gUnknown_086FFBFC;


void sub_0801CDFC(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_44 ((undefined1 *)((char *)__frame + 0x0))
#define local_40 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_34 (*(undefined4 *)((char *)__frame + 0x10))
#define local_30 (*(undefined1 *)((char *)__frame + 0x14))
#define local_2c (*(undefined4 *)((char *)__frame + 0x18))
#define local_28 (*(undefined * *)((char *)__frame + 0x1c))
#define local_24 (*(undefined4 *)((char *)__frame + 0x20))
#define local_14 (*(int *)((char *)__frame + 0x30))
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x20;
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  uVar2 = (uint)(iVar1 * 0x10000000) >> 0x1e;
  if (uVar2 == 3) {
    uVar2 = 1;
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_086FFBFC + uVar2 * 0xc;
  sub_08013BF4(param_1);
  iVar1 = *(int *)(param_1 + 0x50) + -0x20;
  *(int *)(param_1 + 0x50) = iVar1;
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 < 0) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      local_24 = *(undefined4 *)(param_1 + 0x1c);
      local_30 = *(undefined1 *)(param_1 + 0x14);
      local_28 = &gUnknown_086DB2D4;
      local_2c = 0x400;
      local_40 = *(undefined4 *)(param_1 + 0x28);
      uStack_3c = *(undefined4 *)(param_1 + 0x2c);
      uStack_38 = *(undefined4 *)(param_1 + 0x30);
      uStack_34 = *(undefined4 *)(param_1 + 0x34);
      local_44[0] = 2;
      local_14 = param_1;
      sub_08006DA6(&DAT_03001120,0,local_44);
    }
    sub_0801CD32(param_1);
  }
  return;
}

