/* Ghidra reference decompilation of code_0801D238 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801D238 @ 0x0801D238 */

void sub_0801D238(void)

{
  sub_0801FC4E(0x3002c80,0x80e17b4,0x40,0);
  return;
}


/* sub_0801D254 @ 0x0801D254 */

void sub_0801D254(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802548C;
    puVar1[2] = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


/* sub_0801D280 @ 0x0801D280 */

bool sub_0801D280(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  piVar2 = (int *)(param_2 + 0x158);
  *piVar2 = *piVar2 + *(int *)(param_1 + 4);
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *(int *)(param_1 + 8);
  sVar3 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar3;
  if (sVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0xe);
    *piVar2 = (int)*(short *)(param_1 + 0xc) << 8;
    *(int *)(param_2 + 0x15c) = (int)sVar1 << 8;
  }
  return sVar3 == 0;
}


/* sub_0801D2BC @ 0x0801D2BC */

void sub_0801D2BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  
  local_20 = 0;
  local_18 = (undefined2)((uint)(*(int *)(param_1 + 0x18) * 0x290) >> 8);
  local_1c = (undefined2)*(undefined4 *)(param_1 + 0x10);
  local_1a = (undefined2)*(undefined4 *)(param_1 + 0x14);
  iVar1 = param_2[4];
  __call_via_r1(param_2,(undefined *)(*(int *)(*param_2 + 0x30) + *param_2));
  puVar2 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    sub_0800D1AC(puVar2,(int)&local_20,(int)param_2);
    *puVar2 = &_080241A0;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  *(char *)(param_2 + 4) = (char)iVar1;
  return;
}


/* sub_0801D310 @ 0x0801D310 */

void sub_0801D310(int param_1,int param_2)

{
  sub_0800E4D2(param_2);
  *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_1 + 0xc);
  return;
}


/* sub_0801D326 @ 0x0801D326 */

void sub_0801D326(int param_1)

{
  sub_0800DD80(0x30020dc,*(undefined4 *)(param_1 + 0xc),(byte)*(undefined4 *)(param_1 + 8));
  return;
}


/* sub_0801D328 @ 0x0801D328 */

void sub_0801D328(int param_1)

{
  sub_0800DD80(0x30020dc,*(undefined4 *)(param_1 + 0xc),(byte)*(undefined4 *)(param_1 + 8));
  return;
}


/* sub_0801D336 @ 0x0801D336 */

bool sub_0801D336(void)

{
  return DAT_030020e8 == 0;
}


/* sub_0801D348 @ 0x0801D348 */

void sub_0801D348(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x14) - iVar1;
  }
  sub_0800BE14(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
               iVar1 * *(int *)(param_1 + 0x20));
  return;
}


/* sub_0801D368 @ 0x0801D368 */

bool sub_0801D368(int param_1)

{
  return *(int *)(param_1 + 0x18) == 0;
}


/* sub_0801D376 @ 0x0801D376 */

undefined4 * sub_0801D376(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x40), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023764;
  sub_08020E5C((undefined1 *)(param_1 + 2),0xf0,0xa0);
  param_1[1] = 0;
  return param_1;
}


/* sub_0801D378 @ 0x0801D378 */

undefined4 * sub_0801D378(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x40), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023764;
  sub_08020E5C((undefined1 *)(param_1 + 2),0xf0,0xa0);
  param_1[1] = 0;
  return param_1;
}


/* sub_0801D3A4 @ 0x0801D3A4 */

void sub_0801D3A4(int param_1)

{
  int local_24 [4];
  
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0,0x18000);
  DAT_03003910 = 1;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600f800;
  Ram040000dc = 0x400;
  DAT_040000de = 0x8100;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6000040;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  DAT_03003914 = &DAT_02020202;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6008040;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  local_24[0] = 0;
  local_24[1] = 5;
  local_24[2] = 0x1e;
  local_24[3] = 0x10;
  sub_0801F508(local_24,0x600f800,2);
  sub_0801F394((int *)&gUnknown_086FFC34,*(int *)(param_1 + 0x2c));
  local_24[0] = 0;
  local_24[1] = 0x28;
  local_24[2] = 0xf0;
  local_24[3] = 0x80;
  sub_080236CC(param_1 + 8,0x6000080,(int)local_24);
  sub_0801F394((int *)&gUnknown_086FFF70,*(int *)(param_1 + 0x2c));
  local_24[0] = 0;
  local_24[1] = 0x28;
  local_24[2] = 0xf0;
  local_24[3] = 0x80;
  sub_080236CC(param_1 + 8,0x6008080,(int)local_24);
  REG_BG3CNT = 0x1f83;
  REG_BG2CNT = 0x1f8b;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0xc00;
  REG_BLDCNT = 0x844;
  DAT_04000053 = 0x10;
  REG_BLDALPHA = 0;
  REG_DMA3SAD = 0x81d4f50;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_0801D496 @ 0x0801D496 */

undefined4 sub_0801D496(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 < 0xa1) {
    uVar3 = 0;
  }
  else if (iVar2 < 0xb1) {
    DAT_04000053 = -0x50 - (char)iVar2;
    REG_BLDALPHA = (char)*(undefined4 *)(param_1 + 4) + '`';
    uVar3 = 0;
  }
  else if (iVar2 < 0x140) {
    uVar3 = 0;
  }
  else if (iVar2 == 0x140) {
    sub_0801F394((int *)&gUnknown_0870138C,*(int *)(param_1 + 0x2c));
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0xf0;
    uStack_c = 0x80;
    sub_080236CC(param_1 + 8,0x6000080,(int)&uStack_18);
    uVar3 = 0;
  }
  else if (iVar2 < 0x151) {
    DAT_04000053 = (char)iVar1 + -0x3f;
    REG_BLDALPHA = 'P' - (char)*(undefined4 *)(param_1 + 4);
    uVar3 = 0;
  }
  else if (iVar2 < 0x1f5) {
    uVar3 = 0;
  }
  else if (iVar2 < 0x205) {
    DAT_04000053 = (char)(0x204 - iVar2 >> 1);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0801D580 @ 0x0801D580 */

void sub_0801D580(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &_08025014;
  iVar1 = *(int *)param_1[2];
  __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
  iVar1 = *(int *)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801D5AE @ 0x0801D5AE */

void sub_0801D5AE(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025014;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = 1;
  }
  return;
}


/* sub_0801D5D0 @ 0x0801D5D0 */

undefined4 sub_0801D5D0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_18;
  int local_14;
  
  if (DAT_03001fa8 != 0) {
    sub_0800793A(&local_38,DAT_03001fa8);
    local_14 = local_34 + local_2c >> 1;
    local_18 = local_38 + local_30 >> 1;
    sub_0800793A(&local_38,param_2);
    local_18 = local_18 - (local_38 + local_30 >> 1);
    local_14 = local_14 - (local_34 + local_2c >> 1);
    if (local_18 * local_18 + local_14 * local_14 <= *(int *)(param_1 + 4)) {
      iVar2 = local_18;
      if (local_18 < 0) {
        iVar2 = -local_18;
      }
      iVar1 = local_14;
      if (local_14 < 0) {
        iVar1 = -local_14;
      }
      if (iVar2 < iVar1) {
        uVar3 = (local_14 >> 0x1f) + 1;
      }
      else {
        uVar3 = 3;
        if (-1 < local_18) {
          uVar3 = 2;
        }
      }
      if (*(byte *)(param_2 + 0x10) == uVar3) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}


/* sub_0801D684 @ 0x0801D684 */

void sub_0801D684(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801D5D0(param_1,param_2);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  else {
    piVar2 = *(int **)(param_1 + 0xc);
  }
  __call_via_r2(piVar2,param_2,(undefined *)(*(int *)*piVar2 + *piVar2));
  return;
}


/* sub_0801D6A8 @ 0x0801D6A8 */

void sub_0801D6A8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801D5D0(param_1,param_2);
  if (*(int *)(param_1 + 0x10) == iVar1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      piVar2 = *(int **)(param_1 + 8);
    }
    else {
      piVar2 = *(int **)(param_1 + 0xc);
    }
    __call_via_r2(piVar2,param_2,(undefined *)(*(int *)(*piVar2 + 4) + *piVar2));
  }
  else {
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
      piVar2 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar2 + (int)piVar2));
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
    else {
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
      piVar2 = (int *)**(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*piVar2 + (int)piVar2));
      iVar1 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
  }
  return;
}


/* sub_0801D72E @ 0x0801D72E */

void sub_0801D72E(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = *(int **)(param_1 + 0xc);
  }
  __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(*piVar1 + 8) + *piVar1));
  return;
}


/* sub_0801D748 @ 0x0801D748 */

void sub_0801D748(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,
                        (undefined *)**(undefined4 **)(param_1 + 0x10));
  uVar2 = __call_via_r2(*(undefined4 **)(param_1 + 0x14),param_2,
                        (undefined *)**(undefined4 **)(param_1 + 0x14));
  puVar3 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_08025014;
    puVar3[1] = uVar4;
    puVar3[3] = uVar2;
    puVar3[2] = uVar1;
    puVar3[4] = 1;
  }
  return;
}


/* sub_0801D788 @ 0x0801D788 */

void sub_0801D788(int param_1,int *param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_080079B8(&local_24,(int)param_2);
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_20 + local_18 >> 1;
  iVar1 = sub_0801D84C((undefined4 *)0x0,&local_14,0,param_2);
  *(int *)(param_1 + 8) = iVar1;
  sub_080068B8(0x3001120,iVar1);
  __call_via_r2(param_2,0x1e,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801D7DC @ 0x0801D7DC */

void sub_0801D7DC(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == *(int *)(param_1 + 0x10)) {
      sub_08007A26(&local_1c,param_2);
      iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
      local_14 = local_1c + *(int *)(&DAT_08701df0 + iVar1);
      local_10 = local_18 + *(int *)(&DAT_08701df4 + iVar1);
      sub_08014478(*(int *)(param_1 + 8),(uint)*(byte *)(param_2 + 0x10),&local_14);
    }
    else if (iVar1 == 0) {
      sub_0801451C(*(int **)(param_1 + 8));
    }
  }
  return;
}


/* sub_0801D838 @ 0x0801D838 */

bool sub_0801D838(int param_1)

{
  return *(int *)(param_1 + 0xc) == 0;
}


/* sub_0801D84C @ 0x0801D84C */

undefined4 *
sub_0801D84C(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    sub_080143A8(param_1,param_2,param_3,param_4,0x400,0);
    *param_1 = &_08025830;
  }
  return param_1;
}


/* sub_0801D88A @ 0x0801D88A */

void sub_0801D88A(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  cVar1 = (char)param_1[4];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iStack_18 = param_1[7] + param_1[0xd] * param_1[0xb];
      iStack_14 = param_1[8] + param_1[0xd] * param_1[0xc];
      iStack_20 = iStack_18 + -4;
      iStack_18 = iStack_18 + 4;
      iStack_1c = iStack_14 + -4;
      iStack_14 = iStack_14 + 4;
      iVar2 = sub_08005D6C(&iStack_20,DAT_03001100);
      if ((((iVar2 == 0) || (iStack_18 <= DAT_0300109c)) || (DAT_030010a4 <= iStack_20)) ||
         ((iStack_14 <= DAT_030010a0 || (DAT_030010a8 <= iStack_1c)))) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
      }
      else {
        param_1[0xd] = param_1[0xd] + 3;
      }
    }
    else if (cVar1 != '\x02') {
      return;
    }
  }
  sub_08014556(param_1,param_2);
  return;
}


/* sub_0801D91C @ 0x0801D91C */

undefined4 sub_0801D91C(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18;
  
  if (param_2 == 0x11) {
    if ((char)param_1[4] == '\x01') {
      local_1c = param_1[7] + param_1[0xd] * param_1[0xb];
      local_18 = param_1[8] + param_1[0xd] * param_1[0xc];
      piVar4 = param_1 + 7;
      piVar3 = piVar4;
      if (local_1c < param_1[7]) {
        piVar3 = &local_1c;
      }
      piVar5 = param_1 + 8;
      if (local_18 < param_1[8]) {
        piVar5 = &local_18;
      }
      if (param_1[7] < local_1c) {
        piVar4 = &local_1c;
      }
      piVar2 = param_1 + 8;
      if (param_1[8] < local_18) {
        piVar2 = &local_18;
      }
      if ((((*(int *)(param_3 + 4) < *piVar4 + 4) && (*piVar3 + -4 < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < *piVar2 + 4)) && (*piVar5 + -4 < *(int *)(param_3 + 0x10))) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08014CB6(param_1,param_2,param_3);
  }
  return uVar1;
}


/* sub_0801D9D4 @ 0x0801D9D4 */

void sub_0801D9D4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0xf0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 2;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x6c;
  return;
}


/* sub_0801D9E8 @ 0x0801D9E8 */

void sub_0801D9E8(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)((int)param_2 + 0x12);
  if ((DAT_030022b0 & 1) != 0) {
    uVar1 = uVar1 - 0x10;
  }
  iVar2 = uVar1 - 1;
  if (iVar2 < 1) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  else {
    *(short *)(param_2 + 5) = 2 - (short)(iVar2 * 0x8000000 >> 0x1f);
    *(short *)((int)param_2 + 0x12) = (short)iVar2;
  }
  return;
}


/* sub_0801DA1A @ 0x0801DA1A */

void sub_0801DA1A(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x17c;
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x25) * 0xc,0x40,0);
  return;
}


/* sub_0801DA52 @ 0x0801DA52 */

/* WARNING: Removing unreachable block (ram,0x0801daf6) */

void sub_0801DA52(undefined4 param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined *puStack_28;
  int *piStack_24;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  piVar1 = DAT_03001fa8;
  if ((DAT_03001fa8 == (int *)0x0) || ((undefined4 *)DAT_03001fa8[6] != &DAT_0300227c)) {
    sub_080076BC((int)param_2);
    if (7 < *(ushort *)((int)param_2 + 0x12)) {
      *(undefined2 *)((int)param_2 + 0x12) = 8;
    }
    *(undefined2 *)(param_2 + 5) = 3;
    sVar2 = *(short *)((int)param_2 + 0x12) + -1;
    *(short *)((int)param_2 + 0x12) = sVar2;
    if (sVar2 == 0) {
      __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
  }
  else {
    uVar3 = *(short *)((int)param_2 + 0x12) + 1;
    *(ushort *)((int)param_2 + 0x12) = uVar3;
    if (uVar3 < 8) {
      *(ushort *)(param_2 + 5) = uVar3 >> 2;
    }
    else {
      piStack_24 = param_2;
      if (uVar3 == 8) {
        iVar4 = sub_0802141C(3);
        sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar4 + 0x22) * 0xc,0x40,0);
        sub_0801FC9C(0x3002c80,&gUnknown_080E15B0,0x40,0);
        uVar7 = sub_0801F08C(8);
        piVar6 = (int *)((ulonglong)uVar7 >> 0x20);
        puVar5 = (undefined4 *)uVar7;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = &_08024A3C;
          piVar6 = (int *)0x0;
          *(undefined1 *)(puVar5 + 1) = 0;
        }
        sub_08007662((int)puVar5,piVar6);
        uStack_2c = 0x100;
        auStack_30[0] = (undefined1)param_2[4];
        puStack_28 = &gUnknown_086DB2DC;
        sub_0800F910((int)piVar1,(int)auStack_30);
        __call_via_r2(piVar1,auStack_20,(undefined *)(*(int *)(*piVar1 + 0x40) + *piVar1));
      }
      else if ((uVar3 & 0xf) == 0) {
        uStack_2c = 0x80;
        auStack_30[0] = (undefined1)param_2[4];
        puStack_28 = &gUnknown_086DB2DC;
        sub_0800F910((int)piVar1,(int)auStack_30);
        __call_via_r2(piVar1,auStack_20,(undefined *)(*(int *)(*piVar1 + 0x40) + *piVar1));
        __call_via_r2(param_2,uStack_18,(undefined *)(*(int *)(*param_2 + 0x3c) + *param_2));
      }
    }
  }
  return;
}


/* sub_0801DB66 @ 0x0801DB66 */

void sub_0801DB66(undefined4 param_1,int param_2)

{
  sub_0801FC22(0x3002c80,0x80e15b0);
  sub_080076BC(param_2);
  return;
}


/* sub_0801DB80 @ 0x0801DB80 */

void sub_0801DB80(undefined4 param_1,int param_2)

{
  if (DAT_03001fa8 != 0) {
    sub_0800763C(DAT_03001fa8,&DAT_0300227c);
  }
  sub_0800763C(param_2,&DAT_03002280);
  return;
}


/* sub_0801DB9E @ 0x0801DB9E */

bool sub_0801DB9E(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x18) != &DAT_03002280;
}


/* sub_0801DBB2 @ 0x0801DBB2 */

undefined4 * sub_0801DBB2(void)

{
  return &DAT_03002284;
}


/* sub_0801DBD4 @ 0x0801DBD4 */

void sub_0801DBD4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xbc;
  sub_0801FC9C(0x3002c80,&DAT_080e18a4,0x40,0);
  return;
}


/* sub_0801DBFE @ 0x0801DBFE */

void sub_0801DBFE(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x80) {
    if (uVar2 < 4) {
      *(undefined2 *)(param_2 + 5) = 0;
    }
    else {
      *(ushort *)(param_2 + 5) = (ushort)((uVar2 << 0x1c) >> 0x1e);
      if ((uVar2 << 0x1c) >> 0x1e == 0) {
        *(undefined2 *)(param_2 + 5) = 2;
      }
      sub_0800791A(&iStack_18,(int)param_2);
      iStack_10 = iStack_18 + *(int *)(&DAT_08701e2c + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_c = iStack_14 + *(int *)(&DAT_08701e30 + (uint)*(byte *)(param_2 + 4) * 8);
      sub_0801E056(&iStack_10,(int)param_2);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801DC6E @ 0x0801DC6E */

void sub_0801DC6E(void)

{
  sub_0801FC4E(0x3002c80,0x80e18a4,0x40,0);
  return;
}


/* sub_0801DC8A @ 0x0801DC8A */

void sub_0801DC8A(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  sub_0800763C(param_2,&DAT_03002288);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return;
}


/* sub_0801DCC8 @ 0x0801DCC8 */

bool sub_0801DCC8(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x18) != &DAT_03002288;
}


/* sub_0801DCDA @ 0x0801DCDA */

undefined4 * sub_0801DCDA(void)

{
  return &DAT_0300228c;
}


/* sub_0801DCFC @ 0x0801DCFC */

undefined4 * sub_0801DCFC(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x40,param_3);
    *param_1 = &_080250A8;
    sub_0800678C((int)param_1);
    cVar2 = DAT_03002290 + '\x01';
    bVar5 = DAT_03002290 == '\0';
    DAT_03002290 = cVar2;
    if (bVar5) {
      DAT_03002292 = sub_080067AC(&DAT_03001120,0x1300);
      REG_DMA3SAD = 0x8701e58;
      REG_DMA3DAD = DAT_03002292 * 0x20 + 0x6010000;
      Ram040000dc = 0x4c0;
      DAT_040000de = 0x8400;
    }
    iVar3 = *param_2;
    iVar4 = param_2[1];
    bVar1 = *(byte *)(param_3 + 0x10);
    param_1[0x14] = 0;
    param_1[8] = iVar3 << 8;
    param_1[9] = iVar4 << 8;
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[0x10] = 0;
    param_1[0x15] = &gUnknown_08703158 + (uint)bVar1 * 0x3c;
    param_1[6] = &gUnknown_08703158 + (uint)bVar1 * 0x3c;
    iVar3 = sub_0802141C(0xc0);
    iVar4 = (uint)bVar1 * 8;
    param_1[0x12] = iVar3 + *(int *)(&DAT_08703250 + iVar4) + -0x60;
    iVar3 = sub_0802141C(0xc0);
    param_1[0x13] = iVar3 + *(int *)(&DAT_08703254 + iVar4) + -0x60;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_0801DDBA @ 0x0801DDBA */

void sub_0801DDBA(undefined4 *param_1,int param_2)

{
  *param_1 = &_080250A8;
  DAT_03002290 = DAT_03002290 + -1;
  if ((DAT_03002290 == '\0') && (DAT_03002292 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002292);
    DAT_03002292 = -1;
  }
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801DE10 @ 0x0801DE10 */

void sub_0801DE10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [12];
  int *piStack_18;
  
  param_1[8] = param_1[8] + param_1[0x12];
  param_1[9] = param_1[9] + param_1[0x13];
  iVar2 = param_1[0x14];
  param_1[0x14] = iVar2 + 1;
  uVar3 = iVar2 + 1 >> 2;
  uVar4 = uVar3 & 0xff;
  *(char *)(param_1 + 0x11) = (char)uVar3;
  if (uVar4 < 5) {
    param_1[6] = param_1[0x15] + uVar4 * 0xc;
    sub_08013BF4((int)param_1);
    piVar1 = DAT_03001fa8;
    if ((((param_2 != 0) && (param_1[7] != 0)) && (param_1[0x10] == 0)) &&
       ((DAT_03001fa8 != (int *)0x0 && (DAT_03001fa8[0x5a] != 0)))) {
      iStack_44 = (param_1[8] >> 8) + -8;
      iStack_40 = (param_1[9] >> 8) + -8;
      iStack_3c = (param_1[8] >> 8) + 8;
      iStack_38 = (param_1[9] >> 8) + 8;
      sub_080079B8(&iStack_58,(int)DAT_03001fa8);
      if (((iStack_58 < iStack_3c) && ((iStack_44 < iStack_50 && (iStack_54 < iStack_38)))) &&
         (iStack_40 < iStack_4c)) {
        iStack_28 = param_1[7];
        auStack_34[0] = (undefined1)param_1[5];
        puStack_2c = &gUnknown_086DB2E4;
        uStack_30 = sub_08028230(0x424ccccd);
        uStack_48 = *(undefined1 *)((int)param_1 + 0x15);
        param_1[0x10] = 1;
        piStack_18 = param_1;
        if (0x80 < -DAT_03002294) {
          iVar2 = sub_0802141C(3);
          sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
          DAT_03002294 = 0;
        }
        sub_0800F910((int)piVar1,(int)auStack_34);
        __call_via_r2(piVar1,auStack_24,(undefined *)(*(int *)(*piVar1 + 0x40) + *piVar1));
      }
    }
  }
  else {
    sub_080068CA(0x3001120,param_1);
  }
  return;
}


/* sub_0801DF3C @ 0x0801DF3C */

undefined4 sub_0801DF3C(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x38) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x3c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (uint)DAT_03002292 + (*(int *)(*(int *)(param_1 + 0x18) + 8) + -0x8701e58 >> 5) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_0801DFE4 @ 0x0801DFE4 */

undefined4 sub_0801DFE4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 == 8) {
    cVar2 = DAT_03002290 + -1;
    bVar3 = DAT_03002290 == '\x01';
    DAT_03002290 = cVar2;
    if ((bVar3) && (DAT_03002292 != -1)) {
      sub_08006664(&DAT_03001120,(int)DAT_03002292);
      DAT_03002292 = -1;
    }
    uVar1 = 0;
  }
  else if (param_2 == 9) {
    cVar2 = DAT_03002290 + '\x01';
    bVar3 = DAT_03002290 == '\0';
    DAT_03002290 = cVar2;
    if (bVar3) {
      DAT_03002292 = sub_080067AC(&DAT_03001120,0x1300);
      REG_DMA3SAD = 0x8701e58;
      REG_DMA3DAD = DAT_03002292 * 0x20 + 0x6010000;
      Ram040000dc = 0x4c0;
      DAT_040000de = 0x8400;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08013D68(param_1,param_2,param_3);
  }
  return uVar1;
}


/* sub_0801E056 @ 0x0801E056 */

void sub_0801E056(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if ((0x13ff < iVar1) && (3 < 0x80 - DAT_03001124)) {
    iVar1 = sub_0801DCFC((undefined4 *)0x0,param_1,param_2);
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_0801E0A4 @ 0x0801E0A4 */

void sub_0801E0A4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080254B0;
    param_1[1] = param_3;
    param_1[2] = param_2;
    param_1[3] = 0;
  }
  return;
}


/* sub_0801E0C6 @ 0x0801E0C6 */

int sub_0801E0C6(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 in_cr11;
  undefined *local_20;
  int *local_1c;
  undefined4 local_18;
  
  local_18 = DAT_03001fa8;
  local_20 = &_08024A64;
  local_1c = (int *)0x0;
  sub_0800DF98((int)&local_20,param_2);
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = (int *)sub_0801F08C(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_080254B0;
    piVar1[1] = iVar2;
    piVar1[2] = param_1;
    piVar1[3] = 0;
  }
  sub_0800763C(param_2,piVar1);
  sub_0801FC9C(0x3002c80,&gUnknown_080E16DC,0x40,0);
  local_20 = &_08023DB8;
  cVar4 = (int)local_1c < 0;
  cVar3 = '\0';
  if (local_1c != (int *)0x0) {
    piVar1 = (int *)*local_1c;
    cVar3 = SCARRY4(*piVar1,(int)piVar1);
    cVar4 = '\0';
    local_1c = (int *)__call_via_r2(local_1c,1,(undefined *)(*piVar1 + (int)piVar1));
  }
  if (cVar4 != cVar3) {
    local_1c = local_1c + 3;
    coprocessor_loadlong(0,in_cr11,local_1c);
  }
  return local_1c[2];
}


/* sub_0801E132 @ 0x0801E132 */

void sub_0801E132(void)

{
  sub_0801FC22(0x3002c80,0x80e16dc);
  return;
}


/* sub_0801E144 @ 0x0801E144 */

void sub_0801E144(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080249A8;
    puVar1[1] = uVar2;
    puVar1[2] = 0;
  }
  return;
}


/* sub_0801E15E @ 0x0801E15E */

void sub_0801E15E(int param_1,int *param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x28;
  *(undefined2 *)(param_2 + 5) = 0;
  param_2[0x13] = param_2[0x12] + 0xac;
  sub_0800791A(&local_1c,(int)param_2);
  local_14 = local_1c + *(int *)(&DAT_08703274 + (uint)*(byte *)(param_2 + 4) * 8);
  local_10 = local_18 + *(int *)(&DAT_08703278 + (uint)*(byte *)(param_2 + 4) * 8);
  iVar1 = sub_0801E2A0(&local_14,(int)param_2,*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801E1C2 @ 0x0801E1C2 */

void sub_0801E1C2(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x3c) {
    *(ushort *)(param_2 + 5) = (ushort)(((uint)uVar1 << 0x1b) >> 0x1e);
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801E1EA @ 0x0801E1EA */

void sub_0801E1EA(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x34) = 1;
  }
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_0801E224 @ 0x0801E224 */

undefined4 * sub_0801E224(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x38), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar2 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar2;
    *param_1 = &_08024E5C;
    uVar3 = param_2[1];
    param_1[5] = *param_2;
    param_1[6] = uVar3;
    bVar1 = *(byte *)(param_3 + 0x10);
    *(byte *)((int)param_1 + 0x11) = bVar1;
    param_1[0xc] = param_4;
    *(undefined1 *)(param_1 + 4) = 0;
    iVar4 = (uint)bVar1 * 8;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    uVar6 = *(undefined4 *)(&DAT_087032a0 + iVar4);
    param_1[8] = *(undefined4 *)(&DAT_087032a4 + iVar4);
    param_1[7] = uVar6;
    param_1[9] = 8;
    puVar5 = &DAT_087035d0;
    if (1 < bVar1) {
      puVar5 = &gUnknown_087032D0;
    }
    param_1[10] = puVar5;
    param_1[0xb] = param_3;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 2) = 0x28;
    param_1[1] = uVar3;
  }
  return param_1;
}


/* sub_0801E2A0 @ 0x0801E2A0 */

int sub_0801E2A0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (iVar1 < 0x100) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_0801E224((undefined4 *)0x0,param_1,param_2,param_3);
    sub_080068B8(0x3001120,iVar1);
  }
  return iVar1;
}


/* sub_0801E2D2 @ 0x0801E2D2 */

void sub_0801E2D2(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  int iStack_30;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((char)param_1[0xd] == '\0') {
    iStack_24 = param_1[5] + (param_1[9] >> 3) * param_1[7];
    iStack_18 = param_1[6] + (param_1[9] >> 3) * param_1[8];
    iStack_1c = iStack_24;
    iStack_30 = param_1[0xb];
    uStack_3c = *(undefined1 *)((int)param_1 + 0x11);
    puStack_34 = &gUnknown_086DB2E4;
    uStack_38 = 0x400;
    auStack_50[0] = 0;
    piStack_20 = param_1;
    if (param_1[9] < param_1[0xc]) {
      iStack_4c = iStack_24 + -4;
      iStack_48 = iStack_18 + -4;
      iStack_44 = iStack_24 + 4;
      iStack_40 = iStack_18 + 4;
      iVar1 = sub_08005D6C(&iStack_4c,DAT_03001100);
      if (iVar1 != 0) {
        param_1[9] = param_1[9] + 8;
      }
    }
    piVar4 = param_1 + 6;
    if (((param_2 != 0) && (param_1[0xb] != 0)) && (*(char *)((int)param_1 + 0x12) == '\0')) {
      piVar2 = param_1 + 5;
      piVar3 = piVar2;
      if (iStack_1c < param_1[5]) {
        piVar3 = &iStack_1c;
      }
      iStack_4c = *piVar3 + -4;
      piVar3 = piVar4;
      if (iStack_18 < *piVar4) {
        piVar3 = &iStack_18;
      }
      iStack_48 = *piVar3 + -4;
      if (*piVar2 < iStack_1c) {
        piVar2 = &iStack_1c;
      }
      iStack_44 = *piVar2 + 4;
      piVar2 = piVar4;
      if (*piVar4 < iStack_18) {
        piVar2 = &iStack_18;
      }
      iStack_40 = *piVar2 + 4;
      iVar1 = sub_08006DA6(0x3001120,0,auStack_50);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_1 + 0x12) = 1;
        iVar1 = sub_0802141C(3);
        sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
      }
    }
    if (*piVar4 < iStack_18) {
      piVar4 = &iStack_18;
    }
    param_1[1] = *piVar4;
  }
  else if ((char)param_1[0xd] == '\x01') {
    iVar1 = param_1[9];
    param_1[9] = iVar1 + -8;
    param_1[5] = param_1[5] + param_1[7];
    param_1[6] = param_1[6] + param_1[8];
    if (iVar1 + -8 < 1) {
      sub_080068CA(0x3001120,param_1);
    }
  }
  return;
}


/* sub_0801E42A @ 0x0801E42A */

void sub_0801E42A(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  int iStack_30;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((char)param_1[0xd] == '\0') {
    iStack_24 = param_1[5] + (param_1[9] >> 3) * param_1[7];
    iStack_18 = param_1[6] + (param_1[9] >> 3) * param_1[8];
    iStack_1c = iStack_24;
    iStack_30 = param_1[0xb];
    uStack_3c = *(undefined1 *)((int)param_1 + 0x11);
    puStack_34 = &gUnknown_086DB2E4;
    uStack_38 = 0x400;
    auStack_50[0] = 0;
    piStack_20 = param_1;
    if (param_1[9] < param_1[0xc]) {
      iStack_4c = iStack_24 + -4;
      iStack_48 = iStack_18 + -4;
      iStack_44 = iStack_24 + 4;
      iStack_40 = iStack_18 + 4;
      iVar1 = sub_08005D6C(&iStack_4c,DAT_03001100);
      if (iVar1 != 0) {
        param_1[9] = param_1[9] + 8;
      }
    }
    piVar4 = param_1 + 6;
    if ((param_1[0xb] != 0) && (*(char *)((int)param_1 + 0x12) == '\0')) {
      piVar2 = param_1 + 5;
      piVar3 = piVar2;
      if (iStack_1c < param_1[5]) {
        piVar3 = &iStack_1c;
      }
      iStack_4c = *piVar3 + -4;
      piVar3 = piVar4;
      if (iStack_18 < *piVar4) {
        piVar3 = &iStack_18;
      }
      iStack_48 = *piVar3 + -4;
      if (*piVar2 < iStack_1c) {
        piVar2 = &iStack_1c;
      }
      iStack_44 = *piVar2 + 4;
      piVar2 = piVar4;
      if (*piVar4 < iStack_18) {
        piVar2 = &iStack_18;
      }
      iStack_40 = *piVar2 + 4;
      iVar1 = sub_08006DA6(0x3001120,0,auStack_50);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_1 + 0x12) = 1;
        iVar1 = sub_0802141C(3);
        sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
      }
    }
    if (*piVar4 < iStack_18) {
      piVar4 = &iStack_18;
    }
    param_1[1] = *piVar4;
  }
  else if ((char)param_1[0xd] == '\x01') {
    iVar1 = param_1[9];
    param_1[9] = iVar1 + -8;
    param_1[5] = param_1[5] + param_1[7];
    param_1[6] = param_1[6] + param_1[8];
    if (iVar1 + -8 < 1) {
      sub_080068CA(0x3001120,param_1);
    }
  }
  return;
}


/* sub_0801E42E @ 0x0801E42E */

undefined4 sub_0801E42E(void)

{
  return 1;
}


/* sub_0801E432 @ 0x0801E432 */

undefined4 sub_0801E432(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x14) - DAT_0300109c;
  uVar1 = *(int *)(param_1 + 0x18) - DAT_030010a0;
  uVar2 = *(uint *)(&DAT_087032c0 + (uint)*(byte *)(param_1 + 0x11) * 4);
  puVar4 = (uint *)*param_2;
  for (iVar5 = *(int *)(param_1 + 0x24); 0 < iVar5; iVar5 = iVar5 + -8) {
    *puVar4 = uVar2 & 0xfe00ff00 | (uint)(iVar3 << 0x17) >> 7 | uVar1 & 0xff;
    uVar7 = (puVar4[1] & 0xfffff3ff) + 0x800;
    puVar4[1] = uVar7;
    puVar4[1] = *(ushort *)(param_1 + 0xc) + uVar6 & 0x3ff | uVar7 & 0xfffffc00;
    iVar3 = iVar3 + *(int *)(param_1 + 0x1c);
    uVar6 = uVar6 + 2 & 7;
    puVar4 = puVar4 + 2;
    uVar1 = uVar1 + *(int *)(param_1 + 0x20);
  }
  *param_2 = (int)puVar4;
  uVar6 = *(byte *)(param_1 + 0x10) + 1;
  *(char *)(param_1 + 0x10) = (char)uVar6;
  uVar6 = uVar6 & 3;
  if (2 < uVar6) {
    uVar6 = 1;
  }
  REG_DMA3SAD = *(int *)(param_1 + 0x28) + uVar6 * 0x100;
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  return 0;
}


/* sub_0801E518 @ 0x0801E518 */

undefined4 sub_0801E518(int *param_1,int param_2,int param_3)

{
  if (param_2 == 10) {
    sub_0801E2D2(param_1,0);
  }
  else if ((param_2 == 0xf) && (param_1[0xb] == param_3)) {
    param_1[0xb] = 0;
  }
  return 0;
}


/* sub_0801E53E @ 0x0801E53E */

undefined4 sub_0801E53E(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_0801E54A @ 0x0801E54A */

void sub_0801E54A(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08024DA8;
    param_1[1] = param_2;
    param_1[2] = 0;
  }
  return;
}


/* sub_0801E54C @ 0x0801E54C */

void sub_0801E54C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08024DA8;
    param_1[1] = param_2;
    param_1[2] = 0;
  }
  return;
}


/* sub_0801E56A @ 0x0801E56A */

void sub_0801E56A(int param_1,int param_2)

{
  int *piVar1;
  undefined *local_20;
  int *local_1c;
  undefined4 local_18;
  
  local_18 = DAT_03001fa8;
  local_20 = &_08024A64;
  local_1c = (int *)0x0;
  sub_0800DF98((int)&local_20,param_2);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024DA8;
    piVar1[1] = param_1;
    piVar1[2] = 0;
  }
  sub_0800763C(param_2,piVar1);
  local_20 = &_08023DB8;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,(undefined *)(*(int *)*local_1c + *local_1c));
  }
  return;
}


/* sub_0801E5BC @ 0x0801E5BC */

undefined4 sub_0801E5BC(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* sub_0801E5C0 @ 0x0801E5C0 */

void sub_0801E5C0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E5C;
    puVar1[1] = 0;
  }
  return;
}


/* sub_0801E5D6 @ 0x0801E5D6 */

void sub_0801E5D6(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x28;
  *(undefined2 *)(param_2 + 5) = 0;
  param_2[0x13] = param_2[0x12] + 0x9c;
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x2ff < iVar1) {
    sub_0800791A(&local_24,(int)param_2);
    local_1c = local_24 + *(int *)(&DAT_087038d4 + (uint)*(byte *)(param_2 + 4) * 8);
    local_18 = local_20 + *(int *)(&DAT_087038d8 + (uint)*(byte *)(param_2 + 4) * 8);
    uVar2 = 0x28;
    if ((char)param_2[4] != '\x01') {
      uVar2 = 0x27;
    }
    iVar1 = sub_080143A8((undefined4 *)0x0,&local_1c,uVar2,param_2,0x3000,1);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) goto _0801E658;
    sub_080068B8(0x3001120,iVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
_0801E658:
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801E66A @ 0x0801E66A */

void sub_0801E66A(undefined4 param_1,int *param_2)

{
  if (0x5a < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801E682 @ 0x0801E682 */

void sub_0801E682(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0801CB24(param_1,param_2);
  if (*(short *)(param_2 + 0x12) == 8) {
    sub_0800791A(&local_1c,param_2);
    iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
    local_14 = local_1c + *(int *)(&DAT_087038f4 + iVar1);
    local_10 = local_18 + *(int *)(&DAT_087038f8 + iVar1);
    sub_08014478(*(int *)(param_1 + 8),(uint)*(byte *)(param_2 + 0x10),&local_14);
  }
  return;
}


/* sub_0801E6CC @ 0x0801E6CC */

void sub_0801E6CC(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 1;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    sub_0801451C(*(int **)(param_1 + 8));
  }
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_0801E700 @ 0x0801E700 */

void sub_0801E700(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802549C;
    param_1[1] = param_2;
    param_1[3] = param_3;
    param_1[2] = 0;
  }
  return;
}


/* sub_0801E722 @ 0x0801E722 */

void sub_0801E722(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *local_20;
  int *local_1c;
  undefined4 local_18;
  
  local_18 = DAT_03001fa8;
  local_20 = &_08024A64;
  local_1c = (int *)0x0;
  sub_0800DF98((int)&local_20,param_2);
  iVar2 = *(int *)(param_1 + 8);
  piVar1 = (int *)sub_0801F08C(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802549C;
    piVar1[1] = param_1;
    piVar1[2] = 0;
    piVar1[3] = iVar2;
  }
  sub_0800763C(param_2,piVar1);
  local_20 = &_08023DB8;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,(undefined *)(*(int *)*local_1c + *local_1c));
  }
  return;
}


/* sub_0801E776 @ 0x0801E776 */

undefined4 sub_0801E776(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* sub_0801E77A @ 0x0801E77A */

void sub_0801E77A(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024518;
    puVar1[1] = 0;
    puVar1[2] = param_1;
  }
  return;
}


/* sub_0801E794 @ 0x0801E794 */

void sub_0801E794(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sub_0801CB10(param_1,(int)param_2);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x2ff < iVar1) {
    sub_0800791A(&local_20,(int)param_2);
    iVar1 = *(int *)(param_1 + 0xc) + (uint)*(byte *)(param_2 + 4) * 8;
    local_18 = local_20 + *(int *)(iVar1 + 0xc);
    local_14 = local_1c + *(int *)(iVar1 + 0x10);
    uVar2 = 0x28;
    if ((char)param_2[4] != '\x01') {
      uVar2 = 0x27;
    }
    iVar1 = sub_080143A8((undefined4 *)0x0,&local_18,uVar2,param_2,0x3000,0);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) goto _0801E80C;
    sub_080068B8(0x3001120,iVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
_0801E80C:
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801E81E @ 0x0801E81E */

void sub_0801E81E(undefined4 param_1,int *param_2)

{
  if (0x5a < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801E836 @ 0x0801E836 */

void sub_0801E836(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0801CB24(param_1,param_2);
  if (*(short *)(param_2 + 0x12) == 8) {
    sub_0800791A(&local_1c,param_2);
    iVar1 = *(int *)(param_1 + 0xc) + (uint)*(byte *)(param_2 + 0x10) * 8;
    local_14 = local_1c + *(int *)(iVar1 + 0x2c);
    local_10 = local_18 + *(int *)(iVar1 + 0x30);
    sub_08014478(*(int *)(param_1 + 8),(uint)*(byte *)(param_2 + 0x10),&local_14);
  }
  return;
}


/* sub_0801E880 @ 0x0801E880 */

void sub_0801E880(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 1;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    sub_0801451C(*(int **)(param_1 + 8));
  }
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_0801E8B4 @ 0x0801E8B4 */

undefined4 sub_0801E8B4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((DAT_03001fa8 == 0) || (*(int *)(DAT_03001fa8 + 0x168) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_080079B8(&iStack_24,DAT_03001fa8);
    sub_080079B8(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_44 = iStack_34 + iStack_2c >> 1;
    iStack_4c = iStack_34 + 2;
    iStack_28 = iStack_28 + -6;
    if ((iStack_4c < iStack_1c) &&
       (((iStack_24 < iStack_2c + -3 && (iStack_30 + 2 < iStack_18)) && (iStack_20 < iStack_28)))) {
      iVar3 = iStack_24 + iStack_1c >> 1;
      iStack_40 = iStack_20 + iStack_18 >> 1;
      iVar2 = iVar3 - iStack_44;
      iVar5 = iStack_40 - iStack_38;
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      iStack_48 = iStack_28;
      if (iVar6 < iVar4) {
        iStack_30 = iStack_38;
        if (iVar2 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_4c = iStack_44;
          iStack_44 = iStack_2c + -3;
        }
      }
      else {
        iStack_4c = iVar2;
        iStack_48 = iVar5;
        iStack_3c = iStack_44;
        iStack_44 = iVar3;
        sub_0800793A(&iStack_4c,param_2);
        if (iVar5 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
          iStack_30 = iStack_30 + 3;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_48 = iStack_28;
        }
      }
      if (((iStack_4c < iStack_1c) && (iStack_24 < iStack_44)) &&
         ((iStack_30 < iStack_18 && (iStack_20 < iStack_48)))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0801E9C4 @ 0x0801E9C4 */

void sub_0801E9C4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801E8B4(param_1,param_2);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar2 + (int)piVar2));
  }
  return;
}


/* sub_0801E9E4 @ 0x0801E9E4 */

undefined4 sub_0801E9E4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = sub_0801E8B4(param_1,param_2);
  if (*(int *)(param_1 + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,
                            (undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
      uVar2 = 0;
    }
    else {
      piVar3 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar3 + (int)piVar3));
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,
                            (undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
  }
  return uVar2;
}


/* sub_0801EA42 @ 0x0801EA42 */

void sub_0801EA42(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = **(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
  }
  return;
}


/* sub_0801EA58 @ 0x0801EA58 */

void sub_0801EA58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,
                        (undefined *)**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08024B6C;
    puVar2[2] = uVar1;
    puVar2[1] = 0;
  }
  return;
}


/* sub_0801EA84 @ 0x0801EA84 */

void sub_0801EA84(int param_1,int param_2)

{
  *(char *)(param_2 + 8) = (char)*(undefined4 *)(param_1 + 8);
  return;
}


/* sub_0801EA8A @ 0x0801EA8A */

undefined4 *
sub_0801EA8A(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,0);
    *param_1 = &_08025124;
    uVar1 = *param_3;
    param_1[0x12] = param_3[1];
    param_1[0x11] = uVar1;
    param_1[0x10] = param_5;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x15] = 0;
    param_1[0x13] = &gUnknown_086E0B90 + param_4 * 0x30;
    param_1[0x14] = 0;
    param_1[6] = &gUnknown_086E0B90 + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4((int)param_1);
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
  }
  return param_1;
}


/* sub_0801EA8C @ 0x0801EA8C */

undefined4 *
sub_0801EA8C(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,0);
    *param_1 = &_08025124;
    uVar1 = *param_3;
    param_1[0x12] = param_3[1];
    param_1[0x11] = uVar1;
    param_1[0x10] = param_5;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x15] = 0;
    param_1[0x13] = &gUnknown_086E0B90 + param_4 * 0x30;
    param_1[0x14] = 0;
    param_1[6] = &gUnknown_086E0B90 + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4((int)param_1);
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
  }
  return param_1;
}


/* sub_0801EB18 @ 0x0801EB18 */

void sub_0801EB18(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0x10;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x4c) + 0x24;
  return;
}


/* sub_0801EB24 @ 0x0801EB24 */

void sub_0801EB24(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1[8] = param_1[8] + param_1[0x11];
  param_1[9] = param_1[9] + param_1[0x12];
  if (param_1[0x14] == 0) {
    iVar1 = param_1[0x15];
    param_1[0x15] = iVar1 + 1;
    uVar2 = (uint)((iVar1 + 1) * 0x10000000) >> 0x1e;
    if (uVar2 == 3) {
      uVar2 = 1;
    }
    param_1[6] = param_1[0x13] + uVar2 * 0xc;
    sub_08013BF4((int)param_1);
  }
  else {
    iVar1 = param_1[0x14] + -1;
    param_1[0x14] = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(0x3001120,param_1);
    }
  }
  return;
}


/* sub_0801EB70 @ 0x0801EB70 */

undefined4 sub_0801EB70(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x11) {
    if ((((param_1[0x14] == 0) && (*param_3 == param_1[0x10])) && (param_3[1] < param_1[0xc])) &&
       (((param_1[10] < param_3[3] && (param_3[2] < param_1[0xd])) && (param_1[0xb] < param_3[4]))))
    {
      param_1[0x14] = 0x10;
      param_1[6] = param_1[0x13] + 0x24;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08013D68(param_1,param_2,(int)param_3);
  }
  return uVar1;
}


/* sub_0801EBD4 @ 0x0801EBD4 */

void sub_0801EBD4(int param_1,int *param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_1 + 0xc);
  local_14 = (int *)0x0;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,(int)param_2);
  __call_via_r2(param_2,5,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return;
}


/* sub_0801EC16 @ 0x0801EC16 */

void sub_0801EC16(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0x10) {
    sub_08007A26(&local_1c,param_2);
    sub_080079B8(&local_34,*(int *)(param_1 + 0xc));
    local_20 = local_30 + local_28 >> 1;
    local_24 = local_34 + local_2c >> 1;
    local_2c = local_24 - local_1c;
    local_28 = local_20 - local_18;
    local_3c = local_2c;
    if (local_2c < 0) {
      local_3c = -local_2c;
    }
    local_38 = local_28;
    if (local_28 < 0) {
      local_38 = -local_28;
    }
    local_34 = local_3c;
    local_30 = local_38;
    piVar2 = &local_30;
    if (local_38 < local_3c) {
      piVar2 = &local_34;
    }
    iVar1 = *piVar2;
    local_3c = __16__rt_sdiv(iVar1 * 0x100,local_2c * *(int *)(param_1 + 0x10));
    local_38 = __16__rt_sdiv(iVar1 * 0x100,local_28 * *(int *)(param_1 + 0x10));
    sub_0800700E(&DAT_03001120,0x400);
    iVar1 = sub_0801EA8C((undefined4 *)0x0,&local_1c,&local_3c,(uint)*(byte *)(param_2 + 0x10),
                         *(undefined4 *)(param_1 + 0xc));
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_0801ECDC @ 0x0801ECDC */

bool sub_0801ECDC(int param_1)

{
  return *(int *)(param_1 + 8) == 0;
}


/* sub_0801ECF8 @ 0x0801ECF8 */

void sub_0801ECF8(void)

{
  DAT_04000053 = 0;
  REG_BLDALPHA = 0x10;
  REG_BLDCNT = 0x2848;
  return;
}


/* sub_0801ED0C @ 0x0801ED0C */

undefined4 sub_0801ED0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar2;
  REG_BLDALPHA = (char)iVar2;
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = (int *)sub_0801F08C(0xbc);
    if (piVar1 != (int *)0x0) {
      sub_0800020C(piVar1);
      *piVar1 = (int)&_080242D0;
    }
    sub_0801F2CE(piVar1);
  }
  return 0;
}


/* sub_0801ED3C @ 0x0801ED3C */

undefined4 * sub_0801ED3C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x12c10), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0801A378(param_1,&gUnknown_087FB8D0);
  *param_1 = &_08023AB8;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C(&DAT_030026c8,0x81d4c58);
  }
  return param_1;
}


/* sub_0801ED76 @ 0x0801ED76 */

undefined4 sub_0801ED76(void)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(0xbc);
  if (piVar1 != (int *)0x0) {
    sub_0800020C(piVar1);
    *piVar1 = (int)&_080242D0;
  }
  sub_0801F2CE(piVar1);
  return 0;
}


/* sub_0801ED96 @ 0x0801ED96 */

undefined4 sub_0801ED96(void)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024610;
    piVar1[1] = 0x10;
  }
  sub_0801F2CE(piVar1);
  return 0;
}


/* sub_0801EDE0 @ 0x0801EDE0 */

void sub_0801EDE0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080237C0;
    param_1[1] = 0;
  }
  return;
}


/* sub_0801EDFA @ 0x0801EDFA */

void sub_0801EDFA(void)

{
  int local_54 [4];
  undefined2 auStack_44 [18];
  int local_20;
  
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0,0x18000);
  sub_08020E5C((undefined1 *)auStack_44,0xf0,0xa0);
  sub_0801F394((int *)&gUnknown_087007BC,local_20);
  sub_08021344((int)auStack_44,0x6000040);
  local_54[2] = 0x1e;
  local_54[3] = 0x14;
  local_54[0] = 0;
  local_54[1] = 0;
  sub_0801F508(local_54,0x600f800,1);
  REG_BG3CNT = 0x1f83;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0x800;
  REG_BLDCNT = 0x2048;
  DAT_04000053 = 0;
  REG_BLDALPHA = 0;
  REG_DMA3SAD = 0x81d4f50;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  DAT_0300229d = 0;
  sub_08020EAA(auStack_44,0);
  return;
}


/* sub_0801EE7E @ 0x0801EE7E */

undefined4 sub_0801EE7E(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 < 0x11) {
    REG_BLDALPHA = (char)iVar1;
    return 0;
  }
  if (iVar1 < 0x97) {
    return 0;
  }
  if (iVar1 < 0xa7) {
    REG_BLDALPHA = -0x5a - (char)iVar1;
    return 0;
  }
  if (iVar1 < 0xb4) {
    return 0;
  }
  return 1;
}


/* sub_0801EEB2 @ 0x0801EEB2 */

void sub_0801EEB2(int *param_1)

{
  DAT_0300229d = 1;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_0801EEFC @ 0x0801EEFC */

void sub_0801EEFC(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = REG_KEYINPUT;
  uVar4 = ~uVar4;
  uVar2 = *(ushort *)(param_1 + 0x12) ^ uVar4;
  uVar3 = uVar4 & uVar2;
  *(ushort *)(param_1 + 0x14) = uVar3;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x12) & uVar2;
  *(ushort *)(param_1 + 0x12) = uVar4;
  if (uVar3 != 0) {
    bVar1 = *param_1;
    *param_1 = bVar1 + 1;
    *(ushort *)(param_1 + (uint)bVar1 * 2 + 2) = uVar3;
    if (7 < *param_1) {
      *param_1 = 0;
    }
    DAT_03002298 = 0;
  }
  if ((((~*(ushort *)(param_1 + 0x12) & 0xf) == 0) && (param_1[1] != 0)) &&
     ((*(ushort *)(param_1 + 0x14) & 0xf) != 0)) {
    sub_0802135C();
  }
  return;
}


/* sub_0801EF56 @ 0x0801EF56 */

void sub_0801EF56(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[1] = 0;
  return;
}


/* sub_0801EF64 @ 0x0801EF64 */

undefined4 sub_0801EF64(byte *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
    do {
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        uVar2 = 7;
      }
      param_2 = param_2 + -1;
      if (*(short *)(param_3 + param_2 * 2) != *(short *)(param_1 + uVar2 * 2 + 2)) {
        return 0;
      }
    } while (param_2 != 0);
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0801EFA4 @ 0x0801EFA4 */

void sub_0801EFA4(void)

{
  DAT_030022b4 = &DAT_02000800;
  DAT_02000800 = 0;
  DAT_02000802 = 0xfdfe;
  DAT_02000804 = 0;
  DAT_02000806 = 0;
  DAT_02000808 = 0;
  DAT_0200080a = 0;
  return;
}


/* sub_0801EFBC @ 0x0801EFBC */

void sub_0801EFBC(int param_1)

{
  ushort uVar1;
  
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 10) == 0) {
    if (uVar1 == 0) {
      DAT_030022b4 = 0;
    }
    else {
      DAT_030022b4 = (uint)uVar1 * 4 + 0x2000000;
    }
  }
  else {
    *(ushort *)(&DAT_02000008 + (uint)*(ushort *)(param_1 + 10) * 4) = uVar1;
  }
  if (*(ushort *)(param_1 + 8) != 0) {
    *(undefined2 *)((uint)*(ushort *)(param_1 + 8) * 4 + 0x200000a) = *(undefined2 *)(param_1 + 10);
  }
  return;
}


/* sub_0801EFF4 @ 0x0801EFF4 */

void sub_0801EFF4(int param_1)

{
  if (DAT_030022b4 == 0) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    *(short *)(param_1 + 8) = (short)(DAT_030022b4 + -0x2000000 >> 2);
    *(short *)(DAT_030022b4 + 10) = (short)(param_1 + -0x2000000 >> 2);
  }
  *(undefined2 *)(param_1 + 10) = 0;
  DAT_030022b4 = param_1;
  return;
}


/* sub_0801F01C @ 0x0801F01C */

void sub_0801F01C(ushort *param_1,ushort *param_2)

{
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  return;
}


/* sub_0801F03E @ 0x0801F03E */

void sub_0801F03E(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = param_2[2];
  param_1[1] = param_1[1] + param_2[1] + 2;
  *param_1 = *param_2;
  if (*param_2 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)*param_2 * 4) = param_2[2];
  }
  param_1[5] = param_2[5];
  puVar2 = param_1;
  if (param_2[5] != 0) {
    *(ushort *)(&DAT_02000008 + (uint)param_2[5] * 4) = uVar1;
    puVar2 = DAT_030022b4;
  }
  DAT_030022b4 = puVar2;
  param_1[4] = param_2[4];
  if (param_2[4] != 0) {
    *(ushort *)((uint)param_2[4] * 4 + 0x200000a) = uVar1;
  }
  return;
}


/* sub_0801F08C @ 0x0801F08C */

ushort * sub_0801F08C(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  uVar3 = param_1 + 3 >> 2;
  puVar7 = (ushort *)0x0;
  uVar5 = 0x7fffffff;
  puVar8 = DAT_030022b4;
  while( true ) {
    uVar4 = (uint)puVar8[1];
    if (uVar4 < uVar5) {
      if (uVar4 == uVar3) {
        sub_0801EFBC((int)puVar8);
        return puVar8 + 4;
      }
      if ((int)uVar3 < (int)uVar4) {
        uVar5 = uVar4;
        puVar7 = puVar8;
      }
    }
    if (puVar8[4] == 0) break;
    puVar8 = (ushort *)((uint)puVar8[4] * 4 + 0x2000000);
  }
  iVar6 = (puVar7[1] - uVar3) + -2;
  if (iVar6 < 1) {
    sub_0801EFBC((int)puVar7);
    return puVar7 + 4;
  }
  uVar1 = *puVar7;
  puVar7[iVar6 * 2 + 4] = uVar1;
  uVar2 = (ushort)((int)(puVar7 + iVar6 * 2 + -0xfffffc) >> 2);
  if (uVar1 != 0) {
    *(ushort *)(&DAT_02000004 + (uint)uVar1 * 4) = uVar2;
  }
  puVar7[iVar6 * 2 + 5] = (ushort)uVar3;
  puVar7[iVar6 * 2 + 6] = (ushort)((int)(puVar7 + -0x1000000) >> 2);
  *(undefined1 *)(puVar7 + iVar6 * 2 + 7) = 1;
  *puVar7 = uVar2;
  puVar7[1] = (ushort)iVar6;
  return puVar7 + iVar6 * 2 + 8;
}


/* sub_0801F110 @ 0x0801F110 */

void sub_0801F110(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  puVar3 = param_1 + -4;
  *(undefined1 *)(param_1 + -1) = 0;
  if (*puVar3 == 0) {
    if ((ushort)param_1[-2] == 0) {
      DAT_030022b4 = puVar3;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    iVar1 = (uint)(ushort)param_1[-2] * 4;
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0801EFF4((int)puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar1) = *(short *)(&DAT_02000002 + iVar1) + param_1[-3] + 2;
    *(undefined2 *)(iVar1 + 0x2000000) = 0;
    return;
  }
  iVar1 = (uint)*puVar3 * 4;
  puVar4 = (ushort *)(iVar1 + 0x2000000);
  if ((ushort)param_1[-2] == 0) {
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0801EFF4((int)puVar3);
      return;
    }
    sub_0801F03E(puVar3,puVar4);
    return;
  }
  iVar2 = (uint)(ushort)param_1[-2] * 4;
  if ((&DAT_02000006)[iVar1] == '\0') {
    if ((&DAT_02000006)[iVar2] == '\0') {
      sub_0801EFBC((int)puVar4);
      *(short *)(&DAT_02000002 + iVar2) =
           param_1[-3] + *(short *)(&DAT_02000002 + iVar1) + *(short *)(&DAT_02000002 + iVar2) + 4;
      *(ushort *)(iVar2 + 0x2000000) = *puVar4;
      if (*puVar4 == 0) {
        return;
      }
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar4 * 4) = param_1[-2];
      return;
    }
    sub_0801F03E(puVar3,puVar4);
  }
  else {
    if ((&DAT_02000006)[iVar2] != '\0') {
      sub_0801EFF4((int)puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar2) = *(short *)(&DAT_02000002 + iVar2) + param_1[-3] + 2;
    *(ushort *)(iVar2 + 0x2000000) = *puVar3;
    if (*puVar3 != 0) {
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar3 * 4) = param_1[-2];
      return;
    }
  }
  return;
}


/* sub_0801F1E6 @ 0x0801F1E6 */

int sub_0801F1E6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_030022b4;
  while( true ) {
    iVar1 = (uint)*(ushort *)(iVar2 + 2) * 4 + iVar1;
    if (*(ushort *)(iVar2 + 8) == 0) break;
    iVar2 = (uint)*(ushort *)(iVar2 + 8) * 4 + 0x2000000;
  }
  return iVar1;
}


/* sub_0801F1EA @ 0x0801F1EA */

int sub_0801F1EA(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  while( true ) {
    param_1 = (uint)*(ushort *)(iVar1 + 2) * 4 + param_1;
    if (*(ushort *)(iVar1 + 8) == 0) break;
    iVar1 = (uint)*(ushort *)(iVar1 + 8) * 4 + 0x2000000;
  }
  return param_1;
}


/* sub_0801F214 @ 0x0801F214 */

int sub_0801F214(void)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = &DAT_02000800;
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    if (*puVar2 == 0) break;
    puVar2 = (ushort *)((uint)*puVar2 * 4 + 0x2000000);
  }
  return iVar1;
}


/* sub_0801F230 @ 0x0801F230 */

void sub_0801F230(void)

{
  DAT_03000e20 = 1;
                    /* WARNING: Read-only address (ram,0x03000e20) is written */
  __call_via_r1(_03000E1C,(undefined *)(*(int *)(*_03000E1C + 0x10) + *_03000E1C));
  return;
}


/* sub_0801F232 @ 0x0801F232 */

void sub_0801F232(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = param_1[1] + 1;
  iVar1 = *(int *)*param_1;
  __call_via_r1((int *)*param_1,(undefined *)(*(int *)(iVar1 + 0x10) + iVar1));
  return;
}


/* sub_0801F248 @ 0x0801F248 */

int sub_0801F248(int param_1)

{
  ushort uVar1;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(1), param_1 != 0)) {
    sub_0801EF56(&DAT_0300229c);
    sub_0801EFA4();
    sub_08020D26();
    DAT_03000e3c = 0x801f231;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 1;
    sub_08020AF4((undefined4 *)&DAT_030026bc);
    sub_08021454((uint *)&DAT_0300389c);
    sub_0801EEFC(&DAT_0300229c);
  }
  return param_1;
}


/* sub_0801F294 @ 0x0801F294 */

void sub_0801F294(void)

{
  int iVar1;
  
  do {
    __call_via_r1(_03000E1C,(undefined *)(*(int *)(*_03000E1C + 0xc) + *_03000E1C));
    sub_08020BD8((undefined4 *)&DAT_030026bc);
    WaitForVBlank(0x3000e3c,1);
    sub_0801EEFC(&DAT_0300229c);
    iVar1 = __call_via_r1(_03000E1C,(undefined *)(*(int *)(*_03000E1C + 0x14) + *_03000E1C));
  } while (iVar1 == 0);
  return;
}


/* sub_0801F2CE @ 0x0801F2CE */

void sub_0801F2CE(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _03000E1C;
  _03000E1C = &DAT_030022b8;
  iVar2 = *piVar1;
  __call_via_r1(piVar1,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 4) + *param_1));
  _03000E1C = param_1;
  return;
}


/* sub_0801F2F4 @ 0x0801F2F4 */

undefined4 sub_0801F2F4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_03000e24 * 4;
  DAT_03000e24 = DAT_03000e24 + 1;
  *(int **)(&DAT_03000e28 + iVar2) = _03000E1C;
  _03000E1C = &DAT_030022b8;
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 4) + *param_1));
  _03000E1C = param_1;
  uVar3 = sub_0801F294();
  piVar1 = _03000E1C;
  if (DAT_03000e24 != 0) {
    _03000E1C = &DAT_030022b8;
    iVar2 = *piVar1;
    __call_via_r1(piVar1,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
    DAT_03000e24 = DAT_03000e24 + -1;
    _03000E1C = *(int **)(&DAT_03000e28 + DAT_03000e24 * 4);
  }
  return uVar3;
}


/* sub_0801F346 @ 0x0801F346 */

void sub_0801F346(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _03000E1C;
  _03000E1C = &DAT_030022b8;
  iVar2 = *piVar1;
  __call_via_r1(piVar1,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
  while (DAT_03000e24 != 0) {
    DAT_03000e24 = DAT_03000e24 + -1;
    iVar2 = **(int **)(&DAT_03000e28 + DAT_03000e24 * 4);
    __call_via_r1(*(int **)(&DAT_03000e28 + DAT_03000e24 * 4),
                  (undefined *)(*(int *)(iVar2 + 8) + iVar2));
  }
  return;
}


