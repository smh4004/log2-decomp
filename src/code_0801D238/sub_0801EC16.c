/* sub_0801EC16  (original: 0x0801EC16-0x0801ECDC in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080079B8();
extern int sub_08007A26();
extern int sub_0800700E();
extern int __16__rt_sdiv();
extern int sub_0801EA8C();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0801EC16(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_3c (*(int *)((char *)__frame + 0x0))
#define local_38 (*(int *)((char *)__frame + 0x4))
#define local_34 (*(int *)((char *)__frame + 0x8))
#define local_30 (*(int *)((char *)__frame + 0xc))
#define local_2c (*(int *)((char *)__frame + 0x10))
#define local_28 (*(int *)((char *)__frame + 0x14))
#define local_24 (*(int *)((char *)__frame + 0x18))
#define local_20 (*(int *)((char *)__frame + 0x1c))
#define local_1c (*(int *)((char *)__frame + 0x20))
#define local_18 (*(int *)((char *)__frame + 0x24))
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0x10) {
    sub_08007A26(&local_1c);
    sub_080079B8(&local_34,*(undefined4 *)(param_1 + 0xc));
    local_20 = local_30 + local_28 >> 1;
    local_24 = local_34 + local_2c >> 1;
    local_2c = local_24 - local_1c;
    local_28 = local_20 - local_18;
    local_3c = local_2c;
    if (local_2c < 0) {
      local_3c = -local_2c;
    }
    local_38 = local_28;
    if (local_28 < 0) {
      local_38 = -local_28;
    }
    local_34 = local_3c;
    local_30 = local_38;
    piVar2 = &local_30;
    if (local_38 < local_3c) {
      piVar2 = &local_34;
    }
    iVar1 = *piVar2;
    local_3c = __16__rt_sdiv(iVar1 * 0x100,local_2c * *(int *)(param_1 + 0x10));
    local_38 = __16__rt_sdiv(iVar1 * 0x100,local_28 * *(int *)(param_1 + 0x10));
    sub_0800700E(&DAT_03001120,0x400);
    uVar3 = sub_0801EA8C(0,&local_1c,&local_3c,*(undefined1 *)(param_2 + 0x10),
                         *(undefined4 *)(param_1 + 0xc));
    sub_080068B8(&DAT_03001120,uVar3);
  }
  return;
}

