/* Ghidra reference decompilation of code_0800E838 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800E838 @ 0x0800E838 */

void sub_0800E838(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  local_1c = 0;
  local_14 = 0x200;
  local_18 = (undefined2)*(undefined4 *)(param_1 + 0x10);
  local_16 = (undefined2)*(undefined4 *)(param_1 + 0x14);
  __call_via_r1(param_2,*(int *)(*param_2 + 0x30) + *param_2);
  uVar1 = sub_0800D5B8(&local_1c,param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


/* sub_0800E870 @ 0x0800E870 */

void sub_0800E870(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 300;
  return;
}


/* sub_0800E884 @ 0x0800E884 */

void sub_0800E884(undefined4 param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = *(short *)(param_2 + 0x12);
  uVar2 = sVar1 + 1;
  *(ushort *)(param_2 + 0x12) = uVar2;
  if (uVar2 < 0x80) {
    *(ushort *)(param_2 + 0x14) = uVar2 >> 5;
    return;
  }
  if (0xf0 < (sVar1 + 0x81U & 0xff)) {
    *(undefined2 *)(param_2 + 0x14) = 3;
    return;
  }
  *(undefined2 *)(param_2 + 0x14) = 4;
  return;
}


/* sub_0800E8AE @ 0x0800E8AE */

undefined4 * sub_0800E8AE(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08013BC0(param_1,0x100,param_3);
  *param_1 = &_08024CBC;
  iVar1 = param_2[1];
  param_1[8] = *param_2 << 8;
  param_1[9] = iVar1 << 8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &gUnknown_0840E47C + (uint)*(byte *)(param_1 + 5) * 0x30;
  param_1[6] = &gUnknown_0840E47C + (uint)*(byte *)(param_1 + 5) * 0x30;
  iVar1 = (uint)*(byte *)(param_1 + 5) * 8;
  param_1[0x10] = *(undefined4 *)(&gUnknown_0840E554 + iVar1);
  param_1[0x11] = *(undefined4 *)(&DAT_0840e558 + iVar1);
  *(undefined1 *)(param_1 + 2) = 0x28;
  sub_08013BF4(param_1);
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0xd) * 0xc,0x40,0);
  return param_1;
}


/* sub_0800E8B0 @ 0x0800E8B0 */

undefined4 * sub_0800E8B0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08013BC0(param_1,0x100,param_3);
  *param_1 = &_08024CBC;
  iVar1 = param_2[1];
  param_1[8] = *param_2 << 8;
  param_1[9] = iVar1 << 8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &gUnknown_0840E47C + (uint)*(byte *)(param_1 + 5) * 0x30;
  param_1[6] = &gUnknown_0840E47C + (uint)*(byte *)(param_1 + 5) * 0x30;
  iVar1 = (uint)*(byte *)(param_1 + 5) * 8;
  param_1[0x10] = *(undefined4 *)(&gUnknown_0840E554 + iVar1);
  param_1[0x11] = *(undefined4 *)(&DAT_0840e558 + iVar1);
  *(undefined1 *)(param_1 + 2) = 0x28;
  sub_08013BF4(param_1);
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0xd) * 0xc,0x40,0);
  return param_1;
}


/* sub_0800E93C @ 0x0800E93C */

void sub_0800E93C(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
  return;
}


/* sub_0800E946 @ 0x0800E946 */

void sub_0800E946(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int iStack_18;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x48) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + iVar2 * 0xc;
    sub_08013BF4(param_1);
    iVar1 = sub_08013C22(param_1);
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1);
    }
    else {
      iVar1 = sub_08005D6C((undefined4 *)(param_1 + 0x28),DAT_03001100);
      if (iVar1 == 0) {
        *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
      }
      else if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1c);
        uStack_34 = *(undefined1 *)(param_1 + 0x14);
        puStack_2c = &gUnknown_086DB2E4;
        uStack_30 = 0x400;
        uStack_44 = *(undefined4 *)(param_1 + 0x28);
        uStack_40 = *(undefined4 *)(param_1 + 0x2c);
        uStack_3c = *(undefined4 *)(param_1 + 0x30);
        uStack_38 = *(undefined4 *)(param_1 + 0x34);
        auStack_48[0] = *(undefined1 *)(param_1 + 0x15);
        iStack_18 = param_1;
        iVar1 = sub_08006E0A(&DAT_03001120,0,auStack_48);
        if (iVar1 != 0) {
          iVar1 = sub_0802141C(3);
          sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
          *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
          *(undefined4 *)(param_1 + 0x4c) = 0x10;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  return;
}


/* sub_0800EA3A @ 0x0800EA3A */

undefined4 sub_0800EA3A(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      if (*(int *)(param_3 + 0x30) == param_1) {
        return 0;
      }
      if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
           (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
          (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
         ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
          (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
        *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 != 2) {
    uVar1 = sub_08013D68();
    return uVar1;
  }
  if (((*(int *)(param_1 + 0x4c) == 0) && (**(char **)(param_3 + 0x1c) == '\x01')) &&
     ((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30) &&
      (((*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc) &&
        (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
       (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))))) {
    if ((*(char **)(param_3 + 0x1c))[1] == '\x0e') {
      *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      return 0;
    }
    return 1;
  }
  return 0;
}


/* sub_0800EAD8 @ 0x0800EAD8 */

void sub_0800EAD8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0xff < iVar1) {
    uVar2 = sub_0800E8B0(0,param_1,param_2);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}


/* sub_0800EB20 @ 0x0800EB20 */

int sub_0800EB20(int param_1,int param_2)

{
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = 1;
    }
    else {
      uStack_5c = 0;
      uStack_18 = 0;
      sub_080092E4(&uStack_5c,*(undefined4 *)(param_1 + 0x28),0);
      param_2 = iStack_58;
    }
  }
  return param_2;
}


/* sub_0800EB4C @ 0x0800EB4C */

undefined4 sub_0800EB4C(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x2c) + param_2 * 4 + -4);
}


/* sub_0800EB58 @ 0x0800EB58 */

uint sub_0800EB58(int param_1)

{
  uint uVar1;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 >> 0x10 != 0) {
    uStack_5c = 0;
    uStack_18 = 0;
    sub_080092E4(&uStack_5c,*(undefined4 *)(param_1 + 0x24),0);
    uVar1 = uStack_58;
  }
  return uVar1;
}


/* sub_0800EB7C @ 0x0800EB7C */

byte * sub_0800EB7C(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = sub_0800E0AC();
  iVar3 = 0;
  pbVar2 = &gUnknown_08409368;
  if (0 < iVar1) {
    do {
      if ((*pbVar2 == param_1) && (pbVar2[1] == param_2)) {
        return pbVar2;
      }
      pbVar2 = pbVar2 + 0x38;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  sub_0801F878("Unable to find area","K:\\Source\\AreaEntry.cpp",0x39,0,param_4);
  return (byte *)0x0;
}


/* sub_0800EBB6 @ 0x0800EBB6 */

uint sub_0800EBB6(int param_1)

{
  uint uVar1;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_18;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) >> 0x10 != 0) {
    local_5c = 0;
    local_18 = 0;
    sub_080092E4(&local_5c,*(undefined4 *)(param_1 + 0xc),0);
    uVar1 = local_58;
  }
  return uVar1;
}


/* sub_0800EC08 @ 0x0800EC08 */

undefined4 * sub_0800EC08(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08024014;
  iVar2 = param_2[1];
  param_1[4] = (*param_2 + -4) * 0x100;
  param_1[5] = (iVar2 + -4) * 0x100;
  param_1[6] = *param_3;
  param_1[7] = param_3[1];
  cVar1 = DAT_03002140 + '\x01';
  bVar3 = DAT_03002140 == '\0';
  DAT_03002140 = cVar1;
  if (bVar3) {
    DAT_03002142 = sub_080067AC(&DAT_03001120,0x40);
    REG_DMA3SAD = 0x86af644;
    REG_DMA3DAD = DAT_03002142 * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  param_1[3] = 0x20;
  *(undefined1 *)(param_1 + 2) = 0x28;
  return param_1;
}


/* sub_0800EC82 @ 0x0800EC82 */

void sub_0800EC82(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024014;
  DAT_03002140 = DAT_03002140 + -1;
  if ((DAT_03002140 == '\0') && (DAT_03002142 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002142);
    DAT_03002142 = -1;
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0800ECC6 @ 0x0800ECC6 */

void sub_0800ECC6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    iVar1 = *(int *)(param_1 + 0x1c) + 2;
    *(int *)(param_1 + 0x1c) = iVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  }
  return;
}


/* sub_0800ECF8 @ 0x0800ECF8 */

undefined4 sub_0800ECF8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14) >> 8;
  *(int *)(param_1 + 4) = iVar2;
  iVar3 = (*(int *)(param_1 + 0x10) >> 8) - DAT_030010ac;
  *(int *)(param_1 + 0x24) = iVar2 - DAT_030010b0;
  *(int *)(param_1 + 0x20) = iVar3;
  if ((((*(int *)(param_1 + 0x20) < -7) || (0xef < *(int *)(param_1 + 0x20))) ||
      (*(int *)(param_1 + 0x24) < -7)) || (0x9f < *(int *)(param_1 + 0x24))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0800ED4E @ 0x0800ED4E */

undefined4 sub_0800ED4E(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x2000;
  uVar1 = (uint)(*(int *)(param_1 + 0x20) << 0x17) >> 7 | 0x2000;
  *puVar2 = uVar1;
  *puVar2 = *(uint *)(param_1 + 0x24) & 0xff | uVar1;
  puVar2[1] = (puVar2[1] & 0xfffff3ff) + 0x800 & 0xfffffc00 | DAT_03002142 & 0x3ff;
  return 0;
}


/* sub_0800ED96 @ 0x0800ED96 */

undefined4 sub_0800ED96(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 8) {
    cVar1 = DAT_03002140 + -1;
    bVar2 = DAT_03002140 == '\x01';
    DAT_03002140 = cVar1;
    if ((bVar2) && (DAT_03002142 != -1)) {
      sub_08006664(&DAT_03001120,(int)DAT_03002142);
      DAT_03002142 = -1;
    }
    return 0;
  }
  if (param_2 != 9) {
    if (param_2 == 10) {
      __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
      return 0;
    }
    return 0;
  }
  cVar1 = DAT_03002140 + '\x01';
  bVar2 = DAT_03002140 == '\0';
  DAT_03002140 = cVar1;
  if (bVar2) {
    DAT_03002142 = sub_080067AC(&DAT_03001120,0x40);
    REG_DMA3SAD = 0x86af644;
    REG_DMA3DAD = DAT_03002142 * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return 0;
}


/* sub_0800EE16 @ 0x0800EE16 */

undefined4 sub_0800EE16(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800EE22 @ 0x0800EE22 */

void sub_0800EE22(void)

{
  DAT_03002140 = DAT_03002140 + -1;
  if ((DAT_03002140 == '\0') && (DAT_03002142 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002142);
    DAT_03002142 = -1;
  }
  return;
}


/* sub_0800EE50 @ 0x0800EE50 */

void sub_0800EE50(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = DAT_03002140 + '\x01';
  bVar2 = DAT_03002140 == '\0';
  DAT_03002140 = cVar1;
  if (bVar2) {
    DAT_03002142 = sub_080067AC(&DAT_03001120,0x40);
    REG_DMA3SAD = 0x86af644;
    REG_DMA3DAD = DAT_03002142 * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_0800EEA8 @ 0x0800EEA8 */

undefined4 * sub_0800EEA8(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char acStack_1020 [4088];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x2c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025720;
    param_1[9] = param_2;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 6);
    param_1[10] = param_3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 8);
    param_1[1] = *(undefined4 *)(param_3 + 4);
    param_1[8] = 0;
    piVar1 = *(int **)(param_3 + 0x14);
    iStack_20 = piVar1[2] - *piVar1;
    iStack_1c = piVar1[3] - piVar1[1];
    iStack_24 = iStack_1c;
    iStack_28 = iStack_20;
    REG_DMA3SAD = (uint)*(ushort *)(param_1[10] + 0xe) * 0x20 + 0x6010000;
    REG_DMA3DAD = acStack_1020;
    Ram040000dc = (short)((uint)(iStack_1c * iStack_20) >> 2);
    DAT_040000de = 0x8400;
    iVar4 = param_1[10];
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 8);
    param_1[5] = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0xc);
    param_1[4] = uVar6;
    uVar6 = **(undefined4 **)(iVar4 + 0x14);
    param_1[7] = (*(undefined4 **)(iVar4 + 0x14))[1];
    param_1[6] = uVar6;
    uVar5 = 0;
    if (0 < iStack_1c) {
      do {
        iVar3 = *(int *)(*(int *)(iVar4 + 0x14) + 4) + uVar5;
        uVar2 = 0;
        if (0 < iStack_20) {
          iStack_18 = iVar3 + 1;
          do {
            if (acStack_1020
                [(((int)uVar5 >> 3) * iStack_20 + (uVar5 & 7)) * 8 + ((int)uVar2 >> 3) * 0x40 +
                 (uVar2 & 7)] != '\0') {
              iVar7 = **(int **)(iVar4 + 0x14) + uVar2;
              if (iVar7 < (int)param_1[4]) {
                param_1[4] = iVar7;
              }
              if (iVar3 < (int)param_1[5]) {
                param_1[5] = iVar3;
              }
              if ((int)param_1[6] <= iVar7) {
                param_1[6] = iVar7 + 1;
              }
              if ((int)param_1[7] <= iVar3) {
                param_1[7] = iStack_18;
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < iStack_20);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iStack_1c);
    }
    param_1[5] = (int)(param_1[5] + param_1[7]) >> 1;
    if (*(int *)(iVar4 + 0x10) != 0) {
      sub_080063E0(param_1 + 4,DAT_030010fc,0);
      sub_080063E0(param_1 + 4,DAT_03001104,0);
    }
  }
  return param_1;
}


/* sub_0800F008 @ 0x0800F008 */

void sub_0800F008(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *param_1 = &_08025720;
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0800F034 @ 0x0800F034 */

undefined4 sub_0800F034(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = sub_08006E0A(&DAT_03001120,6,*(undefined1 *)(param_1 + 4));
  uVar2 = sub_0800EEA8(0,param_1,uVar1);
  sub_08006942(&DAT_03001120,uVar1,uVar2);
  return uVar2;
}


/* sub_0800F060 @ 0x0800F060 */

void sub_0800F060(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      puVar2 = *(undefined4 **)(iVar1 + 0x14);
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(iVar1 + 0x18) = *puVar2;
      *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      *(undefined4 *)(iVar1 + 0x20) = uVar8;
      *(undefined4 *)(iVar1 + 0x24) = uVar9;
    }
    else if (-1 < iVar1 * 0x40000000) {
      iVar1 = sub_0802141C(5);
      iVar3 = sub_0802141C(3);
      iVar5 = *(int *)(param_1 + 0x28);
      piVar6 = *(int **)(iVar5 + 0x14);
      iVar10 = piVar6[1];
      iVar11 = piVar6[2];
      iVar7 = piVar6[3];
      *(int *)(iVar5 + 0x18) = *piVar6 + iVar1 + -2;
      *(int *)(iVar5 + 0x1c) = iVar10 + iVar3 + -1;
      *(int *)(iVar5 + 0x20) = iVar11 + iVar1 + -2;
      *(int *)(iVar5 + 0x24) = iVar7 + iVar3 + -1;
    }
  }
  return;
}


/* sub_0800F0CA @ 0x0800F0CA */

void sub_0800F0CA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1(*(int **)(param_1 + 0x28),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800F0DA @ 0x0800F0DA */

void sub_0800F0DA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0x10);
  __call_via_r2(*(int **)(param_1 + 0x28),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0800F0EA @ 0x0800F0EA */

void sub_0800F0EA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x28),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0800F0FA @ 0x0800F0FA */

void sub_0800F0FA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0x1c);
  __call_via_r1(*(int **)(param_1 + 0x28),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800F12C @ 0x0800F12C */

void sub_0800F12C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 + 0x20);
  __call_via_r1(*(int **)(param_1 + 0x28),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0800F13C @ 0x0800F13C */

void sub_0800F13C(int *param_1)

{
  sub_08006942(&DAT_03001120,param_1,param_1[10]);
  param_1[10] = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0800F162 @ 0x0800F162 */

void sub_0800F162(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[9];
  sub_080063E0(param_1 + 4,DAT_030010fc,1,param_4,param_4);
  sub_080063E0(param_1 + 4,DAT_03001104,1);
  sub_08006942(&DAT_03001120,param_1,param_1[10]);
  param_1[10] = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  __call_via_r1(iVar1,*(undefined4 *)(iVar1 + 8));
  return;
}


/* sub_0800F1AE @ 0x0800F1AE */

void sub_0800F1AE(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 unaff_r8;
  undefined1 uVar6;
  undefined *local_24;
  undefined *local_1c;
  int local_18;
  
  local_24 = (undefined *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) >> 1);
  local_18 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) >> 1;
  local_1c = local_24;
  uVar2 = sub_0800EC08(0,&local_1c,&DAT_086addf4);
  sub_080068B8(&DAT_03001120,uVar2);
  uVar2 = sub_0800EC08(0,&local_1c,&DAT_086addfc);
  sub_080068B8(&DAT_03001120,uVar2);
  uVar2 = sub_0800EC08(0,&local_1c,&DAT_086ade04);
  sub_080068B8(&DAT_03001120,uVar2);
  uVar2 = sub_0800EC08(0,&local_1c,&DAT_086ade0c);
  sub_080068B8(&DAT_03001120,uVar2);
  cVar1 = *(char *)(param_1 + 0xc) + -1;
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = 0;
    puVar5 = (undefined *)0x40;
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E17A8);
    iVar3 = sub_08006D70(&DAT_03001120);
    uVar6 = SBORROW4(iVar3,0x400);
    if (0x3ff < iVar3) {
      sub_0802141C(0x1000);
      local_24 = (undefined *)0x400;
      puVar5 = &gUnknown_086FF09C;
      iVar3 = sub_080135E0(0,&local_1c,&gUnknown_086FF09C,4);
      uVar6 = SCARRY4(iVar3,0);
      sub_080068B8(&DAT_03001120,iVar3);
    }
    if ((bool)uVar6) {
      puVar5 = local_24;
    }
    piVar4 = (int *)sub_0801F08C();
    if (piVar4 != (int *)0x0) {
      piVar4[1] = 0x10;
      *piVar4 = (int)&_08023E28;
      piVar4[2] = param_1;
      *(undefined4 *)unaff_r8 = unaff_r8;
    }
    iVar3 = *piVar4;
    *piVar4 = iVar3 + 1;
    piVar4[iVar3 + 1] = (int)puVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0x17;
  }
  return;
}


/* sub_0800F2B6 @ 0x0800F2B6 */

uint sub_0800F2B6(int *param_1,int param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(param_3 + 4);
  iVar1 = param_1[10];
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x10) != 0) {
      if (*(int *)(param_3 + 0x18) == 0) {
        return 0;
      }
      if ((((param_1[4] < *(int *)(param_3 + 0xc)) && (*piVar3 < param_1[6])) &&
          (param_1[5] < *(int *)(param_3 + 0x10))) && (*(int *)(param_3 + 8) < param_1[7])) {
        if (**(char **)(param_3 + 0x1c) == '\0') {
          if ((int)((uint)*(byte *)((int)param_1 + 0xd) << 0x1f) < 0) {
            sub_0800F1AE(param_1);
            return 1;
          }
        }
        else if ((int)((uint)*(byte *)((int)param_1 + 0xd) << 0x1e) < 0) {
          sub_0800F1AE(param_1);
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  else if (param_2 == 2) {
    if (*(int *)(iVar1 + 0x10) != 0) {
      if (*param_3 == '\0') {
        return 0;
      }
      if (((param_1[4] < *(int *)(param_3 + 0xc)) && (*piVar3 < param_1[6])) &&
         ((param_1[5] < *(int *)(param_3 + 0x10) && (*(int *)(param_3 + 8) < param_1[7])))) {
        if (**(char **)(param_3 + 0x1c) == '\0') {
          return *(byte *)((int)param_1 + 0xd) & 1;
        }
        return *(byte *)((int)param_1 + 0xd) & 2;
      }
    }
    uVar2 = 0;
  }
  else if (param_2 == 4) {
    uVar2 = __call_via_r3();
    bVar4 = *(int *)(param_1[10] + 0x10) == 0;
    sub_080063E0(param_1 + 4,DAT_030010fc,bVar4);
    sub_080063E0(param_1 + 4,DAT_03001104,bVar4);
  }
  else if (param_2 == 0x15) {
    sub_08006942(&DAT_03001120,param_1,iVar1,piVar3,param_4);
    param_1[10] = 0;
    if (param_1 != (int *)0x0) {
      __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = __call_via_r3();
  }
  return uVar2;
}


/* sub_0800F3F0 @ 0x0800F3F0 */

undefined4 sub_0800F3F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 * 0x38;
  if ((byte)(&DAT_086ade27)[iVar1] <= (byte)(&DAT_03000fbb)[param_1]) {
    return 0;
  }
  if ((&DAT_086ade26)[iVar1] != '\0') {
    sub_0800FB74(0,&gUnknown_086ADE24 + iVar1);
    sub_0801F2F4();
  }
  if ((&gUnknown_086ADE24)[iVar1] != '\0') {
    (&DAT_03000fbb)[param_1] = (&DAT_03000fbb)[param_1] + '\x01';
    return 1;
  }
  uVar2 = __call_via_r1(param_1,(&PTR_sub_0800F6E8_1_086ade54)[param_1 * 0xe]);
  return uVar2;
}


/* sub_0800F440 @ 0x0800F440 */

undefined4 sub_0800F440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800FB74(0,&gUnknown_086ADE24 + param_1 * 0x38,param_3,param_1 * 8,param_4);
  sub_0801F2F4();
  return 1;
}


/* sub_0800F45A @ 0x0800F45A */

undefined4 sub_0800F45A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *extraout_r1;
  int *extraout_r1_00;
  short sVar2;
  undefined *puVar3;
  ushort uVar4;
  
  piVar1 = &gUnknown_086ADE14;
  puVar3 = &DAT_03000e9c + (uint)DAT_03000e90 * 0x1c;
  uVar4 = *(ushort *)(&DAT_03000ea6 + (uint)DAT_03000e90 * 0x1c);
  if (uVar4 < 0x6400) {
    sVar2 = 0;
    if (param_1 == 2) goto _0800F4BA;
    if (param_1 == 3) {
      sVar2 = 3;
    }
    else if (param_1 == 4) {
      sVar2 = 5;
    }
    do {
      uVar4 = uVar4 + sVar2 * 0x100;
      *(ushort *)(puVar3 + 10) = uVar4;
      if (0x6400 < uVar4) {
        *(undefined2 *)(puVar3 + 10) = 0x6400;
      }
      uVar4 = 0x5c4;
      puVar3 = (undefined *)0x0;
      sub_0801FC9C(*piVar1 + 0x5c4,&gUnknown_080E1604,0x40,0,param_4);
      piVar1 = extraout_r1;
      if (DAT_03001fa8 != 0) {
        sub_080086A2();
        piVar1 = extraout_r1_00;
      }
_0800F4BA:
      sVar2 = 1;
    } while( true );
  }
  return 0;
}


/* sub_0800F4C2 @ 0x0800F4C2 */

undefined4 sub_0800F4C2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  int *extraout_r1;
  int *extraout_r1_00;
  short sVar3;
  undefined *puVar4;
  short sVar5;
  
  piVar2 = &gUnknown_086ADE14;
  puVar4 = &DAT_03000e9c + (uint)DAT_03000e90 * 0x1c;
  sVar5 = *(short *)(&DAT_03000ea8 + (uint)DAT_03000e90 * 0x1c);
  if (sVar5 != 0x6400) {
    sVar3 = 0;
    if (param_1 == 5) goto _0800F522;
    if (param_1 == 6) {
      sVar3 = 3;
    }
    else if (param_1 == 7) {
      sVar3 = 5;
    }
    do {
      uVar1 = sVar5 + sVar3 * 0x100;
      *(ushort *)(puVar4 + 0xc) = uVar1;
      if (0x6400 < uVar1) {
        *(undefined2 *)(puVar4 + 0xc) = 0x6400;
      }
      sVar5 = 0x5c4;
      puVar4 = (undefined *)0x0;
      sub_0801FC9C(*piVar2 + 0x5c4,&gUnknown_080E1604,0x40,0,param_4);
      piVar2 = extraout_r1;
      if (DAT_03001fa8 != 0) {
        sub_080086A2();
        piVar2 = extraout_r1_00;
      }
_0800F522:
      sVar3 = 1;
    } while( true );
  }
  return 0;
}


/* sub_0800F52A @ 0x0800F52A */

undefined4 sub_0800F52A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  int *extraout_r1;
  int *extraout_r1_00;
  short sVar3;
  undefined *puVar4;
  short sVar5;
  
  piVar2 = &gUnknown_086ADE14;
  puVar4 = &DAT_03000e9c + (uint)DAT_03000e90 * 0x1c;
  sVar5 = *(short *)(&DAT_03000eaa + (uint)DAT_03000e90 * 0x1c);
  if (sVar5 != 0x6400) {
    sVar3 = 0;
    if (param_1 == 8) goto _0800F58A;
    if (param_1 == 9) {
      sVar3 = 3;
    }
    else if (param_1 == 10) {
      sVar3 = 5;
    }
    do {
      uVar1 = sVar5 + sVar3 * 0x100;
      *(ushort *)(puVar4 + 0xe) = uVar1;
      if (0x6400 < uVar1) {
        *(undefined2 *)(puVar4 + 0xe) = 0x6400;
      }
      sVar5 = 0x5c4;
      puVar4 = (undefined *)0x0;
      sub_0801FC9C(*piVar2 + 0x5c4,&gUnknown_080E1604,0x40,0,param_4);
      piVar2 = extraout_r1;
      if (DAT_03001fa8 != 0) {
        sub_080086A2();
        piVar2 = extraout_r1_00;
      }
_0800F58A:
      sVar3 = 1;
    } while( true );
  }
  return 0;
}


/* sub_0800F592 @ 0x0800F592 */

undefined4 sub_0800F592(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 0x1c;
  psVar2 = (short *)(&DAT_03000e9c + iVar3);
  if (param_1 == 0xd) {
    sVar1 = *(short *)(&DAT_03000e9e + iVar3);
    iVar3 = (int)*psVar2 + (sVar1 * 0x4ccd >> 0x10);
    if (sVar1 < iVar3) {
      *psVar2 = sVar1;
    }
    else {
      *psVar2 = (short)iVar3;
    }
    goto _0800F622;
  }
  if (param_1 < 0xe) {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) {
        sVar1 = *(short *)(&DAT_03000e9e + iVar3);
        iVar3 = (int)*psVar2 + (sVar1 * 0x3334 >> 0x10);
        if (sVar1 < iVar3) {
          *psVar2 = sVar1;
        }
        else {
          *psVar2 = (short)iVar3;
        }
      }
      goto _0800F622;
    }
  }
  else {
    if (param_1 == 0x15) {
      if ((int)*(short *)(&DAT_03000e9e + iVar3) < *psVar2 + 5) {
        *psVar2 = *(short *)(&DAT_03000e9e + iVar3);
      }
      else {
        *psVar2 = (short)(*psVar2 + 5);
      }
      goto _0800F622;
    }
    if (param_1 != 0x2b) goto _0800F622;
  }
  sVar1 = *(short *)(&DAT_03000e9e + iVar3);
  iVar3 = (int)*psVar2 + (sVar1 * 0x199a >> 0x10);
  if (sVar1 < iVar3) {
    *psVar2 = sVar1;
  }
  else {
    *psVar2 = (short)iVar3;
  }
_0800F622:
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1610,0x40,0,param_4);
  return 1;
}


/* sub_0800F638 @ 0x0800F638 */

undefined4 sub_0800F638(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  puVar2 = &DAT_03000e9c + iVar1;
  if (param_1 == 0xe) {
    sub_080265AC(&DAT_03000ea0 + iVar1,*(short *)(&DAT_03000ea2 + iVar1) * 0x199a >> 0x10,puVar2,
                 0x199a,param_4);
    sub_0801FC9C(&DAT_03002c80,&UNK_080e1670,0x40,0);
  }
  else if (param_1 == 0xf) {
    sub_080265AC(&DAT_03000ea0 + iVar1,*(short *)(&DAT_03000ea2 + iVar1) * 0x3334 >> 0x10,puVar2,
                 0x3334,param_4);
    sub_0801FC9C(&DAT_03002c80,&UNK_080e1670,0x40,0);
  }
  else if (param_1 == 0x10) {
    sub_080265AC(&DAT_03000ea0 + iVar1,*(short *)(&DAT_03000ea2 + iVar1) * 0x4ccd >> 0x10,puVar2,
                 0x4ccd,param_4);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e1664,0x40,0);
  }
  return 1;
}


/* sub_0800F6E8 @ 0x0800F6E8 */

undefined4 sub_0800F6E8(void)

{
  int iVar1;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  if ((*(short *)(&DAT_03000e9c + iVar1) == *(short *)(&DAT_03000e9e + iVar1)) &&
     (*(short *)(&DAT_03000ea0 + iVar1) == *(short *)(&DAT_03000ea2 + iVar1))) {
    return 0;
  }
  *(short *)(&DAT_03000e9c + iVar1) = *(short *)(&DAT_03000e9e + iVar1);
  *(undefined2 *)(&DAT_03000ea0 + iVar1) = *(undefined2 *)(&DAT_03000ea2 + iVar1);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1610,0x40,0);
  return 1;
}


/* sub_0800F6EA @ 0x0800F6EA */

undefined4 sub_0800F6EA(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)param_1[2];
  bVar1 = *pbVar2;
  if ((*(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0xc) ==
       *(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0xe)) &&
     (*(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0x10) ==
      *(short *)(pbVar2 + (uint)bVar1 * 0x1c + 0x12))) {
    return 0;
  }
  *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0xc) =
       *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0xe);
  *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0x10) =
       *(undefined2 *)(pbVar2 + (uint)bVar1 * 0x1c + 0x12);
  sub_0801FC9C(*param_1 + 0x5c4,&gUnknown_080E1610,0x40,0);
  return 1;
}


/* sub_0800F72C @ 0x0800F72C */

undefined4 sub_0800F72C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08020A4C(&DAT_030026c8,&gUnknown_081D4CD0,param_3,param_4,param_4);
  return 0;
}


/* sub_0800F72E @ 0x0800F72E */

undefined4 sub_0800F72E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08020A4C(*(undefined4 *)(param_1 + 4),&gUnknown_081D4CD0,param_3,param_4,param_4);
  return 0;
}


/* sub_0800F73C @ 0x0800F73C */

undefined4 sub_0800F73C(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined *local_c;
  
  local_18 = 0x800d765;
  local_c = &gUnknown_083B6C50;
  local_14 = 0x8000;
  local_12 = 0x8000;
  local_10 = 0x7fff;
  local_e = 0x7fff;
  uVar1 = sub_0800D7E0(auStack_1c);
  iVar2 = DAT_03001fe0 * 4;
  DAT_03001fe0 = DAT_03001fe0 + 1;
  *(undefined4 *)(&DAT_03001fe4 + iVar2) = uVar1;
  return 2;
}


/* sub_0800F790 @ 0x0800F790 */

void sub_0800F790(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x13c;
  return;
}


/* sub_0800F7A4 @ 0x0800F7A4 */

void sub_0800F7A4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x30) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_0800F7CA @ 0x0800F7CA */

undefined4 * sub_0800F7CA(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  sub_080078E4();
  *param_1 = &_08025564;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = 1;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_4 + 0xc);
  *(undefined1 *)((int)param_1 + 0x161) = *(undefined1 *)(param_4 + 0xd);
  *(undefined1 *)((int)param_1 + 0x162) = *(undefined1 *)(param_4 + 0xe);
  *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(param_4 + 0xf);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_4 + 0x10);
  return param_1;
}


/* sub_0800F7CC @ 0x0800F7CC */

undefined4 * sub_0800F7CC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  sub_080078E4();
  *param_1 = &_08025564;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = 1;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_4 + 0xc);
  *(undefined1 *)((int)param_1 + 0x161) = *(undefined1 *)(param_4 + 0xd);
  *(undefined1 *)((int)param_1 + 0x162) = *(undefined1 *)(param_4 + 0xe);
  *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(param_4 + 0xf);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_4 + 0x10);
  return param_1;
}


/* sub_0800F80C @ 0x0800F80C */

undefined4 * sub_0800F80C(undefined4 *param_1)

{
  sub_080078E4();
  *param_1 = &_08025564;
  param_1[0x5b] = 1;
  param_1[0x5a] = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return param_1;
}


/* sub_0800F832 @ 0x0800F832 */

undefined4 sub_0800F832(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802459C;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_08007662(param_1,puVar1);
  sub_080079B8(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18;
  if ((-*(int *)(param_1 + 0x170) < 8) && (iVar3 = *(int *)(param_1 + 0x174), iVar3 != 0)) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + param_2[2];
    sub_08010124();
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0;
    if (*param_2 == 0) {
      uVar2 = sub_080102A2(&local_24,param_2[2],5,0);
    }
    else {
      uVar2 = sub_080102A2(&local_24,param_2[2],0x27,1);
    }
    *(undefined4 *)(param_1 + 0x174) = uVar2;
  }
  return 0;
}


/* sub_0800F8B6 @ 0x0800F8B6 */

void sub_0800F8B6(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sub_080079B8(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18 + -2;
  if ((-*(int *)(param_1 + 0x178) < 8) && (iVar2 = *(int *)(param_1 + 0x17c), iVar2 != 0)) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_2;
    sub_08010124();
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
    uVar1 = sub_080102A2(&local_24,param_2,4,0);
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
  }
  return;
}


/* sub_0800F910 @ 0x0800F910 */

void sub_0800F910(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  
  iVar4 = *(int *)(*(char **)(param_2 + 8) + 4);
  if (**(char **)(param_2 + 8) == '\0') {
    uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + 0x160);
    iVar2 = sub_0802142E(uVar3 * 0xa4);
    *(int *)(param_2 + 0x10) = iVar2;
    iVar4 = (iVar2 + 1) * iVar4;
    bVar1 = *(byte *)(param_1 + 0x163);
  }
  else {
    uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + 0x161);
    bVar1 = *(byte *)(param_1 + 0x164);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  local_18 = (uint)bVar1;
  bVar1 = *(byte *)(param_1 + 0x162);
  iVar2 = sub_0802141C(0x1a);
  iVar4 = (int)((((int)(uVar3 * (uVar3 * (uVar3 * 0x1a + -0x2bd) + 0x1c3a2)) >> 8) *
                 ((uint)(((int)(iVar4 * (0x80 - (uint)bVar1)) >> 7) * (iVar2 + 0x100)) >> 8) >> 0x12
                ) * *(int *)(param_2 + 4)) >> 10;
  *(int *)(param_2 + 0x14) = iVar4;
  *(int *)(param_2 + 0x18) = (int)(local_18 * iVar4) >> 7;
  return;
}


/* sub_0800F9A0 @ 0x0800F9A0 */

void sub_0800F9A0(void)

{
  return;
}


/* sub_0800F9A2 @ 0x0800F9A2 */

void sub_0800F9A2(int param_1)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  local_70[0] = 0;
  local_2c = 0;
  sub_080092E4(local_70,*(undefined4 *)(param_1 + 0xc),&local_18);
  return;
}


/* sub_0800F9C6 @ 0x0800F9C6 */

void sub_0800F9C6(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [28];
  undefined2 local_c [2];
  
  local_c[0] = 0;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  sub_0800B4AE(auStack_28,*(undefined4 *)(param_1 + 0xc),local_c,&local_30,DAT_03001fa8 + 400);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_28;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_28,0);
  return;
}


/* sub_0800FA1C @ 0x0800FA1C */

undefined4 * sub_0800FA1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    iVar1 = sub_0802141C(0x1000);
    sub_080135E0(param_1,param_2,&gUnknown_086AF614,4,iVar1 + 0x1000,0x400,param_3);
    *param_1 = &_080241DC;
  }
  return param_1;
}


/* sub_0800FA6C @ 0x0800FA6C */

undefined4 * sub_0800FA6C(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800FCCC(param_1,&UNK_086ade2c + *(int *)(param_2 + 4) * 0x38,param_2 + 8);
  *param_1 = &_08024230;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 2) = 0x28;
  puVar1 = param_1 + 0xd;
  sub_0800FE2E(puVar1,param_1);
  sub_080063E0(puVar1,DAT_030010fc,0);
  sub_080063E0(puVar1,DAT_03001104,0);
  return param_1;
}


/* sub_0800FACE @ 0x0800FACE */

undefined4 sub_0800FACE(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 3) {
    if ((((*(int *)(param_1 + 0x34) < param_3[2]) && (*param_3 < *(int *)(param_1 + 0x3c))) &&
        (*(int *)(param_1 + 0x38) < param_3[3])) && (param_3[1] < *(int *)(param_1 + 0x40))) {
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = *(int *)(iVar3 + 4);
      sub_080063E0(param_1 + 0x34,DAT_030010fc,1);
      sub_080063E0(param_1 + 0x34,DAT_03001104,1);
      sub_080068CA(&DAT_03001120,param_1);
      iVar1 = __call_via_r1(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(&DAT_086ade58 + iVar1 * 0x38)
                           );
      if (iVar1 == 0) {
        uVar2 = sub_0800FA6C(0,iVar3);
        sub_080068B8(&DAT_03001120,uVar2);
      }
      else {
        __call_via_r1(iVar3,*(undefined4 *)(iVar3 + 0x10));
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = sub_0800FE1C(param_1);
  }
  return uVar2;
}


/* sub_0800FB74 @ 0x0800FB74 */

undefined4 * sub_0800FB74(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08024748;
    param_1[2] = param_2;
    param_1[1] = 0x80;
    piVar1 = DAT_03001fa8;
    param_1[4] = DAT_03001fa8;
    iVar2 = *piVar1;
    __call_via_r2(piVar1,0xb,*(int *)(iVar2 + 0x28) + iVar2);
  }
  return param_1;
}


/* sub_0800FBAC @ 0x0800FBAC */

void sub_0800FBAC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 4) == 0x70) {
    sub_0800791A(&local_18,*(undefined4 *)(param_1 + 0x10));
    local_14 = (local_14 + -0x16) - *(int *)(*(int *)(param_1 + 8) + 0xc);
    local_18 = (local_18 + 8) - (*(int *)(*(int *)(param_1 + 8) + 8) >> 1);
    uVar1 = sub_0800FC50(0,*(int *)(param_1 + 8) + 0x18,&local_18);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    sub_080068B8(&DAT_03001120,uVar1);
    if (*(short *)(*(int *)(param_1 + 8) + 4) == 0x5c) {
      iVar2 = 3;
    }
    else {
      iVar2 = 4;
    }
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + iVar2 * 0xc,0x40,0);
  }
  if (*(int *)(param_1 + 4) == 0x20) {
    sub_080068CA(&DAT_03001120,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


/* sub_0800FC2C @ 0x0800FC2C */

undefined4 sub_0800FC2C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800FC50 @ 0x0800FC50 */

undefined4 * sub_0800FC50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x30), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800FCCC(param_1,param_2,param_3);
  *param_1 = &_08024C68;
  *(undefined1 *)(param_1 + 2) = 0x18;
  return param_1;
}


/* sub_0800FC84 @ 0x0800FC84 */

void sub_0800FC84(int param_1)

{
  undefined1 auStack_54 [36];
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  sub_08020E5C(auStack_54,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
  sub_0801F394(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),local_30);
  local_1c = 0;
  local_18 = 0;
  local_14 = **(undefined4 **)(param_1 + 0x14);
  local_10 = (*(undefined4 **)(param_1 + 0x14))[1];
  sub_080236CC((int)auStack_54,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_1c);
  sub_08020EAA(auStack_54,0);
  return;
}


/* sub_0800FCCC @ 0x0800FCCC */

undefined4 * sub_0800FCCC(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x30), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_2[1];
    iVar3 = *param_2;
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)iVar2 * (short)iVar3;
    uVar1 = sub_080067AC(&DAT_03001120);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_080245E8;
    param_1[5] = param_2;
    param_1[4] = param_2[2];
    uVar4 = param_3[1];
    param_1[6] = *param_3;
    param_1[7] = uVar4;
    iVar2 = *param_2;
    param_1[9] = param_1[7] + param_2[1];
    param_1[8] = param_1[6] + iVar2;
    param_1[1] = param_1[9];
    sub_0800FC84(param_1);
  }
  return param_1;
}


/* sub_0800FD3E @ 0x0800FD3E */

undefined4 sub_0800FD3E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c) - DAT_030010b0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030010ac;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((((*(int *)(param_1 + 0x18) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x24))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800FD92 @ 0x0800FD92 */

undefined4 sub_0800FD92(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x2c) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_0800FDE6 @ 0x0800FDE6 */

undefined4 sub_0800FDE6(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  if ((iVar1 == 0) && (7 < param_2)) {
    return 2;
  }
  if (8 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800FE0C @ 0x0800FE0C */

void sub_0800FE0C(undefined4 param_1)

{
  sub_080068A6();
  sub_0800FC84(param_1);
  return;
}


/* sub_0800FE1C @ 0x0800FE1C */

undefined4 sub_0800FE1C(undefined4 param_1,int param_2)

{
  if (param_2 == 9) {
    sub_0800FC84();
  }
  return 0;
}


/* sub_0800FE2E @ 0x0800FE2E */

void sub_0800FE2E(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iStack_1048;
  int local_1044;
  int local_1040;
  char acStack_103c [4088];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [3];
  int *piStack_1c;
  int iStack_18;
  
  local_30 = *(int *)(param_2 + 0x24);
  local_34 = *(int *)(param_2 + 0x20);
  local_28[0] = *(int *)(param_2 + 0x1c);
  local_2c = *(int *)(param_2 + 0x18);
  local_44 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18);
  local_40 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c);
  local_3c = local_44;
  local_38 = local_40;
  piStack_1c = param_1;
  iStack_18 = param_2;
  sub_0801F412(&REG_DMA3SAD,acStack_103c,(uint)*(ushort *)(param_2 + 0xc) * 0x20 + 0x6010000,
               local_40 * local_44);
  uVar2 = 0;
  if (0 < local_38) {
    do {
      local_1040 = *(int *)(param_2 + 0x1c) + uVar2;
      uVar1 = 0;
      if (0 < local_3c) {
        do {
          if (acStack_103c
              [(((int)uVar2 >> 3) * local_38 + (uVar2 & 7)) * 8 + ((int)uVar1 >> 3) * 0x40 +
               (uVar1 & 7)] != '\0') {
            local_1044 = *(int *)(param_2 + 0x18) + uVar1;
            if (local_34 < local_1044) {
              piVar3 = &local_34;
            }
            else {
              piVar3 = &local_1044;
            }
            local_34 = *piVar3;
            piVar3 = &local_30;
            if (local_1040 <= local_30) {
              piVar3 = &local_1040;
            }
            local_30 = *piVar3;
            iStack_1048 = local_1044 + 1;
            piVar3 = &local_2c;
            if (local_2c <= local_1044 + 1) {
              piVar3 = &iStack_1048;
            }
            local_2c = *piVar3;
            iStack_1048 = local_1040 + 1;
            piVar3 = local_28;
            if (local_28[0] <= local_1040 + 1) {
              piVar3 = &iStack_1048;
            }
            local_28[0] = *piVar3;
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < local_3c);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < local_38);
  }
  *piStack_1c = local_34;
  piStack_1c[1] = local_30 + local_28[0] >> 1;
  piStack_1c[2] = local_2c;
  piStack_1c[3] = local_28[0];
  return;
}


/* sub_0800FFA0 @ 0x0800FFA0 */

void sub_0800FFA0(undefined4 param_1,int *param_2)

{
  __call_via_r1(param_2,*(int *)(*param_2 + 0x30) + *param_2);
  sub_080068CA(&DAT_03001120,param_2);
  return;
}


/* sub_0800FFC0 @ 0x0800FFC0 */

void sub_0800FFC0(void)

{
  return;
}


/* sub_0800FFC2 @ 0x0800FFC2 */

void sub_0800FFC2(int param_1)

{
  undefined4 local_70 [17];
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  local_70[0] = 0;
  local_2c = 0;
  sub_080092E4(local_70,*(undefined4 *)(param_1 + 0x14),&local_18);
  return;
}


/* sub_0800FFE6 @ 0x0800FFE6 */

void sub_0800FFE6(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [28];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined2 local_c [2];
  
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  sub_0800B4AE(auStack_38,*(undefined4 *)(param_1 + 0x14),local_c,&local_40,&local_1c);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_38;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_38,0);
  return;
}


/* sub_08010038 @ 0x08010038 */

uint sub_08010038(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_03001fa8 != 0) {
    iVar2 = *(int *)(DAT_03001fa8 + 0x158) - *(int *)(param_2 + 0x158);
    iVar3 = *(int *)(DAT_03001fa8 + 0x15c) - *(int *)(param_2 + 0x15c);
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar4 < iVar5) {
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
    }
    else if (iVar2 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
  }
  uVar1 = *(int *)(param_1 + 4) - 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1 >> 0x1f;
}


/* sub_08010098 @ 0x08010098 */

undefined4 * sub_08010098(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024C48;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_080100BE @ 0x080100BE */

undefined4 * sub_080100BE(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024C48;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_080100EC @ 0x080100EC */

void sub_080100EC(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_080076BC();
  }
  else if (*(int *)(param_2 + 0x28) != *(int *)(&gUnknown_086D0DC4 + (uint)(bVar1 >> 2) * 4)) {
    sub_080076EE();
  }
  return;
}


/* sub_08010118 @ 0x08010118 */

void sub_08010118(void)

{
  sub_0801F110();
  return;
}


/* sub_08010124 @ 0x08010124 */

void sub_08010124(int param_1)

{
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined4 local_10;
  
  sub_08020E5C(local_44,0x20,8);
  local_38 = &gUnknown_086FF0CC;
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_38 = &gUnknown_08028724;
  }
  local_1b = (undefined1)*(undefined4 *)(param_1 + 0x18);
  local_1c = 1;
  local_24 = 0x8020fdd;
  local_44[0] = 1;
  local_3c = 7;
  local_40 = 0x10;
  *(undefined1 *)(param_1 + 8) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  sub_08021F18(local_20,0,local_10);
  sub_0801F6D8(local_44,&_080102EC,*(undefined4 *)(param_1 + 0x14));
  sub_080236CC((int)local_44,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,0x86d1bd8);
  sub_08020EAA(local_44,0);
  return;
}


/* sub_08010194 @ 0x08010194 */

undefined4 *
sub_08010194(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_080255A4;
    param_1[5] = param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    iVar2 = param_2[1];
    param_1[8] = (*param_2 + -0x10) * 8;
    param_1[9] = iVar2 << 3;
    sub_08010124(param_1);
  }
  return param_1;
}


/* sub_080101F6 @ 0x080101F6 */

void sub_080101F6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -4;
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 4) = (iVar1 >> 3) + 8;
  }
  return;
}


/* sub_0801021C @ 0x0801021C */

undefined4 sub_0801021C(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x40006000;
  uVar1 = (uint)(((*(int *)(param_1 + 0x20) >> 3) - DAT_030010ac) * 0x800000) >> 7 | 0x40006000;
  *puVar2 = uVar1;
  *puVar2 = uVar1 | (*(int *)(param_1 + 0x24) >> 3) - DAT_030010b0 & 0xffU;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000;
  return 0;
}


/* sub_08010272 @ 0x08010272 */

undefined4 sub_08010272(void)

{
  return 1;
}


/* sub_08010276 @ 0x08010276 */

undefined4 sub_08010276(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 8) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else if (param_2 == 10) {
    __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  }
  return 0;
}


/* sub_080102A2 @ 0x080102A2 */

undefined4 sub_080102A2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  iVar1 = sub_08006D70(&DAT_03001120);
  if (iVar1 < 0x100) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_08010194(0,param_1,param_2,param_3,param_4,param_1,uVar2,uVar3,uVar4);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return uVar2;
}


/* sub_08010304 @ 0x08010304 */

void sub_08010304(int param_1)

{
  int iVar1;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined4 local_10;
  
  sub_08020E5C(local_44,0x20,0x10);
  local_1b = *(undefined1 *)(*(int *)(param_1 + 0x14) + 5);
  local_1c = 1;
  local_24 = 0x8020ec3;
  local_38 = &gUnknown_086FD4FC;
  local_40 = 0x10;
  local_3c = 0xc;
  local_44[0] = 1;
  sub_08021F18(local_20,0,local_10);
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar1 + 5) == '\x02') ||
     (((&DAT_03000eb0)[(uint)*(byte *)(iVar1 + 7) * 7] & 1) == 0)) {
    sub_0801F6D8(local_44,&_080104A4);
  }
  else {
    sub_0801F6D8(local_44,&_080104A0,*(undefined1 *)(iVar1 + 6));
  }
  sub_08021344(local_44,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  sub_08020EAA(local_44,0);
  return;
}


/* sub_0801038C @ 0x0801038C */

undefined4 * sub_0801038C(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x200;
  uVar1 = sub_080067AC(&DAT_03001120,0x200);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08025BE0;
  param_1[5] = param_2;
  iVar2 = sub_08006E0A(&DAT_03001120,6,*(undefined1 *)(param_2 + 4));
  param_1[4] = iVar2;
  param_1[1] = *(int *)(iVar2 + 4) + 1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 8);
  sub_08010304(param_1);
  return param_1;
}


/* sub_080103E0 @ 0x080103E0 */

void sub_080103E0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1(*(int **)(param_1 + 0x10),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_080103F0 @ 0x080103F0 */

undefined4 sub_080103F0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_2;
  *param_2 = puVar3 + 2;
  *puVar3 = 0x80006000;
  uVar1 = (((uint)**(ushort **)(param_1 + 0x14) - DAT_030010ac) + -0x10) * 0x800000 >> 7 |
          0x80006000;
  *puVar3 = uVar1;
  *puVar3 = uVar1 | ((uint)*(ushort *)(*(int *)(param_1 + 0x14) + 2) - DAT_030010b0) + 0xf8 & 0xff;
  uVar2 = puVar3[1];
  uVar1 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar3[1] = uVar1 | uVar2 & 0xfffff3ff;
  puVar3[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar1 | uVar2 & 0xfffff000;
  return 0;
}


/* sub_08010464 @ 0x08010464 */

undefined4 sub_08010464(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_08010466 @ 0x08010466 */

undefined4 sub_08010466(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    return 2;
  }
  return 0;
}


/* sub_08010470 @ 0x08010470 */

void sub_08010470(undefined4 param_1)

{
  sub_080068A6();
  sub_08010304(param_1);
  return;
}


/* sub_08010480 @ 0x08010480 */

undefined4 sub_08010480(undefined4 param_1,int param_2)

{
  if (param_2 == 9) {
    sub_08010304();
  }
  return 0;
}


/* sub_080104C0 @ 0x080104C0 */

undefined4 * sub_080104C0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  char extraout_r1;
  char extraout_r1_00;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x200;
    uVar1 = sub_080067AC(&DAT_03001120,0x200);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025748;
    param_1[4] = param_2;
    *(undefined1 *)(param_1 + 5) = 0xff;
    *(undefined1 *)(param_1 + 2) = 4;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0xf8;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    sub_08027EF8(param_3 * 0x3c);
    *(char *)((int)param_1 + 0x15) = extraout_r1;
    sub_08027EF8(param_4 * 0x3c);
    *(char *)((int)param_1 + 0x16) = extraout_r1_00 - extraout_r1;
  }
  return param_1;
}


/* sub_0801052C @ 0x0801052C */

void sub_0801052C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x17)) * 0x1000000;
  iVar2 = iVar1 >> 0x18;
  *(char *)(param_1 + 0x18) = (char)((uint)iVar1 >> 0x18);
  if (iVar2 < -8) {
    sub_080068CA(&DAT_03001120,param_1,0xfffffff8,param_4,param_4);
  }
  else if (8 < iVar2) {
    *(undefined1 *)(param_1 + 0x18) = 8;
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}


/* sub_0801055C @ 0x0801055C */

undefined4 sub_0801055C(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_214 [512];
  
  puVar1 = (uint *)*param_2;
  *puVar1 = 0x40a06000;
  *puVar1 = *(byte *)(param_1 + 0x18) | 0x40a06000;
  uVar3 = puVar1[1];
  puVar1[1] = uVar3 & 0xfffff3ff;
  puVar1[1] = uVar3 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[2] = 0x40c06000;
  puVar1[2] = *(byte *)(param_1 + 0x18) | 0x40c06000;
  uVar3 = puVar1[3];
  puVar1[3] = uVar3 & 0xfffff3ff;
  puVar1[3] = uVar3 & 0xfffff000 | *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
  *param_2 = puVar1 + 4;
  uVar3 = (uint)*(byte *)(param_1 + 0x15);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar2 = __16__rt_sdiv(*(undefined4 *)(*(int *)(iVar2 + 0x180) + 4),
                          *(int *)(iVar2 + 0x188) * (uint)*(byte *)(param_1 + 0x16));
    uVar3 = iVar2 + uVar3;
  }
  if (*(byte *)(param_1 + 0x14) != uVar3) {
    *(char *)(param_1 + 0x14) = (char)uVar3;
    REG_DMA3SAD = 0x86d64b4;
    REG_DMA3DAD = auStack_214;
    Ram040000dc = 0x80;
    DAT_040000de = 0x8400;
    for (; (int)uVar3 < 0x3c; uVar3 = uVar3 + 1) {
      iVar2 = uVar3 * 0x10;
      auStack_214[*(int *)(&DAT_086d60f4 + iVar2)] = 1;
      auStack_214[*(int *)(&DAT_086d60f8 + iVar2)] = 1;
      auStack_214[*(int *)(&DAT_086d60fc + iVar2)] = 1;
      auStack_214[*(int *)(&DAT_086d6100 + iVar2)] = 1;
    }
    REG_DMA3SAD = auStack_214;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x80;
    DAT_040000de = 0x8400;
  }
  return 0;
}


/* sub_08010628 @ 0x08010628 */

undefined4 sub_08010628(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 9) {
    *(undefined1 *)(param_1 + 5) = 0xff;
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    iVar2 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    uVar1 = 0;
  }
  else if (param_2 == 0xf) {
    if (param_1[4] == param_3) {
      param_1[4] = 0;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0x10) {
    *(undefined1 *)((int)param_1 + 0x17) = 0xff;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801066A @ 0x0801066A */

undefined4 sub_0801066A(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_08010698 @ 0x08010698 */

void sub_08010698(void)

{
  return;
}


/* sub_0801069A @ 0x0801069A */

void sub_0801069A(int param_1)

{
  undefined4 local_5c [17];
  undefined4 local_18;
  
  local_5c[0] = 0;
  local_18 = 0;
  sub_080092E4(local_5c,*(undefined4 *)(param_1 + 4),0);
  return;
}


/* sub_080106B2 @ 0x080106B2 */

void sub_080106B2(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_28 [28];
  undefined2 local_c [2];
  
  local_c[0] = 0;
  sub_0800B4AE(auStack_28,*(undefined4 *)(param_1 + 4),local_c,&gUnknown_086D66B4,0);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_28;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_28,0);
  return;
}


/* sub_080106F8 @ 0x080106F8 */

void sub_080106F8(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 4) < 0x81) {
    bVar1 = *(byte *)(param_1 + 4) + *(char *)(param_1 + 5);
    *(byte *)(param_1 + 4) = bVar1;
    if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086D75F8)[bVar1 >> 5]) {
      sub_080076EE(param_2);
    }
  }
  return;
}


/* sub_08010722 @ 0x08010722 */

void sub_08010722(void)

{
  sub_0801F110();
  return;
}


/* sub_08010730 @ 0x08010730 */

void sub_08010730(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086D760C)[(uint)(iVar1 * 0x10000000) >> 0x1e]) {
    sub_080076EE();
  }
  return;
}


/* sub_08010752 @ 0x08010752 */

void sub_08010752(void)

{
  sub_0801F110();
  return;
}


/* sub_08010760 @ 0x08010760 */

void sub_08010760(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x14c;
  return;
}


/* sub_08010774 @ 0x08010774 */

void sub_08010774(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x38) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_0801079A @ 0x0801079A */

void sub_0801079A(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xdc;
  puVar1 = (undefined4 *)sub_0801F08C(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800DA68(puVar1);
    puVar1[0x102] = 0xb4;
    puVar1[0x101] = 0;
    *puVar1 = &_08025DF0;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}


/* sub_0801079C @ 0x0801079C */

void sub_0801079C(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xdc;
  puVar1 = (undefined4 *)sub_0801F08C(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800DA68(puVar1);
    puVar1[0x102] = 0xb4;
    puVar1[0x101] = 0;
    *puVar1 = &_08025DF0;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}


/* sub_080107D4 @ 0x080107D4 */

void sub_080107D4(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    *(short *)(param_2 + 5) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
    if ((0x78 < uVar2) &&
       (iVar3 = **(int **)(param_1 + 4),
       iVar3 = __call_via_r1(*(int **)(param_1 + 4),*(int *)(iVar3 + 0x14) + iVar3), iVar3 != 0)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
  }
  return;
}


/* sub_08010818 @ 0x08010818 */

void sub_08010818(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


