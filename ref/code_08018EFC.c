/* Ghidra reference decompilation of code_08018EFC (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08018EFC @ 0x08018EFC */

undefined4 * sub_08018EFC(undefined4 *param_1,int *param_2)

{
  ushort *puVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x154), param_1 != (undefined4 *)0x0)) {
    puVar1 = (ushort *)sub_08009324((&DAT_086f8e48)[*param_2 * 5]);
    sub_080075A8(param_1,puVar1,&DAT_03001f34);
    *param_1 = &_080257A0;
    param_1[0x54] = param_2;
    *(char *)(param_1 + 4) = (char)param_2[1];
    iVar2 = param_2[3];
    param_1[0x10] = param_2[2];
    param_1[0x11] = iVar2;
    param_2[6] = (int)param_1;
  }
  return param_1;
}


/* sub_08018F4E @ 0x08018F4E */

void sub_08018F4E(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024A28;
    *(undefined1 *)(piVar1 + 1) = 0;
  }
  sub_08007662(param_1,piVar1);
  *(undefined1 *)(param_1 + 8) = 0x18;
  return;
}


/* sub_08018F72 @ 0x08018F72 */

void sub_08018F72(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0x28;
  sub_080076BC(param_1);
  return;
}


/* sub_08018F7E @ 0x08018F7E */

undefined4 sub_08018F7E(int param_1)

{
  return **(undefined4 **)(param_1 + 0x150);
}


/* sub_08018F88 @ 0x08018F88 */

void sub_08018F88(int param_1)

{
  sub_0800763C(param_1,&DAT_03001f34);
  return;
}


/* sub_08018FA4 @ 0x08018FA4 */

void sub_08018FA4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x28) != (&gUnknown_086FD4D8)[(uint)(iVar1 * 0x8000000) >> 0x1d]) {
    sub_080076EE(param_2,(int)(&gUnknown_086FD4D8)[(uint)(iVar1 * 0x8000000) >> 0x1d]);
  }
  return;
}


/* sub_08018FC6 @ 0x08018FC6 */

void sub_08018FC6(int param_1)

{
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_08018FD4 @ 0x08018FD4 */

void sub_08018FD4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(char **)(param_1 + 0x3c) = pcVar1;
  *(uint *)(param_1 + 0x150) = (0x28 - (uint)((byte)pcVar1[2] >> 1)) - (int)*pcVar1;
  if ((byte)pcVar1[3] < 0x21) {
    *(undefined4 *)(param_1 + 0x154) = 0x30;
  }
  else {
    *(uint *)(param_1 + 0x154) = (0x28 - (uint)((byte)pcVar1[3] >> 1)) - (int)pcVar1[1];
  }
  return;
}


/* sub_08019010 @ 0x08019010 */

undefined4 * sub_08019010(undefined4 *param_1,int param_2)

{
  ushort *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x15c), param_1 != (undefined4 *)0x0)) {
    puVar1 = (ushort *)sub_08009324(*(int *)(param_2 + 8));
    sub_080075A8(param_1,puVar1,&DAT_03001f34);
    *param_1 = &_08025770;
    param_1[0x56] = 0;
    sub_08018FD4((int)param_1);
  }
  return param_1;
}


/* sub_08019050 @ 0x08019050 */

undefined4 sub_08019050(int param_1)

{
  sub_0800775A(param_1);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x150) + (int)**(char **)(param_1 + 0x3c);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x154) + (int)(*(char **)(param_1 + 0x3c))[1];
  return 1;
}


/* sub_08019078 @ 0x08019078 */

void sub_08019078(int param_1)

{
  int iVar1;
  
  sub_0800772A(param_1);
  iVar1 = *(int *)(param_1 + 0x158) + 1;
  *(int *)(param_1 + 0x158) = iVar1;
  *(undefined *)(param_1 + 0x10) = (&gUnknown_086FD4F8)[(uint)(iVar1 * 0x800000) >> 0x1e];
  sub_08018FD4(param_1);
  return;
}


/* sub_0801909E @ 0x0801909E */

void sub_0801909E(int param_1,int param_2)

{
  if (param_2 == 0) {
    sub_0800763C(param_1,&DAT_03001f34);
  }
  else if ((1 < *(byte *)(*(int *)(param_1 + 0x48) + 2)) &&
          (*(int *)(*(int *)(param_1 + 0x48) + 0x5c) != 0)) {
    sub_0800763C(param_1,&DAT_03001f30);
  }
  return;
}


/* sub_080190D4 @ 0x080190D4 */

int sub_080190D4(undefined *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (&gUnknown_086D56AC + (&DAT_086f8e50)[iVar1 * 5] * 0x18 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  return -1;
}


/* sub_08019102 @ 0x08019102 */

int sub_08019102(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08009324((&DAT_086f8e48)[iVar2 * 5]);
    if (iVar1 == param_1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x80);
  return -1;
}


/* sub_08019134 @ 0x08019134 */

undefined4 * sub_08019134(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_0802517C;
  }
  return param_1;
}


/* sub_0801915C @ 0x0801915C */

undefined4 sub_0801915C(void)

{
  int *piVar1;
  
  sub_0801FC9C(0x3002c80,&DAT_080e17cc,0x40,0);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08023ADC;
    piVar1[1] = 0x100;
    piVar1[2] = 0x10;
  }
  sub_0801F2F4(piVar1);
  sub_08006F4A(&DAT_03001120);
  piVar1 = (int *)sub_08019204((undefined4 *)0x0);
  sub_0801F2F4(piVar1);
  sub_08005F1A(0x3001090,1);
  sub_08006FA4(&DAT_03001120);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08023990;
    piVar1[1] = 0;
    piVar1[2] = 0x10;
  }
  sub_0801F2F4(piVar1);
  return 1;
}


/* sub_080191CA @ 0x080191CA */

undefined4 * sub_080191CA(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_0802517C;
  }
  return puVar1;
}


/* sub_08019204 @ 0x08019204 */

undefined4 * sub_08019204(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x6b0), param_1 != (undefined4 *)0x0)) {
    sub_080174A4(param_1);
    *param_1 = &_08024688;
    param_1[1] = &LAB_080246d0;
    uVar3 = 0;
    piVar2 = param_1 + 0x1f;
    piVar1 = param_1 + 0xa0;
    param_1[0x1f] = 0;
    *piVar1 = 0;
    do {
      if (((uint)(byte)(&DAT_03000faa)[(int)uVar3 >> 3] & 1 << (uVar3 & 7)) != 0) {
        iVar5 = *piVar2;
        *piVar2 = iVar5 + 1;
        piVar2[iVar5 + 1] = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x80);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < (int)param_1[0x1f]) {
      do {
        iVar6 = *(int *)(&gUnknown_086F8E40 + piVar2[iVar4 + 1] * 0x14);
        if (iVar5 == iVar6) {
          piVar1[*piVar1 * 2] = iVar4;
        }
        else {
          iVar5 = *piVar1;
          *piVar1 = iVar5 + 1;
          piVar1[iVar5 * 2 + 1] = iVar4;
          piVar1[iVar5 * 2 + 2] = iVar4;
          iVar5 = iVar6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[0x1f]);
    }
    param_1[0x1a2] = 0;
    param_1[0x1a1] = 0;
    param_1[0x1a7] = 0;
    *(undefined1 *)((int)param_1 + 0x7a) = 0;
    param_1[0x1a8] = 0;
    *(undefined1 *)((int)param_1 + 0x79) = 0;
    if (*piVar1 == 0) {
      param_1[0x1a9] = 0xffffffff;
    }
    else {
      param_1[0x1a9] = param_1[0xa1];
    }
  }
  return param_1;
}


/* sub_080192D6 @ 0x080192D6 */

void sub_080192D6(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_18 = 0;
  local_14 = *(undefined4 *)(param_1 + 0x6a8);
  local_10 = 0xa0;
  local_c = *(int *)(param_1 + 0x6a8) + 0x40;
  sub_080236CC(*(int *)(param_1 + 0x69c),0x6009800,(int)&local_18);
  *(uint *)(*(int *)(param_1 + 0x68c) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x6a8));
  *(uint *)(*(int *)(param_1 + 0x690) + 0x20) =
       (uint)(*(int *)(param_1 + 0x6a8) < *(int *)(param_1 + 0x6ac));
  return;
}


/* sub_08019320 @ 0x08019320 */

void sub_08019320(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int aiStack_106c [4];
  undefined1 auStack_105c [4092];
  int local_60;
  char local_5c [4];
  undefined4 local_58;
  int local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined4 *local_38;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  
  local_1c = param_1 + 0x1f;
  puVar7 = (undefined4 *)0x0;
  if (param_1[0x1a9] != -1) {
    puVar7 = (undefined4 *)(&gUnknown_086F8E40 + local_1c[param_1[0x1a9] + 1] * 0x14);
  }
  local_18 = param_1;
  if ((undefined2 *)param_1[0x1a7] != (undefined2 *)0x0) {
    sub_08020EAA((undefined2 *)param_1[0x1a7],1);
    param_1[0x1a7] = 0;
  }
  sub_08020E5C(local_5c,0xf0,0xa0);
  sub_0801F394((int *)&DAT_086fd874,(int)local_38);
  sub_0801790E(puVar7,local_5c);
  sub_08021344((int)local_5c,0x6000040);
  local_20 = local_18 + 0x1c;
  piVar6 = local_18 + 0xa0;
  if (*(char *)((int)local_18 + 0x7a) == '\0') {
    local_30 = 0xa0;
    local_2c = 0x40;
    local_28 = 0x2800;
    local_44 = 0xa0;
    local_40 = 0x40;
    sub_08021F18(local_38,0,0x2800);
    local_5c[0] = '\x01';
    local_24 = auStack_3c;
    iVar1 = *piVar6;
    if (iVar1 == 0) {
      local_33 = 5;
      local_54 = 0x20;
      local_58 = 0x50;
      sub_0801F636(local_5c,(byte *)"Database Empty");
    }
    else {
      local_60 = param_1[0x1a8] + -2;
      if (iVar1 <= param_1[0x1a8] + 3) {
        local_60 = iVar1 + -6;
      }
      if (local_60 < 0) {
        local_60 = 0;
      }
      iVar1 = 0;
      do {
        iVar2 = iVar1 + local_60;
        if (*piVar6 <= iVar2) break;
        uVar5 = 2;
        if (param_1[0x1a8] != iVar2) {
          uVar5 = 0xb;
        }
        local_24[9] = uVar5;
        local_54 = iVar1 * 9 + 0xc;
        local_58 = 0x50;
        sub_0801F636(local_5c,*(byte **)(&gUnknown_086F8E40 +
                                        local_1c[piVar6[iVar2 * 2 + 1] + 1] * 0x14));
        iVar1 = iVar1 + 1;
      } while (iVar1 < 6);
    }
    *(uint *)(param_1[0x1a3] + 0x20) = (uint)(2 < param_1[0x1a8]);
    *(uint *)(param_1[0x1a4] + 0x20) = (uint)(param_1[0x1a8] < *piVar6 + -4);
    sub_08021344((int)local_5c,0x6009800);
  }
  if ((int *)param_1[0x1a1] != (int *)0x0) {
    sub_080068CA(0x3001120,(int *)param_1[0x1a1]);
  }
  if ((puVar7 == (undefined4 *)0x0) || (puVar7[3] == 0)) {
    param_1[0x1a1] = 0;
  }
  else {
    local_30 = 0x40;
    local_28 = 0x1000;
    local_2c = 0x40;
    local_44 = 0x40;
    local_40 = 0x40;
    piVar3 = (int *)sub_0800BDCC(puVar7[3]);
    sub_0801F394(piVar3,(int)local_38);
    sub_08021344((int)local_5c,(int)auStack_105c);
    aiStack_106c[2] = 0xa8;
    aiStack_106c[3] = 8;
    aiStack_106c[0] = 0x40;
    aiStack_106c[1] = 0x40;
    iVar1 = sub_08018398((undefined4 *)0x0,aiStack_106c + 2,aiStack_106c,0,(int)auStack_105c);
    param_1[0x1a1] = iVar1;
    sub_080068B8(0x3001120,iVar1);
  }
  if ((int *)param_1[0x1a2] != (int *)0x0) {
    sub_080068CA(0x3001120,(int *)param_1[0x1a2]);
  }
  if (puVar7 == (undefined4 *)0x0) {
    param_1[0x1a2] = 0;
  }
  else {
    piVar3 = (int *)sub_08019010((undefined4 *)0x0,(int)puVar7);
    param_1[0x1a2] = (int)piVar3;
    if (*(char *)((int)local_20 + 10) != '\0') {
      __call_via_r2(piVar3,1,(undefined *)(*(int *)(*piVar3 + 0x28) + *piVar3));
    }
    sub_080068B8(0x3001120,param_1[0x1a2]);
  }
  sub_08020EAA((undefined2 *)local_5c,0);
  if (*(char *)((int)local_20 + 10) == '\x01') {
    iVar1 = sub_08020E5C((undefined1 *)0x0,0xa0,param_1[0x1ab] + 0x40);
    param_1[0x1a7] = iVar1;
    *(undefined **)(iVar1 + 0xc) = &gUnknown_0802CC64;
    *(undefined1 *)(param_1[0x1a7] + 0x29) = 2;
    iVar1 = param_1[0x1a7];
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0xe;
    *(undefined1 *)(param_1[0x1a7] + 1) = 0x10;
    sub_08021F18(*(undefined4 **)(param_1[0x1a7] + 0x24),0,*(uint *)(param_1[0x1a7] + 0x34));
    sub_0801F702((char *)param_1[0x1a7],0xa0,(byte *)puVar7[1]);
    sub_080192D6((int)local_18);
  }
  else {
    uVar4 = 0;
    if ((*piVar6 != 0) && (piVar6[param_1[0x1a8] * 2 + 1] != piVar6[param_1[0x1a8] * 2 + 2])) {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1[0x1a5] + 0x20) = uVar4;
    *(undefined4 *)(param_1[0x1a6] + 0x20) = uVar4;
  }
  return;
}


/* sub_0801963C @ 0x0801963C */

void sub_0801963C(int *param_1)

{
  int iVar1;
  undefined4 uStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [36];
  
  if (*(char *)((int)param_1 + 0x79) == '\0') {
    sub_080177CE(param_1);
  }
  else {
    if (*(char *)((int)param_1 + 0x7a) == '\0') {
      iVar1 = param_1[param_1[0x1a9] + 0x20];
      uStack_48 = 0;
      pcStack_44 = (char *)0x0;
      uStack_40 = 0xa0;
      iStack_3c = 0x40;
      sub_0801F58C(auStack_38,&gUnknown_0802CC64,&uStack_48);
      pcStack_44 = *(char **)(&DAT_086f8e44 + iVar1 * 0x14);
      iVar1 = 0;
      do {
        sub_0801F7FC((int)auStack_38,pcStack_44,0xa0,&uStack_48);
        iVar1 = iVar1 + 1;
      } while (iStack_3c == 0);
      iVar1 = iVar1 * 0x10 + -0x38;
      param_1[0x1ab] = iVar1;
      if (iVar1 < 0) {
        param_1[0x1ab] = 0;
      }
      param_1[0x1aa] = 0;
      *(undefined1 *)(param_1 + 0x1e) = 0;
      *(undefined1 *)((int)param_1 + 0x7a) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x7a) = 0;
      *(undefined1 *)((int)param_1 + 0x79) = 0;
      sub_0801FC22(0x3002c80,0x80e17d8);
    }
    sub_08019320(param_1);
    *(undefined1 *)((int)param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


/* sub_080196EE @ 0x080196EE */

void sub_080196EE(int param_1)

{
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    sub_08017794(param_1);
    REG_BLDCNT = 0x3e41;
  }
  else {
    sub_080177A0(param_1);
  }
  return;
}


/* sub_0801970A @ 0x0801970A */

void sub_0801970A(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0xa0;
  if (((int)((uint)DAT_030022b0 << 0x19) < 0) && (param_1[0x1a8] != 0)) {
    iVar1 = param_1[0x1a8] + -1;
    param_1[0x1a8] = iVar1;
    param_1[0x1a9] = piVar2[iVar1 * 2 + 1];
    sub_08019320(param_1);
    sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
  }
  if (((int)((uint)DAT_030022b0 << 0x18) < 0) && (param_1[0x1a8] < *piVar2 + -1)) {
    iVar1 = param_1[0x1a8] + 1;
    param_1[0x1a8] = iVar1;
    param_1[0x1a9] = piVar2[iVar1 * 2 + 1];
    sub_08019320(param_1);
    sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
  }
  if ((*piVar2 != 0) && ((DAT_030022b0 & 1) != 0)) {
    sub_08017794((int)param_1);
    REG_BLDCNT = 0x3e41;
    *(undefined1 *)((int)param_1 + 0x79) = 1;
  }
  return;
}


/* sub_080197B4 @ 0x080197B4 */

void sub_080197B4(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_030022ae << 0x19) < 0) && (param_1[0x1aa] != 0)) {
    param_1[0x1aa] = param_1[0x1aa] + -1;
    sub_080192D6((int)param_1);
    cVar1 = '\x01';
  }
  if (((int)((uint)DAT_030022ae << 0x18) < 0) && (param_1[0x1aa] < param_1[0x1ab])) {
    param_1[0x1aa] = param_1[0x1aa] + 1;
    sub_080192D6((int)param_1);
    cVar1 = '\x01';
  }
  if ((char)param_1[0x1e] != cVar1) {
    *(char *)(param_1 + 0x1e) = cVar1;
    if (cVar1 == '\0') {
      sub_0801FC22(0x3002c80,0x80e17d8);
    }
    else {
      sub_0801FC9C(0x3002c80,&DAT_080e17d8,0x40,0);
    }
  }
  if ((DAT_030022b0 & 1) != 0) {
    __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  }
  return;
}


/* sub_08019844 @ 0x08019844 */

void sub_08019844(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1 + 0xa0;
  iVar3 = (uint)DAT_030022b0 << 0x1a;
  if (*piVar2 != 0) {
    iVar1 = param_1[0x1a8];
    iVar4 = piVar2[iVar1 * 2 + 1];
    if (iVar4 != piVar2[iVar1 * 2 + 2]) {
      if (iVar3 < 0) {
        iVar3 = param_1[0x1a9];
        param_1[0x1a9] = iVar3 + -1;
        if (iVar3 + -1 < iVar4) {
          param_1[0x1a9] = piVar2[iVar1 * 2 + 2];
        }
        sub_08019320(param_1);
        sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
      }
      if ((int)((uint)DAT_030022b0 << 0x1b) < 0) {
        iVar3 = param_1[0x1a9];
        iVar1 = piVar2[param_1[0x1a8] * 2 + 2];
        param_1[0x1a9] = iVar3 + 1;
        if (iVar1 < iVar3 + 1) {
          param_1[0x1a9] = piVar2[param_1[0x1a8] * 2 + 1];
        }
        sub_08019320(param_1);
        sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
      }
      goto _080198FE;
    }
  }
  if ((iVar3 < 0) || ((int)((uint)DAT_030022b0 << 0x1b) < 0)) {
    sub_0801FC9C(0x3002c80,&gUnknown_080E1694,0x40,0);
  }
_080198FE:
  if (*(char *)((int)param_1 + 0x7a) == '\0') {
    sub_0801970A(param_1);
  }
  else {
    sub_080197B4(param_1);
  }
  return;
}


/* sub_08019934 @ 0x08019934 */

void sub_08019934(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_28 [4];
  int *local_18;
  
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6000000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  local_28[2] = 0x1e;
  local_28[3] = 0x14;
  local_28[0] = 0;
  local_28[1] = 0;
  local_18 = param_1;
  sub_0801F508(local_28,0x600f800,1);
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x600f000;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8500;
  local_28[0] = 5;
  local_28[1] = 0xb;
  local_28[2] = 0x19;
  local_28[3] = 0x13;
  sub_0801F508(local_28,0x600f000,0x260);
  iVar2 = sub_08019E88((undefined4 *)0x0,&gUnknown_086FDD2C,1);
  piVar1 = local_18;
  local_18[0x1a3] = iVar2;
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08019E88((undefined4 *)0x0,&gUnknown_086FDD2C,0);
  piVar1[0x1a4] = iVar2;
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08019E88((undefined4 *)0x0,&gUnknown_086FDE2C,2);
  piVar1[0x1a5] = iVar2;
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08019E88((undefined4 *)0x0,&gUnknown_086FDE2C,3);
  piVar1[0x1a6] = iVar2;
  sub_080068B8(0x3001120,iVar2);
  sub_08019320(local_18);
  iVar2 = sub_08016C48((undefined4 *)0x0,0x10,0x68);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0x10,0x70);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0x10,0x78);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0x10,0x80);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0x10,0x88);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0xd8,0x68);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0xd8,0x70);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0xd8,0x78);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0xd8,0x80);
  sub_080068B8(0x3001120,iVar2);
  iVar2 = sub_08016C48((undefined4 *)0x0,0xd8,0x88);
  sub_080068B8(0x3001120,iVar2);
  REG_BG0CNT = 0x1e83;
  REG_BG3CNT = 0x1f83;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  REG_DISPCNT = 0x1940;
  REG_DMA3SAD = 0x81da4c8;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = 0x81da6c8;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_08019B30 @ 0x08019B30 */

undefined4 * sub_08019B30(undefined4 *param_1,ushort *param_2,undefined4 param_3)

{
  sub_080075A8(param_1,param_2,param_3);
  *param_1 = &_0802593C;
  param_1[0x54] = 0;
  return param_1;
}


/* sub_08019B48 @ 0x08019B48 */

void sub_08019B48(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &_0802593C;
  piVar1 = (int *)param_1[0x54];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,(undefined *)(*(int *)*piVar1 + *piVar1));
  }
  sub_080075F8(param_1);
  return;
}


/* sub_08019B70 @ 0x08019B70 */

undefined4 sub_08019B70(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 10) {
    piVar1 = (int *)param_1[0x54];
    if (piVar1 == (int *)0x0) {
      iVar3 = *(int *)param_1[6];
      __call_via_r2((int *)param_1[6],param_1,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      iVar3 = *(int *)param_1[7];
      __call_via_r2((int *)param_1[7],param_1,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      uVar2 = 0;
    }
    else {
      __call_via_r2(piVar1,param_1,(undefined *)(*(int *)(*piVar1 + 8) + *piVar1));
      iVar3 = *(int *)param_1[6];
      __call_via_r2((int *)param_1[6],param_1,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      iVar3 = *(int *)param_1[7];
      __call_via_r2((int *)param_1[7],param_1,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      iVar3 = *(int *)param_1[0x54];
      iVar3 = __call_via_r2((int *)param_1[0x54],param_1,
                            (undefined *)(*(int *)(iVar3 + 0xc) + iVar3));
      if (iVar3 != 0) {
        piVar1 = (int *)param_1[0x54];
        if ((piVar1[1] == 0) &&
           (iVar3 = __call_via_r1(piVar1,(undefined *)(*(int *)(*piVar1 + 0x10) + *piVar1)),
           iVar3 != 0)) {
          return 0;
        }
        sub_0800E078(&DAT_030020f8,(int *)param_1[0x54],param_1);
      }
      uVar2 = 1;
    }
  }
  else if (param_2 == 0xb) {
    piVar1 = (int *)param_1[0x54];
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,param_1,(undefined *)(*(int *)(*piVar1 + 4) + *piVar1));
    }
    uVar2 = 0;
  }
  else if (param_2 == 0xc) {
    piVar1 = (int *)param_1[0x54];
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,(undefined *)(*(int *)*piVar1 + *piVar1));
    }
    uVar2 = 0;
    param_1[0x54] = 0;
  }
  else {
    uVar2 = sub_0800786A((int)param_1,param_2,param_3);
  }
  return uVar2;
}


/* sub_08019C50 @ 0x08019C50 */

undefined4 * sub_08019C50(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025E84;
    sub_08020E5C((undefined1 *)(param_1 + 4),0x20,8);
    param_1[0x12] = 0x80000000;
    param_1[0x13] = param_2;
    *(undefined1 *)(param_1 + 2) = 8;
    param_1[1] = 0;
  }
  return param_1;
}


/* sub_08019CA2 @ 0x08019CA2 */

void sub_08019CA2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = **(int **)(param_1 + 0x4c);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x4c),(undefined *)(*(int *)(iVar2 + 0x20) + iVar2));
  if (*(int *)(param_1 + 0x48) != iVar2) {
    *(int *)(param_1 + 0x48) = iVar2;
    sub_08021F18(*(undefined4 **)(param_1 + 0x34),0,*(uint *)(param_1 + 0x44));
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(iVar3 + 0xa2) = 4;
    } while (iVar1 < 0x19);
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 0x42) = 4;
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 0x20;
      *(undefined1 *)(iVar3 + 0x5a) = 4;
    } while (iVar1 < 0x60);
    iVar1 = 0;
    do {
      uVar4 = iVar2 + iVar1 & 7;
      if ((((int)(uVar4 << 0x1f) < 0) &&
          (*(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 0x83) = 4, (int)(uVar4 << 0x1e) < 0))
         && (*(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 99) = 4, (int)(uVar4 << 0x1d) < 0))
      {
        *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 0x43) = 4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x17);
    sub_08021344(param_1 + 0x10,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  }
  return;
}


/* sub_08019D34 @ 0x08019D34 */

undefined4 sub_08019D34(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x40206004;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_08019D70 @ 0x08019D70 */

undefined4 * sub_08019D70(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_080067AC(&DAT_03001120,0x100);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025DC8;
    sub_08020E5C((undefined1 *)(param_1 + 4),8,0x20);
    param_1[0x12] = 0x80000000;
    param_1[0x13] = param_2;
    *(undefined1 *)(param_1 + 2) = 8;
    param_1[1] = 0;
  }
  return param_1;
}


/* sub_08019DC2 @ 0x08019DC2 */

void sub_08019DC2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = **(int **)(param_1 + 0x4c);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x4c),(undefined *)(*(int *)(iVar2 + 0x24) + iVar2));
  if (*(int *)(param_1 + 0x48) != iVar2) {
    *(int *)(param_1 + 0x48) = iVar2;
    sub_08021F18(*(undefined4 **)(param_1 + 0x34),0,*(uint *)(param_1 + 0x44));
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 8;
      *(undefined1 *)(iVar3 + 0x15) = 4;
    } while (iVar1 < 200);
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar1 + 0x12) = 4;
      iVar3 = *(int *)(param_1 + 0x34) + iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(iVar3 + 0xd2) = 4;
    } while (iVar1 < 3);
    iVar1 = 0;
    do {
      uVar4 = iVar2 + iVar1 & 7;
      if ((int)(uVar4 << 0x1f) < 0) {
        iVar3 = iVar1 * 8;
        *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1c) = 4;
        if (((int)(uVar4 << 0x1e) < 0) &&
           (*(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1b) = 4, (int)(uVar4 << 0x1d) < 0))
        {
          *(undefined1 *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1a) = 4;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x17);
    sub_08021344(param_1 + 0x10,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  }
  return;
}


/* sub_08019E4C @ 0x08019E4C */

undefined4 sub_08019E4C(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x4004a019;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_08019E88 @ 0x08019E88 */

undefined4 * sub_08019E88(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x24), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  uVar1 = sub_080067AC(&DAT_03001120,0x40);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08025B2C;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[8] = 1;
  param_1[4] = param_2;
  param_1[6] = 0xffffffff;
  return param_1;
}


/* sub_08019ECE @ 0x08019ECE */

void sub_08019ECE(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = 3;
    *(undefined4 *)(param_1 + 0x14) = 0x10;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    uVar2 = (uint)(iVar1 * 0x8000000) >> 0x1d;
    if (3 < uVar2) {
      uVar2 = 7 - uVar2;
    }
  }
  if (*(uint *)(param_1 + 0x18) != uVar2) {
    *(uint *)(param_1 + 0x18) = uVar2;
    REG_DMA3SAD = *(int *)(param_1 + 0x10) + uVar2 * 0x40;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x10;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08019F18 @ 0x08019F18 */

undefined4 sub_08019F18(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = *(undefined4 *)(&DAT_086fdf9c + (uint)*(byte *)(param_1 + 0x1c) * 4);
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000;
  return 0;
}


/* sub_08019F5C @ 0x08019F5C */

undefined4 * sub_08019F5C(undefined4 *param_1,ushort *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x154), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08019B30(param_1,param_2,&DAT_03001f34);
  *param_1 = &_0802564C;
  uVar1 = param_3[1];
  param_1[0x10] = *param_3;
  param_1[0x11] = uVar1;
  param_1[1] = param_3[1];
  *(undefined1 *)(param_1 + 2) = 0x18;
  return param_1;
}


/* sub_08019F9A @ 0x08019F9A */

void sub_08019F9A(int param_1,int param_2)

{
  sub_0800763C(param_1,(int *)(&gUnknown_086FDFAC)[param_2]);
  *(undefined1 *)(param_1 + 8) = 0x18;
  return;
}


/* sub_08019FB0 @ 0x08019FB0 */

bool sub_08019FB0(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&gUnknown_086FDFAC)[param_2];
}


/* sub_08019FD0 @ 0x08019FD0 */

void sub_08019FD0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x17c;
  return;
}


/* sub_08019FE4 @ 0x08019FE4 */

void sub_08019FE4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 3;
  }
  else {
    *(undefined2 *)(param_2 + 0x14) = 2;
    sub_08007688(param_2);
  }
  return;
}


/* sub_0801A006 @ 0x0801A006 */

void sub_0801A006(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 3;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x17c;
  return;
}


/* sub_0801A01C @ 0x0801A01C */

void sub_0801A01C(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (7 < uVar1) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801A03C @ 0x0801A03C */

void sub_0801A03C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x17c;
  return;
}


/* sub_0801A050 @ 0x0801A050 */

void sub_0801A050(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x60) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801A076 @ 0x0801A076 */

void sub_0801A076(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_080076BC(param_2);
  }
  else if (*(int *)(param_2 + 0x28) != *(int *)(&gUnknown_086FDFBC + (uint)(bVar1 >> 2) * 4)) {
    sub_080076EE(param_2,*(int *)(&gUnknown_086FDFBC + (uint)(bVar1 >> 2) * 4));
  }
  return;
}


/* sub_0801A078 @ 0x0801A078 */

void sub_0801A078(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_080076BC(param_2);
  }
  else if (*(int *)(param_2 + 0x28) != *(int *)(&gUnknown_086FDFBC + (uint)(bVar1 >> 2) * 4)) {
    sub_080076EE(param_2,*(int *)(&gUnknown_086FDFBC + (uint)(bVar1 >> 2) * 4));
  }
  return;
}


/* sub_0801A0A4 @ 0x0801A0A4 */

void sub_0801A0A4(int param_1)

{
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_0801A0B0 @ 0x0801A0B0 */

undefined4 * sub_0801A0B0(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x40,param_4);
    *param_1 = &_08024F0C;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    param_1[6] = &gUnknown_086FE048;
    param_1[0x10] = *(undefined4 *)(&gUnknown_086FE06C + param_3 * 8);
    param_1[0x11] = *(undefined4 *)(&DAT_086fe070 + param_3 * 8);
    *(undefined1 *)(param_1 + 2) = 0x28;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_0801A10A @ 0x0801A10A */

void sub_0801A10A(int *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int *piStack_18;
  
  param_1[8] = param_1[8] + param_1[0x10];
  param_1[9] = param_1[9] + param_1[0x11];
  iVar1 = param_1[0x12];
  param_1[0x12] = iVar1 + 1;
  param_1[6] = (int)(&gUnknown_086FE048 + ((iVar1 + 1) * 0x10000000 >> 0x1f) * -0xc);
  sub_08013BF4((int)param_1);
  if ((((DAT_0300109c < param_1[0xc]) && (param_1[10] < DAT_030010a4)) &&
      (DAT_030010a0 < param_1[0xd])) && (param_1[0xb] < DAT_030010a8)) {
    iVar1 = sub_08005D6C(param_1 + 10,DAT_03001100);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        return;
      }
      if (param_1[7] == 0) {
        return;
      }
      iStack_28 = param_1[7];
      uStack_34 = (undefined1)param_1[5];
      puStack_2c = &gUnknown_086DB2D4;
      uStack_30 = 0x400;
      iStack_44 = param_1[10];
      iStack_40 = param_1[0xb];
      iStack_3c = param_1[0xc];
      iStack_38 = param_1[0xd];
      auStack_48[0] = 0;
      piStack_18 = param_1;
      iVar1 = sub_08006E0A(0x3001120,0,auStack_48);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = sub_0802141C(3);
      sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
      sub_080068CA(0x3001120,param_1);
      return;
    }
  }
  sub_080068CA(0x3001120,param_1);
  return;
}


/* sub_0801A1EE @ 0x0801A1EE */

undefined4 sub_0801A1EE(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar2 = 0;
    }
    else if ((((**(char **)(param_3 + 0x1c) == '\x01') && (*(int *)(param_3 + 4) < param_1[0xc])) &&
             (param_1[10] < *(int *)(param_3 + 0xc))) &&
            ((*(int *)(param_3 + 8) < param_1[0xd] && (param_1[0xb] < *(int *)(param_3 + 0x10))))) {
      sub_080068CA(0x3001120,param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (param_2 == 2) {
    if (((**(char **)(param_3 + 0x1c) == '\x01') && (*(int *)(param_3 + 4) < param_1[0xc])) &&
       ((param_1[10] < *(int *)(param_3 + 0xc) &&
        ((*(int *)(param_3 + 8) < param_1[0xd] && (param_1[0xb] < *(int *)(param_3 + 0x10))))))) {
      cVar1 = (*(char **)(param_3 + 0x1c))[1];
      if ((cVar1 == '\b') || (cVar1 == '\x0e')) {
        sub_080068CA(0x3001120,param_1);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = sub_08013D68(param_1,param_2,param_3);
  }
  return uVar2;
}


/* sub_0801A2A4 @ 0x0801A2A4 */

void sub_0801A2A4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x15c;
  return;
}


/* sub_0801A2B8 @ 0x0801A2B8 */

void sub_0801A2B8(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x200) >> 0xf;
  return;
}


/* sub_0801A2C6 @ 0x0801A2C6 */

void sub_0801A2C6(int *param_1)

{
  sub_08006A38(0x3001120);
  if (DAT_030020f8 == 0) {
    sub_08006DA6(0x3001120,10,0);
  }
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x2c) + *param_1));
  return;
}


/* sub_0801A2C8 @ 0x0801A2C8 */

void sub_0801A2C8(int *param_1)

{
  sub_08006A38(0x3001120);
  if (DAT_030020f8 == 0) {
    sub_08006DA6(0x3001120,10,0);
  }
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x2c) + *param_1));
  return;
}


/* sub_0801A2F8 @ 0x0801A2F8 */

undefined4 * sub_0801A2F8(undefined4 *param_1,int param_2,int *param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08011802(param_1,*(int *)(param_2 + 4),param_3);
  *param_1 = &_080252E8;
  param_1[0x11] = param_2;
  return param_1;
}


/* sub_0801A326 @ 0x0801A326 */

undefined4 sub_0801A326(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x11];
  iVar1 = sub_0801193E(param_1);
  if (iVar1 != 0) {
    __call_via_r1(iVar2,*(undefined **)(iVar2 + 0x10));
  }
  return 0;
}


/* sub_0801A344 @ 0x0801A344 */

undefined4 sub_0801A344(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    sub_080068CA(0x3001120,param_1);
  }
  iVar1 = param_1[3];
  if (iVar1 < 0x20) {
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = (0x40 - iVar1) * 8;
  }
  sub_0800BE7A(iVar1);
  return 0;
}


/* sub_0801A378 @ 0x0801A378 */

void sub_0801A378(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x12c10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08026020;
    param_1[1] = param_2;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}


/* sub_0801A39C @ 0x0801A39C */

void sub_0801A39C(int param_1)

{
  int local_24 [4];
  
  REG_DISPCNT = 0;
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0,0x18000);
  local_24[2] = 0x1e;
  local_24[3] = 0x14;
  local_24[0] = 0;
  local_24[1] = 0;
  sub_0801F508(local_24,0x600f800,0x100);
  REG_BLDCNT = 0;
  REG_BG3CNT = 0x1f83;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_0801F394(*(int **)(*(int *)(param_1 + 4) + 0x204),param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 0xfffffffa;
  REG_DMA3SAD = *(int *)(param_1 + 4) + 4;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DISPCNT = 0x800;
  return;
}


/* sub_0801A416 @ 0x0801A416 */

undefined4 sub_0801A416(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  
  if (((DAT_030022b0 & 1) == 0) && (-1 < (int)((uint)DAT_030022b0 << 0x1c))) {
    if (5 < (uint)-param_1[3]) {
      param_1[3] = 0;
      if (*(int *)param_1[1] <= param_1[2]) {
        uVar1 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
        return uVar1;
      }
      piVar5 = param_1 + 4;
      sub_0801F412(&REG_DMA3SAD,0x6004000,(int)piVar5,0x9600);
      iVar2 = param_1[2];
      iVar3 = iVar2 + 1;
      param_1[2] = iVar3;
      if (iVar3 < *(int *)param_1[1]) {
        piVar4 = (int *)((int *)param_1[1])[iVar2 + 0x82];
        if (*piVar4 == 2) {
          puVar7 = (uint *)(param_1 + 0x2584);
          sub_0801F394(piVar4,(int)puVar7);
          iVar2 = 0x2580;
          do {
            uVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            *piVar5 = (*piVar5 + (uVar6 & 0xff00ff) & 0xff00ff) +
                      (*piVar5 + (uVar6 & 0xff00ff00) & 0xff00ff00);
            piVar5 = piVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        else {
          sub_0801F394(piVar4,(int)piVar5);
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x20) + *param_1));
  }
  return uVar1;
}


/* sub_0801A4FC @ 0x0801A4FC */

undefined4 * sub_0801A4FC(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0x400;
    uVar1 = sub_080067AC(&DAT_03001120,0x400);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08025C60;
    sub_08020E5C((undefined1 *)(param_1 + 6),0x80,8);
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    param_1[9] = &gUnknown_08028724;
    *(undefined1 *)((int)param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[0xe] = 0x8020ec3;
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[7] = 0x40;
    param_1[8] = 7;
  }
  return param_1;
}


/* sub_0801A568 @ 0x0801A568 */

void sub_0801A568(int param_1)

{
  sub_08021F18(*(undefined4 **)(param_1 + 0x3c),0,*(uint *)(param_1 + 0x4c));
  sub_0801F636((char *)(param_1 + 0x18),
               *(byte **)(&gUnknown_080E2840 + ((uint)(*(int *)(param_1 + 0x14) << 0x10) >> 0xe)));
  sub_080236B4(param_1 + 0x18,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
  return;
}


/* sub_0801A59A @ 0x0801A59A */

void sub_0801A59A(int param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -1;
  }
  return;
}


/* sub_0801A5A6 @ 0x0801A5A6 */

bool sub_0801A5A6(int param_1)

{
  return *(char *)(param_1 + 0x10) != '\0';
}


/* sub_0801A5B4 @ 0x0801A5B4 */

undefined4 sub_0801A5B4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *puVar1 = 0x40386090;
  puVar1[1] = puVar1[1] & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[2] = 0x40586090;
  puVar1[3] = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff | puVar1[3] & 0xfffff000;
  puVar1[4] = 0x40786090;
  puVar1[5] = *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff | puVar1[5] & 0xfffff000;
  puVar1[6] = 0x40986090;
  puVar1[7] = *(ushort *)(param_1 + 0xc) + 0x18 & 0x3ff | puVar1[7] & 0xfffff000;
  *param_2 = puVar1 + 8;
  return 0;
}


/* sub_0801A62A @ 0x0801A62A */

undefined4 sub_0801A62A(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x16) {
    *(undefined1 *)(param_1 + 0x10) = 2;
    if (*(int *)(param_1 + 0x14) != param_3) {
      *(int *)(param_1 + 0x14) = param_3;
      sub_08021F18(*(undefined4 **)(param_1 + 0x3c),0,*(uint *)(param_1 + 0x4c));
      sub_0801F636((char *)(param_1 + 0x18),
                   *(byte **)(&gUnknown_080E2840 + ((uint)(*(int *)(param_1 + 0x14) << 0x10) >> 0xe)
                             ));
      sub_080236B4(param_1 + 0x18,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A6A0 @ 0x0801A6A0 */

undefined4 sub_0801A6A0(int param_1)

{
  sub_08006DA6(0x3001120,0x16,*(undefined4 *)(param_1 + 0x10));
  return 0;
}


/* sub_0801A6B2 @ 0x0801A6B2 */

undefined4 * sub_0801A6B2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_08024B50;
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  return puVar1;
}


/* sub_0801A6E0 @ 0x0801A6E0 */

undefined4 sub_0801A6E0(undefined4 param_1,int *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 99) = *param_3;
    uVar1 = __call_via_r3();
  }
  return uVar1;
}


/* sub_0801A706 @ 0x0801A706 */

undefined4 sub_0801A706(int param_1,int param_2)

{
  sub_0801AA98((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 4));
  return 0;
}


/* sub_0801A708 @ 0x0801A708 */

undefined4 sub_0801A708(int param_1,int param_2)

{
  sub_0801AA98((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 4));
  return 0;
}


/* sub_0801A71C @ 0x0801A71C */

undefined4 * sub_0801A71C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024B5C;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801A732 @ 0x0801A732 */

undefined4 sub_0801A732(int param_1,int param_2)

{
  sub_0801AA98((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 0xc));
  return 0;
}


/* sub_0801A74C @ 0x0801A74C */

void sub_0801A74C(int param_1,int *param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_08007974(&local_1c,(int)param_2);
  sub_0800E4D2((int)param_2);
  sub_0800E39C((int)param_2,*(undefined4 *)(param_1 + 0xc));
  sub_080068CA(0x3001120,param_2);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    local_24 = local_1c + local_14 >> 1;
    local_20 = local_18 + local_10 >> 1;
    iVar1 = sub_0800FA1C((undefined4 *)0x0,&local_24,0x28);
    sub_080068B8(0x3001120,iVar1);
  }
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x1f) * 0xc,0x40,0);
  return;
}


/* sub_0801A7D2 @ 0x0801A7D2 */

undefined4 sub_0801A7D2(int param_1,int *param_2)

{
  sub_0801A74C(*(int *)(param_1 + 4),param_2);
  return 0;
}


/* sub_0801A7DE @ 0x0801A7DE */

undefined4 * sub_0801A7DE(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E6C;
    puVar1[1] = param_1;
  }
  return puVar1;
}


/* sub_0801A804 @ 0x0801A804 */

undefined4 sub_0801A804(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == (*(char **)(param_3 + 8))[1]) ||
     (*(char *)(param_1 + 0xc) == **(char **)(param_3 + 8))) {
    uVar1 = __call_via_r3();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0801A824 @ 0x0801A824 */

undefined4 * sub_0801A824(void)

{
  return &DAT_0300220c;
}


/* sub_0801A828 @ 0x0801A828 */

undefined4 sub_0801A828(void)

{
  return 0;
}


/* sub_0801A82C @ 0x0801A82C */

void sub_0801A82C(undefined4 param_1,int param_2)

{
  sub_0800E4D2(param_2);
  sub_0800E39C(param_2,1);
  return;
}


/* sub_0801A844 @ 0x0801A844 */

void sub_0801A844(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(byte *)(param_2 + 99) ^ 1;
  iVar1 = sub_0802141C(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar1 + 0x60)) >> 7;
  *(uint *)(((int)uVar2 >> 1 ^ 1U) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FF3D0 + uVar2 * 4);
  iVar1 = sub_0802141C(0x8000);
  *(int *)(((int)uVar2 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar1 + -0x4000)) >> 0xc;
  *(char *)(param_2 + 4) = (char)uVar2;
  __call_via_r2(param_2,2,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801A8B0 @ 0x0801A8B0 */

undefined4 sub_0801A8B0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_3c [4];
  int aiStack_2c [4];
  int *piStack_1c;
  int *piStack_18;
  
  iVar1 = __call_via_r2(param_2,2,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(aiStack_2c,(int)param_2);
    piStack_18 = param_2 + 0x56;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x57] = param_2[0x57] + *(int *)(param_1 + 8);
    sub_0800793A(aiStack_3c,(int)param_2);
    sub_0800E41C((int)param_2,aiStack_2c,1);
    iVar1 = sub_0800E438((int)param_2,aiStack_3c);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      sub_0800E41C((int)param_2,aiStack_2c,0);
    }
    else {
      sub_0800E41C((int)param_2,aiStack_3c,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0801A946 @ 0x0801A946 */

void sub_0801A946(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802411C;
    puVar1[3] = uVar2;
  }
  return;
}


/* sub_0801A964 @ 0x0801A964 */

undefined4 sub_0801A964(undefined4 param_1,int param_2)

{
  sub_0800D156((int *)(param_2 + 400),param_2);
  return 0;
}


/* sub_0801A974 @ 0x0801A974 */

void sub_0801A974(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 400);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(*piVar1 + 0xc) + *piVar1));
  }
  return;
}


/* sub_0801A98C @ 0x0801A98C */

undefined4 * sub_0801A98C(void)

{
  return &DAT_03002210;
}


/* sub_0801A994 @ 0x0801A994 */

undefined4 sub_0801A994(undefined4 param_1,int param_2)

{
  sub_0801AAD4((undefined4 *)(param_2 + 0x19c));
  return 0;
}


/* sub_0801A9A4 @ 0x0801A9A4 */

undefined4 * sub_0801A9A4(void)

{
  return &DAT_03002214;
}


/* sub_0801A9A8 @ 0x0801A9A8 */

undefined4 sub_0801A9A8(undefined4 param_1,int param_2)

{
  sub_0801AAD4((undefined4 *)(param_2 + 0x19c));
  return 1;
}


/* sub_0801A9AC @ 0x0801A9AC */

undefined4 sub_0801A9AC(int param_1)

{
  sub_0801AAD4((undefined4 *)(param_1 + 0x9d));
  return 1;
}


/* sub_0801A9B8 @ 0x0801A9B8 */

void sub_0801A9B8(undefined4 param_1,int param_2)

{
  sub_0801AAD4((undefined4 *)(param_2 + 0x19c));
  return;
}


/* sub_0801A9BC @ 0x0801A9BC */

void sub_0801A9BC(int param_1)

{
  sub_0801AAD4((undefined4 *)(param_1 + 0x9d));
  return;
}


/* sub_0801A9CC @ 0x0801A9CC */

void sub_0801A9CC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 0x34);
      iVar2 = *piVar1;
      __call_via_r1(piVar1,(undefined *)(*(int *)(iVar2 + 0xc) + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* sub_0801A9FA @ 0x0801A9FA */

void sub_0801A9FA(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  sub_0801A9CC((int)param_1);
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r2(piVar1,*param_1,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
      piVar1 = (int *)param_1[iVar3 * 2 + 2];
      iVar2 = *piVar1;
      __call_via_r1(piVar1,(undefined *)(*(int *)(iVar2 + 0xc) + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801AA46 @ 0x0801AA46 */

void sub_0801AA46(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(&gUnknown_086D5194 + param_2 * 8);
  piVar2 = (int *)__call_via_r2(puVar1,*param_1,(undefined *)*puVar1);
  iVar3 = param_1[1];
  puVar1 = param_1 + iVar3 * 2 + 1 + -1;
  iVar4 = *(int *)*puVar1;
  __call_via_r2((int *)*puVar1,*param_1,(undefined *)(*(int *)(iVar4 + 8) + iVar4));
  iVar4 = param_1[0xc];
  uVar5 = *puVar1;
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = uVar5;
  *puVar1 = piVar2;
  param_1[iVar3 * 2 + 1] = &gUnknown_086D5194 + param_2 * 8;
  __call_via_r2(piVar2,*param_1,(undefined *)(*(int *)*piVar2 + *piVar2));
  return;
}


/* sub_0801AA98 @ 0x0801AA98 */

void sub_0801AA98(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)param_1[1] < 5) {
    puVar1 = *(undefined4 **)(&gUnknown_086D5194 + param_2 * 8);
    piVar2 = (int *)__call_via_r2(puVar1,*param_1,(undefined *)*puVar1);
    iVar3 = param_1[1];
    param_1[1] = iVar3 + 1;
    param_1[iVar3 * 2 + 2] = piVar2;
    param_1[iVar3 * 2 + 3] = &gUnknown_086D5194 + param_2 * 8;
    __call_via_r2(piVar2,*param_1,(undefined *)(*(int *)*piVar2 + *piVar2));
  }
  return;
}


/* sub_0801AAD4 @ 0x0801AAD4 */

void sub_0801AAD4(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  piVar2 = (int *)piVar1[(iVar3 + -1) * 2 + 1];
  iVar4 = *piVar2;
  __call_via_r2(piVar2,*param_1,(undefined *)(*(int *)(iVar4 + 8) + iVar4));
  iVar4 = param_1[0xc];
  iVar3 = piVar1[(iVar3 + -1) * 2 + 1];
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = iVar3;
  return;
}


/* sub_0801AB08 @ 0x0801AB08 */

void sub_0801AB08(undefined4 *param_1)

{
  int iVar1;
  
  sub_0801A9CC((int)param_1);
  iVar1 = *(int *)param_1[param_1[1] * 2];
  __call_via_r2((int *)param_1[param_1[1] * 2],*param_1,(undefined *)(*(int *)(iVar1 + 4) + iVar1));
  return;
}


/* sub_0801AB2A @ 0x0801AB2A */

void sub_0801AB2A(undefined4 *param_1,undefined4 param_2)

{
  sub_0801A9CC((int)param_1);
  __call_via_r3();
  return;
}


/* sub_0801AB50 @ 0x0801AB50 */

undefined4 sub_0801AB50(int param_1,int param_2)

{
  sub_0801AA46((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 4));
  return 1;
}


/* sub_0801AB64 @ 0x0801AB64 */

undefined4 * sub_0801AB64(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024FF4;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801AB7A @ 0x0801AB7A */

undefined4 sub_0801AB7A(int param_1,int param_2)

{
  sub_0801AA46((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 0xc));
  return 0;
}


/* sub_0801AB8E @ 0x0801AB8E */

void sub_0801AB8E(int param_1,int param_2)

{
  sub_0801AA46((undefined4 *)(param_2 + 0x19c),*(int *)(param_1 + 0xc));
  return;
}


/* sub_0801ABA4 @ 0x0801ABA4 */

void sub_0801ABA4(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_2 + 99);
  iVar2 = sub_0802141C(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar2 + 0x60)) >> 7;
  *(uint *)((bVar1 >> 1 ^ 1) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FF3F8 + (uint)bVar1 * 4);
  iVar2 = sub_0802141C(0x8000);
  *(int *)((uint)(bVar1 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar2 + -0x4000)) >> 0xc;
  param_2[0x5a] = 0;
  *(byte *)(param_2 + 4) = bVar1;
  __call_via_r2(param_2,2,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0801AC16 @ 0x0801AC16 */

undefined4 sub_0801AC16(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_3c [4];
  int aiStack_2c [4];
  int *piStack_1c;
  int *piStack_18;
  
  iVar1 = __call_via_r2(param_2,2,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(aiStack_2c,(int)param_2);
    piStack_18 = param_2 + 0x56;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x57] = param_2[0x57] + *(int *)(param_1 + 8);
    sub_0800793A(aiStack_3c,(int)param_2);
    sub_0800E41C((int)param_2,aiStack_2c,1);
    iVar1 = sub_0800E438((int)param_2,aiStack_3c);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      sub_0800E41C((int)param_2,aiStack_2c,0);
    }
    else {
      sub_0800E41C((int)param_2,aiStack_3c,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0801ACAC @ 0x0801ACAC */

void sub_0801ACAC(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x168) = 1;
  return;
}


/* sub_0801ACB6 @ 0x0801ACB6 */

void sub_0801ACB6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023D68;
    puVar1[3] = uVar2;
  }
  return;
}


/* sub_0801ACD4 @ 0x0801ACD4 */

void sub_0801ACD4(int param_1,int param_2,byte *param_3)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_0800791A(&local_24,param_2);
  local_1c = local_24 + *(int *)(&gUnknown_086FF40C + (uint)*param_3 * 8);
  local_18 = local_20 + *(int *)(&DAT_086ff410 + (uint)*param_3 * 8);
  sub_08006366(0x3001090,&local_1c,(byte *)(param_2 + 0x154));
  __call_via_r3();
  return;
}


/* sub_0801AD34 @ 0x0801AD34 */

void sub_0801AD34(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &_0802413C;
  iVar1 = *(int *)param_1[2];
  __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
  iVar1 = *(int *)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801AD62 @ 0x0801AD62 */

void sub_0801AD62(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802413C;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = 1;
  }
  return;
}


/* sub_0801AD84 @ 0x0801AD84 */

void sub_0801AD84(int param_1,int param_2)

{
  int *piVar1;
  int aiStack_4c [4];
  int local_3c;
  int local_38;
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(aiStack_4c,DAT_03001fa8);
    sub_08026414(&local_3c,aiStack_4c);
    sub_0800793A(aiStack_34,param_2);
    sub_08026414(&local_24,aiStack_34);
    local_1c = local_3c - local_24;
    local_18 = local_38 - local_20;
    if (local_1c * local_1c + local_18 * local_18 <= *(int *)(param_1 + 4)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = *(int **)(param_1 + 0xc);
  }
  __call_via_r2(piVar1,param_2,(undefined *)(*(int *)*piVar1 + *piVar1));
  return;
}


/* sub_0801ADFE @ 0x0801ADFE */

void sub_0801ADFE(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int aiStack_4c [4];
  int local_3c;
  int local_38;
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar2 = 1;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(aiStack_4c,DAT_03001fa8);
    sub_08026414(&local_3c,aiStack_4c);
    sub_0800793A(aiStack_34,param_2);
    sub_08026414(&local_24,aiStack_34);
    local_1c = local_3c - local_24;
    local_18 = local_38 - local_20;
    if (local_1c * local_1c + local_18 * local_18 <= *(int *)(param_1 + 4)) {
      iVar2 = 0;
    }
  }
  if (*(int *)(param_1 + 0x10) == iVar2) {
    if (*(int *)(param_1 + 0x10) == 0) {
      piVar1 = *(int **)(param_1 + 8);
    }
    else {
      piVar1 = *(int **)(param_1 + 0xc);
    }
    __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(*piVar1 + 4) + *piVar1));
  }
  else {
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 == 0) {
      iVar2 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
      piVar1 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar1 + (int)piVar1));
      iVar2 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar2 + 4) + iVar2));
    }
    else {
      iVar2 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
      piVar1 = (int *)**(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*piVar1 + (int)piVar1));
      iVar2 = **(int **)(param_1 + 0xc);
      __call_via_r2(*(int **)(param_1 + 0xc),param_2,(undefined *)(*(int *)(iVar2 + 4) + iVar2));
    }
  }
  return;
}


/* sub_0801AED8 @ 0x0801AED8 */

void sub_0801AED8(int param_1,undefined4 param_2)

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


/* sub_0801AEF2 @ 0x0801AEF2 */

void sub_0801AEF2(int param_1,undefined4 param_2)

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
    *puVar3 = &_0802413C;
    puVar3[1] = uVar4;
    puVar3[3] = uVar2;
    puVar3[2] = uVar1;
    puVar3[4] = 1;
  }
  return;
}


/* sub_0801AF2A @ 0x0801AF2A */

void sub_0801AF2A(int param_1,int param_2,undefined4 param_3)

{
  int aiStack_58 [4];
  int local_48;
  int local_44;
  int aiStack_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(aiStack_58,DAT_03001fa8);
    sub_08026414(&local_48,aiStack_58);
    sub_0800793A(aiStack_40,param_2);
    sub_08026414(&local_30,aiStack_40);
    local_28 = local_48 - local_30;
    local_24 = local_44 - local_2c;
  }
  __call_via_r3();
  return;
}


