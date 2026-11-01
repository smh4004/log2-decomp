/* sub_080135E0  (original: 0x080135E0-0x08013656 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _080245C0;
extern undefined volatile _08023A1C;


undefined4 *
sub_080135E0(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)param_6;
    uVar3 = sub_080067AC(&DAT_03001120,param_6);
    *(undefined2 *)(param_1 + 3) = uVar3;
    *param_1 = &_080245C0;
    uVar4 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar4;
    param_1[0xf] = param_3;
    param_1[0xd] = param_4;
    param_1[0xe] = param_5;
    param_1[0xc] = 0;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 2) = param_7;
    param_1[1] = param_1[5];
    cVar2 = *param_3;
    param_1[8] = param_1[4] - (int)cVar2;
    iVar5 = param_1[5] - (int)param_3[1];
    param_1[9] = iVar5;
    bVar1 = param_3[2];
    param_1[0xb] = iVar5 + (uint)(byte)param_3[3];
    param_1[10] = (param_1[4] - (int)cVar2) + (uint)bVar1;
  }
  return param_1;
}

