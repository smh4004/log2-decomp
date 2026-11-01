/* sub_0801D5D0  (original: 0x0801D5D0-0x0801D684 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int volatile DAT_03001fa8;


undefined4 sub_0801D5D0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  unsigned int __frame[14];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_38 (*(int *)((char *)__frame + 0x0))
#define local_34 (*(int *)((char *)__frame + 0x4))
#define local_30 (*(int *)((char *)__frame + 0x8))
#define local_2c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(int *)((char *)__frame + 0x20))
#define local_14 (*(int *)((char *)__frame + 0x24))
  if (DAT_03001fa8 != 0) {
    sub_0800793A(&local_38);
    local_14 = local_34 + local_2c >> 1;
    local_18 = local_38 + local_30 >> 1;
    sub_0800793A(&local_38,param_2,local_2c,param_4,local_18,local_14);
    local_18 = local_18 - (local_38 + local_30 >> 1);
    local_14 = local_14 - (local_34 + local_2c >> 1);
    if (local_18 * local_18 + local_14 * local_14 <= *(int *)(param_1 + 4)) {
      iVar2 = local_18;
      if (local_18 < 0) {
        iVar2 = -local_18;
      }
      iVar1 = local_14;
      if (local_14 < 0) {
        iVar1 = -local_14;
      }
      if (iVar2 < iVar1) {
        uVar3 = (local_14 >> 0x1f) + 1;
      }
      else {
        uVar3 = 3;
        if (-1 < local_18) {
          uVar3 = 2;
        }
      }
      if (*(byte *)(param_2 + 0x10) == uVar3) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

