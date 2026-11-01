/* sub_0800CEDA  (original: 0x0800CEDA-0x0800CF00 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001fa8;
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;


int sub_0800CEDA(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_24 (*(int *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
  if (((*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x38)) &&
      (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x3c))) &&
     (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x50))) {
    if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x54)) {
      if (((DAT_03001fa8 == 0) || (sub_080088E0(&iStack_24), *(int *)(param_1 + 0x40) <= iStack_24))
         || ((iStack_1c <= *(int *)(param_1 + 0x38) ||
             ((*(int *)(param_1 + 0x44) <= iStack_20 || (iStack_18 <= *(int *)(param_1 + 0x3c)))))))
      {
        iVar3 = param_1 + 0x28;
        sub_080063E0(iVar3,DAT_030010fc,1);
        sub_080063E0(iVar3,DAT_03001104,1);
        iVar1 = sub_08005D6C(param_1 + 0x38,DAT_030010fc);
        iVar2 = param_1 + 0x38;
        if (iVar1 == 0) {
          iVar2 = iVar3;
        }
        sub_080063E0(iVar2,DAT_030010fc,0);
        sub_080063E0(iVar2,DAT_03001104,0);
      }
      else {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return 0;
}

