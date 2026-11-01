/* sub_08011FA6  (original: 0x08011FA6-0x08012030 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F394();
extern undefined2 volatile DAT_04000022;
extern undefined4 volatile DAT_03000e40;
extern undefined2 volatile REG_IE;
extern undefined2 volatile DAT_04000026;
extern undefined volatile _08023E7C;
extern undefined volatile gUnknown_086D7EDC;


undefined4 * sub_08011FA6(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x2458), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023E7C;
  param_1[1] = param_2;
  iVar3 = 0;
  do {
    param_1[iVar3 + 0xb] = 0xff;
    iVar2 = iVar3 + 1;
    param_1[iVar3 + 2] = &gUnknown_086D7EDC;
    iVar3 = iVar2;
  } while (iVar2 < 9);
  uVar4 = (uint)*(byte *)(param_1[1] + 5) * (uint)*(byte *)(param_1[1] + 4);
  if ((uVar4 < 10) && (iVar3 = 0, uVar4 != 0)) {
    do {
      iVar2 = *(int *)(param_1[1] + iVar3 * 4 + 8);
      if (iVar2 != 0) {
        param_1[iVar3 + 0xb] = iVar3;
        sub_0801F394(iVar2,param_1 + iVar3 * 0x100 + 0x16);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  DAT_03000e40 = 0x8011f89;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 2;
  DAT_04000022 = 0;
  DAT_04000026 = 0;
  return param_1;
}

