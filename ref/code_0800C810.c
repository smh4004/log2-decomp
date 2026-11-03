/* Ghidra reference decompilation of code_0800C810 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800C810 @ 0x0800C810 */

int sub_0800C810(int param_1,int param_2)

{
  if ((param_1 != 0) || (param_1 = sub_0801F08C(4), (int *)param_1 != (int *)0x0)) {
    *(int *)param_1 = param_2;
    sub_0800891C(param_2);
  }
  return param_1;
}


/* sub_0800C834 @ 0x0800C834 */

void sub_0800C834(int *param_1,int param_2)

{
  sub_0800892E(*param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0800C84C @ 0x0800C84C */

int sub_0800C84C(int param_1,int param_2)

{
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x10), (undefined4 *)param_1 != (undefined4 *)0x0))
  {
    *(undefined **)param_1 = &_08023ADC;
    *(undefined4 *)(param_1 + 4) = 0x100;
    *(undefined4 *)(param_1 + 8) = 8;
    *(int *)(param_1 + 0xc) = param_2;
    sub_0800891C(param_2);
    *(undefined **)param_1 = &_08024F64;
  }
  return param_1;
}


/* sub_0800C882 @ 0x0800C882 */

void sub_0800C882(void)

{
  sub_08004F00();
  return;
}


/* sub_0800C88A @ 0x0800C88A */

int sub_0800C88A(int param_1,int param_2)

{
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x10), (undefined4 *)param_1 != (undefined4 *)0x0))
  {
    *(undefined **)param_1 = &_08023990;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 8;
    *(int *)(param_1 + 0xc) = param_2;
    sub_0800891C(param_2);
    *(undefined **)param_1 = &_08024D68;
  }
  return param_1;
}


/* sub_0800C8BE @ 0x0800C8BE */

void sub_0800C8BE(void)

{
  sub_08004F00();
  return;
}


/* sub_0800C8D8 @ 0x0800C8D8 */

void sub_0800C8D8(int param_1)

{
  int iVar1;
  int local_5c [4];
  char local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  sub_08020E5C(local_4c,0xf0,0x10);
  sub_0801F394((int *)&gUnknown_083ED1EC,local_28);
  local_40 = &gUnknown_08028724;
  local_48 = 0x78;
  local_44 = 0xb;
  local_23 = 2;
  local_24 = 1;
  local_2c = 0x8020ec3;
  local_4c[0] = '\x01';
  sub_0801F636(local_4c,*(byte **)(&gUnknown_080E2840 + *(int *)(param_1 + 0x14) * 4));
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0x20;
  local_5c[3] = 0x10;
  iVar1 = 0;
  do {
    sub_080236CC((int)local_4c,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000 + iVar1 * 0x200,
                 (int)local_5c);
    iVar1 = iVar1 + 1;
    local_5c[0] = local_5c[0] + 0x20;
    local_5c[2] = local_5c[2] + 0x20;
  } while (iVar1 < 7);
  local_5c[2] = 0xf0;
  sub_080236CC((int)local_4c,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_5c);
  sub_08020EAA((undefined2 *)local_4c,0);
  return;
}


/* sub_0800C978 @ 0x0800C978 */

undefined4 * sub_0800C978(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(undefined2 *)((int)param_1 + 0xe) = 0xf00;
    uVar1 = sub_080067AC(&DAT_03001120,0xf00);
    *(undefined2 *)(param_1 + 3) = uVar1;
    *param_1 = &_08024D40;
    param_1[5] = param_2;
    *(undefined1 *)(param_1 + 2) = 2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0xf0;
    sub_0800C8D8((int)param_1);
  }
  return param_1;
}


/* sub_0800C9C4 @ 0x0800C9C4 */

undefined4 sub_0800C9C4(int *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)param_1[4] + -1;
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\0') {
    sub_080068CA(0x3001120,param_1);
    if (*(int *)(DAT_030010e0 + 0x3c) != 0) {
      iVar1 = sub_0801A4FC((undefined4 *)0x0);
      sub_080068B8(0x3001120,iVar1);
    }
    return 0;
  }
  return 1;
}


/* sub_0800C9FE @ 0x0800C9FE */

undefined4 sub_0800C9FE(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = param_2[1];
  param_2[1] = iVar4 + 0x20;
  iVar5 = param_2[2];
  param_2[2] = iVar5 + 1;
  iVar6 = 0;
  uVar8 = (uint)(iVar5 << 0x1b) >> 2;
  puVar3 = (uint *)*param_2;
  do {
    puVar2 = puVar3;
    uVar7 = iVar6 * 0x200000 + 0x80006180;
    *puVar2 = uVar7;
    iVar5 = iVar6 * 0x10;
    iVar6 = iVar6 + 1;
    puVar2[1] = (uint)*(ushort *)(param_1 + 0xc) + iVar5 & 0x3ff | puVar2[1] & 0xfffffc00;
    *puVar2 = uVar7 & 0xc1ffffff | uVar8;
    puVar3 = puVar2 + 2;
  } while (iVar6 < 7);
  *puVar3 = 0x40e02180;
  puVar2[3] = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff | puVar2[3] & 0xfffffc00;
  *puVar3 = uVar8 | 0x40e02180;
  *param_2 = puVar2 + 4;
  *(undefined2 *)(iVar4 + 6) = 0x100;
  *(undefined2 *)(iVar4 + 0xe) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0;
  if (*(byte *)(param_1 + 0x10) < 0x11) {
    uVar1 = sub_08022008((uint)*(byte *)(param_1 + 0x10),0x1000);
    *(undefined2 *)(iVar4 + 0x1e) = uVar1;
  }
  else {
    *(undefined2 *)(iVar4 + 0x1e) = 0x100;
  }
  return 0;
}


/* sub_0800CA90 @ 0x0800CA90 */

undefined4 sub_0800CA90(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_0800CA9C @ 0x0800CA9C */

void sub_0800CA9C(int *param_1)

{
  int iVar1;
  
  sub_080068CA(0x3001120,param_1);
  if (*(int *)(DAT_030010e0 + 0x3c) != 0) {
    iVar1 = sub_0801A4FC((undefined4 *)0x0);
    sub_080068B8(0x3001120,iVar1);
  }
  return;
}


/* sub_0800CAC4 @ 0x0800CAC4 */

undefined4 sub_0800CAC4(int param_1,int param_2)

{
  if (param_2 == 9) {
    sub_0800C8D8(param_1);
  }
  return 0;
}


/* sub_0800CB00 @ 0x0800CB00 */

uint sub_0800CB00(int param_1)

{
  int iVar1;
  
  iVar1 = (*(ushort *)(param_1 + 4) - 1) * 0x10000;
  *(short *)(param_1 + 4) = (short)((uint)iVar1 >> 0x10);
  return (uint)(iVar1 >> 0x10) >> 0x1f;
}


/* sub_0800CB0E @ 0x0800CB0E */

void sub_0800CB0E(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 6);
  uVar1 = *(undefined2 *)(param_1 + 4);
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08025AAC;
    *(undefined2 *)(puVar2 + 1) = uVar1;
  }
  return;
}


/* sub_0800CB40 @ 0x0800CB40 */

void sub_0800CB40(void)

{
  return;
}


/* sub_0800CB42 @ 0x0800CB42 */

undefined4 sub_0800CB42(void)

{
  return 0;
}


/* sub_0800CB46 @ 0x0800CB46 */

undefined4 * sub_0800CB46(void)

{
  return &DAT_03002090;
}


/* sub_0800CB50 @ 0x0800CB50 */

undefined4 * sub_0800CB50(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_1 = &_08023FE4;
  uVar1 = param_2 * 0x20 + 0x7ffU & 0xfffff800;
  *(char *)((int)param_1 + 5) = (char)(uVar1 >> 8);
  param_1[5] = param_2;
  uVar2 = __16__rt_sdiv(param_2,(uVar1 + param_2) - 1);
  param_1[3] = uVar2;
  param_1[2] = 0;
  param_1[4] = param_2 << 4;
  return param_1;
}


/* sub_0800CB80 @ 0x0800CB80 */

undefined4 sub_0800CB80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_1 + 6;
  piVar4 = param_1 + 7;
  if (param_1[2] == 0) {
    iVar2 = sub_0802142E(param_1[4]);
    if (iVar2 != 0) {
      sub_0800793A(param_1 + 10,param_2);
      iVar2 = sub_0802141C(5);
      if (iVar2 < 4) {
        *(char *)(param_2 + 0x10) = (char)iVar2;
      }
      sub_0800791A(param_1 + 8,param_2);
      cVar1 = *(char *)(param_2 + 0x10);
      if (cVar1 == '\0') {
        *piVar5 = 0;
        *piVar4 = param_1[5];
        param_1[9] = param_1[9] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10];
        param_1[0xf] = param_1[0xd];
        param_1[0x11] = param_1[0xd] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0x10] = param_1[0xc];
      }
      else if (cVar1 == '\x01') {
        *piVar5 = 0;
        *piVar4 = -param_1[5];
        param_1[9] = param_1[9] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10];
        param_1[0xf] = param_1[0xb] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0x10] = param_1[0xc];
        param_1[0x11] = param_1[0xb];
      }
      else if (cVar1 == '\x02') {
        *piVar5 = -param_1[5];
        *piVar4 = 0;
        param_1[8] = param_1[8] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xf] = param_1[0xb];
        param_1[0x10] = param_1[10];
        param_1[0x11] = param_1[0xd];
      }
      else if (cVar1 == '\x03') {
        *piVar5 = param_1[5];
        *piVar4 = 0;
        param_1[8] = param_1[8] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[0xc];
        param_1[0x10] = param_1[0xc] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xf] = param_1[0xb];
        param_1[0x11] = param_1[0xd];
      }
      iVar2 = __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x10) + *param_1));
      if (iVar2 != 0) {
        param_1[2] = param_1[3];
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x10);
        __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x18) + *param_1));
      }
    }
    if (param_1[2] == 0) {
      return 0;
    }
  }
  piVar3 = (int *)(param_2 + 0x158);
  *piVar3 = *piVar3 + *piVar5;
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *piVar4;
  *(char *)(param_2 + 0x10) = (char)param_1[1];
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    iVar2 = param_1[9];
    *piVar3 = param_1[8] << 8;
    *(int *)(param_2 + 0x15c) = iVar2 << 8;
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x14) + *param_1));
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  }
  else {
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x18) + *param_1));
  }
  return 0;
}


/* sub_0800CCE6 @ 0x0800CCE6 */

void sub_0800CCE6(int *param_1,undefined4 param_2)

{
  if (param_1[2] != 0) {
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x14) + *param_1));
  }
  return;
}


/* sub_0800CCFA @ 0x0800CCFA */

void sub_0800CCFA(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if (iVar1 == 0) {
    __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800CD20 @ 0x0800CD20 */

void sub_0800CD20(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800CD46 @ 0x0800CD46 */

void sub_0800CD46(int param_1)

{
  sub_08005D6C((int *)(param_1 + 0x38),DAT_030010fc);
  return;
}


/* sub_0800CD56 @ 0x0800CD56 */

undefined4 * sub_0800CD56(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800CB50(param_1,*(int *)(param_2 + 4));
    *param_1 = &_08025BC0;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
    param_1[4] = param_1[4] << 3;
  }
  return param_1;
}


/* sub_0800CD92 @ 0x0800CD92 */

undefined4 sub_0800CD92(int param_1)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08005D6C((int *)(param_1 + 0x38),DAT_030010fc);
  }
  return uVar1;
}


/* sub_0800CDD8 @ 0x0800CDD8 */

int sub_0800CDD8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((((DAT_03001fa8 == 0) ||
       (sub_080088E0(&local_24,DAT_03001fa8), *(int *)(param_1 + 0x40) <= (int)local_24)) ||
      (local_1c <= *(int *)(param_1 + 0x38))) ||
     ((*(int *)(param_1 + 0x44) <= local_20 || (local_18 <= *(int *)(param_1 + 0x3c))))) {
    piVar3 = (int *)(param_1 + 0x28);
    sub_080063E0(piVar3,DAT_030010fc,1);
    sub_080063E0(piVar3,DAT_03001104,1);
    iVar1 = sub_08005D6C((int *)(param_1 + 0x38),DAT_030010fc);
    piVar2 = (int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      piVar2 = piVar3;
    }
    sub_080063E0(piVar2,DAT_030010fc,0);
    sub_080063E0(piVar2,DAT_03001104,0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* sub_0800CE60 @ 0x0800CE60 */

void sub_0800CE60(int param_1,int param_2)

{
  int aiStack_24 [4];
  
  sub_080063E0((int *)(param_1 + 0x38),DAT_030010fc,1);
  sub_080063E0((int *)(param_1 + 0x38),DAT_03001104,1);
  sub_0800793A(aiStack_24,param_2);
  sub_080063E0(aiStack_24,DAT_030010fc,0);
  sub_080063E0(aiStack_24,DAT_03001104,0);
  return;
}


/* sub_0800CEA4 @ 0x0800CEA4 */

undefined4 * sub_0800CEA4(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800CB50(param_1,*(int *)(param_2 + 4));
    *param_1 = &_08025ABC;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
  }
  return param_1;
}


/* sub_0800CEDA @ 0x0800CEDA */

int sub_0800CEDA(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((((*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x38)) &&
       (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x3c))) &&
      (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x50))) &&
     (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x54))) {
    if (((DAT_03001fa8 == 0) ||
        (sub_080088E0(&uStack_24,DAT_03001fa8), *(int *)(param_1 + 0x40) <= (int)uStack_24)) ||
       ((iStack_1c <= *(int *)(param_1 + 0x38) ||
        ((*(int *)(param_1 + 0x44) <= iStack_20 || (iStack_18 <= *(int *)(param_1 + 0x3c))))))) {
      piVar3 = (int *)(param_1 + 0x28);
      sub_080063E0(piVar3,DAT_030010fc,1);
      sub_080063E0(piVar3,DAT_03001104,1);
      iVar1 = sub_08005D6C((int *)(param_1 + 0x38),DAT_030010fc);
      piVar2 = (int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        piVar2 = piVar3;
      }
      sub_080063E0(piVar2,DAT_030010fc,0);
      sub_080063E0(piVar2,DAT_03001104,0);
    }
    else {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}


/* sub_0800CF00 @ 0x0800CF00 */

int sub_0800CF00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  sub_0800E41C(param_2,(int *)(param_1 + 0x28),1);
  iVar1 = sub_0800E438(param_2,(int *)(param_1 + 0x38));
  piVar2 = (int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x28);
  }
  sub_0800E41C(param_2,piVar2,0);
  return iVar1;
}


/* sub_0800CF34 @ 0x0800CF34 */

void sub_0800CF34(int param_1,int param_2)

{
  sub_0800E41C(param_2,(int *)(param_1 + 0x38),1);
  sub_0800E310(param_2,0);
  return;
}


/* sub_0800CF4E @ 0x0800CF4E */

undefined4 * sub_0800CF4E(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x58), param_1 != (undefined4 *)0x0)) {
    sub_0800CB50(param_1,*(int *)(param_2 + 4));
    *param_1 = &_0802591C;
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(ushort *)(param_2 + 0xc);
    uVar3 = *(ushort *)(param_2 + 0xe);
    param_1[0x12] = (uint)*(ushort *)(param_2 + 8);
    param_1[0x13] = (uint)uVar1;
    param_1[0x14] = (uint)uVar2;
    param_1[0x15] = (uint)uVar3;
  }
  return param_1;
}


/* sub_0800CF84 @ 0x0800CF84 */

int sub_0800CF84(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    iVar1 = 0;
  }
  else {
    sub_0800E41C(param_2,(int *)(param_1 + 0x28),1);
    iVar1 = sub_0800E438(param_2,(int *)(param_1 + 0x38));
    piVar2 = (int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x28);
    }
    sub_0800E41C(param_2,piVar2,0);
  }
  return iVar1;
}


/* sub_0800CFDC @ 0x0800CFDC */

undefined4 * sub_0800CFDC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800CB50(puVar1,iVar2);
    *puVar1 = &_08024E2C;
  }
  return puVar1;
}


/* sub_0800D00E @ 0x0800D00E */

undefined4 * sub_0800D00E(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  puVar4 = (undefined4 *)sub_0801F08C(0x58);
  if (puVar4 != (undefined4 *)0x0) {
    sub_0800CB50(puVar4,*(int *)(param_1 + 4));
    *puVar4 = &_08025ABC;
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = *(ushort *)(param_1 + 0xc);
    uVar3 = *(ushort *)(param_1 + 0xe);
    puVar4[0x12] = (uint)*(ushort *)(param_1 + 8);
    puVar4[0x13] = (uint)uVar1;
    puVar4[0x14] = (uint)uVar2;
    puVar4[0x15] = (uint)uVar3;
  }
  return puVar4;
}


/* sub_0800D060 @ 0x0800D060 */

undefined4 * sub_0800D060(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800CB50(puVar1,iVar2);
    *puVar1 = &_0802505C;
  }
  return puVar1;
}


/* sub_0800D092 @ 0x0800D092 */

void sub_0800D092(int param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  sub_0800CD56((undefined4 *)0x0,param_1);
  return;
}


/* sub_0800D0AE @ 0x0800D0AE */

undefined4 * sub_0800D0AE(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800CB50(puVar1,iVar2);
    *puVar1 = &_08024C28;
  }
  return puVar1;
}


/* sub_0800D0E0 @ 0x0800D0E0 */

void sub_0800D0E0(int param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  sub_0800CD56((undefined4 *)0x0,param_1);
  return;
}


/* sub_0800D0FC @ 0x0800D0FC */

undefined4 * sub_0800D0FC(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  sub_0800763C(param_2,&DAT_03001f2c);
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800CB50(puVar1,iVar2);
    *puVar1 = &_080258FC;
  }
  return puVar1;
}


/* sub_0800D138 @ 0x0800D138 */

void sub_0800D138(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0xff;
    *param_1 = 0;
    param_1[2] = param_2;
  }
  return;
}


/* sub_0800D156 @ 0x0800D156 */

void sub_0800D156(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(*piVar1 + 8) + *piVar1));
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)*param_1;
      __call_via_r1((int *)*param_1,(undefined *)(*(int *)(iVar2 + 4) + iVar2));
    }
    iVar2 = (*(byte *)(param_1 + 1) + 1) * 0x1000000;
    *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    if (*(int *)param_1[2] <= iVar2 >> 0x18) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    puVar3 = (undefined4 *)((int *)param_1[2])[(char)param_1[1] + 1];
    iVar2 = __call_via_r2(puVar3,param_2,(undefined *)*puVar3);
    *param_1 = iVar2;
  } while( true );
}


/* sub_0800D1AC @ 0x0800D1AC */

undefined4 * sub_0800D1AC(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  *param_1 = &_08023FD4;
  iVar2 = *(short *)(param_2 + 4) * 0x100 - *(int *)(param_3 + 0x158);
  iVar7 = *(short *)(param_2 + 6) * 0x100 - *(int *)(param_3 + 0x15c);
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  iVar4 = iVar7;
  if (iVar7 < 0) {
    iVar4 = -iVar7;
  }
  param_1[3] = *(undefined4 *)(param_2 + 4);
  if (iVar3 < iVar4) {
    if (iVar7 < 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x12) = 0;
    }
  }
  else {
    iVar4 = iVar3;
    if (iVar2 < 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 2;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x12) = 3;
    }
  }
  __16__rt_sdiv((uint)*(ushort *)(param_2 + 8),iVar4 << 8);
  *(undefined2 *)(param_1 + 4) = extraout_var;
  *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)((int)param_1 + 0x12);
  if (*(short *)(param_1 + 4) == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 4) = 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 4);
    uVar5 = __16__rt_sdiv((uint)uVar1 * 0x100,iVar2 * 0x100);
    uVar6 = __16__rt_sdiv((uint)uVar1 * 0x100,iVar7 * 0x100);
    param_1[1] = uVar5;
    param_1[2] = uVar6;
  }
  return param_1;
}


/* sub_0800D28C @ 0x0800D28C */

bool sub_0800D28C(int param_1,int param_2)

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


/* sub_0800D2C8 @ 0x0800D2C8 */

undefined4 sub_0800D2C8(int param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint local_50;
  int local_4c;
  int local_48;
  undefined *local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  sub_0800793A(&local_2c,(int)param_2);
  local_18 = (int *)(param_1 + 4);
  piVar4 = param_2 + 0x56;
  local_1c = (int *)(param_1 + 8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 4);
  param_2[0x57] = param_2[0x57] + *local_1c;
  sub_0800793A(&local_3c,(int)param_2);
  local_40 = &local_3c;
  if ((DAT_03001fa8 == 0) ||
     (((((sub_080088E0(&local_50,DAT_03001fa8), local_24 <= (int)local_50 || (local_48 <= local_2c))
        || (local_20 <= local_4c)) || ((int)local_44 <= local_28)) &&
      (((local_34 <= (int)local_50 || (local_48 <= local_3c)) ||
       ((local_30 <= local_4c || ((int)local_44 <= local_38)))))))) {
    local_44 = &DAT_03001090;
    sub_080063E0(&local_2c,DAT_030010fc,1);
    sub_080063E0(&local_2c,*(int *)(local_44 + 0x74),1);
    iVar3 = sub_08005D6C(local_40,DAT_030010fc);
    if (iVar3 == 0) {
      sub_080063E0(&local_2c,DAT_030010fc,0);
      sub_080063E0(&local_2c,DAT_03001104,0);
      iVar3 = __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 == 0) {
        __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      *piVar4 = *piVar4 - *local_18;
      param_2[0x57] = param_2[0x57] - *local_1c;
      uVar2 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
      sub_080063E0(local_40,DAT_030010fc,0);
      sub_080063E0(local_40,DAT_03001104,0);
      sVar1 = *(short *)(param_1 + 0x10) + -1;
      *(short *)(param_1 + 0x10) = sVar1;
      if (sVar1 == 0) {
        sub_0800793A((int *)&local_50,(int)param_2);
        sub_080063E0((int *)&local_50,DAT_030010fc,1);
        sub_080063E0((int *)&local_50,DAT_03001104,1);
        sVar1 = *(short *)(param_1 + 0xe);
        *piVar4 = (int)*(short *)(param_1 + 0xc) << 8;
        param_2[0x57] = (int)sVar1 << 8;
        sub_0800793A((int *)&local_50,(int)param_2);
        sub_080063E0((int *)&local_50,DAT_030010fc,0);
        sub_080063E0((int *)&local_50,DAT_03001104,0);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    *piVar4 = *piVar4 - *local_18;
    param_2[0x57] = param_2[0x57] - *local_1c;
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800D490 @ 0x0800D490 */

undefined4 sub_0800D490(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int aiStack_40 [4];
  int *local_30;
  int aiStack_2c [4];
  int *local_1c;
  int *local_18;
  
  sub_0800793A(aiStack_2c,(int)param_2);
  local_18 = (int *)(param_1 + 4);
  piVar4 = param_2 + 0x56;
  local_1c = (int *)(param_1 + 8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 4);
  param_2[0x57] = param_2[0x57] + *local_1c;
  local_30 = aiStack_2c;
  sub_0800793A(aiStack_40,(int)param_2);
  sub_0800E41C((int)param_2,local_30,1);
  iVar2 = sub_0800E438((int)param_2,aiStack_40);
  if (iVar2 == 0) {
    sub_0800E41C((int)param_2,local_30,0);
    iVar2 = __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
    *piVar4 = *piVar4 - *local_18;
    param_2[0x57] = param_2[0x57] - *local_1c;
    uVar3 = 0;
  }
  else {
    iVar2 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
    if (iVar2 == 0) {
      __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
    sub_0800E41C((int)param_2,aiStack_40,0);
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      sub_0800E310((int)param_2,1);
      sVar1 = *(short *)(param_1 + 0xe);
      *piVar4 = (int)*(short *)(param_1 + 0xc) << 8;
      param_2[0x57] = (int)sVar1 << 8;
      sub_0800E310((int)param_2,0);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* sub_0800D584 @ 0x0800D584 */

undefined4 * sub_0800D584(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,(int)param_2);
  *puVar1 = &_0802504C;
  __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return puVar1;
}


/* sub_0800D5B8 @ 0x0800D5B8 */

undefined4 * sub_0800D5B8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,(int)param_2);
  *puVar1 = &_0802504C;
  __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  *puVar1 = &_08024E0C;
  __call_via_r2(param_2,0xc,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return puVar1;
}


/* sub_0800D5FE @ 0x0800D5FE */

undefined4 * sub_0800D5FE(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,param_2);
  *puVar1 = &_08024E1C;
  return puVar1;
}


/* sub_0800D624 @ 0x0800D624 */

undefined4 * sub_0800D624(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_0800D1AC(puVar1,param_1,(int)param_2);
  *puVar1 = &_08024C18;
  __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return puVar1;
}


/* sub_0800D668 @ 0x0800D668 */

undefined4 * sub_0800D668(undefined4 *param_1,ushort *param_2,undefined4 param_3,short *param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x16c), param_1 != (undefined4 *)0x0)) {
    sub_080078E4(param_1,param_2,&DAT_03001f34,param_4);
    *param_1 = &_080257D0;
    sub_0800D138(param_1 + 0x58,param_3);
  }
  return param_1;
}


/* sub_0800D6A6 @ 0x0800D6A6 */

void sub_0800D6A6(int param_1,int param_2)

{
  sub_0800763C(param_1,(int *)(&gUnknown_083ED21C)[param_2]);
  return;
}


/* sub_0800D6B4 @ 0x0800D6B4 */

bool sub_0800D6B4(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&gUnknown_083ED21C)[param_2];
}


/* sub_0800D6C8 @ 0x0800D6C8 */

void sub_0800D6C8(int param_1)

{
  sub_0800D156((int *)(param_1 + 0x160),param_1);
  sub_0800772A(param_1);
  return;
}


/* sub_0800D6DE @ 0x0800D6DE */

undefined4 * sub_0800D6DE(int param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (ushort *)sub_08009324(*(int *)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0801F08C(0x16c);
  if (puVar2 != (undefined4 *)0x0) {
    sub_080078E4(puVar2,puVar1,&DAT_03001f34,(short *)(param_1 + 8));
    *puVar2 = &_080257D0;
    sub_0800D138(puVar2 + 0x58,param_1 + 0x10);
  }
  return puVar2;
}


/* sub_0800D730 @ 0x0800D730 */

undefined4 sub_0800D730(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_03002068;
  iVar2 = __call_via_r3();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_03002068 == iVar1) {
      sub_0800BF6E(&DAT_03001fe0,param_2);
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0800D764 @ 0x0800D764 */

undefined4 * sub_0800D764(void)

{
  return &DAT_03002094;
}


/* sub_0800D770 @ 0x0800D770 */

undefined4 * sub_0800D770(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023E44;
    param_1[5] = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return param_1;
}


/* sub_0800D7A0 @ 0x0800D7A0 */

undefined4 sub_0800D7A0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 auStack_28 [7];
  
  sub_0800B4AE(auStack_28,*(undefined4 *)(param_1 + 0x14),(undefined2 *)(param_1 + 0x10),
               (undefined4 *)&gUnknown_083ED29C,param_2 + 400);
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08023E88;
    piVar1[1] = (int)auStack_28;
  }
  sub_0801F2F4(piVar1);
  sub_0800B4FC((undefined2 *)auStack_28,0);
  return 1;
}


/* sub_0800D7E0 @ 0x0800D7E0 */

undefined4 * sub_0800D7E0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_08023E44;
    puVar1[5] = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(puVar1 + 4) = 0;
  }
  return puVar1;
}


/* sub_0800D818 @ 0x0800D818 */

undefined4 sub_0800D818(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_030022b0 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __call_via_r3();
  }
  return uVar1;
}


/* sub_0800D838 @ 0x0800D838 */

undefined4 * sub_0800D838(void)

{
  return &DAT_03002098;
}


/* sub_0800D844 @ 0x0800D844 */

undefined4 sub_0800D844(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((DAT_030022b0 & 1) == 0) || (*(char *)(param_1 + 4) != *(char *)(param_3 + 0x10))) {
    uVar1 = 0;
  }
  else {
    uVar1 = __call_via_r3();
  }
  return uVar1;
}


/* sub_0800D86E @ 0x0800D86E */

undefined4 sub_0800D86E(int param_1,int param_2)

{
  if (*(char *)(param_1 + 4) == *(char *)(param_2 + 0x10)) {
    return 1;
  }
  return 0;
}


/* sub_0800D87E @ 0x0800D87E */

undefined4 * sub_0800D87E(void)

{
  return &DAT_0300209c;
}


/* sub_0800D882 @ 0x0800D882 */

undefined4 * sub_0800D882(void)

{
  return &DAT_030020a4;
}


/* sub_0800D888 @ 0x0800D888 */

undefined4 * sub_0800D888(void)

{
  return &DAT_030020b4;
}


/* sub_0800D88E @ 0x0800D88E */

undefined4 * sub_0800D88E(void)

{
  return &DAT_030020ac;
}


/* sub_0800D89C @ 0x0800D89C */

void sub_0800D89C(undefined4 param_1,int *param_2,undefined4 param_3)

{
  __call_via_r3();
  return;
}


/* sub_0800D8AE @ 0x0800D8AE */

undefined4 * sub_0800D8AE(void)

{
  return &DAT_030020bc;
}


/* sub_0800D8B8 @ 0x0800D8B8 */

undefined4 sub_0800D8B8(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = DAT_03002064 == *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = DAT_03002064;
  if (bVar2) {
    return 0;
  }
  uVar1 = __call_via_r3();
  return uVar1;
}


/* sub_0800D8EA @ 0x0800D8EA */

void sub_0800D8EA(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024980;
    puVar1[1] = 0;
  }
  return;
}


/* sub_0800D908 @ 0x0800D908 */

undefined4 * sub_0800D908(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023E38;
    param_1[5] = param_2;
    bVar1 = *(byte *)(param_2 + 0x10);
    *(byte *)(param_1 + 4) = bVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_083ED654)[bVar1];
  }
  return param_1;
}


/* sub_0800D93C @ 0x0800D93C */

bool sub_0800D93C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  short local_20;
  undefined2 local_1e;
  int local_1c;
  int local_18;
  
  bVar4 = (DAT_030022ae & *(byte *)(param_1 + 0x11)) != 0;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0x14);
    sub_0800791A(&local_1c,param_2);
    local_1c = ((int)*(short *)(iVar3 + 0x14) - (int)*(short *)(iVar3 + 8)) + local_1c;
    local_18 = ((int)*(short *)(iVar3 + 0x16) - (int)*(short *)(iVar3 + 10)) + local_18;
    local_20 = (short)local_1c;
    local_1e = (undefined2)local_18;
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x10);
    piVar1 = (int *)sub_0800C84C(0,param_2);
    sub_0801F2F4(piVar1);
    iVar2 = sub_0800C584(&DAT_03002080,(uint)*(byte *)(iVar3 + 0x11),(uint)*(byte *)(iVar3 + 0x12),
                         &local_20,(uint)*(byte *)(iVar3 + 0x13),1);
    *(undefined1 *)(iVar2 + 0x10) = *(undefined1 *)(iVar3 + 0x10);
    piVar1 = (int *)sub_0800C88A(0,iVar2);
    sub_0801F2F4(piVar1);
  }
  return bVar4;
}


/* sub_0800D9C2 @ 0x0800D9C2 */

undefined4 * sub_0800D9C2(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)sub_0801F08C(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    sub_08004FF8(puVar2,param_1);
    *puVar2 = &_08023E38;
    puVar2[5] = param_1;
    bVar1 = *(byte *)(param_1 + 0x10);
    *(byte *)(puVar2 + 4) = bVar1;
    *(undefined *)((int)puVar2 + 0x11) = (&gUnknown_083ED654)[bVar1];
  }
  return puVar2;
}


/* sub_0800D9F8 @ 0x0800D9F8 */

void sub_0800D9F8(int param_1)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  sub_0800793A(&local_14,*(int *)(param_1 + 4));
  local_1c = ((((local_14 + local_c) / 2 + -0x78) * 0x400 - DAT_03001094) * 3 >> 6) + DAT_03001094;
  local_18 = ((((local_10 + local_8) / 2 + -0x54) * 0x400 - DAT_03001098) * 9 >> 7) + DAT_03001098;
  sub_080062E8(0x3001090,&local_1c);
  return;
}


/* sub_0800DA68 @ 0x0800DA68 */

void sub_0800DA68(undefined4 *param_1)

{
  *param_1 = &_080240B4;
  REG_DMA3SAD = 0x5000000;
  REG_DMA3DAD = param_1 + 1;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = 0x5000200;
  REG_DMA3DAD = param_1 + 0x81;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_0800DA96 @ 0x0800DA96 */

void sub_0800DA96(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort auStack_410 [256];
  undefined1 auStack_210 [512];
  
  iVar1 = 0x100;
  if ((param_2 < 0x101) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  iVar2 = 0;
  do {
    uVar4 = (uint)*(ushort *)(iVar2 * 2 + param_1 + 4);
    iVar3 = iVar2 + 1;
    auStack_410[iVar2] =
         (ushort)(iVar1 * (uVar4 & 0x1f) >> 8) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x16) >> 0x1b)) >> 8) << 5) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x11) >> 0x1b)) >> 8) << 10);
    iVar2 = iVar3;
  } while (iVar3 < 0x200);
  REG_DMA3SAD = auStack_410;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = auStack_210;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_0800DB18 @ 0x0800DB18 */

void sub_0800DB18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort auStack_410 [256];
  undefined1 auStack_210 [512];
  
  iVar2 = 0x100;
  if ((param_2 < 0x101) && (iVar2 = param_2, param_2 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar2 * 0x1f;
  iVar2 = 0x100 - iVar2;
  iVar3 = 0;
  do {
    uVar5 = (uint)*(ushort *)(iVar3 * 2 + param_1 + 4);
    iVar4 = iVar3 + 1;
    auStack_410[iVar3] =
         (ushort)(iVar2 * (uVar5 & 0x1f) + iVar1 >> 8) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x16) >> 0x1b) + iVar1) >> 8) << 5) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x11) >> 0x1b) + iVar1) >> 8) << 10);
    iVar3 = iVar4;
  } while (iVar4 < 0x200);
  REG_DMA3SAD = auStack_410;
  REG_DMA3DAD = 0x5000000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  REG_DMA3SAD = auStack_210;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_0800DBAE @ 0x0800DBAE */

bool sub_0800DBAE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  iVar1 = __16__rt_sdiv(*(uint *)(param_1 + 0x408),iVar1 * 0x100);
  sub_0800DA96(param_1,0x100 - iVar1);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}


/* sub_0800DBE2 @ 0x0800DBE2 */

undefined4 sub_0800DBE2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = __16__rt_sdiv(*(uint *)(param_1 + 8),iVar1 * 0x100);
  sub_0800BE6C(iVar1);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_0800DC08 @ 0x0800DC08 */

bool sub_0800DC08(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x404) + 1;
  *(int *)(param_1 + 0x404) = iVar1;
  iVar1 = __16__rt_sdiv(*(uint *)(param_1 + 0x408),iVar1 * 0x100);
  sub_0800DB18(param_1,iVar1);
  return *(int *)(param_1 + 0x408) <= *(int *)(param_1 + 0x404);
}


/* sub_0800DC38 @ 0x0800DC38 */

undefined4 sub_0800DC38(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = __16__rt_sdiv(*(uint *)(param_1 + 8),iVar1 * 0x100);
  sub_0800BE7A(0x100 - iVar1);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_0800DC64 @ 0x0800DC64 */

undefined4 sub_0800DC64(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar2;
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < iVar2) {
    iVar2 = __16__rt_sdiv(uVar1,(uVar1 * 2 - iVar2) * 0x100);
  }
  else {
    iVar2 = __16__rt_sdiv(uVar1,iVar2 * 0x100);
  }
  sub_0800BE7A(iVar2);
  if (*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * -2 < 0 ==
      SBORROW4(*(int *)(param_1 + 4),*(int *)(param_1 + 8) * 2)) {
    return 1;
  }
  return 0;
}


/* sub_0800DCA8 @ 0x0800DCA8 */

void sub_0800DCA8(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_18 = *param_2 * 0x400 - DAT_03001094;
  local_14 = param_2[1] * 0x400 - DAT_03001098;
  local_20 = local_18;
  if ((int)local_18 < 0) {
    local_20 = -local_18;
  }
  local_1c = local_14;
  if ((int)local_14 < 0) {
    local_1c = -local_14;
  }
  puVar4 = &local_1c;
  if ((int)local_1c < (int)local_20) {
    puVar4 = &local_20;
  }
  iVar1 = __16__rt_sdiv(param_3,*puVar4);
  iVar1 = (iVar1 >> 10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  uVar5 = iVar1 * 0x400;
  uVar2 = __16__rt_sdiv(uVar5,local_18 << 10);
  uVar3 = __16__rt_sdiv(uVar5,local_14 << 10);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}


/* sub_0800DD38 @ 0x0800DD38 */

void sub_0800DD38(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_14 = DAT_03001094 + *(int *)(param_1 + 4);
    local_10 = DAT_03001098 + *(int *)(param_1 + 8);
    sub_080062E8(0x3001090,&local_14);
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  return;
}


/* sub_0800DD80 @ 0x0800DD80 */

void sub_0800DD80(int param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(byte *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = DAT_03000ff4;
  *(char *)(param_1 + 5) =
       (char)((int)(((uint)((int)(100 - (uint)param_3) >> 0x1f) >> 0x1c) + (100 - (uint)param_3)) >>
             4) + '\x01';
  *(undefined1 *)(param_1 + 6) = 1;
  DAT_03000ff4 = param_1;
  return;
}


/* sub_0800DDA6 @ 0x0800DDA6 */

void sub_0800DDA6(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_18 [2];
  
  piVar3 = (int *)**(int **)(param_1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),(undefined *)(*piVar3 + (int)piVar3));
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    DAT_03000ff4 = *(undefined4 *)(param_1 + 8);
    local_18[0] = 0;
    local_18[1] = 0;
    sub_0800634A(0x3001090,local_18);
  }
  else {
    cVar1 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 5);
      iVar2 = sub_080213FC();
      *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_1 + 4) * (iVar2 + -0x8000) >> 0x13;
      iVar2 = sub_080213FC();
      *(uint *)(param_1 + 0x14) = (uint)*(byte *)(param_1 + 4) * (iVar2 + -0x8000) >> 0x13;
    }
    sub_0800634A(0x3001090,(int *)(param_1 + 0x10));
  }
  return;
}


/* sub_0800DE20 @ 0x0800DE20 */

undefined4 * sub_0800DE20(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08025150;
  sub_08006DA6(0x3001120,0xb,0);
  return param_1;
}


/* sub_0800DE48 @ 0x0800DE48 */

void sub_0800DE48(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025150;
  sub_08006DA6(0x3001120,0xc,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0800DE6E @ 0x0800DE6E */

bool sub_0800DE6E(void)

{
  int iVar1;
  
  iVar1 = sub_08006DA6(0x3001120,10,0);
  return iVar1 == 0;
}


/* sub_0800DE94 @ 0x0800DE94 */

undefined4 sub_0800DE94(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800DEA4 @ 0x0800DEA4 */

undefined4 sub_0800DEA4(void)

{
  if (((DAT_030022b0 & 1) == 0) && (-1 < (int)((uint)DAT_030022b0 << 0x1e))) {
    return 0;
  }
  return 1;
}


/* sub_0800DEBC @ 0x0800DEBC */

undefined4 sub_0800DEBC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800DED0 @ 0x0800DED0 */

undefined4 * sub_0800DED0(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08024950;
  sub_0800DD80(0x30020dc,param_2,param_3);
  DAT_03000ff4 = &DAT_030020dc;
  return param_1;
}


/* sub_0800DF02 @ 0x0800DF02 */

bool sub_0800DF02(void)

{
  return DAT_030020e8 == 0;
}


/* sub_0800DF1C @ 0x0800DF1C */

undefined4 * sub_0800DF1C(undefined4 *param_1,int *param_2,uint param_3)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(4), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08025A40;
  sub_0800DCA8(0x30020c8,param_2,param_3);
  DAT_03000ff4 = &DAT_030020c8;
  return param_1;
}


/* sub_0800DF4E @ 0x0800DF4E */

undefined4 sub_0800DF4E(void)

{
  return DAT_030020d4;
}


/* sub_0800DF60 @ 0x0800DF60 */

void sub_0800DF60(int param_1,int *param_2)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 8),
                (undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0800DF74 @ 0x0800DF74 */

undefined4 sub_0800DF74(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) ||
     (iVar1 = __call_via_r2(param_2,*(int *)(param_1 + 8),
                            (undefined *)(*(int *)(*param_2 + 0x2c) + *param_2)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_0800DF98 @ 0x0800DF98 */

void sub_0800DF98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x158) - *(int *)(param_2 + 0x158);
    iVar3 = *(int *)(iVar2 + 0x15c) - *(int *)(param_2 + 0x15c);
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if (iVar2 < iVar4) {
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
      }
    }
    else if (iVar1 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
  }
  return;
}


/* sub_0800DFEC @ 0x0800DFEC */

undefined4 sub_0800DFEC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800DFFC @ 0x0800DFFC */

void sub_0800DFFC(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 8);
  return;
}


/* sub_0800E002 @ 0x0800E002 */

void sub_0800E002(int param_1,int *param_2)

{
  sub_08010898(param_1,(undefined4 *)(param_1 + 0x10),param_2);
  return;
}


/* sub_0800E004 @ 0x0800E004 */

void sub_0800E004(int param_1,int *param_2)

{
  sub_08010898(param_1,(undefined4 *)(param_1 + 0x10),param_2);
  return;
}


/* sub_0800E022 @ 0x0800E022 */

void sub_0800E022(int param_1,int *param_2)

{
  char in_ZR;
  
  if (in_ZR == '\0') {
    do {
      param_2 = (int *)(*param_2 + 4);
    } while (*param_2 != 0);
  }
  *param_2 = param_1;
  return;
}


/* sub_0800E032 @ 0x0800E032 */

void sub_0800E032(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}


/* sub_0800E038 @ 0x0800E038 */

void sub_0800E038(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0800DE20((undefined4 *)0x0);
  sub_0801F2F4(piVar1);
  *param_1 = 0;
  return;
}


/* sub_0800E04C @ 0x0800E04C */

void sub_0800E04C(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_3 + 0x150);
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      piVar1 = (int *)(*piVar1 + 4);
      iVar2 = *piVar1;
    }
    *piVar1 = param_2;
    if (*param_1 == 0) {
      piVar1 = (int *)sub_0800DE20((undefined4 *)0x0);
      sub_0801F2F4(piVar1);
    }
  }
  return;
}


/* sub_0800E078 @ 0x0800E078 */

void sub_0800E078(undefined4 param_1,int *param_2,int *param_3)

{
  param_3[0x54] = param_2[1];
  param_2[1] = 0;
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,(undefined *)(*(int *)*param_2 + *param_2));
  }
  __call_via_r3();
  return;
}


/* sub_0800E0AC @ 0x0800E0AC */

undefined4 sub_0800E0AC(void)

{
  return 0x147;
}


/* sub_0800E0B2 @ 0x0800E0B2 */

void sub_0800E0B2(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x100) {
    if (uVar2 < 0xe1) {
      if (uVar2 < 0x20) {
        *(ushort *)(param_2 + 5) = uVar1 >> 4;
      }
      else {
        *(short *)(param_2 + 5) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
      }
    }
    else {
      *(short *)(param_2 + 5) = (short)((int)(0x100 - uVar2) >> 4);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E0B4 @ 0x0800E0B4 */

void sub_0800E0B4(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar2 < 0x100) {
    if (uVar2 < 0xe1) {
      if (uVar2 < 0x20) {
        *(ushort *)(param_2 + 5) = uVar1 >> 4;
      }
      else {
        *(short *)(param_2 + 5) = 2 - (short)((int)(uVar2 << 0x1b) >> 0x1f);
      }
    }
    else {
      *(short *)(param_2 + 5) = (short)((int)(0x100 - uVar2) >> 4);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E0F8 @ 0x0800E0F8 */

void sub_0800E0F8(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x8c;
  return;
}


/* sub_0800E10A @ 0x0800E10A */

void sub_0800E10A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E130 @ 0x0800E130 */

void sub_0800E130(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x7c;
  return;
}


/* sub_0800E142 @ 0x0800E142 */

void sub_0800E142(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x40) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 4;
  }
  else {
    sub_08007688(param_2);
  }
  return;
}


/* sub_0800E160 @ 0x0800E160 */

void sub_0800E160(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(uint *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + (uint)*(byte *)(param_1 + 4) * 0x10 + 0x4c;
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x25) * 0xc,0x40,0);
  return;
}


/* sub_0800E19C @ 0x0800E19C */

void sub_0800E19C(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 0x10) {
    *(ushort *)(param_2 + 0x14) = uVar1 >> 2;
  }
  else {
    __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x14) + *param_1));
  }
  return;
}


/* sub_0800E1BE @ 0x0800E1BE */

void sub_0800E1BE(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0800E1DC @ 0x0800E1DC */

void sub_0800E1DC(int param_1,int *param_2)

{
  __call_via_r1(param_2,(undefined *)(*(int *)(*param_2 + 0x30) + *param_2));
  param_2[0x56] = *(int *)(param_1 + 8) << 8;
  param_2[0x57] = *(int *)(param_1 + 0xc) << 8;
  __call_via_r1(param_2,(undefined *)(*(int *)(*param_2 + 0x34) + *param_2));
  return;
}


/* sub_0800E20E @ 0x0800E20E */

void sub_0800E20E(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x6c;
  return;
}


/* sub_0800E210 @ 0x0800E210 */

void sub_0800E210(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x6c;
  return;
}


/* sub_0800E222 @ 0x0800E222 */

void sub_0800E222(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E248 @ 0x0800E248 */

void sub_0800E248(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x9c;
  return;
}


/* sub_0800E25A @ 0x0800E25A */

void sub_0800E25A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E280 @ 0x0800E280 */

undefined4 * sub_0800E280(undefined4 *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int aiStack_24 [4];
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1f0), param_1 != (undefined4 *)0x0)) {
    puVar1 = (ushort *)sub_08009324(*(int *)(param_2 + 0x10));
    sub_0800F7CC(param_1,puVar1,&DAT_03001f34,param_3,(short *)(param_2 + 0xc));
    *param_1 = &_080252A4;
    sub_0800D138(param_1 + 100,param_2 + 0x18);
    param_1[0x68] = 0;
    param_1[0x73] = 0;
    param_1[0x60] = param_3;
    param_1[0x61] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)((int)param_1 + 0x18d) = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    param_1[0x62] = *(undefined4 *)(param_3 + 4);
    sub_0800793A(aiStack_24,(int)param_1);
    sub_080063E0(aiStack_24,DAT_03001104,0);
    param_1[0x67] = param_1;
    sub_0801AA98(param_1 + 0x67,*(int *)(param_1[0x60] + 8));
  }
  return param_1;
}


/* sub_0800E310 @ 0x0800E310 */

void sub_0800E310(int param_1,int param_2)

{
  int aiStack_1c [4];
  
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_0800793A(aiStack_1c,param_1);
    sub_080063E0(aiStack_1c,DAT_03001104,param_2);
  }
  return;
}


/* sub_0800E33A @ 0x0800E33A */

void sub_0800E33A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int aiStack_20 [4];
  
  *param_1 = &_080252A4;
  if (*(char *)((int)param_1 + 0x18d) == '\0') {
    sub_0800793A(aiStack_20,(int)param_1);
    sub_080063E0(aiStack_20,DAT_03001104,1);
  }
  sub_0801A9FA(param_1 + 0x67,0);
  piVar1 = (int *)param_1[100];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,(undefined *)(*(int *)(*piVar1 + 4) + *piVar1));
  }
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0800E39C @ 0x0800E39C */

void sub_0800E39C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c [2];
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 local_18;
  
  iStack_1c = param_1;
  local_18 = param_2;
  sub_0800793A(local_2c,param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x184);
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = local_18;
    *puVar1 = &_080238FC;
    puVar1[4] = uVar3;
    puVar1[2] = local_2c[0] + local_24 >> 1;
    puVar1[3] = local_20;
  }
  iVar2 = DAT_03001730 * 4;
  DAT_03001730 = DAT_03001730 + 1;
  *(undefined4 **)(&DAT_03001734 + iVar2) = puVar1;
  return;
}


/* sub_0800E3EE @ 0x0800E3EE */

void sub_0800E3EE(int param_1)

{
  int aiStack_18 [4];
  
  if (*(char *)(param_1 + 0x18d) == '\0') {
    *(undefined1 *)(param_1 + 0x18d) = 1;
    sub_0800793A(aiStack_18,param_1);
    sub_080063E0(aiStack_18,DAT_03001104,1);
  }
  return;
}


/* sub_0800E41C @ 0x0800E41C */

void sub_0800E41C(int param_1,int *param_2,int param_3)

{
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_080063E0(param_2,DAT_03001104,param_3);
  }
  return;
}


/* sub_0800E438 @ 0x0800E438 */

undefined4 sub_0800E438(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x18d) == '\0') &&
     (iVar1 = sub_08005D6C(param_2,DAT_03001104), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800E45E @ 0x0800E45E */

undefined4 sub_0800E45E(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x18d) == '\0') &&
     (iVar1 = sub_080063B6(0x3001090,param_2,(byte *)(param_1 + 0x154)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_0800E484 @ 0x0800E484 */

undefined4 sub_0800E484(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x188) == 0) {
    return 1;
  }
  sub_0800F832(param_1,(int *)param_2);
  iVar1 = *(int *)(param_1 + 0x188) - *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x188) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    sub_08006DA6(0x3001120,0xf,param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x180) + 0x14);
    __call_via_r2(iVar1,param_1,*(undefined **)(iVar1 + 8));
    return 1;
  }
  return 0;
}


/* sub_0800E4D2 @ 0x0800E4D2 */

void sub_0800E4D2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = **(int **)(param_1 + 0x180);
  if (iVar5 != 0) {
    iVar1 = iVar5;
    if (5 < iVar5) {
      iVar1 = sub_08004214((int)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c));
      if (iVar1 == 0x32) {
        return;
      }
      iVar2 = sub_0800426A(iVar1 + 1);
      iVar3 = sub_0800426A(iVar1);
      iVar1 = iVar2 - iVar3 >> 7;
      if ((iVar1 <= iVar5) && (iVar2 = iVar2 - iVar3 >> 1, iVar1 = iVar5, iVar2 < iVar5)) {
        iVar1 = iVar2;
      }
    }
    puVar4 = (undefined4 *)sub_0801F08C(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 1;
      *puVar4 = &_080245B0;
      puVar4[2] = iVar1;
    }
    iVar5 = DAT_03001730 * 4;
    DAT_03001730 = DAT_03001730 + 1;
    *(undefined4 **)(&DAT_03001734 + iVar5) = puVar4;
  }
  return;
}


/* sub_0800E560 @ 0x0800E560 */

void sub_0800E560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sub_0800F8B6(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x188) + param_2;
  *(int *)(param_1 + 0x188) = iVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x180) + 4);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x188) = iVar1;
  }
  return;
}


/* sub_0800E582 @ 0x0800E582 */

void sub_0800E582(int param_1,int param_2)

{
  sub_0800763C(param_1,(int *)(&gUnknown_0840DB00)[param_2]);
  return;
}


/* sub_0800E590 @ 0x0800E590 */

bool sub_0800E590(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&gUnknown_0840DB00)[param_2];
}


/* sub_0800E5A4 @ 0x0800E5A4 */

void sub_0800E5A4(int param_1)

{
  sub_0800772A(param_1);
  sub_0801AB08((undefined4 *)(param_1 + 0x19c));
  return;
}


/* sub_0800E5B8 @ 0x0800E5B8 */

undefined4 sub_0800E5B8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (param_2 == 0) {
    if (((((char)*param_3 == '\x01') || ((char)*param_3 == '\x02')) && (param_1[0x5a] != 0)) &&
       (((sub_080079B8(&iStack_24,(int)param_1), param_3[1] < iStack_1c && (iStack_24 < param_3[3]))
        && ((param_3[2] < iStack_18 && (iStack_20 < param_3[4])))))) {
      sub_0800F910((int)param_1,(int)(param_3 + 5));
      sub_0801AB2A(param_1 + 0x67,param_3 + 5);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (param_2 == 2) {
      if (((((char)*param_3 == '\x01') || ((char)*param_3 == '\x02')) &&
          ((param_1[0x5a] != 0 &&
           (((sub_080079B8(&iStack_24,(int)param_1), param_3[1] < iStack_1c &&
             (iStack_24 < param_3[3])) && (param_3[2] < iStack_18)))))) && (iStack_20 < param_3[4]))
      {
        if (*(char *)param_3[7] != '\0') {
          if ((char)param_1[0x59] != '\0') {
            return 1;
          }
          return 0;
        }
        if (*(char *)((int)param_1 + 0x163) != '\0') {
          return 1;
        }
        return 0;
      }
    }
    else if (param_2 == 0x14) {
      iVar1 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0xc) + *param_1));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sub_080190D4((undefined *)param_1[0x60]);
      if (iVar1 != -1) {
        iVar3 = *param_3;
        *param_3 = iVar3 + 1;
        param_3[iVar3 * 7 + 1] = iVar1;
        param_3[iVar3 * 7 + 2] = (uint)*(byte *)(param_1 + 4);
        sub_08007974(&iStack_24,(int)param_1);
        iStack_20 = iStack_20 - DAT_030010b0;
        iStack_1c = iStack_1c - DAT_030010ac;
        iStack_18 = iStack_18 - DAT_030010b0;
        param_3[iVar3 * 7 + 3] = iStack_24 - DAT_030010ac;
        param_3[iVar3 * 7 + 4] = iStack_20;
        param_3[iVar3 * 7 + 5] = iStack_1c;
        param_3[iVar3 * 7 + 6] = iStack_18;
        return 0;
      }
      return 0;
    }
    uVar2 = sub_08007B08(param_1,param_2,param_3);
  }
  return uVar2;
}


/* sub_0800E72A @ 0x0800E72A */

void sub_0800E72A(int param_1)

{
  int aiStack_18 [4];
  
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_0800793A(aiStack_18,param_1);
    sub_080063E0(aiStack_18,DAT_03001104,1);
  }
  return;
}


/* sub_0800E754 @ 0x0800E754 */

void sub_0800E754(int param_1)

{
  int aiStack_18 [4];
  
  if (*(char *)(param_1 + 0x18d) == '\0') {
    sub_0800793A(aiStack_18,param_1);
    sub_080063E0(aiStack_18,DAT_03001104,0);
  }
  return;
}


/* sub_0800E77E @ 0x0800E77E */

void sub_0800E77E(int param_1)

{
  sub_0800E280((undefined4 *)0x0,param_1,(int)(&gUnknown_086D56AC + *(int *)(param_1 + 8) * 0x18));
  return;
}


/* sub_0800E7A0 @ 0x0800E7A0 */

void sub_0800E7A0(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x14;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x10c;
  return;
}


/* sub_0800E7B4 @ 0x0800E7B4 */

void sub_0800E7B4(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x800) >> 0xe;
  return;
}


/* sub_0800E7C2 @ 0x0800E7C2 */

void sub_0800E7C2(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x11c;
  return;
}


/* sub_0800E7C4 @ 0x0800E7C4 */

void sub_0800E7C4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x11c;
  return;
}


/* sub_0800E7D8 @ 0x0800E7D8 */

void sub_0800E7D8(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x800) >> 0xe;
  return;
}


/* sub_0800E7E6 @ 0x0800E7E6 */

void sub_0800E7E6(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_0800E7F8 @ 0x0800E7F8 */

void sub_0800E7F8(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xfc;
  return;
}


/* sub_0800E80A @ 0x0800E80A */

void sub_0800E80A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x61) {
    *(ushort *)(param_2 + 5) = (ushort)(0x10 < uVar1);
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0800E836 @ 0x0800E836 */

void sub_0800E836(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  
  uStack_1c = 0;
  uStack_14 = 0x200;
  uStack_18 = (undefined2)*(undefined4 *)(param_1 + 0x10);
  uStack_16 = (undefined2)*(undefined4 *)(param_1 + 0x14);
  __call_via_r1(param_2,(undefined *)(*(int *)(*param_2 + 0x30) + *param_2));
  uVar1 = sub_0800D5B8((int)&uStack_1c,param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


