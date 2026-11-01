/* sub_08011EA6  (original: 0x08011EA6-0x08011F5A in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011BC4();
extern int sub_080068B8();
extern int sub_08007A26();
extern int __16__rt_sdiv();
extern int sub_0800700E();
extern undefined volatile DAT_03001120;


void sub_08011EA6(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_34 (*(int *)((char *)__frame + 0x0))
#define local_30 (*(int *)((char *)__frame + 0x4))
#define local_2c (*(int *)((char *)__frame + 0x8))
#define local_28 (*(int *)((char *)__frame + 0xc))
#define local_24 (*(int *)((char *)__frame + 0x10))
#define local_20 (*(int *)((char *)__frame + 0x14))
#define local_1c (*(int *)((char *)__frame + 0x18))
#define local_18 (*(int *)((char *)__frame + 0x1c))
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0x10)) {
    sub_08007A26(&local_1c);
    local_24 = *(int *)(param_1 + 8) - local_1c;
    local_20 = *(int *)(param_1 + 0xc) - local_18;
    local_34 = local_24;
    if (local_24 < 0) {
      local_34 = -local_24;
    }
    local_30 = local_20;
    if (local_20 < 0) {
      local_30 = -local_20;
    }
    local_2c = local_34;
    local_28 = local_30;
    piVar2 = &local_28;
    if (local_30 < local_34) {
      piVar2 = &local_2c;
    }
    iVar1 = *piVar2;
    iVar4 = iVar1 * 0x100;
    local_34 = __16__rt_sdiv(iVar4,local_24 * *(int *)(param_1 + 0x10));
    local_30 = __16__rt_sdiv(iVar4,local_20 * *(int *)(param_1 + 0x10));
    uVar3 = __16__rt_sdiv(*(int *)(param_1 + 0x10),iVar1 * 0x10000 + *(int *)(param_1 + 0x10) + -1);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    sub_0800700E(&DAT_03001120,0x100);
    uVar3 = sub_08011BC4(0,&local_1c,&local_34,*(undefined1 *)(param_2 + 0x10),0);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    sub_080068B8(&DAT_03001120,uVar3);
  }
  return;
}

