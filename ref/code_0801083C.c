/* Ghidra reference decompilation of code_0801083C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801083C @ 0x0801083C */

undefined4 sub_0801083C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002068;
  if ((DAT_030022ae & *(byte *)(param_1 + 4)) != 0) {
    iVar2 = *param_2;
    iVar2 = __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
    if (iVar2 != 0) {
      if (DAT_03002068 == iVar1) {
        sub_0800BF6E(&DAT_03001fe0,param_2);
      }
      return 1;
    }
  }
  return 0;
}


/* sub_0801087A @ 0x0801087A */

undefined4 * sub_0801087A(void)

{
  return &DAT_03002154;
}


/* sub_0801087E @ 0x0801087E */

undefined4 * sub_0801087E(void)

{
  return &DAT_0300215c;
}


/* sub_08010884 @ 0x08010884 */

undefined4 * sub_08010884(void)

{
  return &DAT_03002164;
}


/* sub_0801088A @ 0x0801088A */

undefined4 * sub_0801088A(void)

{
  return &DAT_0300216c;
}


/* sub_08010898 @ 0x08010898 */

void sub_08010898(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  local_1c = 0;
  local_14 = 0x100;
  local_18 = (undefined2)*param_2;
  local_16 = (undefined2)param_2[1];
  __call_via_r1(param_3,*(int *)(*param_3 + 0x30) + *param_3);
  uVar1 = sub_0800D584(&local_1c,param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


/* sub_080108CE @ 0x080108CE */

void sub_080108CE(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_08024DF8;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 4);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  *param_1 = &_08023DB8;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0801090A @ 0x0801090A */

void sub_0801090A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  iVar1 = __call_via_r2(*(int **)(param_1 + 0xc),param_2,*(int *)(iVar1 + 8) + iVar1,param_4,param_4
                       );
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    __call_via_r1(param_2,*(int *)(*param_2 + 0x34) + *param_2);
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08010940 @ 0x08010940 */

undefined4 sub_08010940(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* sub_0801094C @ 0x0801094C */

void sub_0801094C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &_08025A98;
    param_1[4] = param_2;
    uVar1 = param_3[1];
    param_1[5] = *param_3;
    param_1[6] = uVar1;
  }
  return;
}


/* sub_08010976 @ 0x08010976 */

void sub_08010976(int param_1,undefined4 param_2)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800791A(&local_1c);
  local_14 = *(int *)(param_1 + 0x14) + local_1c;
  local_10 = *(int *)(param_1 + 0x18) + local_18;
  sub_08010898(param_1,&local_14,param_2);
  return;
}


/* sub_080109AC @ 0x080109AC */

void sub_080109AC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03001fd0 = *(undefined4 *)(param_1 + 8);
  DAT_03001fd4 = *(undefined4 *)(param_1 + 0xc);
  __call_via_r1(*(undefined4 **)(param_1 + 0x10),**(undefined4 **)(param_1 + 0x10),DAT_03001fd0,
                DAT_03001fd4,param_4);
  return;
}


/* sub_080109C4 @ 0x080109C4 */

undefined4 * sub_080109C4(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023BCC;
  }
  return param_1;
}


/* sub_080109EC @ 0x080109EC */

undefined4 sub_080109EC(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [4];
  undefined2 auStack_18 [2];
  
  iVar3 = 1;
  iVar1 = sub_08003E00(&DAT_03000e90);
  if (1 < iVar1) {
    sub_0800700E(&DAT_03001120,0x1680);
    sub_080112C0(0);
    iVar3 = sub_0801F2F4();
    sub_0800712E(&DAT_03001120);
  }
  if (iVar3 == 1) {
    sub_0800791A(auStack_1c,param_2);
    sub_08004030(&DAT_03000e90,auStack_1c);
    auStack_18[0] = 0;
    sub_0800B4AE(auStack_34,&gUnknown_083B6428,auStack_18,&DAT_086d7634,0);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0);
    puVar2 = (undefined4 *)sub_0801F08C(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_08023E88;
      puVar2[1] = auStack_34;
    }
    sub_0801F2F4(puVar2);
    sub_0800B4FC(auStack_34,0);
  }
  else if (iVar3 == 2) {
    puVar2 = (undefined4 *)sub_0801F08C(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0x100;
      puVar2[2] = 0x10;
      *puVar2 = &_0802462C;
    }
    sub_0801F2F4();
    sub_08010B08(0);
    sub_0801F2F4();
    sub_08005F1A(&DAT_03001090,1);
    puVar2 = (undefined4 *)sub_0801F08C(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_08024334;
      puVar2[1] = 0;
      puVar2[2] = 0x10;
    }
    sub_0801F2F4();
  }
  return 1;
}


/* sub_08010AC6 @ 0x08010AC6 */

undefined4 * sub_08010AC6(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_08023BCC;
  }
  return puVar1;
}


/* sub_08010B08 @ 0x08010B08 */

undefined4 * sub_08010B08(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xd8), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_080247A8;
    param_1[2] = 0;
    sub_08020E5C(param_1 + 0x14,0x20,0x20);
    param_1[0x22] = &_08023BD8;
    param_1[0x27] = &_08023BD8;
    param_1[0x2c] = &_08023BD8;
    param_1[0x31] = &_08023BD8;
    param_1[0x13] = DAT_03001fa8;
    sub_08006F4A(&DAT_03001120);
    *(undefined1 *)((int)param_1 + 0x49) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}


/* sub_08010B60 @ 0x08010B60 */

int sub_08010B60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 8) <= iVar1) {
      return -1;
    }
  } while (((&DAT_03000eb0)[*(int *)(iVar1 * 8 + param_1 + 0xc) * 7] & 2) == 0);
  return iVar1;
}


/* sub_08010B9A @ 0x08010B9A */

int sub_08010B9A(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
  } while (((&DAT_03000eb0)[*(int *)(iVar1 * 8 + param_1 + 0xc) * 7] & 2) == 0);
  return iVar1;
}


/* sub_08010BCE @ 0x08010BCE */

void sub_08010BCE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint *puVar8;
  uint local_54 [3];
  undefined1 *local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0);
  iVar1 = sub_08003E00(&DAT_03000e90);
  local_1c = __16__rt_sdiv(iVar1,0x90);
  if (0x30 < local_1c) {
    local_1c = 0x30;
  }
  iVar1 = 0x70 - ((iVar1 + -1) * local_1c >> 1);
  uVar7 = 0;
  local_18 = (int *)(param_1 + 8);
  do {
    piVar4 = local_18;
    if (((&DAT_03000eb0)[uVar7 * 7] & 1) != 0) {
      if (DAT_03000e90 == uVar7) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
      }
      iVar5 = *local_18;
      puVar8 = (uint *)(local_18 + iVar5 * 2 + 1);
      *local_18 = iVar5 + 1;
      *puVar8 = uVar7;
      uVar2 = sub_08009324((&DAT_081d967d)[(uint)(byte)(&DAT_03000ea4)[uVar7 * 0x1c] * 0x14]);
      iVar3 = sub_08007C70(0,uVar2,iVar1,0x53);
      piVar4[iVar5 * 2 + 2] = iVar3;
      iVar1 = iVar1 + local_1c;
      if ((((&DAT_03000eb0)[*puVar8 * 7] & 2) == 0) &&
         (*(undefined1 *)(iVar3 + 0x10) = 1,
         *(undefined **)(piVar4[iVar5 * 2 + 2] + 0x28) != &gUnknown_086D0DD0)) {
        sub_080076EE();
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 6);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      sub_080068B8(&DAT_03001120,local_18[iVar1 * 2 + 2]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  piVar4 = (int *)local_18[*(int *)(param_1 + 0x3c) * 2 + 2];
  *(int **)(param_1 + 0x40) = piVar4;
  __call_via_r2(piVar4,1,*(int *)(*piVar4 + 0x28) + *piVar4);
  iVar1 = **(int **)(param_1 + 0x40);
  __call_via_r1(*(int **)(param_1 + 0x40),*(int *)(iVar1 + 0xc) + iVar1);
  local_20 = 0x20;
  local_24 = 0x10;
  uVar2 = sub_08018398(0,*(int *)(param_1 + 0x40) + 0x40,&local_24,0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  sub_08020E5C(local_54,0x10,0x10);
  sub_0801F394(&gUnknown_086D7654,local_30);
  sub_08021344(local_54,&DAT_06000040);
  sub_08020EAA(local_54,0);
  psVar6 = &DAT_0600f800;
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      *psVar6 = ((ushort)((uint)(iVar1 << 0x1f) >> 0x1e) - (short)((iVar3 << 0x1f) >> 0x1f)) + 1;
      psVar6 = psVar6 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  local_2c = 4;
  local_28 = 6;
  local_24 = 0x1a;
  local_20 = 0xd;
  sub_0801F508(&local_2c,&DAT_0600e800,8);
  sub_08020E5C(local_54,0xb0,0x38);
  sub_0801F394(&gUnknown_086D76EC,local_30);
  sub_080236B4((int)local_54,0x6000200);
  sub_08020EAA(local_54,0);
  local_2c = 8;
  local_28 = 0xf;
  local_20 = 0x11;
  local_24 = 0x10;
  sub_0801F508(&local_2c,&DAT_0600e800,0xe2);
  local_2c = 0x13;
  local_28 = 0xf;
  local_24 = 0x1b;
  local_20 = 0x11;
  sub_0801F508(&local_2c,&DAT_0600e800,0xf2);
  sub_08020E5C(local_54,0x40,0x10);
  local_48 = &gUnknown_08028724;
  local_2c = CONCAT22(local_2c._2_2_,0x200);
  local_2c = CONCAT31(local_2c._1_3_,1);
  local_34 = 0x8020ec3;
  local_54[0] = local_54[0] & 0xffffff00;
  sub_08021F18(local_30,0,local_20);
  local_54[1] = 5;
  local_54[2] = 0xb;
  sub_0801F636(local_54,"Cancel");
  sub_080236B4((int)local_54,0x6003880);
  sub_08021F18(local_30,0,local_20);
  local_54[1] = 5;
  local_54[2] = 0xb;
  sub_0801F636(local_54,"Switch");
  sub_080236B4((int)local_54,0x6003c80);
  sub_08020EAA(local_54,0);
  local_2c = 4;
  local_28 = 3;
  local_24 = 0x1a;
  local_20 = 4;
  sub_0801F508(&local_2c,&DAT_0600e800,0x102);
  sub_08020E5C(local_54,0xb0,8);
  local_48 = &gUnknown_08028724;
  local_2c = CONCAT22(local_2c._2_2_,0x2900);
  local_2c = CONCAT31(local_2c._1_3_,1);
  local_34 = 0x8020ec3;
  local_54[0] = CONCAT31(local_54[0]._1_3_,1);
  sub_08021F18(local_30,0,local_20);
  local_54[1] = 0x58;
  local_54[2] = 7;
  sub_0801F636(local_54,"Switch Characters");
  sub_080236B4((int)local_54,0x6004080);
  sub_08020EAA(local_54,0);
  local_2c = 0x10;
  local_28 = 0xe;
  local_24 = 0x13;
  local_20 = 0x12;
  sub_0801F508(&local_2c,&DAT_0600f000,0xa2);
  iVar3 = param_1 + 0x50;
  piVar4 = (int *)(param_1 + 0x88);
  local_54[0] = 1;
  sub_08002D5C(piVar4,iVar3,1,0);
  __call_via_r1(piVar4,*(int *)*piVar4 + *piVar4);
  local_2c = 5;
  local_28 = 0xe;
  local_24 = 8;
  local_20 = 0x12;
  sub_0801F508(&local_2c,&DAT_0600f000,0xb2);
  local_54[0] = 1;
  piVar4 = (int *)(param_1 + 0x9c);
  sub_08002D5C(piVar4,iVar3,2,1);
  __call_via_r1(piVar4,*(int *)*piVar4 + *piVar4);
  local_28 = 8;
  local_24 = 3;
  local_2c = 1;
  local_20 = 0xb;
  sub_0801F508(&local_2c,&DAT_0600f000,0xc2);
  iVar1 = sub_08010B9A(param_1);
  local_54[0] = (uint)(iVar1 != -1);
  piVar4 = (int *)(param_1 + 0xb0);
  sub_08002D5C(piVar4,iVar3,3,5);
  __call_via_r1(piVar4,*(int *)*piVar4 + *piVar4);
  local_2c = 0x1b;
  local_28 = 8;
  local_24 = 0x1d;
  local_20 = 0xb;
  sub_0801F508(&local_2c,&DAT_0600f000,0xd2);
  iVar1 = sub_08010B60(param_1);
  local_54[0] = (uint)(iVar1 != -1);
  piVar4 = (int *)(param_1 + 0xc4);
  sub_08002D5C(piVar4,iVar3,4,4);
  __call_via_r1(piVar4,*(int *)*piVar4 + *piVar4);
  REG_BLDCNT = 0x3e5f;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BG1CNT = 0x1d83;
  REG_BG2CNT = 0x1e83;
  REG_BG3CNT = 0x1f83;
  REG_DISPCNT = 0x1e40;
  REG_DMA3SAD = 0x81d4f50;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = 0x81da6c8;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_0801106A @ 0x0801106A */

void sub_0801106A(int *param_1)

{
  int iVar1;
  
  sub_08006FA4(&DAT_03001120);
  if ((char)param_1[0x12] != '\0') {
    iVar1 = *(int *)param_1[0x13];
    __call_via_r2((int *)param_1[0x13],0,*(int *)(iVar1 + 0x28) + iVar1);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0801109E @ 0x0801109E */

void sub_0801109E(void)

{
  sub_080069A4(&DAT_03001120);
  sub_08006AD8(&DAT_03001120);
  return;
}


/* sub_080110B0 @ 0x080110B0 */

void sub_080110B0(undefined4 param_1,int param_2)

{
  REG_BLDALPHA = (char)(param_2 >> 1);
  return;
}


/* sub_080110B8 @ 0x080110B8 */

undefined4 sub_080110B8(void)

{
  return 1;
}


/* sub_080110BC @ 0x080110BC */

void sub_080110BC(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08010B9A();
  if (iVar1 == -1) {
    sub_08002DC8(param_1 + 0xb0);
  }
  else {
    sub_08002DB6(param_1 + 0xb0);
  }
  iVar1 = sub_08010B60(param_1);
  if (iVar1 == -1) {
    sub_08002DC8(param_1 + 0xc4);
  }
  else {
    sub_08002DB6(param_1 + 0xc4);
  }
  return;
}


/* sub_0801110C @ 0x0801110C */

void sub_0801110C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0,param_4);
  iVar2 = **(int **)(param_1 + 0x40);
  __call_via_r2(*(int **)(param_1 + 0x40),0,*(int *)(iVar2 + 0x28) + iVar2);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) * 8 + param_1 + 0x10);
  *(int **)(param_1 + 0x40) = piVar1;
  __call_via_r2(piVar1,1,*(int *)(*piVar1 + 0x28) + *piVar1);
  sub_080184AE(*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x40) + 0x40);
  return;
}


/* sub_0801115E @ 0x0801115E */

void sub_0801115E(undefined4 param_1)

{
  sub_08006AA6(&DAT_03001120);
  sub_08000C18(param_1);
  return;
}


/* sub_08011172 @ 0x08011172 */

undefined4 sub_08011172(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x49;
  if (*(char *)(param_1 + 0x49) == '\0') {
    sub_08002E28(param_1 + 0x88,iVar4);
    sub_08002E28(param_1 + 0x9c,iVar4);
    sub_08002E28(param_1 + 0xb0,iVar4);
    sub_08002E28(param_1 + 0xc4,iVar4);
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x88,iVar4);
    if (iVar1 != 0) {
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x3c) * 8 + param_1 + 0xc);
      DAT_03000e90 = (undefined1)uVar3;
      iVar1 = *(int *)(param_1 + 0x4c);
      uVar2 = sub_08009324((&DAT_081d967d)
                           [(uint)(byte)(&DAT_03000ea4)[(uVar3 & 0xff) * 0x1c] * 0x14]);
      *(undefined4 *)(iVar1 + 0x48) = uVar2;
      sub_080086A2(*(undefined4 *)(param_1 + 0x4c));
      sub_08003ED4(&DAT_03000e90);
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    iVar1 = sub_08002DDA(param_1 + 0x9c,iVar4);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 5) = 2;
    }
    iVar1 = sub_08002DDA(param_1 + 0xb0,iVar4);
    if (iVar1 != 0) {
      uVar2 = sub_08010B9A(param_1);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      sub_0801110C(param_1);
      sub_080110BC(param_1);
    }
    iVar4 = sub_08002DDA(param_1 + 0xc4,iVar4);
    if (iVar4 != 0) {
      uVar2 = sub_08010B60(param_1);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      sub_0801110C(param_1);
      sub_080110BC(param_1);
    }
  }
  return 0;
}


/* sub_080112C0 @ 0x080112C0 */

undefined4 *
sub_080112C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802465C;
    uVar1 = sub_0801155E(0);
    param_1[1] = uVar1;
    sub_080068B8(&DAT_03001120,uVar1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17f0,0x40,0,param_4);
  }
  return param_1;
}


/* sub_08011304 @ 0x08011304 */

void sub_08011304(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0802465C;
  sub_080068CA(&DAT_03001120,param_1[1],param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08011328 @ 0x08011328 */

undefined4 sub_08011328(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 4);
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(*(int **)(param_1 + 4),iVar3 + iVar2,iVar3,param_4,param_4);
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    uVar1 = 3;
  }
  else if (((DAT_030022b0 & 1) == 0) && (-1 < (int)((uint)DAT_030022b0 << 0x1c))) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 4) + 0x48) == 0) {
    uVar1 = 1;
  }
  else {
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17f0,0x40,0);
    uVar1 = 2;
  }
  return uVar1;
}


/* sub_080113A0 @ 0x080113A0 */

void sub_080113A0(int param_1)

{
  undefined1 uVar1;
  int a0;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  sub_0801F394(&gUnknown_086FDF2C,*(undefined4 *)(param_1 + 0x34));
  a0 = param_1 + 0x10;
  uVar1 = 0x27;
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x48;
  *(undefined4 *)(param_1 + 0x18) = 0x11;
  sub_0801F636(a0,&gUnknown_080E2CF0);
  uVar1 = 0x27;
  if (*(int *)(param_1 + 0x48) != 1) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x48;
  *(undefined4 *)(param_1 + 0x18) = 0x1d;
  sub_0801F636(a0,"Switch Characters");
  local_1c = 8;
  local_18 = *(int *)(param_1 + 0x48) * 0xc + 0xb;
  sub_08021140(a0,&gUnknown_086D769C,&local_1c);
  local_1c = 0x80;
  sub_08021140(a0,&gUnknown_086D769C,&local_1c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x20;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_2c);
  local_2c = 0x20;
  local_28 = 0;
  local_24 = 0x40;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010400,(int)&local_2c);
  local_20 = 0x20;
  local_2c = 0x40;
  local_28 = 0;
  local_24 = 0x60;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010800,(int)&local_2c);
  local_2c = 0x60;
  local_28 = 0;
  local_24 = 0x80;
  local_20 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010c00,(int)&local_2c);
  local_20 = 0x20;
  local_2c = 0x80;
  local_28 = 0;
  local_24 = 0x90;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_2c);
  local_2c = 0;
  local_20 = 0x28;
  local_28 = 0x20;
  local_24 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011200,(int)&local_2c);
  local_24 = 0x40;
  local_20 = 0x28;
  local_2c = 0x20;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011300,(int)&local_2c);
  local_2c = 0x40;
  local_24 = 0x60;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011400,(int)&local_2c);
  local_2c = 0x60;
  local_24 = 0x80;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011500,(int)&local_2c);
  local_2c = 0x80;
  local_24 = 0x90;
  local_20 = 0x28;
  local_28 = 0x20;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011600,(int)&local_2c);
  return;
}


/* sub_0801155E @ 0x0801155E */

undefined4 * sub_0801155E(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x1680;
    uVar1 = sub_080067AC(&DAT_03001120,0x1680);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025314;
    sub_08020E5C(param_1 + 4,0x90,0x28);
    param_1[7] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0xc] = 0x8020ec3;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    sub_080113A0(param_1);
  }
  return param_1;
}


/* sub_080115BE @ 0x080115BE */

void sub_080115BE(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_030022b0;
  if ((((int)(uVar1 << 0x19) < 0) || ((int)(uVar1 << 0x18) < 0)) || ((int)(uVar1 << 0x1d) < 0)) {
    *(uint *)(param_1 + 0x48) = (uint)(*(int *)(param_1 + 0x48) == 0);
    sub_080113A0();
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
  }
  return;
}


/* sub_08011600 @ 0x08011600 */

undefined4 sub_08011600(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_2;
  *puVar1 = 0x80302070;
  uVar2 = puVar1[1];
  puVar1[1] = uVar2 & 0xfffff3ff;
  puVar1[1] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[2] = 0x80502070;
  uVar2 = puVar1[3];
  puVar1[3] = uVar2 & 0xfffff3ff;
  puVar1[3] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x20 & 0x3ff;
  puVar1[4] = 0x80702070;
  uVar2 = puVar1[5];
  puVar1[5] = uVar2 & 0xfffff3ff;
  puVar1[5] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x40 & 0x3ff;
  puVar1[6] = 0x80902070;
  uVar2 = puVar1[7];
  puVar1[7] = uVar2 & 0xfffff3ff;
  puVar1[7] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x60 & 0x3ff;
  puVar1[8] = 0x80b0a070;
  uVar2 = puVar1[9];
  puVar1[9] = uVar2 & 0xfffff3ff;
  puVar1[9] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x80 & 0x3ff;
  puVar1[10] = 0x40306090;
  uVar2 = puVar1[0xb];
  puVar1[0xb] = uVar2 & 0xfffff3ff;
  puVar1[0xb] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x90 & 0x3ff;
  puVar1[0xc] = 0x40506090;
  uVar2 = puVar1[0xd];
  puVar1[0xd] = uVar2 & 0xfffff3ff;
  puVar1[0xd] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0x98 & 0x3ff;
  puVar1[0xe] = 0x40706090;
  uVar2 = puVar1[0xf];
  puVar1[0xf] = uVar2 & 0xfffff3ff;
  puVar1[0xf] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0xa0 & 0x3ff;
  puVar1[0x10] = 0x40906090;
  uVar2 = puVar1[0x11];
  puVar1[0x11] = uVar2 & 0xfffff3ff;
  puVar1[0x11] = uVar2 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 0xa8 & 0x3ff;
  puVar1[0x12] = 0xb06090;
  uVar2 = puVar1[0x13];
  puVar1[0x13] = uVar2 & 0xfffff3ff;
  puVar1[0x13] = *(ushort *)(param_1 + 0xc) + 0xb0 & 0x3ff | uVar2 & 0xfffff000;
  *param_2 = puVar1 + 0x14;
  return 0;
}


/* sub_0801177C @ 0x0801177C */

undefined4 * sub_0801177C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = sub_0800D8AE();
  *param_1 = &_08025FE0;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(param_2 + 0x18) + -0xf;
  *(short *)((int)param_1 + 6) = (short)uVar2 + -7;
  *(short *)(param_1 + 2) = (short)uVar3;
  *(short *)((int)param_1 + 10) = (short)uVar4;
  *param_1 = &_08023F18;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  return param_1;
}


/* sub_080117C2 @ 0x080117C2 */

undefined4 sub_080117C2(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r1(*(int **)(param_1 + 0x10),*(int *)(iVar1 + 0x28) + iVar1);
  sub_0800BF6E(&DAT_03001fe0,param_1);
  return 1;
}


/* sub_080117E0 @ 0x080117E0 */

void sub_080117E0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_086ade3c + param_2 * 0x38);
  iVar1 = *param_3;
  param_1[1] = param_3[1] - *(int *)(&DAT_086ade40 + param_2 * 0x38);
  *param_1 = iVar1 - (iVar2 >> 1);
  return;
}


/* sub_080117EA @ 0x080117EA */

void sub_080117EA(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18);
  iVar1 = *param_3;
  param_1[1] = param_3[1] - *(int *)(param_2 + 0x1c);
  *param_1 = iVar1 - (iVar2 >> 1);
  return;
}


/* sub_08011802 @ 0x08011802 */

undefined4 * sub_08011802(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    iVar1 = param_2 * 0x38;
    iStack_1c = *param_3 - (*(int *)(&DAT_086ade3c + iVar1) >> 1);
    iStack_18 = param_3[1] - *(int *)(&DAT_086ade40 + iVar1);
    sub_0800FCCC(param_1,&DAT_086ade3c + iVar1,&iStack_1c);
    *param_1 = &_08024C90;
    param_1[0xc] = 0x2000;
    param_1[0x10] = param_2;
    param_1[0xd] = 0x800;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 2) = 0x28;
    if (((&gUnknown_086ADE24)[iVar1] == '\0') && ((&DAT_086ade26)[iVar1] == '\0')) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    param_1[0xf] = iVar1;
    if (iVar1 != 0) {
      uVar2 = sub_0801177C(0,param_1);
      iVar1 = DAT_03001fe0 * 4;
      DAT_03001fe0 = DAT_03001fe0 + 1;
      *(undefined4 *)(&DAT_03001fe4 + iVar1) = uVar2;
    }
  }
  return param_1;
}


/* sub_08011896 @ 0x08011896 */

undefined4 sub_08011896(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = *(int *)(param_1 + 0x34) + -0x80;
    *(int *)(param_1 + 0x34) = iVar1;
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x30) = -iVar1 >> 1;
      iVar1 = -*(int *)(param_1 + 0x34) >> 1;
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 < 0x80) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x38) = 1;
        *(undefined **)(param_1 + 0x14) = &UNK_086ade2c + *(int *)(param_1 + 0x40) * 0x38;
        sub_0800FC84(param_1);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030010b0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030010ac;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (*(int *)(param_1 + 0x30) >> 10);
  if ((((*(int *)(param_1 + 0x18) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x24))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0801193E @ 0x0801193E */

void sub_0801193E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  sub_080068CA(&DAT_03001120,param_1,&gUnknown_086ADE24,param_4,param_4);
  __call_via_r1(iVar1,*(undefined4 *)(&DAT_086ade58 + iVar1 * 0x38));
  return;
}


/* sub_08011960 @ 0x08011960 */

uint sub_08011960(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 3) {
    if ((((param_1[0xf] == 0) && (param_1[6] < param_3[2])) && (*param_3 < param_1[8])) &&
       ((param_1[7] < param_3[3] && (param_3[1] < param_1[9])))) {
      iVar2 = *(int *)(*param_1 + 0x28);
      __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_3[3],param_4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0x17) {
    uVar1 = (uint)((int *)param_1[0x10] == param_3);
  }
  else {
    uVar1 = sub_0800FE1C();
  }
  return uVar1;
}


/* sub_080119CC @ 0x080119CC */

void sub_080119CC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  DAT_03001fd4 = *(undefined4 *)(iVar1 + 0x1c);
  DAT_03001fd0 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x18) >> 1;
  sub_0800F162(*(undefined4 *)(param_1 + 8),&DAT_03001fd8);
  return;
}


/* sub_080119F4 @ 0x080119F4 */

void sub_080119F4(int param_1)

{
  undefined4 uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_08007974(&local_1c);
  sub_0800700E(&DAT_03001120,0x400);
  local_24 = (local_1c + local_14 >> 1) + *(int *)(param_1 + 8);
  local_20 = (local_18 + local_10 >> 1) + *(int *)(param_1 + 0xc);
  uVar1 = sub_0800FA1C(0,&local_24,0x27);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_08011A52 @ 0x08011A52 */

void sub_08011A52(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  sub_0800700E(&DAT_03001120,0x400,param_3,param_4,param_4);
  uVar1 = sub_0800FA1C(0,param_1 + 8,0x27);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_08011A7C @ 0x08011A7C */

void sub_08011A7C(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802459C;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,puVar1);
  return;
}


/* sub_08011AA0 @ 0x08011AA0 */

void sub_08011AA0(int param_1,int *param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_1 + 0xc);
  local_14 = (int *)0x0;
  local_18 = &_08024A64;
  sub_0800DF98(&local_18,param_2);
  __call_via_r2(param_2,5,*(int *)(*param_2 + 0x28) + *param_2);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
  }
  return;
}


/* sub_08011AE2 @ 0x08011AE2 */

void sub_08011AE2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
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
    sub_08007A26(&local_1c);
    sub_080079B8(&local_34,*(undefined4 *)(param_1 + 0xc));
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
    sub_0800700E(&DAT_03001120,0x100);
    uVar3 = sub_08011BC4(0,&local_1c,&local_3c,*(undefined1 *)(param_2 + 0x10),
                         *(undefined4 *)(param_1 + 0xc));
    sub_080068B8(&DAT_03001120,uVar3);
  }
  return;
}


/* sub_08011BA8 @ 0x08011BA8 */

bool sub_08011BA8(int param_1)

{
  return *(int *)(param_1 + 8) == 0;
}


/* sub_08011BC4 @ 0x08011BC4 */

undefined4 *
sub_08011BC4(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,0);
    *param_1 = &_080259C4;
    uVar1 = *param_3;
    param_1[0x12] = param_3[1];
    param_1[0x11] = uVar1;
    param_1[0x10] = param_5;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x15] = 0;
    param_1[0x13] = &gUnknown_0840E47C + param_4 * 0x30;
    param_1[0x14] = 0;
    param_1[6] = &gUnknown_0840E47C + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4(param_1);
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
  }
  return param_1;
}


/* sub_08011C50 @ 0x08011C50 */

void sub_08011C50(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0x10;
  *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
  return;
}


/* sub_08011C5A @ 0x08011C5A */

void sub_08011C5A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x54) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x54) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x4c) + iVar2 * 0xc;
    sub_08013BF4();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
    }
  }
  return;
}


/* sub_08011CA8 @ 0x08011CA8 */

undefined4 sub_08011CA8(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x11) {
    if ((((*(int *)(param_1 + 0x50) == 0) && (*param_3 == *(int *)(param_1 + 0x40))) &&
        (param_3[1] < *(int *)(param_1 + 0x30))) &&
       (((*(int *)(param_1 + 0x28) < param_3[3] && (param_3[2] < *(int *)(param_1 + 0x34))) &&
        (*(int *)(param_1 + 0x2c) < param_3[4])))) {
      *(undefined4 *)(param_1 + 0x50) = 0x10;
      *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08013D68();
  }
  return uVar1;
}


/* sub_08011D0C @ 0x08011D0C */

bool sub_08011D0C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 auStack_18 [16];
  
  local_1c = param_2;
  sub_080079B8(auStack_18);
  iVar1 = sub_08006E0A(&DAT_03001120,0x11,&local_1c);
  return iVar1 != 0;
}


/* sub_08011D38 @ 0x08011D38 */

void sub_08011D38(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xdc;
  return;
}


/* sub_08011D4A @ 0x08011D4A */

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


/* sub_08011D94 @ 0x08011D94 */

void sub_08011D94(undefined4 param_1,undefined4 param_2)

{
  sub_08007688(param_2);
  return;
}


/* sub_08011DAC @ 0x08011DAC */

undefined4 sub_08011DAC(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  
  iVar1 = sub_0802141C(0x40);
  if (iVar1 < 4) {
    *(char *)(param_2 + 0x10) = (char)iVar1;
  }
  iVar1 = sub_0802141C(3);
  local_14 = *(int *)(param_2 + 0x158) +
             *(int *)(&gUnknown_086D7E6C + iVar1 * 8 + (uint)*(byte *)(param_2 + 0x10) * 0x18);
  local_10 = *(int *)(param_2 + 0x15c) +
             *(int *)((int)(&gUnknown_086D7E6C + iVar1 * 8 + (uint)*(byte *)(param_2 + 0x10) * 0x18)
                     + 4);
  iVar1 = sub_0800638C(&DAT_03001090,&local_14,param_2 + 0x154);
  if (iVar1 == 0) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) ^ 1;
  }
  else {
    *(int *)(param_2 + 0x158) = local_14;
    *(int *)(param_2 + 0x15c) = local_10;
  }
  return 0;
}


/* sub_08011E1C @ 0x08011E1C */

void sub_08011E1C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802488C;
  }
  return;
}


/* sub_08011E44 @ 0x08011E44 */

void sub_08011E44(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  sub_0800791A(&local_14);
  local_14 = *(int *)(param_1 + 8) - local_14;
  local_10 = *(int *)(param_1 + 0xc) - local_10;
  iVar1 = local_14;
  if (local_14 < 0) {
    iVar1 = -local_14;
  }
  iVar2 = local_10;
  if (local_10 < 0) {
    iVar2 = -local_10;
  }
  if (iVar2 < iVar1) {
    if (local_14 < 1) {
      *(undefined1 *)(param_2 + 4) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 4) = 3;
    }
  }
  else if (local_10 < 1) {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  __call_via_r2(param_2,5,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}


/* sub_08011EA6 @ 0x08011EA6 */

void sub_08011EA6(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0x10)) {
    sub_08007A26(&local_1c);
    local_24 = *(int *)(param_1 + 8) - local_1c;
    local_20 = *(int *)(param_1 + 0xc) - local_18;
    local_34 = local_24;
    if (local_24 < 0) {
      local_34 = -local_24;
    }
    local_30 = local_20;
    if (local_20 < 0) {
      local_30 = -local_20;
    }
    local_2c = local_34;
    local_28 = local_30;
    piVar2 = &local_28;
    if (local_30 < local_34) {
      piVar2 = &local_2c;
    }
    iVar1 = *piVar2;
    iVar4 = iVar1 * 0x100;
    local_34 = __16__rt_sdiv(iVar4,local_24 * *(int *)(param_1 + 0x10));
    local_30 = __16__rt_sdiv(iVar4,local_20 * *(int *)(param_1 + 0x10));
    uVar3 = __16__rt_sdiv(*(int *)(param_1 + 0x10),iVar1 * 0x10000 + *(int *)(param_1 + 0x10) + -1);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    sub_0800700E(&DAT_03001120,0x100);
    uVar3 = sub_08011BC4(0,&local_1c,&local_34,*(undefined1 *)(param_2 + 0x10),0);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    sub_080068B8(&DAT_03001120,uVar3);
  }
  return;
}


/* sub_08011F5A @ 0x08011F5A */

bool sub_08011F5A(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    sub_08011C50(*(undefined4 *)(param_1 + 0x1c));
  }
  return iVar1 == 0;
}


/* sub_08011F78 @ 0x08011F78 */

void sub_08011F78(undefined4 param_1,int param_2)

{
  sub_0800E130();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xec;
  return;
}


/* sub_08011F88 @ 0x08011F88 */

void sub_08011F88(void)

{
  byte bVar1;
  undefined4 *puVar2;
  
  bVar1 = REG_VCOUNT;
  puVar2 = (undefined4 *)(DAT_030010fc + (bVar1 + 1) * 0x10);
  Ram04000020 = *puVar2;
  Ram04000024 = puVar2[1];
  DAT_04000028 = puVar2[2];
  DAT_0400002c = puVar2[3];
  return;
}


/* sub_08011FA6 @ 0x08011FA6 */

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


/* sub_08012030 @ 0x08012030 */

void sub_08012030(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = &_08023E7C;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xfffd;
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}


/* sub_0801204E @ 0x0801204E */

void sub_0801204E(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c [14];
  
  uVar7 = *(int *)(param_2 + 4) >> 10 & 0xffffff00;
  local_58 = (int)(*(int *)(param_2 + 0xc) - uVar7) >> 4;
  uVar4 = *(int *)(param_2 + 8) >> 10 & 0xffffff00;
  local_54 = (int)(*(int *)(param_2 + 0x10) - uVar4) >> 3;
  local_50 = (int)((*(int *)(param_2 + 0x14) - uVar7) + 0xf) >> 4;
  local_4c[0] = (int)((*(int *)(param_2 + 0x18) - uVar4) + 7) >> 3;
  iVar6 = (int)(uVar7 << 0x17) >> 0x1f;
  uVar7 = -iVar6;
  iVar11 = (int)(uVar4 << 0x17) >> 0x1f;
  uVar4 = -iVar11;
  local_5c = 0;
  puVar1 = &local_58;
  if ((int)local_58 < 1) {
    puVar1 = &local_5c;
  }
  uVar12 = *puVar1;
  local_5c = 0;
  puVar1 = &local_54;
  if ((int)local_54 < 1) {
    puVar1 = &local_5c;
  }
  uVar9 = *puVar1;
  uStack_60 = 0x10;
  puVar1 = &local_50;
  if (0xf < (int)local_50) {
    puVar1 = &uStack_60;
  }
  local_5c = *puVar1;
  uStack_60 = 0x20;
  puVar1 = local_4c;
  if (0x1f < (int)local_4c[0]) {
    puVar1 = &uStack_60;
  }
  uVar5 = *puVar1;
  if ((int)local_54 < 0) {
    if ((int)local_58 < 0) {
      uVar10 = (local_58 << 0x1c) >> 0x1b;
      uVar2 = local_54 & 0x1f;
      if (uVar2 < 0x20) {
        do {
          REG_DMA3SAD = *(int *)(param_1 + 8) + uVar2 * 0x20 + uVar10;
          REG_DMA3DAD = &DAT_0600f000 +
                        uVar10 + uVar2 * 0x40 + (uVar4 ^ 1) * 0x800 + (uVar7 ^ 1) * 0x20;
          Ram040000dc = (short)((0x20 - uVar10) * 0x8000 >> 0x10);
          DAT_040000de = 0x8000;
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 0x20);
      }
    }
    iVar3 = (uVar4 ^ 1) * 0x800;
    local_54 = local_54 & 0x1f;
    uVar2 = local_54;
    if (local_54 < 0x20) {
      do {
        REG_DMA3SAD = *(int *)(param_1 + 0xc) + uVar2 * 0x20 + uVar12 * 2;
        REG_DMA3DAD = &DAT_0600f000 + uVar12 * 2 + uVar2 * 0x40 + iVar3 + iVar6 * -0x20;
        Ram040000dc = (short)local_5c - (short)uVar12;
        DAT_040000de = 0x8000;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0x20);
    }
    if (0x10 < (int)local_50) {
      if (local_54 < 0x20) {
        do {
          REG_DMA3SAD = *(int *)(param_1 + 0x10) + local_54 * 0x20;
          REG_DMA3DAD = &DAT_0600f000 + local_54 * 0x40 + iVar3 + (uVar7 ^ 1) * 0x20;
          Ram040000dc = (short)((local_50 * 2 + -0x20) * 0x8000 >> 0x10);
          DAT_040000de = 0x8000;
          local_54 = local_54 + 1;
        } while ((int)local_54 < 0x20);
      }
    }
  }
  if ((int)local_58 < 0) {
    uVar2 = (local_58 << 0x1c) >> 0x1b;
    if ((int)uVar9 < (int)uVar5) {
      uVar10 = uVar9;
      do {
        REG_DMA3SAD = *(int *)(param_1 + 0x14) + uVar10 * 0x20 + uVar2;
        REG_DMA3DAD = &DAT_0600f000 + uVar2 + uVar10 * 0x40 + iVar11 * -0x800 + (uVar7 ^ 1) * 0x20;
        Ram040000dc = (short)((0x20 - uVar2) * 0x8000 >> 0x10);
        DAT_040000de = 0x8000;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar5);
    }
  }
  iVar3 = uVar12 * 2;
  for (uVar2 = uVar9; (int)uVar2 < (int)uVar5; uVar2 = uVar2 + 1) {
    REG_DMA3SAD = *(int *)(param_1 + 0x18) + uVar2 * 0x20 + iVar3;
    REG_DMA3DAD = &DAT_0600f000 + iVar3 + uVar2 * 0x40 + iVar11 * -0x800 + iVar6 * -0x20;
    Ram040000dc = (short)(local_5c - uVar12);
    DAT_040000de = 0x8000;
  }
  if (0x10 < (int)local_50) {
    if ((int)uVar9 < (int)uVar5) {
      do {
        REG_DMA3SAD = *(int *)(param_1 + 0x1c) + uVar9 * 0x20;
        REG_DMA3DAD = &DAT_0600f000 + uVar9 * 0x40 + iVar11 * -0x800 + (uVar7 ^ 1) * 0x20;
        Ram040000dc = (short)((local_50 * 2 + -0x20) * 0x8000 >> 0x10);
        DAT_040000de = 0x8000;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar5);
    }
  }
  if (0x20 < (int)local_4c[0]) {
    local_4c[0] = local_4c[0] & 0x1f;
    if ((int)local_58 < 0) {
      uVar9 = (local_58 << 0x1c) >> 0x1b;
      iVar11 = 0;
      if (local_4c[0] != 0) {
        do {
          REG_DMA3SAD = *(int *)(param_1 + 0x20) + iVar11 * 0x20 + uVar9;
          REG_DMA3DAD = &DAT_0600f000 +
                        uVar9 + iVar11 * 0x40 + (uVar4 ^ 1) * 0x800 + (uVar7 ^ 1) * 0x20;
          Ram040000dc = (short)((0x20 - uVar9) * 0x8000 >> 0x10);
          DAT_040000de = 0x8000;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_4c[0]);
      }
    }
    iVar11 = (uVar4 ^ 1) * 0x800;
    iVar8 = 0;
    if (local_4c[0] != 0) {
      do {
        REG_DMA3SAD = *(int *)(param_1 + 0x24) + iVar8 * 0x20 + iVar3;
        REG_DMA3DAD = &DAT_0600f000 + iVar3 + iVar8 * 0x40 + iVar11 + iVar6 * -0x20;
        Ram040000dc = (short)((local_5c - uVar12) * 0x10000 >> 0x10);
        DAT_040000de = 0x8000;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_4c[0]);
    }
    if (0x10 < (int)local_50) {
      iVar6 = 0;
      if (local_4c[0] != 0) {
        do {
          REG_DMA3SAD = *(int *)(param_1 + 0x28) + iVar6 * 0x20;
          REG_DMA3DAD = &DAT_0600f000 + iVar6 * 0x40 + (uVar7 ^ 1) * 0x20 + iVar11;
          Ram040000dc = (short)((local_50 * 2 + -0x20) * 0x8000 >> 0x10);
          DAT_040000de = 0x8000;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_4c[0]);
      }
    }
  }
  return;
}


/* sub_080123E0 @ 0x080123E0 */

void sub_080123E0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_444 [1024];
  int aiStack_44 [9];
  int iStack_20;
  int iStack_1c;
  int *local_18;
  
  piVar9 = aiStack_44;
  iVar7 = -1;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    iVar5 = local_18[1] + iVar7;
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + uVar1;
    }
    else if ((int)uVar1 <= iVar5) {
      iVar5 = iVar5 - uVar1;
    }
    iVar3 = -1;
    do {
      iVar2 = *local_18 + iVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
      }
      else {
        uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
        if ((int)uVar1 <= iVar2) {
          iVar2 = iVar2 - uVar1;
        }
      }
      iVar3 = iVar3 + 1;
      *piVar9 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4) * iVar5 + iVar2;
      piVar9 = piVar9 + 1;
    } while (iVar3 < 2);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  uVar8 = 0;
  uVar6 = 0;
  uVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + aiStack_44[uVar1] * 4 + 8) == 0) {
      *(undefined **)(uVar1 * 4 + param_1 + 8) = &gUnknown_086D7EDC;
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    }
    else {
      uVar4 = 0;
      do {
        if (*(int *)(uVar4 * 4 + param_1 + 0x2c) == aiStack_44[uVar1]) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          uVar8 = uVar8 | 1 << (uVar1 & 0xff);
          *(uint *)(uVar1 * 4 + param_1 + 8) = uVar4 * 0x400 + param_1 + 0x58;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 9);
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) & uVar8) == 0) {
      uVar4 = 0;
      do {
        if ((1 << (uVar4 & 0xff) & uVar6) == 0) {
          uVar6 = uVar6 | 1 << (uVar4 & 0xff);
          iVar7 = aiStack_44[uVar1];
          *(int *)(uVar4 * 4 + param_1 + 0x2c) = iVar7;
          iStack_20 = uVar4 * 0x400 + param_1 + 0x58;
          *(int *)(uVar1 * 4 + param_1 + 8) = iStack_20;
          sub_0801F394(*(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4 + 8),auStack_444);
          REG_DMA3SAD = auStack_444;
          REG_DMA3DAD = iStack_20;
          Ram040000dc = 0x100;
          DAT_040000de = 0x8400;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 9);
    }
    uVar1 = uVar1 + 1;
    if (8 < (int)uVar1) {
      iVar7 = *local_18;
      *(int *)(param_1 + 0x54) = local_18[1];
      *(int *)(param_1 + 0x50) = iVar7;
      return;
    }
  } while( true );
}


/* sub_08012520 @ 0x08012520 */

void sub_08012520(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [16];
  int local_3c;
  int local_38;
  undefined1 auStack_34 [24];
  uint local_1c;
  uint local_18;
  
  local_1c = *(uint *)(param_2 + 4) & 0x7ffff;
  local_18 = *(uint *)(param_2 + 8) & 0x7ffff;
  sub_080220CC(auStack_34,&local_1c,8,0x8026689);
  sub_080215E8(auStack_34,param_2);
  sub_080220CC(auStack_4c,auStack_34,8,0x8026689);
  sub_080215A8(auStack_4c);
  local_3c = local_3c - local_1c;
  local_38 = local_38 - local_18;
  sub_0802166E(local_64,auStack_4c,auStack_34);
  sub_080220F0(auStack_4c,local_64,auStack_4c,8,0x80265dd);
  local_54 = 0x78;
  local_50 = 0x8c;
  sub_08021642(auStack_4c,&local_54);
  sub_08021874(&local_7c,auStack_4c);
  local_6c = local_7c * 0x78 + iStack_74 * 0x8c + local_6c;
  local_68 = iStack_78 * 0x78 + local_70 * 0x8c + local_68;
  iVar1 = 0x38;
  do {
    piVar2 = (int *)(DAT_030010fc + iVar1 * 0x10);
    iVar5 = (&gUnknown_086D82DC)[iVar1 + -0x38];
    iVar4 = iVar5 * local_7c >> 0xe;
    iVar6 = (&gUnknown_086D855C)[iVar1 + -0x38];
    iVar3 = iVar5 * iStack_78 >> 0xe;
    piVar2[1] = iVar3;
    *piVar2 = iVar4;
    piVar2[2] = (iVar5 * ((iVar6 * (iStack_74 * 0xf8 + local_6c * 3) >> 10) +
                         local_6c + iStack_74 * -200) >> 0xe) + iVar4 * -0x78;
    iVar1 = iVar1 + 1;
    piVar2[3] = (iVar5 * ((iVar6 * (local_70 * 0xf8 + local_68 * 3) >> 10) +
                         local_68 + local_70 * -200) >> 0xe) + iVar3 * -0x78;
  } while (iVar1 < 0xa0);
  return;
}


/* sub_08012694 @ 0x08012694 */

void sub_08012694(undefined4 param_1,int param_2)

{
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_2 + 4) >> 0x12;
  local_10 = *(int *)(param_2 + 8) >> 0x12;
  sub_080123E0(param_1,&local_14);
  sub_0801204E(param_1,param_2);
  sub_08012520(param_1,param_2);
  return;
}


/* sub_080126C4 @ 0x080126C4 */

void sub_080126C4(int param_1,int param_2)

{
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_2 + 4) >> 0x12;
  local_10 = *(int *)(param_2 + 8) >> 0x12;
  if ((local_14 != *(int *)(param_1 + 0x50)) || (local_10 != *(int *)(param_1 + 0x54))) {
    sub_080123E0(param_1,&local_14);
  }
  sub_0801204E(param_1,param_2);
  sub_08012520(param_1,param_2);
  return;
}


/* sub_08012704 @ 0x08012704 */

void sub_08012704(void)

{
  sub_08011FA6(0);
  return;
}


/* sub_0801270E @ 0x0801270E */

undefined4 sub_0801270E(undefined4 param_1)

{
  return param_1;
}


/* sub_08012710 @ 0x08012710 */

void sub_08012710(void)

{
  return;
}


/* sub_08012712 @ 0x08012712 */

void sub_08012712(void)

{
  return;
}


/* sub_08012714 @ 0x08012714 */

void sub_08012714(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080238F0;
  }
  return;
}


/* sub_0801272C @ 0x0801272C */

undefined4 * sub_0801272C(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1008), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    iVar2 = 0;
    *param_1 = &_08023A00;
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_3 + 4);
      if (iVar1 == 0) {
        DAT_03003914 = 0;
        REG_DMA3SAD = 0x3003914;
        REG_DMA3DAD = param_1 + iVar2 * 0x200 + 2;
        Ram040000dc = 0x200;
        DAT_040000de = 0x8500;
      }
      else {
        sub_0801F394(iVar1,param_1 + iVar2 * 0x200 + 2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return param_1;
}


/* sub_0801278A @ 0x0801278A */

void sub_0801278A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (param_2 << 0x17) >> 0x1f;
  uVar3 = param_2 >> 3 & 0x1e;
  iVar2 = 0;
  do {
    REG_DMA3SAD = iVar2 * 0x40 + iVar1 * -0x800 + param_1 + uVar3 * 2 + 8;
    REG_DMA3DAD = &DAT_0600e000 + uVar3 * 2 + iVar2 * 0x40 + (uint)*(byte *)(param_1 + 4) * 0x800;
    Ram040000dc = (short)((0x20 - uVar3) * 0x8000 >> 0x10);
    DAT_040000de = 0x8400;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      REG_DMA3SAD = (-iVar1 ^ 1U) * 0x800 + param_1 + iVar2 * 0x40 + 8;
      REG_DMA3DAD = &DAT_0600e000 + iVar2 * 0x40 + (uint)*(byte *)(param_1 + 4) * 0x800;
      Ram040000dc = (short)((uVar3 << 0xf) >> 0x10);
      DAT_040000de = 0x8400;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
  }
  return;
}


/* sub_08012804 @ 0x08012804 */

void sub_08012804(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*param_2 << 3) >> 10;
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)iVar2;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = 0;
  sub_0801278A(param_1,iVar2);
  return;
}


/* sub_08012832 @ 0x08012832 */

void sub_08012832(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_08012840 @ 0x08012840 */

undefined4 * sub_08012840(undefined1 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x1008);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_1;
    iVar3 = 0;
    *puVar1 = &_08023A00;
    do {
      iVar2 = *(int *)(iVar3 * 4 + param_2 + 4);
      if (iVar2 == 0) {
        DAT_03003914 = 0;
        REG_DMA3SAD = 0x3003914;
        REG_DMA3DAD = puVar1 + iVar3 * 0x200 + 2;
        Ram040000dc = 0x200;
        DAT_040000de = 0x8500;
      }
      else {
        sub_0801F394(iVar2,puVar1 + iVar3 * 0x200 + 2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return puVar1;
}


