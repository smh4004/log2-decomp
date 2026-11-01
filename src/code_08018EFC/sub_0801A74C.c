/* sub_0801A74C  (original: 0x0801A74C-0x0801A7D2 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006D70();
extern int sub_080068B8();
extern int sub_0802141C();
extern int sub_0801FC9C();
extern int sub_0800FA1C();
extern int sub_0800E39C();
extern int sub_08007974();
extern int sub_0800E4D2();
extern int sub_080068CA();
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_0801A74C(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
#define local_10 (*(int *)((char *)__frame + 0x14))
  sub_08007974(&local_1c);
  sub_0800E4D2(param_2);
  sub_0800E39C(param_2,*(undefined4 *)(param_1 + 0xc));
  sub_080068CA(&DAT_03001120,param_2);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    local_24 = local_1c + local_14 >> 1;
    local_20 = local_18 + local_10 >> 1;
    uVar2 = sub_0800FA1C(0,&local_24,0x28);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x1f) * 0xc,0x40,0);
  return;
}

