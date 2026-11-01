/* sub_0800C664  (original: 0x0800C664-0x0800C718 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: different-exit.
 */
#include "ghidra_types.h"
extern int sub_0800EB4C();
extern int sub_08003F06();
extern int __call_via_r1();
extern int sub_080092E4();
extern int sub_0800EB20();
extern int sub_08006152();
extern int sub_080068B8();
extern int sub_0800EB7C();
extern undefined4 * volatile DAT_03000ff4;
extern undefined volatile DAT_03001090;
extern undefined volatile DAT_03001120;
extern undefined4 volatile DAT_030020f4;


void sub_0800C664(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  unsigned int __frame[53];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_d4 ((undefined4 *)((char *)__frame + 0x0))
#define local_90 (*(undefined4 *)((char *)__frame + 0x44))
#define puStack_24 (*(undefined1 * *)((char *)__frame + 0xb0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0xb4))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0xb8))
#define local_18 (*(undefined4 *)((char *)__frame + 0xbc))
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *param_1 = (char)param_2;
  param_1[1] = (char)param_3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar2 = sub_0800EB7C();
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = sub_0800EB20(uVar2,local_18);
  param_1[2] = uVar1;
  uVar2 = sub_0800EB4C(*(undefined4 *)(param_1 + 4));
  sub_08006152(&DAT_03001090,uVar2,param_5,1);
  if (iVar4 != 0) {
    local_d4[0] = 0;
    local_90 = 0;
    sub_080092E4(local_d4,iVar4,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    local_d4[0] = 0;
    local_90 = 0;
    sub_080092E4(local_d4,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  if ((param_6 != 0) && (iVar4 = 0, *(char *)(*(int *)(param_1 + 4) + 4) != '\0')) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar4 * 4);
      iVar3 = sub_08003F06(puVar5[1]);
      if (iVar3 != 0) {
        uVar2 = __call_via_r1(puVar5,*puVar5);
        sub_080068B8(&DAT_03001120,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  DAT_03000ff4 = &DAT_030020f4;
  return;
}

