/* sub_0801CEC6  (original: 0x0801CEC6-0x0801CF22 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007A26();
extern int __call_via_r2();
extern int sub_080068B8();
extern int sub_08006D70();
extern int sub_0801A0B0();
extern undefined volatile DAT_03001120;


void sub_0801CEC6(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_08006D70(&DAT_03001120), 0x40 < iVar2)) {
      sub_08007A26(auStack_18,param_2);
      uVar3 = sub_0801A0B0(0,auStack_18,(char)param_2[4],param_2);
      sub_080068B8(&DAT_03001120,uVar3);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

