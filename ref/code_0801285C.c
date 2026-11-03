/* Ghidra reference decompilation of code_0801285C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801285C @ 0x0801285C */

void sub_0801285C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x14;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x10c;
  return;
}


/* sub_08012874 @ 0x08012874 */

void sub_08012874(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x800) >> 0xe;
  return;
}


/* sub_08012882 @ 0x08012882 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08012882(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  
  if ((int)((uint)DAT_030022ae << 0x19) < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc0;
  }
  else if ((int)((uint)DAT_030022ae << 0x18) < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc0;
  }
  iVar2 = *(int *)(param_1 + 8) * 0xf;
  iVar2 = (int)(((uint)(iVar2 >> 0x1f) >> 0x1c) + iVar2) >> 4;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((int)((uint)DAT_030022ae << 0x1b) < 0) {
    iVar2 = 0x80;
  }
  else {
    iVar2 = 0;
    if ((int)((uint)DAT_030022ae << 0x1a) < 0) {
      iVar2 = -0x80;
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = -iVar2;
  }
  iVar2 = *(int *)(param_1 + 0xc) + iVar2;
  iVar2 = iVar2 - (iVar2 >> 3);
  *(int *)(param_1 + 0xc) = iVar2;
  if (0 < iVar2) {
    *(int *)(param_1 + 0xc) = iVar2 + -1;
  }
  _DAT_03001090 = *(int *)(param_1 + 0xc) + _DAT_03001090;
  iStack_1c = (*(int *)(param_1 + 8) *
               *(int *)(&gUnknown_087FD104 + ((uint)((_DAT_03001090 >> 10) << 0x18) >> 0x16)) >>
              0x10) + DAT_03001094;
  iStack_18 = DAT_03001098 -
              (*(int *)(param_1 + 8) *
               *(int *)(&gUnknown_087FD104 +
                       ((uint)(((_DAT_03001090 >> 10) + 0x40) * 0x1000000) >> 0x16)) >> 0x10);
  sub_080060FE(0x3001090,&iStack_1c);
  *(int *)(param_2 + 0x158) = ((iStack_1c >> 10) + -8) * 0x100;
  *(int *)(param_2 + 0x15c) = ((iStack_18 >> 10) + -4) * 0x100;
  sub_08005DD4((int *)&DAT_03001090);
  if (*(int *)(param_1 + 0xc) < 0x81) {
    if (*(int *)(param_1 + 0xc) < -0x80) {
      *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x18c;
      uVar1 = 0;
      if (*(int *)(param_1 + 4) == 0) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar1;
    }
    else {
      *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x10c;
      *(bool *)(param_2 + 0x10) = *(int *)(param_1 + 4) == 0;
    }
  }
  else {
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x18c;
    uVar1 = 2;
    if (*(int *)(param_1 + 4) == 0) {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + 0x10) = uVar1;
  }
  return;
}


/* sub_080129B8 @ 0x080129B8 */

undefined4 * sub_080129B8(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  int *piVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1a0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080086D4(param_1,param_2,param_3);
  *param_1 = &_08025F28;
  piVar1 = (int *)sub_0801F08C(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_080258A0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[1] = 0;
  }
  sub_0800763C((int)param_1,piVar1);
  return param_1;
}


/* sub_08012A04 @ 0x08012A04 */

void sub_08012A04(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_080258A0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[1] = 0;
  }
  sub_0800763C(param_1,piVar1);
  return;
}


/* sub_08012A28 @ 0x08012A28 */

undefined4 sub_08012A28(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(ushort *)(param_1 + 0x14) * 0xc);
  *(char **)(param_1 + 0x3c) = pcVar1;
  *(int *)(param_1 + 0x40) = *pcVar1 + 0x70;
  *(int *)(param_1 + 0x44) = pcVar1[1] + 0x50;
  return 1;
}


/* sub_08012A50 @ 0x08012A50 */

void sub_08012A50(int param_1)

{
  sub_0800772A(param_1);
  return;
}


/* sub_08012A68 @ 0x08012A68 */

undefined4 * sub_08012A68(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  uVar1 = sub_080067AC(&DAT_03001120,0x40);
  *(ushort *)(param_1 + 3) = uVar1;
  *param_1 = &_08024064;
  param_1[4] = *param_2 << 0x10 | param_2[1] | 0x2000;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = 0x28;
  param_1[5] = param_3;
  REG_DMA3SAD = param_3;
  REG_DMA3DAD = (uint)uVar1 * 0x20 + 0x6010000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8400;
  return param_1;
}


/* sub_08012AD2 @ 0x08012AD2 */

undefined4 sub_08012AD2(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}


/* sub_08012AFE @ 0x08012AFE */

undefined4 sub_08012AFE(int param_1,int param_2)

{
  if (param_2 == 9) {
    REG_DMA3SAD = *(undefined4 *)(param_1 + 0x14);
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
    return 0;
  }
  return 0;
}


/* sub_08012B38 @ 0x08012B38 */

undefined4 * sub_08012B38(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x40;
    uVar1 = sub_080067AC(&DAT_03001120,0x40);
    *(ushort *)(param_1 + 3) = uVar1;
    *param_1 = &_08025C08;
    param_1[4] = *param_2 + -8;
    param_1[5] = param_2[1] + -8;
    uVar2 = __16__rt_sdiv(DAT_030010e4,(param_2[2] - *param_2) * 0x400000);
    param_1[6] = uVar2;
    uVar2 = __16__rt_sdiv(DAT_030010e8,(param_2[3] - param_2[1]) * 0x400000);
    param_1[7] = uVar2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0x29;
    REG_DMA3SAD = 0x86d87f0;
    REG_DMA3DAD = (uint)uVar1 * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return param_1;
}


/* sub_08012BC4 @ 0x08012BC4 */

undefined4 sub_08012BC4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  iVar2 = param_2[1];
  param_2[1] = iVar2 + 0x20;
  iVar3 = param_2[2];
  param_2[2] = iVar3 + 1;
  *puVar1 = 0x2300;
  uVar4 = (uint)(((*(int *)(param_1 + 0x18) * (DAT_03001094 >> 10) >> 0x16) +
                 *(int *)(param_1 + 0x10)) * 0x800000) >> 7 | 0x2300;
  *puVar1 = uVar4;
  *puVar1 = (uint)(iVar3 << 0x1b) >> 2 |
            uVar4 | (*(int *)(param_1 + 0x1c) * (DAT_03001098 >> 10) >> 0x16) +
                    *(int *)(param_1 + 0x14) & 0xffU;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00;
  *(short *)(iVar2 + 6) = (short)(DAT_030010c8 >> 2);
  *(short *)(iVar2 + 0x16) = (short)(DAT_030010cc >> 2);
  *(short *)(iVar2 + 0xe) = (short)(DAT_030010d0 >> 2);
  *(short *)(iVar2 + 0x1e) = (short)(DAT_030010d4 >> 2);
  return 0;
}


/* sub_08012C56 @ 0x08012C56 */

undefined4 sub_08012C56(int param_1,int param_2)

{
  if (param_2 == 9) {
    REG_DMA3SAD = 0x86d87f0;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
    return 0;
  }
  return 0;
}


/* sub_08012C94 @ 0x08012C94 */

void sub_08012C94(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025F90;
    param_1[5] = param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    param_1[6] = *param_2;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    param_1[9] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[5] + 0x16);
    param_1[1] = param_2[3];
    param_1[4] = (uint)(*(char *)(param_1[5] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 3) = param_3;
    param_1[0xc] = (int)(param_1[6] + param_1[8]) >> 1;
    param_1[10] = param_1[8] - param_1[6];
    param_1[0xd] = param_1[9];
    param_1[0xb] = param_1[9] - param_1[7];
  }
  return;
}


/* sub_08012CEE @ 0x08012CEE */

int sub_08012CEE(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if ((((*(int *)(param_1 + 0x30) < DAT_0300109c) || (DAT_030010a4 <= *(int *)(param_1 + 0x30)))
        || (*(int *)(param_1 + 0x34) < DAT_030010a0)) || (DAT_030010a8 <= *(int *)(param_1 + 0x34)))
    {
      iVar1 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x30) * DAT_030010c8 + *(int *)(param_1 + 0x34) * DAT_030010d0 +
              iRam030010d8;
      iVar1 = *(int *)(param_1 + 0x30) * DAT_030010cc + *(int *)(param_1 + 0x34) * DAT_030010d4 +
              iRam030010dc;
      iVar2 = iVar1 >> 10;
      if (iVar2 < -200) {
        iVar1 = 0;
      }
      else if (iVar2 < 0x2e) {
        uVar3 = 0x400 - (iVar2 * 0xe7e + 0xb5270 >> 10);
        *(uint *)(param_1 + 0x40) = uVar3;
        iVar2 = __16__rt_sdiv(uVar3,iVar4 * 0x400);
        iVar4 = *(int *)(param_1 + 0x28);
        iVar2 = ((iVar2 >> 10) + 0x78) - iVar4;
        *(int *)(param_1 + 0x38) = iVar2;
        if ((iVar2 < 0xf1) && (iVar2 + iVar4 * 2 < 0 == SBORROW4(iVar2,iVar4 * -2))) {
          iVar1 = __16__rt_sdiv(uVar3,((iVar1 + 0x32000) * 0x7d >> 10) << 10);
          iVar4 = (iVar1 >> 10) + 0x38;
          *(int *)(param_1 + 4) = iVar4;
          iVar2 = *(int *)(param_1 + 0x2c);
          iVar1 = __16__rt_sdiv(uVar3,iVar2 << 8);
          iVar1 = (iVar4 - iVar2) - iVar1;
          *(int *)(param_1 + 0x3c) = iVar1;
          if ((iVar1 < 0xa1) && (iVar1 + iVar2 * 2 < 0 == SBORROW4(iVar1,iVar2 * -2))) {
            iVar1 = 1;
          }
          else {
            iVar1 = 0;
          }
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


/* sub_08012DE4 @ 0x08012DE4 */

undefined4 sub_08012DE4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = param_2[2];
  if (iVar3 < 0x10) {
    puVar1 = (uint *)*param_2;
    *param_2 = puVar1 + 2;
    iVar2 = param_2[1];
    param_2[1] = iVar2 + 0x20;
    param_2[2] = iVar3 + 1;
    uVar4 = *(uint *)(*(int *)(param_1 + 0x14) + 0x10);
    *puVar1 = uVar4 | 0x300;
    uVar5 = (uint)(*(int *)(param_1 + 0x38) << 0x17) >> 7;
    *puVar1 = uVar4 & 0xfe00ffff | 0x300 | uVar5;
    uVar6 = *(uint *)(param_1 + 0x3c) & 0xff;
    *puVar1 = uVar4 & 0xfe00ff00 | 0x300 | uVar5 | uVar6;
    uVar8 = puVar1[1];
    uVar7 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar1[1] = uVar7 | uVar8 & 0xfffff3ff;
    puVar1[1] = uVar7 | uVar8 & 0xfffff000 | *(ushort *)(param_1 + 0xe) & 0x3ff;
    *puVar1 = (uint)(iVar3 << 0x1b) >> 2 | uVar4 & 0xc000ff00 | 0x300 | uVar5 | uVar6;
    *(short *)(iVar2 + 6) = (short)*(undefined4 *)(param_1 + 0x40);
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(short *)(iVar2 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x40);
  }
  return 0;
}


/* sub_08012E78 @ 0x08012E78 */

int sub_08012E78(int param_1,int param_2,uint param_3)

{
  if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0x10) = param_3 & 1;
      return 1;
    }
    param_1 = 0;
  }
  else {
    if (param_2 != 6) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0xc) != param_3) {
      return 0;
    }
  }
  return param_1;
}


/* sub_08012EA4 @ 0x08012EA4 */

void sub_08012EA4(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)sub_0801F08C(*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
  sub_0801F394(*(int **)(*(int *)(param_1 + 0x44) + 0x2c),(int)puVar1);
  sub_0801F412(&REG_DMA3SAD,(uint)*(ushort *)(param_1 + 0xe) * 0x20 + 0x6010000,(int)puVar1,
               *(uint *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
  sub_0801F110(puVar1);
  return;
}


/* sub_08012EDC @ 0x08012EDC */

void sub_08012EDC(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  sub_08012EA4(param_1);
  return;
}


/* sub_08012EF8 @ 0x08012EF8 */

undefined2 sub_08012EF8(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_08012EA4(param_1);
  }
  return *(undefined2 *)(param_1 + 0xe);
}


/* sub_08012F40 @ 0x08012F40 */

undefined4 * sub_08012F40(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08012C94(param_1,param_2,(undefined2)param_4);
    *param_1 = &_08025E5C;
    param_1[0x11] = param_3;
    if (*(short *)(param_3 + 0xe) == -1) {
      uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(*(int *)(param_3 + 0x44) + 0x2c) + 4));
      *(undefined2 *)(param_3 + 0xe) = uVar1;
      sub_08012EA4(param_3);
    }
    *(short *)((int)param_1 + 0xe) = *(short *)(param_3 + 0xe) + *(short *)(param_1[5] + 0x14);
  }
  return param_1;
}


/* sub_08012F98 @ 0x08012F98 */

void sub_08012F98(void)

{
  return;
}


/* sub_08012F9A @ 0x08012F9A */

void sub_08012F9A(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(short *)(iVar2 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(*(int *)(iVar2 + 0x44) + 0x2c) + 4));
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
    sub_08012EA4(iVar2);
  }
  *(short *)(param_1 + 0xe) = *(short *)(iVar2 + 0xe) + *(short *)(*(int *)(param_1 + 0x14) + 0x14);
  return;
}


/* sub_08012FCA @ 0x08012FCA */

undefined4 * sub_08012FCA(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08012C94(param_1,*(undefined4 **)(param_2 + 0x28),0);
    *param_1 = &_08025FB8;
    param_1[0x11] = param_2;
    uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(param_2 + 0x2c) + 4));
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
    sub_08012EA4((int)param_1);
  }
  return param_1;
}


/* sub_0801300A @ 0x0801300A */

void sub_0801300A(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FB8;
  if (*(ushort *)((int)param_1 + 0xe) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)((int)param_1 + 0xe));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08013034 @ 0x08013034 */

void sub_08013034(int param_1)

{
  sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  return;
}


/* sub_0801304A @ 0x0801304A */

void sub_0801304A(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_08012EA4(param_1);
  }
  return;
}


/* sub_0801306E @ 0x0801306E */

int sub_0801306E(int param_1,int param_2,uint param_3)

{
  if (param_2 == 9) {
    sub_08012EA4(param_1);
    param_1 = 0;
  }
  else if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0x10) = param_3 & 1;
      param_1 = 1;
    }
    else {
      param_1 = 0;
    }
  }
  else if (param_2 == 6) {
    if (*(ushort *)(param_1 + 0xc) != param_3) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


/* sub_080130BC @ 0x080130BC */

undefined4 * sub_080130BC(undefined4 *param_1)

{
  ushort uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  uVar1 = sub_080067AC(&DAT_03001120,0x40);
  *(ushort *)(param_1 + 3) = uVar1;
  *param_1 = &_080250D4;
  *(undefined1 *)(param_1 + 2) = 0x27;
  param_1[1] = 0;
  REG_DMA3SAD = 0x86d883c;
  REG_DMA3DAD = (uint)uVar1 * 0x20 + 0x6010000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8400;
  return param_1;
}


/* sub_08013112 @ 0x08013112 */

undefined4 sub_08013112(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x77208b;
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}


/* sub_08013158 @ 0x08013158 */

undefined4 sub_08013158(void)

{
  return 0;
}


/* sub_0801315C @ 0x0801315C */

int sub_0801315C(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 0x14)) {
    return 0;
  }
  return iVar1;
}


/* sub_08013178 @ 0x08013178 */

void sub_08013178(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -10;
  __call_via_r2(param_2,0x2e,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_08013190 @ 0x08013190 */

int sub_08013190(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 6)) {
    return 0;
  }
  return iVar1;
}


/* sub_080131AC @ 0x080131AC */

void sub_080131AC(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -6;
  __call_via_r2(param_2,0x2f,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_080131C4 @ 0x080131C4 */

int sub_080131C4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 2)) {
    return 0;
  }
  return iVar1;
}


/* sub_080131E0 @ 0x080131E0 */

void sub_080131E0(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -2;
  __call_via_r2(param_2,0x22,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_080131F8 @ 0x080131F8 */

int sub_080131F8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 0xc)) {
    return 0;
  }
  return iVar1;
}


/* sub_08013214 @ 0x08013214 */

void sub_08013214(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -2;
  __call_via_r2(param_2,0x30,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801322C @ 0x0801322C */

int sub_0801322C(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 4)) {
    return 0;
  }
  return iVar1;
}


/* sub_08013248 @ 0x08013248 */

void sub_08013248(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -4;
  __call_via_r2(param_2,0x2d,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_08013260 @ 0x08013260 */

int sub_08013260(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 6)) {
    return 0;
  }
  return iVar1;
}


/* sub_0801327C @ 0x0801327C */

void sub_0801327C(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined *local_20;
  int *local_1c;
  int *local_c;
  
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -6;
  __call_via_r2(param_2,5,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  local_28 = (undefined1)param_2[4];
  local_3c[0] = 1;
  local_20 = &gUnknown_086DB344;
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x800;
  local_2c = 0x800;
  local_1c = param_2;
  local_c = param_2;
  sub_08006DA6(0x3001120,0,local_3c);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08025808;
    puVar1[3] = 0x20;
  }
  sub_080068B8(0x3001120,(int)puVar1);
  sub_0801FC9C(0x3002c80,&gUnknown_080E1790,0x40,0);
  return;
}


/* sub_080132F2 @ 0x080132F2 */

int sub_080132F2(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 4)) {
    return 0;
  }
  return iVar1;
}


/* sub_0801330E @ 0x0801330E */

void sub_0801330E(int param_1,int *param_2)

{
  int iVar1;
  int local_50;
  int local_4c;
  undefined1 local_48 [4];
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int *local_28;
  int *local_18;
  
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -4;
  local_34 = (undefined1)param_2[4];
  local_2c = &DAT_086db2f4;
  local_30 = 0x400;
  local_48[0] = 1;
  iVar1 = (uint)*(byte *)(param_2 + 4) * 0x10;
  local_28 = param_2;
  sub_0800791A(&local_50,(int)param_2);
  local_44 = *(int *)(&DAT_086db28c + iVar1) + local_50;
  iStack_40 = *(int *)(&DAT_086db290 + iVar1) + local_4c;
  iStack_3c = *(int *)(&DAT_086db294 + iVar1) + local_50;
  iStack_38 = *(int *)(&DAT_086db298 + iVar1) + local_4c;
  local_18 = param_2;
  __call_via_r2(param_2,0x2b,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  iVar1 = sub_08006DA6(0x3001120,0,local_48);
  if (iVar1 != 0) {
    iVar1 = sub_0802141C(3);
    sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
  }
  sub_0801FC9C(0x3002c80,&DAT_080e173c,0x40,0);
  return;
}


/* sub_080133F0 @ 0x080133F0 */

int sub_080133F0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 0xc)) {
    return 0;
  }
  return iVar1;
}


/* sub_0801340C @ 0x0801340C */

void sub_0801340C(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -0xc;
  __call_via_r2(param_2,0x2c,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_08013424 @ 0x08013424 */

int sub_08013424(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 8)) {
    return 0;
  }
  return iVar1;
}


/* sub_08013440 @ 0x08013440 */

void sub_08013440(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -2;
  __call_via_r2(param_2,0x31,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_08013458 @ 0x08013458 */

int sub_08013458(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 5)) {
    return 0;
  }
  return iVar1;
}


/* sub_08013474 @ 0x08013474 */

void sub_08013474(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -5;
  __call_via_r2(param_2,0x32,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801348C @ 0x0801348C */

int sub_0801348C(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0300208c;
  if ((DAT_0300208c != 0) && (iVar1 = 1, *(short *)(param_1 + 4) < 0x14)) {
    return 0;
  }
  return iVar1;
}


/* sub_080134A8 @ 0x080134A8 */

void sub_080134A8(int param_1,int *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -10;
  __call_via_r2(param_2,0x33,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_080134C0 @ 0x080134C0 */

void sub_080134C0(int param_1,int *param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(*param_2 + 0x28) + *param_2);
  if (((&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] & 1) == 0) {
    __call_via_r2(param_2,0x25,UNRECOVERED_JUMPTABLE);
  }
  else {
    __call_via_r2(param_2,0x24,UNRECOVERED_JUMPTABLE);
  }
  return;
}


/* sub_080134F2 @ 0x080134F2 */

undefined4 sub_080134F2(int param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)(byte)(&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] << 0x1e) < 0) {
    return 0;
  }
  if (((&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] & 1) != 0) {
    return 1;
  }
  if (DAT_0300208c == 0) {
    return 0;
  }
  uVar1 = 1;
  if (DAT_03000e98 == 0) {
    if (*(short *)(param_1 + 4) < 10) {
      return 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801353C @ 0x0801353C */

void sub_0801353C(int param_1,int *param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(*param_2 + 0x28) + *param_2);
  if (((&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] & 1) == 0) {
    __call_via_r2(param_2,0x23,UNRECOVERED_JUMPTABLE);
  }
  else {
    __call_via_r2(param_2,0x24,UNRECOVERED_JUMPTABLE);
  }
  return;
}


/* sub_08013578 @ 0x08013578 */

void sub_08013578(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x19c;
  return;
}


/* sub_0801358C @ 0x0801358C */

void sub_0801358C(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 4;
  }
  else {
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x14) + *param_1));
  }
  return;
}


/* sub_080135AE @ 0x080135AE */

void sub_080135AE(undefined4 param_1,int param_2)

{
  sub_08007688(param_2);
  return;
}


/* sub_080135B8 @ 0x080135B8 */

void sub_080135B8(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
  *(int *)(param_1 + 0x24) = iVar4;
  bVar1 = pcVar2[2];
  *(uint *)(param_1 + 0x2c) = iVar4 + (uint)(byte)pcVar2[3];
  *(uint *)(param_1 + 0x28) = iVar3 + (uint)bVar1;
  return;
}


/* sub_080135E0 @ 0x080135E0 */

undefined4 *
sub_080135E0(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined1 param_7)

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


/* sub_08013656 @ 0x08013656 */

void sub_08013656(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_1[0xc] + param_1[0xe];
  param_1[0xc] = uVar3;
  if (uVar3 >> 0x10 != 0) {
    iVar2 = param_1[0xd];
    param_1[0xd] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      sub_080068CA(0x3001120,param_1);
      return;
    }
    iVar2 = param_1[0xf];
    param_1[0xf] = iVar2 + 0xc;
    iVar4 = param_1[4] - (int)*(char *)(iVar2 + 0xc);
    param_1[8] = iVar4;
    iVar5 = param_1[5] - (int)*(char *)(iVar2 + 0xd);
    param_1[9] = iVar5;
    bVar1 = *(byte *)(iVar2 + 0xe);
    param_1[0xb] = iVar5 + (uint)*(byte *)(iVar2 + 0xf);
    param_1[10] = iVar4 + (uint)bVar1;
  }
  param_1[0xc] = uVar3 & 0xffff;
  return;
}


/* sub_080136A6 @ 0x080136A6 */

undefined4 sub_080136A6(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - DAT_030010a0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - DAT_0300109c;
  *(int *)(param_1 + 0x1c) = iVar2;
  if ((((*(int *)(param_1 + 0x20) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x28))) &&
      (*(int *)(param_1 + 0x24) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x2c))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080136F2 @ 0x080136F2 */

bool sub_080136F2(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x3c) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x1c) & 0xff;
  uVar2 = (puVar1[1] & 0xfffff3ff) + 0x800;
  puVar1[1] = uVar2;
  puVar1[1] = uVar2 & 0xfffffc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  return *(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x40);
}


/* sub_08013750 @ 0x08013750 */

void sub_08013750(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x40) = iVar1;
  REG_DMA3SAD = *(undefined4 *)(iVar1 + 8);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = (short)((uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2) >> 2);
  DAT_040000de = 0x8400;
  return;
}


/* sub_08013778 @ 0x08013778 */

undefined4 sub_08013778(int *param_1,int param_2)

{
  if (param_2 == 9) {
    param_1[0x10] = 0;
  }
  else if (param_2 == 10) {
    __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 8) + *param_1));
  }
  return 0;
}


/* sub_0801379E @ 0x0801379E */

undefined4 sub_0801379E(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_080137C4 @ 0x080137C4 */

undefined4 *
sub_080137C4(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,param_6,param_4);
    *param_1 = &_08024D14;
    uVar2 = param_5[1];
    param_1[0x10] = *param_5;
    param_1[0x11] = uVar2;
    iVar1 = *param_2;
    iVar3 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar3 << 8;
    param_1[0x13] = 0;
    param_1[0x14] = &gUnknown_086DD884 + param_3 * 0x24;
    param_1[6] = &gUnknown_086DD884 + param_3 * 0x24;
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_08013828 @ 0x08013828 */

void sub_08013828(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  undefined4 in_cr11;
  undefined8 uVar5;
  undefined1 auStackY_68 [4];
  int iStackY_64;
  int iStackY_60;
  int iStackY_5c;
  int iStackY_58;
  undefined1 uStackY_54;
  undefined4 uStackY_50;
  undefined *puStackY_4c;
  int iStackY_48;
  int *piStackY_38;
  undefined4 *puStackY_34;
  undefined *puStackY_30;
  int local_14;
  int local_10;
  
  local_14 = param_1[8] >> 8;
  local_10 = param_1[9] >> 8;
  sub_080068CA(0x3001120,param_1);
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x1f) * 0xc,0x40,0);
  iVar1 = sub_08006D70(&DAT_03001120);
  uVar5 = CONCAT44(0x400,iVar1);
  cVar4 = SBORROW4(iVar1,0x400);
  cVar3 = iVar1 + -0x400 < 0;
  if (0x3ff < iVar1) {
    iVar1 = sub_080135E0((undefined4 *)0x0,&local_14,"\b\b\x10\x10",3,0x1000,0x400,0x28);
    cVar4 = SCARRY4(iVar1,0);
    cVar3 = iVar1 < 0;
    uVar5 = sub_080068B8(0x3001120,iVar1);
  }
  piVar2 = (int *)uVar5;
  if (cVar3 != cVar4) {
    piVar2 = piVar2 + -5;
    coprocessor_load(0,in_cr11,piVar2);
  }
  puStackY_30 = &DAT_030026bc;
  puStackY_34 = &gUnknown_086DB354;
  piVar2[8] = piVar2[8] + piVar2[0x10];
  piVar2[9] = piVar2[9] + piVar2[0x11];
  iVar1 = piVar2[0x12] + 1;
  piVar2[0x12] = iVar1;
  if (0x10 < iVar1) {
    piVar2[0x13] = 1 - (iVar1 * 0x8000000 >> 0x1f);
  }
  piVar2[6] = piVar2[0x14] + piVar2[0x13] * 0xc;
  sub_08013BF4((int)piVar2);
  if ((((piVar2[10] < DAT_030010a4) && (DAT_0300109c < piVar2[0xc])) && (piVar2[0xb] < DAT_030010a8)
      ) && (DAT_030010a0 < piVar2[0xd])) {
    iStackY_64 = (piVar2[8] >> 8) + -8;
    iStackY_60 = (piVar2[9] >> 8) + -8;
    iStackY_5c = (piVar2[8] >> 8) + 8;
    iStackY_58 = (piVar2[9] >> 8) + 8;
    if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
      iStackY_48 = piVar2[7];
      uStackY_54 = (undefined1)piVar2[5];
      uStackY_50 = 0x400;
      puStackY_4c = &gUnknown_086DB2FC;
      auStackY_68[0] = 1;
      piStackY_38 = piVar2;
      iVar1 = sub_08006E0A(0x3001120,0,auStackY_68);
      if (iVar1 != 0) {
        sub_08013828(piVar2);
        return;
      }
    }
    iVar1 = sub_08005D6C(&iStackY_64,DAT_03001100);
    if (iVar1 == 0) {
      sub_08013828(piVar2);
    }
  }
  else {
    sub_080068CA(0x3001120,piVar2);
  }
  return;
}


/* sub_0801396E @ 0x0801396E */

void sub_0801396E(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (param_5 <= iVar1) {
    iVar1 = sub_080137C4((undefined4 *)0x0,param_1,param_2,param_3,param_4,param_5);
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_080139BC @ 0x080139BC */

undefined4 * sub_080139BC(undefined4 *param_1,int *param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x5c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,param_4);
    *param_1 = &_08024CE8;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = (iVar1 + -8) * 0x100;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[0x10] = 0;
    param_1[6] = &gUnknown_086DE8A4;
    param_1[0x11] = 0;
    param_1[0x14] = 0x800;
    param_1[0x15] = 0x200;
    param_1[0x16] = 0;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_08013A1E @ 0x08013A1E */

void sub_08013A1E(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_1c;
  int *local_18;
  
  if (param_1[0x11] == 0) {
    iVar1 = param_1[0x10];
    param_1[0x10] = iVar1 + 1;
    uVar2 = (uint)((iVar1 + 1) * 0x8000000) >> 0x1e;
    if (uVar2 == 3) {
      param_1[6] = (int)&DAT_086de8b0;
    }
    else {
      param_1[6] = (int)(&gUnknown_086DE8A4 + uVar2 * 0xc);
    }
    sub_08013BF4((int)param_1);
  }
  else {
    param_1[8] = param_1[8] + param_1[0x12];
    param_1[9] = param_1[9] + param_1[0x13];
    param_1[0x13] = param_1[0x13] + 0x20;
    sub_08013BF4((int)param_1);
    iVar1 = param_1[0x15];
    param_1[0x15] = iVar1 + -0x20;
    iVar1 = param_1[0x14] + iVar1 + -0x20;
    param_1[0x14] = iVar1;
    if (iVar1 < 0) {
      if (param_2 != 0) {
        local_18 = param_1;
        iVar1 = sub_08006DA6(0x3001120,0,&stack0xffffffb8);
        if (iVar1 != 0) {
          iVar1 = sub_0802141C(3);
          sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
        }
      }
      local_1c = param_1[8] >> 8;
      local_18 = (int *)(param_1[9] >> 8);
      sub_080068CA(0x3001120,param_1);
      iVar1 = sub_080135E0((undefined4 *)0x0,&local_1c,"\x10\b \x10",4,0x2000,0x400,0x28);
      sub_080068B8(0x3001120,iVar1);
    }
  }
  return;
}


/* sub_08013B12 @ 0x08013B12 */

void sub_08013B12(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined **)(param_1 + 0x18) = &DAT_086de8bc;
  REG_DMA3SAD = 0x86de7a4;
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  sub_08013BF4(param_1);
  *(undefined1 *)(param_1 + 8) = 0x27;
  if (param_3 < 0xff) {
    param_3 = 0xff;
  }
  else if (0x400 < param_3) {
    param_3 = 0x400;
  }
  if (param_2 == 1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x800;
  }
  *(int *)(param_1 + 0x48) = param_3 * *(int *)(&DAT_086de8d0 + param_2 * 8);
  *(int *)(param_1 + 0x4c) = param_3 * *(int *)(&DAT_086de8d4 + param_2 * 8) + -0x200;
  iVar1 = param_3 * 2 + 0x100;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0xfff < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x1000;
  }
  return;
}


/* sub_08013BC0 @ 0x08013BC0 */

undefined4 * sub_08013BC0(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  *param_1 = &_08023A1C;
  *(short *)((int)param_1 + 0xe) = (short)param_2;
  uVar1 = sub_080067AC(&DAT_03001120,param_2);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08024F38;
  param_1[4] = 0;
  param_1[7] = param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x10);
    *(char *)((int)param_1 + 0x15) = (char)*(undefined4 *)(param_3 + 0x16c);
  }
  return param_1;
}


/* sub_08013BF4 @ 0x08013BF4 */

void sub_08013BF4(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  iVar3 = (*(int *)(param_1 + 0x20) >> 8) - (int)*pcVar2;
  *(int *)(param_1 + 0x28) = iVar3;
  iVar4 = (*(int *)(param_1 + 0x24) >> 8) - (int)pcVar2[1];
  *(int *)(param_1 + 0x2c) = iVar4;
  bVar1 = pcVar2[2];
  iVar4 = iVar4 + (uint)(byte)pcVar2[3];
  *(int *)(param_1 + 0x34) = iVar4;
  *(uint *)(param_1 + 0x30) = iVar3 + (uint)bVar1;
  *(int *)(param_1 + 4) = iVar4;
  return;
}


/* sub_08013C22 @ 0x08013C22 */

undefined4 sub_08013C22(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2c) < DAT_030010a8) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x01') {
    if (DAT_030010a0 < *(int *)(param_1 + 0x34)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x02') {
    if (DAT_0300109c < *(int *)(param_1 + 0x30)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x28) < DAT_030010a4) {
      return 1;
    }
    return 0;
  }
  return 0;
}


/* sub_08013C7E @ 0x08013C7E */

void sub_08013C7E(int *param_1)

{
  __call_via_r2(param_1,1,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
  return;
}


/* sub_08013C8E @ 0x08013C8E */

undefined4 sub_08013C8E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x28) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x30))) &&
      (*(int *)(param_1 + 0x2c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x34))) {
    iVar2 = *(int *)(param_1 + 0x28) - DAT_0300109c;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) - DAT_030010a0;
    *(int *)(param_1 + 0x38) = iVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08013CDE @ 0x08013CDE */

bool sub_08013CDE(int param_1,int *param_2)

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
  uVar2 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = uVar2 | uVar3 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  return *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x10);
}


/* sub_08013D40 @ 0x08013D40 */

void sub_08013D40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x10) = iVar1;
  REG_DMA3SAD = *(undefined4 *)(iVar1 + 8);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = (short)((uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2) >> 2);
  DAT_040000de = 0x8400;
  return;
}


/* sub_08013D68 @ 0x08013D68 */

undefined4 sub_08013D68(int *param_1,int param_2,int param_3)

{
  if (param_2 == 9) {
    param_1[4] = 0;
  }
  else if (param_2 == 10) {
    __call_via_r2(param_1,0,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
  }
  else if ((param_2 == 0xf) && (param_1[7] == param_3)) {
    param_1[7] = 0;
  }
  return 0;
}


/* sub_08013DA0 @ 0x08013DA0 */

undefined4 sub_08013DA0(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08013DAC @ 0x08013DAC */

void sub_08013DAC(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = sub_0802141C(0x4000);
    iVar1 = sub_080135E0((undefined4 *)0x0,(undefined4 *)(param_1 + 8),"\b\b\x10\x10",4,
                         iVar1 + 0x1000,0x400,0x28);
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_08013DEE @ 0x08013DEE */

void sub_08013DEE(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = sub_080135E0((undefined4 *)0x0,(undefined4 *)(param_1 + 8),"\x04\x04\b\b",4,0x2000,0x400
                         ,0x28);
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_08013E48 @ 0x08013E48 */

undefined4 * sub_08013E48(undefined4 *param_1,int *param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x5c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,param_4);
    *param_1 = &_080241B0;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[6] = &gUnknown_086DEB6C;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 1;
    param_1[0x11] = 0x20;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_08013EA0 @ 0x08013EA0 */

void sub_08013EA0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined1 *)(param_1 + 0x40) = 2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + 0x24;
  sub_08013BF4(param_1);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    local_1c = *(int *)(param_1 + 0x20) + ((*(int *)(param_1 + 0x54) << 0xb) >> 8);
    local_18 = *(int *)(param_1 + 0x24) + ((*(int *)(param_1 + 0x58) << 0xb) >> 8);
    local_24 = local_1c >> 8;
    local_20 = local_18 >> 8;
    iVar1 = sub_080135E0((undefined4 *)0x0,&local_24,"\x04\x04\b\b",4,0x2000,0x400,0x28);
    sub_080068B8(0x3001120,iVar1);
    iVar1 = 0;
    do {
      iVar2 = sub_0802141C(0x20);
      iVar3 = sub_0802141C(0x20);
      iVar4 = sub_0802141C(5);
      iVar6 = local_24 + iVar2 + -0x10;
      iVar7 = local_20 + iVar3 + -0x10;
      puVar5 = (undefined4 *)sub_0801F08C(0x10);
      iVar3 = local_20;
      iVar2 = local_24;
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[1] = iVar4 + iVar1 * 8;
        *puVar5 = &_080240FC;
        puVar5[2] = iVar6;
        puVar5[3] = iVar7;
      }
      iVar1 = iVar1 + 1;
      iVar4 = DAT_03001730 * 4;
      DAT_03001730 = DAT_03001730 + 1;
      *(undefined4 **)(&DAT_03001734 + iVar4) = puVar5;
    } while (iVar1 < 6);
    puVar5 = (undefined4 *)sub_0801F08C(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = 0x18;
      *puVar5 = &_08023F24;
      puVar5[2] = iVar2;
      puVar5[3] = iVar3;
    }
    iVar1 = DAT_03001730 * 4;
    DAT_03001730 = DAT_03001730 + 1;
    *(undefined4 **)(&DAT_03001734 + iVar1) = puVar5;
    iVar1 = sub_0802141C(2);
    sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x14) * 0xc,0x40,0);
  }
  return;
}


/* sub_08013FDA @ 0x08013FDA */

void sub_08013FDA(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int *piStack_18;
  
  cVar1 = (char)param_1[0x10];
  if (cVar1 == '\0') {
    iVar2 = param_1[0x13];
    param_1[0x13] = iVar2 + 1;
    uVar3 = (uint)((iVar2 + 1) * 0x8000000) >> 0x1e;
    if (uVar3 == 3) {
      param_1[6] = (int)&DAT_086deb78;
    }
    else {
      param_1[6] = (int)(&gUnknown_086DEB6C + uVar3 * 0xc);
    }
    param_1[0x11] = param_1[0x11] + param_1[0x12];
    sub_08013BF4((int)param_1);
  }
  else if (cVar1 == '\x01') {
    iVar2 = param_1[0x13];
    param_1[0x13] = iVar2 + 1;
    uVar3 = (uint)((iVar2 + 1) * 0x8000000) >> 0x1e;
    if (uVar3 == 3) {
      uVar3 = 1;
    }
    param_1[6] = param_1[0x14] + uVar3 * 0xc;
    param_1[8] = param_1[8] + param_1[0x15];
    param_1[9] = param_1[9] + param_1[0x16];
    sub_08013BF4((int)param_1);
    if ((((param_1[10] < DAT_030010a4) && (DAT_0300109c < param_1[0xc])) &&
        (param_1[0xb] < DAT_030010a8)) && (DAT_030010a0 < param_1[0xd])) {
      if (param_2 != 0) {
        iVar4 = param_1[8] >> 8;
        iStack_28 = param_1[7];
        uStack_34 = (undefined1)param_1[5];
        iVar5 = param_1[9] >> 8;
        iStack_40 = iVar5 + -0xc;
        puStack_2c = &gUnknown_086DB30C;
        iStack_30 = param_1[0x11];
        iStack_44 = iVar4 + -0xc;
        iStack_3c = iVar4 + 0xc;
        iStack_38 = iVar5 + 0xc;
        auStack_48[0] = 1;
        piStack_18 = param_1;
        iVar2 = sub_08006E0A(0x3001120,2,auStack_48);
        if (iVar2 != 0) {
          iStack_44 = iVar4 + -0x20;
          iStack_40 = iVar5 + -0x20;
          iStack_3c = iVar4 + 0x20;
          iStack_38 = iVar5 + 0x20;
          sub_08006DA6(0x3001120,0,auStack_48);
          iVar2 = sub_0802141C(3);
          sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
          sub_08013EA0((int)param_1);
          return;
        }
      }
      iVar2 = sub_08005D6C(param_1 + 10,DAT_03001100);
      if (iVar2 == 0) {
        sub_08013EA0((int)param_1);
      }
    }
    else {
      sub_080068CA(0x3001120,param_1);
    }
  }
  else if ((cVar1 == '\x02') && (iVar2 = param_1[0x13], param_1[0x13] = iVar2 + -1, iVar2 + -1 != 0)
          ) {
    sub_080068CA(0x3001120,param_1);
  }
  return;
}


/* sub_08014160 @ 0x08014160 */

void sub_08014160(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined **)(param_1 + 0x50) = &gUnknown_086E0B90 + param_2 * 0x30;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&gUnknown_086DE904 + param_2 * 8);
  iVar1 = *(int *)(&DAT_086de908 + param_2 * 8);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((*(int *)(param_1 + 0x54) << 0xb) >> 8);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + ((iVar1 << 0xb) >> 8);
  return;
}


/* sub_080141B4 @ 0x080141B4 */

undefined4 * sub_080141B4(undefined4 *param_1,int *param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x400,param_4);
    *param_1 = &_0802507C;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[6] = &gUnknown_086E272C;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0x11] = 0;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_08014204 @ 0x08014204 */

void sub_08014204(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  int iStack_30;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  
  piVar3 = param_1 + 0x10;
  cVar1 = (char)*piVar3;
  piStack_1c = param_1;
  iStack_18 = param_2;
  if (cVar1 == '\0') {
    iVar2 = param_1[0x11];
    param_1[0x11] = iVar2 + 1;
    param_1[6] = (int)(&gUnknown_086E272C + ((iVar2 + 1) * 0x10000000 >> 0x1f) * -0xc);
    sub_08013BF4((int)param_1);
  }
  else if (cVar1 == '\x01') {
    iVar2 = param_1[0x11];
    param_1[0x11] = iVar2 + 1;
    param_1[6] = (int)(&UNK_086e2744 + ((iVar2 + 1) * 0x10000000 >> 0x1f) * -0xc);
    param_1[8] = param_1[8] + param_1[0x12];
    param_1[9] = param_1[9] + param_1[0x13];
    sub_08013BF4((int)param_1);
    if ((((param_1[10] < DAT_030010a4) && (DAT_0300109c < param_1[0xc])) &&
        (param_1[0xb] < DAT_030010a8)) && (DAT_030010a0 < param_1[0xd])) {
      if (iStack_18 != 0) {
        iStack_30 = param_1[7];
        uStack_3c = (undefined1)param_1[5];
        puStack_34 = &gUnknown_086DB314;
        uStack_38 = 0x400;
        iStack_4c = param_1[10];
        iStack_48 = param_1[0xb];
        iStack_44 = param_1[0xc];
        iStack_40 = param_1[0xd];
        auStack_50[0] = 1;
        piStack_20 = param_1;
        iVar2 = sub_08006E0A(0x3001120,0,auStack_50);
        if (iVar2 != 0) {
          param_1[0x11] = 0x10;
          *(char *)piVar3 = '\x02';
          iVar2 = sub_0802141C(3);
          sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
          return;
        }
      }
      iVar2 = sub_08005D6C(param_1 + 10,DAT_03001100);
      if (iVar2 == 0) {
        param_1[0x11] = 0x10;
        *(char *)piVar3 = '\x02';
      }
    }
    else {
      sub_080068CA(0x3001120,param_1);
    }
  }
  else if (cVar1 == '\x02') {
    iVar2 = param_1[0x11];
    param_1[0x11] = iVar2 + -1;
    sub_0800BE7A((iVar2 + -1) * 0x10);
    if (param_1[0x11] == 0) {
      sub_080068CA(0x3001120,param_1);
    }
    else {
      param_1[6] = (int)(&UNK_086e2768 + (param_1[0x11] >> 3) * -0xc);
      sub_08013BF4((int)param_1);
    }
  }
  return;
}


/* sub_08014350 @ 0x08014350 */

void sub_08014350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  iVar2 = *(int *)(&DAT_086e15cc + param_2 * 8);
  *(int *)(param_1 + 0x48) = iVar2;
  iVar1 = *(int *)(&DAT_086e15d0 + param_2 * 8);
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar2 << 10) >> 8);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + ((iVar1 << 10) >> 8);
  return;
}


/* sub_080143A8 @ 0x080143A8 */

undefined4 *
sub_080143A8(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x300;
    uVar1 = sub_080067AC(&DAT_03001120,0x300);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08024ACC;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[1] = param_2[1];
    param_1[0x13] = param_4;
    param_1[0xf] = param_5;
    *(char *)((int)param_1 + 0x12) = (char)param_6;
    param_1[6] = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xd] = 8;
    puVar2 = &gUnknown_08703B60;
    if (param_6 == 0) {
      puVar2 = &gUnknown_086E29B4;
    }
    param_1[0x12] = puVar2;
    param_1[0x11] = puVar2;
    param_1[0x10] = puVar2;
    param_1[5] = 0;
    REG_DMA3SAD = *(undefined4 *)(puVar2 + 8);
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return param_1;
}


/* sub_08014438 @ 0x08014438 */

void sub_08014438(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024ACC;
  if (*(char *)(param_1 + 4) != '\0') {
    sub_0801FC22(0x3002c80,0x80e16d0);
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


/* sub_08014478 @ 0x08014478 */

void sub_08014478(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  uVar3 = *param_3;
  *(undefined4 *)(param_1 + 0x20) = param_3[1];
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (*(char *)(param_1 + 0x12) == '\0') {
    puVar1 = &gUnknown_086E3458 + *(int *)(param_1 + 0x38) * 0x60;
  }
  else {
    puVar1 = &gUnknown_08704604 + *(int *)(param_1 + 0x38) * 0x60;
  }
  *(undefined **)(param_1 + 0x48) = puVar1;
  *(undefined **)(param_1 + 0x44) = puVar1;
  iVar2 = *(int *)(param_1 + 0x38) * 8;
  uVar3 = *(undefined4 *)(&DAT_086e35e4 + iVar2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(&DAT_086e35e8 + iVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  REG_DMA3SAD = *(undefined4 *)(puVar1 + 8);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x20);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  REG_DMA3SAD = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200;
  Ram040000dc = 0x40;
  DAT_040000de = 0x8400;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x44) + 0xc;
  sub_0801FC9C(0x3002c80,&gUnknown_080E16D0,0x40,0);
  return;
}


/* sub_0801451C @ 0x0801451C */

void sub_0801451C(int *param_1)

{
  if ((char)param_1[4] == '\0') {
    sub_080068CA(0x3001120,param_1);
  }
  else if ((char)param_1[4] == '\x01') {
    REG_DMA3SAD = *(undefined4 *)(param_1[0x11] + 0x5c);
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}


/* sub_08014556 @ 0x08014556 */

void sub_08014556(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  int iStack_38;
  undefined *puStack_34;
  int iStack_30;
  int iStack_24;
  int *piStack_20;
  int local_1c;
  int local_18;
  
  cVar1 = (char)param_1[4];
  if (cVar1 == '\0') {
    iVar2 = param_1[6] + 1;
    param_1[6] = iVar2;
    if (3 < iVar2) {
      iVar2 = param_1[0x12] + (iVar2 * 0x20000000 >> 0x1f) * -0xc;
      iVar4 = iVar2 + 0xc;
      param_1[0x11] = iVar4;
      if (iVar4 != param_1[0x10]) {
        param_1[0x10] = iVar4;
        REG_DMA3SAD = *(undefined4 *)(iVar2 + 0x14);
        REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
        Ram040000dc = (short)((uint)*(byte *)(iVar2 + 0xf) * (uint)*(byte *)(iVar2 + 0xe) >> 2);
        DAT_040000de = 0x8400;
      }
    }
  }
  else if (cVar1 == '\x01') {
    if (param_2 != 0) {
      iStack_24 = param_1[7] + param_1[0xd] * param_1[0xb];
      local_18 = param_1[8] + param_1[0xd] * param_1[0xc];
      iStack_30 = param_1[0x13];
      uStack_3c = (undefined1)param_1[0xe];
      puStack_34 = &gUnknown_086DB31C;
      iStack_38 = param_1[0xf];
      auStack_50[0] = (undefined1)*(undefined4 *)(param_1[0x13] + 0x16c);
      iStack_4c = iStack_24 + -8;
      iStack_48 = local_18 + -8;
      iStack_44 = iStack_24 + 8;
      iStack_40 = local_18 + 8;
      piStack_20 = param_1;
      local_1c = iStack_24;
      iVar2 = sub_08005D6C(&iStack_4c,DAT_03001100);
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
      }
      else {
        iVar2 = sub_08006DA6(0x3001120,0,auStack_50);
        if (iVar2 == 0) {
          iVar2 = sub_0802805C(&DAT_0300109c,&iStack_4c);
          if (iVar2 != 0) {
            param_1[0xd] = param_1[0xd] + 3;
          }
        }
        else {
          iStack_58 = local_1c + param_1[0xb] * 4;
          iStack_54 = local_18 + param_1[0xc] * 4;
          if ((*(char *)((int)param_1 + 0x11) == '\0') &&
             (iVar2 = sub_08006D70(&DAT_03001120), 0x400 < iVar2)) {
            iVar2 = sub_0802141C(0x4000);
            iVar2 = sub_080135E0((undefined4 *)0x0,&iStack_58,"\x04\x04\b\b",4,iVar2 + 0x1000,0x400,
                                 0x28);
            sub_080068B8(0x3001120,iVar2);
          }
          if (param_1[5] < 0) {
            iVar2 = sub_0802141C(5);
            param_1[5] = iVar2 + 3;
            iVar2 = sub_0802141C(3);
            sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
            iVar2 = sub_08006D70(&DAT_03001120);
            if (0x400 < iVar2) {
              iVar2 = sub_0802141C(0x20);
              iStack_58 = iVar2 + iStack_58 + -0x10;
              iVar2 = sub_0802141C(0x20);
              iStack_54 = iVar2 + iStack_54 + -0x10;
              iVar2 = sub_0802141C(0x4000);
              iVar2 = sub_080135E0((undefined4 *)0x0,&iStack_58,"\b\b\x10\x10",4,iVar2 + 0x1000,
                                   0x400,0x28);
              sub_080068B8(0x3001120,iVar2);
            }
          }
          *(undefined1 *)((int)param_1 + 0x11) = 1;
        }
      }
      piVar5 = param_1 + 7;
      piVar3 = piVar5;
      if (local_1c < param_1[7]) {
        piVar3 = &local_1c;
      }
      iStack_4c = *piVar3 + -6;
      piVar3 = param_1 + 8;
      piVar6 = piVar3;
      if (local_18 < param_1[8]) {
        piVar6 = &local_18;
      }
      iStack_48 = *piVar6 + -6;
      if (*piVar5 < local_1c) {
        piVar5 = &local_1c;
      }
      iStack_44 = *piVar5 + 6;
      if (*piVar3 < local_18) {
        piVar3 = &local_18;
      }
      iStack_40 = *piVar3 + 6;
      sub_08006DA6(0x3001120,0,auStack_50);
    }
  }
  else if (cVar1 == '\x02') {
    local_1c = param_1[0xb] * 3;
    local_18 = param_1[0xc] * 3;
    param_1[7] = param_1[7] + local_1c;
    param_1[8] = param_1[8] + local_18;
    iVar2 = param_1[0xd];
    param_1[0xd] = iVar2 + -3;
    if (iVar2 + -3 < 0) {
      sub_080068CA(0x3001120,param_1);
      return;
    }
  }
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1;
    iVar2 = ((iVar2 + 1) * 0x20000000 >> 0x1f) * -0xc + param_1[0x12];
    iVar4 = iVar2 + 0x3c;
    if (param_1[0x10] != iVar4) {
      param_1[0x10] = iVar4;
      REG_DMA3SAD = *(undefined4 *)(iVar2 + 0x44);
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010200;
      Ram040000dc = 0x40;
      DAT_040000de = 0x8400;
    }
  }
  return;
}


/* sub_08014858 @ 0x08014858 */

void sub_08014858(int *param_1)

{
  __call_via_r2(param_1,1,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
  return;
}


/* sub_08014868 @ 0x08014868 */

undefined4 sub_08014868(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_0300109c;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030010a0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}


/* sub_08014894 @ 0x08014894 */

undefined4 sub_08014894(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    local_24 = *(int *)(param_1 + 0x24) - (int)**(char **)(param_1 + 0x44);
    local_20 = *(int *)(param_1 + 0x28) - (int)*(char *)(*(int *)(param_1 + 0x44) + 1);
    local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x44) + 2);
    local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x44) + 3);
    iVar2 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
    if (iVar2 != 0) {
      puVar6 = (uint *)*param_2;
      *param_2 = (int)(puVar6 + 2);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x44) + 4);
      *puVar6 = uVar3;
      uVar5 = (uint)(local_24 << 0x17) >> 7;
      *puVar6 = uVar3 & 0xfe00ffff | uVar5;
      *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
      uVar5 = puVar6[1];
      uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
      puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
      puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    }
  }
  else {
    if (cVar1 == '\x01') {
      puVar6 = (uint *)*param_2;
      local_24 = *(int *)(param_1 + 0x24) + (int)**(char **)(param_1 + 0x48);
      local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 1);
      local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 2);
      local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 3);
      iVar2 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
      if (iVar2 != 0) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 4);
        *puVar6 = uVar3;
        uVar5 = (uint)(local_24 << 0x17) >> 7;
        *puVar6 = uVar3 & 0xfe00ffff | uVar5;
        *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
        uVar5 = puVar6[1];
        uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
        puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
        puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
        puVar6 = puVar6 + 2;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return 0;
      }
      puVar6 = (uint *)*param_2;
      local_24 = *(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x54);
      local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x55);
      local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 0x56);
      local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 0x57);
      iVar2 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
      if (iVar2 != 0) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x58);
        *puVar6 = uVar3;
        uVar5 = (uint)(local_24 << 0x17) >> 7;
        *puVar6 = uVar3 & 0xfe00ffff | uVar5;
        *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
        uVar5 = puVar6[1];
        uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
        puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
        puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
        puVar6 = puVar6 + 2;
      }
    }
    local_24 = *(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0xc) +
               *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
    local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0xd) +
               *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
    local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 0xe);
    local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 0xf);
    iVar2 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
    if (iVar2 != 0) {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x10);
      *puVar6 = uVar3;
      uVar5 = (uint)(local_24 << 0x17) >> 7;
      *puVar6 = uVar3 & 0xfe00ffff | uVar5;
      *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
      uVar5 = puVar6[1];
      uVar3 = *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff;
      puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
      puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
      puVar6 = puVar6 + 2;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34) + -0x19) {
      do {
        local_24 = *(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x30) +
                   iVar2 * *(int *)(param_1 + 0x2c);
        local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x31) +
                   iVar2 * *(int *)(param_1 + 0x30);
        local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 0x32);
        local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 0x33);
        iVar4 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
        if (iVar4 != 0) {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x34);
          *puVar6 = uVar3;
          uVar5 = (uint)(local_24 << 0x17) >> 7;
          *puVar6 = uVar3 & 0xfe00ffff | uVar5;
          *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
          uVar5 = puVar6[1];
          uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
          puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
          puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                      (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
          puVar6 = puVar6 + 2;
        }
        iVar2 = iVar2 + 0x20;
      } while (iVar2 < *(int *)(param_1 + 0x34) + -0x19);
    }
    if (iVar2 < *(int *)(param_1 + 0x34) + -9) {
      local_24 = *(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x24) +
                 iVar2 * *(int *)(param_1 + 0x2c);
      local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x25) +
                 iVar2 * *(int *)(param_1 + 0x30);
      local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 0x26);
      local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 0x27);
      iVar4 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
      if (iVar4 != 0) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x28);
        *puVar6 = uVar3;
        uVar5 = (uint)(local_24 << 0x17) >> 7;
        *puVar6 = uVar3 & 0xfe00ffff | uVar5;
        *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
        uVar5 = puVar6[1];
        uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
        puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
        puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
        puVar6 = puVar6 + 2;
      }
      iVar2 = iVar2 + 0x10;
    }
    if (iVar2 < *(int *)(param_1 + 0x34) + -1) {
      local_24 = *(int *)(param_1 + 0x24) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x18) +
                 iVar2 * *(int *)(param_1 + 0x2c);
      local_20 = *(int *)(param_1 + 0x28) + (int)*(char *)(*(int *)(param_1 + 0x48) + 0x19) +
                 iVar2 * *(int *)(param_1 + 0x30);
      local_1c = local_24 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 0x1a);
      local_18 = local_20 + *(byte *)(*(int *)(param_1 + 0x48) + 0x1b);
      iVar2 = sub_0802805C(&local_24,(int *)&gUnknown_086E3604);
      if (iVar2 != 0) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x1c);
        *puVar6 = uVar3;
        uVar5 = (uint)(local_24 << 0x17) >> 7;
        *puVar6 = uVar3 & 0xfe00ffff | uVar5;
        *puVar6 = uVar3 & 0xfe00ff00 | uVar5 | local_20 & 0xff;
        uVar5 = puVar6[1];
        uVar3 = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff;
        puVar6[1] = uVar3 | uVar5 & 0xfffffc00;
        puVar6[1] = uVar3 | uVar5 & 0xfffff000 |
                    (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
        puVar6 = puVar6 + 2;
      }
    }
    *param_2 = (int)puVar6;
  }
  return 0;
}


/* sub_08014CB6 @ 0x08014CB6 */

undefined4 sub_08014CB6(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0xe] ^ 1U)) {
      iStack_10 = param_1[7] + param_1[0xd] * param_1[0xb];
      iStack_14 = param_1[8] + param_1[0xd] * param_1[0xc];
      iStack_c = iStack_14 + 0xc;
      iStack_14 = iStack_14 + -0xc;
      iStack_18 = iStack_10 + -0xc;
      iStack_10 = iStack_10 + 0xc;
      iVar2 = sub_0802805C((int *)(param_3 + 4),&iStack_18);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 9) {
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    __call_via_r2(param_1,0,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08014D44 @ 0x08014D44 */

undefined4 sub_08014D44(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


