/* sub_08011D4A  (original: 0x08011D4A-0x08011D94 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FC9C();
extern int __call_via_r2();
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E16C4;


void sub_08011D4A(int *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (0x9f < uVar2) {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E16C4,0x40,0);
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x14) + *param_1);
    return;
  }
  if (uVar2 < 0x20) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 4;
    return;
  }
  *(short *)(param_2 + 0x14) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
  return;
}

