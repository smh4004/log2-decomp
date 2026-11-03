/* Ghidra reference decompilation of code_080213FC (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080213FC @ 0x080213FC */

int sub_080213FC(void)

{
  DAT_03003890 = DAT_03003890 + 0x2cbbc71 ^ DAT_03003894;
  DAT_03003894 = (DAT_03003894 >> 0x1d | DAT_03003894 << 3) + 0x632d80f ^ DAT_03003890;
  return DAT_03003890 - DAT_03003894;
}


/* sub_0802141C @ 0x0802141C */

uint sub_0802141C(int param_1)

{
  uint uVar1;
  
  uVar1 = sub_080213FC();
  return param_1 * (uVar1 & 0xffff) >> 0x10;
}


/* sub_0802142E @ 0x0802142E */

undefined4 sub_0802142E(uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_080213FC();
  if ((uVar1 & 0xffff) < param_1) {
    return 1;
  }
  return 0;
}


/* sub_08021454 @ 0x08021454 */

void sub_08021454(uint *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = sub_080218E0(0x40);
  *param_1 = (uint)(iVar2 == 0);
  if ((iVar2 == 0) != 0) {
    sub_08021948(3,&DAT_03000e54);
    DAT_03000e54 = DAT_03000e54 | 1;
    iVar2 = sub_0801F08C(0x2000);
    DAT_03003898 = iVar2;
    sub_08020BBA();
    uVar1 = REG_IE;
    REG_IE = 0x2040;
    iVar3 = 0;
    do {
      sub_08021ACC(iVar3 >> 3 & 0xffff,iVar2 + iVar3);
      iVar3 = iVar3 + 8;
    } while (iVar3 < 0x2000);
    REG_IE = uVar1;
    sub_08020BD0();
  }
  return;
}


/* sub_080214C4 @ 0x080214C4 */

void sub_080214C4(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    REG_DMA3SAD = param_3;
    REG_DMA3DAD = DAT_03003898 + param_2;
    Ram040000dc = (short)(param_4 >> 2);
    DAT_040000de = 0x8400;
    uVar2 = param_3;
    sub_08020BBA();
    iVar3 = 0;
    uVar1 = REG_IE;
    REG_IE = 0x2040;
    if (0 < (int)param_4) {
      do {
        sub_08021CB0(param_2 + iVar3 >> 3 & 0xffff,(ushort *)(param_3 + iVar3),uVar2);
        iVar3 = iVar3 + 8;
      } while (iVar3 < (int)param_4);
    }
    REG_IE = uVar1;
    sub_08020BD0();
  }
  return;
}


/* sub_08021526 @ 0x08021526 */

void sub_08021526(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  REG_DMA3SAD = DAT_03003898 + param_3;
  REG_DMA3DAD = param_2;
  Ram040000dc = (short)(param_4 >> 2);
  DAT_040000de = 0x8400;
  return;
}


/* sub_0802153E @ 0x0802153E */

uint sub_0802153E(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_20;
  byte *pbStack_1c;
  int local_18;
  int *piVar3;
  
  local_18 = param_2;
  pbStack_1c = param_1;
  uVar5 = 0;
  uVar4 = 1;
  local_20 = 0x15b0;
  if (0 < param_2) {
    do {
      piVar3 = &local_20;
      if (local_18 < local_20) {
        piVar3 = &local_18;
      }
      iVar2 = *piVar3;
      iVar6 = local_18 - iVar2;
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = bVar1 + uVar4;
        uVar5 = uVar5 + uVar4;
      }
      local_18 = iVar6;
      uVar4 = sub_08027F1C(uVar4);
      uVar5 = sub_08027F1C(uVar5);
    } while (0 < iVar6);
  }
  return uVar5 << 0x10 | uVar4;
}


/* sub_080215A8 @ 0x080215A8 */

void sub_080215A8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x400;
  param_1[2] = 0;
  param_1[3] = 0x400;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_080215BE @ 0x080215BE */

void sub_080215BE(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&gUnknown_087FD104 + ((uint)(param_2 << 0x18) >> 0x16));
  iVar2 = *(int *)(&gUnknown_087FD104 + ((uint)((param_2 + 0x40) * 0x1000000) >> 0x16));
  param_1[2] = iVar1 >> 6;
  *param_1 = iVar2 >> 6;
  param_1[1] = -(iVar1 >> 6);
  param_1[3] = iVar2 >> 6;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_080215E2 @ 0x080215E2 */

void sub_080215E2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  return;
}


/* sub_080215E8 @ 0x080215E8 */

void sub_080215E8(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*param_2 >> 10;
  iVar3 = *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x16));
  uVar2 = *param_2 & 0x3ff;
  iVar4 = *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 0x41) * 0x1000000) >> 0x16));
  iVar1 = (int)((0x400 - uVar2) * *(int *)(&gUnknown_087FD104 + ((uint)(iVar1 << 0x18) >> 0x16)) +
               uVar2 * *(int *)(&gUnknown_087FD104 + ((uint)((iVar1 + 1) * 0x1000000) >> 0x16))) >>
          0x10;
  param_1[2] = iVar1;
  param_1[1] = -iVar1;
  iVar1 = (int)((0x400 - uVar2) * iVar3 + uVar2 * iVar4) >> 0x10;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_08021642 @ 0x08021642 */

void sub_08021642(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * 0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * 0x400;
  return;
}


/* sub_08021658 @ 0x08021658 */

void sub_08021658(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * -0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * -0x400;
  return;
}


/* sub_0802166E @ 0x0802166E */

uint ** sub_0802166E(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  sub_080220CC((int)&local_44,(int)&local_2c,8,0x8026689);
  lVar3 = sub_08021DA0(*param_3,*param_2);
  lVar4 = sub_08021DA0(param_3[2],param_2[1]);
  local_44 = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  local_24 = param_3 + 1;
  lVar3 = sub_08021DA0(param_3[1],*param_2);
  local_28 = param_3 + 3;
  lVar4 = sub_08021DA0(param_3[3],param_2[1]);
  local_40 = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*param_3,param_2[2]);
  local_2c = param_2 + 3;
  lVar4 = sub_08021DA0(param_3[2],param_2[3]);
  local_3c = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*local_24,param_2[2]);
  lVar4 = sub_08021DA0(*local_28,*local_2c);
  local_38 = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*param_3,param_2[4]);
  lVar4 = sub_08021DA0(param_3[2],param_2[5]);
  local_34 = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  local_34 = local_34 + param_3[4];
  lVar3 = sub_08021DA0(*local_24,param_2[4]);
  lVar4 = sub_08021DA0(*local_28,param_2[5]);
  iVar1 = sub_08021DB4((uint)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iVar2 = param_3[5];
  *local_20 = local_44;
  local_20[1] = local_40;
  local_20[2] = local_3c;
  local_20[3] = local_38;
  local_20[4] = local_34;
  local_20[5] = iVar1 + iVar2;
  return &local_2c;
}


/* sub_08021792 @ 0x08021792 */

void sub_08021792(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 * *param_1 >> 10;
  param_1[1] = iVar1 * param_1[1] >> 10;
  iVar1 = *param_2;
  param_1[2] = iVar1 * param_1[2] >> 10;
  param_1[3] = iVar1 * param_1[3] >> 10;
  iVar1 = *param_2;
  param_1[4] = iVar1 * param_1[4] >> 10;
  param_1[5] = iVar1 * param_1[5] >> 10;
  return;
}


/* sub_080217CA @ 0x080217CA */

int ** sub_080217CA(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_34;
  int local_30;
  int local_2c;
  int *local_1c;
  int *piStack_18;
  
  local_1c = param_1;
  piStack_18 = param_2;
  sub_080220CC((int)&local_34,(int)&local_1c,8,0x8026689);
  uVar6 = (param_2[3] * *param_2 >> 10) - (param_2[2] * param_2[1] >> 10);
  local_34 = __16__rt_sdiv(uVar6,param_2[3] << 10);
  local_30 = __16__rt_sdiv(uVar6,param_2[1] * -0x400);
  local_2c = __16__rt_sdiv(uVar6,param_2[2] * -0x400);
  iVar1 = __16__rt_sdiv(uVar6,*param_2 << 10);
  iVar3 = param_2[4];
  iVar5 = param_2[5];
  iVar2 = param_2[4];
  iVar4 = param_2[5];
  *local_1c = local_34;
  local_1c[1] = local_30;
  local_1c[2] = local_2c;
  local_1c[3] = iVar1;
  local_1c[4] = (local_34 * -iVar3 >> 10) - (local_2c * iVar5 >> 10);
  local_1c[5] = (local_30 * -iVar2 >> 10) - (iVar1 * iVar4 >> 10);
  return &local_1c;
}


/* sub_08021874 @ 0x08021874 */

void sub_08021874(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_28 [24];
  
  sub_080220CC((int)local_28,(int)&stack0xfffffff0,8,0x8026689);
  iVar4 = param_2[3];
  iVar5 = param_2[1];
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar6 = param_2[4];
  iVar8 = param_2[5];
  iVar3 = param_2[4];
  iVar7 = param_2[5];
  *param_1 = iVar4;
  param_1[1] = -iVar5;
  param_1[2] = -iVar1;
  param_1[3] = iVar2;
  param_1[4] = (iVar4 * -iVar6 >> 10) - (-iVar1 * iVar8 >> 10);
  param_1[5] = (-iVar5 * -iVar3 >> 10) - (iVar2 * iVar7 >> 10);
  return;
}


/* sub_080218E0 @ 0x080218E0 */

undefined4 sub_080218E0(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 4) {
    DAT_03003918 = &gUnknown_087FD644;
  }
  else if (param_1 == 0x40) {
    DAT_03003918 = &gUnknown_087FD650;
  }
  else {
    DAT_03003918 = &gUnknown_087FD644;
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08021924 @ 0x08021924 */

void sub_08021924(void)

{
  if ((DAT_030038a2 != 0) && (DAT_030038a2 = DAT_030038a2 + -1, DAT_030038a2 == 0)) {
    DAT_030038a4 = 1;
  }
  return;
}


/* sub_08021948 @ 0x08021948 */

bool sub_08021948(byte param_1,undefined4 *param_2)

{
  if (3 >= param_1) {
    DAT_030038a8 = &REG_TM0CNT + (uint)param_1 * 2;
    DAT_030038a0 = param_1;
    *param_2 = sub_08021924;
  }
  return 3 < param_1;
}


/* sub_08021980 @ 0x08021980 */

undefined4 sub_08021980(undefined2 *param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  DAT_030038ac = REG_IME;
  REG_IME = 0;
  DAT_030038a8[1] = 0;
  REG_IF = (short)(8 << DAT_030038a0);
  uVar1 = REG_IE;
  REG_IE = uVar1 | (ushort)(8 << DAT_030038a0);
  DAT_030038a4 = 0;
  DAT_030038a2 = *param_1;
  *DAT_030038a8 = param_1[1];
  DAT_030038a8[1] = param_1[2];
  REG_IME = 1;
  return in_lr;
}


/* sub_08021A08 @ 0x08021A08 */

void sub_08021A08(void)

{
  ushort uVar1;
  
  REG_IME = 0;
  *DAT_030038a8 = 0;
  DAT_030038a8[1] = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & ~(ushort)(8 << DAT_030038a0);
  REG_IME = DAT_030038ac;
  return;
}


/* sub_08021A4C @ 0x08021A4C */

undefined4 sub_08021A4C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_WAITCNT._0_2_;
  REG_WAITCNT._0_2_ = uVar1 & 0xf8ff | *(ushort *)(DAT_03003918 + 6);
  REG_DMA3SAD = param_1;
  REG_DMA3DAD = param_2;
  Ram040000dc = param_3 & 0xffff | 0x80000000;
  uVar1 = DAT_040000de;
  while ((uVar1 & 0x8000) != 0) {
    uVar1 = DAT_040000de;
  }
  REG_IME = uVar2;
  return in_lr;
}


/* sub_08021ACC @ 0x08021ACC */

void sub_08021ACC(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_98 [2];
  ushort auStack_96 [67];
  
  uVar5 = param_1 & 0xffff;
  if (uVar5 < *(ushort *)(DAT_03003918 + 4)) {
    puVar4 = auStack_96 + *(byte *)(DAT_03003918 + 8);
    bVar1 = 0;
    if (*(byte *)(DAT_03003918 + 8) != 0) {
      do {
        *puVar4 = (ushort)uVar5;
        puVar4 = puVar4 + -1;
        uVar5 = uVar5 >> 1;
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(DAT_03003918 + 8));
    }
    *puVar4 = 1;
    puVar4[-1] = 1;
    sub_08021A4C(auStack_98,&DAT_0d000000,*(byte *)(DAT_03003918 + 8) + 3);
    sub_08021A4C(&DAT_0d000000,auStack_98,0x44);
    puVar4 = auStack_96 + 3;
    puVar6 = (undefined2 *)(param_2 + 6);
    bVar1 = 0;
    do {
      uVar5 = 0;
      bVar2 = 0;
      do {
        uVar5 = (uVar5 << 0x11) >> 0x10 | *puVar4 & 1;
        puVar4 = puVar4 + 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      *puVar6 = (short)uVar5;
      puVar6 = puVar6 + -1;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80ff;
  }
                    /* WARNING: Could not recover jumptable at 0x08021b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}


/* sub_08021B7C @ 0x08021B7C */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08021B7C(uint param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_b0 [130];
  undefined2 auStack_2e [17];
  
  uVar6 = param_1 & 0xffff;
  if (uVar6 < *(ushort *)(DAT_03003918 + 4)) {
    bVar2 = *(byte *)(DAT_03003918 + 8);
    auStack_2e[bVar2 + 1] = 0;
    puVar5 = auStack_2e + bVar2;
    bVar2 = 0;
    do {
      uVar4 = (uint)*param_2;
      param_2 = param_2 + 1;
      bVar1 = 0;
      do {
        *puVar5 = (short)uVar4;
        puVar5 = puVar5 + -1;
        uVar4 = uVar4 >> 1;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 0x10);
      bVar2 = bVar2 + 1;
    } while (bVar2 < 4);
    for (bVar2 = 0; bVar2 < *(byte *)(DAT_03003918 + 8); bVar2 = bVar2 + 1) {
      *puVar5 = (short)uVar6;
      puVar5 = puVar5 + -1;
      uVar6 = uVar6 >> 1;
    }
    *puVar5 = 0;
    puVar5[-1] = 1;
    sub_08021A4C(auStack_b0,&DAT_0d000000,*(byte *)(DAT_03003918 + 8) + 0x43);
    sub_08021980((undefined2 *)&gUnknown_087FD65C);
    uVar3 = 0;
    do {
      if ((_DAT_0d000000 & 1) != 0) goto _08021C3A;
    } while (DAT_030038a4 == '\0');
    if ((_DAT_0d000000 & 1) == 0) {
      uVar3 = 0xc001;
    }
_08021C3A:
    sub_08021A08();
  }
  else {
    uVar3 = 0x80ff;
  }
                    /* WARNING: Could not recover jumptable at 0x08021c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}


/* sub_08021C58 @ 0x08021C58 */

void sub_08021C58(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  short asStack_14 [4];
  
  psVar4 = asStack_14;
  uVar5 = 0;
  if ((param_1 & 0xffff) < (uint)*(ushort *)(DAT_03003918 + 4)) {
    sub_08021ACC(param_1 & 0xffff,(int)asStack_14);
    bVar3 = 0;
    do {
      sVar1 = *param_2;
      sVar2 = *psVar4;
      psVar4 = psVar4 + 1;
      param_2 = param_2 + 1;
      if (sVar1 != sVar2) {
        uVar5 = 0x8000;
        break;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
  }
  else {
    uVar5 = 0x80ff;
  }
                    /* WARNING: Could not recover jumptable at 0x08021cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}


/* sub_08021CAE @ 0x08021CAE */

void sub_08021CAE(uint param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    uVar2 = sub_08021B7C(param_1 & 0xffff,param_2);
    param_3 = uVar2 & 0xffff;
    if (param_3 == 0) {
      uVar2 = sub_08021C58(param_1 & 0xffff,(short *)param_2);
      param_3 = uVar2 & 0xffff;
      if (param_3 == 0) break;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08021cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}


/* sub_08021CB0 @ 0x08021CB0 */

void sub_08021CB0(uint param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    uVar2 = sub_08021B7C(param_1 & 0xffff,param_2);
    param_3 = uVar2 & 0xffff;
    if (param_3 == 0) {
      uVar2 = sub_08021C58(param_1 & 0xffff,(short *)param_2);
      param_3 = uVar2 & 0xffff;
      if (param_3 == 0) break;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08021cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}


/* sub_08021CEE @ 0x08021CEE */

undefined4 sub_08021CEE(undefined4 param_1,byte *param_2,int *param_3)

{
  undefined4 uVar1;
  uint auStack_48 [7];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_14 [2];
  
  uStack_2c = 0x8022a45;
  uStack_28 = 0x8022a53;
  auStack_14[0] = param_1;
  uVar1 = sub_08022118(auStack_14,param_2,param_3,auStack_48);
  sub_08022A44(0,auStack_14);
  return uVar1;
}


/* sub_08021CF0 @ 0x08021CF0 */

undefined4 sub_08021CF0(undefined4 param_1,byte *param_2,int *param_3)

{
  undefined4 uVar1;
  uint auStack_48 [7];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14 [2];
  
  local_2c = 0x8022a45;
  local_28 = 0x8022a53;
  local_14[0] = param_1;
  uVar1 = sub_08022118(local_14,param_2,param_3,auStack_48);
  sub_08022A44(0,local_14);
  return uVar1;
}


/* __call_via_r0 @ 0x08021D28 */

void __call_via_r0(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08021d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r1 @ 0x08021D2A */

void __call_via_r1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08021d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r2 @ 0x08021D2C */

void __call_via_r2(undefined4 param_1,undefined4 param_2,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x08021d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r3 @ 0x08021D2E */

void __call_via_r3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08021d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r4 @ 0x08021D30 */

void __call_via_r4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08021d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r5 @ 0x08021D32 */

void __call_via_r5(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08021d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r6 @ 0x08021D34 */

void __call_via_r6(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08021d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* __call_via_r7 @ 0x08021D36 */

void __call_via_r7(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08021d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08021D38 @ 0x08021D38 */

void sub_08021D38(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08021D3E();
  sub_08021D48();
                    /* WARNING: Could not recover jumptable at 0x08021d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08021D3E @ 0x08021D3E */

void sub_08021D3E(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08021D48();
                    /* WARNING: Could not recover jumptable at 0x08021d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08021D48 @ 0x08021D48 */

void sub_08021D48(void)

{
  code *pcVar1;
  
  pcVar1 = sub_0802369C;
  do {
    pcVar1 = pcVar1 + -4;
    __call_via_r0(pcVar1 + *(int *)pcVar1);
  } while (pcVar1 != (code *)&UNK_08023690);
  return;
}


/* sub_08021D74 @ 0x08021D74 */

void sub_08021D74(void)

{
  int *piVar1;
  
  piVar1 = &DAT_08023588;
  do {
    __call_via_r0((undefined *)(*piVar1 + (int)piVar1));
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&UNK_08023690);
  return;
}


/* sub_08021DA0 @ 0x08021DA0 */

undefined8 sub_08021DA0(uint param_1,uint param_2)

{
  return CONCAT44(((int)param_2 >> 0x1f) * param_1 +
                  param_2 * ((int)param_1 >> 0x1f) +
                  (int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_2));
}


/* sub_08021DA4 @ 0x08021DA4 */

undefined8 sub_08021DA4(uint param_1,uint param_2)

{
  return CONCAT44(((int)param_2 >> 0x1f) * param_1 +
                  param_2 * ((int)param_1 >> 0x1f) +
                  (int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_2));
}


/* sub_08021DB4 @ 0x08021DB4 */

undefined8 sub_08021DB4(uint param_1,int param_2,uint param_3)

{
  if (-1 < (int)(param_3 - 0x20)) {
    return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* sub_08021DB8 @ 0x08021DB8 */

undefined8 sub_08021DB8(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
}


/* sub_08021DE0 @ 0x08021DE0 */

void sub_08021DE0(void)

{
  sub_08022A78();
  return;
}


/* sub_08021DEE @ 0x08021DEE */

uint * sub_08021DEE(uint *param_1)

{
  byte *pbVar1;
  uint *in_r1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint in_r2;
  byte bVar5;
  uint in_r3;
  byte bVar6;
  uint in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  if (3 < in_r2) {
    uVar7 = (uint)param_1 & 3;
    in_r12 = uVar7;
    if (uVar7 != 0) {
      bVar5 = (byte)*in_r1;
      puVar2 = (uint *)((int)in_r1 + 1);
      if (uVar7 < 3) {
        puVar2 = (uint *)((int)in_r1 + 2);
        in_r12 = (uint)*(byte *)((int)in_r1 + 1);
      }
      *(byte *)param_1 = bVar5;
      in_r1 = puVar2;
      if (uVar7 < 2) {
        in_r1 = (uint *)((int)puVar2 + 1);
        bVar5 = (byte)*puVar2;
      }
      in_r2 = (in_r2 + uVar7) - 4;
      puVar2 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar2 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_1 = puVar2;
      if (uVar7 < 2) {
        param_1 = (uint *)((int)puVar2 + 1);
        *(byte *)puVar2 = bVar5;
      }
    }
    in_r3 = (uint)in_r1 & 3;
    if (in_r3 == 0) {
      bVar10 = 0x1f < in_r2;
      in_r2 = in_r2 - 0x20;
      if (bVar10) {
        do {
          if (bVar10) {
            uVar7 = in_r1[1];
            uVar8 = in_r1[2];
            uVar9 = in_r1[3];
            *param_1 = *in_r1;
            param_1[1] = uVar7;
            param_1[2] = uVar8;
            param_1[3] = uVar9;
            in_r3 = in_r1[4];
            uVar7 = in_r1[5];
            uVar8 = in_r1[6];
            uVar9 = in_r1[7];
            in_r1 = in_r1 + 8;
            param_1[4] = in_r3;
            param_1[5] = uVar7;
            param_1[6] = uVar8;
            param_1[7] = uVar9;
            param_1 = param_1 + 8;
            bVar10 = 0x1f < in_r2;
            in_r2 = in_r2 - 0x20;
          }
        } while (bVar10);
      }
      puVar2 = param_1;
      if ((bool)((byte)(in_r2 >> 4) & 1)) {
        in_r3 = *in_r1;
        uVar7 = in_r1[1];
        uVar8 = in_r1[2];
        uVar9 = in_r1[3];
        in_r1 = in_r1 + 4;
        *param_1 = in_r3;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        puVar2 = param_1 + 4;
      }
      if ((int)(in_r2 << 0x1c) < 0) {
        in_r3 = *in_r1;
        uVar7 = in_r1[1];
        in_r1 = in_r1 + 2;
        *puVar2 = in_r3;
        puVar2[1] = uVar7;
        puVar2 = puVar2 + 2;
      }
      in_r12 = in_r2 << 0x1e;
      param_1 = puVar2;
      if ((bool)((byte)(in_r2 >> 2) & 1)) {
        in_r3 = *in_r1;
        param_1 = puVar2 + 1;
        *puVar2 = in_r3;
        in_r1 = in_r1 + 1;
      }
      if (in_r12 == 0) {
        return param_1;
      }
    }
    else {
      bVar10 = 3 < in_r2;
      in_r2 = in_r2 - 4;
      if (bVar10) {
        puVar3 = (uint *)((int)in_r1 - in_r3);
        in_r12 = *puVar3;
        puVar2 = param_1;
        if (in_r3 == 2) {
          do {
            puVar4 = puVar3;
            uVar7 = in_r12 >> 0x10;
            puVar3 = puVar4 + 1;
            in_r12 = *puVar3;
            bVar10 = 3 < in_r2;
            in_r2 = in_r2 - 4;
            in_r3 = uVar7 | in_r12 << 0x10;
            param_1 = puVar2 + 1;
            *puVar2 = in_r3;
            puVar2 = param_1;
          } while (bVar10);
          in_r1 = (uint *)((int)puVar4 + 6);
        }
        else if (in_r3 < 3) {
          do {
            puVar4 = puVar3;
            uVar7 = in_r12 >> 8;
            puVar3 = puVar4 + 1;
            in_r12 = *puVar3;
            bVar10 = 3 < in_r2;
            in_r2 = in_r2 - 4;
            in_r3 = uVar7 | in_r12 << 0x18;
            param_1 = puVar2 + 1;
            *puVar2 = in_r3;
            puVar2 = param_1;
          } while (bVar10);
          in_r1 = (uint *)((int)puVar4 + 5);
        }
        else {
          do {
            puVar4 = puVar3;
            uVar7 = in_r12 >> 0x18;
            puVar3 = puVar4 + 1;
            in_r12 = *puVar3;
            bVar10 = 3 < in_r2;
            in_r2 = in_r2 - 4;
            in_r3 = uVar7 | in_r12 << 8;
            param_1 = puVar2 + 1;
            *puVar2 = in_r3;
            puVar2 = param_1;
          } while (bVar10);
          in_r1 = (uint *)((int)puVar4 + 7);
        }
      }
    }
  }
  bVar6 = (byte)in_r12;
  bVar5 = (byte)in_r3;
  bVar11 = (bool)((byte)(in_r2 >> 1) & 1);
  uVar7 = in_r2 << 0x1f;
  bVar10 = (int)uVar7 < 0;
  puVar2 = in_r1;
  if (bVar10) {
    puVar2 = (uint *)((int)in_r1 + 1);
    uVar7 = (uint)(byte)*in_r1;
  }
  if (bVar11) {
    bVar5 = (byte)*puVar2;
    bVar6 = *(byte *)((int)puVar2 + 1);
  }
  puVar2 = param_1;
  if (bVar10) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)uVar7;
  }
  if (bVar11) {
    pbVar1 = (byte *)((int)puVar2 + 1);
    *(byte *)puVar2 = bVar5;
    puVar2 = (uint *)((int)puVar2 + 2);
    *pbVar1 = bVar6;
  }
  return puVar2;
}


/* sub_08021DF0 @ 0x08021DF0 */

undefined8 sub_08021DF0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  if (3 < param_3) {
    uVar7 = (uint)param_1 & 3;
    in_r12 = uVar7;
    if (uVar7 != 0) {
      bVar5 = (byte)*param_2;
      puVar1 = (uint *)((int)param_2 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar1;
      if (uVar7 < 2) {
        param_2 = (uint *)((int)puVar1 + 1);
        bVar5 = (byte)*puVar1;
      }
      param_3 = (param_3 + uVar7) - 4;
      puVar1 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_1 = puVar1;
      if (uVar7 < 2) {
        param_1 = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = bVar5;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      bVar10 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      if (bVar10) {
        do {
          if (bVar10) {
            uVar7 = param_2[1];
            uVar8 = param_2[2];
            uVar9 = param_2[3];
            *param_1 = *param_2;
            param_1[1] = uVar7;
            param_1[2] = uVar8;
            param_1[3] = uVar9;
            param_4 = param_2[4];
            uVar7 = param_2[5];
            uVar8 = param_2[6];
            uVar9 = param_2[7];
            param_2 = param_2 + 8;
            param_1[4] = param_4;
            param_1[5] = uVar7;
            param_1[6] = uVar8;
            param_1[7] = uVar9;
            param_1 = param_1 + 8;
            bVar10 = 0x1f < param_3;
            param_3 = param_3 - 0x20;
          }
        } while (bVar10);
      }
      puVar1 = param_1;
      if ((bool)((byte)(param_3 >> 4) & 1)) {
        param_4 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = param_4;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        puVar1 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        param_4 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = param_4;
        puVar1[1] = uVar7;
        puVar1 = puVar1 + 2;
      }
      in_r12 = param_3 << 0x1e;
      param_1 = puVar1;
      if ((bool)((byte)(param_3 >> 2) & 1)) {
        param_4 = *param_2;
        param_1 = puVar1 + 1;
        *puVar1 = param_4;
        param_2 = param_2 + 1;
      }
      if (in_r12 == 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    else {
      bVar10 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar10) {
        puVar2 = (uint *)((int)param_2 - param_4);
        in_r12 = *puVar2;
        puVar1 = param_1;
        if (param_4 == 2) {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 0x10;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 0x10;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 6);
        }
        else if (param_4 < 3) {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 8;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 0x18;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 5);
        }
        else {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 0x18;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 8;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 7);
        }
      }
    }
  }
  bVar6 = (byte)in_r12;
  bVar5 = (byte)param_4;
  bVar11 = (bool)((byte)(param_3 >> 1) & 1);
  uVar7 = param_3 << 0x1f;
  bVar10 = (int)uVar7 < 0;
  puVar1 = param_2;
  if (bVar10) {
    puVar1 = (uint *)((int)param_2 + 1);
    uVar7 = (uint)(byte)*param_2;
  }
  if (bVar11) {
    pbVar4 = (byte *)((int)puVar1 + 1);
    bVar5 = (byte)*puVar1;
    puVar1 = (uint *)((int)puVar1 + 2);
    bVar6 = *pbVar4;
  }
  puVar2 = param_1;
  if (bVar10) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)uVar7;
  }
  if (bVar11) {
    pbVar4 = (byte *)((int)puVar2 + 1);
    *(byte *)puVar2 = bVar5;
    puVar2 = (uint *)((int)puVar2 + 2);
    *pbVar4 = bVar6;
  }
  return CONCAT44(puVar1,puVar2);
}


/* sub_08021DF4 @ 0x08021DF4 */

undefined8 sub_08021DF4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  if (3 < param_3) {
    uVar7 = (uint)param_1 & 3;
    in_r12 = uVar7;
    if (uVar7 != 0) {
      bVar5 = (byte)*param_2;
      puVar1 = (uint *)((int)param_2 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar1;
      if (uVar7 < 2) {
        param_2 = (uint *)((int)puVar1 + 1);
        bVar5 = (byte)*puVar1;
      }
      param_3 = (param_3 + uVar7) - 4;
      puVar1 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_1 = puVar1;
      if (uVar7 < 2) {
        param_1 = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = bVar5;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      bVar10 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      if (bVar10) {
        do {
          if (bVar10) {
            uVar7 = param_2[1];
            uVar8 = param_2[2];
            uVar9 = param_2[3];
            *param_1 = *param_2;
            param_1[1] = uVar7;
            param_1[2] = uVar8;
            param_1[3] = uVar9;
            param_4 = param_2[4];
            uVar7 = param_2[5];
            uVar8 = param_2[6];
            uVar9 = param_2[7];
            param_2 = param_2 + 8;
            param_1[4] = param_4;
            param_1[5] = uVar7;
            param_1[6] = uVar8;
            param_1[7] = uVar9;
            param_1 = param_1 + 8;
            bVar10 = 0x1f < param_3;
            param_3 = param_3 - 0x20;
          }
        } while (bVar10);
      }
      puVar1 = param_1;
      if ((bool)((byte)(param_3 >> 4) & 1)) {
        param_4 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = param_4;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        puVar1 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        param_4 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = param_4;
        puVar1[1] = uVar7;
        puVar1 = puVar1 + 2;
      }
      in_r12 = param_3 << 0x1e;
      param_1 = puVar1;
      if ((bool)((byte)(param_3 >> 2) & 1)) {
        param_4 = *param_2;
        param_1 = puVar1 + 1;
        *puVar1 = param_4;
        param_2 = param_2 + 1;
      }
      if (in_r12 == 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    else {
      bVar10 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar10) {
        puVar2 = (uint *)((int)param_2 - param_4);
        in_r12 = *puVar2;
        puVar1 = param_1;
        if (param_4 == 2) {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 0x10;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 0x10;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 6);
        }
        else if (param_4 < 3) {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 8;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 0x18;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 5);
        }
        else {
          do {
            puVar3 = puVar2;
            uVar7 = in_r12 >> 0x18;
            puVar2 = puVar3 + 1;
            in_r12 = *puVar2;
            bVar10 = 3 < param_3;
            param_3 = param_3 - 4;
            param_4 = uVar7 | in_r12 << 8;
            param_1 = puVar1 + 1;
            *puVar1 = param_4;
            puVar1 = param_1;
          } while (bVar10);
          param_2 = (uint *)((int)puVar3 + 7);
        }
      }
    }
  }
  bVar6 = (byte)in_r12;
  bVar5 = (byte)param_4;
  bVar11 = (bool)((byte)(param_3 >> 1) & 1);
  uVar7 = param_3 << 0x1f;
  bVar10 = (int)uVar7 < 0;
  puVar1 = param_2;
  if (bVar10) {
    puVar1 = (uint *)((int)param_2 + 1);
    uVar7 = (uint)(byte)*param_2;
  }
  if (bVar11) {
    pbVar4 = (byte *)((int)puVar1 + 1);
    bVar5 = (byte)*puVar1;
    puVar1 = (uint *)((int)puVar1 + 2);
    bVar6 = *pbVar4;
  }
  puVar2 = param_1;
  if (bVar10) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)uVar7;
  }
  if (bVar11) {
    pbVar4 = (byte *)((int)puVar2 + 1);
    *(byte *)puVar2 = bVar5;
    puVar2 = (uint *)((int)puVar2 + 2);
    *pbVar4 = bVar6;
  }
  return CONCAT44(puVar1,puVar2);
}


/* sub_08021EA8 @ 0x08021EA8 */

undefined8 sub_08021EA8(byte *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  bVar10 = 0x1f < param_3;
  uVar5 = param_3 - 0x20;
  if (bVar10) {
    do {
      if (bVar10) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar9 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 4) = uVar6;
        *(undefined4 *)(param_1 + 8) = uVar7;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        param_4 = *(undefined4 *)(param_2 + 0x10);
        uVar6 = *(undefined4 *)(param_2 + 0x14);
        uVar7 = *(undefined4 *)(param_2 + 0x18);
        uVar9 = *(undefined4 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        *(undefined4 *)(param_1 + 0x10) = param_4;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined4 *)(param_1 + 0x18) = uVar7;
        *(undefined4 *)(param_1 + 0x1c) = uVar9;
        param_1 = param_1 + 0x20;
        bVar10 = 0x1f < uVar5;
        uVar5 = uVar5 - 0x20;
      }
    } while (bVar10);
  }
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 8) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    param_1 = param_1 + 0x10;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar6;
    param_1 = param_1 + 8;
  }
  uVar8 = uVar5 << 0x1e;
  pbVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(uVar5 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    pbVar2 = param_1 + 4;
    *(undefined4 *)param_1 = param_4;
  }
  bVar1 = (byte)param_4;
  if (uVar8 == 0) {
    return CONCAT44(pbVar3,pbVar2);
  }
  bVar11 = (bool)((byte)(uVar5 >> 1) & 1);
  uVar5 = uVar5 << 0x1f;
  bVar10 = (int)uVar5 < 0;
  pbVar4 = pbVar3;
  if (bVar10) {
    pbVar4 = pbVar3 + 1;
    uVar5 = (uint)*pbVar3;
  }
  if (bVar11) {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 2;
    uVar8 = (uint)*pbVar3;
  }
  pbVar3 = pbVar2;
  if (bVar10) {
    pbVar3 = pbVar2 + 1;
    *pbVar2 = (byte)uVar5;
  }
  if (bVar11) {
    pbVar2 = pbVar3 + 1;
    *pbVar3 = bVar1;
    pbVar3 = pbVar3 + 2;
    *pbVar2 = (byte)uVar8;
  }
  return CONCAT44(pbVar4,pbVar3);
}


/* sub_08021EAC @ 0x08021EAC */

undefined8 sub_08021EAC(byte *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  bVar10 = 0x1f < param_3;
  uVar5 = param_3 - 0x20;
  if (bVar10) {
    do {
      if (bVar10) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar9 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 4) = uVar6;
        *(undefined4 *)(param_1 + 8) = uVar7;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        param_4 = *(undefined4 *)(param_2 + 0x10);
        uVar6 = *(undefined4 *)(param_2 + 0x14);
        uVar7 = *(undefined4 *)(param_2 + 0x18);
        uVar9 = *(undefined4 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        *(undefined4 *)(param_1 + 0x10) = param_4;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined4 *)(param_1 + 0x18) = uVar7;
        *(undefined4 *)(param_1 + 0x1c) = uVar9;
        param_1 = param_1 + 0x20;
        bVar10 = 0x1f < uVar5;
        uVar5 = uVar5 - 0x20;
      }
    } while (bVar10);
  }
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 8) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    param_1 = param_1 + 0x10;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)(param_1 + 4) = uVar6;
    param_1 = param_1 + 8;
  }
  uVar8 = uVar5 << 0x1e;
  pbVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(uVar5 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    pbVar2 = param_1 + 4;
    *(undefined4 *)param_1 = param_4;
  }
  bVar1 = (byte)param_4;
  if (uVar8 != 0) {
    bVar11 = (bool)((byte)(uVar5 >> 1) & 1);
    uVar5 = uVar5 << 0x1f;
    bVar10 = (int)uVar5 < 0;
    pbVar4 = pbVar3;
    if (bVar10) {
      pbVar4 = pbVar3 + 1;
      uVar5 = (uint)*pbVar3;
    }
    if (bVar11) {
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 2;
      uVar8 = (uint)*pbVar3;
    }
    pbVar3 = pbVar2;
    if (bVar10) {
      pbVar3 = pbVar2 + 1;
      *pbVar2 = (byte)uVar5;
    }
    if (bVar11) {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = bVar1;
      pbVar3 = pbVar3 + 2;
      *pbVar2 = (byte)uVar8;
    }
    return CONCAT44(pbVar4,pbVar3);
  }
  return CONCAT44(pbVar3,pbVar2);
}


/* sub_08021F18 @ 0x08021F18 */

undefined4 * sub_08021F18(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
  if (param_3 < 4) {
    if ((bool)((byte)(param_3 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = param_2;
    }
    puVar3 = param_1;
    if ((int)(param_3 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar8 = iVar2 + 4;
    *(undefined1 *)param_1 = param_2;
    puVar3 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar8) {
      puVar3 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = param_2;
    }
    param_1 = puVar3;
    if (iVar8 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar8,2)) {
      param_1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = param_2;
    }
    param_3 = param_3 - iVar8;
  }
  bVar9 = 0x1f < param_3;
  uVar6 = param_3 - 0x20;
  do {
    if (bVar9) {
      *param_1 = uVar7;
      param_1[1] = uVar7;
      param_1[2] = uVar7;
      param_1[3] = uVar7;
      param_1[4] = uVar7;
      param_1[5] = uVar7;
      param_1[6] = uVar7;
      param_1[7] = uVar7;
      param_1 = param_1 + 8;
      bVar9 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar9);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1[2] = uVar7;
    param_1[3] = uVar7;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = uVar7;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  if ((int)uVar1 < 0) {
    puVar4 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = param_2;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    *puVar4 = param_2;
  }
  puVar5 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar5 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = param_2;
  }
  return puVar5;
}


/* sub_08021F1C @ 0x08021F1C */

undefined4 * sub_08021F1C(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
  if (param_3 < 4) {
    if ((bool)((byte)(param_3 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = param_2;
    }
    puVar3 = param_1;
    if ((int)(param_3 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar8 = iVar2 + 4;
    *(undefined1 *)param_1 = param_2;
    puVar3 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar8) {
      puVar3 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = param_2;
    }
    param_1 = puVar3;
    if (iVar8 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar8,2)) {
      param_1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = param_2;
    }
    param_3 = param_3 - iVar8;
  }
  bVar9 = 0x1f < param_3;
  uVar6 = param_3 - 0x20;
  do {
    if (bVar9) {
      *param_1 = uVar7;
      param_1[1] = uVar7;
      param_1[2] = uVar7;
      param_1[3] = uVar7;
      param_1[4] = uVar7;
      param_1[5] = uVar7;
      param_1[6] = uVar7;
      param_1[7] = uVar7;
      param_1 = param_1 + 8;
      bVar9 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar9);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1[2] = uVar7;
    param_1[3] = uVar7;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = uVar7;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar4 = (undefined1 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = param_2;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      *puVar4 = param_2;
    }
    puVar5 = puVar3;
    if ((uVar1 & 0x40000000) != 0) {
      puVar5 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = param_2;
    }
    return puVar5;
  }
  return puVar3;
}


/* __16__rt_sdiv @ 0x08021F30 */

ulonglong __16__rt_sdiv(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  uVar3 = uVar2 ^ (int)param_2 >> 0x20;
  if (SUB41(param_2 >> 0x1f,0)) {
    param_2 = -param_2;
  }
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08021FD0;
  if (param_2 >> 8 < param_1) goto _08021F94;
  uVar1 = param_1 << 8;
  uVar2 = 0xff000000;
  if (param_2 >> 4 < uVar1) goto _08021FC4;
  if (param_2 >> 8 < uVar1) goto _08021F94;
  uVar1 = param_1 << 0x10;
  uVar2 = 0xffff0000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    uVar2 = 0xffffff00;
  }
  if (param_2 >> 4 < uVar1) goto _08021FC4;
  bVar4 = uVar1 == 0;
  if (!bVar4) {
    do {
      if (bVar4) {
        uVar1 = uVar1 >> 8;
      }
_08021F94:
      bVar4 = uVar1 <= param_2 >> 7;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -0x80;
      }
      bVar5 = uVar1 <= param_2 >> 6;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -0x40;
      }
      bVar6 = uVar1 <= param_2 >> 5;
      if (bVar6) {
        param_2 = param_2 + uVar1 * -0x20;
      }
      bVar7 = uVar1 <= param_2 >> 4;
      if (bVar7) {
        param_2 = param_2 + uVar1 * -0x10;
      }
      uVar2 = (((uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08021FC4:
      bVar4 = uVar1 <= param_2 >> 3;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -8;
      }
      uVar2 = uVar2 * 2 + (uint)bVar4;
_08021FD0:
      bVar4 = uVar1 <= param_2 >> 2;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -4;
      }
      bVar5 = uVar1 <= param_2 >> 1;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -2;
      }
      uVar2 = (uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
      bVar5 = uVar1 <= param_2;
      if (bVar5) {
        param_2 = param_2 - uVar1;
      }
      bVar4 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5);
      uVar2 = uVar2 * 2 + (uint)bVar5;
    } while (bVar4);
    uVar1 = (int)uVar3 >> 0x1f;
    if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
      param_2 = -param_2;
    }
    return CONCAT44(param_2,(uVar2 ^ uVar1) - uVar1);
  }
  uVar8 = sub_080236FC(2,(char *)0x2);
  if ((int)uVar8 == 0) {
    return uVar8 & 0xffffffff00000000;
  }
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* __rt_sdiv @ 0x08021F34 */

ulonglong __rt_sdiv(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  uVar3 = uVar2 ^ (int)param_2 >> 0x20;
  if (SUB41(param_2 >> 0x1f,0)) {
    param_2 = -param_2;
  }
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _08021FD0;
  if (param_2 >> 8 < param_1) goto _08021F94;
  uVar1 = param_1 << 8;
  uVar2 = 0xff000000;
  if (param_2 >> 4 < uVar1) goto _08021FC4;
  if (param_2 >> 8 < uVar1) goto _08021F94;
  uVar1 = param_1 << 0x10;
  uVar2 = 0xffff0000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    uVar2 = 0xffffff00;
  }
  if (param_2 >> 4 < uVar1) goto _08021FC4;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar8 = sub_080236FC(2,(char *)0x2);
    if ((int)uVar8 != 0) {
      software_interrupt(0x123456);
      return 0x2002600000018;
    }
    return uVar8 & 0xffffffff00000000;
  }
  do {
    if (bVar4) {
      uVar1 = uVar1 >> 8;
    }
_08021F94:
    bVar4 = uVar1 <= param_2 >> 7;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -0x80;
    }
    bVar5 = uVar1 <= param_2 >> 6;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -0x40;
    }
    bVar6 = uVar1 <= param_2 >> 5;
    if (bVar6) {
      param_2 = param_2 + uVar1 * -0x20;
    }
    bVar7 = uVar1 <= param_2 >> 4;
    if (bVar7) {
      param_2 = param_2 + uVar1 * -0x10;
    }
    uVar2 = (((uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08021FC4:
    bVar4 = uVar1 <= param_2 >> 3;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -8;
    }
    uVar2 = uVar2 * 2 + (uint)bVar4;
_08021FD0:
    bVar4 = uVar1 <= param_2 >> 2;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -4;
    }
    bVar5 = uVar1 <= param_2 >> 1;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -2;
    }
    uVar2 = (uVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
    bVar5 = uVar1 <= param_2;
    if (bVar5) {
      param_2 = param_2 - uVar1;
    }
    bVar4 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5);
    uVar2 = uVar2 * 2 + (uint)bVar5;
  } while (bVar4);
  uVar1 = (int)uVar3 >> 0x1f;
  if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
    param_2 = -param_2;
  }
  return CONCAT44(param_2,(uVar2 ^ uVar1) - uVar1);
}


/* sub_08022008 @ 0x08022008 */

int sub_08022008(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _0802209C;
  if (param_2 >> 8 < param_1) goto _08022060;
  uVar1 = param_1 << 8;
  iVar2 = -0x1000000;
  if (param_2 >> 4 < uVar1) goto _08022090;
  if (param_2 >> 8 < uVar1) goto _08022060;
  uVar1 = param_1 << 0x10;
  iVar2 = -0x10000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    iVar2 = -0x100;
  }
  if (param_2 >> 4 < uVar1) goto _08022090;
  bVar4 = uVar1 == 0;
  if (!bVar4) {
    do {
      if (bVar4) {
        uVar1 = uVar1 >> 8;
      }
_08022060:
      bVar4 = uVar1 <= param_2 >> 7;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -0x80;
      }
      bVar5 = uVar1 <= param_2 >> 6;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -0x40;
      }
      bVar6 = uVar1 <= param_2 >> 5;
      if (bVar6) {
        param_2 = param_2 + uVar1 * -0x20;
      }
      bVar7 = uVar1 <= param_2 >> 4;
      if (bVar7) {
        param_2 = param_2 + uVar1 * -0x10;
      }
      iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08022090:
      bVar4 = uVar1 <= param_2 >> 3;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar4;
_0802209C:
      bVar4 = uVar1 <= param_2 >> 2;
      if (bVar4) {
        param_2 = param_2 + uVar1 * -4;
      }
      bVar5 = uVar1 <= param_2 >> 1;
      if (bVar5) {
        param_2 = param_2 + uVar1 * -2;
      }
      uVar3 = (iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
      bVar5 = uVar1 <= param_2;
      if (bVar5) {
        param_2 = param_2 - uVar1;
      }
      bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
      iVar2 = uVar3 * 2 + (uint)bVar5;
    } while (bVar4);
    return iVar2;
  }
  iVar2 = sub_080236FC(2,(char *)0x2);
  if (iVar2 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_0802200C @ 0x0802200C */

int sub_0802200C(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  uVar1 = param_1;
  if (param_2 >> 3 < param_1) goto _0802209C;
  if (param_2 >> 8 < param_1) goto _08022060;
  uVar1 = param_1 << 8;
  iVar2 = -0x1000000;
  if (param_2 >> 4 < uVar1) goto _08022090;
  if (param_2 >> 8 < uVar1) goto _08022060;
  uVar1 = param_1 << 0x10;
  iVar2 = -0x10000;
  if (uVar1 <= param_2 >> 8) {
    uVar1 = param_1 << 0x18;
    iVar2 = -0x100;
  }
  if (param_2 >> 4 < uVar1) goto _08022090;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    iVar2 = sub_080236FC(2,(char *)0x2);
    if (iVar2 != 0) {
      software_interrupt(0x123456);
      return 0x18;
    }
    return 0;
  }
  do {
    if (bVar4) {
      uVar1 = uVar1 >> 8;
    }
_08022060:
    bVar4 = uVar1 <= param_2 >> 7;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -0x80;
    }
    bVar5 = uVar1 <= param_2 >> 6;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -0x40;
    }
    bVar6 = uVar1 <= param_2 >> 5;
    if (bVar6) {
      param_2 = param_2 + uVar1 * -0x20;
    }
    bVar7 = uVar1 <= param_2 >> 4;
    if (bVar7) {
      param_2 = param_2 + uVar1 * -0x10;
    }
    iVar2 = (((iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
_08022090:
    bVar4 = uVar1 <= param_2 >> 3;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -8;
    }
    iVar2 = iVar2 * 2 + (uint)bVar4;
_0802209C:
    bVar4 = uVar1 <= param_2 >> 2;
    if (bVar4) {
      param_2 = param_2 + uVar1 * -4;
    }
    bVar5 = uVar1 <= param_2 >> 1;
    if (bVar5) {
      param_2 = param_2 + uVar1 * -2;
    }
    uVar3 = (iVar2 * 2 + (uint)bVar4) * 2 + (uint)bVar5;
    bVar5 = uVar1 <= param_2;
    if (bVar5) {
      param_2 = param_2 - uVar1;
    }
    bVar4 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar5);
    iVar2 = uVar3 * 2 + (uint)bVar5;
  } while (bVar4);
  return iVar2;
}


/* sub_080220CC @ 0x080220CC */

void sub_080220CC(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 != param_2) {
    do {
      __call_via_r7();
      param_1 = param_1 + param_3;
    } while (param_1 != param_2);
  }
  return;
}


/* sub_080220EE @ 0x080220EE */

void sub_080220EE(int param_1,uint param_2,uint param_3,int param_4,undefined *param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}


/* sub_080220F0 @ 0x080220F0 */

void sub_080220F0(int param_1,uint param_2,uint param_3,int param_4,undefined *param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}


/* sub_08022118 @ 0x08022118 */

void sub_08022118(undefined4 param_1,byte *param_2,int *param_3,uint *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  code *UNRECOVERED_JUMPTABLE;
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  int iStack_40;
  int iStack_3c;
  uint uStack_34;
  int iStack_30;
  int local_2c;
  uint uStack_28;
  
  local_2c = 0;
  bVar1 = *param_2;
  pbVar12 = param_2 + 1;
  do {
    uVar10 = (uint)bVar1;
    if (uVar10 == 0) {
      iVar5 = __call_via_r1(param_1,(undefined *)param_4[8]);
      if (iVar5 != 0) {
        local_2c = -1;
      }
                    /* WARNING: Could not recover jumptable at 0x080226a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(local_2c);
      return;
    }
    if (uVar10 != 0x25) {
      __call_via_r2(uVar10,param_1,(undefined *)param_4[7]);
      local_2c = local_2c + 1;
      goto _08022686;
    }
    uVar10 = 0;
    uStack_34 = 0;
    param_4[2] = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uStack_28 = (uint)*pbVar12;
            pbVar13 = pbVar12 + 1;
            if (uStack_28 != 0x2b) break;
            uVar10 = uVar10 | 2;
            pbVar12 = pbVar13;
          }
          if (0x2b < uStack_28) break;
          if (uStack_28 == 0x20) {
            uVar10 = uVar10 | 4;
            pbVar12 = pbVar13;
          }
          else {
            if (uStack_28 != 0x23) goto _0802218C;
            uVar10 = uVar10 | 8;
            pbVar12 = pbVar13;
          }
        }
        if (uStack_28 != 0x2d) break;
        uVar10 = uVar10 & 0xfffffeff | 1;
        pbVar12 = pbVar13;
      }
      if (uStack_28 != 0x30) break;
      uVar10 = uVar10 | 0x100;
      pbVar12 = pbVar13;
    }
_0802218C:
    uVar8 = 0;
    if (uStack_28 == 0x2a) {
      uVar8 = *(uint *)*param_3;
      *param_3 = (int)((uint *)*param_3 + 1);
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
        uVar10 = uVar10 ^ 1;
      }
      uStack_28 = (uint)*pbVar13;
      pbVar13 = pbVar12 + 2;
    }
    else {
      while (uStack_28 - 0x30 < 10) {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        uVar8 = (uVar8 * 10 + uStack_28) - 0x30;
        uStack_28 = (uint)bVar1;
      }
    }
    uVar9 = 0;
    if (-1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    pbVar12 = pbVar13;
    if (uStack_28 == 0x2e) {
      uStack_28 = (uint)*pbVar13;
      pbVar12 = pbVar13 + 1;
      uVar8 = 0;
      if (uStack_28 == 0x2a) {
        uVar8 = *(uint *)*param_3;
        *param_3 = (int)((uint *)*param_3 + 1);
        uStack_28 = (uint)*pbVar12;
        pbVar12 = pbVar13 + 2;
_0802221A:
        if ((int)uVar8 < 0) goto _08022224;
      }
      else if (uStack_28 - 0x30 < 10) {
        do {
          iVar5 = uVar8 * 10 + uStack_28;
          uStack_28 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar8 = iVar5 - 0x30;
        } while (uStack_28 - 0x30 < 10);
        goto _0802221A;
      }
      uVar10 = uVar10 | 0x10;
      param_4[2] = uVar8;
    }
_08022224:
    if (uStack_28 == 0x6c) {
      if (*pbVar12 != 0x6c) goto _08022240;
      uVar10 = uVar10 | 0x40;
      pbVar12 = pbVar12 + 1;
_08022244:
      uStack_28 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    }
    else {
      if (uStack_28 == 0x4c) {
_08022240:
        uVar10 = uVar10 | 0x20;
        goto _08022244;
      }
      if (uStack_28 == 0x68) {
        if (*pbVar12 == 0x68) {
          uVar10 = uVar10 | 0x400;
          pbVar12 = pbVar12 + 1;
        }
        else {
          uVar10 = uVar10 | 0x80;
        }
        uStack_28 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      else if (uStack_28 == 0x6a) {
        uStack_28 = (uint)*pbVar12;
        uVar10 = uVar10 | 0x40;
        pbVar12 = pbVar12 + 1;
      }
      else if ((uStack_28 == 0x74) || (uStack_28 == 0x7a)) {
        uStack_28 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      }
    }
    if (uStack_28 == 0x67) goto _0802264A;
    if (uStack_28 < 0x68) {
      if (uStack_28 == 99) {
        uStack_28 = *(uint *)*param_3;
        *param_3 = (int)((uint *)*param_3 + 1);
      }
      else if (uStack_28 < 100) {
        if (uStack_28 == 0) {
          pbVar12 = pbVar12 + -1;
          goto _08022686;
        }
        if ((uStack_28 == 0x45) || (uStack_28 == 0x47)) {
_0802264A:
          if (-1 < (int)(uVar10 << 0x1b)) {
            param_4[2] = 6;
          }
          puVar3 = (uint *)*param_3;
          *param_3 = (int)(puVar3 + 2);
          uVar8 = *puVar3;
          param_4[6] = puVar3[1];
          param_4[1] = 0;
          param_4[5] = uVar8;
          uStack_34 = 0;
          uVar10 = uVar10 | 0x200;
          goto _0802266E;
        }
        if (uStack_28 == 0x58) {
          puVar3 = (uint *)*param_3;
          if ((int)(uVar10 << 0x19) < 0) {
            *param_3 = (int)(puVar3 + 2);
            uVar8 = *puVar3;
            param_4[0xc] = puVar3[1];
            param_4[0xb] = uVar8;
          }
          else {
            uStack_34 = *puVar3;
            *param_3 = (int)(puVar3 + 1);
          }
          if ((int)(uVar10 << 0x15) < 0) {
            uStack_34 = uStack_34 & 0xff;
          }
          else if ((int)(uVar10 << 0x18) < 0) {
            uStack_34 = uStack_34 & 0xffff;
          }
          param_4[9] = (uint)"0123456789ABCDEF";
          if (((int)(uVar10 << 0x1c) < 0) && (uStack_34 != 0)) {
            pcVar4 = "0X";
          }
          else {
            pcVar4 = "";
          }
          param_4[1] = (uint)pcVar4;
          if ((int)(uVar10 << 0x1b) < 0) {
            uVar10 = uVar10 & 0xfffffeff;
          }
          goto _0802266E;
        }
      }
      else {
        if (uStack_28 == 100) {
_080225D8:
          puVar3 = (uint *)*param_3;
          if ((int)(uVar10 << 0x19) < 0) {
            cVar15 = SCARRY4((int)puVar3,8);
            cVar14 = (int)(puVar3 + 2) < 0;
            *param_3 = (int)(puVar3 + 2);
            uVar8 = *puVar3;
            uVar7 = puVar3[1];
            param_4[0xb] = uVar8;
            param_4[0xc] = uVar7;
            sub_08022B08(uVar8,uVar7,0,0);
            if (cVar14 == cVar15) goto _0802262A;
            uVar16 = sub_08022B28(param_4[0xb],param_4[0xc]);
            *(undefined8 *)(param_4 + 0xb) = uVar16;
            uVar8 = uStack_34;
_08022626:
            uStack_34 = uVar8;
            pcVar4 = "-";
          }
          else {
            uStack_34 = *puVar3;
            *param_3 = (int)(puVar3 + 1);
            if ((int)(uVar10 << 0x15) < 0) {
              uStack_34 = (uint)(char)uStack_34;
            }
            else if ((int)(uVar10 << 0x18) < 0) {
              uStack_34 = (uint)(short)uStack_34;
            }
            uVar8 = -uStack_34;
            if ((int)uStack_34 < 0) goto _08022626;
_0802262A:
            if ((int)(uVar10 << 0x1e) < 0) {
              pcVar4 = "+";
            }
            else if ((int)(uVar10 << 0x1d) < 0) {
              pcVar4 = " ";
            }
            else {
              pcVar4 = "";
            }
          }
          param_4[1] = (uint)pcVar4;
          if ((int)(uVar10 << 0x1b) < 0) {
            uVar10 = uVar10 & 0xfffffeff;
          }
          goto _0802266E;
        }
        if ((uStack_28 == 0x65) || (uStack_28 == 0x66)) goto _0802264A;
      }
_080222EA:
      iStack_30 = uVar9 - 1;
      if (-1 < (int)(uVar10 << 0x1f)) {
        uVar2 = 0x30;
        if (-1 < (int)(uVar10 << 0x17)) {
          uVar2 = 0x20;
        }
        for (iStack_30 = uVar9 - 2; -1 < iStack_30; iStack_30 = iStack_30 + -1) {
          local_2c = local_2c + 1;
          __call_via_r2(uVar2,param_1,(undefined *)param_4[7]);
        }
      }
      __call_via_r2(uStack_28,param_1,(undefined *)param_4[7]);
      local_2c = local_2c + 1;
      if ((int)(uVar10 << 0x1f) < 0) {
        while (iStack_30 = iStack_30 + -1, -1 < iStack_30) {
          local_2c = local_2c + 1;
          __call_via_r2(0x20,param_1,(undefined *)param_4[7]);
        }
      }
    }
    else if (uStack_28 == 0x70) {
      uStack_34 = *(uint *)*param_3;
      *param_3 = (int)((uint *)*param_3 + 1);
      param_4[9] = 0x8022884;
      if ((int)(uVar10 << 0x1c) < 0) {
        pcVar4 = "@";
      }
      else {
        pcVar4 = "";
      }
      param_4[2] = 8;
      param_4[1] = (uint)pcVar4;
      uVar10 = uVar10 | 0x10;
_0802266E:
      param_4[10] = uVar9;
      *param_4 = uVar10;
      iVar5 = sub_080226AC(param_1,uStack_28,param_4,uStack_34);
      local_2c = iVar5 + local_2c;
    }
    else if (uStack_28 < 0x71) {
      if (uStack_28 == 0x69) goto _080225D8;
      if (uStack_28 != 0x6e) {
        if (uStack_28 != 0x6f) goto _080222EA;
        puVar3 = (uint *)*param_3;
        if ((int)(uVar10 << 0x19) < 0) {
          *param_3 = (int)(puVar3 + 2);
          uVar8 = *puVar3;
          param_4[0xc] = puVar3[1];
          param_4[0xb] = uVar8;
        }
        else {
          uStack_34 = *puVar3;
          *param_3 = (int)(puVar3 + 1);
        }
        if ((int)(uVar10 << 0x15) < 0) {
          uStack_34 = uStack_34 & 0xff;
        }
        else if ((int)(uVar10 << 0x18) < 0) {
          uStack_34 = uStack_34 & 0xffff;
        }
        if ((int)(uVar10 << 0x1c) < 0) {
          pcVar4 = "0";
        }
        else {
          pcVar4 = "";
        }
        param_4[1] = (uint)pcVar4;
        if ((int)(uVar10 << 0x1b) < 0) {
          uVar10 = uVar10 & 0xfffffeff;
        }
        goto _0802266E;
      }
      if ((int)(uVar10 << 0x15) < 0) {
        puVar6 = *(undefined1 **)*param_3;
        *param_3 = (int)((undefined4 *)*param_3 + 1);
        *puVar6 = (char)local_2c;
      }
      else if ((int)(uVar10 << 0x18) < 0) {
        puVar6 = *(undefined1 **)*param_3;
        *param_3 = (int)((undefined4 *)*param_3 + 1);
        *puVar6 = (char)local_2c;
        puVar6[1] = (char)((uint)local_2c >> 8);
      }
      else if ((int)(uVar10 << 0x19) < 0) {
        piVar11 = *(int **)*param_3;
        *param_3 = (int)((undefined4 *)*param_3 + 1);
        *piVar11 = local_2c;
        piVar11[1] = local_2c >> 0x1f;
      }
      else if ((int)(uVar10 << 0x1a) < 0) {
        piVar11 = *(int **)*param_3;
        *param_3 = (int)((undefined4 *)*param_3 + 1);
        *piVar11 = local_2c;
      }
      else {
        piVar11 = *(int **)*param_3;
        *param_3 = (int)((undefined4 *)*param_3 + 1);
        *piVar11 = local_2c;
      }
    }
    else {
      if (uStack_28 != 0x73) {
        if (uStack_28 == 0x75) {
          puVar3 = (uint *)*param_3;
          if ((int)(uVar10 << 0x19) < 0) {
            *param_3 = (int)(puVar3 + 2);
            uVar8 = *puVar3;
            param_4[0xc] = puVar3[1];
            param_4[0xb] = uVar8;
          }
          else {
            uStack_34 = *puVar3;
            *param_3 = (int)(puVar3 + 1);
          }
          if ((int)(uVar10 << 0x15) < 0) {
            uStack_34 = uStack_34 & 0xff;
          }
          else if ((int)(uVar10 << 0x18) < 0) {
            uStack_34 = uStack_34 & 0xffff;
          }
          param_4[1] = (uint)"";
          if ((int)(uVar10 << 0x1b) < 0) {
            uVar10 = uVar10 & 0xfffffeff;
          }
        }
        else {
          if (uStack_28 != 0x78) goto _080222EA;
          puVar3 = (uint *)*param_3;
          if ((int)(uVar10 << 0x19) < 0) {
            *param_3 = (int)(puVar3 + 2);
            uVar8 = *puVar3;
            param_4[0xc] = puVar3[1];
            param_4[0xb] = uVar8;
          }
          else {
            uStack_34 = *puVar3;
            *param_3 = (int)(puVar3 + 1);
          }
          if ((int)(uVar10 << 0x15) < 0) {
            uStack_34 = uStack_34 & 0xff;
          }
          else if ((int)(uVar10 << 0x18) < 0) {
            uStack_34 = uStack_34 & 0xffff;
          }
          param_4[9] = 0x8022884;
          if (((int)(uVar10 << 0x1c) < 0) && (uStack_34 != 0)) {
            pcVar4 = "0x";
          }
          else {
            pcVar4 = "";
          }
          param_4[1] = (uint)pcVar4;
          if ((int)(uVar10 << 0x1b) < 0) {
            uVar10 = uVar10 & 0xfffffeff;
          }
        }
        goto _0802266E;
      }
      puVar3 = *(uint **)*param_3;
      *param_3 = (int)((undefined4 *)*param_3 + 1);
      if ((int)(uVar10 << 0x1b) < 0) {
        for (iStack_40 = 0;
            (iStack_40 < (int)param_4[2] && (*(char *)((int)puVar3 + iStack_40) != '\0'));
            iStack_40 = iStack_40 + 1) {
        }
      }
      else {
        iStack_40 = sub_08022CB4(puVar3);
      }
      iStack_30 = uVar9 - iStack_40;
      if (-1 < (int)(uVar10 << 0x1f)) {
        uVar2 = 0x30;
        if (-1 < (int)(uVar10 << 0x17)) {
          uVar2 = 0x20;
        }
        while (iStack_30 = iStack_30 + -1, -1 < iStack_30) {
          local_2c = local_2c + 1;
          __call_via_r2(uVar2,param_1,(undefined *)param_4[7]);
        }
      }
      iStack_3c = 0;
      if (0 < iStack_40) {
        do {
          __call_via_r2((uint)*(byte *)((int)puVar3 + iStack_3c),param_1,(undefined *)param_4[7]);
          iStack_3c = iStack_3c + 1;
        } while (iStack_3c < iStack_40);
      }
      local_2c = local_2c + iStack_40;
      if ((int)(uVar10 << 0x1f) < 0) {
        while (iStack_30 = iStack_30 + -1, -1 < iStack_30) {
          local_2c = local_2c + 1;
          __call_via_r2(0x20,param_1,(undefined *)param_4[7]);
        }
      }
    }
_08022686:
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
  } while( true );
}


/* sub_080226AC @ 0x080226AC */

void sub_080226AC(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char extraout_r1;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  char cVar8;
  undefined8 uVar9;
  byte *pbStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_40;
  byte abStack_3c [32];
  uint uStack_1c;
  uint uStack_18;
  
  local_40 = *param_3;
  iVar6 = 0;
  param_3[3] = 0xffffffff;
  param_3[4] = 0xffffffff;
  iVar7 = 0;
  if ((local_40 & 0x210) == 0) {
    param_3[2] = 1;
  }
  if (param_2 != 0x67) {
    if (0x67 < param_2) {
      if (param_2 == 0x70) {
_0802275A:
        if ((int)(local_40 << 0x19) < 0) {
          uVar9 = *(undefined8 *)(param_3 + 0xb);
          cVar8 = param_3[0xc] == 0;
          sub_08022B18(param_3[0xb],param_3[0xc],0,0);
          while (cVar8 == '\0') {
            uStack_44 = (uint)((ulonglong)uVar9 >> 0x20);
            uStack_48 = (uint)uVar9;
            abStack_3c[iVar7] = *(byte *)(param_3[9] + (uStack_48 & 0xf));
            iVar7 = iVar7 + 1;
            cVar8 = '\0';
            uVar9 = sub_08022BDC(uStack_48,uStack_44,4);
            sub_08022B18((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0);
          }
        }
        else {
          iVar2 = iVar7;
          if (param_4 != 0) {
            do {
              uVar4 = param_4 & 0xf;
              iVar7 = iVar2 + 1;
              param_4 = param_4 >> 4;
              abStack_3c[iVar2] = *(byte *)(param_3[9] + uVar4);
              iVar2 = iVar7;
            } while (param_4 != 0);
          }
        }
      }
      else {
        if (param_2 < 0x71) {
          if (param_2 != 0x69) {
            if (param_2 == 0x6f) {
              if ((int)(local_40 << 0x19) < 0) {
                uVar9 = *(undefined8 *)(param_3 + 0xb);
                cVar8 = param_3[0xc] == 0;
                sub_08022B18(param_3[0xb],param_3[0xc],0,0);
                while (cVar8 == '\0') {
                  uStack_44 = (uint)((ulonglong)uVar9 >> 0x20);
                  uStack_48 = (uint)uVar9;
                  abStack_3c[iVar7] = *(byte *)(param_3[9] + (uStack_48 & 7));
                  iVar7 = iVar7 + 1;
                  cVar8 = '\0';
                  uVar9 = sub_08022BDC(uStack_48,uStack_44,3);
                  sub_08022B18((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0);
                }
              }
              else {
                iVar2 = iVar7;
                if (param_4 != 0) {
                  do {
                    bVar1 = (byte)param_4;
                    iVar7 = iVar2 + 1;
                    param_4 = param_4 >> 3;
                    abStack_3c[iVar2] = (bVar1 & 7) + 0x30;
                    iVar2 = iVar7;
                  } while (param_4 != 0);
                }
              }
              if ((int)(local_40 << 0x1c) < 0) {
                param_3[2] = param_3[2] - 1;
              }
            }
            goto _080226FE;
          }
        }
        else if (param_2 != 0x75) {
          if (param_2 != 0x78) goto _080226FE;
          goto _0802275A;
        }
_0802281E:
        if ((int)(local_40 << 0x19) < 0) {
          uVar4 = param_3[0xc];
          uVar5 = param_3[0xb];
          uVar3 = 0;
          cVar8 = uVar4 == 0;
          sub_08022B18(uVar5,uVar4,0,0);
          while (cVar8 == '\0') {
            cVar8 = (char)uVar3;
            uVar9 = sub_08022B38(uVar5,uVar4);
            uStack_1c = (uint)((ulonglong)uVar9 >> 0x20);
            uStack_18 = (uint)uVar9;
            abStack_3c[iVar7] = cVar8 + 0x30;
            uVar5 = uStack_18;
            uVar4 = uStack_1c;
            uVar3 = 0;
            iVar7 = iVar7 + 1;
            cVar8 = iVar7 == 0;
            sub_08022B18(uStack_18,uStack_1c,0,0);
          }
        }
        else if (param_4 != 0) {
          do {
            param_4 = sub_08022C84(param_4);
            abStack_3c[iVar7] = extraout_r1 + 0x30;
            iVar7 = iVar7 + 1;
          } while (param_4 != 0);
        }
      }
      goto _080226FE;
    }
    if (param_2 == 100) goto _0802281E;
    if (param_2 < 0x65) {
      if ((param_2 != 0x45) && (param_2 != 0x47)) {
        if (param_2 != 0x58) goto _080226FE;
        goto _0802275A;
      }
    }
    else if ((param_2 != 0x65) && (param_2 != 0x66)) goto _080226FE;
  }
  iVar7 = sub_080285D4();
_080226FE:
  uStack_48 = param_3[10];
  if ((int)(local_40 << 0x16) < 0) {
    uStack_44 = 0;
    if (0 < (int)param_3[3]) {
      uStack_44 = param_3[3] - 1;
    }
    if (0 < (int)param_3[4]) {
      uStack_44 = param_3[4] + uStack_44 + -1;
    }
  }
  else {
    uStack_44 = param_3[2] - iVar7;
    if ((int)uStack_44 < 0) {
      uStack_44 = 0;
    }
  }
  iVar2 = sub_08022CB4((uint *)param_3[1]);
  uStack_48 = uStack_48 - (iVar2 + uStack_44 + iVar7);
  if ((-1 < (int)(local_40 << 0x17)) && (-1 < (int)(local_40 << 0x1f))) {
    while (uStack_48 = uStack_48 + -1, -1 < (int)uStack_48) {
      iVar6 = iVar6 + 1;
      __call_via_r2(0x20,param_1,(undefined *)param_3[7]);
    }
  }
  pbStack_4c = (byte *)param_3[1];
  bVar1 = *pbStack_4c;
  while (bVar1 != 0) {
    pbStack_4c = pbStack_4c + 1;
    __call_via_r2((uint)bVar1,param_1,(undefined *)param_3[7]);
    iVar6 = iVar6 + 1;
    bVar1 = *pbStack_4c;
  }
  if (-1 < (int)(local_40 << 0x1f)) {
    uVar3 = 0x30;
    if (-1 < (int)(local_40 << 0x17)) {
      uVar3 = 0x20;
    }
    while (uStack_48 = uStack_48 + -1, -1 < (int)uStack_48) {
      iVar6 = iVar6 + 1;
      __call_via_r2(uVar3,param_1,(undefined *)param_3[7]);
    }
  }
  if ((int)(local_40 << 0x16) < 0) {
    pbStack_4c = (byte *)0x0;
    if (0 < iVar7) {
      do {
        uVar4 = (uint)abStack_3c[(int)pbStack_4c];
        if (uVar4 == 0x3c) {
          uVar4 = param_3[3] - 1;
          param_3[3] = uVar4;
          while (-1 < (int)uVar4) {
            iVar6 = iVar6 + 1;
            __call_via_r2(0x30,param_1,(undefined *)param_3[7]);
            uVar4 = param_3[3] - 1;
            param_3[3] = uVar4;
          }
        }
        else if (uVar4 == 0x3e) {
          uVar4 = param_3[4] - 1;
          param_3[4] = uVar4;
          while (-1 < (int)uVar4) {
            iVar6 = iVar6 + 1;
            __call_via_r2(0x30,param_1,(undefined *)param_3[7]);
            uVar4 = param_3[4] - 1;
            param_3[4] = uVar4;
          }
        }
        else {
          __call_via_r2(uVar4,param_1,(undefined *)param_3[7]);
          iVar6 = iVar6 + 1;
        }
        pbStack_4c = (byte *)((int)pbStack_4c + 1);
      } while ((int)pbStack_4c < iVar7);
    }
  }
  else {
    while (uStack_44 = uStack_44 + -1, -1 < (int)uStack_44) {
      iVar6 = iVar6 + 1;
      __call_via_r2(0x30,param_1,(undefined *)param_3[7]);
    }
    iVar6 = iVar6 + iVar7;
    for (; 0 < iVar7; iVar7 = iVar7 + -1) {
      __call_via_r2((uint)abStack_3c[iVar7 + -1],param_1,(undefined *)param_3[7]);
    }
  }
  if ((int)(local_40 << 0x1f) < 0) {
    while (uStack_48 = uStack_48 + -1, -1 < (int)uStack_48) {
      iVar6 = iVar6 + 1;
      __call_via_r2(0x20,param_1,(undefined *)param_3[7]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08022a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar6);
  return;
}


/* sub_08022880 @ 0x08022880 */

void sub_08022880(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char extraout_r1;
  int unaff_r4;
  int unaff_r5;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  byte *pbStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int in_stack_00000010;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar4 = unaff_r5 + 0x34;
  iVar5 = unaff_r7 + 0x36;
  *(int *)(unaff_r4 + 0x24) = param_2 + -8;
  *(int *)(unaff_r4 + 0x44) = param_4 + 0x32;
  *(uint *)(unaff_r4 + 100) = uVar4;
  uVar2 = uVar4;
  while (uVar2 != 0) {
    uVar2 = sub_08022C84(uVar2);
    (&stack0x00000014)[unaff_r6] = extraout_r1 + '0';
    unaff_r6 = unaff_r6 + 1;
  }
  iStack00000008 = *(int *)(unaff_r4 + 0x28);
  if (in_stack_00000010 << 0x16 < 0) {
    iStack0000000c = 0;
    if (0 < *(int *)(unaff_r4 + 0xc)) {
      iStack0000000c = *(int *)(unaff_r4 + 0xc) + -1;
    }
    if (0 < *(int *)(unaff_r4 + 0x10)) {
      iStack0000000c = *(int *)(unaff_r4 + 0x10) + iStack0000000c + -1;
    }
  }
  else {
    iStack0000000c = *(int *)(unaff_r4 + 8) - unaff_r6;
    if (iStack0000000c < 0) {
      iStack0000000c = 0;
    }
  }
  iVar3 = sub_08022CB4(*(uint **)(unaff_r4 + 4));
  iStack00000008 = iStack00000008 - (iVar3 + iStack0000000c + unaff_r6);
  if ((-1 < in_stack_00000010 << 0x17) && (-1 < in_stack_00000010 << 0x1f)) {
    pbStack00000004 = (byte *)0x20;
    while (iStack00000008 = iStack00000008 + -1, -1 < iStack00000008) {
      uVar4 = uVar4 + 1;
      __call_via_r2(pbStack00000004,iVar5,*(undefined **)(unaff_r4 + 0x1c));
    }
  }
  pbStack00000004 = *(byte **)(unaff_r4 + 4);
  bVar1 = *pbStack00000004;
  while( true ) {
    pbStack00000004 = pbStack00000004 + 1;
    if (bVar1 == 0) break;
    __call_via_r2((uint)bVar1,iVar5,*(undefined **)(unaff_r4 + 0x1c));
    uVar4 = uVar4 + 1;
    bVar1 = *pbStack00000004;
  }
  if (-1 < in_stack_00000010 << 0x1f) {
    pbStack00000004 = (byte *)0x30;
    if (-1 < in_stack_00000010 << 0x17) {
      pbStack00000004 = (byte *)0x20;
    }
    while (iStack00000008 = iStack00000008 + -1, -1 < iStack00000008) {
      uVar4 = uVar4 + 1;
      __call_via_r2(pbStack00000004,iVar5,*(undefined **)(unaff_r4 + 0x1c));
    }
  }
  if (in_stack_00000010 << 0x16 < 0) {
    pbStack00000004 = (byte *)0x0;
    if (0 < unaff_r6) {
      do {
        uVar2 = (uint)(byte)(&stack0x00000014)[(int)pbStack00000004];
        if (uVar2 == 0x3c) {
          iVar3 = *(int *)(unaff_r4 + 0xc) + -1;
          *(int *)(unaff_r4 + 0xc) = iVar3;
          while (-1 < iVar3) {
            uVar4 = uVar4 + 1;
            __call_via_r2(0x30,iVar5,*(undefined **)(unaff_r4 + 0x1c));
            iVar3 = *(int *)(unaff_r4 + 0xc) + -1;
            *(int *)(unaff_r4 + 0xc) = iVar3;
          }
        }
        else if (uVar2 == 0x3e) {
          iVar3 = *(int *)(unaff_r4 + 0x10) + -1;
          *(int *)(unaff_r4 + 0x10) = iVar3;
          while (-1 < iVar3) {
            uVar4 = uVar4 + 1;
            __call_via_r2(0x30,iVar5,*(undefined **)(unaff_r4 + 0x1c));
            iVar3 = *(int *)(unaff_r4 + 0x10) + -1;
            *(int *)(unaff_r4 + 0x10) = iVar3;
          }
        }
        else {
          __call_via_r2(uVar2,iVar5,*(undefined **)(unaff_r4 + 0x1c));
          uVar4 = uVar4 + 1;
        }
        pbStack00000004 = pbStack00000004 + 1;
      } while ((int)pbStack00000004 < unaff_r6);
    }
  }
  else {
    while (iStack0000000c = iStack0000000c + -1, -1 < iStack0000000c) {
      uVar4 = uVar4 + 1;
      __call_via_r2(0x30,iVar5,*(undefined **)(unaff_r4 + 0x1c));
    }
    uVar4 = uVar4 + unaff_r6;
    for (; 0 < unaff_r6; unaff_r6 = unaff_r6 + -1) {
      __call_via_r2((uint)*(byte *)((int)&stack0x00000010 + unaff_r6 + 3),iVar5,
                    *(undefined **)(unaff_r4 + 0x1c));
    }
  }
  iVar3 = iStack00000008;
  if (in_stack_00000010 << 0x1f < 0) {
    while (-1 < iVar3 + -1) {
      uVar4 = uVar4 + 1;
      __call_via_r2(0x20,iVar5,*(undefined **)(unaff_r4 + 0x1c));
      iVar3 = iVar3 + -1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x08022a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4);
  return;
}


/* sub_08022A42 @ 0x08022A42 */

void sub_08022A42(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}


/* sub_08022A44 @ 0x08022A44 */

void sub_08022A44(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}


/* sub_08022A52 @ 0x08022A52 */

undefined4 sub_08022A52(void)

{
  return 0;
}


/* sub_08022A56 @ 0x08022A56 */

undefined8 sub_08022A56(uint param_1)

{
  int in_r1;
  uint in_r2;
  int in_r3;
  
  return CONCAT44(in_r3 * param_1 +
                  in_r2 * in_r1 + (int)((ulonglong)param_1 * (ulonglong)in_r2 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)in_r2));
}


/* sub_08022A58 @ 0x08022A58 */

undefined8 sub_08022A58(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08022A5C @ 0x08022A5C */

undefined8 sub_08022A5C(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* sub_08022A78 @ 0x08022A78 */

undefined4 sub_08022A78(void)

{
  sub_08022C64();
  return 0;
}


/* sub_08022A88 @ 0x08022A88 */

undefined4 sub_08022A88(void)

{
  int iVar1;
  
  iVar1 = sub_080236FC(2,(char *)0x2);
  if (iVar1 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_08022A8C @ 0x08022A8C */

undefined4 sub_08022A8C(void)

{
  int iVar1;
  
  iVar1 = sub_080236FC(2,(char *)0x2);
  if (iVar1 != 0) {
    software_interrupt(0x123456);
    return 0x18;
  }
  return 0;
}


/* sub_08022A98 @ 0x08022A98 */

int sub_08022A98(void)

{
  int iVar1;
  
  iVar1 = sub_08022AFC();
  return iVar1 + 4;
}


/* sub_08022A9C @ 0x08022A9C */

int sub_08022A9C(void)

{
  int iVar1;
  
  iVar1 = sub_08022AFC();
  return iVar1 + 4;
}


/* sub_08022AB0 @ 0x08022AB0 */

undefined4 * sub_08022AB0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar7 = iVar2 + 4;
    *(undefined1 *)param_1 = 0;
    puVar3 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar7) {
      puVar3 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    param_1 = puVar3;
    if (iVar7 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar7,2)) {
      param_1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    param_2 = param_2 - iVar7;
  }
  bVar8 = 0x1f < param_2;
  uVar6 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  if ((int)uVar1 < 0) {
    puVar4 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    *puVar4 = 0;
  }
  puVar5 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar5 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
  }
  return puVar5;
}


/* sub_08022AB4 @ 0x08022AB4 */

undefined4 * sub_08022AB4(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar2 = -((uint)param_1 & 3);
    iVar7 = iVar2 + 4;
    *(undefined1 *)param_1 = 0;
    puVar3 = (undefined4 *)((int)param_1 + 1);
    if (1 < iVar7) {
      puVar3 = (undefined4 *)((int)param_1 + 2);
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    param_1 = puVar3;
    if (iVar7 != 2 && iVar2 + 2 < 0 == SBORROW4(iVar7,2)) {
      param_1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    param_2 = param_2 - iVar7;
  }
  bVar8 = 0x1f < param_2;
  uVar6 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar4 = (undefined1 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      *puVar4 = 0;
    }
    puVar5 = puVar3;
    if ((uVar1 & 0x40000000) != 0) {
      puVar5 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    return puVar5;
  }
  return puVar3;
}


/* sub_08022AF8 @ 0x08022AF8 */

undefined * sub_08022AF8(void)

{
  return &DAT_030038b0;
}


/* sub_08022AFC @ 0x08022AFC */

undefined * sub_08022AFC(void)

{
  return &DAT_030038b0;
}


/* sub_08022B08 @ 0x08022B08 */

undefined8 sub_08022B08(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_2 - (param_4 + (uint)(param_1 < param_3)),param_1 - param_3);
}


/* sub_08022B0C @ 0x08022B0C */

undefined8 sub_08022B0C(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_2 - (param_4 + (uint)(param_1 < param_3)),param_1 - param_3);
}


/* sub_08022B18 @ 0x08022B18 */

void sub_08022B18(int param_1,int param_2,int param_3,int param_4)

{
  return;
}


/* sub_08022B1C @ 0x08022B1C */

void sub_08022B1C(int param_1,int param_2,int param_3,int param_4)

{
  return;
}


/* sub_08022B28 @ 0x08022B28 */

undefined8 sub_08022B28(int param_1,int param_2)

{
  return CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
}


/* sub_08022B2C @ 0x08022B2C */

undefined8 sub_08022B2C(int param_1,int param_2)

{
  return CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
}


/* sub_08022B38 @ 0x08022B38 */

undefined8 sub_08022B38(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar3 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar3 * 0x10000;
  uVar2 = uVar1 + uVar4;
  uVar4 = uVar3 + (uVar3 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar3 = uVar4 + CARRY4(uVar2,uVar4);
  uVar1 = uVar3 * 0x20000000;
  uVar2 = uVar2 + uVar4 >> 3 | uVar1;
  uVar3 = uVar3 >> 3;
  if ((int)((param_2 - (param_1 < 10)) -
           (((uVar3 << 2 | uVar1 >> 0x1e) + uVar3 + (uint)CARRY4(uVar2,uVar2 * 4)) * 2 +
            (uint)CARRY4(uVar2 * 5,uVar2 * 5) + (uint)(param_1 - 10 < uVar2 * 10))) < 0) {
    return CONCAT44(uVar3,uVar2);
  }
  return CONCAT44(uVar3 + (0xfffffffe < uVar2),uVar2 + 1);
}


/* sub_08022B3C @ 0x08022B3C */

undefined8 sub_08022B3C(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar3 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar3 * 0x10000;
  uVar2 = uVar1 + uVar4;
  uVar4 = uVar3 + (uVar3 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar3 = uVar4 + CARRY4(uVar2,uVar4);
  uVar1 = uVar3 * 0x20000000;
  uVar2 = uVar2 + uVar4 >> 3 | uVar1;
  uVar3 = uVar3 >> 3;
  if (-1 < (int)((param_2 - (param_1 < 10)) -
                (((uVar3 << 2 | uVar1 >> 0x1e) + uVar3 + (uint)CARRY4(uVar2,uVar2 * 4)) * 2 +
                 (uint)CARRY4(uVar2 * 5,uVar2 * 5) + (uint)(param_1 - 10 < uVar2 * 10)))) {
    return CONCAT44(uVar3 + (0xfffffffe < uVar2),uVar2 + 1);
  }
  return CONCAT44(uVar3,uVar2);
}


/* sub_08022BDC @ 0x08022BDC */

ulonglong sub_08022BDC(uint param_1,uint param_2,uint param_3)

{
  if (-1 < (int)(param_3 - 0x20)) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* sub_08022BE0 @ 0x08022BE0 */

ulonglong sub_08022BE0(uint param_1,uint param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
}


/* sub_08022C08 @ 0x08022C08 */

undefined4 * sub_08022C08(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = 0x1f < param_2;
  uVar5 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
    }
  } while (bVar6);
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar5 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar5 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  if ((int)uVar1 < 0) {
    puVar2 = (undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    *puVar2 = 0;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = 0;
  }
  return puVar4;
}


/* sub_08022C0C @ 0x08022C0C */

undefined4 * sub_08022C0C(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = 0x1f < param_2;
  uVar5 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
    }
  } while (bVar6);
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar5 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar5 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      puVar2 = (undefined1 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      *puVar2 = 0;
    }
    puVar4 = puVar3;
    if ((uVar1 & 0x40000000) != 0) {
      puVar4 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    return puVar4;
  }
  return puVar3;
}


/* sub_08022C64 @ 0x08022C64 */

undefined4 sub_08022C64(void)

{
  int in_r0;
  int iVar1;
  char *in_r1;
  
  iVar1 = sub_080236FC(in_r0,in_r1);
  if (iVar1 == 0) {
    return 0;
  }
  software_interrupt(0x123456);
  return 0x18;
}


/* sub_08022C68 @ 0x08022C68 */

undefined4 sub_08022C68(void)

{
  int in_r0;
  int iVar1;
  char *in_r1;
  
  iVar1 = sub_080236FC(in_r0,in_r1);
  if (iVar1 != 0) {
    software_interrupt(0x123456);
    return 0x18;
  }
  return 0;
}


/* sub_08022C84 @ 0x08022C84 */

undefined8 sub_08022C84(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 = uVar1 + (uVar1 >> 4);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 10;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(iVar2,uVar1);
}


/* sub_08022C88 @ 0x08022C88 */

undefined8 sub_08022C88(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 = uVar1 + (uVar1 >> 4);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 10;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(iVar2,uVar1);
}


/* sub_08022CB4 @ 0x08022CB4 */

int sub_08022CB4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 1;
  uVar1 = (uint)param_1 & 3;
  while( true ) {
    if (uVar1 == 0) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
      } while ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) == 0);
      iVar2 = (int)param_1 - iVar2;
      if ((uVar1 & 0xff) == 0) {
        iVar2 = iVar2 + -3;
      }
      else if ((uVar1 << 0x10) >> 0x18 == 0) {
        iVar2 = iVar2 + -2;
      }
      else if ((uVar1 << 8) >> 0x18 == 0) {
        iVar2 = iVar2 + -1;
      }
      return iVar2;
    }
    uVar1 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') break;
    uVar1 = (uint)param_1 & 3;
  }
  return (int)param_1 - iVar2;
}


/* sub_08022D00 @ 0x08022D00 */

void sub_08022D00(int param_1,char *param_2)

{
  undefined *UNRECOVERED_JUMPTABLE_00;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE_00 = (undefined *)sub_08022D12((undefined *)0xffffffff);
  if (UNRECOVERED_JUMPTABLE_00 == (undefined *)0xffffffff) {
    uVar1 = sub_08022DA8(param_1,param_2);
  }
  else {
    if (UNRECOVERED_JUMPTABLE_00 != (undefined *)0xfffffffd) {
      __call_via_r2(param_1,param_2,UNRECOVERED_JUMPTABLE_00);
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08022d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_08022D12 @ 0x08022D12 */

void sub_08022D12(undefined *param_1)

{
  undefined4 uVar1;
  int unaff_r4;
  char *unaff_r5;
  undefined *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == unaff_r6) {
    uVar1 = sub_08022DA8(unaff_r4,unaff_r5);
  }
  else {
    if (param_1 != (undefined *)0xfffffffd) {
      __call_via_r2(unaff_r4,unaff_r5,param_1);
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08022d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* sub_08022D44 @ 0x08022D44 */

void sub_08022D44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = sub_08022D5C(0);
  if (iVar1 == 0) {
    sub_08022C64();
    uStack_24 = 0;
    uStack_20 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08022d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStack_24,uStack_20);
  return;
}


/* sub_08022D5C @ 0x08022D5C */

void sub_08022D5C(int param_1)

{
  undefined4 *unaff_r5;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    sub_08022C64();
    *unaff_r5 = 0;
    unaff_r5[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08022d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000004,in_stack_00000008);
  return;
}


/* sub_08022D86 @ 0x08022D86 */

undefined4 sub_08022D86(int param_1)

{
  return 0;
}


/* sub_08022D88 @ 0x08022D88 */

undefined4 sub_08022D88(void)

{
  return 0;
}


/* sub_08022D8C @ 0x08022D8C */

undefined8 sub_08022D8C(void)

{
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* sub_08022D90 @ 0x08022D90 */

undefined8 sub_08022D90(void)

{
  software_interrupt(0x123456);
  return 0x2002600000018;
}


/* sub_08022DA8 @ 0x08022DA8 */

void sub_08022DA8(int param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar2 = &_08022E40;
  if (param_1 - 1U < 0xd) {
    pcVar3 = &UNK_087fd4f5 + param_1 * 0x17;
    if (param_1 == 2) {
      if ((int)param_2 << 5 < 0) {
        pbVar2 = (byte *)"Invalid Operation";
      }
      else if (((uint)param_2 & 0x8000002) == 0) {
        if ((int)param_2 << 3 < 0) {
          pbVar2 = (byte *)"Overflow";
        }
        else if ((int)param_2 << 2 < 0) {
          pbVar2 = (byte *)"Underflow";
        }
        else if ((int)param_2 << 1 < 0) {
          pbVar2 = (byte *)"Inexact Result";
        }
      }
      else {
        pbVar2 = (byte *)"Divide By Zero";
      }
    }
    else {
      pbVar2 = (byte *)param_2;
      if (((param_1 != 8) && (pbVar2 = &_08022E40, param_1 == 9)) && (param_2 == (char *)0x1)) {
        pcVar3 = ": Heap memory corrupted";
      }
    }
  }
  else {
    pcVar3 = "Unknown signal";
  }
  sub_08022EC8(10);
  bVar1 = *pcVar3;
  while (bVar1 != 0) {
    bVar1 = *pcVar3;
    pcVar3 = (char *)((byte *)pcVar3 + 1);
    sub_08022EC8((uint)bVar1);
    bVar1 = *pcVar3;
  }
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    sub_08022EC8((uint)bVar1);
    bVar1 = *pbVar2;
  }
  sub_08022EC8(10);
                    /* WARNING: Could not recover jumptable at 0x08022e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}


/* sub_08022EC0 @ 0x08022EC0 */

void sub_08022EC0(void)

{
  return;
}


/* sub_08022EC4 @ 0x08022EC4 */

void sub_08022EC4(void)

{
  return;
}


/* sub_08022EC8 @ 0x08022EC8 */

undefined8 sub_08022EC8(int param_1)

{
  undefined1 local_8 [8];
  
  software_interrupt(0xab);
  return CONCAT44(local_8,3);
}


/* sub_08022EDA @ 0x08022EDA */

void sub_08022EDA(int param_1)

{
  sub_08003C24(&DAT_03000e90);
  return;
}


/* sub_08022EDC @ 0x08022EDC */

void sub_08022EDC(void)

{
  sub_08003C24(&DAT_03000e90);
  return;
}


/* sub_08022EEC @ 0x08022EEC */

void sub_08022EEC(void)

{
  DAT_03000ff8 = 0;
  return;
}


/* sub_08022EF8 @ 0x08022EF8 */

void sub_08022EF8(void)

{
  DAT_0300107c = 0;
  DAT_03001080 = 0;
  DAT_03001084 = 0;
  DAT_03001088 = 0;
  return;
}


/* sub_08022F0C @ 0x08022F0C */

void sub_08022F0C(void)

{
  sub_080220CC(0x30010c8,0x30010e0,8,0x8026689);
  return;
}


/* sub_08022F28 @ 0x08022F28 */

void sub_08022F28(void)

{
  DAT_03001124 = 0;
  DAT_03001328 = 0;
  DAT_0300152c = 0;
  DAT_03001730 = 0;
  DAT_03001d18 = 0;
  DAT_03001f20 = &_0802373C;
  DAT_0300111c = 0;
  DAT_03001118 = &_08023A0C;
  return;
}


/* sub_08022F74 @ 0x08022F74 */

void sub_08022F74(void)

{
  DAT_03001f2c = &_080254EC;
  DAT_03001f30 = &_08024A00;
  return;
}


/* sub_08022F90 @ 0x08022F90 */

void sub_08022F90(void)

{
  DAT_03001f34 = &_08024BA0;
  DAT_03001f38 = &_0802588C;
  return;
}


/* sub_08022FAC @ 0x08022FAC */

void sub_08022FAC(void)

{
  DAT_03001f3c = &_08024188;
  return;
}


/* sub_08022FBC @ 0x08022FBC */

void sub_08022FBC(void)

{
  DAT_03001f64 = &_08025A84;
  DAT_03001f44 = &_080258DC;
  DAT_03001f48 = &_080256C4;
  DAT_03001f4c = &_080251F4;
  DAT_03001f50 = &_080258C8;
  DAT_03001f54 = &_08025B98;
  DAT_03001f58 = &_080254D8;
  DAT_03001f6c = &_08025E20;
  DAT_03001f7c = 6;
  DAT_03001f78 = &_08025D70;
  DAT_03001f88 = 7;
  DAT_03001f84 = &_08025D70;
  DAT_03001f94 = 8;
  DAT_03001f90 = &_08025D70;
  DAT_03001fa0 = 0x12;
  DAT_03001f9c = &_08025D70;
  DAT_03001f5c = &_08025EC0;
  return;
}


/* sub_08023048 @ 0x08023048 */

void sub_08023048(void)

{
  DAT_03001fe0 = 0;
  return;
}


/* sub_08023054 @ 0x08023054 */

void sub_08023054(void)

{
  DAT_03002090 = &_08024AAC;
  return;
}


/* sub_08023064 @ 0x08023064 */

void sub_08023064(void)

{
  DAT_03002094 = &_080238E4;
  return;
}


/* sub_08023074 @ 0x08023074 */

void sub_08023074(void)

{
  DAT_03002098 = &_08023E50;
  return;
}


/* sub_08023084 @ 0x08023084 */

void sub_08023084(void)

{
  DAT_0300209c = &_08025188;
  DAT_030020a0 = 1;
  DAT_030020a4 = &_08025188;
  DAT_030020a8 = 0;
  DAT_030020ac = &_08025188;
  DAT_030020b0 = 2;
  DAT_030020b4 = &_08025188;
  DAT_030020b8 = 3;
  return;
}


/* sub_080230B8 @ 0x080230B8 */

void sub_080230B8(void)

{
  DAT_030020bc = &_080240F0;
  return;
}


/* sub_080230C8 @ 0x080230C8 */

void sub_080230C8(void)

{
  DAT_030020c0 = &_08025A6C;
  return;
}


/* sub_080230D8 @ 0x080230D8 */

void sub_080230D8(void)

{
  DAT_030020c8 = &_0802480C;
  return;
}


/* sub_080230E8 @ 0x080230E8 */

void sub_080230E8(void)

{
  DAT_030020dc = &_08024558;
  return;
}


/* sub_080230F8 @ 0x080230F8 */

void sub_080230F8(void)

{
  DAT_030020f4 = &_08025034;
  return;
}


/* sub_08023108 @ 0x08023108 */

void sub_08023108(void)

{
  DAT_030020fc = &_08025F10;
  return;
}


/* sub_08023118 @ 0x08023118 */

void sub_08023118(void)

{
  DAT_03002100 = &_080249EC;
  return;
}


/* sub_08023128 @ 0x08023128 */

void sub_08023128(void)

{
  DAT_03002104 = &_08024160;
  return;
}


/* sub_08023138 @ 0x08023138 */

void sub_08023138(void)

{
  DAT_03002108 = &_080251C8;
  DAT_0300210c = 6;
  DAT_03002110 = &_080251C8;
  DAT_03002114 = 7;
  DAT_03002118 = &_080251C8;
  DAT_0300211c = 8;
  DAT_03002120 = &_080251C8;
  DAT_03002124 = 10;
  return;
}


/* sub_08023168 @ 0x08023168 */

void sub_08023168(void)

{
  DAT_03002128 = &_08023F94;
  return;
}


/* sub_08023178 @ 0x08023178 */

void sub_08023178(void)

{
  DAT_0300212c = &_08024810;
  return;
}


/* sub_08023188 @ 0x08023188 */

void sub_08023188(void)

{
  DAT_03002130 = &_08024824;
  return;
}


/* sub_08023198 @ 0x08023198 */

void sub_08023198(void)

{
  DAT_03002134 = &_08024850;
  return;
}


/* sub_080231A8 @ 0x080231A8 */

void sub_080231A8(void)

{
  DAT_03002138 = &_080249D8;
  return;
}


/* sub_080231B8 @ 0x080231B8 */

void sub_080231B8(void)

{
  DAT_0300213c = &_08024174;
  return;
}


/* sub_080231C8 @ 0x080231C8 */

void sub_080231C8(void)

{
  DAT_03002144 = &_08023FA8;
  return;
}


/* sub_080231D8 @ 0x080231D8 */

void sub_080231D8(void)

{
  DAT_03002148 = &_08025500;
  return;
}


/* sub_080231E8 @ 0x080231E8 */

void sub_080231E8(void)

{
  DAT_0300214c = &_08025DB4;
  DAT_03002150 = 0;
  return;
}


/* sub_080231FC @ 0x080231FC */

void sub_080231FC(void)

{
  DAT_03002154 = &_0802498C;
  DAT_03002158 = 0x40;
  DAT_0300215c = &_0802498C;
  DAT_03002160 = 0x80;
  DAT_03002164 = &_0802498C;
  DAT_03002168 = 0x20;
  DAT_0300216c = &_0802498C;
  DAT_03002170 = 0x10;
  return;
}


/* sub_08023230 @ 0x08023230 */

void sub_08023230(void)

{
  DAT_03002174 = &_08025B80;
  return;
}


/* sub_08023240 @ 0x08023240 */

void sub_08023240(void)

{
  DAT_03002178 = &_08024DBC;
  return;
}


/* sub_08023250 @ 0x08023250 */

void sub_08023250(void)

{
  DAT_0300217c = &_08024838;
  return;
}


/* sub_08023260 @ 0x08023260 */

void sub_08023260(void)

{
  DAT_03002194 = &_08025D48;
  DAT_03002180 = &_080256AC;
  DAT_03002184 = &_08025D9C;
  DAT_03002188 = &_08025CE0;
  DAT_030021b4 = &_08025D5C;
  DAT_0300219c = &_080258B4;
  DAT_030021a4 = &_08025E48;
  DAT_030021c0 = &_08025CB8;
  DAT_0300218c = &_08025D88;
  DAT_030021cc = &_08025F70;
  DAT_03002190 = &_08025CF8;
  DAT_030021ac = &_08025CCC;
  return;
}


/* sub_080232E4 @ 0x080232E4 */

void sub_080232E4(void)

{
  DAT_030021e0 = &_08024004;
  DAT_030021e4 = &_08024E4C;
  DAT_030021e8 = &_0802526C;
  DAT_030021ec = &_08024C58;
  DAT_030021f0 = &_08024ABC;
  return;
}


/* sub_0802331C @ 0x0802331C */

void sub_0802331C(void)

{
  DAT_030021fc = &_08025684;
  DAT_03002200 = &_08025EAC;
  return;
}


/* sub_08023338 @ 0x08023338 */

void sub_08023338(void)

{
  DAT_03002204 = &_08025698;
  return;
}


/* sub_08023348 @ 0x08023348 */

void sub_08023348(void)

{
  DAT_03002208 = &_0802414C;
  return;
}


/* sub_08023358 @ 0x08023358 */

void sub_08023358(void)

{
  DAT_0300220c = &_08023D78;
  return;
}


/* sub_08023368 @ 0x08023368 */

void sub_08023368(void)

{
  DAT_03002210 = &_080239D0;
  return;
}


/* sub_08023378 @ 0x08023378 */

void sub_08023378(void)

{
  DAT_03002214 = &_08023D98;
  return;
}


/* sub_08023388 @ 0x08023388 */

void sub_08023388(void)

{
  DAT_03002218 = &_080251B4;
  DAT_0300221c = &_080247DC;
  return;
}


/* sub_080233A4 @ 0x080233A4 */

void sub_080233A4(void)

{
  DAT_03002220 = &_080239E0;
  return;
}


/* sub_080233B4 @ 0x080233B4 */

void sub_080233B4(void)

{
  DAT_03002224 = &_08025A70;
  DAT_03002228 = &_08025004;
  return;
}


/* sub_080233D0 @ 0x080233D0 */

void sub_080233D0(void)

{
  DAT_0300222c = &_08024538;
  return;
}


/* sub_080233E0 @ 0x080233E0 */

void sub_080233E0(void)

{
  DAT_03002230 = &_08023C30;
  DAT_03002234 = &_0802412C;
  return;
}


