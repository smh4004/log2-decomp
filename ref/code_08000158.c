/* Ghidra reference decompilation of code_08000158 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08000158 @ 0x08000158 */

void sub_08000158(void)

{
  int iVar1;
  undefined1 auStack_14 [4];
  byte bStack_10;
  char cStack_f;
  undefined1 uStack_c;
  undefined1 uStack_b;
  
  uStack_c = DAT_0e000000;
  uStack_b = DAT_0e000001;
  iVar1 = 0;
  do {
    bStack_10 = (char)iVar1 * '>' ^ 0x9c;
    cStack_f = (char)iVar1 * -0x1d + '%';
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  DAT_03001fc0 = 1;
  sub_0801F248(auStack_14);
  sub_0801EDE0(0);
  sub_0801F2F4();
  sub_08001E4A(&DAT_03000e88);
  sub_08006C24(&DAT_03001120);
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C();
  }
  sub_0801D378(0);
  sub_0801F2F4();
  do {
    sub_0801ED3C(0);
    sub_0801F2CE();
    sub_0801F294();
  } while( true );
}


/* sub_0800015C @ 0x0800015C */

void sub_0800015C(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  undefined1 auStack_14 [4];
  byte local_10;
  byte local_f;
  byte local_c;
  byte local_b;
  
  local_c = *param_3;
  local_b = param_3[1];
  iVar1 = 0;
  do {
    local_10 = (char)iVar1 * '>' ^ 0x9c;
    local_f = (char)iVar1 * -0x1d + 0x25;
    *param_3 = local_10;
    param_3[1] = local_f;
    if ((*param_3 != local_10) || (param_3[1] != local_f)) goto _080001A8;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  DAT_03001fc0 = 1;
_080001A8:
  *param_3 = local_c;
  param_3[1] = local_b;
  sub_0801F248(auStack_14);
  sub_0801EDE0(0);
  sub_0801F2F4();
  sub_08001E4A(&DAT_03000e88);
  sub_08006C24(&DAT_03001120);
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C();
  }
  sub_0801D378(0);
  sub_0801F2F4();
  do {
    sub_0801ED3C(0);
    sub_0801F2CE();
    sub_0801F294();
  } while( true );
}


/* sub_0800020C @ 0x0800020C */

undefined4 * sub_0800020C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0xbc), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *param_1 = &_080238B0;
  sub_08020E5C(param_1 + 5,0xf0,0xa0);
  sub_08020E5C(param_1 + 0x13,0xf0,0xa0);
  sub_08020E5C(param_1 + 0x21,0x20,0x20);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 10) = 100;
  param_1[3] = 0xff;
  param_1[8] = &gUnknown_08028724;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0xd] = 0x8020fdd;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = 0;
  return param_1;
}


/* sub_0800021C @ 0x0800021C */

undefined4 sub_0800021C(void)

{
  undefined4 unaff_r4;
  
  return unaff_r4;
}


/* sub_08000276 @ 0x08000276 */

void sub_08000276(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_1c;
  int local_18;
  
  sub_0801F412(&REG_DMA3SAD,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x70),0x9600);
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x77;
  iVar2 = param_1 + 0x14;
  uVar1 = 0x29;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  sub_0801F636(iVar2,"Start");
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x87;
  uVar1 = 0x29;
  if (*(char *)(param_1 + 8) != '\x01') {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  sub_0801F636(iVar2,"Options");
  local_1c = 0x56;
  local_18 = (uint)*(byte *)(param_1 + 8) * 0x10 + 0x70;
  sub_08021140(iVar2,&gUnknown_081D4E9C,&local_1c);
  local_1c = 0x92;
  sub_08021140(iVar2,&gUnknown_081D4E9C,&local_1c);
  return;
}


/* sub_080002F8 @ 0x080002F8 */

void sub_080002F8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  REG_BG2CNT = 0x1e83;
  sub_0801F394(&gUnknown_08029294,param_1[0x1c]);
  sub_080236A8(param_1[0x2a],(int)&gUnknown_081D7EA4,param_3,param_4);
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x600d600;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  DAT_03003910 = 0x358;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x800;
  DAT_040000de = 0x8100;
  sub_08000276(param_1);
  WaitForVBlank(&DAT_03000e3c,1);
  REG_DMA3SAD = 0x81d4f50;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  local_14 = 0x1e;
  local_10 = 0x14;
  local_1c = 0;
  local_18 = 0;
  sub_0801F508(&local_1c,&DAT_0600f000,0x100);
  sub_080236B4((int)(param_1 + 5),0x6004000);
  local_18 = 3;
  local_14 = 0xd;
  local_10 = 7;
  local_1c = 9;
  sub_0801F508(&local_1c,&DAT_0600f000,0x390);
  sub_080236B4((int)(param_1 + 0x21),0x600e400);
  local_18 = 0xe;
  local_14 = 0x15;
  local_10 = 0x12;
  local_1c = 9;
  sub_0801F508(&local_1c,&DAT_0600e800,0x359);
  __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1);
  REG_DISPCNT = 0xc00;
  return;
}


/* sub_080003EA @ 0x080003EA */

void sub_080003EA(void)

{
  REG_BLDCNT = 0x85f;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0x10;
  return;
}


/* sub_080003FA @ 0x080003FA */

void sub_080003FA(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(char *)(param_1 + 10) + 1;
  uVar2 = (uint)(bVar1 >> 2);
  *(byte *)(param_1 + 10) = bVar1;
  if (7 < uVar2) {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0xc) != uVar2) {
    *(uint *)(param_1 + 0xc) = uVar2;
    sub_080236A8(*(int *)(param_1 + 0xa8),(int)(&PTR_gUnknown_081D7EA4_081d8e2c)[uVar2],0x81d8e28,
                 param_4);
    sub_080236B4(param_1 + 0x84,0x600e400);
  }
  return;
}


/* sub_08000434 @ 0x08000434 */

undefined4 sub_08000434(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_030022b0;
  if ((((int)(uVar1 << 0x19) < 0) || ((int)(uVar1 << 0x18) < 0)) || ((int)(uVar1 << 0x1d) < 0)) {
    *(bool *)(param_1 + 8) = *(char *)(param_1 + 8) == '\0';
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0,param_4);
    sub_08000276(param_1);
    sub_080236B4(param_1 + 0x14,0x6004000);
  }
  if (((DAT_030022b0 & 1) != 0) || ((int)((uint)DAT_030022b0 << 0x1c) < 0)) {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0,param_4);
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 8);
  }
  if (DAT_030022b0 == 0) {
    if (0x708 < (uint)-*(int *)(param_1 + 0x10)) {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 9) = 3;
      REG_BLDCNT = 0x3f5f;
      DAT_04000053 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


/* sub_08000548 @ 0x08000548 */

void sub_08000548(int param_1,int param_2)

{
  if (*(char *)(param_1 + 9) == '\x03') {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  else {
    sub_08000CA8();
  }
  return;
}


/* sub_0800055E @ 0x0800055E */

undefined4 sub_0800055E(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    sub_08000CD8(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x01') {
    sub_08000640(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x02') {
    sub_080056B0(0);
    sub_0801F2CE();
  }
  else if (cVar1 == '\x03') {
    sub_0801ED3C(0);
    sub_0801F2CE();
  }
  return 0;
}


/* sub_080005A4 @ 0x080005A4 */

void sub_080005A4(undefined4 param_1)

{
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_08000B3C(param_1);
  sub_080002F8(param_1);
  REG_DMA3SAD = 0x81da6c8;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C();
  }
  return;
}


/* sub_080005FA @ 0x080005FA */

void sub_080005FA(void)

{
  REG_BLDCNT = 0x284d;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  return;
}


/* sub_08000608 @ 0x08000608 */

void sub_08000608(undefined4 param_1,int param_2)

{
  REG_BLDALPHA = (char)(param_2 >> 1);
  return;
}


/* sub_08000610 @ 0x08000610 */

undefined4 sub_08000610(void)

{
  REG_BLDCNT = 0xc5f;
  return 0;
}


/* sub_08000640 @ 0x08000640 */

undefined4 *
sub_08000640(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xf4), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08024304;
    sub_08020E5C(param_1 + 3,0x60,0x40);
    sub_08020E5C(param_1 + 0x11,8,0x10);
    sub_08020E5C(param_1 + 0x1f,0xa0,0x18);
    sub_080220CC(param_1 + 0x2d,param_1 + 0x3c,0x14,0x80265e9,param_4);
    *(undefined1 *)(param_1 + 0x3c) = DAT_03000e88;
    *(undefined1 *)((int)param_1 + 0xf1) = DAT_03000e89;
    *(undefined1 *)((int)param_1 + 0xf2) = DAT_03000e8a;
    *(undefined1 *)((int)param_1 + 0xf3) = DAT_03000e8b;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1[0x22] = &gUnknown_081D6B1C;
    *(undefined1 *)((int)param_1 + 0xa5) = 2;
    *(undefined1 *)(param_1 + 0x29) = 1;
    param_1[0x27] = 0x8020ec3;
    param_1[0x20] = 0x50;
    param_1[0x21] = 0x10;
    param_1[6] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xb] = 0x8020ec3;
  }
  return param_1;
}


/* sub_080006DC @ 0x080006DC */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_080006DC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024304;
  if (param_1[0x3c] != _DAT_03000e88) {
    sub_08001EC0(&DAT_03000e88);
  }
  sub_08020EAA(param_1 + 0x1f,0);
  sub_08020EAA(param_1 + 0x11,0);
  sub_08020EAA(param_1 + 3,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08000728 @ 0x08000728 */

void sub_08000728(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar3 * 0x14 + param_1 + 0xb4);
    piVar2 = (int *)*piVar1;
    __call_via_r2(piVar1,*(int *)(param_1 + 8) == iVar3,*piVar2 + (int)piVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}


/* sub_08000756 @ 0x08000756 */

void sub_08000756(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int a0;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = 0xb000a;
  uStack_1c = 0xd000c;
  uStack_18 = 0xf;
  *(undefined4 *)(param_1 + 0x3c) = 0x40;
  *(undefined4 *)(param_1 + 0x40) = 0x1800;
  *(undefined4 *)(param_1 + 0x38) = 0x60;
  *(undefined4 *)(param_1 + 0x28) = 0x40;
  *(undefined4 *)(param_1 + 0x24) = 0x60;
  sub_08021F18(*(undefined4 *)(param_1 + 0x30),0);
  a0 = param_1 + 0xc;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  do {
    *(int *)(param_1 + 0x14) = iVar4 * 0x18 + 0xb;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar1 = 0x29;
    if (*(int *)(param_1 + 8) != iVar4) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x35) = uVar1;
    sub_0801F636(a0,*(undefined4 *)
                     (&gUnknown_080E2840 + (uint)*(ushort *)((int)&local_20 + iVar4 * 2) * 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  sub_080236B4(a0,0x6004f40);
  *(undefined4 *)(param_1 + 0x38) = 0x60;
  *(undefined4 *)(param_1 + 0x3c) = 0x38;
  *(undefined4 *)(param_1 + 0x40) = 0x1500;
  *(undefined4 *)(param_1 + 0x24) = 0x60;
  *(undefined4 *)(param_1 + 0x28) = 0x38;
  sub_08021F18(*(undefined4 *)(param_1 + 0x30),0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  for (; iVar4 < 5; iVar4 = iVar4 + 1) {
    *(int *)(param_1 + 0x14) = iVar4 * 0x10 + -0x10;
    *(undefined4 *)(param_1 + 0x10) = 0x30;
    uVar1 = 0x29;
    if (*(int *)(param_1 + 8) != iVar4) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x35) = uVar1;
    sub_0801F636(a0,*(undefined4 *)
                     (&gUnknown_080E2840 + (uint)*(ushort *)((int)&local_20 + iVar4 * 2) * 4));
  }
  sub_080236B4(a0,0x6006b40);
  iVar4 = 0;
  do {
    piVar2 = (int *)(iVar4 * 0x14 + param_1 + 0xb4);
    piVar3 = (int *)*piVar2;
    __call_via_r2(piVar2,*(int *)(param_1 + 8) == iVar4,*piVar3 + (int)piVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}


/* sub_0800084A @ 0x0800084A */

void sub_0800084A(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  REG_DISPCNT = 0xc00;
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6004000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  DAT_03003910 = 0x100;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600f000;
  Ram040000dc = 0x400;
  DAT_040000de = 0x8100;
  sub_08021F18(*(undefined4 *)(param_1 + 0xa0),0,*(undefined4 *)(param_1 + 0xb0));
  sub_0801F636(param_1 + 0x7c,"Options");
  sub_080236B4(param_1 + 0x7c,0x6004040);
  local_20 = 0;
  local_1c = 0x19;
  local_18 = 3;
  local_24 = 5;
  sub_0801F508(&local_24,&DAT_0600f000,0x101);
  local_1c = 0xf;
  local_18 = 0xd;
  local_24 = 3;
  local_20 = 5;
  sub_0801F508(&local_24,&DAT_0600f000,0x13d);
  local_24 = 9;
  local_20 = 0xd;
  local_1c = 0x15;
  local_18 = 0x14;
  sub_0801F508(&local_24,&DAT_0600f000,0x1ad);
  local_20 = 5;
  local_24 = 0xf;
  local_18 = 8;
  local_1c = 0x1b;
  sub_0801F508(&local_24,&DAT_0600f000,0x20f);
  local_24 = 0xf;
  local_20 = 8;
  local_18 = 0xb;
  local_1c = 0x1b;
  sub_0801F508(&local_24,&DAT_0600f000,0x233);
  local_24 = 0xf;
  local_18 = 0xe;
  local_20 = 0xb;
  local_1c = 0x1b;
  sub_0801F508(&local_24,&DAT_0600f000,599);
  iVar1 = param_1 + 0xc;
  iVar2 = param_1 + 0x44;
  sub_08002BF2(param_1 + 0xb4,iVar1,iVar2,&DAT_060083c0,0);
  sub_08002BF2(param_1 + 200,iVar1,iVar2,&DAT_06008cc0,1);
  sub_08002BF2(param_1 + 0xdc,iVar1,iVar2,&DAT_060095c0,2);
  sub_08000756(param_1);
  REG_BG2CNT = 0x1e83;
  return;
}


/* sub_080009F0 @ 0x080009F0 */

undefined4 sub_080009F0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    sub_08002BFE(param_1 + 0xb4);
  }
  else if (iVar1 == 1) {
    sub_08002BFE(param_1 + 200);
  }
  else if (iVar1 == 2) {
    sub_08002BFE(param_1 + 0xdc);
  }
  if (((DAT_030022b0 & 1) != 0) || ((int)((uint)DAT_030022b0 << 0x1c) < 0)) {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0,param_4);
    *(undefined1 *)(param_1 + 5) = 2;
  }
  if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
    iVar1 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 8) = 4;
    }
    sub_08000756(param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
  }
  if ((int)((uint)DAT_030022b0 << 0x18) < 0) {
    iVar1 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar1;
    if (4 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    sub_08000756(param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
  }
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    DAT_03000e88 = *(undefined1 *)(param_1 + 0xf0);
    DAT_03000e89 = *(undefined1 *)(param_1 + 0xf1);
    DAT_03000e8a = *(undefined1 *)(param_1 + 0xf2);
    DAT_03000e8b = *(undefined1 *)(param_1 + 0xf3);
    sub_08001DDA(&DAT_03000e88,DAT_03000e8a);
    sub_08001DC8(&DAT_03000e88,DAT_03000e89);
    sub_08000756(param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    *(undefined4 *)(param_1 + 8) = 4;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return 0;
}


/* sub_08000AFE @ 0x08000AFE */

undefined4 sub_08000AFE(int *param_1)

{
  if (param_1[2] == 3) {
    sub_08001F04(0,0);
    sub_0801F2F4();
    __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  }
  else {
    sub_0800020C(0);
    sub_0801F2CE();
  }
  return 0;
}


/* sub_08000B3C @ 0x08000B3C */

void sub_08000B3C(void)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [36];
  undefined4 local_20;
  
  REG_BG3CNT = 0x1f83;
  REG_BG3HOFS = (short)__iwram_end;
  REG_BG3VOFS = (short)DAT_03000e84;
  sub_08020E5C(auStack_44,0x80,0x80);
  sub_0801F394(&gUnknown_080E18B0,local_20);
  sub_080236B4((int)auStack_44,0x6000000);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0x10;
  local_48 = 0x10;
  sub_0801F508(&local_54,&DAT_0600f800,0);
  local_50 = 0;
  local_4c = 0x20;
  local_54 = 0x10;
  local_48 = 0x10;
  sub_0801F508(&local_54,&DAT_0600f800,0);
  local_54 = 0;
  local_50 = 0x10;
  local_4c = 0x10;
  local_48 = 0x20;
  sub_0801F508(&local_54,&DAT_0600f800,0);
  local_54 = 0x10;
  local_50 = 0x10;
  local_4c = 0x20;
  local_48 = 0x20;
  sub_0801F508(&local_54,&DAT_0600f800,0);
  REG_DMA3SAD = 0x81d4f50;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  sub_08020EAA(auStack_44,0);
  return;
}


/* sub_08000BE4 @ 0x08000BE4 */

void sub_08000BE4(void)

{
  _03000E7C = _03000E7C + -1;
  if (_03000E7C < 1) {
    _03000E7C = 4;
    __iwram_end = __iwram_end + -1;
    if (__iwram_end < 0) {
      __iwram_end = 0x7f;
    }
    DAT_03000e84 = DAT_03000e84 + -1;
    if (DAT_03000e84 < 0) {
      DAT_03000e84 = 0x7f;
    }
    REG_BG3HOFS = (short)__iwram_end;
    REG_BG3VOFS = (short)DAT_03000e84;
  }
  return;
}


/* sub_08000C18 @ 0x08000C18 */

undefined4 sub_08000C18(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  sub_080213FC();
  cVar2 = *(char *)((int)param_1 + 5);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(*param_1 + 0x1c);
    cVar2 = (char)param_1[1] + '\x01';
    *(char *)(param_1 + 1) = cVar2;
    __call_via_r2(param_1,cVar2,iVar3 + *param_1);
    if (0x1f < *(byte *)(param_1 + 1)) {
      *(undefined1 *)((int)param_1 + 5) = 1;
      uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x20) + *param_1);
      return uVar1;
    }
  }
  else {
    if (cVar2 == '\x01') {
      uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
      return uVar1;
    }
    if (cVar2 == '\x02') {
      iVar3 = *(int *)(*param_1 + 0x28);
      cVar2 = (char)param_1[1] + -1;
      *(char *)(param_1 + 1) = cVar2;
      __call_via_r2(param_1,cVar2,iVar3 + *param_1);
      if ((char)param_1[1] == '\0') {
        *(undefined1 *)((int)param_1 + 5) = 0;
        uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
        return uVar1;
      }
    }
  }
  return 0;
}


/* sub_08000C9A @ 0x08000C9A */

void sub_08000C9A(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (char)(param_2 >> 1);
  REG_BLDALPHA = cVar1;
  DAT_04000053 = '\x10' - cVar1;
  return;
}


/* sub_08000CA8 @ 0x08000CA8 */

void sub_08000CA8(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (char)(param_2 >> 1);
  REG_BLDALPHA = cVar1;
  DAT_04000053 = '\x10' - cVar1;
  return;
}


/* sub_08000CD8 @ 0x08000CD8 */

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


/* sub_08000E22 @ 0x08000E22 */

void sub_08000E22(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = &_08023B0C;
  do {
    iVar2 = 0;
    iVar1 = sub_08001A26(param_1 + 5,iVar3);
    if (0 < iVar1) {
      do {
        sub_080068CA(&DAT_03001120,param_1[iVar3 * 6 + iVar2 + 0x166]);
        iVar2 = iVar2 + 1;
        iVar1 = sub_08001A26(param_1 + 5,iVar3);
      } while (iVar2 < iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  sub_08020EAA(param_1 + 0x156,0);
  sub_08020EAA(param_1 + 0x148,0);
  sub_08020EAA(param_1 + 0x13a,0);
  sub_08020EAA(param_1 + 300,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08000EB8 @ 0x08000EB8 */

void sub_08000EB8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x558;
  *(undefined4 *)(param_1 + 0x584) = 0x10;
  *(undefined4 *)(param_1 + 0x588) = 0x10;
  *(undefined4 *)(param_1 + 0x58c) = 0x100;
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
  sub_0801F394(&gUnknown_08704820,*(undefined4 *)(param_1 + 0x57c),param_3,param_4,param_4);
  sub_080236B4(iVar1,0x6007940);
  sub_0801F394(&gUnknown_08704D10,*(undefined4 *)(param_1 + 0x57c));
  sub_080236B4(iVar1,0x6007a40);
  sub_0801F394(&gUnknown_08705234,*(undefined4 *)(param_1 + 0x57c));
  sub_080236B4(iVar1,0x6007b40);
  *(undefined **)(param_1 + 0x590) = &DAT_06007940 + *(int *)(param_1 + 0x10) * 0x100;
  iVar3 = *(int *)(&DAT_081d4f44 + *(int *)(param_1 + 0x10) * 4);
  *(int *)(param_1 + 0x594) = iVar3;
  sub_080236A8(*(int *)(param_1 + 0x57c),*(int *)(iVar3 + 4),0x580,param_4);
  sub_080236B4(iVar1,*(int *)(param_1 + 0x590));
  *(undefined4 *)(param_1 + 0x584) = 0x20;
  *(undefined4 *)(param_1 + 0x588) = 0x20;
  *(undefined4 *)(param_1 + 0x58c) = 0x400;
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
  piVar2 = *(int **)(param_1 + 0x5e0);
  if (piVar2 != (int *)0x0) {
    __call_via_r2(piVar2,0,*(int *)(*piVar2 + 0x28) + *piVar2);
  }
  iVar1 = sub_080019F6(param_1 + 0x14,*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5e0) = 0;
  }
  else {
    iVar1 = sub_08001A8A(param_1 + 0x14,*(undefined4 *)(param_1 + 0x10));
    piVar2 = *(int **)(iVar1 * 4 + *(int *)(param_1 + 0x10) * 0x18 + param_1 + 0x598);
    *(int **)(param_1 + 0x5e0) = piVar2;
    __call_via_r2(piVar2,1,*(int *)(*piVar2 + 0x28) + *piVar2);
  }
  return;
}


/* sub_08000FE4 @ 0x08000FE4 */

void sub_08000FE4(undefined4 param_1,int *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *local_18 [3];
  
  local_18[0] = &DAT_0600f000;
  local_18[1] = &DAT_0600e800;
  local_18[2] = &DAT_0600f000;
  puVar2 = local_18[param_3];
  iVar5 = *param_2 * 2 + param_2[1] * 0x40;
  iVar3 = param_2[2] - *param_2;
  iVar4 = param_2[3] - param_2[1];
  *(undefined2 *)(puVar2 + iVar5 + -0x42) = 0x100;
  puVar1 = (undefined2 *)(puVar2 + iVar5 + -0x40);
  iVar5 = iVar3;
  do {
    *puVar1 = 0x101;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar1 = 0x102;
  puVar1 = puVar1 + (0x1f - iVar3);
  do {
    *puVar1 = 0x103;
    puVar1[iVar3 + 1] = 0x105;
    puVar1 = puVar1 + iVar3 + 1 + (0x1f - iVar3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *puVar1 = 0x106;
  puVar1 = puVar1 + 1;
  do {
    *puVar1 = 0x107;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *puVar1 = 0x108;
  return;
}


/* sub_08001068 @ 0x08001068 */

void sub_08001068(int param_1)

{
  int iVar1;
  int iVar2;
  int a0;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 auStack_50 [36];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  a0 = param_1 + 0x520;
  local_18 = param_1;
  sub_08021F18(*(undefined4 *)(param_1 + 0x544),0,*(undefined4 *)(param_1 + 0x554));
  local_28 = 4;
  local_24 = 3;
  local_20 = 0x14;
  local_1c = 0x13;
  DAT_03003910 = 0x104;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x400;
  DAT_040000de = 0x8100;
  sub_0801F4C4(&local_28,&DAT_0600f000,0x104);
  iVar2 = 0;
  iVar3 = local_18 + 0x14;
  do {
    local_28 = 5;
    local_24 = iVar2 * 5 + 4;
    local_1c = iVar2 * 5 + 8;
    iVar1 = sub_080019F6(iVar3,iVar2);
    if (iVar1 == 0) {
      local_20 = local_28 + 4;
      sub_0801F508(&local_28,&DAT_0600f000,0x1f1);
      *(int *)(param_1 + 0x528) = iVar2 * 0x28 + 0x10;
      *(undefined4 *)(param_1 + 0x524) = 0x20;
      sub_0801F702(a0,0x40,"New Game");
    }
    else {
      local_2c = sub_08001A0C(iVar3,iVar2);
      local_60 = 0;
      local_5c = 0;
      iVar1 = 0;
      local_54 = 0x20;
      local_58 = 0x40;
      sub_0801F58C(auStack_50,&gUnknown_08028724,&local_60);
      local_5c = local_2c;
      do {
        sub_0801F7FC(auStack_50,local_5c,0x40,&local_60);
        iVar1 = iVar1 + 1;
      } while (local_54 == 0);
      *(int *)(param_1 + 0x528) = iVar2 * 0x28 + 0x16 + iVar1 * -4;
      *(undefined4 *)(param_1 + 0x524) = 0x20;
      sub_0801F702(a0,0x40,local_2c);
      iVar1 = sub_08001A26(iVar3,iVar2);
      local_20 = local_28 + iVar1 * 2 + 2;
    }
    sub_08000FE4(local_18,&local_28,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sub_080236B4(a0,0x60052c0);
  return;
}


/* sub_0800118C @ 0x0800118C */

void sub_0800118C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int a0;
  int a0_00;
  int iVar2;
  
  a0 = param_1 + 0x4b0;
  sub_08021F18(*(undefined4 *)(param_1 + 0x4d4),0,*(undefined4 *)(param_1 + 0x4e4),param_4,param_4);
  sub_08021F18(*(undefined4 *)(param_1 + 0x57c),0,*(undefined4 *)(param_1 + 0x58c));
  a0_00 = param_1 + 0x4e8;
  sub_08021F18(*(undefined4 *)(param_1 + 0x50c),0,*(undefined4 *)(param_1 + 0x51c));
  iVar2 = param_1 + 0x49c;
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 0x4d9) = 6;
    sub_0801F636(a0,"Select Game");
    sub_08002DC8(param_1 + 0x488);
    iVar1 = sub_080019D4(param_1 + 0x14);
    if (iVar1 == 0) {
      sub_08002DC8(iVar2);
    }
    else {
      sub_08002DB6(iVar2);
    }
    sub_08021202(a0_00,&DAT_081d4f28,0x95,0x86);
  }
  else {
    *(undefined1 *)(param_1 + 0x4d9) = 0x29;
    sub_0801F636(a0,"Delete Game");
    sub_08002DB6(param_1 + 0x488);
    sub_08002DC8(iVar2);
    sub_08021202(a0_00,&DAT_081d4f28,5,8);
  }
  sub_080236B4(a0_00,0x6004000);
  sub_080236B4(a0,0x6004240);
  return;
}


/* sub_0800127C @ 0x0800127C */

void sub_0800127C(int param_1)

{
  int a0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  a0 = param_1 + 0x558;
  *(undefined4 *)(param_1 + 0x584) = 0x20;
  *(undefined4 *)(param_1 + 0x588) = 0x20;
  *(undefined4 *)(param_1 + 0x58c) = 0x400;
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
  sub_0801F394(&gUnknown_081D5150,*(undefined4 *)(param_1 + 0x57c));
  sub_080236B4(a0,0x6007c40);
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6004100;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  DAT_03003910 = 0x104;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x800;
  DAT_040000de = 0x8100;
  local_24 = 4;
  local_1c = 0x1a;
  local_18 = 3;
  local_20 = 0;
  sub_0801F508(&local_24,&DAT_0600f000,0x109);
  local_24 = 0x14;
  local_20 = 4;
  local_1c = 0x1c;
  local_18 = 0x12;
  sub_0801F508(&local_24,&DAT_0600f000,0x14b);
  local_1c = 4;
  local_18 = 3;
  local_24 = 0;
  local_20 = 0;
  sub_0801F508(&local_24,&DAT_0600f000,0x1c5);
  sub_08002D5C(param_1 + 0x488,a0,1,9,&DAT_06007140,1);
  local_24 = 0x1a;
  local_1c = 0x1e;
  local_18 = 3;
  local_20 = 0;
  sub_0801F508(&local_24,&DAT_0600f000,0x1d5);
  sub_08002D5C(param_1 + 0x49c,a0,2,8,&DAT_06007540,1);
  sub_0800118C(param_1);
  sub_08001068(param_1);
  sub_08000EB8(param_1);
  local_24 = 2;
  local_20 = 5;
  local_1c = 4;
  local_18 = 7;
  sub_0801F508(&local_24,&DAT_0600f000,0x1e5);
  local_20 = 10;
  local_18 = 0xc;
  sub_0801F508(&local_24,&DAT_0600f000,0x1e9);
  local_20 = 0xf;
  local_18 = 0x11;
  sub_0801F508(&local_24,&DAT_0600f000,0x1ed);
  REG_BG1CNT = 0x1d83;
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1e40;
  return;
}


/* sub_080013EA @ 0x080013EA */

void sub_080013EA(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(char *)(param_1 + 10) + 1;
  uVar2 = (uint)(bVar1 >> 2);
  *(byte *)(param_1 + 10) = bVar1;
  if (7 < uVar2) {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0xc) != uVar2) {
    *(uint *)(param_1 + 0xc) = uVar2;
    sub_080236A8(*(int *)(param_1 + 0x57c),*(int *)(uVar2 * 4 + *(int *)(param_1 + 0x594) + 4),
                 *(int *)(param_1 + 0x594),param_4);
    *(undefined4 *)(param_1 + 0x584) = 0x10;
    *(undefined4 *)(param_1 + 0x588) = 0x10;
    *(undefined4 *)(param_1 + 0x58c) = 0x100;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
    sub_080236B4(param_1 + 0x558,*(int *)(param_1 + 0x590));
    *(undefined4 *)(param_1 + 0x584) = 0x20;
    *(undefined4 *)(param_1 + 0x588) = 0x20;
    *(undefined4 *)(param_1 + 0x58c) = 0x400;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x588);
  }
  sub_080069A4(&DAT_03001120);
  sub_08006AD8(&DAT_03001120);
  return;
}


/* sub_08001462 @ 0x08001462 */

void sub_08001462(undefined4 param_1)

{
  sub_08006AA6(&DAT_03001120);
  sub_08000C18(param_1);
  return;
}


/* sub_08001476 @ 0x08001476 */

undefined4 sub_08001476(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  
  iVar6 = param_1 + 9;
  iVar5 = param_1 + 0x14;
  if (*(char *)(param_1 + 9) == '\0') {
    sub_08002E28(param_1 + 0x488,iVar6);
    sub_08002E28(param_1 + 0x49c,iVar6);
    puStack_18 = &DAT_080e17fc;
    puVar7 = &DAT_03002c80;
    if (*(char *)(param_1 + 8) == '\0') {
      if (((int)((uint)DAT_030022b0 << 0x1c) < 0) || ((DAT_030022b0 & 1) != 0)) {
        *(undefined1 *)(param_1 + 5) = 2;
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0);
        REG_BLDCNT = 0x3f5f;
        DAT_04000053 = 0;
      }
      if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
        iVar6 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar6;
        if (iVar6 < 0) {
          *(undefined4 *)(param_1 + 0x10) = 2;
        }
        sub_0801FC9C(&DAT_03002c80,puStack_18,0x40,0);
        sub_08000EB8(param_1);
      }
      if (((int)((uint)DAT_030022b0 << 0x18) < 0) || ((int)((uint)DAT_030022b0 << 0x1d) < 0)) {
        iVar6 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar6;
        if (2 < iVar6) {
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        sub_0801FC9C(&DAT_03002c80,puStack_18,0x40,0);
        sub_08000EB8(param_1);
      }
      iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
      if (iVar6 != 0) {
        iStack_20 = sub_08001A8A(iVar5,*(undefined4 *)(param_1 + 0x10));
        puStack_1c = &gUnknown_080E1694;
        iVar6 = iStack_20;
        if ((int)((uint)DAT_030022b0 << 0x1a) < 0) {
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            iVar1 = sub_08001A66(iVar5,*(undefined4 *)(param_1 + 0x10),iVar6);
            if (iVar1 != 0) {
              sub_08001AE2(iVar5,*(undefined4 *)(param_1 + 0x10),iVar6);
              sub_0801FC9C(&DAT_03002c80,puStack_18,0x40,0);
              sub_08000EB8(param_1);
              return 0;
            }
          }
          sub_0801FC9C(&DAT_03002c80,puStack_1c,0x40,0);
        }
        if ((int)((uint)DAT_030022b0 << 0x1b) < 0) {
          iStack_24 = sub_08001A26(iVar5,*(undefined4 *)(param_1 + 0x10));
          iVar6 = iStack_20 + 1;
          if (iVar6 < iStack_24) {
            do {
              iVar1 = sub_08001A66(iVar5,*(undefined4 *)(param_1 + 0x10),iVar6);
              if (iVar1 != 0) {
                sub_08001AE2(iVar5,*(undefined4 *)(param_1 + 0x10),iVar6);
                sub_0801FC9C(&DAT_03002c80,puStack_18,0x40,0);
                sub_08000EB8(param_1);
                return 0;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iStack_24);
          }
          sub_0801FC9C(&DAT_03002c80,puStack_1c,0x40,0);
        }
      }
    }
    else {
      if ((DAT_030022b0 & 1) != 0) {
        uVar4 = 0x40;
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0);
        sub_08001B40(0);
        iVar6 = sub_0801F2F4();
        if (iVar6 == 1) {
          uVar8 = 0;
          puVar9 = (undefined *)0x8001541;
          uVar13 = sub_08001A26(iVar5,*(undefined4 *)(param_1 + 0x10));
          bVar12 = (int)uVar13 == 0;
          bVar10 = true;
          bVar11 = false;
          if (0 < (int)uVar13) {
            do {
              if (bVar12) {
                puVar7 = (undefined *)(unaff_r9 + ((uint)uVar13 >> 0x12) + (uint)bVar10);
                bVar12 = puVar7 == (undefined *)0x0;
              }
              if (!bVar12) {
                puVar7 = (undefined *)*unaff_r8;
                iVar6 = unaff_r8[-2];
                uVar13 = *(undefined8 *)(unaff_r8 + -2);
                *(uint *)(iVar6 + -4) = uVar8;
                *(undefined **)(iVar6 + -8) = puVar7;
              }
              sub_080068CA(&DAT_03001120,
                           *(undefined4 *)((int)((ulonglong)uVar13 >> 0x20) + (int)uVar13 + 0x598));
              uVar8 = uVar8 + 1;
              puVar9 = &UNK_0800156d;
              uVar13 = sub_08001A26(iVar5,*(undefined4 *)(param_1 + 0x10));
              uVar2 = (uint)uVar13;
              bVar10 = uVar8 <= uVar2;
              bVar11 = SBORROW4(uVar2,uVar8);
              bVar12 = uVar2 == uVar8;
            } while (!bVar12 && (int)uVar8 <= (int)uVar2);
          }
          puVar3 = (undefined8 *)((ulonglong)uVar13 >> 0x20);
          uVar2 = (uint)uVar13;
          if (bVar12) {
            uVar4 = uVar2 | uVar8 << (uVar2 & 0xff);
          }
          if (bVar10) {
            *(undefined8 **)(uVar2 - (uVar2 >> 0x10)) = puVar3;
          }
          if (bVar11) {
            *(undefined **)((int)puVar3 + -4) = puVar9;
            *(undefined1 **)(puVar3 + -1) = auStack_28;
            *(int *)((int)puVar3 + -0xc) = unaff_r9;
            *(uint *)(puVar3 + -2) = uVar4;
            puVar3 = puVar3 + -3;
            *puVar3 = uVar13;
          }
          sub_08001B0E(iVar5,puVar3);
          iVar6 = sub_080019D4(iVar5);
          if (iVar6 == 0) {
            *(char *)(param_1 + 8) = (char)uVar8;
            sub_0800118C(param_1);
            *(uint *)(param_1 + 0x10) = uVar8;
          }
          else {
            do {
              iVar6 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar6;
              if (2 < iVar6) {
                *(uint *)(param_1 + 0x10) = uVar8;
              }
              iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
            } while (iVar6 == 0);
          }
          sub_08000EB8(param_1);
          sub_08001068(param_1);
        }
      }
      if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
        do {
          iVar6 = *(int *)(param_1 + 0x10) + -1;
          *(int *)(param_1 + 0x10) = iVar6;
          if (iVar6 < 0) {
            *(undefined4 *)(param_1 + 0x10) = 2;
          }
          iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
        } while (iVar6 == 0);
        sub_0801FC9C(puVar7,puStack_18,0x40,0);
        sub_08000EB8(param_1);
      }
      if (((int)((uint)DAT_030022b0 << 0x18) < 0) || ((int)((uint)DAT_030022b0 << 0x1d) < 0)) {
        do {
          iVar6 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar6;
          if (2 < iVar6) {
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
          iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
        } while (iVar6 == 0);
        sub_0801FC9C(puVar7,puStack_18,0x40,0);
        sub_08000EB8(param_1);
      }
    }
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      sub_0801FC9C(puVar7,puStack_18,0x40,0);
      *(undefined4 *)(param_1 + 0x10) = 3;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x488,iVar6);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      sub_0800118C(param_1);
    }
    iVar6 = sub_08002DDA(param_1 + 0x49c,iVar6);
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
      while (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar6;
        if (2 < iVar6) {
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        iVar6 = sub_080019F6(iVar5,*(undefined4 *)(param_1 + 0x10));
      }
      sub_0800118C(param_1);
      sub_08000EB8(param_1);
    }
  }
  return 0;
}


/* sub_080017F6 @ 0x080017F6 */

void sub_080017F6(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 3) {
    sub_08000CA8();
  }
  else {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  return;
}


/* sub_0800180C @ 0x0800180C */

undefined4 sub_0800180C(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    sub_0800020C(0);
    sub_0801F2CE();
  }
  else {
    DAT_03000e8c = (undefined1)*(int *)(param_1 + 0x10);
    DAT_03002088 = 0;
    DAT_03002084 = 0;
    iVar1 = sub_080019F6(param_1 + 0x14,*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      sub_08003C24(&DAT_03000e90);
      uVar4 = sub_0800EB20(&gUnknown_08409410,0);
      iVar1 = sub_0800EB4C(&gUnknown_08409410,uVar4);
      puVar3 = (undefined4 *)sub_0801F08C(4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023884;
      }
      sub_0801F2CE();
      piVar5 = (int *)sub_0800C584(&DAT_03002080,1,4,iVar1 + 0x30,uVar4,1);
      __call_via_r2(piVar5,0x26,*(int *)(*piVar5 + 0x28) + *piVar5);
      puVar3 = (undefined4 *)sub_0801F08C(0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023990;
        puVar3[1] = 0;
        puVar3[2] = 4;
      }
      sub_0801F2F4();
    }
    else {
      sub_08021EA8(&DAT_03000e90,*(int *)(param_1 + 0x10) * 0x164 + param_1 + 0x14,0x164);
      sub_08003ED4(&DAT_03000e90);
      puVar2 = (undefined1 *)sub_0800409E(&DAT_03000e90);
      puVar3 = (undefined4 *)sub_0801F08C(4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023884;
      }
      sub_0801F2CE();
      sub_0800C584(&DAT_03002080,*puVar2,puVar2[1],&DAT_03000ff0,DAT_03000e94,1);
      iVar1 = **(int **)(&DAT_081d968c +
                        (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
      __call_via_r1(*(int **)(&DAT_081d968c +
                             (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                    *(int *)(iVar1 + 8) + iVar1);
      puVar3 = (undefined4 *)sub_0801F08C(0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023990;
        puVar3[1] = 0;
        puVar3[2] = 4;
      }
      sub_0801F2F4();
    }
  }
  return 0;
}


/* sub_08001960 @ 0x08001960 */

int sub_08001960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x474), param_1 != 0)) {
    sub_080220CC(param_1,param_1 + 0x42c,0x164,0x8026699,param_4);
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 0x164 + param_1;
      sub_08003F9C(iVar1,iVar5);
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar6 = iVar2 * 0x1c + iVar1;
        if ((*(uint *)(iVar6 + 0x20) & 1) != 0) {
          iVar4 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(int *)(iVar5 * 0x18 + param_1 + iVar4 + 0x42c) = iVar6 + 0xc;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  return param_1;
}


/* sub_080019D4 @ 0x080019D4 */

undefined4 sub_080019D4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int)((uint)*(byte *)(iVar1 * 0x164 + param_1 + 1) << 0x1f) < 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0;
}


/* sub_080019F6 @ 0x080019F6 */

int sub_080019F6(int param_1,int param_2)

{
  return 1 - (((int)((uint)*(byte *)(param_2 * 0x164 + param_1 + 1) << 0x1f) >> 0x1f) + 1);
}


/* sub_08001A0C @ 0x08001A0C */

undefined4 sub_08001A0C(int param_1,int param_2)

{
  int iVar1;
  
  sub_0800409E(param_2 * 0x164 + param_1);
  iVar1 = sub_0800EBB6();
  return *(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4);
}


/* sub_08001A26 @ 0x08001A26 */

undefined4 sub_08001A26(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(param_2 * 0x164 + param_1 + 1) << 0x1f) < 0) {
    uVar1 = sub_08003E00();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08001A44 @ 0x08001A44 */

undefined4 sub_08001A44(int param_1,int param_2,int param_3)

{
  if ((*(uint *)(*(int *)(param_2 * 0x18 + param_1 + param_3 * 4 + 0x42c) + 0x14) & 1) != 0) {
    return 1;
  }
  return 0;
}


/* sub_08001A66 @ 0x08001A66 */

undefined4 sub_08001A66(int param_1,int param_2,int param_3)

{
  if ((*(uint *)(*(int *)(param_2 * 0x18 + param_1 + param_3 * 4 + 0x42c) + 0x14) & 2) != 0) {
    return 1;
  }
  return 0;
}


/* sub_08001A8A @ 0x08001A8A */

int sub_08001A8A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_2 * 0x164 + param_1);
  uVar3 = (uint)*pbVar4;
  iVar2 = 0;
  iVar1 = 0;
  if (uVar3 != 0) {
    do {
      if ((*(uint *)(pbVar4 + iVar2 * 0x1c + 0x20) & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return iVar1;
}


/* sub_08001AB8 @ 0x08001AB8 */

void sub_08001AB8(int param_1,int param_2,int param_3)

{
  sub_08009324((&DAT_081d967d)
               [(uint)*(byte *)(*(int *)(param_2 * 0x18 + param_1 + param_3 * 4 + 0x42c) + 8) * 0x14
               ]);
  return;
}


/* sub_08001AE2 @ 0x08001AE2 */

void sub_08001AE2(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_2 * 0x164 + param_1);
  while (((*(uint *)(puVar1 + iVar2 * 0x1c + 0x20) & 1) == 0 ||
         (param_3 = param_3 + -1, -1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      return;
    }
  }
  *puVar1 = (char)iVar2;
  return;
}


/* sub_08001B0E @ 0x08001B0E */

void sub_08001B0E(int param_1,int param_2)

{
  param_1 = param_2 * 0x164 + param_1;
  sub_08003C24(param_1);
  sub_08003FEC(param_1,param_2);
  return;
}


/* sub_08001B40 @ 0x08001B40 */

undefined4 * sub_08001B40(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x78), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0802533C;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = &_0802419C;
  *param_1 = &_08024284;
  param_1[2] = &DAT_080242b8;
  sub_08020E5C(param_1 + 4,0x98,0x40);
  param_1[0x12] = &_08025B7C;
  param_1[0x18] = &_08025B7C;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x17] = param_1 + 2;
  param_1[0x1d] = param_1 + 2;
  return param_1;
}


/* sub_08001B8A @ 0x08001B8A */

void sub_08001B8A(int param_1)

{
  int a0;
  int *piVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined1 **)(param_1 + 0x1c) = &gUnknown_08028724;
  a0 = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x39) = 2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0x8020ec3;
  sub_0801F394(&gUnknown_081D5D78,*(undefined4 *)(param_1 + 0x34));
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x48;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  sub_0801F636(a0,"Delete Game?");
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x39;
  *(undefined4 *)(param_1 + 0x18) = 0x2c;
  sub_0801F636(a0,&gUnknown_080E2C58);
  *(undefined4 *)(param_1 + 0x14) = 0x69;
  *(undefined4 *)(param_1 + 0x18) = 0x2c;
  sub_0801F636(a0,&gUnknown_080E2C54);
  sub_080236B4(a0,0x6008040);
  DAT_03003910 = 0x104;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e000;
  Ram040000dc = 0x400;
  DAT_040000de = 0x8100;
  local_24 = 6;
  local_20 = 6;
  local_1c = 0x19;
  local_18 = 0xe;
  sub_0801F508(&local_24,&DAT_0600e000,0x201);
  local_24 = 0x10;
  local_20 = 9;
  local_1c = 0x13;
  local_18 = 0xd;
  sub_0801F508(&local_24,&DAT_0600e000,0x299);
  piVar1 = (int *)(param_1 + 0x48);
  local_24 = 1;
  sub_08002D5C(piVar1,a0,1,0,&DAT_0600a640);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  local_24 = 10;
  local_20 = 9;
  local_1c = 0xd;
  local_18 = 0xd;
  sub_0801F508(&local_24,&DAT_0600e000,0x2a5);
  piVar1 = (int *)(param_1 + 0x60);
  local_24 = 1;
  sub_08002D5C(piVar1,a0,1,1,&DAT_0600a940);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  REG_BG0CNT = 0x1c80;
  REG_BLDCNT = 0x3c5e;
  REG_BLDALPHA = 0x10;
  DAT_04000053 = 0;
  return;
}


/* sub_08001CBA @ 0x08001CBA */

void sub_08001CBA(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0xc0;
  do {
    *param_2 = 0x95959595;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_08001CC6 @ 0x08001CC6 */

void sub_08001CC6(int param_1)

{
  REG_DISPCNT = 0x1e40;
  *(undefined1 *)(param_1 + 5) = 2;
  return;
}


/* sub_08001CD6 @ 0x08001CD6 */

undefined4 sub_08001CD6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xc;
  if (*(char *)(param_1 + 0xc) == '\0') {
    sub_08002E28(param_1 + 0x48,iVar2,param_3,param_4,param_4);
    sub_08002E28(param_1 + 0x60,iVar2);
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x48,iVar2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      REG_DISPCNT = 0x1e40;
      *(undefined1 *)(param_1 + 5) = 2;
    }
    iVar2 = sub_08002DDA(param_1 + 0x60,iVar2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      REG_DISPCNT = 0x1e40;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  return 0;
}


/* sub_08001D2E @ 0x08001D2E */

undefined1 sub_08001D2E(int param_1)

{
  REG_BLDCNT = 0x85f;
  return *(undefined1 *)(param_1 + 0xd);
}


/* sub_08001D38 @ 0x08001D38 */

void sub_08001D38(int param_1,int param_2)

{
  REG_BLDALPHA = '\x10' - (char)(param_2 >> 1);
  if (0xf < param_2) {
    REG_DISPCNT = 8000;
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}


/* sub_08001D56 @ 0x08001D56 */

void sub_08001D56(int param_1,int param_2)

{
  REG_BLDALPHA = '\x18' - (char)(param_2 >> 1);
  if (param_2 < 0x11) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


/* sub_08001DC8 @ 0x08001DC8 */

void sub_08001DC8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  sub_0801FD56(&DAT_03002c80);
  return;
}


/* sub_08001DDA @ 0x08001DDA */

void sub_08001DDA(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  sub_08020AC8(&DAT_030026c8);
  return;
}


/* sub_08001DEA @ 0x08001DEA */

undefined1 sub_08001DEA(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return param_1[2];
    }
    return 0;
  }
  return param_1[1];
}


/* sub_08001E06 @ 0x08001E06 */

void sub_08001E06(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_3;
  if (param_2 == 0) {
    *param_1 = uVar1;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1[2] = uVar1;
      sub_08020AC8(&DAT_030026c8);
    }
    return;
  }
  param_1[1] = uVar1;
  sub_0801FD56(&DAT_03002c80,param_3);
  return;
}


/* sub_08001E3C @ 0x08001E3C */

int sub_08001E3C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sub_0802153E(param_1,4,param_3,param_4,param_4);
  return iVar1 + 0x12345678;
}


/* sub_08001E4A @ 0x08001E4A */

void sub_08001E4A(byte *param_1)

{
  int iVar1;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  int local_18;
  
  sub_08021526(&DAT_0300389c,&local_1c,0,8);
  iVar1 = sub_0802153E(&local_1c);
  if ((((iVar1 + 0x12345678 == local_18) && (local_1c < 9)) && (local_1a < 9)) && (local_1b < 9)) {
    *param_1 = local_1c;
    param_1[1] = local_1b;
    param_1[2] = local_1a;
    param_1[3] = local_19;
  }
  else {
    *param_1 = 4;
    param_1[2] = 4;
    param_1[1] = 6;
    param_1[3] = 0;
  }
  sub_08020AC8(&DAT_030026c8,param_1[2]);
  sub_0801FD56(&DAT_03002c80,param_1[1]);
  return;
}


/* sub_08001EC0 @ 0x08001EC0 */

void sub_08001EC0(undefined1 *param_1)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  int local_14;
  
  local_18 = *param_1;
  local_17 = param_1[1];
  local_16 = param_1[2];
  local_15 = param_1[3];
  local_14 = sub_0802153E(param_1,4);
  local_14 = local_14 + 0x12345678;
  sub_080214C4(&DAT_0300389c,0,&local_18,8);
  return;
}


/* sub_08001F04 @ 0x08001F04 */

undefined4 * sub_08001F04(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023790;
    sub_08020E5C(param_1 + 7,0xf0,0x40);
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = param_2;
    *(undefined1 *)((int)param_1 + 0x45) = 2;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[0xf] = 0x8020ec3;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}


/* sub_08001F54 @ 0x08001F54 */

void sub_08001F54(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08023790;
  sub_08020EAA(param_1 + 7,0,param_3,param_4,param_4);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08001F78 @ 0x08001F78 */

void sub_08001F78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08021F18(*(undefined4 *)(param_1 + 0x40),0,*(undefined4 *)(param_1 + 0x50),param_4,param_4);
  *(undefined1 **)(param_1 + 0x28) = &gUnknown_08028724;
  *(undefined4 *)(param_1 + 0x20) = 0x78;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  *(undefined1 *)(param_1 + 0x1d) = 8;
  if (param_2 != 0) {
    sub_0801F636(param_1 + 0x1c,param_2);
  }
  sub_080236B4(param_1 + 0x1c,0x6007c40);
  return;
}


/* sub_08001FB0 @ 0x08001FB0 */

void sub_08001FB0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08021F18(*(undefined4 *)(param_1 + 0x40),0,*(undefined4 *)(param_1 + 0x50),param_4,param_4);
  *(undefined **)(param_1 + 0x28) = &gUnknown_0802CC64;
  *(undefined4 *)(param_1 + 0x20) = 0x78;
  *(undefined4 *)(param_1 + 0x24) = 0x18;
  *(undefined1 *)(param_1 + 0x1d) = 0x10;
  if (param_2 != 0) {
    sub_0801F636(param_1 + 0x1c,param_2);
  }
  sub_080236B4(param_1 + 0x1c,0x6004040);
  return;
}


/* sub_08001FE8 @ 0x08001FE8 */

void sub_08001FE8(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6004000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  DAT_03003910 = 0x100;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x800;
  DAT_040000de = 0x8100;
  sub_0801F46A(&REG_DMA3SAD,&DAT_06004040,0,0x7800);
  local_1c = 6;
  local_14 = 0xe;
  local_18 = 0x1e;
  local_20 = 0;
  sub_0801F508(&local_20,&DAT_0600f000,0x101);
  local_1c = 10;
  local_14 = 0x12;
  local_20 = 0;
  local_18 = 0x1e;
  sub_0801F508(&local_20,&DAT_0600e800,0x1f1);
  REG_BG1CNT = 0x1d83;
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0xe00;
  *(undefined4 **)(param_1 + 0x18) = &gUnknown_081D6054;
  sub_08001FB0(param_1,"Developed by\nWebfoot Technologies, Inc.");
  sub_08001F78(param_1,*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  return;
}


/* sub_0800208C @ 0x0800208C */

void sub_0800208C(void)

{
  return;
}


/* sub_0800208E @ 0x0800208E */

undefined4 sub_0800208E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (((DAT_030022b0 & 1) != 0 || ((int)((uint)DAT_030022b0 << 0x1e) < 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0,param_4);
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + 1;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 < 0x80) {
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined1 *)(param_1 + 5) = 2;
      REG_BLDCNT = 0x846;
    }
    if ((int)((uint)DAT_030022ae << 0x18) < 0) {
      *(undefined4 *)(param_1 + 8) = 0x7f;
    }
  }
  else if (iVar2 == 0x80) {
    piVar3 = *(int **)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = piVar3 + 2;
    iVar1 = sub_08002240();
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar1 == iVar2) {
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(param_1 + 5) = 2;
        REG_BLDCNT = 0x2c4f;
        REG_BLDALPHA = 0x10;
        DAT_04000053 = 0;
        return 0;
      }
      *(undefined4 **)(param_1 + 0x18) = &gUnknown_081D6054;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (**(int **)(param_1 + 0x18) == *piVar3) {
      REG_BLDCNT = 0xc42;
    }
    else {
      REG_BLDCNT = 0x846;
    }
  }
  else if (iVar2 < 0x91) {
    REG_BLDALPHA = -0x70 - (char)iVar2;
    DAT_04000053 = (char)*(undefined4 *)(param_1 + 8) + -0x80;
    if (*(int *)(param_1 + 8) == 0x90) {
      sub_08001FB0(param_1,**(undefined4 **)(param_1 + 0x18));
      sub_08001F78(param_1,*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
    }
  }
  else if (iVar2 < 0xa1) {
    REG_BLDALPHA = (char)iVar1 + 'q';
    DAT_04000053 = -0x60 - (char)*(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 8) == 0xa0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return 0;
}


