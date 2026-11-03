/* Ghidra reference decompilation of code_0801F394 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801F394 @ 0x0801F394 */

void sub_0801F394(int *param_1,int param_2)

{
  int a3;
  
  a3 = *param_1;
  if (a3 == 0) {
    sub_08021DF0((uint *)param_2,(uint *)(param_1 + 2),param_1[1],0);
  }
  else if ((a3 == 1) || (a3 == 2)) {
    sub_080236A8(param_2,(int)(param_1 + 2),(int)param_1,a3);
  }
  return;
}


/* sub_0801F3BA @ 0x0801F3BA */

void sub_0801F3BA(int *param_1,int param_2,int param_3)

{
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      sub_080236D8(param_2,(int)(param_1 + 2),param_3,(int)param_1);
    }
    return;
  }
  sub_080236E4(param_2,(int)(param_1 + 2),param_3,param_1[1]);
  return;
}


/* sub_0801F3E0 @ 0x0801F3E0 */

void sub_0801F3E0(int param_1)

{
  char in_NG;
  
  if (in_NG != '\0') {
    do {
    } while ((int)((uint)*(ushort *)(param_1 + 10) << 0x10) < 0);
  }
  return;
}


/* sub_0801F3EA @ 0x0801F3EA */

void sub_0801F3EA(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  do {
    uVar1 = 0x1000;
    if (param_4 < 0x1000) {
      uVar1 = param_4;
    }
    param_4 = param_4 - uVar1;
    *param_1 = param_3;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)(uVar1 >> 1);
    *(undefined2 *)((int)param_1 + 10) = 0x8000;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  } while (param_4 != 0);
  return;
}


/* sub_0801F412 @ 0x0801F412 */

void sub_0801F412(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  do {
    uVar1 = 0x1000;
    if (param_4 < 0x1000) {
      uVar1 = param_4;
    }
    param_4 = param_4 - uVar1;
    *param_1 = param_3;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)(uVar1 >> 2);
    *(undefined2 *)((int)param_1 + 10) = 0x8400;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  } while (param_4 != 0);
  return;
}


/* sub_0801F43C @ 0x0801F43C */

void sub_0801F43C(undefined4 *param_1,int param_2,undefined2 param_3,uint param_4)

{
  uint uVar1;
  
  do {
    uVar1 = 0x1000;
    if (param_4 < 0x1000) {
      uVar1 = param_4;
    }
    param_4 = param_4 - uVar1;
    DAT_03003910 = param_3;
    *param_1 = &DAT_03003910;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)(uVar1 >> 1);
    *(undefined2 *)((int)param_1 + 10) = 0x8100;
    param_2 = param_2 + uVar1;
  } while (param_4 != 0);
  return;
}


/* sub_0801F46A @ 0x0801F46A */

void sub_0801F46A(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  do {
    uVar1 = 0x1000;
    if (param_4 < 0x1000) {
      uVar1 = param_4;
    }
    param_4 = param_4 - uVar1;
    DAT_03003914 = param_3;
    *param_1 = &DAT_03003914;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)(uVar1 >> 2);
    *(undefined2 *)((int)param_1 + 10) = 0x8500;
    param_2 = param_2 + uVar1;
  } while (param_4 != 0);
  return;
}


/* sub_0801F4A4 @ 0x0801F4A4 */

undefined * sub_0801F4A4(void)

{
  char in_NG;
  
  if (in_NG != '\0') {
    return (undefined *)0x6000000;
  }
  return &DAT_0600a000;
}


/* sub_0801F4B8 @ 0x0801F4B8 */

undefined * sub_0801F4B8(void)

{
  char in_NG;
  
  if (in_NG != '\0') {
    return &DAT_0600a000;
  }
  return (undefined *)0x6000000;
}


/* sub_0801F4C4 @ 0x0801F4C4 */

void sub_0801F4C4(int *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  puVar3 = (undefined2 *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *puVar3 = param_3;
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      puVar3 = puVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}


/* sub_0801F508 @ 0x0801F508 */

void sub_0801F508(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  psVar3 = (short *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *psVar3 = param_3;
          psVar3 = psVar3 + 1;
          param_3 = param_3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      psVar3 = psVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}


/* sub_0801F54C @ 0x0801F54C */

void sub_0801F54C(undefined4 param_1)

{
  DAT_03003914 = 0x200;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8500;
  return;
}


/* sub_0801F566 @ 0x0801F566 */

void sub_0801F566(undefined4 param_1)

{
  REG_DMA3SAD = param_1;
  REG_DMA3DAD = 0x7000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8400;
  return;
}


/* sub_0801F58C @ 0x0801F58C */

void sub_0801F58C(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)sub_0801F08C(0x24), param_1 != (undefined1 *)0x0)) {
    uVar1 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = param_3[3];
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 8) = iVar2 + 0xc;
  }
  return;
}


/* sub_0801F5C0 @ 0x0801F5C0 */

int sub_0801F5C0(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar3 = param_3 + -1;
  if (param_3 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0xc) +
                     (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar2 + 1;
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar4);
  }
  return iVar2;
}


/* sub_0801F5E6 @ 0x0801F5E6 */

int sub_0801F5E6(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0xc) +
                     (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar2 + 1;
    } while (*param_2 != 0);
  }
  return iVar2;
}


/* sub_0801F60A @ 0x0801F60A */

int sub_0801F60A(int param_1,int param_2)

{
  return *(ushort *)
          (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2) * 2) +
         1;
}


/* sub_0801F618 @ 0x0801F618 */

void sub_0801F618(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  do {
    __call_via_r3();
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


/* sub_0801F636 @ 0x0801F636 */

void sub_0801F636(char *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = param_2;
  while( true ) {
    for (; (*param_2 != 0 && (*param_2 != 10)); param_2 = param_2 + 1) {
    }
    iVar2 = (int)param_2 - (int)pbVar5;
    if (iVar2 != 0) {
      iVar3 = 0;
      iVar4 = iVar2;
      do {
        iVar4 = iVar4 + -1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        iVar3 = (uint)*(ushort *)
                       (*(int *)(param_1 + 0xc) +
                       (uint)*(ushort *)(*(int *)(param_1 + 0xc) + (uint)bVar1 * 2) * 2) + iVar3 + 1
        ;
      } while (iVar4 != 0);
      if ((*param_1 == '\0') && (*param_2 == 0)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
      }
      do {
        __call_via_r3();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
    pbVar5 = param_2;
  }
  return;
}


/* sub_0801F6D8 @ 0x0801F6D8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sub_0801F6D8(void...)

{
  char *in_r0;
  byte *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  byte abStack_120 [256];
  undefined4 *local_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = &uStack_8;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  sub_08021CF0(abStack_120,in_r1,(int *)&local_20);
  sub_0801F636(in_r0,abStack_120);
  return;
}


/* sub_0801F702 @ 0x0801F702 */

void sub_0801F702(char *param_1,int param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int local_24;
  
  local_24 = *(int *)(param_1 + 8) + -0xc;
  do {
    pbVar5 = param_3;
    if (*(int *)(param_1 + 0x1c) <= local_24) {
      return;
    }
    while( true ) {
      if (*pbVar5 == 0) {
        return;
      }
      if (*pbVar5 != 0x20) break;
      pbVar5 = pbVar5 + 1;
    }
    iVar1 = 0;
    pbVar3 = (byte *)0x0;
    for (param_3 = pbVar5; uVar4 = (uint)*param_3, uVar4 != 0; param_3 = param_3 + 1) {
      if (uVar4 == 10) {
        param_3 = param_3 + 1;
        break;
      }
      if (uVar4 == 0x20) {
        pbVar3 = param_3;
      }
      iVar1 = *(ushort *)
               (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + uVar4 * 2) * 2
               ) + 1 + iVar1;
      if (param_2 < iVar1) {
        if (pbVar3 != (byte *)0x0) {
          param_3 = pbVar3;
        }
        break;
      }
    }
    iVar1 = (int)param_3 - (int)pbVar5;
    if ((iVar1 != 0) && (iVar2 = iVar1, *(int *)(param_1 + 0x14) + -0x10 < local_24)) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      do {
        __call_via_r3();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_24 = local_24 + (uint)(byte)param_1[1];
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
  } while( true );
}


/* sub_0801F7E2 @ 0x0801F7E2 */

void sub_0801F7E2(int param_1,undefined4 param_2)

{
  __call_via_r3();
  return;
}


/* sub_0801F7FC @ 0x0801F7FC */

void sub_0801F7FC(int param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  
  for (; cVar1 = *param_2, cVar1 != '\0'; param_2 = param_2 + 1) {
    if (((cVar1 != ' ') && (cVar1 != '\n')) && (cVar1 != '\v')) goto _0801F81A;
  }
  param_4[3] = 1;
_0801F81A:
  *param_4 = param_2;
  param_4[1] = param_2;
  param_4[3] = 0;
  pbVar4 = (byte *)0x0;
  uVar6 = 0;
  param_4[2] = 0;
  do {
    pbVar2 = (byte *)param_4[1];
    uVar5 = (uint)*pbVar2;
    if (uVar5 == 0) {
      param_4[3] = 1;
      return;
    }
    if (uVar5 == 0x20) {
      uVar6 = param_4[2];
      pbVar4 = pbVar2;
    }
    else {
      if (uVar5 == 10) {
        return;
      }
      if (uVar5 == 0xb) {
        param_4[3] = 1;
        return;
      }
    }
    iVar3 = *(ushort *)
             (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + uVar5 * 2) * 2)
            + 1 + param_4[2];
    param_4[2] = iVar3;
    if (param_3 < iVar3) {
      if (pbVar4 == (byte *)0x0) {
        return;
      }
      param_4[1] = pbVar4;
      param_4[2] = uVar6;
      return;
    }
    param_4[1] = pbVar2 + 1;
  } while( true );
}


/* sub_0801F876 @ 0x0801F876 */

void sub_0801F876(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char acStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  uint uStack_28;
  byte *pbStack_24;
  byte *pbStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  REG_IME = 0;
  pbStack_24 = param_1;
  pbStack_20 = param_2;
  uStack_1c = param_3;
  iStack_18 = param_4;
  sub_08020BAC();
  sub_0801EFA4();
  REG_DISPCNT = 0x404;
  Ram04000020 = 0x100;
  DAT_04000022 = 0;
  Ram04000024 = 0;
  DAT_04000026 = 0x100;
  DAT_04000028 = 0;
  DAT_0400002c = 0;
  sub_08020E5C(acStack_5c,0xf0,0xa0);
  sub_08021F18(puStack_38,0,uStack_28);
  puStack_50 = &DAT_087fbdc0;
  uStack_34 = 1;
  uStack_3c = 0x8020ec3;
  acStack_5c[1] = 10;
  uStack_58 = 0x78;
  uStack_54 = 10;
  acStack_5c[0] = '\x01';
  uStack_33 = 4;
  sub_0801F636(acStack_5c,(byte *)"Assertion Failure!");
  uStack_54 = 0x1e;
  uStack_58 = 3;
  acStack_5c[0] = '\0';
  uStack_33 = 3;
  sub_0801F636(acStack_5c,(byte *)"File\n  ");
  uStack_33 = 2;
  sub_0801F702(acStack_5c,0xdc,pbStack_20);
  uStack_33 = 3;
  uStack_58 = 3;
  sub_0801F636(acStack_5c,(byte *)"\nLine\n");
  uStack_33 = 2;
  sub_0801F6D8(acStack_5c,"  %d\n\n",uStack_1c);
  uStack_33 = 3;
  if (iStack_18 == 0) {
    pcVar1 = "Error\n  ";
  }
  else {
    pcVar1 = "Condition\n  ";
  }
  sub_0801F636(acStack_5c,(byte *)pcVar1);
  uStack_33 = 2;
  sub_0801F702(acStack_5c,0xdc,pbStack_24);
  REG_DMA3SAD = 0x87fc92e;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = puStack_38;
  REG_DMA3DAD = 0x6000000;
  Ram040000dc = 0x2580;
  DAT_040000de = 0x8400;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* sub_0801F878 @ 0x0801F878 */

void sub_0801F878(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 local_34;
  undefined1 local_33;
  uint local_28;
  byte *pbStack_24;
  byte *local_20;
  undefined4 local_1c;
  int local_18;
  
  REG_IME = 0;
  pbStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  sub_08020BAC();
  sub_0801EFA4();
  REG_DISPCNT = 0x404;
  Ram04000020 = 0x100;
  DAT_04000022 = 0;
  Ram04000024 = 0;
  DAT_04000026 = 0x100;
  DAT_04000028 = 0;
  DAT_0400002c = 0;
  sub_08020E5C(local_5c,0xf0,0xa0);
  sub_08021F18(local_38,0,local_28);
  local_50 = &DAT_087fbdc0;
  local_34 = 1;
  local_3c = 0x8020ec3;
  local_5c[1] = 10;
  local_58 = 0x78;
  local_54 = 10;
  local_5c[0] = '\x01';
  local_33 = 4;
  sub_0801F636(local_5c,(byte *)"Assertion Failure!");
  local_54 = 0x1e;
  local_58 = 3;
  local_5c[0] = '\0';
  local_33 = 3;
  sub_0801F636(local_5c,(byte *)"File\n  ");
  local_33 = 2;
  sub_0801F702(local_5c,0xdc,local_20);
  local_33 = 3;
  local_58 = 3;
  sub_0801F636(local_5c,(byte *)"\nLine\n");
  local_33 = 2;
  sub_0801F6D8(local_5c,"  %d\n\n",local_1c);
  local_33 = 3;
  if (local_18 == 0) {
    pcVar1 = "Error\n  ";
  }
  else {
    pcVar1 = "Condition\n  ";
  }
  sub_0801F636(local_5c,(byte *)pcVar1);
  local_33 = 2;
  sub_0801F702(local_5c,0xdc,pbStack_24);
  REG_DMA3SAD = 0x87fc92e;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = local_38;
  REG_DMA3DAD = 0x6000000;
  Ram040000dc = 0x2580;
  DAT_040000de = 0x8400;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* sub_0801F9D4 @ 0x0801F9D4 */

void sub_0801F9D4(void)

{
  return;
}


/* sub_0801F9D6 @ 0x0801F9D6 */

void sub_0801F9D6(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if ((int)(uVar1 << 0x1f) < 0) {
    if ((int)(uVar1 << 0x1b) < 0) {
      iVar2 = (uint)*(byte *)((int)param_1 + 0x12) * (uint)*(byte *)(param_1 + 0xd);
      uVar5 = iVar2 * (0x40 - *(char *)((int)param_1 + 0x13)) >> 10;
      uVar3 = iVar2 * (*(char *)((int)param_1 + 0x13) + 0x40) >> 10;
      *(short *)(param_1 + 3) = (short)uVar5;
      *(short *)((int)param_1 + 0xe) = (short)uVar3;
      if ((uVar3 & 0xffff) == 0 && (uVar5 & 0xffff) == 0) {
        param_1[6] = 0x801f9d5;
      }
      else {
        param_1[6] = &_03000520;
      }
    }
    if ((int)(uVar1 << 0x1c) < 0) {
      puVar4 = (undefined4 *)param_1[10];
      param_1[2] = *puVar4;
      param_1[8] = (uint)*(ushort *)((int)puVar4 + 6) << 0xe;
      param_1[9] = (uint)*(ushort *)(puVar4 + 2) << 0xe;
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)puVar4 + 10);
      *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)(puVar4 + 1);
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      *param_1 = 0;
      *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
    }
    if ((int)(uVar1 << 0x1e) < 0) {
      uVar1 = ((uint)*(ushort *)(param_1 + 5) * param_1[0xc] >> 0xe) * 0x1063 + 0x7ff >> 0xc;
      param_1[7] = uVar1;
      if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1d) < 0) {
        param_1[1] = -uVar1;
      }
      else {
        param_1[1] = uVar1;
      }
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


/* sub_0801FA72 @ 0x0801FA72 */

void sub_0801FA72(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((int)((uint)*(byte *)(param_1 + 4) << 0x1f) < 0) {
    if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1f) < 0) {
      if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1e) < 0) {
        do {
          iVar1 = *param_1;
          iVar5 = iVar1 + param_3 * param_1[1];
          if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1d) < 0) {
            if (param_1[8] <= iVar5) {
              __call_via_r3();
              *param_1 = iVar5;
              return;
            }
            iVar1 = (iVar1 + param_1[7] + -1) - param_1[8];
            software_interrupt(6);
            iVar5 = param_1[8];
            iVar3 = *param_1;
            iVar2 = param_1[7];
            __call_via_r3();
            *param_1 = (iVar5 * 2 - iVar3) + iVar1 * iVar2;
            *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
            param_1[1] = param_1[7];
          }
          else {
            if (iVar5 < param_1[9]) {
              __call_via_r3();
              *param_1 = iVar5;
              return;
            }
            iVar1 = (param_1[9] + param_1[7] + -1) - iVar1;
            software_interrupt(6);
            iVar5 = param_1[9];
            iVar3 = *param_1;
            iVar2 = param_1[7];
            __call_via_r3();
            *param_1 = ((iVar5 * 2 - iVar3) - iVar1 * iVar2) + -1;
            *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) | 4;
            param_1[1] = -param_1[7];
          }
          param_3 = param_3 - iVar1;
        } while (0 < param_3);
      }
      else {
        do {
          iVar1 = *param_1 + param_3 * param_1[1];
          if (iVar1 < param_1[9]) {
            __call_via_r3();
            *param_1 = iVar1;
            return;
          }
          iVar1 = (param_1[9] + param_1[7] + -1) - *param_1;
          software_interrupt(6);
          iVar5 = param_1[7];
          iVar2 = *param_1;
          iVar3 = param_1[9];
          iVar4 = param_1[8];
          __call_via_r3();
          param_3 = param_3 - iVar1;
          *param_1 = (iVar2 + iVar1 * iVar5) - (iVar3 - iVar4);
        } while (0 < param_3);
      }
    }
    else {
      iVar1 = *param_1 + param_3 * param_1[1];
      if (iVar1 < param_1[9]) {
        __call_via_r3();
        *param_1 = iVar1;
      }
      else {
        software_interrupt(6);
        __call_via_r3();
        *(undefined1 *)(param_1 + 4) = 0;
        iVar1 = param_1[0xb];
        if (iVar1 != 0) {
          *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xfb;
        }
      }
    }
  }
  return;
}


/* sub_0801FBF6 @ 0x0801FBF6 */

void sub_0801FBF6(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0x4000;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)(param_1 + 0x10) = 0x1f;
  return;
}


/* sub_0801FBF8 @ 0x0801FBF8 */

void sub_0801FBF8(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0x4000;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)(param_1 + 0x10) = 0x1f;
  return;
}


/* sub_0801FC0C @ 0x0801FC0C */

void sub_0801FC0C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40 + param_1;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0801FC22 @ 0x0801FC22 */

void sub_0801FC22(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar2 = iVar1 * 0x40 + param_1, (*(byte *)(iVar2 + 0x10) & 1) == 0 ||
         (*(int *)(iVar2 + 0x28) != param_2))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return;
    }
  }
  iVar1 = iVar1 * 0x40 + param_1;
  *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfe;
  return;
}


/* sub_0801FC4E @ 0x0801FC4E */

void sub_0801FC4E(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((((iVar1 = iVar2 * 0x40 + param_1, (*(byte *)(iVar1 + 0x10) & 1) == 0 ||
           (*(int *)(iVar1 + 0x28) != param_2)) || (*(byte *)(iVar1 + 0x12) != param_3)) ||
         (*(char *)(iVar1 + 0x13) != param_4))) {
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return;
    }
  }
  iVar2 = iVar2 * 0x40 + param_1;
  *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
  return;
}


/* sub_0801FC9C @ 0x0801FC9C */

int sub_0801FC9C(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      iVar1 = iVar1 * 0x40 + param_1;
      *(undefined4 *)(iVar1 + 0x28) = param_2;
      *(undefined4 *)(iVar1 + 0x30) = 0x4000;
      *(undefined1 *)(iVar1 + 0x12) = param_3;
      *(undefined1 *)(iVar1 + 0x13) = param_4;
      *(undefined1 *)(iVar1 + 0x10) = 0x1f;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}


/* sub_0801FCCC @ 0x0801FCCC */

void sub_0801FCCC(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      REG_DMA3SAD = param_2;
      REG_DMA3DAD = iVar1 * 0x40 + param_1;
      Ram040000dc = 0x10;
      DAT_040000de = 0x8400;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0801FCE8 @ 0x0801FCE8 */

void sub_0801FCE8(int param_1,undefined4 param_2,int param_3)

{
  *(short *)(param_3 + 10) = (short)(param_1 << 10);
  return;
}


/* sub_0801FCEE @ 0x0801FCEE */

void sub_0801FCEE(int param_1,undefined4 param_2,int param_3)

{
  do {
    param_3 = param_3 + 1;
    if (0xf < param_3) {
      return;
    }
  } while ((*(byte *)(param_3 * 0x40 + param_1 + 0x10) & 1) != 0);
  REG_DMA3SAD = param_2;
  REG_DMA3DAD = param_3 * 0x40 + param_1;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8400;
  return;
}


/* sub_0801FCF6 @ 0x0801FCF6 */

int sub_0801FCF6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar2 * 0x40 + param_1 + 0x10) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return iVar1;
}


/* sub_0801FCF8 @ 0x0801FCF8 */

int sub_0801FCF8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar2 * 0x40 + param_4 + 0x10) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return iVar1;
}


/* sub_0801FD10 @ 0x0801FD10 */

void sub_0801FD10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x40;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + param_1 + 0x10) = 0;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0801FD22 @ 0x0801FD22 */

void sub_0801FD22(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801F9D6((undefined4 *)(iVar1 * 0x40 + param_1));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0801FD38 @ 0x0801FD38 */

void sub_0801FD38(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801FA72((int *)(iVar1 * 0x40 + param_1),param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


/* sub_0801FD56 @ 0x0801FD56 */

void sub_0801FD56(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x40 + param_1;
    *(undefined1 *)(iVar1 + 0x34) = param_2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 0x10;
  } while (iVar2 < 0x10);
  return;
}


/* sub_0801FD78 @ 0x0801FD78 */

void sub_0801FD78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = sub_0801F08C(0x400);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x40;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + iVar1 + 0x10) = 0;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x40 + param_1;
    if ((~*(ushort *)(iVar3 + 0x10) & 0x101) == 0) {
      *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & 0xfe;
      REG_DMA3SAD = iVar3;
      REG_DMA3DAD = iVar1;
      Ram040000dc = 0x10;
      DAT_040000de = 0x8400;
      *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 1;
      iVar1 = iVar1 + 0x40;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}


/* sub_0801FDD0 @ 0x0801FDD0 */

void sub_0801FDD0(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((~(param_2 + iVar2 * 0x20)[8] & 0x101) == 0) {
      iVar1 = 0;
      do {
        if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
          REG_DMA3SAD = param_2 + iVar2 * 0x20;
          REG_DMA3DAD = iVar1 * 0x40 + param_1;
          Ram040000dc = 0x10;
          DAT_040000de = 0x8400;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
    }
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      sub_0801F110(param_2);
      return;
    }
  } while( true );
}


/* sub_0801FE20 @ 0x0801FE20 */

void sub_0801FE20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  if ((bVar1 & 0x11) == 0) {
    if ((bVar1 & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
  }
  else if (*(byte *)(param_1 + 0x5a) == 0xff) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(&gUnknown_087FC93C + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined1 *)(param_1 + 0x4a) = 4;
    if ((int)((uint)bVar1 << 0x1a) < 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x17;
    }
    else {
      *(uint *)(param_1 + 0x28) = *(int *)(DAT_030026d4 + 8) + (uint)*(byte *)(param_1 + 0x5b) * 0xc
      ;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x1f;
    }
  }
  return;
}


/* sub_0801FEB0 @ 0x0801FEB0 */

void sub_0801FEB0(int param_1)

{
  sub_0801FE20(param_1);
  DAT_030026cb = *(undefined1 *)(param_1 + 0x5e);
  return;
}


/* sub_0801FEC6 @ 0x0801FEC6 */

void sub_0801FEC6(int param_1)

{
  sub_0801FE20(param_1);
  DAT_030026c9 = DAT_030026ca + -1;
  DAT_030026d8 = *(byte *)(param_1 + 0x5e) - 1;
  return;
}


/* sub_0801FEE8 @ 0x0801FEE8 */

void sub_0801FEE8(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (iVar1 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_0801FF16 @ 0x0801FF16 */

void sub_0801FF16(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (0x3f < iVar1 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_0801FF44 @ 0x0801FF44 */

void sub_0801FF44(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0801FE20(param_1);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4c);
  if ((bVar1 & 0xf) == 0) {
    *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0801FF16(param_1);
    }
  }
  else {
    uVar2 = (uint)bVar1 << 0x18;
    if (uVar2 >> 0x1c != 0) {
      if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0801FF16(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & bVar1 >> 4;
        sub_0801FEE8(param_1);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0801FEE8(param_1);
      return;
    }
  }
  return;
}


/* sub_0801FFC8 @ 0x0801FFC8 */

void sub_0801FFC8(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0801FFE6 @ 0x0801FFE6 */

void sub_0801FFE6(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  sub_0801FE20(param_1);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4d);
    uVar2 = (uVar1 << 0x18) >> 0x1c;
    if (uVar2 != 0xf) {
      if (uVar2 == 0xe) {
        uVar1 = (uint)*(ushort *)(&DAT_087fce1c + ((uVar1 << 0x1c) >> 0x1b)) *
                *(int *)(param_1 + 0x40) >> 0x10;
        *(uint *)(param_1 + 0x40) = uVar1;
        *(uint *)(param_1 + 0x30) = uVar1;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x801ffc9;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    uVar1 = (uint)*(ushort *)(&gUnknown_087FCE9C + ((uVar1 << 0x1c) >> 0x1b)) *
            *(int *)(param_1 + 0x40) >> 0x10;
    *(uint *)(param_1 + 0x40) = uVar1;
    *(uint *)(param_1 + 0x30) = uVar1;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return;
}


/* sub_08020056 @ 0x08020056 */

void sub_08020056(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_08020074 @ 0x08020074 */

void sub_08020074(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  sub_0801FE20(param_1);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4d);
    uVar2 = (uVar1 << 0x18) >> 0x1c;
    if (uVar2 != 0xf) {
      if (uVar2 == 0xe) {
        uVar1 = (uint)*(ushort *)(&DAT_087fcb9c + ((uVar1 << 0x1c) >> 0x1b)) *
                *(int *)(param_1 + 0x40) >> 0xf;
        *(uint *)(param_1 + 0x40) = uVar1;
        *(uint *)(param_1 + 0x30) = uVar1;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x8020057;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    uVar1 = (uint)*(ushort *)(&gUnknown_087FCC1C + ((uVar1 << 0x1c) >> 0x1b)) *
            *(int *)(param_1 + 0x40) >> 0xe;
    *(uint *)(param_1 + 0x40) = uVar1;
    *(uint *)(param_1 + 0x30) = uVar1;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return;
}


/* sub_08020100 @ 0x08020100 */

void sub_08020100(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar3 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}


/* sub_08020142 @ 0x08020142 */

void sub_08020142(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}


/* sub_08020184 @ 0x08020184 */

void sub_08020184(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4a);
  if (-1 < (int)((uint)bVar1 << 0x1d)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
    if (-1 < (int)((uint)bVar1 << 0x1c)) goto _080201E0;
  }
  else {
    if (*(byte *)(param_1 + 0x5a) == 0xff) goto _080201E0;
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(&gUnknown_087FC93C + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(byte *)(param_1 + 0x4a) = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x54) = 0x8020143;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
_080201E0:
  if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  }
  return;
}


/* sub_080201F8 @ 0x080201F8 */

void sub_080201F8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar2;
  iVar1 = (int)((int)(char)(&gUnknown_087FD09C)[uVar2] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar1 < 0) {
    uVar2 = (uint)*(ushort *)(&DAT_087fce1c + iVar1 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar2 = (uint)*(ushort *)(&DAT_087fcb9c + iVar1 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_08020240 @ 0x08020240 */

void sub_08020240(int param_1)

{
  byte bVar1;
  
  sub_0801FE20(param_1);
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x5e);
    if ((bVar1 & 0xf) != 0) {
      *(byte *)(param_1 + 0x50) = (byte)(((uint)bVar1 << 0x1c) >> 0x1a);
    }
    if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
      *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    sub_080201F8(param_1);
  }
  return;
}


/* sub_0802028C @ 0x0802028C */

void sub_0802028C(void)

{
  return;
}


/* sub_0802028E @ 0x0802028E */

void sub_0802028E(void)

{
  return;
}


/* sub_08020290 @ 0x08020290 */

void sub_08020290(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar2 >> 0x18);
  if (iVar2 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  uVar1 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar1;
  iVar2 = (int)((int)(char)(&gUnknown_087FD09C)[uVar1] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar2 < 0) {
    uVar1 = (uint)*(ushort *)(&DAT_087fce1c + iVar2 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_087fcb9c + iVar2 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_080202BA @ 0x080202BA */

void sub_080202BA(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar2 >> 0x18);
  if (0x3f < iVar2 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  uVar1 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar1;
  iVar2 = (int)((int)(char)(&gUnknown_087FD09C)[uVar1] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar2 < 0) {
    uVar1 = (uint)*(ushort *)(&DAT_087fce1c + iVar2 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_087fcb9c + iVar2 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_080202E4 @ 0x080202E4 */

void sub_080202E4(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0801FE20(param_1);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x4c);
    if ((bVar1 & 0xf) == 0) {
      *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
      *(undefined4 *)(param_1 + 0x54) = 0x80202bb;
      if (*(char *)(param_1 + 0x4b) == '\x0f') {
        sub_0801FF16(param_1);
      }
    }
    else {
      uVar2 = (uint)bVar1 << 0x18;
      if (uVar2 >> 0x1c == 0) {
        *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x54) = 0x8020291;
        if (*(char *)(param_1 + 0x4b) == '\x0f') {
          sub_0801FEE8(param_1);
        }
      }
      else if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0801FF16(param_1);
        *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & bVar1 >> 4;
        sub_0801FEE8(param_1);
        *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
      }
    }
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    sub_080201F8(param_1);
  }
  return;
}


/* sub_080203A8 @ 0x080203A8 */

void sub_080203A8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    iVar3 = 0;
    if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
    bVar1 = *(byte *)(param_1 + 0x4c);
    if ((bVar1 & 0xf) == 0) {
      *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
      iVar3 = 1;
      if (*(char *)(param_1 + 0x4b) == '\x0f') {
        sub_0801FF16(param_1);
      }
    }
    else {
      uVar2 = (uint)bVar1 << 0x18;
      if (uVar2 >> 0x1c == 0) {
        iVar3 = 2;
        *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
        if (*(char *)(param_1 + 0x4b) == '\x0f') {
          sub_0801FEE8(param_1);
        }
      }
      else if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0801FF16(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & bVar1 >> 4;
        sub_0801FEE8(param_1);
      }
    }
    if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if ((-1 < (int)((uint)bVar1 << 0x1c)) && (iVar3 != 0)) {
        if (iVar3 == 1) {
          *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
          *(byte *)(param_1 + 0x4a) = bVar1 | 1;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
          *(byte *)(param_1 + 0x4a) = bVar1 | 1;
        }
      }
    }
    else {
      if (*(byte *)(param_1 + 0x5a) == 0xff) {
        return;
      }
      *(undefined4 *)(param_1 + 0x44) =
           *(undefined4 *)(&gUnknown_087FC93C + (uint)*(byte *)(param_1 + 0x5a) * 4);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 8;
    }
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_087fd0e8 + iVar3 * 4);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&gUnknown_087FD0DC + iVar3 * 4);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  return;
}


/* sub_08020466 @ 0x08020466 */

void sub_08020466(byte param_1,byte param_2)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char in_ZR;
  
  if (in_ZR != '\0') {
    *(undefined4 *)(unaff_r5 + 0x54) = 0x801fee9;
    *(byte *)(unaff_r4 + 10) = param_2 | param_1;
  }
  if (*(uint *)(unaff_r5 + 0x40) < *(uint *)(unaff_r5 + 0x44)) {
    *(undefined4 *)(unaff_r5 + 0x54) = *(undefined4 *)(&gUnknown_087FD0DC + unaff_r6 * 4);
    *(byte *)(unaff_r4 + 10) = param_1 | *(byte *)(unaff_r4 + 10);
    return;
  }
  *(undefined4 *)(unaff_r5 + 0x54) = *(undefined4 *)(&DAT_087fd0e8 + unaff_r6 * 4);
  *(byte *)(unaff_r4 + 10) = param_1 | *(byte *)(unaff_r4 + 10);
  return;
}


/* sub_080204A4 @ 0x080204A4 */

void sub_080204A4(void)

{
  return;
}


/* sub_080204A6 @ 0x080204A6 */

void sub_080204A6(void)

{
  return;
}


/* sub_080204A8 @ 0x080204A8 */

void sub_080204A8(int *param_1)

{
  sub_0801FE20((int)param_1);
  if ((*(byte *)(param_1 + 0x16) & 0x11) != 0) {
    *param_1 = (uint)*(byte *)((int)param_1 + 0x5e) << 0x16;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
  }
  return;
}


/* sub_080204D2 @ 0x080204D2 */

void sub_080204D2(void)

{
  return;
}


/* sub_080204D4 @ 0x080204D4 */

void sub_080204D4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 5;
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
  }
  return;
}


/* sub_08020500 @ 0x08020500 */

void sub_08020500(int param_1)

{
  sub_0801FE20(param_1);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x5e);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80204d5;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}


/* sub_08020530 @ 0x08020530 */

void sub_08020530(void)

{
  return;
}


/* sub_08020532 @ 0x08020532 */

void sub_08020532(void)

{
  return;
}


/* sub_08020534 @ 0x08020534 */

void sub_08020534(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    sub_0801FE20(param_1);
  }
  return;
}


/* sub_08020538 @ 0x08020538 */

void sub_08020538(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 2) + -1;
  *(char *)(param_2 + 2) = cVar1;
  if (cVar1 == '\0') {
    sub_0801FE20(param_1);
  }
  return;
}


/* sub_0802054C @ 0x0802054C */

void sub_0802054C(int param_1)

{
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined4 *)(param_1 + 0x54) = 0x8020535;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}


/* sub_08020566 @ 0x08020566 */

void sub_08020566(int param_1,uint param_2)

{
  undefined2 uVar1;
  
  *(char *)(param_1 + 4) = (char)param_2;
  uVar1 = __16__rt_sdiv(param_2,40000);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}


/* sub_08020578 @ 0x08020578 */

void sub_08020578(int param_1)

{
  sub_0801FE20(param_1);
  DAT_030026cc = *(byte *)(param_1 + 0x5e);
  DAT_030026ce = __16__rt_sdiv((uint)DAT_030026cc,40000);
  return;
}


/* sub_08020596 @ 0x08020596 */

void sub_08020596(int param_1)

{
  byte bVar1;
  
  sub_0801FE20(param_1);
  if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if ((bVar1 & 0xf) != 0) {
    *(byte *)(param_1 + 0x50) = bVar1 & 0xf;
  }
  if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
    *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80201f9;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  sub_080201F8(param_1);
  return;
}


/* sub_080205DE @ 0x080205DE */

void sub_080205DE(void)

{
  return;
}


/* sub_080205E0 @ 0x080205E0 */

void sub_080205E0(void)

{
  return;
}


/* sub_080205E2 @ 0x080205E2 */

void sub_080205E2(int param_1)

{
  sub_0801FE20(param_1);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x5e);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_080205FE @ 0x080205FE */

void sub_080205FE(void)

{
  return;
}


/* sub_08020600 @ 0x08020600 */

void sub_08020600(void)

{
  return;
}


/* sub_08020602 @ 0x08020602 */

void sub_08020602(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    sub_0801FF16(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_08020606 @ 0x08020606 */

void sub_08020606(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    sub_0801FF16(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) + (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_2 + 8) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_08020666 @ 0x08020666 */

void sub_08020666(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    sub_0801FF16(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0802066A @ 0x0802066A */

void sub_0802066A(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801ff17;
    sub_0801FF16(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) + (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_2 + 8) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_080206F8 @ 0x080206F8 */

void sub_080206F8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    sub_0801FEE8(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_080206FC @ 0x080206FC */

void sub_080206FC(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCC1C + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    sub_0801FEE8(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0802075C @ 0x0802075C */

void sub_0802075C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    sub_0801FEE8(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_08020760 @ 0x08020760 */

void sub_08020760(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087FCE9C + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x801fee9;
    sub_0801FEE8(param_1);
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x8020101;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_080207C0 @ 0x080207C0 */

void sub_080207C0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x4a) >> 2;
  *(byte *)(param_1 + 0x4a) = bVar1 << 2;
  if (((int)((uint)bVar1 << 0x1f) < 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x40);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  if (*(byte *)(param_1 + 0x58) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x5d);
    if ((*(byte *)(param_1 + 0x58) & 0x88) == 0) {
      uVar2 = 0;
    }
    __call_via_r1(param_1,(&gUnknown_087FCB1C)[uVar2]);
  }
  return;
}


/* sub_08020804 @ 0x08020804 */

void sub_08020804(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4a);
  if (((bVar1 & 3) != 0) && (((bVar1 & 3) != 1 || ((int)((uint)bVar1 << 0x1d) < 0)))) {
    __call_via_r1(param_1,*(undefined **)(param_1 + 0x54));
  }
  return;
}


/* sub_08020820 @ 0x08020820 */

void sub_08020820(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(char *)(param_1 + 1) + 1;
  *(byte *)(param_1 + 1) = bVar1;
  if (*(byte *)(param_1 + 2) <= bVar1) {
    iVar6 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar6;
    piVar2 = *(int **)(param_1 + 0xc);
    if (*(char *)(piVar2[1] + iVar6) == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar3 = *(undefined1 **)(*piVar2 + (uint)*(byte *)(piVar2[1] + *(int *)(param_1 + 0x10)) * 4);
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
    *(undefined1 *)(param_1 + 2) = *puVar3;
  }
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x60;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar7 + param_1 + 0x70) = 0;
  } while (iVar6 < 0xf);
  while( true ) {
    pbVar4 = *(byte **)(param_1 + 0x14);
    *(byte **)(param_1 + 0x14) = pbVar4 + 1;
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    iVar6 = ((bVar1 & 0xf) - 1) * 0x60 + param_1;
    uVar5 = (uint)(bVar1 >> 4);
    if (uVar5 == 0) {
      *(byte **)(param_1 + 0x14) = pbVar4 + 2;
      bVar1 = pbVar4[1];
      *(byte *)(iVar6 + 0x71) = bVar1;
      *(byte *)(iVar6 + 0x70) = bVar1;
    }
    else if (uVar5 == 1) {
      *(undefined1 *)(iVar6 + 0x70) = *(undefined1 *)(iVar6 + 0x71);
    }
    else {
      *(undefined1 *)(iVar6 + 0x70) =
           *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + uVar5 + -2);
    }
    uVar5 = (uint)*(byte *)(iVar6 + 0x70);
    if ((int)(uVar5 << 0x1f) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x72) = *puVar3;
    }
    if ((int)(uVar5 << 0x1e) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x73) = *puVar3;
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x74) = *puVar3;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x75) = *puVar3;
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x76) = *puVar3;
    }
  }
  return;
}


/* sub_0802090C @ 0x0802090C */

void sub_0802090C(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    sub_08020820((int)param_1);
    iVar3 = 0;
    do {
      sub_080207C0((int)(param_1 + iVar3 * 0x60 + 0x18));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
    *param_1 = param_1[3];
  }
  else {
    iVar3 = 0;
    do {
      bVar2 = param_1[iVar3 * 0x60 + 0x62];
      if (((bVar2 & 3) != 0) && (((bVar2 & 3) != 1 || ((int)((uint)bVar2 << 0x1d) < 0)))) {
        __call_via_r1(param_1 + iVar3 * 0x60 + 0x18,*(undefined **)(param_1 + iVar3 * 0x60 + 0x6c));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
  }
  iVar3 = 0;
  do {
    sub_0801F9D6((undefined4 *)(param_1 + iVar3 * 0x60 + 0x18));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  return;
}


/* sub_08020994 @ 0x08020994 */

void sub_08020994(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801FA72((int *)(iVar1 * 0x60 + param_1 + 0x18),param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return;
}


/* sub_080209B8 @ 0x080209B8 */

void sub_080209B8(char *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[5] == '\x01') {
    while (uVar1 = (uint)*(ushort *)(param_1 + 8), (int)uVar1 < (int)param_3) {
      if (uVar1 != 0) {
        iVar2 = 0;
        do {
          sub_0801FA72((int *)(param_1 + iVar2 * 0x60 + 0x18),param_2,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        param_2 = (uint)*(ushort *)(param_1 + 8) * 4 + param_2;
        param_3 = param_3 - *(ushort *)(param_1 + 8);
      }
      sub_0802090C(param_1);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
    }
    iVar2 = 0;
    do {
      sub_0801FA72((int *)(param_1 + iVar2 * 0x60 + 0x18),param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_3;
  }
  return;
}


/* sub_08020A22 @ 0x08020A22 */

void sub_08020A22(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x62) = 0;
    *(undefined1 *)(iVar2 + 0x77) = 0;
    *(undefined1 *)(iVar2 + 0x70) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 0;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x44) = iVar2 + 0x18;
  } while (iVar1 < 0xf);
  return;
}


/* sub_08020A4C @ 0x08020A4C */

void sub_08020A4C(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  param_1[2] = 1;
  *param_1 = 1;
  param_1[1] = 0;
  *(int *)(param_1 + 0xc) = param_2;
  param_1[3] = *(undefined1 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  iVar3 = 0;
  do {
    param_1[iVar3 * 0x60 + 0x62] = 0;
    param_1[iVar3 * 0x60 + 0x77] = 0;
    param_1[iVar3 * 0x60 + 0x70] = 0;
    param_1[iVar3 * 0x60 + 0x28] = 0;
    iVar4 = iVar3 + 1;
    *(undefined1 **)(param_1 + iVar3 * 0x60 + 0x44) = param_1 + iVar3 * 0x60 + 0x18;
    iVar3 = iVar4;
  } while (iVar4 < 0xf);
  bVar1 = *(byte *)(param_2 + 0x10);
  param_1[4] = bVar1;
  uVar2 = __16__rt_sdiv((uint)bVar1,40000);
  *(undefined2 *)(param_1 + 6) = uVar2;
  param_1[5] = 1;
  return;
}


/* sub_08020A96 @ 0x08020A96 */

void sub_08020A96(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    param_1[iVar1 * 0x60 + 0x62] = 0;
    param_1[iVar1 * 0x60 + 0x77] = 0;
    param_1[iVar1 * 0x60 + 0x70] = 0;
    param_1[iVar1 * 0x60 + 0x28] = 0;
    iVar2 = iVar1 + 1;
    *(undefined1 **)(param_1 + iVar1 * 0x60 + 0x44) = param_1 + iVar1 * 0x60 + 0x18;
    iVar1 = iVar2;
  } while (iVar2 < 0xf);
  param_1[1] = param_1[2];
  *param_1 = 1;
  return;
}


/* sub_08020AC8 @ 0x08020AC8 */

void sub_08020AC8(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x4c) = param_2;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x10;
  } while (iVar1 < 0xf);
  return;
}


/* sub_08020AF4 @ 0x08020AF4 */

void sub_08020AF4(undefined4 *param_1)

{
  ushort uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x2000000;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8500;
  sub_0801FD10((int)(param_1 + 0x171));
  sub_08020A22((int)(param_1 + 3));
  REG_SOUNDCNT_X = 0x80;
  REG_SOUNDCNT_H = 0x9a0e;
  REG_DMA1SAD = 0x2000000;
  REG_DMA1DAD = 0x40000a0;
  REG_DMA1CNT = 4;
  DAT_040000c6 = 0xb660;
  REG_DMA2SAD = 0x2000600;
  DAT_040000cc = 0x40000a4;
  DAT_040000d0 = 4;
  DAT_040000d2 = 0xf660;
  REG_SOUNDCNT_L = 0;
  DAT_03000e64 = &_03000798;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0x400;
  REG_TM0CNT = 0xfbe6;
  DAT_04000102 = 0x80;
  sub_08020AC8((int)(param_1 + 3),4);
  sub_0801FD56((int)(param_1 + 0x171),8);
  return;
}


/* sub_08020B8C @ 0x08020B8C */

void sub_08020B8C(void)

{
  WaitForVBlank(0x3000e3c,0x400);
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  REG_SOUNDCNT_X = 0;
  return;
}


/* sub_08020BAC @ 0x08020BAC */

void sub_08020BAC(void)

{
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  return;
}


/* sub_08020BBA @ 0x08020BBA */

void sub_08020BBA(void)

{
  WaitForVBlank(0x3000e3c,0x400);
  DAT_04000102 = 0;
  return;
}


/* sub_08020BD0 @ 0x08020BD0 */

void sub_08020BD0(void)

{
  DAT_04000102 = 0x80;
  return;
}


/* sub_08020BD8 @ 0x08020BD8 */

void sub_08020BD8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint a3;
  undefined4 *a2;
  uint local_24;
  
  *param_1 = 1;
  uVar2 = param_1[2];
  local_24 = param_1[1] - uVar2 & 0x3ff;
  if (0x3f < local_24) {
    param_1[2] = param_1[1];
    sub_0801FD22((int)(param_1 + 0x171));
    a2 = param_1 + 0x271;
    do {
      a3 = local_24;
      if (0x200 < (int)local_24) {
        a3 = 0x200;
      }
      sub_080209B8((char *)(param_1 + 3),(int)a2,a3);
      sub_0801FD38((int)(param_1 + 0x171),(int)a2,a3);
      uVar1 = uVar2 + a3;
      if ((int)uVar1 < 0x401) {
        if ((int)uVar2 < 0x200) {
          if ((int)uVar1 < 0x201) {
            sub_080236F0(uVar2 + 0x2000000,(int)(&DAT_02000600 + uVar2),(int)a2,a3);
          }
          else {
            sub_080236F0(uVar2 + 0x2000000,(int)(&DAT_02000600 + uVar2),(int)a2,-uVar2 + 0x200);
            sub_080236F0(0x2000200,0x2000400,(int)(param_1 + -uVar2 + 0x471),uVar1 - 0x200);
          }
        }
        else {
          sub_080236F0(uVar2 + 0x2000000,(int)(&DAT_02000200 + uVar2),(int)a2,a3);
        }
      }
      else {
        sub_080236F0(uVar2 + 0x2000000,(int)(&DAT_02000200 + uVar2),(int)a2,-uVar2 + 0x400);
        sub_080236F0(0x2000000,0x2000600,(int)(param_1 + -uVar2 + 0x671),uVar1 - 0x400);
      }
      uVar2 = uVar1 & 0x3ff;
      local_24 = local_24 - a3;
    } while (local_24 != 0);
  }
  *param_1 = 0;
  return;
}


/* sub_08020D24 @ 0x08020D24 */

void sub_08020D24(void)

{
  return;
}


/* sub_08020D26 @ 0x08020D26 */

void sub_08020D26(void)

{
  DAT_03007ffc = &_03000824;
  REG_IE = 0x2000;
  REG_IME = 1;
  REG_DISPSTAT = 0x18;
  return;
}


/* WaitForVBlank @ 0x08020D40 */

void WaitForVBlank(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((int)(param_2 << 0x1f) < 0) {
    if ((int)((uint)*(ushort *)(param_1 + 0x38) << 0x1f) < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 100;
    }
    else {
      bVar1 = REG_VCOUNT;
      iVar2 = bVar1 - 0xa0;
      if (iVar2 < 0) {
        iVar2 = bVar1 + 0x43;
      }
      *(int *)(param_1 + 0x3c) = iVar2 * 0x70e4 >> 0x10;
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  do {
    software_interrupt(2);
  } while (((int)*(short *)(param_1 + 0x38) & param_2) == 0);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & ~(ushort)param_2;
  return;
}


/* sub_08020D90 @ 0x08020D90 */

void sub_08020D90(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
  if (uVar2 != 0) {
    puVar6 = (ushort *)(uVar2 * 2 + *(int *)(param_1 + 0xc));
    local_18 = (uint)*puVar6;
    local_24 = param_3[1];
    local_28 = *param_3;
    local_20 = local_28 + local_18;
    local_1c = local_24 + 0x10;
    sub_08027FEC(&local_38,&local_28,(int *)(param_1 + 0x10));
    if ((local_38 < local_30) && (local_34 < local_2c)) {
      iVar4 = param_3[1];
      puVar6 = puVar6 + (local_38 - *param_3) + 1;
      iVar7 = 0;
      puVar5 = (undefined1 *)
               (*(int *)(param_1 + 0x2c) * local_34 + *(int *)(param_1 + 0x24) + local_38);
      if (0 < local_30 - local_38) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar5;
          for (uVar2 = (uint)(uVar1 >> (local_34 - iVar4 & 0xffU)) &
                       (1 << (local_2c - local_34 & 0xffU)) - 1U; uVar2 != 0;
              uVar2 = (int)uVar2 >> 1) {
            if ((int)(uVar2 << 0x1f) < 0) {
              *puVar3 = *(undefined1 *)(param_1 + 0x29);
            }
            puVar3 = puVar3 + *(int *)(param_1 + 0x2c);
          }
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_30 - local_38);
      }
    }
    *param_3 = *param_3 + local_18 + 1;
  }
  return;
}


/* sub_08020E5C @ 0x08020E5C */

undefined1 * sub_08020E5C(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)sub_0801F08C(0x38), param_1 != (undefined1 *)0x0)) {
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_1c = param_2;
    iStack_18 = param_3;
    sub_0801F58C(param_1,0,&uStack_24);
    *(int *)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x30) = param_3;
    *(int *)(param_1 + 0x34) = param_3 * param_2;
    uVar1 = sub_0801F08C(param_3 * param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = 0x8020d91;
    param_1[0x29] = 0;
  }
  return param_1;
}


/* sub_08020EAA @ 0x08020EAA */

void sub_08020EAA(undefined2 *param_1,int param_2)

{
  sub_0801F110(*(undefined2 **)(param_1 + 0x12));
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08020EC2 @ 0x08020EC2 */

void sub_08020EC2(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort *local_88;
  ushort local_84 [32];
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
  if (uVar4 != 0) {
    puVar8 = (ushort *)(uVar4 * 2 + *(int *)(param_1 + 0xc));
    uVar4 = (uint)*puVar8;
    local_24 = param_3[1];
    local_28 = *param_3;
    local_20 = local_28 + uVar4 + 1;
    local_1c = local_24 + 0x10;
    sub_08027FEC(&local_38,&local_28,(int *)(param_1 + 0x10));
    if ((local_38 < local_30) && (local_34 < local_2c)) {
      local_3c = local_30 - local_38;
      local_40 = local_34 - param_3[1];
      local_44 = (1 << (local_2c - local_34 & 0xffU)) - 1;
      iVar10 = 0;
      if (uVar4 != 0) {
        do {
          iVar5 = iVar10 + 1;
          local_84[iVar10 + 1] = puVar8[iVar10 + 1] << 1;
          iVar10 = iVar5;
        } while (iVar5 < (int)uVar4);
      }
      local_18 = puVar8 + (local_38 - *param_3) + 1;
      local_88 = local_84 + (local_38 - *param_3);
      puVar9 = (undefined1 *)
               (*(int *)(param_1 + 0x2c) * local_34 + *(int *)(param_1 + 0x24) + local_38);
      iVar10 = 0;
      if (0 < local_3c) {
        do {
          uVar1 = *local_18;
          local_18 = local_18 + 1;
          uVar3 = uVar1 >> (local_40 & 0xff) & local_44;
          uVar1 = *local_88;
          local_88 = local_88 + 1;
          uVar6 = uVar1 >> (local_40 & 0xff) & local_44;
          puVar7 = puVar9;
          if (uVar3 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar3 << 0x1f) < 0) {
                *puVar7 = *(undefined1 *)(param_1 + 0x29);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar7 = *(undefined1 *)(param_1 + 0x28);
              }
              puVar7 = puVar7 + *(int *)(param_1 + 0x2c);
              uVar2 = uVar3 | uVar6;
              uVar3 = (int)uVar3 >> 1;
              uVar6 = (int)uVar6 >> 1;
            } while ((int)uVar2 >> 1 != 0);
          }
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_3c);
      }
    }
    *param_3 = *param_3 + uVar4 + 1;
  }
  return;
}


/* sub_08020FDC @ 0x08020FDC */

void sub_08020FDC(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined1 *puVar9;
  ushort *local_88;
  ushort local_84 [32];
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
  if (uVar4 != 0) {
    puVar7 = (ushort *)(uVar4 * 2 + *(int *)(param_1 + 0xc));
    local_18 = (uint)*puVar7;
    local_24 = param_3[1];
    local_28 = *param_3 + -1;
    iVar8 = local_18 + 2;
    local_20 = local_28 + iVar8;
    local_1c = local_24 + 0x10;
    sub_08027FEC(&local_38,&local_28,(int *)(param_1 + 0x10));
    if ((local_38 < local_30) && (local_34 < local_2c)) {
      local_3c = local_30 - local_38;
      iVar2 = 0;
      local_44 = (1 << (local_2c - local_34 & 0xffU)) - 1;
      local_40 = local_34 - param_3[1];
      if (iVar8 != 0) {
        do {
          iVar3 = iVar2 + 1;
          local_84[iVar2] = 0;
          iVar2 = iVar3;
        } while (iVar3 < iVar8);
      }
      iVar8 = 0;
      if (0 < (int)local_18) {
        do {
          iVar2 = iVar8 + 1;
          local_84[iVar8] = local_84[iVar8] | puVar7[iVar8 + 1];
          local_84[iVar8 + 2] = local_84[iVar8 + 2] | puVar7[iVar8 + 1];
          local_84[iVar8 + 1] =
               puVar7[iVar8 + 1] << 1 | puVar7[iVar8 + 1] >> 1 | local_84[iVar8 + 1];
          iVar8 = iVar2;
        } while (iVar2 < (int)local_18);
      }
      iVar8 = local_38 - *param_3;
      local_88 = local_84 + iVar8;
      puVar7 = puVar7 + iVar8 + 1;
      puVar9 = (undefined1 *)
               (*(int *)(param_1 + 0x2c) * local_34 + *(int *)(param_1 + 0x24) + local_38);
      uVar4 = 0;
      if (-1 < iVar8) {
        uVar4 = *puVar7 >> (local_40 & 0xff) & local_44;
      }
      iVar8 = 0;
      if (0 < local_3c) {
        do {
          local_88 = local_88 + 1;
          uVar5 = *local_88 >> (local_40 & 0xff) & local_44;
          puVar6 = puVar9;
          if (uVar4 != 0 || uVar5 != 0) {
            do {
              if ((int)(uVar4 << 0x1f) < 0) {
                *puVar6 = *(undefined1 *)(param_1 + 0x29);
              }
              else if ((int)(uVar5 << 0x1f) < 0) {
                *puVar6 = *(undefined1 *)(param_1 + 0x28);
              }
              puVar6 = puVar6 + *(int *)(param_1 + 0x2c);
              uVar1 = uVar4 | uVar5;
              uVar4 = (int)uVar4 >> 1;
              uVar5 = (int)uVar5 >> 1;
            } while ((int)uVar1 >> 1 != 0);
          }
          puVar7 = puVar7 + 1;
          iVar8 = iVar8 + 1;
          uVar4 = *puVar7 >> (local_40 & 0xff) & local_44;
          puVar9 = puVar9 + 1;
        } while (iVar8 < local_3c);
      }
    }
    *param_3 = *param_3 + local_18 + 1;
  }
  return;
}


/* sub_08021140 @ 0x08021140 */

void sub_08021140(int param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = (char *)(*(int *)(param_1 + 0x2c) * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  puVar4 = param_2 + 2;
  if (param_2[1] != 0) {
    do {
      iVar3 = 0;
      pcVar2 = pcVar5;
      if (*param_2 != 0) {
        do {
          uVar1 = *puVar4;
          puVar4 = (ushort *)((int)puVar4 + 1);
          if ((char)uVar1 != '\0') {
            *pcVar2 = (char)uVar1;
          }
          pcVar2 = pcVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*param_2);
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + *(int *)(param_1 + 0x2c);
    } while (iVar6 < (int)(uint)param_2[1]);
  }
  return;
}


/* sub_08021188 @ 0x08021188 */

void sub_08021188(int param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  if (iVar5 * iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
    iVar6 = iVar4;
    do {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 != '\0') {
          *pcVar2 = cVar1;
        }
        pcVar2 = pcVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar2 = pcVar2 + (iVar3 - iVar4);
      param_2 = param_2 + (param_4 - iVar4);
      iVar5 = iVar5 + -1;
      iVar6 = iVar4;
    } while (iVar5 != 0);
  }
  return;
}


/* sub_080211C8 @ 0x080211C8 */

void sub_080211C8(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  iVar6 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  iVar4 = iVar6;
  do {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 != '\0') {
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar2 = pcVar2 + (iVar3 - iVar6);
    iVar5 = iVar5 + -1;
    iVar4 = iVar6;
  } while (iVar5 != 0);
  return;
}


/* sub_08021202 @ 0x08021202 */

void sub_08021202(int param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_2[2] - *param_2;
  iVar7 = param_2[3] - param_2[1];
  iVar2 = *(int *)(param_1 + 0x2c) - iVar6;
  puVar1 = (undefined1 *)
           (*(int *)(param_1 + 0x2c) * (param_2[1] + -3) + *(int *)(param_1 + 0x24) + *param_2 + -1)
  ;
  iVar3 = iVar6 + 2;
  iVar4 = iVar3;
  do {
    *puVar1 = param_3;
    puVar1 = puVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar1[iVar2 + -3] = param_3;
  puVar1[iVar2 + -2] = param_3;
  puVar1 = puVar1 + iVar2 + -1;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_4;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_3;
  puVar5[2] = param_3;
  puVar5[iVar2 + -2] = param_3;
  puVar5[iVar2 + -1] = param_3;
  puVar5[iVar2] = param_4;
  puVar1 = puVar5 + iVar2 + 1;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_3;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_4;
  puVar5[2] = param_3;
  puVar5[3] = param_3;
  puVar5 = puVar5 + iVar2 + -2;
  iVar4 = 0;
  if (0 < iVar7) {
    do {
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_3;
      puVar5 = puVar5 + iVar6 + 3;
      *puVar5 = param_3;
      puVar5[1] = param_4;
      puVar5[2] = param_3;
      puVar5 = puVar5 + iVar2 + -3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  *puVar5 = param_3;
  puVar5[1] = param_3;
  puVar5[2] = param_4;
  puVar1 = puVar5 + 3;
  iVar4 = iVar6;
  do {
    puVar5 = puVar1;
    *puVar5 = param_3;
    iVar4 = iVar4 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar5[1] = param_4;
  puVar5[2] = param_3;
  puVar5[3] = param_3;
  puVar5[iVar2 + -1] = param_3;
  puVar5[iVar2] = param_3;
  puVar1 = puVar5 + iVar2 + 1;
  do {
    puVar5 = puVar1;
    *puVar5 = param_4;
    iVar6 = iVar6 + -1;
    puVar1 = puVar5 + 1;
  } while (iVar6 != 0);
  puVar5[1] = param_3;
  puVar5[2] = param_3;
  puVar5 = puVar5 + iVar2;
  do {
    *puVar5 = param_3;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* sub_080212F2 @ 0x080212F2 */

void sub_080212F2(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  pcVar1 = *(char **)(param_1 + 0x24);
  do {
    if (*pcVar1 == '\0') {
      *pcVar1 = param_2;
    }
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* sub_0802130A @ 0x0802130A */

void sub_0802130A(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = param_2[2];
  iVar4 = *param_2;
  iVar3 = param_2[1];
  if (iVar3 < param_2[3]) {
    do {
      puVar5 = (undefined1 *)
               (*(int *)(param_1 + 0x24) + iVar3 * *(int *)(param_1 + 0x2c) + *param_2);
      for (iVar1 = iVar2 - iVar4; -1 < iVar1; iVar1 = iVar1 + -1) {
        *puVar5 = param_3;
        puVar5 = puVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2[3]);
  }
  return;
}


/* sub_08021344 @ 0x08021344 */

void sub_08021344(int param_1,int param_2)

{
  DAT_03003888 = *(undefined4 *)(param_1 + 0x2c);
  DAT_0300388c = *(undefined4 *)(param_1 + 0x30);
  sub_080236CC(param_1,param_2,0x3003880);
  return;
}


/* sub_0802135C @ 0x0802135C */

void sub_0802135C(void)

{
  sub_08020B8C();
  REG_IME = 0;
  REG_DISPCNT = 0x80;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  software_interrupt(0);
  return;
}


/* sub_08021388 @ 0x08021388 */

void sub_08021388(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = REG_IE;
  uVar1 = REG_DISPCNT;
  iVar3 = 0;
  REG_DISPCNT = 0x80;
  do {
    WaitForVBlank(0x3000e3c,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  REG_IE = 0x3000;
  REG_KEYCNT = 0xc304;
  software_interrupt(3);
  REG_IE = uVar2;
  REG_KEYCNT = 0;
  REG_DISPCNT = uVar1;
  do {
    WaitForVBlank(0x3000e3c,1);
    sub_0801EEFC(&DAT_0300229c);
  } while ((DAT_030022ae & 0x304) != 0);
  return;
}


