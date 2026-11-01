/* Ghidra reference decompilation of code_08014D58 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08014D58 @ 0x08014D58 */

void sub_08014D58(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)DAT_03000e90;
  iVar2 = (uint)(byte)(&DAT_03000ea4)[uVar3 * 0x1c] * 0x14;
  iVar4 = **(int **)(&DAT_081d968c + iVar2);
  __call_via_r1(*(int **)(&DAT_081d968c + iVar2),*(int *)(iVar4 + 0xc) + iVar4);
  if (param_2 == 0) {
    bVar1 = (&DAT_081d9681)[iVar2];
  }
  else {
    bVar1 = (&DAT_081d9680)[iVar2];
  }
  (&DAT_03000ea4)[uVar3 * 0x1c] = bVar1;
  iVar2 = sub_08009324((&DAT_081d967d)[(uint)bVar1 * 0x14]);
  param_1[0x12] = iVar2;
  __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
  sub_080086A2(param_1);
  iVar2 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
  __call_via_r1(*(int **)(&DAT_081d968c +
                         (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                *(int *)(iVar2 + 8) + iVar2);
  return;
}


/* sub_08014DE0 @ 0x08014DE0 */

void sub_08014DE0(int param_1,int param_2)

{
  sub_0800E248();
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_2 + 0x12) = 8;
  return;
}


/* sub_08014DF4 @ 0x08014DF4 */

void sub_08014DF4(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    if (uVar1 == 0x10) {
      *(undefined2 *)(param_2 + 5) = 1;
    }
  }
  else {
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if ((*(char *)(param_1 + 4) == '\0') || (*(short *)(&DAT_03000ea0 + iVar2) < 3)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(short *)(&DAT_03000ea0 + iVar2) = *(short *)(&DAT_03000ea0 + iVar2) + -2;
    *(short *)(param_2 + 5) = 3 - (short)param_2[5];
    *(undefined2 *)((int)param_2 + 0x12) = 0x10;
  }
  if ((*(ushort *)((int)param_2 + 0x12) & 0xf) == 0) {
    sub_08007A26(auStack_18,param_2);
    if ((DAT_03000e90 == 0) && (1 < *(byte *)(param_2 + 4))) {
      iStack_14 = iStack_14 + 2;
    }
    sub_0800EAD8(auStack_18,param_2);
  }
  return;
}


/* sub_08014E86 @ 0x08014E86 */

void sub_08014E86(int param_1)

{
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


/* sub_08014E98 @ 0x08014E98 */

void sub_08014E98(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x31) {
    if ((uVar1 < 0x20) &&
       (*(ushort *)(param_2 + 5) = uVar1 >> 4, *(short *)((int)param_2 + 0x12) == 0x10)) {
      puVar2 = &UNK_086e362c + (uint)*(byte *)(param_2 + 4) * 0x48;
      iVar3 = 0;
      do {
        sub_0800791A(auStack_24,param_2);
        sub_08027E9C(auStack_1c,auStack_24,puVar2);
        sub_0801396E(auStack_1c,*(undefined4 *)(puVar2 + 0x14),param_2,puVar2 + 8,
                     *(undefined4 *)(puVar2 + 0x10));
        puVar2 = puVar2 + 0x18;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      iVar3 = sub_0802141C(2);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar3 + 0xd) * 0xc,0x40,0);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08014F30 @ 0x08014F30 */

void sub_08014F30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  sub_0800E248();
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  *(undefined4 *)(param_1 + 4) = 0xffffff4c;
  sub_0800791A(auStack_24,param_2);
  sub_08027E9C(auStack_1c,auStack_24,&gUnknown_086E374C + iVar1);
  uVar2 = sub_080139BC(0,auStack_1c,*(undefined4 *)(&DAT_086e3754 + iVar1),param_2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  return;
}


/* sub_08014F80 @ 0x08014F80 */

void sub_08014F80(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1e;
  return;
}


/* sub_08014F88 @ 0x08014F88 */

void sub_08014F88(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    if ((int)((uint)DAT_030022b2 << 0x1e) < 0) {
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined2 *)(param_2 + 5) = 1;
      sub_08013B12(*(undefined4 *)(param_1 + 8),(char)param_2[4],*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = sub_0802141C(2);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
      return;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_08015004 @ 0x08015004 */

void sub_08015004(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    sub_080068CA(&DAT_03001120,*(int *)(param_1 + 8),param_3,param_4,param_4);
  }
  return;
}


/* sub_08015018 @ 0x08015018 */

void sub_08015018(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  sub_0800E248();
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0800791A(auStack_24,param_2);
  sub_08027E9C(auStack_1c,auStack_24,&gUnknown_086E377C + iVar1);
  uVar2 = sub_08013E48(0,auStack_1c,*(undefined4 *)(&DAT_086e3784 + iVar1),param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  return;
}


/* sub_08015062 @ 0x08015062 */

void sub_08015062(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_080068CA(&DAT_03001120,*(int *)(param_1 + 4),param_3,param_4,param_4);
  }
  return;
}


/* sub_08015076 @ 0x08015076 */

void sub_08015076(void)

{
  return;
}


/* sub_08015078 @ 0x08015078 */

void sub_08015078(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 != 0) {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    return;
  }
  if ((int)((uint)DAT_030022b2 << 0x1e) < 0) {
    *(undefined2 *)((int)param_2 + 0x12) = 1;
    *(undefined2 *)(param_2 + 5) = 1;
    sub_08014160(*(undefined4 *)(param_1 + 4),(char)param_2[4]);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
  }
  else {
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if (*(short *)(&DAT_03000ea0 + iVar2) < 1) {
      *(short *)(&DAT_03000ea0 + iVar2) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar2) = *(short *)(&DAT_03000ea0 + iVar2) + -1;
    }
    if (*(short *)(&DAT_03000ea0 + iVar2) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x48) = 0;
      return;
    }
  }
  return;
}


/* sub_08015114 @ 0x08015114 */

void sub_08015114(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  sub_0800E248();
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0800791A(auStack_24,param_2);
  sub_08027E9C(auStack_1c,auStack_24,&UNK_086e37ac + iVar1);
  uVar2 = sub_080141B4(0,auStack_1c,*(undefined4 *)(&DAT_086e37b4 + iVar1),param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  return;
}


/* sub_08015160 @ 0x08015160 */

void sub_08015160(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_080068CA(&DAT_03001120,*(int *)(param_1 + 4),param_3,param_4,param_4);
  }
  return;
}


/* sub_08015174 @ 0x08015174 */

void sub_08015174(void)

{
  return;
}


/* sub_08015176 @ 0x08015176 */

void sub_08015176(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    if ((int)((uint)DAT_030022b2 << 0x1e) < 0) {
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined2 *)(param_2 + 5) = 1;
      sub_08014350(*(undefined4 *)(param_1 + 4),(char)param_2[4]);
      *(undefined4 *)(param_1 + 4) = 0;
      iVar2 = sub_0802141C(2);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
      return;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_080151DC @ 0x080151DC */

void sub_080151DC(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x16c;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0800791A(auStack_24,param_2);
  sub_08027E9C(auStack_1c,auStack_24,&UNK_086e37dc + iVar1);
  uVar2 = sub_080143A8(0,auStack_1c,*(undefined4 *)(&DAT_086e37e4 + iVar1),param_2,0x400,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0801523E @ 0x0801523E */

void sub_0801523E(int param_1)

{
  sub_0801451C(*(undefined4 *)(param_1 + 8));
  return;
}


/* sub_08015248 @ 0x08015248 */

void sub_08015248(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      if ((int)((uint)DAT_030022ae << 0x1e) < 0) {
        sub_0800791A(auStack_24,param_2);
        sub_08027E9C(auStack_1c,auStack_24,&UNK_086e380c + (uint)*(byte *)(param_2 + 4) * 8);
        sub_08014478(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_1c);
      }
      else {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    iVar3 = *(int *)(param_1 + 4) + 0x56;
    *(int *)(param_1 + 4) = iVar3;
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if ((int)*(short *)(&DAT_03000ea0 + iVar2) < iVar3 >> 8) {
      *(short *)(&DAT_03000ea0 + iVar2) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar2) =
           *(short *)(&DAT_03000ea0 + iVar2) - (short)((uint)iVar3 >> 8);
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    if (*(short *)(&DAT_03000ea0 + iVar2) == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(short *)(param_2 + 5) =
           1 - (short)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      if (-1 < (int)((uint)DAT_030022ae << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_08015328 @ 0x08015328 */

void sub_08015328(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801533A @ 0x0801533A */

void sub_0801533A(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x16c;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0xc;
  sub_0800791A(auStack_24,param_2);
  sub_08027E9C(auStack_1c,auStack_24,&gUnknown_086E382C + iVar1);
  uVar2 = sub_080157E0(0,auStack_1c,*(undefined4 *)(&DAT_086e3834 + iVar1),param_2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  sub_080068B8(&DAT_03001120,uVar2);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_08015390 @ 0x08015390 */

void sub_08015390(int param_1)

{
  sub_0801592E(*(undefined4 *)(param_1 + 8));
  return;
}


/* sub_0801539A @ 0x0801539A */

void sub_0801539A(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (0x17 < uVar1) {
    if (uVar1 == 0x18) {
      if ((int)((uint)DAT_030022ae << 0x1e) < 0) {
        sub_0800791A(auStack_24,param_2);
        sub_08027E9C(auStack_1c,auStack_24,&UNK_086e385c + (uint)*(byte *)(param_2 + 4) * 8);
        sub_0801585A(*(undefined4 *)(param_1 + 8),(char)param_2[4],auStack_1c);
      }
      else {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    iVar3 = *(int *)(param_1 + 4) + 0x22;
    *(int *)(param_1 + 4) = iVar3;
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if ((int)*(short *)(&DAT_03000ea0 + iVar2) < iVar3 >> 8) {
      *(short *)(&DAT_03000ea0 + iVar2) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar2) =
           *(short *)(&DAT_03000ea0 + iVar2) - (short)((uint)iVar3 >> 8);
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
    if (*(short *)(&DAT_03000ea0 + iVar2) == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    else {
      *(short *)(param_2 + 5) =
           1 - (short)((int)((uint)*(ushort *)((int)param_2 + 0x12) << 0x1c) >> 0x1f);
      if (-1 < (int)((uint)DAT_030022ae << 0x1e)) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
  }
  return;
}


/* sub_08015466 @ 0x08015466 */

void sub_08015466(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_08015478 @ 0x08015478 */

void sub_08015478(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int local_28;
  int local_18;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x16c;
  local_34 = *(undefined1 *)(param_2 + 0x10);
  local_2c = &gUnknown_086DB32C;
  local_30 = 0x400;
  local_48[0] = 1;
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 0x10;
  local_28 = param_2;
  local_18 = param_2;
  sub_0800791A(auStack_50);
  sub_08027E9C(&local_70,&DAT_086e387c + iVar1,auStack_50);
  sub_08027E9C(&local_68,&UNK_086e3884 + iVar1,auStack_50);
  local_60 = local_70;
  local_5c = uStack_6c;
  local_58 = local_68;
  local_54 = uStack_64;
  local_44 = local_70;
  uStack_40 = uStack_6c;
  uStack_3c = local_68;
  uStack_38 = uStack_64;
  iVar1 = sub_08006DA6(&DAT_03001120,0,local_48);
  if (iVar1 != 0) {
    iVar1 = sub_0802141C(3);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
  }
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x25) * 0xc,0x40,0);
  return;
}


/* sub_0801553A @ 0x0801553A */

void sub_0801553A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(ushort *)(param_2 + 5) = uVar1 >> 2;
  }
  else if (0x20 < uVar1) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}


/* sub_08015564 @ 0x08015564 */

void sub_08015564(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  
  if (*(short *)(param_2 + 0x12) == 8) {
    sub_0800791A(auStack_1c,param_2);
    sub_08027E9C(auStack_14,auStack_1c,&UNK_086e38bc + (uint)*(byte *)(param_2 + 0x10) * 8);
    uVar1 = sub_08015F10(0,auStack_14,*(undefined1 *)(param_2 + 0x10),param_2);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}


/* sub_080155A8 @ 0x080155A8 */

void sub_080155A8(undefined4 param_1,undefined4 param_2)

{
  sub_0801FC9C(&DAT_03002c80,&DAT_080e1844,0x40,0);
  sub_08011D38(param_1,param_2);
  return;
}


/* sub_080155E4 @ 0x080155E4 */

void sub_080155E4(void)

{
  DAT_03000e98 = DAT_03000e98 + 8;
  sub_08011D4A();
  return;
}


/* sub_080155F6 @ 0x080155F6 */

void sub_080155F6(void)

{
  undefined4 in_r3;
  
  sub_0801FC22(&DAT_03002c80,&DAT_080e1844,0x5c4,in_r3,in_r3);
  return;
}


/* sub_0801560E @ 0x0801560E */

void sub_0801560E(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    DAT_03000e98 = DAT_03000e98 + 0x14;
    *(ushort *)(param_2 + 0x14) = *(ushort *)(param_2 + 0x12) >> 4;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  }
  return;
}


/* sub_0801563C @ 0x0801563C */

void sub_0801563C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E16C4,0x40,0,param_4);
  sub_08014D58(param_2,1);
  return;
}


/* sub_0801565C @ 0x0801565C */

void sub_0801565C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x17c;
  sub_0800791A(auStack_20,param_2);
  sub_08027E9C(auStack_18,auStack_20,&DAT_086e3624);
  uVar1 = sub_080165EC(0,auStack_18,param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_080156A8 @ 0x080156A8 */

void sub_080156A8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08016A26();
  }
  return;
}


/* sub_080156B6 @ 0x080156B6 */

void sub_080156B6(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  
  if (*(short *)((int)param_2 + 0x12) == 0) {
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    if (*(short *)(&DAT_03000ea0 + iVar2) < 1) {
      *(short *)(&DAT_03000ea0 + iVar2) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar2) = *(short *)(&DAT_03000ea0 + iVar2) + -1;
    }
    if (*(short *)(&DAT_03000ea0 + iVar2) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x48) = 0;
    }
    if (-1 < (int)((uint)DAT_030022ae << 0x1e)) {
      iVar2 = *(int *)(param_1 + 4);
      sub_0800791A(auStack_24,param_2);
      sub_08027E9C(&iStack_1c,auStack_24,&gUnknown_086E38DC + (uint)*(byte *)(param_2 + 4) * 8);
      *(int *)(iVar2 + 0x20) = iStack_1c << 8;
      *(int *)(iVar2 + 0x24) = iStack_18 << 8;
      *(undefined2 *)((int)param_2 + 0x12) = 8;
    }
  }
  else {
    uVar1 = *(short *)((int)param_2 + 0x12) + 1;
    *(ushort *)((int)param_2 + 0x12) = uVar1;
    if (uVar1 < 0x20) {
      *(ushort *)(param_2 + 5) = uVar1 >> 3;
      if (*(short *)((int)param_2 + 0x12) == 0x10) {
        sub_0800791A(auStack_24,param_2);
        sub_08027E9C(&iStack_1c,auStack_24,&UNK_086e38fc + (uint)*(byte *)(param_2 + 4) * 8);
        sub_080169B8(*(undefined4 *)(param_1 + 4),&iStack_1c,(char)param_2[4]);
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}


/* sub_08015788 @ 0x08015788 */

void sub_08015788(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0801579A @ 0x0801579A */

void sub_0801579A(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x163) = 0;
  *(undefined1 *)(param_2 + 0x164) = 0;
  sub_08013578();
  return;
}


/* sub_080157AE @ 0x080157AE */

void sub_080157AE(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08014D58(param_2,0,param_3,param_4,param_4);
  return;
}


/* sub_080157BA @ 0x080157BA */

void sub_080157BA(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  return;
}


/* sub_080157E0 @ 0x080157E0 */

undefined4 *
sub_080157E0(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x4c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x300;
    uVar1 = sub_080067AC(&DAT_03001120,0x300);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_080259F0;
    uVar2 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar2;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[1] = param_2[1];
    param_1[0x12] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xd] = 8;
    param_1[0x10] = &gUnknown_086E3B48;
    param_1[0xf] = &gUnknown_086E3B48;
    param_1[6] = 0;
    REG_DMA3SAD = 0x86e3948;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
    Ram040000dc = 0x40;
    DAT_040000de = 0x8400;
  }
  return param_1;
}


/* sub_0801585A @ 0x0801585A */

void sub_0801585A(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x38) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x20) = param_3[1];
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined **)(param_1 + 0x44) = &gUnknown_086E4560 + param_2 * 0x54;
  *(undefined **)(param_1 + 0x40) = &gUnknown_086E4560 + param_2 * 0x54;
  uVar1 = *(undefined4 *)(&DAT_086e3928 + param_2 * 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(&DAT_086e392c + param_2 * 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  REG_DMA3SAD = *(undefined4 *)(&DAT_086e4568 + param_2 * 0x54);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x44);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  *(undefined1 *)(param_1 + 0x10) = 1;
  sub_0801FC9C(&DAT_03002c80,&DAT_080e1814,0x40,0);
  return;
}


/* sub_080158E8 @ 0x080158E8 */

void sub_080158E8(undefined4 *param_1,int param_2)

{
  *param_1 = &_080259F0;
  if (*(char *)(param_1 + 4) != '\0') {
    sub_0801FC22(&DAT_03002c80,&DAT_080e1814);
  }
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0801592E @ 0x0801592E */

void sub_0801592E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 2;
  }
  return;
}


/* sub_0801594C @ 0x0801594C */

void sub_0801594C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    iVar2 = iVar2 * 0x20000000 >> 0x1f;
    iVar4 = iVar2 * -0xc;
    puVar5 = &gUnknown_086E3B48 + iVar4;
    *(undefined **)(param_1 + 0x40) = puVar5;
    if (puVar5 == *(undefined **)(param_1 + 0x3c)) {
      return;
    }
    *(undefined **)(param_1 + 0x3c) = puVar5;
    REG_DMA3SAD = (&DAT_086e3b50)[iVar2 * -3];
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = (short)((uint)(byte)(&DAT_086e3b4b)[iVar4] * (uint)(byte)(&DAT_086e3b4a)[iVar4] >>
                         2);
    DAT_040000de = 0x8400;
  }
  else if (cVar1 == '\x01') {
    if (param_2 == 0) goto _0801599A;
    iStack_24 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
    local_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
    uStack_30 = *(undefined4 *)(param_1 + 0x48);
    uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x38);
    puStack_34 = &gUnknown_086DB324;
    uStack_38 = 0x400;
    auStack_50[0] = 1;
    iStack_4c = iStack_24 + -4;
    iStack_48 = local_18 + -4;
    iStack_44 = iStack_24 + 4;
    iStack_40 = local_18 + 4;
    iStack_20 = param_1;
    local_1c = iStack_24;
    iVar2 = sub_08005D6C(&iStack_4c,DAT_03001100);
    if ((((iVar2 != 0) && (DAT_0300109c < iStack_44)) && (iStack_4c < DAT_030010a4)) &&
       ((DAT_030010a0 < iStack_40 && (iStack_48 < DAT_030010a8)))) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 3;
    }
    local_1c = local_1c + *(int *)(param_1 + 0x2c) * 8;
    local_18 = local_18 + *(int *)(param_1 + 0x30) * 8;
    piVar8 = (int *)(param_1 + 0x1c);
    piVar7 = piVar8;
    if (local_1c < *(int *)(param_1 + 0x1c)) {
      piVar7 = &local_1c;
    }
    iStack_4c = *piVar7 + -6;
    piVar6 = (int *)(param_1 + 0x20);
    piVar7 = piVar6;
    if (local_18 < *(int *)(param_1 + 0x20)) {
      piVar7 = &local_18;
    }
    iStack_48 = *piVar7 + -6;
    if (*piVar8 < local_1c) {
      piVar8 = &local_1c;
    }
    iStack_44 = *piVar8 + 6;
    piVar8 = piVar6;
    if (*piVar6 < local_18) {
      piVar8 = &local_18;
    }
    iStack_40 = *piVar8 + 6;
    iVar2 = sub_08006DA6(&DAT_03001120,0,auStack_50,*piVar6,local_1c,local_18);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x18) < 0)) {
      iVar2 = sub_0802141C(6);
      *(int *)(param_1 + 0x18) = iVar2 + 4;
      iVar2 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
    }
  }
  else {
    if (cVar1 != '\x02') goto _0801599A;
    local_1c = *(int *)(param_1 + 0x2c) * 3;
    local_18 = *(int *)(param_1 + 0x30) * 3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_1c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_18;
    iVar2 = *(int *)(param_1 + 0x34) + -3;
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 < 8) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
_0801599A:
  uVar3 = *(int *)(param_1 + 0x14) + 1;
  *(uint *)(param_1 + 0x14) = uVar3;
  if ((uVar3 & 3) == 0) {
    if ((int)(uVar3 * 0x20000000) < 0) {
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x40;
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
      Ram040000dc = 0x30;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x60101c0;
      Ram040000dc = 0x10;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x50);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
    }
    else {
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x44);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
    }
  }
  return;
}


/* sub_08015C20 @ 0x08015C20 */

void sub_08015C20(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    iVar2 = iVar2 * 0x20000000 >> 0x1f;
    iVar4 = iVar2 * -0xc;
    puVar5 = &gUnknown_086E3B48 + iVar4;
    *(undefined **)(param_1 + 0x40) = puVar5;
    if (puVar5 == *(undefined **)(param_1 + 0x3c)) {
      return;
    }
    *(undefined **)(param_1 + 0x3c) = puVar5;
    REG_DMA3SAD = (&DAT_086e3b50)[iVar2 * -3];
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = (short)((uint)(byte)(&DAT_086e3b4b)[iVar4] * (uint)(byte)(&DAT_086e3b4a)[iVar4] >>
                         2);
    DAT_040000de = 0x8400;
  }
  else if (cVar1 == '\x01') {
    iStack_24 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
    iStack_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
    uStack_30 = *(undefined4 *)(param_1 + 0x48);
    uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x38);
    puStack_34 = &gUnknown_086DB324;
    uStack_38 = 0x400;
    auStack_50[0] = 1;
    iStack_4c = iStack_24 + -4;
    iStack_48 = iStack_18 + -4;
    iStack_44 = iStack_24 + 4;
    iStack_40 = iStack_18 + 4;
    iStack_20 = param_1;
    iStack_1c = iStack_24;
    iVar2 = sub_08005D6C(&iStack_4c,DAT_03001100);
    if ((((iVar2 != 0) && (DAT_0300109c < iStack_44)) && (iStack_4c < DAT_030010a4)) &&
       ((DAT_030010a0 < iStack_40 && (iStack_48 < DAT_030010a8)))) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 3;
    }
    iStack_1c = iStack_1c + *(int *)(param_1 + 0x2c) * 8;
    iStack_18 = iStack_18 + *(int *)(param_1 + 0x30) * 8;
    piVar8 = (int *)(param_1 + 0x1c);
    piVar7 = piVar8;
    if (iStack_1c < *(int *)(param_1 + 0x1c)) {
      piVar7 = &iStack_1c;
    }
    iStack_4c = *piVar7 + -6;
    piVar6 = (int *)(param_1 + 0x20);
    piVar7 = piVar6;
    if (iStack_18 < *(int *)(param_1 + 0x20)) {
      piVar7 = &iStack_18;
    }
    iStack_48 = *piVar7 + -6;
    if (*piVar8 < iStack_1c) {
      piVar8 = &iStack_1c;
    }
    iStack_44 = *piVar8 + 6;
    piVar8 = piVar6;
    if (*piVar6 < iStack_18) {
      piVar8 = &iStack_18;
    }
    iStack_40 = *piVar8 + 6;
    iVar2 = sub_08006DA6(&DAT_03001120,0,auStack_50,*piVar6,iStack_1c,iStack_18);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x18) < 0)) {
      iVar2 = sub_0802141C(6);
      *(int *)(param_1 + 0x18) = iVar2 + 4;
      iVar2 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
    }
  }
  else {
    if (cVar1 != '\x02') goto _0801599A;
    iStack_1c = *(int *)(param_1 + 0x2c) * 3;
    iStack_18 = *(int *)(param_1 + 0x30) * 3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iStack_1c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iStack_18;
    iVar2 = *(int *)(param_1 + 0x34) + -3;
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 < 8) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
_0801599A:
  uVar3 = *(int *)(param_1 + 0x14) + 1;
  *(uint *)(param_1 + 0x14) = uVar3;
  if ((uVar3 & 3) == 0) {
    if ((int)(uVar3 * 0x20000000) < 0) {
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x40;
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
      Ram040000dc = 0x30;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x60101c0;
      Ram040000dc = 0x10;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x50);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
    }
    else {
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
      REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x44);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
    }
  }
  return;
}


/* sub_08015C24 @ 0x08015C24 */

undefined4 sub_08015C24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_0300109c;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030010a0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}


/* sub_08015C50 @ 0x08015C50 */

undefined4 sub_08015C50(int param_1,int *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0x10);
  puVar2 = (uint *)*param_2;
  if (cVar1 == '\0') {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x40) + 4);
    *puVar2 = uVar3;
    uVar5 = (uint)((*(int *)(param_1 + 0x24) - (int)**(char **)(param_1 + 0x40)) * 0x800000) >> 7;
    *puVar2 = uVar5 | uVar3 & 0xfe00ffff;
    *puVar2 = uVar5 | uVar3 & 0xfe00ff00 |
              *(int *)(param_1 + 0x28) - (uint)*(byte *)(*(int *)(param_1 + 0x40) + 1) & 0xff;
    uVar5 = puVar2[1];
    uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
    puVar2[1] = uVar3 | uVar5 & 0xfffffc00;
    puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar3 | uVar5 & 0xfffff000;
    puVar2 = puVar2 + 2;
  }
  else {
    if (cVar1 == '\x01') {
      uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 4);
      *puVar2 = uVar5;
      uVar3 = (uint)((*(int *)(param_1 + 0x24) + (int)**(char **)(param_1 + 0x44)) * 0x800000) >> 7;
      *puVar2 = uVar3 | uVar5 & 0xfe00ffff;
      *puVar2 = uVar3 | uVar5 & 0xfe00ff00 |
                *(int *)(param_1 + 0x28) + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 1) & 0xff;
      uVar5 = puVar2[1];
      uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
      puVar2[1] = uVar3 | uVar5 & 0xfffffc00;
      puVar2[1] = uVar3 | uVar5 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
      puVar2 = puVar2 + 2;
    }
    else if (cVar1 != '\x02') goto _08015ED0;
    uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 0x40);
    *puVar2 = uVar5;
    uVar3 = (uint)((*(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x44) + 0x3c) +
                   *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c)) * 0x800000) >> 7;
    *puVar2 = uVar3 | uVar5 & 0xfe00ffff;
    *puVar2 = uVar3 | uVar5 & 0xfe00ff00 |
              *(int *)(param_1 + 0x28) + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 0x3d) +
              *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) & 0xff;
    uVar5 = puVar2[1];
    uVar3 = *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff;
    puVar2[1] = uVar5 & 0xfffffc00 | uVar3;
    puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar5 & 0xfffff000 | uVar3;
    puVar2 = puVar2 + 2;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x34) + -0x19) {
      do {
        uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 0x34);
        *puVar2 = uVar5;
        uVar3 = (uint)((*(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x44) + 0x30) +
                       iVar4 * *(int *)(param_1 + 0x2c)) * 0x800000) >> 7;
        *puVar2 = uVar3 | uVar5 & 0xfe00ffff;
        *puVar2 = uVar3 | uVar5 & 0xfe00ff00 |
                  *(int *)(param_1 + 0x28) + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 0x31) +
                  iVar4 * *(int *)(param_1 + 0x30) & 0xff;
        uVar5 = puVar2[1];
        uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
        puVar2[1] = uVar3 | uVar5 & 0xfffffc00;
        puVar2[1] = uVar3 | uVar5 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
        puVar2 = puVar2 + 2;
        iVar4 = iVar4 + 0x20;
      } while (iVar4 < *(int *)(param_1 + 0x34) + -0x19);
    }
    if (iVar4 < *(int *)(param_1 + 0x34) + -9) {
      uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 0x28);
      *puVar2 = uVar5;
      uVar3 = (uint)((*(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x44) + 0x24) +
                     iVar4 * *(int *)(param_1 + 0x2c)) * 0x800000) >> 7;
      *puVar2 = uVar3 | uVar5 & 0xfe00ffff;
      *puVar2 = uVar3 | uVar5 & 0xfe00ff00 |
                *(int *)(param_1 + 0x28) + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 0x25) +
                iVar4 * *(int *)(param_1 + 0x30) & 0xff;
      uVar5 = puVar2[1];
      uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
      puVar2[1] = uVar3 | uVar5 & 0xfffffc00;
      puVar2[1] = uVar3 | uVar5 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + 0x10;
    }
    if (iVar4 < *(int *)(param_1 + 0x34) + -1) {
      uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 0x1c);
      *puVar2 = uVar5;
      uVar3 = (uint)((*(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x44) + 0x18) +
                     iVar4 * *(int *)(param_1 + 0x2c)) * 0x800000) >> 7;
      *puVar2 = uVar3 | uVar5 & 0xfe00ffff;
      *puVar2 = uVar3 | uVar5 & 0xfe00ff00 |
                *(int *)(param_1 + 0x28) + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 0x19) +
                iVar4 * *(int *)(param_1 + 0x30) & 0xff;
      uVar5 = puVar2[1];
      uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
      puVar2[1] = uVar3 | uVar5 & 0xfffffc00;
      puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 |
                  uVar3 | uVar5 & 0xfffff000;
      puVar2 = puVar2 + 2;
    }
  }
_08015ED0:
  *param_2 = (int)puVar2;
  return 0;
}


/* sub_08015EE0 @ 0x08015EE0 */

undefined4 sub_08015EE0(int param_1,int param_2)

{
  if (param_2 == 9) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 3;
  }
  else if (param_2 == 10) {
    sub_0801594C();
  }
  return 0;
}


/* sub_08015F04 @ 0x08015F04 */

undefined4 sub_08015F04(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08015F10 @ 0x08015F10 */

undefined4 * sub_08015F10(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x200,param_4);
    *param_1 = &_08024B24;
    param_1[0x12] = *(undefined4 *)(&gUnknown_086E46BC + param_3 * 8);
    param_1[0x13] = *(undefined4 *)(&DAT_086e46c0 + param_3 * 8);
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x11] = &gUnknown_086E5B0C + param_3 * 0x24;
    *(undefined1 *)(param_1 + 2) = 0x28;
    param_1[6] = &gUnknown_086E5B0C + param_3 * 0x24;
    param_1[0x10] = 0;
    sub_08013BF4(param_1);
  }
  return param_1;
}


/* sub_08015F76 @ 0x08015F76 */

void sub_08015F76(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_1 + 0x20) >> 8;
  local_c = *(int *)(param_1 + 0x24) >> 8;
  sub_080068CA(&DAT_03001120,param_1);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    uVar2 = sub_080135E0(0,&local_10,&gUnknown_086E53DC,4,0x2000,0x400,0x28);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}


/* sub_08015FC2 @ 0x08015FC2 */

void sub_08015FC2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = *(int *)(param_1 + 0x40) + 1;
  iVar2 = iVar1 >> 3;
  *(int *)(param_1 + 0x40) = iVar1;
  if (2 < iVar2) {
    iVar2 = 2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x44) + iVar2 * 0xc;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x4c);
  iStack_1c = param_1;
  iStack_18 = param_2;
  sub_08013BF4(param_1);
  if ((((*(int *)(param_1 + 0x28) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x30))) &&
      (*(int *)(param_1 + 0x2c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x34))) {
    uStack_30 = *(undefined4 *)(param_1 + 0x1c);
    uStack_3c = *(undefined1 *)(param_1 + 0x14);
    puStack_34 = &gUnknown_086DB334;
    uStack_38 = 0x400;
    uStack_4c = *(undefined4 *)(param_1 + 0x28);
    uStack_48 = *(undefined4 *)(param_1 + 0x2c);
    uStack_44 = *(undefined4 *)(param_1 + 0x30);
    uStack_40 = *(undefined4 *)(param_1 + 0x34);
    auStack_50[0] = 1;
    iStack_20 = param_1;
    if ((iStack_18 == 0) || (iVar1 = sub_08006DA6(&DAT_03001120,0,auStack_50), iVar1 == 0)) {
      iVar1 = sub_08005D6C(param_1 + 0x28,DAT_03001100);
      if (iVar1 == 0) {
        sub_08015F76(param_1);
      }
    }
    else {
      sub_0801FC9C(&DAT_03002c80,&DAT_080e1874,0x40,0);
      sub_08015F76(param_1);
    }
  }
  else {
    sub_080068CA(&DAT_03001120,param_1);
  }
  return;
}


/* sub_080160C0 @ 0x080160C0 */

undefined4 * sub_080160C0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,param_4);
    *param_1 = &_08024258;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    param_1[6] = &gUnknown_086E5DC8 + param_3 * 0xc;
    param_1[0x10] = *(undefined4 *)(&gUnknown_086E5BA8 + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_086e5bac + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4(param_1);
  }
  return param_1;
}


/* sub_08016124 @ 0x08016124 */

void sub_08016124(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 in_cr11;
  undefined8 uVar5;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined4 uStack_48;
  int iStack_38;
  undefined4 *puStack_34;
  undefined *puStack_30;
  int local_14;
  int local_10;
  
  local_14 = *(int *)(param_1 + 0x20) >> 8;
  local_10 = *(int *)(param_1 + 0x24) >> 8;
  sub_080068CA(&DAT_03001120,param_1);
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x1f) * 0xc,0x40,0);
  iVar1 = sub_08006D70(&DAT_03001120);
  uVar5 = CONCAT44(0x400,iVar1);
  cVar4 = SBORROW4(iVar1,0x400);
  cVar3 = iVar1 + -0x400 < 0;
  if (0x3ff < iVar1) {
    iVar1 = sub_080135E0(0,&local_14,&gUnknown_086AF614,4);
    cVar4 = SCARRY4(iVar1,0);
    cVar3 = iVar1 < 0;
    uVar5 = sub_080068B8(&DAT_03001120);
  }
  iVar1 = (int)uVar5;
  if (cVar3 != cVar4) {
    iVar1 = iVar1 + -0x14;
    coprocessor_load(0,in_cr11,iVar1);
  }
  puStack_30 = &DAT_030026bc;
  puStack_34 = &gUnknown_086E5B9C;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x40);
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x44);
  sub_08013BF4(iVar1);
  if ((((DAT_0300109c < *(int *)(iVar1 + 0x30)) && (*(int *)(iVar1 + 0x28) < DAT_030010a4)) &&
      (DAT_030010a0 < *(int *)(iVar1 + 0x34))) && (*(int *)(iVar1 + 0x2c) < DAT_030010a8)) {
    iVar2 = sub_08005D6C((undefined4 *)(iVar1 + 0x28),DAT_03001100);
    if (iVar2 == 0) {
      sub_08016124(iVar1);
    }
    else if (((int)((ulonglong)uVar5 >> 0x20) != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
      uStack_48 = *(undefined4 *)(iVar1 + 0x1c);
      uStack_54 = *(undefined1 *)(iVar1 + 0x14);
      puStack_4c = &gUnknown_086DB2D4;
      uStack_50 = 0x400;
      uStack_64 = *(undefined4 *)(iVar1 + 0x28);
      uStack_60 = *(undefined4 *)(iVar1 + 0x2c);
      uStack_5c = *(undefined4 *)(iVar1 + 0x30);
      uStack_58 = *(undefined4 *)(iVar1 + 0x34);
      auStack_68[0] = 0;
      iStack_38 = iVar1;
      iVar2 = sub_08006E0A(&DAT_03001120,0,auStack_68);
      if (iVar2 != 0) {
        iVar2 = sub_0802141C(3);
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
        sub_08016124(iVar1);
      }
    }
  }
  else {
    sub_080068CA(&DAT_03001120,iVar1);
  }
  return;
}


/* sub_08016262 @ 0x08016262 */

undefined4 sub_08016262(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      return 0;
    }
    if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
         (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
        (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
       (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) {
      if (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10)) {
        sub_08016124();
        return 1;
      }
    }
    return 0;
  }
  if (param_2 == 2) {
    if (((**(char **)(param_3 + 0x1c) == '\x01') &&
        (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
       ((*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc) &&
        (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))))) {
      if (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10)) {
        cVar1 = (*(char **)(param_3 + 0x1c))[1];
        if ((cVar1 != '\b') && (cVar1 != '\x0e')) {
          return 1;
        }
        sub_08016124();
        return 0;
      }
    }
    return 0;
  }
  uVar2 = sub_08013D68();
  return uVar2;
}


/* sub_08016310 @ 0x08016310 */

void sub_08016310(int param_1)

{
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 8) * 0xc,0x40,0);
  return;
}


/* sub_0801633C @ 0x0801633C */

undefined4 * sub_0801633C(undefined4 *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x38), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025A18;
    param_1[3] = &DAT_030021d8;
    param_1[4] = &gUnknown_086F78CC;
    sub_08026044(&DAT_030021d8,&gUnknown_086F784C,0x40);
    param_1[5] = 0x20;
    *(undefined1 *)(param_1 + 2) = 0x27;
    param_1[8] = *param_3;
    param_1[9] = param_3[1];
    iVar1 = param_2[1];
    param_1[6] = *param_2 - ((int)(param_1[8] << 0xd) >> 8);
    param_1[7] = iVar1 - ((int)(param_1[9] << 0xd) >> 8);
    param_1[7] = param_1[7] + param_4 * -0x400;
  }
  return param_1;
}


/* sub_080163D0 @ 0x080163D0 */

void sub_080163D0(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_08025A18;
  pcVar2 = (char *)param_1[3];
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_08006664(&DAT_03001120,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08016412 @ 0x08016412 */

void sub_08016412(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    sub_080068CA(&DAT_03001120,param_1);
  }
  else {
    if (iVar2 == 0x10) {
      pcVar4 = *(char **)(param_1 + 0xc);
      cVar1 = *pcVar4;
      *pcVar4 = cVar1 + -1;
      if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar4 + 2) != -1)) {
        sub_08006664(&DAT_03001120,(int)*(short *)(pcVar4 + 2),0xffff,2,param_4);
        pcVar4[2] = -1;
        pcVar4[3] = -1;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3 + 0xc;
      iVar2 = *(int *)(param_1 + 0xc) + 4;
      *(int *)(param_1 + 0xc) = iVar2;
      sub_08026044(iVar2,*(undefined4 *)(iVar3 + 0x14),0x40);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
  }
  return;
}


/* sub_0801647A @ 0x0801647A */

undefined4 sub_0801647A(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + 0x10);
  iVar5 = (*(int *)(param_1 + 0x18) >> 8) - (int)*pcVar3;
  *(int *)(param_1 + 0x28) = iVar5;
  iVar6 = (*(int *)(param_1 + 0x1c) >> 8) - (int)pcVar3[1];
  *(int *)(param_1 + 0x2c) = iVar6;
  bVar1 = pcVar3[2];
  iVar4 = iVar6 + (uint)(byte)pcVar3[3];
  *(int *)(param_1 + 0x34) = iVar4;
  *(uint *)(param_1 + 0x30) = iVar5 + (uint)bVar1;
  *(int *)(param_1 + 4) = iVar4;
  if ((((DAT_0300109c < (int)(iVar5 + (uint)bVar1)) && (iVar5 < DAT_030010a4)) &&
      (DAT_030010a0 < iVar4)) && (iVar6 < DAT_030010a8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080164CC @ 0x080164CC */

undefined4 sub_080164CC(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28) - DAT_0300109c;
  uVar1 = *(int *)(param_1 + 0x2c) - DAT_030010a0;
  puVar2 = (uint *)*param_2;
  *param_2 = (int)(puVar2 + 2);
  *puVar2 = (uint)(iVar3 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfe00ff00 |
            uVar1 & 0xff;
  uVar1 = (puVar2[1] & 0xfffff3ff) + 0x800;
  puVar2[1] = uVar1;
  puVar2[1] = *(ushort *)(*(int *)(param_1 + 0xc) + 2) & 0x3ff | uVar1 & 0xfffffc00;
  return 0;
}


/* sub_0801653E @ 0x0801653E */

undefined4 sub_0801653E(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_0801654A @ 0x0801654A */

void sub_0801654A(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_08006664(&DAT_03001120,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  return;
}


/* sub_08016576 @ 0x08016576 */

void sub_08016576(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08026044(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),0x40,
               param_4,param_4);
  return;
}


/* sub_08016586 @ 0x08016586 */

undefined4 sub_08016586(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 9) {
    REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
    REG_DMA3DAD = *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  else if (param_2 == 0x13) {
    sub_080068CA(&DAT_03001120,param_1,param_3,param_4,param_4);
  }
  return 0;
}


/* sub_080165EC @ 0x080165EC */

undefined4 * sub_080165EC(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x5c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08013BC0(param_1,0x400,param_3);
  *param_1 = &_08024AF8;
  iVar1 = param_2[1];
  param_1[8] = *param_2 << 8;
  param_1[9] = iVar1 << 8;
  *(undefined1 *)(param_1 + 2) = 0x27;
  param_1[6] = &gUnknown_086F77D4;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 5;
  param_1[0x14] = 0;
  param_1[0x12] = 1;
  sub_08013BF4(param_1);
  sub_0801FC9C(&DAT_03002c80,&DAT_080e1820,0x40,0);
  return param_1;
}


/* sub_0801665C @ 0x0801665C */

void sub_0801665C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024AF8;
  if (param_1[0x13] != 0) {
    sub_0801FC22(&DAT_03002c80,&DAT_080e182c);
  }
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_080166A2 @ 0x080166A2 */

void sub_080166A2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    local_1c = *(int *)(param_1 + 0x20) >> 8;
    local_18 = *(int *)(param_1 + 0x24) >> 8;
    local_2c = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    local_20 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c);
    local_38 = *(undefined4 *)(param_1 + 0x1c);
    local_44 = *(undefined1 *)(param_1 + 0x14);
    local_3c = &DAT_086db33c;
    local_40 = *(undefined4 *)(param_1 + 0x44);
    local_54 = *(int *)(param_1 + 0x28) - local_2c;
    local_50 = *(int *)(param_1 + 0x2c) - local_20;
    local_4c = *(int *)(param_1 + 0x30) + local_2c;
    local_48 = *(int *)(param_1 + 0x34) + local_20;
    local_58[0] = 1;
    local_28 = param_1;
    local_24 = local_2c;
    sub_08006DA6(&DAT_03001120,0,local_58);
    if (0x7f < *(int *)(param_1 + 0x44)) {
      local_3c = &gUnknown_086DB344;
      local_40 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0x800;
      local_48 = 0x800;
      sub_08006DA6(&DAT_03001120,0,local_58);
    }
    sub_080068CA(&DAT_03001120,param_1);
    puVar1 = (undefined4 *)sub_0801F08C(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08025808;
      puVar1[3] = 0x40;
    }
    sub_080068B8(&DAT_03001120,puVar1);
    iVar2 = sub_08006D70(&DAT_03001120);
    if (0x3ff < iVar2) {
      uVar3 = sub_080135E0(0,&local_1c,&gUnknown_086E1590,4);
      sub_080068B8(&DAT_03001120,uVar3);
    }
    iVar2 = 0;
    do {
      iVar4 = sub_0802141C(0x20);
      iVar5 = sub_0802141C(0x20);
      iVar6 = sub_0802141C(5);
      iVar7 = local_1c + iVar4 + -0x10;
      iVar8 = local_18 + iVar5 + -0x10;
      puVar1 = (undefined4 *)sub_0801F08C(0x10);
      iVar5 = local_18;
      iVar4 = local_1c;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = iVar6 + iVar2 * 8;
        *puVar1 = &_080240FC;
        puVar1[2] = iVar7;
        puVar1[3] = iVar8;
      }
      iVar2 = iVar2 + 1;
      iVar6 = DAT_03001730 * 4;
      DAT_03001730 = DAT_03001730 + 1;
      *(undefined4 **)(&DAT_03001734 + iVar6) = puVar1;
    } while (iVar2 < 6);
    puVar1 = (undefined4 *)sub_0801F08C(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0x18;
      *puVar1 = &_08023F24;
      puVar1[2] = iVar4;
      puVar1[3] = iVar5;
    }
    iVar2 = DAT_03001730 * 4;
    DAT_03001730 = DAT_03001730 + 1;
    *(undefined4 **)(&DAT_03001734 + iVar2) = puVar1;
    iVar2 = sub_0802141C(2);
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x14) * 0xc,0x40,0);
  }
  return;
}


/* sub_0801684C @ 0x0801684C */

void sub_0801684C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  int iStack_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x44) = iVar1;
    iVar1 = iVar1 >> 6;
    iVar3 = *(int *)(param_1 + 0x40) + 1;
    *(int *)(param_1 + 0x40) = iVar3;
    if (3 < iVar1) {
      iVar1 = 3;
    }
    iVar1 = iVar1 - (iVar3 * 0x20000000 >> 0x1f);
    *(undefined **)(param_1 + 0x18) = &gUnknown_086F77D4 + iVar1 * 0xc;
    sub_08013BF4(param_1);
    if (*(int *)(param_1 + 0x48) != 0) {
      iStack_1c = sub_0802141C(800);
      iStack_1c = iStack_1c + -400;
      local_18 = sub_0802141C(0x280);
      local_18 = local_18 + -0x140;
      if ((4 < 0x80 - DAT_03001124) && (iVar3 = sub_08006D70(&DAT_03001120), 0x7f < iVar3)) {
        uVar2 = sub_0801633C(0,param_1 + 0x20,&iStack_1c,iVar1);
        sub_080068B8(&DAT_03001120,uVar2);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x58);
    sub_08013BF4(param_1);
    if (param_2 != 0) {
      local_28 = *(undefined4 *)(param_1 + 0x1c);
      local_34 = *(undefined1 *)(param_1 + 0x14);
      local_2c = &DAT_086db33c;
      local_30 = *(undefined4 *)(param_1 + 0x44);
      local_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      local_48[0] = 1;
      local_18 = param_1;
      iVar1 = sub_08006E0A(&DAT_03001120,2,local_48);
      if (iVar1 != 0) {
        iVar1 = sub_0802141C(3);
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
        sub_080166A2(param_1);
        return;
      }
    }
    if ((((*(int *)(param_1 + 0x30) <= DAT_0300109c) || (DAT_030010a4 <= *(int *)(param_1 + 0x28)))
        || (*(int *)(param_1 + 0x34) <= DAT_030010a0)) || (DAT_030010a8 <= *(int *)(param_1 + 0x2c))
       ) {
      sub_080068CA(&DAT_03001120,param_1);
    }
  }
  return;
}


/* sub_080169B8 @ 0x080169B8 */

void sub_080169B8(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x24) = param_2[1] << 8;
  *(int *)(param_1 + 0x20) = iVar1 << 8;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&gUnknown_086F78F0 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(&DAT_086f78f4 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 8) = 0x28;
  iVar1 = *(int *)(param_1 + 0x40) >> 6;
  if (4 < iVar1) {
    iVar1 = 4;
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_086F7810 + iVar1 * 0xc;
  sub_08006DA6(&DAT_03001120,0x13,0,iVar1 * 2,param_4);
  sub_0801FC22(&DAT_03002c80,&DAT_080e1820);
  sub_0801FC9C(&DAT_03002c80,&DAT_080e182c,0x40,0);
  return;
}


/* sub_08016A26 @ 0x08016A26 */

void sub_08016A26(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x4c) == 0) {
    sub_0801FC22(&DAT_03002c80,&DAT_080e1820,0x5c4,param_4,param_4);
    sub_08006DA6(&DAT_03001120,0x13,0);
    sub_080068CA(&DAT_03001120,param_1);
  }
  return;
}


/* sub_08016A5A @ 0x08016A5A */

undefined4 sub_08016A5A(int param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (((*(int *)(param_1 + 0x4c) != 0) &&
        (((*param_3 == '\x01' || (*param_3 == '\x02')) &&
         (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))))) &&
       (((*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc) &&
         (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
        (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
      sub_080166A2();
      return 1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08013D68();
  }
  return uVar1;
}


/* sub_08016AB4 @ 0x08016AB4 */

undefined4 * sub_08016AB4(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_080067AC(&DAT_03001120,0x40);
    *(ushort *)(param_1 + 3) = uVar1;
    *param_1 = &_08025B54;
    uVar2 = param_2[1];
    param_1[6] = *param_2;
    param_1[7] = uVar2;
    param_1[4] = 0;
    param_1[5] = 0;
    REG_DMA3SAD = 0x86f7914;
    REG_DMA3DAD = (uint)uVar1 * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return param_1;
}


/* sub_08016B12 @ 0x08016B12 */

void sub_08016B12(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  uVar2 = (uint)(iVar1 * 0x4000000) >> 0x1d;
  if (3 < uVar2) {
    uVar2 = 7 - uVar2;
  }
  if (*(uint *)(param_1 + 0x14) != uVar2) {
    *(uint *)(param_1 + 0x14) = uVar2;
    REG_DMA3SAD = &DAT_086f7914 + uVar2 * 0x40;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08016B4E @ 0x08016B4E */

undefined4 sub_08016B4E(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x1c) & 0xff;
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}


/* sub_08016B96 @ 0x08016B96 */

undefined4 * sub_08016B96(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 != (undefined4 *)0x0)) {
    uStack_14 = 0;
    uStack_10 = 0;
    sub_08016AB4(param_1,&uStack_14);
    *param_1 = &_08025ADC;
    iVar1 = param_2[1];
    param_1[8] = *param_2 + -4;
    param_1[9] = iVar1 + -4;
  }
  return param_1;
}


/* sub_08016BD4 @ 0x08016BD4 */

undefined4 sub_08016BD4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_030021f4 + 0x809c);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - *(int *)(DAT_030021f4 + 0x8098);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x24) - iVar2;
  if ((((*(int *)(param_1 + 0x18) < -7) || (0xef < *(int *)(param_1 + 0x18))) ||
      (*(int *)(param_1 + 0x1c) < -7)) || (0x9f < *(int *)(param_1 + 0x1c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08016C48 @ 0x08016C48 */

undefined4 * sub_08016C48(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x100;
  uVar1 = sub_080067AC(&DAT_03001120,0x100);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802599C;
  iVar2 = sub_0802141C(8);
  param_1[4] = iVar2;
  param_1[5] = param_2;
  param_1[6] = param_3;
  REG_DMA3SAD = &_03000C1C + iVar2 * 0x40;
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8400;
  return param_1;
}


/* sub_08016CAA @ 0x08016CAA */

void sub_08016CAA(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sub_0802142E(0x4000);
  if (iVar1 != 0) {
    uVar2 = *(int *)(param_1 + 0x10) + 1U & 7;
    *(uint *)(param_1 + 0x10) = uVar2;
    REG_DMA3SAD = &_03000C1C + uVar2 * 0x40;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08016CE4 @ 0x08016CE4 */

undefined4 sub_08016CE4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x14) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x18) & 0xff;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_08016D40 @ 0x08016D40 */

undefined4 * sub_08016D40(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x80;
    uVar1 = sub_080067AC(&DAT_03001120,0x80);
    *(ushort *)(param_1 + 3) = uVar1;
    *param_1 = &_080250FC;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(char *)(param_1 + 4) = (char)param_2;
    param_1[5] = &UNK_086f7a2c + param_2 * 8;
    REG_DMA3SAD = *(undefined4 *)(&DAT_086f7a30 + param_2 * 8);
    REG_DMA3DAD = (uint)uVar1 * 0x20 + 0x6010000;
    Ram040000dc = 0x20;
    DAT_040000de = 0x8400;
  }
  return param_1;
}


/* sub_08016DA2 @ 0x08016DA2 */

void sub_08016DA2(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*(int *)(DAT_030021f4 + 0x809c) < *(int *)(DAT_030021f4 + 0x8094)) {
      param_2 = 1;
    }
    else {
      param_2 = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(DAT_030021f4 + 0x808c) < *(int *)(DAT_030021f4 + 0x809c)) {
      param_2 = 1;
    }
    else {
      param_2 = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(DAT_030021f4 + 0x8088) < *(int *)(DAT_030021f4 + 0x8098)) {
      param_2 = 1;
    }
    else {
      param_2 = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(int *)(DAT_030021f4 + 0x8098) < *(int *)(DAT_030021f4 + 0x8090)) {
      param_2 = 1;
    }
    else {
      param_2 = 0;
    }
  }
  if (param_2 == 0) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    uVar3 = (uint)(iVar2 * 0x8000000) >> 0x1d;
    if (3 < uVar3) {
      uVar3 = 7 - uVar3;
    }
  }
  if (*(byte *)(param_1 + 0x11) != uVar3) {
    *(char *)(param_1 + 0x11) = (char)uVar3;
    REG_DMA3SAD = *(int *)(*(int *)(param_1 + 0x14) + 4) + uVar3 * 0x80;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x20;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08016E46 @ 0x08016E46 */

undefined4 sub_08016E46(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = **(undefined4 **)(param_1 + 0x14);
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


