/* sub_0800CEA4  (original: 0x0800CEA4-0x0800CEDA in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800CB50();
extern undefined volatile _08025ABC;


undefined4 * sub_0800CEA4(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800CB50(param_1,*(undefined4 *)(param_2 + 4));
    *param_1 = &_08025ABC;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
  }
  return param_1;
}

