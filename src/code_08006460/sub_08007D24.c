/* sub_08007D24  (original: 0x08007D24-0x08007DE8 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 31% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006366();
extern undefined volatile DAT_03001090;


void sub_08007D24(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int __frame[14];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_38 (*(uint *)((char *)__frame + 0x0))
#define uStack_34 (*(uint *)((char *)__frame + 0x4))
#define iStack_30 (*(int *)((char *)__frame + 0x8))
#define local_2c (*(uint *)((char *)__frame + 0xc))
#define local_28 (*(uint *)((char *)__frame + 0x10))
#define local_24 (*(int * *)((char *)__frame + 0x14))
#define iStack_20 (*(int *)((char *)__frame + 0x18))
#define piStack_1c (*(int * *)((char *)__frame + 0x1c))
#define iStack_18 (*(int *)((char *)__frame + 0x20))
  local_24 = param_2 + 1;
  local_2c = *param_2 >> 8;
  local_28 = *local_24 >> 8;
  iStack_20 = param_1;
  piStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = sub_08006366(&DAT_03001090,&local_2c);
  piVar3 = (int *)(param_1 + 0x158);
  piVar2 = (int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    iStack_30 = *param_2;
    if ((iStack_18 << 0x1f < 0) && (((local_2c & 7) < 2 || (5 < (local_2c & 7))))) {
      uStack_38 = local_2c + 4 & 0xfffffff8;
      uStack_34 = local_28;
      iVar1 = sub_08006366(&DAT_03001090,&uStack_38,param_1 + 0x154);
      if (iVar1 != 0) {
        iVar1 = param_2[1];
        *piVar3 = uStack_38 << 8;
        *piVar2 = iVar1;
        iStack_30 = uStack_38 << 8;
        local_2c = uStack_38;
      }
    }
    if ((iStack_18 << 0x1e < 0) && (((local_28 & 7) < 2 || (5 < (local_28 & 7))))) {
      uStack_38 = local_2c;
      uStack_34 = local_28 + 4 & 0xfffffff8;
      iVar1 = sub_08006366(&DAT_03001090,&uStack_38,param_1 + 0x154);
      if (iVar1 != 0) {
        *piVar3 = iStack_30;
        *piVar2 = uStack_34 << 8;
      }
    }
  }
  else {
    *piVar3 = *param_2;
    *piVar2 = *local_24;
  }
  return;
}

