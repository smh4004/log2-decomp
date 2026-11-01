/* sub_0800DCA8  (original: 0x0800DCA8-0x0800DD38 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int volatile DAT_03001094;
extern int volatile DAT_03001098;


void sub_0800DCA8(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
#define local_14 (*(int *)((char *)__frame + 0xc))
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_18 = *param_2 * 0x400 - DAT_03001094;
  local_14 = param_2[1] * 0x400 - DAT_03001098;
  local_20 = local_18;
  if (local_18 < 0) {
    local_20 = -local_18;
  }
  local_1c = local_14;
  if (local_14 < 0) {
    local_1c = -local_14;
  }
  piVar4 = &local_1c;
  if (local_1c < local_20) {
    piVar4 = &local_20;
  }
  iVar1 = __16__rt_sdiv(param_3,*piVar4,piVar4,&local_20,local_18,local_14,local_18,local_14);
  iVar1 = (iVar1 >> 10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  iVar1 = iVar1 * 0x400;
  uVar2 = __16__rt_sdiv(iVar1,local_18 << 10);
  uVar3 = __16__rt_sdiv(iVar1,local_14 << 10);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}

