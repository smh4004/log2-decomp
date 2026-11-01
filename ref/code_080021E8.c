/* Ghidra reference decompilation of code_080021E8 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_080021E8 @ 0x080021E8 */

undefined4 sub_080021E8(void)

{
  return 1;
}


/* sub_080021EC @ 0x080021EC */

void sub_080021EC(undefined4 param_1)

{
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_08000B3C(param_1);
  sub_08001FE8(param_1);
  REG_BLDCNT = 0x2c4f;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  return;
}


/* sub_08002220 @ 0x08002220 */

void sub_08002220(undefined4 param_1,int param_2)

{
  REG_BLDALPHA = (char)(param_2 >> 1);
  return;
}


/* sub_08002228 @ 0x08002228 */

void sub_08002228(undefined4 param_1,int param_2)

{
  REG_BLDALPHA = (char)(param_2 >> 1);
  return;
}


/* sub_08002240 @ 0x08002240 */

undefined4 sub_08002240(void)

{
  return 0x3c;
}


/* sub_08002244 @ 0x08002244 */

undefined4 *
sub_08002244(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *param_1 = &_08023A60;
  sub_08020E5C(param_1 + 3,0x20,0x18,param_4,param_4);
  sub_08020E5C(param_1 + 0x11,0x30,8);
  sub_08020E5C(param_1 + 0x1f,0xc0,0x10);
  param_1[0x2d] = &_08023BD8;
  param_1[0x32] = &_08023BD8;
  puVar1 = param_1 + 0x37;
  *puVar1 = &_08025B7C;
  param_1[0x3d] = &_0802419C;
  *puVar1 = &_08025194;
  param_1[0x3d] = &LAB_0802519c;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = param_1 + 0x3d;
  }
  param_1[0x3c] = puVar2;
  puVar1 = param_1 + 0x3e;
  *puVar1 = &_08025B7C;
  param_1[0x44] = &LAB_0802519c;
  *puVar1 = &_08025194;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = param_1 + 0x44;
  }
  param_1[0x43] = puVar2;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x46] = 0xff;
  param_1[0x14] = &gUnknown_08028724;
  *(undefined1 *)((int)param_1 + 0x6d) = 2;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x19] = 0x8020ec3;
  param_1[0x22] = &gUnknown_08028724;
  *(undefined1 *)((int)param_1 + 0xa5) = 2;
  *(undefined1 *)(param_1 + 0x29) = 1;
  param_1[0x27] = 0x8020ec3;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return param_1;
}


/* sub_080022FA @ 0x080022FA */

void sub_080022FA(void)

{
  undefined1 auStack_514 [1280];
  
  sub_0801F394(&gUnknown_081D8ED4,auStack_514);
  REG_DMA3SAD = auStack_514;
  REG_DMA3DAD = 0x600e000;
  Ram040000dc = 0x140;
  DAT_040000de = 0x8400;
  sub_0801F394(&DAT_081d8e54,auStack_514);
  REG_DMA3SAD = auStack_514;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x140;
  DAT_040000de = 0x8400;
  return;
}


/* sub_0800233E @ 0x0800233E */

void sub_0800233E(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *a0;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = 0x10;
  local_20 = 3;
  iVar1 = __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x34) + *param_1);
  uVar2 = *(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4);
  iVar1 = param_1[0x45];
  iVar3 = __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1);
  iVar5 = param_1[0x45];
  a0 = param_1 + 0x1f;
  sub_08021F18(param_1[0x28],0,param_1[0x2c]);
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      local_24 = iVar8 * 0x10;
      local_1c = local_24 + 0x20;
      sub_0801F394(*(undefined4 *)(&DAT_081d8f94 + (iVar1 - iVar8) * 4),param_1[0xc]);
      sub_080211C8(a0,param_1[0xc],&local_24);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  iVar8 = param_1[0x45];
  for (iVar3 = (iVar3 - iVar5) + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
    local_24 = iVar3 * 0x10 + iVar8 * 0x10 + 0x40;
    local_1c = local_24 + 0x20;
    sub_0801F394((&PTR_gUnknown_081D9234_081d8fac)[iVar3],param_1[0xc]);
    sub_080211C8(a0,param_1[0xc],&local_24);
  }
  local_24 = param_1[0x45] * 0x10;
  local_20 = 0;
  local_1c = local_24 + 0x14;
  sub_0801F394(&gUnknown_081D948C,param_1[0xc]);
  sub_080211C8(a0,param_1[0xc],&local_24);
  local_1c = local_24 + 0x50;
  local_24 = local_24 + 0x3c;
  sub_0801F394(&gUnknown_081D944C,param_1[0xc]);
  sub_080211C8(a0,param_1[0xc],&local_24);
  iVar5 = param_1[0x28] + iVar1 * 0x10;
  iVar3 = 0;
  do {
    iVar8 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar5 + 0x14 + iVar8) = 0x86868686;
  } while (iVar3 < 10);
  iVar3 = 0;
  do {
    iVar8 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar5 + 0xd4 + iVar8) = 0x8e8e8e8e;
  } while (iVar3 < 10);
  iVar5 = iVar5 + 0x194;
  iVar3 = 0;
  do {
    iVar8 = 0;
    do {
      iVar7 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar5 + iVar7) = 0x95959595;
    } while (iVar8 < 10);
    iVar5 = iVar5 + 0xc0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xe);
  param_1[0x20] = iVar1 * 0x10 + 0x28;
  param_1[0x21] = 0xe;
  sub_0801F636(a0,uVar2);
  iVar1 = 0;
  puVar6 = &DAT_0600e0c6;
  if (0 < param_1[0x45] * 2) {
    do {
      *puVar6 = 0x10a;
      puVar6 = puVar6 + 1;
      iVar1 = iVar1 + 1;
    } while (param_1[0x45] * 2 - iVar1 != 0 && iVar1 <= param_1[0x45] * 2);
  }
  *puVar6 = 0x118;
  iVar3 = param_1[0x45];
  iVar1 = 8;
  puVar6 = puVar6 + 1;
  do {
    puVar4 = puVar6;
    *puVar4 = 0x11a;
    iVar1 = iVar1 + -1;
    puVar6 = puVar4 + 1;
  } while (iVar1 != 0);
  puVar4[1] = 0x119;
  puVar4 = puVar4 + 2;
  for (iVar1 = iVar3 * -2 + 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0x10a;
    puVar4 = puVar4 + 1;
  }
  sub_080236B4((int)a0,0x6004b40);
  return;
}


/* sub_08002544 @ 0x08002544 */

void sub_08002544(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *a0;
  
  sub_08021F18(param_1[0x1a],0,param_1[0x1e],param_4,param_4);
  param_1[0x12] = 0;
  a0 = param_1 + 0x11;
  param_1[0x13] = 7;
  *(undefined1 *)a0 = 0;
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x40) + *param_1);
  sub_0801F636(a0,*(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4));
  sub_080236B4((int)a0,0x60046c0);
  sub_08021F18(param_1[0x1a],0,param_1[0x1e]);
  param_1[0x12] = 0x18;
  param_1[0x13] = 7;
  *(undefined1 *)a0 = 1;
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x44) + *param_1);
  sub_0801F636(a0,*(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4));
  sub_080236B4((int)a0,0x6004840);
  sub_08021F18(param_1[0x1a],0,param_1[0x1e]);
  param_1[0x12] = 0x30;
  param_1[0x13] = 7;
  *(undefined1 *)a0 = 2;
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x48) + *param_1);
  sub_0801F636(a0,*(undefined4 *)(&gUnknown_080E2840 + iVar1 * 4));
  sub_080236B4((int)a0,0x60049c0);
  return;
}


/* sub_080025E6 @ 0x080025E6 */

void sub_080025E6(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint local_4c [9];
  undefined4 local_28;
  
  REG_DISPCNT = 0xe00;
  REG_BG1CNT = 0x1d83;
  REG_BG2CNT = 0x1e83;
  sub_08020E5C(local_4c,0xd8,8);
  sub_0801F394(&gUnknown_081D90AC,local_28);
  sub_080236B4((int)local_4c,0x6004000);
  sub_08020EAA(local_4c,0);
  piVar3 = param_1 + 3;
  local_4c[0] = 1;
  sub_08002D5C();
  piVar1 = (int *)param_1[0x37];
  __call_via_r1(param_1 + 0x37,*piVar1 + (int)piVar1);
  local_4c[0] = 1;
  piVar1 = param_1 + 0x3e;
  sub_08002D5C(piVar1,piVar3,2,8,&DAT_06005d40);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  local_4c[0] = (uint)(param_1[0x45] != 0);
  piVar1 = param_1 + 0x2d;
  sub_08002D5C(piVar1,piVar3,3,5,&DAT_06005740);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  iVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1);
  local_4c[0] = (uint)(param_1[0x45] < iVar2 + -1);
  piVar1 = param_1 + 0x32;
  sub_08002D5C(piVar1,piVar3,4,4,&DAT_060058c0);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  sub_08002544(param_1);
  sub_080022FA(param_1);
  sub_0800233E(param_1);
  __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x38) + *param_1);
  return;
}


/* sub_080026FE @ 0x080026FE */

void sub_080026FE(int *param_1)

{
  __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x3c) + *param_1);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_08002724 @ 0x08002724 */

void sub_08002724(void)

{
  return;
}


/* sub_08002726 @ 0x08002726 */

void sub_08002726(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  REG_BLDCNT = 0x2f4f;
  return;
}


/* sub_0800273A @ 0x0800273A */

undefined4 sub_0800273A(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x54) + *param_1);
  if (iVar1 == 0) {
    piVar3 = param_1 + 0x2d;
    piVar4 = param_1 + 0x32;
    piVar5 = param_1 + 2;
    if ((char)param_1[2] == '\0') {
      if (((int)((uint)DAT_030022b0 << 0x1e) < 0) || ((int)((uint)DAT_030022b0 << 0x1c) < 0)) {
        sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
        param_1[0x46] = 0;
        *(undefined1 *)((int)param_1 + 5) = 2;
        REG_BLDCNT = 0x2f4f;
      }
      sub_08002E28(param_1 + 0x37,piVar5);
      sub_08002E28(param_1 + 0x3e,piVar5);
      sub_08002E28(piVar3,piVar5);
      sub_08002E28(piVar4,piVar5);
    }
    else {
      iVar1 = sub_08002DDA(param_1 + 0x37,piVar5);
      if (iVar1 != 0) {
        param_1[0x46] = 1;
        REG_BLDCNT = 0x844;
        *(undefined1 *)((int)param_1 + 5) = 2;
      }
      iVar1 = sub_08002DDA(param_1 + 0x3e,piVar5);
      if (iVar1 != 0) {
        param_1[0x46] = 2;
        REG_BLDCNT = 0x844;
        *(undefined1 *)((int)param_1 + 5) = 2;
      }
      iVar1 = sub_08002DDA(piVar3,piVar5);
      if (iVar1 != 0) {
        __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x3c) + *param_1);
        iVar1 = param_1[0x45];
        param_1[0x45] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          sub_08002DC8(piVar3);
        }
        sub_08002DB6(piVar4);
        sub_080022FA(param_1);
        sub_0800233E(param_1);
        __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x38) + *param_1);
      }
      iVar1 = sub_08002DDA(piVar4,piVar5);
      if (iVar1 != 0) {
        __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x3c) + *param_1);
        iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1);
        iVar2 = param_1[0x45];
        param_1[0x45] = iVar2 + 1;
        if (iVar1 + -1 <= iVar2 + 1) {
          sub_08002DC8(piVar4);
        }
        sub_08002DB6(piVar3);
        sub_080022FA(param_1);
        sub_0800233E(param_1);
        __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x38) + *param_1);
      }
    }
  }
  return 0;
}


/* sub_080028EC @ 0x080028EC */

void sub_080028EC(int param_1,int param_2)

{
  REG_BLDALPHA = (char)param_2;
  DAT_04000053 = '\x10' - (char)param_2;
  if (0xf < param_2) {
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}


/* sub_08002900 @ 0x08002900 */

void sub_08002900(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x118) == 0) {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  else {
    REG_BLDALPHA = (char)param_2 + -0x10;
    DAT_04000053 = ' ' - (char)param_2;
    if (param_2 < 0x11) {
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
  }
  return;
}


/* sub_08002928 @ 0x08002928 */

undefined4 sub_08002928(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[0x46];
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *(int *)(*param_1 + 0x4c);
      __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
      sub_0801F2CE();
    }
    else if (iVar2 == 2) {
      iVar2 = *(int *)(*param_1 + 0x50);
      __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
      sub_0801F2CE();
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08002962 @ 0x08002962 */

void sub_08002962(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_20;
  int *piStack_1c;
  undefined4 local_18;
  
  local_30 = &DAT_06006040;
  local_2c = 1;
  local_20 = param_1 + 0x49;
  piStack_1c = param_1;
  local_18 = param_2;
  sub_08002D5C(local_20,param_1 + 3,5,6);
  local_2c = 1;
  local_30 = &DAT_06006340;
  piVar1 = param_1 + 0x4f;
  sub_08002D5C(piVar1,param_1 + 3,6,7);
  iVar2 = __call_via_r2(param_1,local_18,*(int *)(*param_1 + 0x5c) + *param_1);
  if (iVar2 <= param_1[0x48]) {
    param_1[0x48] = iVar2 + -1;
  }
  __call_via_r3(param_1,local_18,param_1[0x48],*(int *)(*param_1 + 0x60) + *param_1);
  if (param_1[0x48] == 0) {
    sub_08002DC8(local_20);
  }
  else {
    sub_08002DB6(local_20);
  }
  if (param_1[0x48] == iVar2 + -1) {
    sub_08002DC8(piVar1);
  }
  else {
    sub_08002DB6(piVar1);
  }
  local_30 = (undefined *)0x3;
  local_2c = 4;
  uStack_28 = 5;
  uStack_24 = 7;
  sub_0801F508(&local_30,&DAT_0600e000,0x181);
  local_30 = (undefined *)0x3;
  local_2c = 0xc;
  uStack_28 = 5;
  uStack_24 = 0xf;
  sub_0801F508(&local_30,&DAT_0600e000,0x18d);
  REG_DMA3SAD = 0x600e000;
  REG_DMA3DAD = 0x600f000;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8400;
  return;
}


/* sub_08002A46 @ 0x08002A46 */

void sub_08002A46(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1,param_4);
  return;
}


/* sub_08002A5A @ 0x08002A5A */

undefined4 sub_08002A5A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 0x68) + *param_1,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  piVar3 = param_1 + 0x4f;
  piVar2 = param_1 + 2;
  if ((char)param_1[2] == '\0') {
    iVar1 = sub_08002E28(param_1 + 0x49,piVar2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = sub_08002E28(piVar3,piVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x49,piVar2);
    if (iVar1 != 0) {
      __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1);
      param_1[0x48] = param_1[0x48] + -1;
      sub_080022FA(param_1);
      sub_0800233E(param_1);
      __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x38) + *param_1);
      return 1;
    }
    iVar1 = sub_08002DDA(piVar3,piVar2);
    if (iVar1 != 0) {
      __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1);
      param_1[0x48] = param_1[0x48] + 1;
      sub_080022FA(param_1);
      sub_0800233E(param_1);
      __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x38) + *param_1);
      return 1;
    }
  }
  return 0;
}


/* sub_08002B30 @ 0x08002B30 */

void sub_08002B30(void)

{
  return;
}


/* sub_08002B32 @ 0x08002B32 */

void sub_08002B32(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 5) {
    sub_0801F394(&gUnknown_081D9BE4);
  }
  else if (param_3 == 6) {
    sub_0801F394(&gUnknown_081D9BC0);
  }
  return;
}


/* sub_08002B6C @ 0x08002B6C */

void sub_08002B6C(int param_1,int param_2)

{
  int iVar1;
  int a2;
  int a3;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x2c) = 0x60;
  *(undefined4 *)(iVar1 + 0x30) = 0x18;
  *(undefined4 *)(iVar1 + 0x34) = 0x900;
  *(undefined4 *)(iVar1 + 0x18) = 0x60;
  *(undefined4 *)(iVar1 + 0x1c) = 0x18;
  iVar1 = *(int *)(param_1 + 8);
  a3 = 0x10;
  a2 = 8;
  *(undefined4 *)(iVar1 + 0x2c) = 8;
  *(undefined4 *)(iVar1 + 0x30) = 0x10;
  *(undefined4 *)(iVar1 + 0x34) = 0x80;
  *(undefined4 *)(iVar1 + 0x18) = 8;
  *(undefined4 *)(iVar1 + 0x1c) = 0x10;
  iVar2 = -param_2 + 1;
  iVar1 = sub_08001DEA(&DAT_03000e88,*(undefined4 *)(param_1 + 0x10));
  iVar3 = iVar2 * 4;
  sub_080236A8(*(int *)(*(int *)(param_1 + 8) + 0x24),*(int *)(&DAT_081d5e68 + iVar3),a2,a3);
  sub_080236A8(*(int *)(*(int *)(param_1 + 4) + 0x24),*(int *)(&DAT_081d603c + iVar3),a2,a3);
  local_24 = iVar1 * 7 + 0x10;
  local_1c = iVar1 * 7 + 0x18;
  local_18 = -param_2 + 0x11;
  local_20 = iVar2;
  sub_080211C8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 8) + 0x24),&local_24)
  ;
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}


/* sub_08002BF2 @ 0x08002BF2 */

int sub_08002BF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return param_1 + 0x14;
}


/* sub_08002BFE @ 0x08002BFE */

undefined4 sub_08002BFE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = -((int)((uint)DAT_030022b0 << 0x1a) >> 0x1f);
  if (iVar2 == 0) {
    if ((int)((uint)DAT_030022b0 << 0x1b) < 0) {
      iVar2 = sub_08001DEA(&DAT_03000e88,param_1[4],0,0x24c,param_4);
      if (iVar2 < 8) {
        sub_08001E06(&DAT_03000e88,param_1[4],iVar2 + 1);
        __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
        sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
      }
      else {
        sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1694,0x40,0);
      }
    }
    uVar1 = 0;
  }
  else {
    iVar2 = sub_08001DEA(&DAT_03000e88,param_1[4],iVar2,0x24c,param_4);
    if (iVar2 == 0) {
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1694,0x40,0);
    }
    else {
      sub_08001E06(&DAT_03000e88,param_1[4],iVar2 + -1);
      __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
      sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_08002CB8 @ 0x08002CB8 */

void sub_08002CB8(int param_1,int param_2)

{
  int iVar1;
  int a2;
  int a3;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x2c) = 0x60;
  *(undefined4 *)(iVar1 + 0x30) = 0x18;
  *(undefined4 *)(iVar1 + 0x34) = 0x900;
  *(undefined4 *)(iVar1 + 0x18) = 0x60;
  *(undefined4 *)(iVar1 + 0x1c) = 0x18;
  iVar1 = *(int *)(param_1 + 8);
  a3 = 0x10;
  a2 = 8;
  *(undefined4 *)(iVar1 + 0x2c) = 8;
  *(undefined4 *)(iVar1 + 0x30) = 0x10;
  *(undefined4 *)(iVar1 + 0x34) = 0x80;
  *(undefined4 *)(iVar1 + 0x18) = 8;
  *(undefined4 *)(iVar1 + 0x1c) = 0x10;
  iVar2 = -param_2 + 1;
  iVar1 = sub_08001DEA(&DAT_03000e88,*(undefined4 *)(param_1 + 0x10));
  iVar3 = iVar2 * 4;
  sub_080236A8(*(int *)(*(int *)(param_1 + 8) + 0x24),*(int *)(&DAT_081d5e68 + iVar3),a2,a3);
  sub_080236A8(*(int *)(*(int *)(param_1 + 4) + 0x24),*(int *)(&DAT_081d603c + iVar3),a2,a3);
  local_24 = iVar1 * 7 + 0x10;
  local_1c = iVar1 * 7 + 0x18;
  local_18 = -param_2 + 0x11;
  local_20 = iVar2;
  sub_080211C8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 8) + 0x24),&local_24)
  ;
  sub_080212F2(*(undefined4 *)(param_1 + 4),0x95);
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}


/* sub_08002D5C @ 0x08002D5C */

void sub_08002D5C(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_6 == 0) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined **)(param_1 + 0x10) = &gUnknown_081D8FD4 + param_4 * 0x10;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  return;
}


/* sub_08002D7E @ 0x08002D7E */

void sub_08002D7E(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  *(int *)(iVar1 + 0x2c) = iVar2;
  *(int *)(iVar1 + 0x30) = iVar3;
  *(int *)(iVar1 + 0x34) = iVar3 * iVar2;
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 0x1c) = iVar3;
  iVar1 = (uint)*(byte *)(param_1 + 8) * 4;
  sub_080236A8(*(int *)(*(int *)(param_1 + 4) + 0x24),
               *(int *)(iVar1 + **(int **)(param_1 + 0x10) + 4),iVar1,iVar3 * iVar2);
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}


/* sub_08002DB6 @ 0x08002DB6 */

void sub_08002DB6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = *(int *)*param_1;
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_08002DC8 @ 0x08002DC8 */

void sub_08002DC8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 2) = 2;
  iVar1 = *(int *)*param_1;
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_08002DDA @ 0x08002DDA */

undefined4 sub_08002DDA(int *param_1,char *param_2)

{
  if (*(char *)((int)param_1 + 9) != *param_2) {
    return 0;
  }
  if (((uint)DAT_030022b2 & *(uint *)(param_1[4] + 0xc)) != 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    __call_via_r1(param_1,*(int *)*param_1 + *param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    *param_2 = '\0';
    return 1;
  }
  return 0;
}


/* sub_08002E28 @ 0x08002E28 */

undefined4 sub_08002E28(int *param_1,undefined1 *param_2)

{
  if (((uint)DAT_030022b0 & *(uint *)(param_1[4] + 0xc)) == 0) {
    return 0;
  }
  if ((char)param_1[2] == '\x02') {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1694,0x40,0);
    return 1;
  }
  *param_2 = *(undefined1 *)((int)param_1 + 9);
  *(undefined1 *)(param_1 + 2) = 1;
  __call_via_r1(param_1,*(int *)*param_1 + *param_1);
  return 1;
}


/* sub_08002E70 @ 0x08002E70 */

void sub_08002E70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint a2;
  int a3;
  undefined1 auStack_30c [768];
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  a3 = iVar3 * iVar2;
  *(int *)(iVar1 + 0x2c) = iVar2;
  *(int *)(iVar1 + 0x30) = iVar3;
  *(int *)(iVar1 + 0x34) = a3;
  *(int *)(iVar1 + 0x18) = iVar2;
  *(int *)(iVar1 + 0x1c) = iVar3;
  a2 = (uint)*(byte *)(param_1 + 9);
  __call_via_r5(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 4) + 0x24));
  sub_080236A8((int)auStack_30c,
               *(int *)((uint)*(byte *)(param_1 + 8) * 4 + **(int **)(param_1 + 0x10) + 4),a2,a3);
  sub_080236C0(*(int *)(param_1 + 4),(int)auStack_30c);
  sub_080236B4(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc));
  return;
}


/* sub_08002ECA @ 0x08002ECA */

void sub_08002ECA(void)

{
  sub_0801F394(&gUnknown_081D918C);
  return;
}


/* sub_08002EE4 @ 0x08002EE4 */

undefined4 * sub_08002EE4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1d0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08002244(param_1);
  *param_1 = &_08023CD4;
  sub_08020E5C(param_1 + 0x48,0x60,0x18);
  sub_08020E5C(param_1 + 0x56,8,0x10);
  *(undefined1 *)(param_1 + 100) = DAT_03000e88;
  *(undefined1 *)((int)param_1 + 0x191) = DAT_03000e89;
  *(undefined1 *)((int)param_1 + 0x192) = DAT_03000e8a;
  *(undefined1 *)((int)param_1 + 0x193) = DAT_03000e8b;
  sub_080220CC(param_1 + 0x65,param_1 + 0x74,0x14,0x8026605);
  param_1[0x47] = 0;
  return param_1;
}


/* sub_08002F54 @ 0x08002F54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08002F54(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023CD4;
  if (param_1[100] != _DAT_03000e88) {
    sub_08001EC0(&DAT_03000e88);
  }
  sub_08020EAA(param_1 + 0x56,0);
  sub_08020EAA(param_1 + 0x48,0);
  sub_08020EAA(param_1 + 0x1f,0);
  sub_08020EAA(param_1 + 0x11,0);
  sub_08020EAA(param_1 + 3,0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_08002FBA @ 0x08002FBA */

undefined4 sub_08002FBA(void)

{
  return 1;
}


/* sub_08002FBE @ 0x08002FBE */

undefined4 sub_08002FBE(void)

{
  return 4;
}


/* sub_08002FC2 @ 0x08002FC2 */

void sub_08002FC2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar3 * 0x14 + param_1 + 0x194);
    piVar2 = (int *)*piVar1;
    __call_via_r2(piVar1,*(int *)(param_1 + 0x11c) == iVar3,*piVar2 + (int)piVar2,
                  *(int *)(param_1 + 0x11c),param_4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}


/* sub_08002FF8 @ 0x08002FF8 */

void sub_08002FF8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ushort local_54 [4];
  undefined1 local_4c [4];
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined4 local_18;
  
  sub_08020E5C(local_4c,0x68,0x40);
  local_54[0] = 10;
  local_54[1] = 0xb;
  local_54[2] = 0xc;
  local_54[3] = 0;
  local_40 = &gUnknown_08028724;
  local_24 = 1;
  local_2c = 0x8020ec3;
  local_4c[0] = 0;
  sub_08021F18(local_28,0x95,local_18);
  iVar3 = 0;
  do {
    local_44 = iVar3 * 0x18 + 0xb;
    local_48 = 0;
    local_23 = 0x29;
    if (*(int *)(param_1 + 0x11c) != iVar3) {
      local_23 = 2;
    }
    sub_0801F636(local_4c,*(undefined4 *)(&gUnknown_080E2840 + (uint)local_54[iVar3] * 4));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  sub_080236B4((int)local_4c,0x6007e40);
  sub_08020EAA(local_4c,0);
  sub_08020E5C(local_4c,0xd0,8);
  local_40 = &gUnknown_08028724;
  local_24 = 1;
  local_2c = 0x8020ec3;
  sub_08021F18(local_28,0x95,local_18);
  local_4c[0] = 0;
  local_23 = 0x29;
  if (*(int *)(param_1 + 0x11c) != 3) {
    local_23 = 2;
  }
  local_48 = 0;
  local_44 = 7;
  sub_0801F636(local_4c,"Sleep");
  local_4c[0] = 2;
  local_23 = 0x29;
  if (*(int *)(param_1 + 0x11c) != 4) {
    local_23 = 2;
  }
  local_44 = 7;
  local_48 = 0xd0;
  sub_0801F636(local_4c,"Credits");
  sub_080236B4((int)local_4c,0x6009840);
  sub_08020EAA(local_4c,0);
  iVar3 = 0;
  do {
    piVar1 = (int *)(iVar3 * 0x14 + param_1 + 0x194);
    piVar2 = (int *)*piVar1;
    __call_via_r2(piVar1,*(int *)(param_1 + 0x11c) == iVar3,*piVar2 + (int)piVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  REG_DMA3SAD = 0x600e000;
  REG_DMA3DAD = 0x600f000;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8400;
  return;
}


/* sub_0800313C @ 0x0800313C */

void sub_0800313C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = 2;
  local_20 = 4;
  local_1c = 0xf;
  local_18 = 0xc;
  sub_0801F508(&local_24,&DAT_0600e000,0x1f9);
  local_24 = 2;
  local_20 = 0xe;
  local_1c = 0x1c;
  local_18 = 0xf;
  sub_0801F508(&local_24,&DAT_0600e000,0x261);
  local_24 = 0x10;
  local_20 = 4;
  local_1c = 0x1c;
  local_18 = 7;
  sub_0801F508(&local_24,&DAT_0600e000,0x18d);
  local_24 = 0x10;
  local_20 = 7;
  local_1c = 0x1c;
  local_18 = 10;
  sub_0801F508(&local_24,&DAT_0600e000,0x1b1);
  local_24 = 0x10;
  local_1c = 0x1c;
  local_18 = 0xd;
  local_20 = 10;
  sub_0801F508(&local_24,&DAT_0600e000,0x1d5);
  iVar2 = param_1 + 0x158;
  iVar1 = param_1 + 0x120;
  sub_08002BF2(param_1 + 0x194,iVar1,iVar2,&DAT_06006340,0);
  sub_08002BF2(param_1 + 0x1a8,iVar1,iVar2,&DAT_06006c40,1);
  sub_08002BF2(param_1 + 0x1bc,iVar1,iVar2,&DAT_06007540,2);
  sub_08002FF8(param_1);
  return;
}


/* sub_08003258 @ 0x08003258 */

undefined4 sub_08003258(void)

{
  return 0x11;
}


/* sub_0800325C @ 0x0800325C */

undefined4 sub_0800325C(void)

{
  return 4;
}


/* sub_08003260 @ 0x08003260 */

undefined4 sub_08003260(void)

{
  return 0xe;
}


/* sub_08003264 @ 0x08003264 */

void sub_08003264(void)

{
  sub_08004348(0);
  return;
}


/* sub_0800326E @ 0x0800326E */

void sub_0800326E(void)

{
  sub_080049FC(0);
  return;
}


/* sub_08003278 @ 0x08003278 */

undefined4 sub_08003278(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined *local_18;
  
  switch(*(undefined4 *)(param_1 + 0x11c)) {
  case 0:
    iVar2 = sub_08002BFE(param_1 + 0x194);
    if (iVar2 != 0) {
      return 1;
    }
    break;
  case 1:
    iVar2 = sub_08002BFE(param_1 + 0x1a8);
    if (iVar2 != 0) {
      return 1;
    }
    break;
  case 2:
    iVar2 = sub_08002BFE(param_1 + 0x1bc);
    if (iVar2 != 0) {
      return 1;
    }
    break;
  case 3:
    if (((DAT_030022b0 & 1) != 0) || ((int)((uint)DAT_030022b0 << 0x1c) < 0)) {
      local_24 = 0x800d765;
      local_18 = &gUnknown_083B65E0;
      local_20 = 0x8000;
      local_1e = 0x8000;
      local_1c = 0x7fff;
      local_1a = 0x7fff;
      uVar3 = sub_0800D7E0(auStack_28);
      iVar2 = DAT_03001fe0 * 4;
      DAT_03001fe0 = DAT_03001fe0 + 1;
      *(undefined4 *)(&DAT_03001fe4 + iVar2) = uVar3;
      sub_08002726(param_1);
    }
    if (((int)((uint)DAT_030022b0 << 0x1a) < 0) || ((int)((uint)DAT_030022b0 << 0x1b) < 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 4;
      sub_08002FF8(param_1);
      sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
      return 1;
    }
    break;
  case 4:
    uVar1 = (uint)DAT_030022b0;
    if (((int)(uVar1 << 0x1a) < 0) || ((int)(uVar1 << 0x1b) < 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 3;
      sub_08002FF8(param_1);
      sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
      return 1;
    }
    if (((DAT_030022b0 & 1) != 0) || ((int)(uVar1 << 0x1c) < 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 10;
      *(undefined1 *)(param_1 + 5) = 2;
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E161C,0x40,0);
      REG_BLDCNT = 0x84e;
    }
  }
  if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
    if (*(int *)(param_1 + 0x11c) == 4) {
      *(undefined4 *)(param_1 + 0x11c) = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x11c) + -1;
      *(int *)(param_1 + 0x11c) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x11c) = 3;
      }
    }
    sub_08002FF8(param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    uVar3 = 1;
  }
  else if ((int)((uint)DAT_030022b0 << 0x18) < 0) {
    iVar2 = *(int *)(param_1 + 0x11c) + 1;
    *(int *)(param_1 + 0x11c) = iVar2;
    if (3 < iVar2) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    sub_08002FF8(param_1);
    sub_0801FC9C(&DAT_03002c80,&DAT_080e17fc,0x40,0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_08003426 @ 0x08003426 */

undefined4 sub_08003426(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1[0x47] == 10) {
    sub_08001F04(0,0,param_3,param_4,param_4);
    sub_0801F2F4();
    param_1[0x47] = 3;
    __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08002928(param_1);
  }
  return uVar1;
}


/* sub_08003480 @ 0x08003480 */

undefined4 * sub_08003480(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x170), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08002244(param_1);
  puVar1 = param_1 + 0x47;
  *puVar1 = &_0802419C;
  *param_1 = &_08024364;
  *puVar1 = &DAT_080243d0;
  param_1[0x49] = &_08025B7C;
  param_1[0x4f] = &_08025B7C;
  param_1[0x48] = 0;
  param_1[0x4e] = puVar1;
  param_1[0x54] = puVar1;
  *param_1 = &_08023B3C;
  *puVar1 = &DAT_08023ba8;
  piVar3 = param_1 + 0x55;
  *piVar3 = 0;
  uVar2 = 0;
  do {
    if (((&DAT_03000eb0)[uVar2 * 7] & 1) != 0) {
      if (DAT_03000e90 == uVar2) {
        param_1[0x45] = *piVar3;
      }
      iVar4 = *piVar3;
      *piVar3 = iVar4 + 1;
      piVar3[iVar4 + 1] = uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return param_1;
}


/* sub_0800350A @ 0x0800350A */

undefined4 sub_0800350A(int param_1,int param_2)

{
  if (*(int *)(param_2 * 4 + param_1 + 0x158) == 5) {
    return 1;
  }
  return 4;
}


/* sub_08003520 @ 0x08003520 */

void sub_08003520(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 auStack_14c [240];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  iVar2 = *(int *)(param_2 * 4 + param_1 + 0x158);
  if (param_3 == 0) {
    uVar1 = (&DAT_03000eb0)[*(int *)(param_2 * 4 + param_1 + 0x158) * 7] & 8;
  }
  else {
    uVar1 = (&DAT_03000eb0)[*(int *)(param_2 * 4 + param_1 + 0x158) * 7] & 0x10;
  }
  sub_08020E5C(&uStack_4c,0xd0,0x58);
  uStack_5c = 2;
  uStack_58 = 4;
  uStack_54 = 0x1c;
  uStack_50 = 0xf;
  sub_0801F508(&uStack_5c,&DAT_0600e000,0x1a5);
  sub_0801F394(&gUnknown_081D99E0,uStack_28);
  puStack_40 = &gUnknown_08028724;
  uStack_24 = 1;
  uStack_2c = 0x8020ec3;
  uStack_4c = 0;
  uStack_4b = 8;
  uStack_23 = 0x29;
  if (uVar1 == 0) {
    uStack_44 = 0xb;
    uStack_48 = 0x20;
    sub_0801F636(&uStack_4c,"Special Energy Attack");
    uStack_23 = 2;
    uStack_44 = 0x17;
    uStack_48 = 0x20;
    sub_0801F702(&uStack_4c,0xa8,"This technique is not available yet");
  }
  else {
    sub_0801F394(&gUnknown_086FF614,auStack_14c);
    uStack_15c = 0x1f;
    uStack_158 = 3;
    uStack_154 = 0x33;
    uStack_150 = 0xd;
    sub_080211C8(&uStack_4c,auStack_14c,&uStack_15c);
    sub_0801F394((&PTR_gUnknown_086FF6D0_081d9504)[iVar2 * 2 + param_3],auStack_14c);
    uStack_15c = 0x20;
    uStack_158 = 4;
    uStack_154 = 0x32;
    uStack_150 = 0xc;
    sub_080211C8(&uStack_4c,auStack_14c,&uStack_15c);
    uStack_48 = 0x38;
    uStack_44 = 0xb;
    sub_0801F636(&uStack_4c,
                 *(undefined4 *)
                  (&gUnknown_080E2840 +
                  ((uint)((*(int *)(&DAT_081d94d4 + param_3 * 4) + iVar2) * 0x10000) >> 0xe)));
    uStack_23 = 2;
    uStack_48 = 0x20;
    uStack_44 = 0x17;
    sub_0801F702(&uStack_4c,0xa8,
                 *(undefined4 *)
                  (&gUnknown_080E2840 +
                  ((uint)((*(int *)(&DAT_081d94dc + param_3 * 4) + iVar2) * 0x10000) >> 0xe)));
  }
  sub_080236B4((int)&uStack_4c,0x6006940);
  sub_08020EAA(&uStack_4c,0);
  return;
}


/* sub_08003684 @ 0x08003684 */

void sub_08003684(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  uint local_18;
  
  iVar1 = *(int *)(param_2 * 4 + param_1 + 0x158);
  local_18 = (&DAT_03000eb0)[iVar1 * 7] & 4;
  sub_08020E5C(&local_50,0xd0,0x58);
  local_5c = 4;
  local_58 = 0x1c;
  local_54 = 0xf;
  local_60 = 2;
  sub_0801F508(&local_60,&DAT_0600e000,0x1a5);
  sub_0801F394(&gUnknown_081D99E0,local_2c);
  local_44 = &gUnknown_08028724;
  local_28 = 1;
  local_30 = 0x8020ec3;
  local_50 = 0;
  local_4f = 8;
  local_48 = 0xb;
  local_4c = 0x20;
  local_27 = 0x29;
  if (local_18 == 0) {
    sub_0801F636(&local_50,"Special Melee Attack");
    local_48 = 0x17;
    local_4c = 0x20;
    local_27 = 2;
    sub_0801F702(&local_50,0xa8,"This technique is not available yet");
  }
  else {
    sub_0801F636(&local_50,
                 *(undefined4 *)(&gUnknown_080E2840 + ((uint)((iVar1 + 0x9d) * 0x10000) >> 0xe)));
    local_48 = 0x17;
    local_4c = 0x20;
    local_27 = 2;
    sub_0801F702(&local_50,0xa8,
                 *(undefined4 *)(&gUnknown_080E2840 + ((uint)((iVar1 + 0xa2) * 0x10000) >> 0xe)));
  }
  sub_080236B4((int)&local_50,0x6006940);
  sub_08020EAA(&local_50,0);
  return;
}


/* sub_0800379C @ 0x0800379C */

void sub_0800379C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  int local_f4 [3];
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined4 local_98;
  undefined1 auStack_94 [36];
  undefined4 local_70;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 *local_24;
  uint *local_20;
  int iStack_1c;
  int local_18;
  
  local_20 = (uint *)(param_2 * 4 + param_1 + 0x158);
  iVar1 = *local_20 * 0x1c;
  psVar3 = (short *)(&DAT_03000e9c + iVar1);
  iStack_1c = param_1;
  local_18 = param_2;
  sub_08020E5C(local_5c,0xd0,0x58);
  sub_08020E5C(auStack_94,0x40,0x40);
  sub_08020E5C(local_cc,0x40,8);
  local_24 = &local_3c;
  local_50 = &gUnknown_08028724;
  local_33 = 2;
  local_34 = 1;
  local_3c = 0x8020ec3;
  local_5c[0] = 2;
  sub_0801F394(&gUnknown_081D9638,local_38);
  local_d0 = sub_08004214(psVar3);
  local_c0 = &gUnknown_08028724;
  local_a3 = 0x29;
  local_a4 = 1;
  local_ac = 0x8020ec3;
  local_c8 = 0x20;
  local_c4 = 6;
  local_cc[0] = 1;
  sub_08021F18(local_a8,0x95,local_98);
  sub_0801F6D8(local_cc,"Level: %d",local_d0);
  local_58 = 0x3b;
  local_54 = 0xf;
  sub_0801F636(local_5c,&gUnknown_080E2D2F);
  local_58 = 0x88;
  local_54 = 0x17;
  sub_0801F6D8(local_5c,"%d/%d",(int)*psVar3,(int)*(short *)(&DAT_03000e9e + iVar1));
  local_d8 = __16__rt_sdiv((int)*(short *)(&DAT_03000e9e + iVar1),*psVar3 * 0x4a);
  local_d8 = local_d8 + 0x3e;
  local_dc = 8;
  local_d4 = 0x10;
  local_e0 = 0x3e;
  sub_0802130A(local_5c,&local_e0,5);
  local_58 = 0x3b;
  local_54 = 0x1f;
  sub_0801F636(local_5c,&gUnknown_080E2D32);
  local_58 = 0x88;
  local_54 = 0x27;
  sub_0801F6D8(local_5c,"%d/%d",(int)*(short *)(&DAT_03000ea0 + iVar1),
               (int)*(short *)(&DAT_03000ea2 + iVar1));
  local_d8 = __16__rt_sdiv((int)*(short *)(&DAT_03000ea2 + iVar1),
                           *(short *)(&DAT_03000ea0 + iVar1) * 0x4a);
  local_d8 = local_d8 + 0x3e;
  local_dc = 0x18;
  local_d4 = 0x20;
  local_e0 = 0x3e;
  sub_0802130A(local_5c,&local_e0,4);
  uVar2 = sub_0801F08C(600);
  sub_0801F394(&gUnknown_086F869C,uVar2);
  local_e4 = (uint)(*(ushort *)(&DAT_03000ea6 + iVar1) >> 8);
  uVar4 = (uint)(*(ushort *)(&DAT_03000ea8 + iVar1) >> 8);
  uVar5 = (uint)(*(ushort *)(&DAT_03000eaa + iVar1) >> 8);
  if ((*local_20 == (uint)DAT_03000e90) && (DAT_03001fa8 != 0)) {
    local_e4 = (uint)*(byte *)(DAT_03001fa8 + 0x160);
    uVar4 = (uint)*(byte *)(DAT_03001fa8 + 0x161);
    uVar5 = (uint)*(byte *)(DAT_03001fa8 + 0x162);
  }
  local_58 = 0x3b;
  local_54 = 0x2f;
  sub_0801F636(local_5c,&gUnknown_080E2D35);
  local_58 = 0x88;
  local_54 = 0x37;
  sub_0801F6D8(local_5c,"%d/100",local_e4);
  local_e0 = 0x3e;
  local_dc = 0x28;
  local_d8 = 0x4b;
  if ((int)local_e4 < 0x65) {
    local_d8 = ((int)local_e4 >> 2) * 3;
  }
  local_d8 = local_d8 + 0x3e;
  local_d4 = 0x30;
  sub_08021188(local_5c,uVar2,&local_e0,0x4b);
  local_58 = 0x3b;
  local_54 = 0x3f;
  sub_0801F636(local_5c,&gUnknown_080E2D39);
  local_58 = 0x88;
  local_54 = 0x47;
  sub_0801F6D8(local_5c,"%d/100",uVar4);
  local_e0 = 0x3e;
  local_d8 = 0x4b;
  local_dc = 0x38;
  if (uVar4 < 0x65) {
    local_d8 = ((int)uVar4 >> 2) * 3;
  }
  local_d8 = local_d8 + 0x3e;
  local_d4 = 0x40;
  sub_08021188(local_5c,uVar2,&local_e0,0x4b);
  local_58 = 0x3b;
  local_54 = 0x4f;
  sub_0801F636(local_5c,&gUnknown_080E2D3D);
  local_58 = 0x88;
  local_54 = 0x57;
  sub_0801F6D8(local_5c,"%d/100",uVar5);
  local_e0 = 0x3e;
  local_d8 = 0x4b;
  local_dc = 0x48;
  if (uVar5 < 0x65) {
    local_d8 = ((int)uVar5 >> 2) * 3;
  }
  local_d8 = local_d8 + 0x3e;
  local_d4 = 0x50;
  sub_08021188(local_5c,uVar2,&local_e0,0x4b);
  sub_0801F110(uVar2);
  local_54 = 0x4f;
  local_58 = 0xd0;
  sub_0801F6D8(local_5c,&_08003B2C,*(undefined4 *)(&DAT_03000eac + iVar1));
  if (local_d0 != 0x32) {
    local_58 = 0xd0;
    local_54 = 0x57;
    uVar2 = sub_08004230(psVar3);
    sub_0801F6D8(local_5c,&_08003B2C,uVar2);
  }
  *(undefined1 *)((int)local_24 + 9) = 0x29;
  local_5c[0] = 0;
  local_54 = 0x4f;
  local_58 = 0x90;
  sub_0801F636(local_5c,&gUnknown_080E2D41);
  if (local_d0 != 0x32) {
    local_58 = 0x90;
    local_54 = 0x57;
    sub_0801F636(local_5c,&gUnknown_080E2D45);
  }
  uVar2 = sub_0800BDCC((&DAT_081d967f)[(uint)(byte)(&DAT_03000ea4)[iVar1] * 0x14]);
  sub_0801F394(uVar2,local_70);
  sub_080211C8(local_5c,local_70,&DAT_081d94e4);
  local_f4[0] = local_18 * 2 + 4;
  local_f4[1] = 3;
  local_e8 = 4;
  local_f4[2] = local_18 * 2 + 0xc;
  sub_0801F508(&DAT_081d94f4,&DAT_0600e000,0x1a5);
  sub_0801F508(local_f4,&DAT_0600e000,0x2c3);
  sub_080236B4((int)local_5c,0x6006940);
  sub_080236B4((int)local_cc,0x600b0c0);
  sub_08020EAA(local_cc,0);
  sub_08020EAA(auStack_94,0);
  sub_08020EAA(local_5c,0);
  return;
}


/* sub_08003B44 @ 0x08003B44 */

void sub_08003B44(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    sub_0800379C();
  }
  else if (param_3 == 1) {
    sub_08003684();
  }
  else if (param_3 == 2) {
    sub_08003520(param_1,param_2,0,param_4,param_4);
  }
  else if (param_3 == 3) {
    sub_08003520(param_1,param_2,1,param_4,param_4);
  }
  return;
}


/* sub_08003B72 @ 0x08003B72 */

undefined4 sub_08003B72(void)

{
  return 0;
}


/* sub_08003B76 @ 0x08003B76 */

undefined4 sub_08003B76(int param_1)

{
  return *(undefined4 *)(param_1 + 0x154);
}


/* sub_08003B7E @ 0x08003B7E */

uint sub_08003B7E(int param_1,int param_2)

{
  return *(int *)(param_2 * 4 + param_1 + 0x158) + 0x30U & 0xffff;
}


/* sub_08003B90 @ 0x08003B90 */

undefined4 sub_08003B90(void)

{
  return 0xe;
}


/* sub_08003B94 @ 0x08003B94 */

undefined4 sub_08003B94(void)

{
  return 0x10;
}


/* sub_08003B98 @ 0x08003B98 */

undefined4 sub_08003B98(void)

{
  return 0x11;
}


/* sub_08003B9C @ 0x08003B9C */

void sub_08003B9C(void)

{
  sub_080049FC(0);
  return;
}


/* sub_08003BA6 @ 0x08003BA6 */

void sub_08003BA6(void)

{
  sub_08004348(0);
  return;
}


/* sub_08003BB0 @ 0x08003BB0 */

void sub_08003BB0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar1 = 0x60;
    do {
      *param_2 = 0x95959595;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else {
    sub_08002B32();
  }
  return;
}


/* sub_08003BCE @ 0x08003BCE */

void sub_08003BCE(undefined4 param_1,int param_2)

{
  REG_BLDALPHA = (char)(param_2 >> 1);
  return;
}


/* sub_08003BD6 @ 0x08003BD6 */

void sub_08003BD6(undefined4 param_1)

{
  REG_BLDCNT = 0x3e5f;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  sub_08000B3C(param_1);
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  sub_080025E6(param_1);
  return;
}


/* sub_08003C24 @ 0x08003C24 */

void sub_08003C24(undefined1 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 3;
  REG_DMA3SAD = 0x81d9548;
  REG_DMA3DAD = param_1 + 0xc;
  Ram040000dc = 0x2a;
  DAT_040000de = 0x8400;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = param_1 + 0xb4;
  Ram040000dc = 0x19;
  DAT_040000de = 0x8100;
  DAT_03003910 = 0;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = param_1 + 299;
  Ram040000dc = 0x19;
  DAT_040000de = 0x8100;
  return;
}


/* sub_08003C6E @ 0x08003C6E */

void sub_08003C6E(ushort *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sub_0802141C(param_2 * (((uint)param_1[1] - (uint)*param_1) + 1));
  uVar2 = iVar1 + param_2 * (uint)*param_1 + (uint)*param_3;
  *param_3 = (ushort)uVar2;
  if (0x6400 < (uVar2 & 0xffff)) {
    *param_3 = 0x6400;
  }
  return;
}


/* sub_08003CA0 @ 0x08003CA0 */

void sub_08003CA0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  param_1 = param_2 * 0x1c + param_1;
  uVar1 = *(undefined2 *)(param_1 + 0x16);
  uVar2 = *(undefined2 *)(param_1 + 0x18);
  iVar5 = param_4 - param_3;
  uVar3 = *(undefined2 *)(param_1 + 0x1a);
  param_2 = param_2 * 0xc;
  sub_08003C6E(&UNK_081d95f0 + param_2,iVar5,param_1 + 0x16);
  sub_08003C6E(&UNK_081d95f4 + param_2,iVar5,param_1 + 0x18);
  sub_08003C6E(&UNK_081d95f8 + param_2,iVar5,param_1 + 0x1a);
  if (param_3 < param_4) {
    do {
      iVar5 = sub_0802141C(0x51f);
      sVar4 = *(short *)(param_1 + 0xe) +
              (short)((uint)((int)*(short *)(param_1 + 0xe) * (iVar5 + 0xe14)) >> 0x10);
      *(short *)(param_1 + 0xe) = sVar4;
      *(short *)(param_1 + 0xc) = sVar4;
      sVar4 = sub_0802141C(3);
      param_3 = param_3 + 1;
      sVar4 = *(short *)(param_1 + 0x12) + sVar4 + 2;
      *(short *)(param_1 + 0x12) = sVar4;
      *(short *)(param_1 + 0x10) = sVar4;
    } while (param_3 < param_4);
  }
  DAT_03001fc1 = (char)((ushort)*(undefined2 *)(param_1 + 0x16) >> 8) - (char)((ushort)uVar1 >> 8);
  DAT_03001fc2 = (char)((ushort)*(undefined2 *)(param_1 + 0x18) >> 8) - (char)((ushort)uVar2 >> 8);
  DAT_03001fc3 = (char)((ushort)*(undefined2 *)(param_1 + 0x1a) >> 8) - (char)((ushort)uVar3 >> 8);
  return;
}


/* sub_08003D58 @ 0x08003D58 */

void sub_08003D58(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  undefined1 auStack_40 [28];
  undefined2 local_24 [2];
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  iVar3 = param_2 * 0x1c + param_1;
  psVar4 = (short *)(iVar3 + 0xc);
  if (*psVar4 != 0) {
    iStack_20 = param_1;
    iStack_1c = param_2;
    local_18 = param_3;
    iVar1 = sub_08004214(psVar4);
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + local_18;
    iVar3 = sub_08004214(psVar4);
    if (iVar1 != iVar3) {
      sub_08003CA0(param_1,param_2,iVar1,iVar3);
      local_24[0] = 0;
      sub_0800B4AE(auStack_40,&gUnknown_083B6524,local_24,&DAT_081d9540,0);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E16F4,0x40,0);
      puVar2 = (undefined4 *)sub_0801F08C(8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_08023E88;
        puVar2[1] = auStack_40;
      }
      sub_0801F2F4(puVar2);
      if (DAT_03001fa8 != 0) {
        sub_080086A2();
      }
      sub_08006DA6(&DAT_03001120,0x15,0);
      sub_0800C35E(&DAT_03002080);
      sub_0800B4FC(auStack_40,0);
    }
  }
  return;
}


/* sub_08003E00 @ 0x08003E00 */

int sub_08003E00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(uint *)(iVar2 * 0x1c + param_1 + 0x20) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return iVar1;
}


/* sub_08003E1E @ 0x08003E1E */

int sub_08003E1E(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(uint *)(iVar2 * 0x1c + param_1 + 0x20) & 2) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return iVar1;
}


/* sub_08003E22 @ 0x08003E22 */

int sub_08003E22(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(uint *)(iVar1 * 0x1c + param_3 + 0x20) & 2) != 0) {
      param_1 = param_1 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return param_1;
}


/* sub_08003E42 @ 0x08003E42 */

undefined4 sub_08003E42(int param_1,uint param_2)

{
  if (((uint)*(byte *)(((int)param_2 >> 3) + param_1 + 0xb4) & 1 << (param_2 & 7)) != 0) {
    return 1;
  }
  return 0;
}


/* sub_08003E5E @ 0x08003E5E */

void sub_08003E5E(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0xb4) = (byte)(1 << (param_2 & 7)) | *(byte *)(param_1 + 0xb4);
  return;
}


/* sub_08003E74 @ 0x08003E74 */

void sub_08003E74(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & ~(byte)(1 << (param_2 & 7));
  return;
}


/* sub_08003E8A @ 0x08003E8A */

void sub_08003E8A(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) ^ (byte)(1 << (param_2 & 7));
  return;
}


/* sub_08003ED4 @ 0x08003ED4 */

void sub_08003ED4(byte *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*param_1 != uVar1) {
      if (((&gUnknown_081D967C)[(uint)param_1[uVar1 * 0x1c + 0x14] * 0x14] & 1) != 0) {
        param_1[uVar1 * 0x1c + 0x14] = (&DAT_081d9681)[(uint)param_1[uVar1 * 0x1c + 0x14] * 0x14];
      }
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  return;
}


/* sub_08003F06 @ 0x08003F06 */

bool sub_08003F06(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_20;
  
  if (param_1 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = param_1 >> 0x10;
    if (uVar1 == 0) {
      bVar4 = false;
    }
    else {
      uVar2 = 1 << (param_1 & 7);
      uVar3 = (param_1 & 0xffff) >> 3;
      if (uVar1 == 1) {
        if (((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      else if (uVar1 == 2) {
        bVar4 = ((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0;
      }
      else if (uVar1 == 3) {
        if (((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          (&DAT_03000f44)[uVar3] = (&DAT_03000f44)[uVar3] & ~(byte)uVar2;
          bVar4 = true;
        }
      }
      else {
        uStack_64 = 0;
        uStack_20 = 0;
        sub_080092E4(&uStack_64,param_1,0);
        if (iStack_60 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
  }
  return bVar4;
}


/* sub_08003F90 @ 0x08003F90 */

void sub_08003F90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0802153E(param_1,0x164,param_3,param_4,param_4);
  return;
}


/* sub_08003F9C @ 0x08003F9C */

void sub_08003F9C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_180 [356];
  int iStack_1c;
  
  sub_08003C24(auStack_180);
  sub_08021526(&DAT_0300389c,auStack_180,param_2 * 0x168 + 0x10,0x168);
  iVar1 = sub_0802153E(auStack_180,0x164);
  if (iVar1 == iStack_1c) {
    sub_08021EA8(param_1,auStack_180,0x164);
  }
  else {
    sub_08003C24(param_1);
  }
  return;
}


/* sub_08003FEC @ 0x08003FEC */

void sub_08003FEC(undefined4 param_1,int param_2)

{
  undefined1 auStack_180 [356];
  undefined4 uStack_1c;
  
  sub_08003C24(auStack_180);
  sub_08021EA8(auStack_180,param_1,0x164);
  uStack_1c = sub_0802153E(auStack_180,0x164);
  sub_080214C4(&DAT_0300389c,param_2 * 0x168 + 0x10,auStack_180,0x168);
  return;
}


/* sub_08004030 @ 0x08004030 */

void sub_08004030(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auStack_184 [356];
  undefined4 uStack_20;
  
  *(undefined1 *)(param_1 + 2) = DAT_03002080;
  *(undefined1 *)(param_1 + 3) = DAT_03002081;
  *(undefined1 *)(param_1 + 4) = DAT_03002082;
  *(short *)(param_1 + 0x160) = (short)*param_2;
  *(short *)(param_1 + 0x162) = (short)param_2[1];
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  uVar1 = (uint)DAT_03000e8c;
  sub_08003C24(auStack_184);
  sub_08021EA8(auStack_184,param_1,0x164);
  uStack_20 = sub_0802153E(auStack_184,0x164);
  sub_080214C4(&DAT_0300389c,uVar1 * 0x168 + 0x10,auStack_184,0x168);
  return;
}


/* sub_0800409E @ 0x0800409E */

void sub_0800409E(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800EB7C(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3),param_3,param_4,param_4);
  return;
}


/* sub_080040AA @ 0x080040AA */

void sub_080040AA(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (-((int)((uint)bVar1 << 0x1e) >> 0x1f) != param_2) {
    if (param_2 == 0) {
      *(byte *)(param_1 + 1) = bVar1 & 0xfd;
      sub_08006E0A(&DAT_03001120,0x12,0);
      return;
    }
    *(byte *)(param_1 + 1) = bVar1 | 2;
    iVar2 = sub_08008B14(0);
    *(undefined4 *)(iVar2 + 0x24) = 0xfffffff0;
    *(undefined4 *)(iVar2 + 0x20) = 1;
    sub_080068B8(&DAT_03001120);
  }
  return;
}


/* sub_080040EE @ 0x080040EE */

void sub_080040EE(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    iVar4 = *(int *)((&gUnknown_086F6C7C)[iVar3] + 0x14);
    if (0 < iVar4) {
      do {
        pbVar2 = *(byte **)(iVar1 * 4 + (&gUnknown_086F6C7C)[iVar3] + 0x18);
        if ((*pbVar2 == param_2) && (pbVar2[1] == param_3)) {
          param_1 = (uint)(*(ushort *)(pbVar2 + 2) >> 3) + param_1;
          *(byte *)(param_1 + 0xe7) =
               (byte)(1 << (*(ushort *)(pbVar2 + 2) & 7)) | *(byte *)(param_1 + 0xe7);
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    iVar3 = iVar3 + 1;
    if (0x43 < iVar3) {
      return;
    }
  } while( true );
}


/* sub_0800415C @ 0x0800415C */

int sub_0800415C(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = (&gUnknown_086F6C7C)[iVar4];
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      do {
        pcVar3 = *(char **)(iVar2 * 4 + iVar1 + 0x18);
        if ((*pcVar3 == DAT_03002080) && (pcVar3[1] == DAT_03002081)) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    iVar4 = iVar4 + 1;
    if (0x43 < iVar4) {
      return 0;
    }
  } while( true );
}


/* sub_080041A6 @ 0x080041A6 */

undefined4 sub_080041A6(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    iVar4 = *(int *)((&gUnknown_086F6C7C)[iVar3] + 0x14);
    if (0 < iVar4) {
      do {
        pbVar2 = *(byte **)(iVar1 * 4 + (&gUnknown_086F6C7C)[iVar3] + 0x18);
        if ((*pbVar2 == param_2) && (pbVar2[1] == param_3)) {
          if (((uint)*(byte *)((uint)(*(ushort *)(pbVar2 + 2) >> 3) + param_1 + 0xe7) &
              1 << (*(ushort *)(pbVar2 + 2) & 7)) != 0) {
            return 1;
          }
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    iVar3 = iVar3 + 1;
    if (0x43 < iVar3) {
      return 0;
    }
  } while( true );
}


