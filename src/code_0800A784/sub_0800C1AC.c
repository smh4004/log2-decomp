/* sub_0800C1AC  (original: 0x0800C1AC-0x0800C232 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800C84C();
extern int sub_0800C88A();
extern int sub_0800C584();
extern int sub_0801F2F4();
extern int sub_0801F08C();
extern ushort volatile DAT_030022ae;
extern int volatile DAT_030010e0;
extern undefined1 volatile DAT_03002080;
extern undefined volatile _08023990;


undefined4 sub_0800C1AC(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((DAT_030022ae & *(byte *)(param_1 + 0x11)) == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x10);
    sub_0800C84C(0);
    sub_0801F2F4();
    iVar2 = sub_0800C584(&DAT_03002080,*(undefined1 *)(iVar5 + 0x11),*(undefined1 *)(iVar5 + 0x12),
                         iVar5 + 0x14,*(undefined1 *)(iVar5 + 0x13),1);
    if (*(int *)(DAT_030010e0 + 0x3c) == 0) {
      bVar1 = *(byte *)(iVar5 + 0x10);
      if (bVar1 >> 4 == 0) {
        *(byte *)(iVar2 + 0x10) = bVar1;
      }
      else {
        *(byte *)(iVar2 + 0x10) = (bVar1 >> 4) - 1;
      }
      sub_0800C88A(0,iVar2);
      sub_0801F2F4();
    }
    else {
      puVar3 = (undefined4 *)sub_0801F08C(0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023990;
        puVar3[1] = 0;
        puVar3[2] = 4;
      }
      sub_0801F2F4();
    }
    uVar4 = 1;
  }
  return uVar4;
}

