/* sub_0800C2F8  (original: 0x0800C2F8-0x0800C35E in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0800BF08();
extern int sub_0800EB4C();
extern int sub_08006264();
extern int sub_08003F06();
extern int __call_via_r1();
extern int sub_0800C0F8();
extern undefined4 volatile DAT_03001fe0;
extern undefined volatile DAT_03001090;
extern undefined volatile DAT_03001fe4;


void sub_0800C2F8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    sub_0800C0F8(&DAT_03001fe0);
  }
  else {
    sub_0800BF08();
  }
  uVar1 = sub_0800EB4C(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 2));
  sub_08006264(&DAT_03001090,uVar1);
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 3) != '\0') {
    do {
      puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + iVar3 * 8);
      iVar2 = sub_08003F06(*puVar4);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)puVar4[1];
        uVar1 = __call_via_r1(puVar4,*puVar4);
        iVar2 = DAT_03001fe0 * 4;
        DAT_03001fe0 = DAT_03001fe0 + 1;
        *(undefined4 *)(&DAT_03001fe4 + iVar2) = uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 3));
  }
  return;
}

