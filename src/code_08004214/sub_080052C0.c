/* sub_080052C0  (original: 0x080052C0-0x0800532E in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F394();
extern undefined volatile gUnknown_081D9CB8;
extern undefined volatile _08023868;


undefined4 * sub_080052C0(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x2028), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &_08023868;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1f) = 0xff;
  param_1[3] = &gUnknown_081D9CB8;
  param_1[4] = &gUnknown_081D9CB8;
  param_1[5] = &gUnknown_081D9CB8;
  param_1[6] = &gUnknown_081D9CB8;
  uVar3 = (uint)*(byte *)(param_3 + 0x15) * (uint)*(byte *)(param_3 + 0x14);
  if ((uVar3 < 5) && (iVar2 = 0, uVar3 != 0)) {
    do {
      iVar1 = *(int *)(param_1[2] + iVar2 * 4 + 0x18);
      if (iVar1 != 0) {
        *(char *)((int)param_1 + iVar2 + 0x1c) = (char)iVar2;
        sub_0801F394(iVar1,param_1 + iVar2 * 0x200 + 10);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return param_1;
}

