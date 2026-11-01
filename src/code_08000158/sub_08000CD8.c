/* sub_08000CD8  (original: 0x08000CD8-0x08000E22 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08001960();
extern int sub_08007C70();
extern int sub_080068B8();
extern int sub_08001A26();
extern int sub_08001A66();
extern int sub_08020E5C();
extern int sub_080076EE();
extern int sub_08001AB8();
extern undefined volatile _08023BD8;
extern undefined volatile DAT_03001120;
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile gUnknown_086D0DD0;
extern undefined volatile gUnknown_081D6B1C;
extern undefined volatile _08023B0C;


undefined4 * sub_08000CD8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x5e4), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023B0C;
    puVar1 = param_1 + 5;
    sub_08001960();
    param_1[0x122] = &_08023BD8;
    param_1[0x127] = &_08023BD8;
    sub_08020E5C(param_1 + 300,0xb0,0x18);
    sub_08020E5C(param_1 + 0x13a,0x18,0x18);
    sub_08020E5C(param_1 + 0x148,0x40,0x70);
    sub_08020E5C(param_1 + 0x156,0x20,0x20);
    param_1[4] = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 10) = 100;
    param_1[3] = 0xff;
    param_1[0x12f] = &gUnknown_081D6B1C;
    *(undefined1 *)(param_1 + 0x136) = 1;
    param_1[0x134] = 0x8020ec3;
    *(undefined1 *)(param_1 + 300) = 1;
    param_1[0x12d] = 0x58;
    param_1[0x12e] = 0x10;
    param_1[0x14b] = &gUnknown_08028724;
    *(undefined1 *)((int)param_1 + 0x549) = 2;
    *(undefined1 *)(param_1 + 0x152) = 1;
    param_1[0x150] = 0x8020ec3;
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(undefined1 *)((int)param_1 + 0x521) = 8;
    param_1[0x178] = 0;
    iVar5 = 0;
    do {
      iVar4 = 0;
      iVar2 = sub_08001A26(puVar1,iVar5);
      if (0 < iVar2) {
        do {
          uVar3 = sub_08001AB8(puVar1,iVar5,iVar4);
          uVar3 = sub_08007C70(0,uVar3,iVar4 * 0x10 + 0x30,iVar5 * 0x28 + 0x38);
          param_1[iVar5 * 6 + iVar4 + 0x166] = uVar3;
          iVar2 = sub_08001A66(puVar1,iVar5,iVar4);
          if ((iVar2 == 0) &&
             (*(undefined1 *)(param_1[iVar5 * 6 + iVar4 + 0x166] + 0x10) = 1,
             *(undefined **)(param_1[iVar5 * 6 + iVar4 + 0x166] + 0x28) != &gUnknown_086D0DD0)) {
            sub_080076EE();
          }
          sub_080068B8(&DAT_03001120,param_1[iVar5 * 6 + iVar4 + 0x166]);
          iVar4 = iVar4 + 1;
          iVar2 = sub_08001A26(puVar1,iVar5);
        } while (iVar4 < iVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  return param_1;
}

