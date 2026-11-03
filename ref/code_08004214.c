/* Ghidra reference decompilation of code_08004214 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08004214 @ 0x08004214 */

int sub_08004214(int param_1)

{
  int iVar1;
  
  iVar1 = 0x31;
  if (*(int *)(param_1 + 0x10) < 0x15e6b71) {
    do {
      iVar1 = iVar1 + -1;
    } while (*(int *)(param_1 + 0x10) < *(int *)(&gUnknown_081D9834 + iVar1 * 4));
  }
  return iVar1 + 1;
}


/* sub_08004230 @ 0x08004230 */

int sub_08004230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = 0x31;
  if (iVar1 < 0x15e6b71) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar1 < *(int *)(&gUnknown_081D9834 + iVar2 * 4));
  }
  if (0x31 < iVar2 + 1) {
    return 0;
  }
  return *(int *)(&gUnknown_081D9834 + (iVar2 + 1) * 4) - iVar1;
}


/* sub_0800425A @ 0x0800425A */

int sub_0800425A(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) - *(int *)(&DAT_081d9830 + param_2 * 4);
}


/* sub_0800426A @ 0x0800426A */

undefined4 sub_0800426A(int param_1)

{
  return *(undefined4 *)(&DAT_081d9830 + param_1 * 4);
}


/* sub_08004276 @ 0x08004276 */

void sub_08004276(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&DAT_081d9830 + param_2 * 4);
  return;
}


/* sub_08004284 @ 0x08004284 */

bool sub_08004284(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 9);
  if ((*(uint *)(param_1 + 0x14) << 0x19) >> 0x1c == 0) {
    bVar3 = false;
  }
  else {
    do {
      bVar2 = *(char *)(param_1 + 9) + 1U & 3;
      *(byte *)(param_1 + 9) = bVar2;
    } while ((*(uint *)(param_1 + 0x14) & 8 << (uint)bVar2) == 0);
    bVar3 = *(char *)(param_1 + 9) != cVar1;
  }
  return bVar3;
}


/* sub_080042BC @ 0x080042BC */

void sub_080042BC(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((byte)(&DAT_081d967d)[iVar1 * 0x14] == param_2) {
      *(char *)(param_1 + 8) = (char)iVar1;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x16);
  sub_0801F878((byte *)"Unable to find sprite index in character display data\n",
               (byte *)"K:\\Source\\CharacterData.cpp",0x1cd,0);
  return;
}


/* sub_08004348 @ 0x08004348 */

int sub_08004348(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x3b0), (undefined4 *)param_1 != (undefined4 *)0x0))
  {
    sub_08002244((undefined4 *)param_1);
    puVar2 = (undefined4 *)(param_1 + 0x11c);
    *puVar2 = &_0802419C;
    *(undefined **)param_1 = &_08024364;
    *puVar2 = &DAT_080243d0;
    *(undefined **)(param_1 + 0x124) = &_08025B7C;
    *(undefined **)(param_1 + 0x13c) = &_08025B7C;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 **)(param_1 + 0x138) = puVar2;
    *(undefined4 **)(param_1 + 0x150) = puVar2;
    *(undefined **)param_1 = &_0802390C;
    piVar5 = (int *)(param_1 + 0x154);
    *puVar2 = &DAT_08023978;
    *piVar5 = 0;
    iVar3 = 0;
    do {
      bVar1 = (&DAT_03000fbb)[iVar3];
      if (bVar1 != 0) {
        iVar4 = *piVar5;
        *piVar5 = iVar4 + 1;
        piVar5[iVar4 * 3 + 1] = (uint)bVar1;
        piVar5[iVar4 * 3 + 2] = (int)(&gUnknown_086ADE24 + iVar3 * 0x38);
        piVar5[iVar4 * 3 + 3] = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x32);
  }
  return param_1;
}


/* sub_080043E8 @ 0x080043E8 */

int sub_080043E8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* sub_08004624 @ 0x08004624 */

void sub_08004624(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined2 auStack_a8 [18];
  char *pcStack_84;
  char acStack_70 [4];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)(param_1 + 0x154);
  uStack_18 = 0x2c;
  iStack_24 = param_1;
  iStack_1c = param_2;
  sub_08020E5C(acStack_70,0xd0,0x58);
  sub_08020E5C((undefined1 *)auStack_a8,0x20,0x20);
  iStack_38 = 2;
  iStack_34 = 4;
  uStack_30 = 0x1c;
  iStack_2c = 0xf;
  sub_0801F508(&iStack_38,0x600e000,0x1a5);
  sub_0801F394((int *)&gUnknown_081D99E0,iStack_4c);
  puStack_28 = &uStack_50;
  puStack_64 = &gUnknown_08028724;
  uStack_48 = 1;
  uStack_50 = 0x8020ec3;
  acStack_70[1] = 8;
  iVar4 = *piStack_20;
  if (iVar4 == 0) {
    uStack_47 = 5;
    acStack_70[0] = '\x01';
    uStack_6c = 0x68;
    iStack_68 = 0x2c;
    sub_0801F636(acStack_70,(byte *)"Inventory is Empty");
  }
  else {
    iVar7 = iStack_1c + -1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar5 = iVar7 + 2;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4 + -1;
      iVar7 = iVar4 + -3;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar4 = 0;
    if (-1 < iVar5 - iVar7) {
      do {
        piVar1 = piStack_20;
        iVar2 = iVar4 + iVar7;
        piVar6 = piStack_20 + iVar2 * 3 + 1;
        if (iVar7 + iVar4 == iStack_1c) {
          iStack_38 = 0x90;
          iStack_34 = 8;
          uStack_30 = 0xb0;
          iStack_2c = 0x28;
          if (*(int **)(piStack_20[iVar2 * 3 + 2] + 0x2c) != (int *)0x0) {
            sub_0801F394(*(int **)(piStack_20[iVar2 * 3 + 2] + 0x2c),(int)pcStack_84);
            sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
          }
          *(undefined1 *)((int)puStack_28 + 9) = 2;
          acStack_70[0] = '\x01';
          uStack_6c = 0xa0;
          iStack_68 = 0x37;
          sub_0801F702(acStack_70,0x50,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 6) * 4));
          sub_0801F394((int *)&gUnknown_081D9C14,(int)pcStack_84);
          *(undefined1 *)((int)puStack_28 + 9) = 0x29;
        }
        else {
          sub_0801F394((int *)&gUnknown_081D9C48,(int)pcStack_84);
          *(undefined1 *)((int)puStack_28 + 9) = 2;
        }
        iStack_38 = 0x20;
        iVar3 = iVar4 * 0x1c;
        iStack_34 = iVar3 + 8;
        iStack_2c = iVar3 + 0x18;
        uStack_30 = 0x30;
        sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
        if (*(int **)(piVar1[iVar2 * 3 + 2] + 0x28) != (int *)0x0) {
          sub_0801F394(*(int **)(piVar1[iVar2 * 3 + 2] + 0x28),(int)pcStack_84);
          sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
        }
        if (*(char *)(piVar1[iVar2 * 3 + 2] + 3) == '\x01') {
          acStack_70[0] = '\0';
          iStack_68 = iVar3 + 0x13;
          uStack_6c = 0x34;
          sub_0801F636(acStack_70,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 4) * 4));
        }
        else {
          acStack_70[0] = '\0';
          iStack_68 = iVar3 + 0xf;
          uStack_6c = 0x34;
          sub_0801F636(acStack_70,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 4) * 4));
          iStack_68 = iVar3 + 0x17;
          uStack_6c = 0x34;
          sub_0801F6D8(acStack_70,"%d/%d",*piVar6,(uint)*(byte *)(piVar1[iVar2 * 3 + 2] + 3));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar5 - iVar7);
    }
  }
  sub_080236B4((int)acStack_70,0x6006940);
  sub_08020EAA(auStack_a8,0);
  sub_08020EAA((undefined2 *)acStack_70,0);
  return;
}


/* sub_08004630 @ 0x08004630 */

void sub_08004630(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined2 auStack_a8 [18];
  char *pcStack_84;
  char acStack_70 [4];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)(param_1 + 0x154);
  uStack_18 = 0x2c;
  iStack_24 = param_1;
  iStack_1c = param_3;
  sub_08020E5C(acStack_70,0xd0,0x58);
  sub_08020E5C((undefined1 *)auStack_a8,0x20,0x20);
  iStack_38 = 2;
  iStack_34 = 4;
  uStack_30 = 0x1c;
  iStack_2c = 0xf;
  sub_0801F508(&iStack_38,0x600e000,0x1a5);
  sub_0801F394((int *)&gUnknown_081D99E0,iStack_4c);
  puStack_28 = &uStack_50;
  puStack_64 = &gUnknown_08028724;
  uStack_48 = 1;
  uStack_50 = 0x8020ec3;
  acStack_70[1] = 8;
  iVar4 = *piStack_20;
  if (iVar4 == 0) {
    uStack_47 = 5;
    acStack_70[0] = '\x01';
    uStack_6c = 0x68;
    iStack_68 = 0x2c;
    sub_0801F636(acStack_70,(byte *)"Inventory is Empty");
  }
  else {
    iVar7 = iStack_1c + -1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar5 = iVar7 + 2;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4 + -1;
      iVar7 = iVar4 + -3;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar4 = 0;
    if (-1 < iVar5 - iVar7) {
      do {
        piVar1 = piStack_20;
        iVar2 = iVar4 + iVar7;
        piVar6 = piStack_20 + iVar2 * 3 + 1;
        if (iVar7 + iVar4 == iStack_1c) {
          iStack_38 = 0x90;
          iStack_34 = 8;
          uStack_30 = 0xb0;
          iStack_2c = 0x28;
          if (*(int **)(piStack_20[iVar2 * 3 + 2] + 0x2c) != (int *)0x0) {
            sub_0801F394(*(int **)(piStack_20[iVar2 * 3 + 2] + 0x2c),(int)pcStack_84);
            sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
          }
          *(undefined1 *)((int)puStack_28 + 9) = 2;
          acStack_70[0] = '\x01';
          uStack_6c = 0xa0;
          iStack_68 = 0x37;
          sub_0801F702(acStack_70,0x50,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 6) * 4));
          sub_0801F394((int *)&gUnknown_081D9C14,(int)pcStack_84);
          *(undefined1 *)((int)puStack_28 + 9) = 0x29;
        }
        else {
          sub_0801F394((int *)&gUnknown_081D9C48,(int)pcStack_84);
          *(undefined1 *)((int)puStack_28 + 9) = 2;
        }
        iStack_38 = 0x20;
        iVar3 = iVar4 * 0x1c;
        iStack_34 = iVar3 + 8;
        iStack_2c = iVar3 + 0x18;
        uStack_30 = 0x30;
        sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
        if (*(int **)(piVar1[iVar2 * 3 + 2] + 0x28) != (int *)0x0) {
          sub_0801F394(*(int **)(piVar1[iVar2 * 3 + 2] + 0x28),(int)pcStack_84);
          sub_080211C8((int)acStack_70,pcStack_84,&iStack_38);
        }
        if (*(char *)(piVar1[iVar2 * 3 + 2] + 3) == '\x01') {
          acStack_70[0] = '\0';
          iStack_68 = iVar3 + 0x13;
          uStack_6c = 0x34;
          sub_0801F636(acStack_70,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 4) * 4));
        }
        else {
          acStack_70[0] = '\0';
          iStack_68 = iVar3 + 0xf;
          uStack_6c = 0x34;
          sub_0801F636(acStack_70,
                       *(byte **)(&gUnknown_080E2840 +
                                 (uint)*(ushort *)(piVar1[iVar2 * 3 + 2] + 4) * 4));
          iStack_68 = iVar3 + 0x17;
          uStack_6c = 0x34;
          sub_0801F6D8(acStack_70,"%d/%d",*piVar6,(uint)*(byte *)(piVar1[iVar2 * 3 + 2] + 3));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar5 - iVar7);
    }
  }
  sub_080236B4((int)acStack_70,0x6006940);
  sub_08020EAA(auStack_a8,0);
  sub_08020EAA((undefined2 *)acStack_70,0);
  return;
}


/* sub_0800463A @ 0x0800463A */

undefined4 sub_0800463A(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (((DAT_030022b0 & 1) != 0) && (piVar4 = param_1 + 0x55, *piVar4 != 0)) {
    piVar3 = piVar4 + param_3 * 3 + 1;
    if (*(int *)(piVar4[param_3 * 3 + 2] + 0x30) == 0) {
      sub_0801FC9C(0x3002c80,&gUnknown_080E1694,0x40,0);
    }
    else {
      sub_0801FC9C(0x3002c80,&gUnknown_080E161C,0x40,0);
      piVar1 = (int *)sub_08004738((undefined4 *)0x0,piVar4[param_3 * 3 + 2]);
      iVar2 = sub_0801F2F4(piVar1);
      if (iVar2 == 1) {
        iVar2 = __call_via_r1(piVar4[param_3 * 3 + 3],
                              *(undefined **)(piVar4[param_3 * 3 + 2] + 0x30));
        if (iVar2 == 1) {
          (&DAT_03000fbb)[piVar4[param_3 * 3 + 3]] = (&DAT_03000fbb)[piVar4[param_3 * 3 + 3]] + -1;
          iVar2 = *piVar3;
          *piVar3 = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            iVar2 = *piVar4;
            *piVar4 = iVar2 + -1;
            iVar2 = (iVar2 + -1) - param_3;
            if (iVar2 != 0) {
              REG_DMA3SAD = piVar4 + param_3 * 3 + 4;
              REG_DMA3DAD = piVar3;
              Ram040000dc = (short)((uint)(iVar2 * 0xc) >> 2);
              DAT_040000de = 0x8400;
            }
          }
          __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 4) + *param_1));
        }
        else if (iVar2 == 2) {
          sub_08002726((int)param_1);
        }
      }
    }
  }
  return 0;
}


/* sub_08004700 @ 0x08004700 */

undefined4 sub_08004700(void)

{
  return 1;
}


/* sub_08004704 @ 0x08004704 */

undefined4 sub_08004704(void)

{
  return 0x11;
}


/* sub_08004708 @ 0x08004708 */

undefined4 sub_08004708(void)

{
  return 0x10;
}


/* sub_0800470C @ 0x0800470C */

undefined4 sub_0800470C(void)

{
  return 0x11;
}


/* sub_08004710 @ 0x08004710 */

undefined4 sub_08004710(void)

{
  return 4;
}


/* sub_08004714 @ 0x08004714 */

void sub_08004714(void)

{
  sub_08003480(0);
  return;
}


/* sub_0800471E @ 0x0800471E */

void sub_0800471E(void)

{
  sub_08002EE4(0);
  return;
}


/* sub_08004738 @ 0x08004738 */

undefined4 * sub_08004738(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x7c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0802533C;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    param_1[2] = &_0802419C;
    *param_1 = &_08023DDC;
    param_1[2] = &DAT_08023e10;
    sub_08020E5C((undefined1 *)(param_1 + 4),0x98,0x40);
    param_1[0x12] = &_08025B7C;
    param_1[0x18] = &_08025B7C;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[0x17] = param_1 + 2;
    param_1[0x1e] = param_2;
    param_1[0x1d] = param_1 + 2;
  }
  return param_1;
}


/* sub_08004788 @ 0x08004788 */

void sub_08004788(int param_1)

{
  char *a0;
  int *piVar1;
  undefined2 auStack_5c [18];
  char *local_38;
  int local_24 [4];
  
  *(undefined1 **)(param_1 + 0x1c) = &gUnknown_08028724;
  a0 = (char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x39) = 2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0x8020ec3;
  sub_0801F394((int *)&gUnknown_081D5D78,*(int *)(param_1 + 0x34));
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x60;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  sub_0801F6D8(a0,"Use %s?",
               *(undefined4 *)
                (&gUnknown_080E2840 + (uint)*(ushort *)(*(int *)(param_1 + 0x78) + 4) * 4));
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x49;
  *(undefined4 *)(param_1 + 0x18) = 0x2c;
  sub_0801F636(a0,&gUnknown_080E2C58);
  *(undefined4 *)(param_1 + 0x14) = 0x79;
  *(undefined4 *)(param_1 + 0x18) = 0x2c;
  sub_0801F636(a0,&gUnknown_080E2C54);
  local_24[2] = 0x28;
  local_24[3] = 0x28;
  local_24[0] = 8;
  local_24[1] = 8;
  sub_08020E5C((undefined1 *)auStack_5c,0x20,0x20);
  sub_0801F394(*(int **)(*(int *)(param_1 + 0x78) + 0x2c),(int)local_38);
  sub_080211C8((int)a0,local_38,local_24);
  sub_080236B4((int)a0,0x600b0c0);
  DAT_03003910 = 0x100;
  REG_DMA3SAD = 0x3003910;
  REG_DMA3DAD = 0x600e000;
  Ram040000dc = 0x400;
  DAT_040000de = 0x8100;
  local_24[0] = 6;
  local_24[1] = 6;
  local_24[2] = 0x19;
  local_24[3] = 0xe;
  sub_0801F508(local_24,0x600e000,0x2c3);
  local_24[0] = 0x12;
  local_24[1] = 9;
  local_24[2] = 0x15;
  local_24[3] = 0xd;
  sub_0801F508(local_24,0x600e000,0x35b);
  piVar1 = (int *)(param_1 + 0x48);
  sub_08002D5C((int)piVar1,a0,1,0,&DAT_0600d6c0,1);
  __call_via_r1(piVar1,(undefined *)(*(int *)*piVar1 + *piVar1));
  local_24[0] = 0xc;
  local_24[1] = 9;
  local_24[2] = 0xf;
  local_24[3] = 0xd;
  sub_0801F508(local_24,0x600e000,0x367);
  piVar1 = (int *)(param_1 + 0x60);
  sub_08002D5C((int)piVar1,a0,1,1,&DAT_0600d9c0,1);
  __call_via_r1(piVar1,(undefined *)(*(int *)*piVar1 + *piVar1));
  REG_BG0CNT = 0x1c80;
  REG_BLDCNT = 0x2c4e;
  REG_BLDALPHA = 0x10;
  DAT_04000053 = 0;
  sub_08020EAA(auStack_5c,0);
  return;
}


/* sub_080048F0 @ 0x080048F0 */

void sub_080048F0(undefined4 param_1,undefined4 *param_2)

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


/* sub_08004904 @ 0x08004904 */

void sub_08004904(int param_1,undefined2 param_2,undefined2 *param_3)

{
  *param_3 = param_2;
  *(undefined1 *)(param_1 + 5) = 2;
  return;
}


/* sub_0800490C @ 0x0800490C */

undefined4 sub_0800490C(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0xc) == '\0') {
    sub_08002E28((int *)(param_1 + 0x48),pcVar2);
    sub_08002E28((int *)(param_1 + 0x60),pcVar2);
  }
  else {
    iVar1 = sub_08002DDA((int *)(param_1 + 0x48),pcVar2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      REG_DISPCNT = 0xe00;
      *(undefined1 *)(param_1 + 5) = 2;
    }
    iVar1 = sub_08002DDA((int *)(param_1 + 0x60),pcVar2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      REG_DISPCNT = 0xe00;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  return 0;
}


/* sub_08004964 @ 0x08004964 */

undefined1 sub_08004964(int param_1)

{
  REG_BLDCNT = 0x84f;
  return *(undefined1 *)(param_1 + 0xd);
}


/* sub_0800496E @ 0x0800496E */

void sub_0800496E(int param_1,int param_2)

{
  REG_BLDALPHA = '\x10' - (char)(param_2 >> 1);
  if (0xf < param_2) {
    REG_DISPCNT = 0xf00;
    *(undefined1 *)(param_1 + 4) = 0x20;
  }
  return;
}


/* sub_0800498C @ 0x0800498C */

void sub_0800498C(int param_1,int param_2)

{
  REG_BLDALPHA = '\x18' - (char)(param_2 >> 1);
  if (param_2 < 0x11) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


/* sub_080049FC @ 0x080049FC */

int sub_080049FC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_30;
  int *piStack_1c;
  int *piStack_18;
  
  if ((param_1 != 0) || (param_1 = sub_0801F08C(0x444), (undefined4 *)param_1 != (undefined4 *)0x0))
  {
    sub_08002244((undefined4 *)param_1);
    puVar1 = (undefined4 *)(param_1 + 0x11c);
    *puVar1 = &_0802419C;
    *(undefined **)param_1 = &_08024364;
    *puVar1 = &DAT_080243d0;
    *(undefined **)(param_1 + 0x124) = &_08025B7C;
    *(undefined **)(param_1 + 0x13c) = &_08025B7C;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 **)(param_1 + 0x138) = puVar1;
    *(undefined4 **)(param_1 + 0x150) = puVar1;
    piStack_18 = (int *)(param_1 + 0x154);
    *(undefined **)param_1 = &_08023C50;
    *puVar1 = &DAT_08023cbc;
    *piStack_18 = 0;
    piStack_1c = (int *)(param_1 + 0x2b0);
    *piStack_1c = 0;
    iVar3 = 0;
    sub_08020E5C((undefined1 *)(param_1 + 0x40c),0xd0,0x58);
    *(undefined1 **)(param_1 + 0x418) = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0x434) = 1;
    *(undefined4 *)(param_1 + 0x42c) = 0x8020ec3;
    uStack_74 = 0;
    uStack_30 = 0;
    do {
      sub_080092E4(&uStack_74,(byte *)(&DAT_086d68e0)[iVar3 * 4],(undefined1 *)0x0);
      if (iStack_70 == 0) {
        sub_080092E4(&uStack_74,*(byte **)(&UNK_086d68e4 + iVar3 * 0x10),(undefined1 *)0x0);
        if (iStack_70 != 0) {
          iVar2 = *piStack_18;
          *piStack_18 = iVar2 + 1;
          piStack_18[iVar2 * 2 + 1] = (&DAT_086d68e8)[iVar3 * 4];
          piStack_18[iVar2 * 2 + 2] =
               *(int *)(&gUnknown_081D9C80 + (uint)(byte)(&gUnknown_086D68DC)[iVar3 * 0x10] * 4);
        }
      }
      else {
        iVar2 = *piStack_1c;
        *piStack_1c = iVar2 + 1;
        piStack_1c[iVar2 * 2 + 1] = (&DAT_086d68e8)[iVar3 * 4];
        piStack_1c[iVar2 * 2 + 2] = (int)&gUnknown_086D73F8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x2b);
  }
  return param_1;
}


/* sub_08004AEA @ 0x08004AEA */

int sub_08004AEA(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x154) < 3) {
      return 1;
    }
    return *(int *)(param_1 + 0x154) + -2;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x2b0) < 3) {
      return 1;
    }
    return *(int *)(param_1 + 0x2b0) + -2;
  }
  return 1;
}


/* sub_08004B1C @ 0x08004B1C */

void sub_08004B1C(undefined4 param_1,int param_2,undefined4 param_3)

{
  __call_via_r3();
  return;
}


/* sub_08004B30 @ 0x08004B30 */

undefined4 sub_08004B30(void)

{
  return 0;
}


/* sub_08004B34 @ 0x08004B34 */

undefined4 sub_08004B34(void)

{
  return 2;
}


/* sub_08004B38 @ 0x08004B38 */

undefined2 sub_08004B38(undefined4 param_1,int param_2)

{
  return *(undefined2 *)(&DAT_081d9c78 + param_2 * 2);
}


/* sub_08004B42 @ 0x08004B42 */

undefined4 sub_08004B42(void)

{
  return 4;
}


/* sub_08004B46 @ 0x08004B46 */

undefined4 sub_08004B46(void)

{
  return 0xe;
}


/* sub_08004B4A @ 0x08004B4A */

undefined4 sub_08004B4A(void)

{
  return 0x10;
}


/* sub_08004B4E @ 0x08004B4E */

void sub_08004B4E(void)

{
  sub_08002EE4(0);
  return;
}


/* sub_08004B58 @ 0x08004B58 */

void sub_08004B58(void)

{
  sub_08003480(0);
  return;
}


/* sub_08004B62 @ 0x08004B62 */

void sub_08004B62(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  char *a0;
  int iVar2;
  int *piVar3;
  undefined4 uStack_4c;
  char *pcStack_48;
  int iStack_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int *local_20;
  int iStack_1c;
  int iStack_18;
  
  local_3c = 2;
  local_38 = 4;
  local_30 = 0xf;
  local_34 = 0x1c;
  iStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  sub_0801F508(&local_3c,0x600e000,0x1a5);
  sub_0801F394((int *)&gUnknown_081D99E0,*(int *)(param_1 + 0x430));
  a0 = (char *)(param_1 + 0x40c);
  local_28 = param_1 + 0x42c;
  if (*local_20 == 0) {
    *(undefined1 *)(param_1 + 0x435) = 5;
    *a0 = '\x01';
    *(undefined4 *)(param_1 + 0x410) = 0x68;
    *(undefined4 *)(param_1 + 0x414) = 0x2c;
    sub_0801F636(a0,*(byte **)(&gUnknown_080E2840 + param_4 * 4));
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + iStack_1c;
      if (*local_20 <= iVar1) break;
      iStack_2c = iVar2 * 0x1d;
      local_38 = iStack_2c + 7;
      local_34 = 0x2c;
      local_30 = iStack_2c + 0x17;
      piVar3 = local_20 + iVar1 * 2 + 1;
      local_3c = 0x1c;
      sub_080211C8((int)a0,(char *)local_20[iVar1 * 2 + 2],&local_3c);
      pcStack_48 = (char *)*piVar3;
      iVar1 = 0;
      do {
        sub_0801F7FC((int)a0,pcStack_48,0x98,&uStack_4c);
        iVar1 = iVar1 + 1;
      } while (iStack_40 == 0);
      *(undefined1 *)(local_28 + 9) = 0x29;
      *a0 = '\0';
      *(undefined1 *)(param_1 + 0x40d) = 8;
      *(int *)(param_1 + 0x414) = iStack_2c + (iVar1 * -8 + 0x1e >> 1) + 6;
      *(undefined4 *)(param_1 + 0x410) = 0x30;
      sub_0801F702(a0,0x98,(byte *)*piVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  sub_080236B4((int)a0,0x6006940);
  return;
}


/* sub_08004C56 @ 0x08004C56 */

void sub_08004C56(int param_1,int param_2)

{
  int iVar1;
  char *a0;
  int iVar2;
  int *piVar3;
  undefined4 uStack_4c;
  char *pcStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)(param_1 + 0x154);
  uStack_18 = 0x2e;
  iStack_3c = 2;
  iStack_38 = 4;
  iStack_30 = 0xf;
  uStack_34 = 0x1c;
  iStack_24 = param_1;
  iStack_1c = param_2;
  sub_0801F508(&iStack_3c,0x600e000,0x1a5);
  sub_0801F394((int *)&gUnknown_081D99E0,*(int *)(param_1 + 0x430));
  a0 = (char *)(param_1 + 0x40c);
  iStack_28 = param_1 + 0x42c;
  if (*piStack_20 == 0) {
    *(undefined1 *)(param_1 + 0x435) = 5;
    *a0 = '\x01';
    *(undefined4 *)(param_1 + 0x410) = 0x68;
    *(undefined4 *)(param_1 + 0x414) = 0x2c;
    sub_0801F636(a0,(byte *)"No Quests Outstanding");
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + iStack_1c;
      if (*piStack_20 <= iVar1) break;
      iStack_2c = iVar2 * 0x1d;
      iStack_38 = iStack_2c + 7;
      uStack_34 = 0x2c;
      iStack_30 = iStack_2c + 0x17;
      piVar3 = piStack_20 + iVar1 * 2 + 1;
      iStack_3c = 0x1c;
      sub_080211C8((int)a0,(char *)piStack_20[iVar1 * 2 + 2],&iStack_3c);
      pcStack_48 = (char *)*piVar3;
      iVar1 = 0;
      do {
        sub_0801F7FC((int)a0,pcStack_48,0x98,&uStack_4c);
        iVar1 = iVar1 + 1;
      } while (iStack_40 == 0);
      *(undefined1 *)(iStack_28 + 9) = 0x29;
      *a0 = '\0';
      *(undefined1 *)(param_1 + 0x40d) = 8;
      *(int *)(param_1 + 0x414) = iStack_2c + (iVar1 * -8 + 0x1e >> 1) + 6;
      *(undefined4 *)(param_1 + 0x410) = 0x30;
      sub_0801F702(a0,0x98,(byte *)*piVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  sub_080236B4((int)a0,0x6006940);
  return;
}


/* sub_08004CA0 @ 0x08004CA0 */

void sub_08004CA0(int param_1,int param_2)

{
  int iVar1;
  char *a0;
  int iVar2;
  int *piVar3;
  undefined4 uStack_4c;
  char *pcStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)(param_1 + 0x2b0);
  uStack_18 = 0x2f;
  iStack_3c = 2;
  iStack_38 = 4;
  iStack_30 = 0xf;
  uStack_34 = 0x1c;
  iStack_24 = param_1;
  iStack_1c = param_2;
  sub_0801F508(&iStack_3c,0x600e000,0x1a5);
  sub_0801F394((int *)&gUnknown_081D99E0,*(int *)(param_1 + 0x430));
  a0 = (char *)(param_1 + 0x40c);
  iStack_28 = param_1 + 0x42c;
  if (*piStack_20 == 0) {
    *(undefined1 *)(param_1 + 0x435) = 5;
    *a0 = '\x01';
    *(undefined4 *)(param_1 + 0x410) = 0x68;
    *(undefined4 *)(param_1 + 0x414) = 0x2c;
    sub_0801F636(a0,(byte *)"No Quests Finished");
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + iStack_1c;
      if (*piStack_20 <= iVar1) break;
      iStack_2c = iVar2 * 0x1d;
      iStack_38 = iStack_2c + 7;
      uStack_34 = 0x2c;
      iStack_30 = iStack_2c + 0x17;
      piVar3 = piStack_20 + iVar1 * 2 + 1;
      iStack_3c = 0x1c;
      sub_080211C8((int)a0,(char *)piStack_20[iVar1 * 2 + 2],&iStack_3c);
      pcStack_48 = (char *)*piVar3;
      iVar1 = 0;
      do {
        sub_0801F7FC((int)a0,pcStack_48,0x98,&uStack_4c);
        iVar1 = iVar1 + 1;
      } while (iStack_40 == 0);
      *(undefined1 *)(iStack_28 + 9) = 0x29;
      *a0 = '\0';
      *(undefined1 *)(param_1 + 0x40d) = 8;
      *(int *)(param_1 + 0x414) = iStack_2c + (iVar1 * -8 + 0x1e >> 1) + 6;
      *(undefined4 *)(param_1 + 0x410) = 0x30;
      sub_0801F702(a0,0x98,(byte *)*piVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  sub_080236B4((int)a0,0x6006940);
  return;
}


/* sub_08004CAC @ 0x08004CAC */

undefined4 sub_08004CAC(void)

{
  int *piVar1;
  
  sub_080069A4(0x3001120);
  sub_0800BFC0(&DAT_03001fe0);
  if (*(int *)(DAT_030010e0 + 0x3c) == 0) {
    if (((int)((uint)DAT_030022b0 << 0x17) < 0) && ((int)((uint)DAT_03000e91 << 0x1d) < 0)) {
      sub_0801FC9C(0x3002c80,&DAT_080e17cc,0x40,0);
      piVar1 = (int *)sub_0801F08C(0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&_0802462C;
        piVar1[1] = 0x100;
        piVar1[2] = 0x10;
      }
      sub_0801F2F4(piVar1);
      sub_08006F4A(&DAT_03001120);
      piVar1 = (int *)sub_0801F08C(0x80b0);
      if (piVar1 != (int *)0x0) {
        sub_08017A50(piVar1);
        *piVar1 = (int)&_0802536C;
        piVar1[1] = (int)&UNK_080253b4;
      }
      sub_0801F2F4(piVar1);
      sub_08006FA4(&DAT_03001120);
      sub_08005F1A(0x3001090,1);
      piVar1 = (int *)sub_0801F08C(0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&_08024334;
        piVar1[1] = 0;
        piVar1[2] = 0x10;
      }
      sub_0801F2F4(piVar1);
      return 0;
    }
    if (((int)((uint)DAT_030022b0 << 0x1d) < 0) && ((int)((uint)DAT_03000e91 << 0x1d) < 0)) {
      sub_0801FC9C(0x3002c80,&DAT_080e17cc,0x40,0);
      piVar1 = (int *)sub_0801F08C(0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&_0802462C;
        piVar1[1] = 0x100;
        piVar1[2] = 0x10;
      }
      sub_0801F2F4(piVar1);
      sub_08006F4A(&DAT_03001120);
      piVar1 = (int *)sub_0801F08C(0x40c);
      if (piVar1 != (int *)0x0) {
        sub_08018540(piVar1);
        *piVar1 = (int)&_080253CC;
        piVar1[1] = (int)&LAB_08025414;
      }
      sub_0801F2F4(piVar1);
      sub_08006FA4(&DAT_03001120);
      sub_08005F1A(0x3001090,1);
      piVar1 = (int *)sub_0801F08C(0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = (int)&_08024334;
        piVar1[1] = 0;
        piVar1[2] = 0x10;
      }
      sub_0801F2F4(piVar1);
      return 0;
    }
  }
  if (((int)((uint)DAT_030022b0 << 0x1c) < 0) &&
     (*(short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c) != 0)) {
    sub_0801FC9C(0x3002c80,&DAT_080e17f0,0x40,0);
    piVar1 = (int *)sub_0801F08C(0xc);
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)&_0802462C;
      piVar1[1] = 0x100;
      piVar1[2] = 0x10;
    }
    sub_0801F2F4(piVar1);
    sub_08006F4A(&DAT_03001120);
    piVar1 = (int *)sub_0801F08C(0x170);
    if (piVar1 != (int *)0x0) {
      sub_08003480((int)piVar1);
      *piVar1 = (int)&_080248CC;
      piVar1[0x47] = (int)&UNK_08024938;
    }
    sub_0801F2F4(piVar1);
    sub_08006FA4(&DAT_03001120);
    sub_08005F1A(0x3001090,1);
    piVar1 = (int *)sub_0801F08C(0xc);
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)&_08024334;
      piVar1[1] = 0;
      piVar1[2] = 0x10;
    }
    sub_0801F2F4(piVar1);
  }
  return 0;
}


/* sub_08004EA8 @ 0x08004EA8 */

void sub_08004EA8(int *param_1)

{
  __call_via_r1(DAT_03000ff4,(undefined *)(*(int *)*DAT_03000ff4 + *DAT_03000ff4));
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  sub_08006AD8(0x3001120);
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x20) + *param_1));
  return;
}


/* sub_08004EDC @ 0x08004EDC */

void sub_08004EDC(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x24) + *param_1));
  sub_08006250(0x3001090);
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
  return;
}


/* sub_08004F00 @ 0x08004F00 */

void sub_08004F00(void)

{
  sub_08006AA6(0x3001120);
  return;
}


/* sub_08004F14 @ 0x08004F14 */

void sub_08004F14(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = &_08023C44;
    param_1[2] = param_3;
  }
  return;
}


/* sub_08004F32 @ 0x08004F32 */

void sub_08004F32(int *param_1,undefined4 param_2)

{
  undefined1 auStack_810 [2048];
  
  sub_0801F394(*(int **)(param_1[2] + 0x1c),(int)auStack_810);
  REG_DMA3SAD = auStack_810;
  REG_DMA3DAD = &DAT_0600e000 + (uint)*(byte *)(param_1 + 1) * 0x800;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8400;
  __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 8) + *param_1));
  return;
}


/* sub_08004F76 @ 0x08004F76 */

void sub_08004F76(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(iVar4 + 4);
  iVar7 = *(int *)(iVar4 + 0x10);
  iVar8 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(iVar4 + 0x18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] =
       (short)(*(int *)(param_2 + 0xc) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc) +
               *(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x34) * *(int *)(iVar3 + 0x14) >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(iVar6 * iVar5 + iVar7 + iVar8 + iVar2 * iVar4 >> 10);
  return;
}


/* sub_08004FCC @ 0x08004FCC */

void sub_08004FCC(undefined1 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_1;
    *puVar1 = &_08023C44;
    puVar1[2] = param_2;
  }
  return;
}


/* sub_08004FF8 @ 0x08004FF8 */

undefined4 * sub_08004FF8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &_08025FE0;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  uVar1 = __call_via_r0(*(undefined **)(param_2 + 4));
  param_1[3] = uVar1;
  return param_1;
}


/* sub_08005014 @ 0x08005014 */

void sub_08005014(undefined2 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_2;
  return;
}


/* sub_0800501E @ 0x0800501E */

void sub_0800501E(short *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_100c [4096];
  
  sub_080236A8((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + *param_1 * 4 + 4) + 4,param_3,0);
  REG_DMA3SAD = auStack_100c;
  REG_DMA3DAD = (uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000;
  Ram040000dc = (short)(((uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6) >> 2);
  DAT_040000de = 0x8400;
  return;
}


/* sub_08005062 @ 0x08005062 */

void sub_08005062(ushort *param_1)

{
  int iVar1;
  undefined1 auStack_100c [4096];
  
  iVar1 = (param_1[1] - 1) * 0x10000;
  param_1[1] = (ushort)((uint)iVar1 >> 0x10);
  if (iVar1 >> 0x10 == 0) {
    iVar1 = (*param_1 + 1) * 0x10000;
    *param_1 = (ushort)((uint)iVar1 >> 0x10);
    if ((int)(uint)**(byte **)(param_1 + 2) <= iVar1 >> 0x10) {
      *param_1 = 0;
    }
    param_1[1] = (ushort)**(undefined4 **)(*(byte **)(param_1 + 2) + (short)*param_1 * 4 + 4);
    sub_080236A8((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + (short)*param_1 * 4 + 4) + 4,
                 (short)*param_1 * 4,0);
    REG_DMA3SAD = auStack_100c;
    REG_DMA3DAD = (uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000;
    Ram040000dc = (short)(((uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6) >> 2);
    DAT_040000de = 0x8400;
    return;
  }
  return;
}


/* sub_08005096 @ 0x08005096 */

void sub_08005096(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_2 + 0x10) + iVar2 * 4);
      *(undefined2 *)(param_1 + iVar1 * 2 + 1) = 0;
      iVar2 = iVar2 + 1;
      *(short *)((int)param_1 + iVar1 * 8 + 6) = (short)iVar2;
      param_1[iVar1 * 2 + 2] = iVar3;
    } while (iVar2 < *(int *)(param_2 + 0xc));
  }
  return;
}


/* sub_080050C8 @ 0x080050C8 */

void sub_080050C8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  ushort *in_r2;
  int iVar4;
  int iVar5;
  ushort local_71c [896];
  int *piStack_1c;
  int local_18;
  
  iVar5 = *(int *)(*(int *)(param_2 + 0x48) + 4) / 2;
  piStack_1c = param_1;
  local_18 = param_2;
  sub_0801F394(*(int **)(param_2 + 0x48),(int)local_71c);
  iVar1 = 1;
  if (1 < iVar5) {
    do {
      iVar2 = iVar1 + 1;
      in_r2 = (ushort *)((uint)local_71c[iVar1] + (uint)local_71c[iVar1 + -1] + 1);
      local_71c[iVar1] = (ushort)in_r2;
      iVar1 = iVar2;
    } while (iVar2 < iVar5);
  }
  puVar3 = (undefined2 *)sub_0801F08C(0x4000);
  iVar4 = 0x6000000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < iVar5) {
    do {
      while ((iVar2 < iVar5 && ((uint)(local_71c[iVar2] >> 8) == (uint)(local_71c[iVar1] >> 8)))) {
        iVar2 = iVar2 + 1;
      }
      in_r2 = local_71c;
      sub_0801F394(*(int **)(*(int *)(local_18 + 0x4c) + (uint)(local_71c[iVar1] >> 8) * 4),
                   (int)puVar3);
      if (iVar1 < iVar2) {
        in_r2 = local_71c;
        do {
          REG_DMA3SAD = (((uint)in_r2[iVar1] << 0x18) >> 0x12) + (int)puVar3;
          REG_DMA3DAD = iVar4;
          Ram040000dc = 0x10;
          DAT_040000de = 0x8400;
          iVar4 = iVar4 + 0x40;
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar2);
      }
    } while (iVar1 < iVar5);
  }
  sub_0801F110(puVar3);
  iVar1 = 0;
  if (0 < *piStack_1c) {
    do {
      sub_0800501E((short *)(piStack_1c + iVar1 * 2 + 1),piStack_1c,(int)in_r2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piStack_1c);
  }
  return;
}


/* sub_080051C2 @ 0x080051C2 */

void sub_080051C2(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *param_1) {
    do {
      puVar2 = (ushort *)(param_1 + iVar5 * 2 + 1);
      iVar3 = (*(ushort *)((int)param_1 + iVar5 * 8 + 6) - 1) * 0x10000;
      *(short *)((int)param_1 + iVar5 * 8 + 6) = (short)((uint)iVar3 >> 0x10);
      if (iVar3 >> 0x10 == 0) {
        iVar3 = (*puVar2 + 1) * 0x10000;
        *puVar2 = (ushort)((uint)iVar3 >> 0x10);
        if ((int)(uint)*(byte *)param_1[iVar5 * 2 + 2] <= iVar3 >> 0x10) {
          *puVar2 = 0;
        }
        uVar1 = *puVar2;
        uVar4 = **(undefined4 **)(param_1[iVar5 * 2 + 2] + (short)uVar1 * 4 + 4);
        *(short *)((int)param_1 + iVar5 * 8 + 6) = (short)uVar4;
        sub_0800501E((short *)puVar2,uVar4,(short)uVar1 * 4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_1);
  }
  return;
}


/* sub_08005224 @ 0x08005224 */

void sub_08005224(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* sub_08005240 @ 0x08005240 */

void sub_08005240(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 4;
    piVar1 = *(int **)(param_1 + iVar5);
    if (piVar1 != (int *)0x0) {
      __call_via_r2(piVar1,1,(undefined *)(*(int *)*piVar1 + *piVar1));
    }
    puVar3 = *(undefined4 **)(iVar5 + param_2 + 0x14);
    uVar2 = __call_via_r2(iVar4,puVar3,(undefined *)*puVar3);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar5) = uVar2;
  } while (iVar4 < 4);
  return;
}


/* sub_08005272 @ 0x08005272 */

void sub_08005272(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar2 + 4) + iVar2));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}


/* sub_08005292 @ 0x08005292 */

void sub_08005292(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  return;
}


/* sub_080052C0 @ 0x080052C0 */

undefined4 * sub_080052C0(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x2028), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &_08023868;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1f) = 0xff;
  param_1[3] = &gUnknown_081D9CB8;
  param_1[4] = &gUnknown_081D9CB8;
  param_1[5] = &gUnknown_081D9CB8;
  param_1[6] = &gUnknown_081D9CB8;
  uVar3 = (uint)*(byte *)(param_3 + 0x15) * (uint)*(byte *)(param_3 + 0x14);
  if ((uVar3 < 5) && (iVar2 = 0, uVar3 != 0)) {
    do {
      piVar1 = *(int **)(param_1[2] + iVar2 * 4 + 0x18);
      if (piVar1 != (int *)0x0) {
        *(char *)((int)param_1 + iVar2 + 0x1c) = (char)iVar2;
        sub_0801F394(piVar1,(int)(param_1 + iVar2 * 0x200 + 10));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return param_1;
}


/* sub_0800532E @ 0x0800532E */

void sub_0800532E(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_834 [2048];
  uint local_34 [5];
  uint uStack_20;
  int iStack_1c;
  int *local_18;
  
  local_34[0] = 0xff;
  local_34[1] = 0xff;
  local_34[2] = 0xff;
  local_34[3] = 0xff;
  uVar7 = 0;
  uVar4 = 0;
  do {
    iVar1 = param_2[1] + uVar4;
    if ((iVar1 < 0) || ((int)(uint)*(byte *)(*(int *)(param_1 + 8) + 0x15) <= iVar1)) {
      uVar7 = uVar7 | 3 << ((uVar4 & 0x7f) << 1);
    }
    else {
      iVar2 = 0;
      do {
        uVar8 = uVar4 * 2 + iVar2;
        iVar6 = *param_2 + iVar2;
        if ((iVar6 < 0) ||
           (uStack_20 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x14), (int)uStack_20 <= iVar6)) {
          uVar7 = uVar7 | 1 << (uVar8 & 0xff);
        }
        else {
          local_34[uVar8] = uStack_20 * iVar1 + iVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar8 = 0;
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar5 = local_34[uVar4];
    if (uVar5 == 0xff) {
      *(undefined **)(iVar1 + param_1 + 0xc) = &gUnknown_081D9CB8;
    }
    else if (*(int *)(*(int *)(param_1 + 8) + uVar5 * 4 + 0x18) == 0) {
      *(undefined **)(iVar1 + param_1 + 0xc) = &gUnknown_081D9CB8;
      uVar7 = uVar7 | 1 << (uVar4 & 0xff);
    }
    else {
      uVar3 = 0;
      do {
        if (*(byte *)(param_1 + uVar3 + 0x1c) == uVar5) {
          uVar8 = uVar8 | 1 << (uVar3 & 0xff);
          uVar7 = uVar7 | 1 << (uVar4 & 0xff);
          *(uint *)(iVar1 + param_1 + 0xc) = uVar3 * 0x800 + param_1 + 0x28;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 4);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  uVar4 = 0;
  iStack_1c = param_1;
  local_18 = param_2;
  do {
    if ((1 << (uVar4 & 0xff) & uVar7) == 0) {
      uVar5 = 0;
      do {
        if ((1 << (uVar5 & 0xff) & uVar8) == 0) {
          uVar8 = uVar8 | 1 << (uVar5 & 0xff);
          uVar3 = local_34[uVar4];
          *(char *)(param_1 + uVar5 + 0x1c) = (char)uVar3;
          local_34[4] = uVar5 * 0x800 + param_1 + 0x28;
          *(uint *)(uVar4 * 4 + param_1 + 0xc) = local_34[4];
          sub_0801F394(*(int **)(*(int *)(param_1 + 8) + uVar3 * 4 + 0x18),(int)auStack_834);
          REG_DMA3SAD = auStack_834;
          REG_DMA3DAD = local_34[4];
          Ram040000dc = 0x200;
          DAT_040000de = 0x8400;
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      iVar1 = local_18[1];
      *(int *)(param_1 + 0x20) = *local_18;
      *(int *)(param_1 + 0x24) = iVar1;
      return;
    }
  } while( true );
}


/* sub_080054A4 @ 0x080054A4 */

void sub_080054A4(int param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)(*param_2 << 0x18) >> 0x1b;
  uVar6 = (uint)(param_2[1] << 0x18) >> 0x1b;
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = (ushort)((uint)(*param_2 << 0x18) >> 0x10);
  sVar2 = 0x20 - (uVar3 >> 0xb);
  if (uVar6 < 0x20) {
    uVar4 = uVar6;
    do {
      REG_DMA3SAD = *(int *)(param_1 + 0xc) + uVar4 * 0x40 + uVar7 * 2;
      REG_DMA3DAD = &DAT_0600e000 + uVar7 * 2 + uVar4 * 0x40 + (uint)bVar1 * 0x800;
      Ram040000dc = sVar2;
      DAT_040000de = 0x8000;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x20);
  }
  if ((uVar7 != 0) && (uVar4 = uVar6, uVar6 < 0x20)) {
    do {
      REG_DMA3SAD = *(int *)(param_1 + 0x10) + uVar4 * 0x40;
      REG_DMA3DAD = &DAT_0600e000 + uVar4 * 0x40 + (uint)bVar1 * 0x800;
      Ram040000dc = uVar3 >> 0xb;
      DAT_040000de = 0x8000;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x20);
  }
  iVar5 = 0;
  if (uVar6 != 0) {
    do {
      REG_DMA3SAD = *(int *)(param_1 + 0x14) + iVar5 * 0x40 + uVar7 * 2;
      REG_DMA3DAD = &DAT_0600e000 + uVar7 * 2 + iVar5 * 0x40 + (uint)bVar1 * 0x800;
      Ram040000dc = sVar2;
      DAT_040000de = 0x8000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
  }
  if ((uVar7 != 0) && (iVar5 = 0, uVar6 != 0)) {
    do {
      REG_DMA3SAD = *(int *)(param_1 + 0x18) + iVar5 * 0x40;
      REG_DMA3DAD = &DAT_0600e000 + iVar5 * 0x40 + (uint)bVar1 * 0x800;
      Ram040000dc = uVar3 >> 0xb;
      DAT_040000de = 0x8000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
  }
  return;
}


/* sub_080055A4 @ 0x080055A4 */

void sub_080055A4(int param_1,int param_2)

{
  byte bVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_2 + 0xc) * *(int *)(*(int *)(param_1 + 8) + 4) +
             *(int *)(*(int *)(param_1 + 8) + 0xc) + *(int *)(param_2 + 0x24);
  local_c = *(int *)(param_2 + 0x10) * *(int *)(*(int *)(param_1 + 8) + 8) +
            *(int *)(*(int *)(param_1 + 8) + 0x10) + *(int *)(param_2 + 0x28);
  local_18 = (local_10 >> 10) + -8;
  local_14 = (local_c >> 10) + -0x30;
  local_20 = local_18 >> 8;
  local_1c = local_14 >> 8;
  sub_0800532E(param_1,&local_20);
  sub_080054A4(param_1,&local_18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)(local_10 >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(local_c >> 10);
  return;
}


/* sub_0800561A @ 0x0800561A */

void sub_0800561A(int param_1,int param_2)

{
  byte bVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_2 + 0xc) * *(int *)(*(int *)(param_1 + 8) + 4) +
             *(int *)(*(int *)(param_1 + 8) + 0xc) + *(int *)(param_2 + 0x24);
  local_c = *(int *)(param_2 + 0x10) * *(int *)(*(int *)(param_1 + 8) + 8) +
            *(int *)(*(int *)(param_1 + 8) + 0x10) + *(int *)(param_2 + 0x28);
  local_18 = (local_10 >> 10) + -8;
  local_14 = (local_c >> 10) + -0x30;
  local_20 = local_18 >> 8;
  local_1c = local_14 >> 8;
  if ((local_20 != *(int *)(param_1 + 0x20)) || (local_1c != *(int *)(param_1 + 0x24))) {
    sub_0800532E(param_1,&local_20);
  }
  sub_080054A4(param_1,&local_18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)(local_10 >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(local_c >> 10);
  return;
}


/* sub_080056A0 @ 0x080056A0 */

void sub_080056A0(undefined1 param_1,int param_2)

{
  sub_080052C0((undefined4 *)0x0,param_1,param_2);
  return;
}


/* sub_080056A4 @ 0x080056A4 */

void sub_080056A4(undefined4 param_1,undefined1 param_2,int param_3)

{
  sub_080052C0((undefined4 *)0x0,param_2,param_3);
  return;
}


/* sub_080056AE @ 0x080056AE */

undefined4 * sub_080056AE(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x8c), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023EE8;
    sub_08020E5C((undefined1 *)(param_1 + 7),0xa0,0x90);
    sub_08020E5C((undefined1 *)(param_1 + 0x15),0xa0,0x18);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
    param_1[0x18] = &gUnknown_081D6B1C;
    *(undefined1 *)((int)param_1 + 0x7d) = 2;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1[0x1d] = 0x8020ec3;
    param_1[0x16] = 0x50;
    param_1[0x17] = 0x10;
    param_1[10] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[0xf] = 0x8020ec3;
  }
  return param_1;
}


/* sub_080056B0 @ 0x080056B0 */

undefined4 * sub_080056B0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x8c), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *param_1 = &_08023EE8;
    sub_08020E5C((undefined1 *)(param_1 + 7),0xa0,0x90);
    sub_08020E5C((undefined1 *)(param_1 + 0x15),0xa0,0x18);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
    param_1[0x18] = &gUnknown_081D6B1C;
    *(undefined1 *)((int)param_1 + 0x7d) = 2;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1[0x1d] = 0x8020ec3;
    param_1[0x16] = 0x50;
    param_1[0x17] = 0x10;
    param_1[10] = &gUnknown_08028724;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[0xf] = 0x8020ec3;
  }
  return param_1;
}


/* sub_08005724 @ 0x08005724 */

void sub_08005724(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int a0;
  
  sub_08021F18(*(undefined4 **)(param_1 + 0x40),0,*(uint *)(param_1 + 0x50));
  a0 = param_1 + 0x1c;
  uVar1 = 0x29;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  sub_0801F6D8(a0,"Music Test: %d",*(undefined4 *)(param_1 + 0xc));
  uVar1 = 0x29;
  if (*(int *)(param_1 + 8) != 1) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 0x1f;
  *(undefined4 *)(param_1 + 0x20) = 0;
  sub_0801F6D8(a0,"Sample Test: %d",*(undefined4 *)(param_1 + 0x10));
  iVar2 = *(int *)(param_1 + 0x14) * 0x38;
  uVar1 = 0x29;
  if (*(int *)(param_1 + 8) < 2) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x2f;
  sub_0801F6D8(a0,"Map Test");
  uVar1 = 4;
  if (*(int *)(param_1 + 8) != 2) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0x3f;
  sub_0801F6D8(a0,"Zone: %d",(uint)(byte)(&gUnknown_08409368)[iVar2]);
  uVar1 = 4;
  if (*(int *)(param_1 + 8) != 3) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0x4f;
  sub_0801F6D8(a0,"Area: %d",(uint)(byte)(&DAT_08409369)[iVar2]);
  uVar1 = 4;
  if (*(int *)(param_1 + 8) != 4) {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0x5f;
  sub_0801F6D8(a0,"Variation: %d / %d",*(undefined4 *)(param_1 + 0x18),
               (uint)(byte)(&DAT_0840936a)[iVar2]);
  sub_080236B4(a0,0x6004f40);
  return;
}


/* sub_08005804 @ 0x08005804 */

void sub_08005804(int param_1)

{
  int local_1c [4];
  
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
  sub_08021F18(*(undefined4 **)(param_1 + 0x78),0,*(uint *)(param_1 + 0x88));
  sub_0801F636((char *)(param_1 + 0x54),(byte *)"Debug");
  sub_080236B4(param_1 + 0x54,0x6004040);
  local_1c[0] = 5;
  local_1c[1] = 0;
  local_1c[2] = 0x19;
  local_1c[3] = 3;
  sub_0801F508(local_1c,0x600f000,0x101);
  local_1c[0] = 4;
  local_1c[1] = 4;
  local_1c[2] = 0x18;
  local_1c[3] = 0x12;
  sub_0801F508(local_1c,0x600f000,0x13d);
  sub_08005724(param_1);
  REG_BG2CNT = 0x1e83;
  return;
}


/* sub_080058AE @ 0x080058AE */

undefined4 sub_080058AE(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = sub_0800E0AC();
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    if (((int)((uint)DAT_030022b0 << 0x1a) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    if (((int)((uint)DAT_030022b0 << 0x1b) < 0) && (*(int *)(param_1 + 0xc) < 0x2b)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if ((DAT_030022b0 & 1) != 0) {
      sub_08020A4C(&DAT_030026c8,(int)(&gUnknown_081D4B2C + *(int *)(param_1 + 0xc) * 5));
    }
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      DAT_030026cd = 0;
      return 0;
    }
    if ((int)((uint)DAT_030022b0 << 0x17) < 0) {
      sub_08020A96(&DAT_030026c8);
    }
    break;
  case 1:
    if (((int)((uint)DAT_030022b0 << 0x1a) < 0) && (*(int *)(param_1 + 0x10) != 0)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    if (((int)((uint)DAT_030022b0 << 0x1b) < 0) && (*(int *)(param_1 + 0x10) < 0x3f)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    if ((DAT_030022b0 & 1) != 0) {
      sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 0x10) * 0xc,0x40,0);
    }
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x14);
    cVar1 = (&gUnknown_08409368)[iVar3 * 0x38];
    if (((int)((uint)DAT_030022b0 << 0x1a) < 0) && (-1 < iVar3)) {
_080059A0:
      if ((&gUnknown_08409368)[iVar3 * 0x38] == cVar1) goto _080059D2;
      iVar4 = iVar3 * 0x38;
      for (; (-1 < iVar3 && ((&gUnknown_08409368)[iVar3 * 0x38] == (&gUnknown_08409368)[iVar4]));
          iVar3 = iVar3 + -1) {
      }
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
_080059D6:
    if ((int)((uint)DAT_030022b0 << 0x1b) < 0) {
      for (iVar3 = *(int *)(param_1 + 0x14); iVar3 < iVar2; iVar3 = iVar3 + 1) {
        if ((&gUnknown_08409368)[iVar3 * 0x38] != cVar1) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(int *)(param_1 + 0x14) = iVar3;
          break;
        }
      }
    }
    break;
  case 3:
    if ((((int)((uint)DAT_030022b0 << 0x1a) < 0) || ((int)((uint)DAT_030022ae << 0x16) < 0)) &&
       (*(int *)(param_1 + 0x14) != 0)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if ((((int)((uint)DAT_030022b0 << 0x1b) < 0) || ((int)((uint)DAT_030022ae << 0x17) < 0)) &&
       (*(int *)(param_1 + 0x14) < iVar2 + -1)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    break;
  case 4:
    if (((int)((uint)DAT_030022b0 << 0x1a) < 0) && (*(int *)(param_1 + 0x18) != 0)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
    if (((int)((uint)DAT_030022b0 << 0x1b) < 0) &&
       (*(int *)(param_1 + 0x18) < (int)(uint)(byte)(&DAT_0840936a)[*(int *)(param_1 + 0x14) * 0x38]
       )) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
    iVar2 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 8) = 4;
    }
    sub_08005724(param_1);
    sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
  }
  if ((int)((uint)DAT_030022b0 << 0x18) < 0) {
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    if (4 < iVar2) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    sub_08005724(param_1);
    sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
  }
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    sub_0801FC9C(0x3002c80,&DAT_080e17fc,0x40,0);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  if (((DAT_030022b0 & 1) != 0) && (1 < *(int *)(param_1 + 8))) {
    sub_0801FC9C(0x3002c80,&gUnknown_080E161C,0x40,0);
    REG_BLDCNT = 0x2f4f;
    DAT_04000053 = 0;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  sub_08005724(param_1);
  return 0;
_080059D2:
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) goto _080059D6;
  goto _080059A0;
}


/* sub_08005BF4 @ 0x08005BF4 */

void sub_08005BF4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < 2) {
    sub_08000CA8(param_1,param_2);
  }
  else {
    REG_BLDALPHA = (char)(param_2 >> 1);
  }
  return;
}


/* sub_08005C0A @ 0x08005C0A */

undefined4 sub_08005C0A(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (*(int *)(param_1 + 8) < 2) {
    piVar5 = (int *)sub_0800020C((undefined4 *)0x0);
    sub_0801F2CE(piVar5);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) * 0x38;
    pbVar8 = &gUnknown_08409368 + iVar1;
    iVar2 = sub_0800EB20((int)pbVar8,*(int *)(param_1 + 0x18));
    iVar2 = sub_0800EB4C((int)pbVar8,iVar2);
    sub_08003C24(&DAT_03000e90);
    sub_080040AA(0x3000e90,1);
    uVar6 = 0;
    do {
      uVar7 = uVar6 & 0xff;
      uVar3 = (&DAT_03000eb0)[uVar7 * 7];
      (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 1;
      (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 3;
      if (uVar6 != 5) {
        uVar3 = (&DAT_03000eb0)[uVar7 * 7];
        (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 0x20;
        (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 0x24;
        (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 0x2c;
        (&DAT_03000eb0)[uVar7 * 7] = uVar3 | 0x3c;
      }
      iVar4 = sub_08004214((int)(&DAT_03000e9c + uVar7 * 0x1c));
      sub_08003CA0(0x3000e90,uVar7,iVar4,0x28);
      sub_08004276((int)(&DAT_03000e9c + uVar7 * 0x1c),0x28);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 6);
    sub_080042BC(0x3000e9c,0x35);
    sub_080042BC(0x3000ef0,0x80);
    DAT_03000e90 = 1;
    DAT_03000e91 = DAT_03000e91 | 4;
    piVar5 = (int *)sub_0801F08C(4);
    if (piVar5 != (int *)0x0) {
      *piVar5 = (int)&_08023884;
    }
    sub_0801F2CE(piVar5);
    DAT_03002088 = 0;
    DAT_03002084 = 0;
    sub_0800C584(&DAT_03002080,(uint)*pbVar8,(uint)(byte)(&DAT_08409369)[iVar1],
                 (short *)(iVar2 + 0x30),*(int *)(param_1 + 0x18),1);
    piVar5 = (int *)sub_0801F08C(0xc);
    if (piVar5 != (int *)0x0) {
      *piVar5 = (int)&_08023990;
      piVar5[1] = 0;
      piVar5[2] = 4;
    }
    sub_0801F2F4(piVar5);
  }
  return 0;
}


/* sub_08005D6C @ 0x08005D6C */

undefined4 sub_08005D6C(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((-1 < *param_1) && (-1 < param_1[1])) && (param_1[2] < 0x801)) && (param_1[3] < 0x801)) {
    iVar2 = param_1[1] >> 3;
    do {
      if (param_1[3] + 7 >> 3 <= iVar2) {
        return 1;
      }
      for (uVar1 = *param_1 >> 3; (int)uVar1 < param_1[2] + 7 >> 3; uVar1 = uVar1 + 1) {
        if ((*(uint *)(iVar2 * 0x20 + param_2 + ((int)uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0)
        {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while( true );
  }
  return 0;
}


/* sub_08005DD4 @ 0x08005DD4 */

void sub_08005DD4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_48 [4];
  int local_38;
  int local_34;
  int aiStack_30 [6];
  int *local_18;
  
  sub_080220CC((int)aiStack_30,(int)&local_18,8,0x8026689);
  sub_080215E8(aiStack_30,(uint *)param_1);
  piVar1 = param_1 + 0xe;
  sub_080215A8(piVar1);
  param_1[0x12] = param_1[0x12] - param_1[1];
  param_1[0x13] = param_1[0x13] - param_1[2];
  sub_0802166E(auStack_48,piVar1,aiStack_30);
  sub_080220F0((int)piVar1,(uint)auStack_48,(uint)aiStack_30,8,(undefined *)0x80265dd);
  iVar4 = *param_1 >> 10;
  iVar2 = param_1[1] >> 10;
  param_1[3] = iVar2;
  iVar3 = param_1[2] >> 10;
  param_1[4] = iVar3;
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0xec) * 0x1000000) >> 0x16)) >> 8) +
             iVar2;
  local_34 = iVar3 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 300) * 0x1000000) >> 0x16)) >>
                     8);
  local_18 = param_1 + 3;
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0x14) * 0x1000000) >> 0x16)) >> 8) +
             iVar2;
  local_34 = iVar3 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0x54) * 0x1000000) >> 0x16)) >>
                     8);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)(iVar4 << 0x18) >> 0x16)) >> 8) + iVar2;
  local_34 = iVar3 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x16)) >>
                     8);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0xae) * 0x1000000) >> 0x16)) >> 10) +
             iVar2;
  local_34 = iVar3 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0xee) * 0x1000000) >> 0x16)) >>
                     10);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0x52) * 0x1000000) >> 0x16)) >> 10) +
             iVar2;
  local_34 = iVar3 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar4 + 0x92) * 0x1000000) >> 0x16)) >>
                     10);
  sub_08028030(local_18,&local_38);
  param_1[5] = param_1[5] + 1;
  param_1[6] = param_1[6] + 1;
  return;
}


/* sub_08005F1A @ 0x08005F1A */

void sub_08005F1A(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    REG_DMA3SAD = 0x3003914;
    REG_DMA3DAD = 0x5000000;
    Ram040000dc = 0x80;
    DAT_040000de = 0x8500;
    DAT_03003914 = 0;
    REG_DMA3SAD = 0x3003914;
    REG_DMA3DAD = 0x5000200;
    Ram040000dc = 0x80;
    DAT_040000de = 0x8500;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  sub_08005096(&DAT_03000ff8,iVar1);
  sub_08005240(0x300107c,iVar1);
  sub_080050C8(&DAT_03000ff8,iVar1);
  sub_08005272(0x300107c,param_1);
  iVar1 = *(int *)(iVar1 + 0x3c) * 8;
  REG_BG0CNT = *(short *)(&DAT_081da8ec + iVar1) + (short)*(undefined4 *)(param_1 + 0x78);
  REG_BG1CNT = *(short *)(&DAT_081da8ee + iVar1) + (short)*(undefined4 *)(param_1 + 0x7c);
  REG_BG2CNT = *(short *)(&DAT_081da8f0 + iVar1) + (short)*(undefined4 *)(param_1 + 0x80);
  REG_BG3CNT = *(short *)(&DAT_081da8f2 + iVar1) + (short)*(undefined4 *)(param_1 + 0x84);
  REG_BLDCNT = *(undefined2 *)(param_1 + 100);
  REG_BLDALPHA = *(undefined1 *)(param_1 + 0x61);
  DAT_04000053 = *(undefined1 *)(param_1 + 0x60);
  REG_DISPCNT = *(undefined2 *)(param_1 + 0x62);
  return;
}


/* sub_08005FBA @ 0x08005FBA */

void sub_08005FBA(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  sub_08006C24(&DAT_03001120);
  if (*(int *)(param_2 + 0x24) != 0) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      iVar1 = sub_080073EA((undefined4 *)0x0,param_2);
      sub_080068B8(0x3001120,iVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          iVar2 = sub_0800733E((undefined4 *)0x0,
                               (undefined4 *)(*(int *)(param_2 + 0x28) + iVar3 * 0x18),iVar1,
                               (short)iVar3);
          sub_080068B8(0x3001120,iVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
    else {
      iVar1 = sub_08012FCA((undefined4 *)0x0,param_2);
      sub_080068B8(0x3001120,iVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          iVar2 = sub_08012F40((undefined4 *)0x0,
                               (undefined4 *)(*(int *)(param_2 + 0x28) + iVar3 * 0x18),iVar1,iVar3);
          sub_080068B8(0x3001120,iVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
  }
  return;
}


/* sub_08006078 @ 0x08006078 */

void sub_08006078(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 8) = param_2[1];
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(int *)(param_1 + 0xc) = iVar1 >> 10;
  *(int *)(param_1 + 0x10) = iVar2 >> 10;
  *(int *)(param_1 + 0x14) = (iVar1 >> 10) + 0xf0;
  *(int *)(param_1 + 0x18) = (iVar2 >> 10) + 0xa0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) >> 10;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) >> 10;
  return;
}


/* sub_080060B0 @ 0x080060B0 */

undefined4 sub_080060B0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_18;
  int local_14;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5c) < (int)uVar2) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x5c);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5e) < (int)uVar3) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x5e);
  }
  local_18 = uVar2 << 10;
  local_14 = uVar3 << 10;
  sub_08006078(param_1,&local_18);
  if ((uVar2 == *param_2) && (uVar3 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_080060FE @ 0x080060FE */

void sub_080060FE(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_2;
  piVar2 = (int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar1 < 0) {
    *piVar2 = iVar1 + iVar3 * 0x400;
  }
  else if (iVar1 >> 10 < iVar3) {
    *piVar2 = iVar1;
  }
  else {
    *piVar2 = iVar1 + iVar3 * -0x400;
  }
  piVar2 = (int *)(param_1 + 8);
  if (param_2[1] < 0) {
    *piVar2 = param_2[1] + *(int *)(param_1 + 0x58) * 0x400;
  }
  else {
    iVar1 = param_2[1];
    if (iVar1 >> 10 < *(int *)(param_1 + 0x58)) {
      *piVar2 = iVar1;
    }
    else {
      *piVar2 = iVar1 + *(int *)(param_1 + 0x58) * -0x400;
    }
  }
  return;
}


/* sub_08006152 @ 0x08006152 */

void sub_08006152(int *param_1,undefined2 *param_2,uint *param_3,int param_4)

{
  int iVar1;
  int local_2c;
  int local_28;
  int *piStack_24;
  undefined2 *puStack_20;
  uint *puStack_1c;
  int iStack_18;
  
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0x14] = (int)param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x1a] = 1;
  piStack_24 = param_1;
  puStack_20 = param_2;
  puStack_1c = param_3;
  iStack_18 = param_4;
  if (param_1[0x1b] == 0) {
    iVar1 = sub_0801F08C(0x2000);
    param_1[0x1b] = iVar1;
  }
  if (param_1[0x1c] == 0) {
    iVar1 = sub_0801F08C(0x2000);
    param_1[0x1c] = iVar1;
  }
  if (param_1[0x1d] == 0) {
    iVar1 = sub_0801F08C(0x2000);
    param_1[0x1d] = iVar1;
  }
  sub_0801F394(*(int **)(param_2 + 0x1a),param_1[0x1b]);
  sub_0801F394(*(int **)(param_2 + 0x1c),param_1[0x1c]);
  sub_0801F412(&REG_DMA3SAD,param_1[0x1d],param_1[0x1b],0x2000);
  *(short *)(param_1 + 0x17) = param_2[4] + -1;
  *(short *)((int)param_1 + 0x5e) = param_2[5] + -1;
  param_1[0x15] = (ushort)param_2[4] + 0xef;
  param_1[0x16] = (ushort)param_2[5] + 0x9f;
  sub_08005FBA(param_1,(int)param_2);
  if (*(int *)(param_2 + 0x1e) == 0) {
    sub_080060B0((int)param_1,param_3);
    param_1[0xb] = param_1[3];
    param_1[0xc] = param_1[4];
    *(undefined2 *)((int)param_1 + 0x62) = 8000;
  }
  else {
    local_28 = (param_3[1] + 0x4c) * 0x400;
    local_2c = (*param_3 + 0x70) * 0x400;
    sub_080060FE((int)param_1,&local_2c);
    sub_08005DD4(param_1);
    *(undefined2 *)((int)param_1 + 0x62) = 0x1741;
  }
  param_1[0x1e] = (uint)*(byte *)(param_2 + 2);
  param_1[0x1f] = (uint)*(byte *)((int)param_2 + 5);
  param_1[0x20] = (uint)*(byte *)(param_2 + 3);
  param_1[0x21] = (uint)*(byte *)((int)param_2 + 7);
  *(undefined2 *)(param_1 + 0x19) = *param_2;
  *(undefined1 *)((int)param_1 + 0x61) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((int)param_2 + 3);
  sub_08005F1A((int)param_1,iStack_18);
  param_1[0x1a] = 0;
  return;
}


/* sub_08006250 @ 0x08006250 */

void sub_08006250(int param_1)

{
  sub_08005292(0x300107c,param_1);
  sub_080051C2(&DAT_03000ff8);
  return;
}


/* sub_08006264 @ 0x08006264 */

void sub_08006264(undefined4 param_1,int param_2)

{
  sub_0800BF42(&DAT_03001fe0,*(int *)(param_2 + 0x40),*(int *)(param_2 + 0x44));
  return;
}


/* sub_08006274 @ 0x08006274 */

void sub_08006274(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x62) & ~(ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x62) = uVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    REG_DISPCNT = uVar1;
  }
  return;
}


/* sub_08006298 @ 0x08006298 */

void sub_08006298(int param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x62) | (ushort)(0x100 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x62) = uVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    REG_DISPCNT = uVar1;
  }
  return;
}


/* sub_080062C0 @ 0x080062C0 */

void sub_080062C0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + param_1 + 0x78) = param_3;
  if (*(int *)(param_1 + 0x68) == 0) {
    (&REG_BG0CNT)[param_2] =
         *(short *)(&DAT_081da8ec + param_2 * 2 + *(int *)(*(int *)(param_1 + 0x50) + 0x3c) * 8) +
         (short)param_3;
  }
  return;
}


/* sub_080062E8 @ 0x080062E8 */

undefined4 sub_080062E8(int param_1,int *param_2)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5c) < local_14 >> 10) {
    local_14 = (uint)*(ushort *)(param_1 + 0x5c) << 10;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x5e) < local_10 >> 10) {
    local_10 = (uint)*(ushort *)(param_1 + 0x5e) << 10;
  }
  sub_08006078(param_1,&local_14);
  if ((local_14 == *param_2) && (local_10 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_0800634A @ 0x0800634A */

void sub_0800634A(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x28) = param_2[1];
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4) + iVar1 >> 10;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) >> 10;
  return;
}


/* sub_08006366 @ 0x08006366 */

void sub_08006366(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08005D6C(&local_14,*(int *)(param_1 + 0x6c));
  return;
}


/* sub_0800638C @ 0x0800638C */

void sub_0800638C(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2 >> 8;
  local_10 = param_2[1] >> 8;
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08005D6C(&local_14,*(int *)(param_1 + 0x6c));
  return;
}


/* sub_080063B6 @ 0x080063B6 */

void sub_080063B6(int param_1,int *param_2,byte *param_3)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2 >> 8;
  local_10 = param_2[1] >> 8;
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08005D6C(&local_14,*(int *)(param_1 + 0x74));
  return;
}


/* sub_080063E0 @ 0x080063E0 */

void sub_080063E0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar2 = 0;
  if (-1 < *param_1) {
    uVar2 = *param_1 >> 3;
  }
  if (-1 < param_1[1]) {
    iVar6 = param_1[1] >> 3;
  }
  iVar3 = 0x100;
  iVar7 = iVar3;
  if (param_1[2] < 0x800) {
    iVar7 = param_1[2] + 7 >> 3;
  }
  if (param_1[3] < 0x800) {
    iVar3 = param_1[3] + 7 >> 3;
  }
  for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    for (uVar1 = uVar2; (int)uVar1 < iVar7; uVar1 = uVar1 + 1) {
      puVar4 = (uint *)(((int)uVar1 >> 5) * 4 + iVar6 * 0x20 + param_2);
      uVar5 = 1 << (uVar1 & 0x1f);
      if (param_3 == 0) {
        *puVar4 = *puVar4 & ~uVar5;
      }
      else {
        *puVar4 = uVar5 | *puVar4;
      }
    }
  }
  return;
}


