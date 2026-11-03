/* Ghidra reference decompilation of code_08016E8C (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08016E8C @ 0x08016E8C */

void sub_08016E8C(undefined4 *param_1,int param_2,undefined2 param_3,short param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025D20;
    param_1[5] = param_2;
    *(undefined2 *)(param_1 + 3) = param_3;
    *(short *)((int)param_1 + 0xe) = *(short *)(param_2 + 0x14) + param_4;
    param_1[4] = (uint)(*(char *)(param_2 + 0x16) != '\0');
  }
  return;
}


/* sub_08016EBE @ 0x08016EBE */

undefined4 sub_08016EBE(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if ((((*piVar1 < *(int *)(DAT_030021f4 + 0x80a0)) && (*(int *)(DAT_030021f4 + 0x8098) < piVar1[2])
       ) && (piVar1[1] < *(int *)(DAT_030021f4 + 0x80a4))) &&
     (*(int *)(DAT_030021f4 + 0x809c) < piVar1[3])) {
    return 1;
  }
  return 0;
}


/* sub_08016EFA @ 0x08016EFA */

undefined4 sub_08016EFA(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  *puVar1 = (*(int **)(param_1 + 0x14))[1] - *(int *)(DAT_030021f4 + 0x809c) & 0xffU |
            (uint)((**(int **)(param_1 + 0x14) - *(int *)(DAT_030021f4 + 0x8098)) * 0x800000) >> 7 |
            *(uint *)(*(int *)(param_1 + 0x14) + 0x10) & 0xfe00ff00;
  puVar1[1] = (*(ushort *)(param_1 + 0xe) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}


/* sub_08016F6A @ 0x08016F6A */

int sub_08016F6A(int param_1,int param_2,uint param_3)

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


/* sub_08016F96 @ 0x08016F96 */

void sub_08016F96(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025EE8;
  sub_08006664(&DAT_03001120,(uint)*(ushort *)((int)param_1 + 0xe));
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08016FD8 @ 0x08016FD8 */

void sub_08016FD8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 8;
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(char *)(param_2 + 0x160) = (char)((ushort)*(undefined2 *)(&DAT_03000ea6 + iVar1) >> 8);
  uVar2 = (uint)(*(ushort *)(&DAT_03000ea8 + iVar1) >> 8);
  *(char *)(param_2 + 0x161) = (char)(*(ushort *)(&DAT_03000ea8 + iVar1) >> 8);
  *(char *)(param_2 + 0x162) = (char)((ushort)*(undefined2 *)(&DAT_03000eaa + iVar1) >> 8);
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4((undefined4 *)(param_2 + 0x188),(undefined *)0x3fa00000,uVar2,iVar3);
  sub_080265C4((undefined4 *)(param_2 + 0x18c),(undefined *)0x40200000,uVar2,iVar3);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}


/* sub_08017028 @ 0x08017028 */

void sub_08017028(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_03000e98 != 0) {
    DAT_03000e98 = DAT_03000e98 + -1;
  }
  uVar2 = *(int *)(param_2 + 0x184) + 0x6e;
  *(uint *)(param_2 + 0x184) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    iVar4 = (uint)DAT_03000e90 * 0x1c;
    psVar3 = (short *)(&DAT_03000ea0 + iVar4);
    iVar5 = (int)*psVar3 + (*(short *)(&DAT_03000ea2 + iVar4) * 0x7ae >> 0x10);
    if (*(short *)(&DAT_03000ea2 + iVar4) < iVar5) {
      *psVar3 = *(short *)(&DAT_03000ea2 + iVar4);
    }
    else {
      *psVar3 = (short)iVar5;
    }
    uVar2 = 0;
    do {
      if (DAT_03000e90 != uVar2) {
        iVar4 = uVar2 * 0x1c;
        psVar3 = (short *)(&DAT_03000e9c + iVar4);
        iVar5 = (int)*(short *)(&DAT_03000ea0 + iVar4) +
                (*(short *)(&DAT_03000ea2 + iVar4) * 0xccd >> 0x10);
        if (*(short *)(&DAT_03000ea2 + iVar4) < iVar5) {
          *(short *)(&DAT_03000ea0 + iVar4) = *(short *)(&DAT_03000ea2 + iVar4);
        }
        else {
          *(short *)(&DAT_03000ea0 + iVar4) = (short)iVar5;
        }
        sVar1 = *(short *)(&DAT_03000e9e + iVar4);
        iVar4 = (int)*psVar3 + (sVar1 * 0xccd >> 0x10);
        if (sVar1 < iVar4) {
          *psVar3 = sVar1;
        }
        else {
          *psVar3 = (short)iVar4;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 6);
    *(uint *)(param_2 + 0x184) = *(uint *)(param_2 + 0x184) & 0xffff;
  }
  return;
}


/* sub_080170D8 @ 0x080170D8 */

void sub_080170D8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  *(undefined1 *)(param_2 + 0x160) = 100;
  *(undefined1 *)(param_2 + 0x161) = 100;
  *(undefined1 *)(param_2 + 0x162) = 100;
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4((undefined4 *)(param_2 + 0x188),(undefined *)0x40000000,param_3,param_4);
  sub_080265C4((undefined4 *)(param_2 + 0x18c),(undefined *)0x40500000,param_3,param_4);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}


/* sub_0801710E @ 0x0801710E */

void sub_0801710E(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = *(int *)(param_2 + 0x184) + 0xccd;
  *(uint *)(param_2 + 0x184) = uVar2;
  if (uVar2 >> 0x10 != 0) {
    psVar3 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
    sVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    iVar4 = (int)*psVar3 + (sVar1 * 0x290 >> 0x10);
    if (sVar1 < iVar4) {
      *psVar3 = sVar1;
    }
    else {
      *psVar3 = (short)iVar4;
    }
    *(uint *)(param_2 + 0x184) = *(uint *)(param_2 + 0x184) & 0xffff;
  }
  return;
}


/* sub_08017158 @ 0x08017158 */

void sub_08017158(void)

{
  sub_0801FC9C(0x3002c80,&DAT_080e1844,0x40,0);
  return;
}


/* sub_08017174 @ 0x08017174 */

void sub_08017174(void)

{
  sub_0801FC22(0x3002c80,0x80e1844);
  return;
}


/* sub_0801718C @ 0x0801718C */

void sub_0801718C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 8;
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(char *)(param_2 + 0x160) = (char)((ushort)*(undefined2 *)(&DAT_03000ea6 + iVar1) >> 8) + '\x0f';
  iVar2 = (*(ushort *)(&DAT_03000ea8 + iVar1) >> 8) + 10;
  *(char *)(param_2 + 0x161) = (char)iVar2;
  *(char *)(param_2 + 0x162) = (char)((ushort)*(undefined2 *)(&DAT_03000eaa + iVar1) >> 8) + '\x0f';
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4((undefined4 *)(param_2 + 0x188),(undefined *)0x3f400000,iVar2,iVar3);
  sub_080265C4((undefined4 *)(param_2 + 0x18c),(undefined *)0x3fe00000,iVar2,iVar3);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}


/* sub_080171E4 @ 0x080171E4 */

void sub_080171E4(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if ((iVar1 == 0) &&
     (iVar1 = param_2[0x61], param_2[0x61] = iVar1 + 0x667U, iVar1 + 0x667U >> 0x10 != 0)) {
    iVar1 = (uint)DAT_03000e90 * 0x1c;
    if (*(short *)(&DAT_03000ea0 + iVar1) < 1) {
      *(short *)(&DAT_03000ea0 + iVar1) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar1) = *(short *)(&DAT_03000ea0 + iVar1) + -1;
    }
    if ((*(short *)(&DAT_03000ea0 + iVar1) == 0) && (*(short *)(&DAT_03000e9c + iVar1) != 0)) {
      __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
    param_2[0x61] = param_2[0x61] & 0xffff;
  }
  return;
}


/* sub_0801727C @ 0x0801727C */

void sub_0801727C(void)

{
  sub_0801FC9C(0x3002c80,&DAT_080e1844,0x40,0);
  return;
}


/* sub_08017298 @ 0x08017298 */

void sub_08017298(void)

{
  sub_0801FC22(0x3002c80,0x80e1844);
  return;
}


/* sub_080172B0 @ 0x080172B0 */

void sub_080172B0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 8;
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(char *)(param_2 + 0x160) = (char)((ushort)*(undefined2 *)(&DAT_03000ea6 + iVar1) >> 8) + '\n';
  iVar2 = (*(ushort *)(&DAT_03000ea8 + iVar1) >> 8) + 10;
  *(char *)(param_2 + 0x161) = (char)iVar2;
  *(char *)(param_2 + 0x162) = (char)((ushort)*(undefined2 *)(&DAT_03000eaa + iVar1) >> 8) + '\n';
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4((undefined4 *)(param_2 + 0x188),(undefined *)0x3fe00000,iVar2,iVar3);
  sub_080265C4((undefined4 *)(param_2 + 0x18c),(undefined *)0x40400000,iVar2,iVar3);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}


/* sub_08017306 @ 0x08017306 */

void sub_08017306(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if ((iVar1 == 0) &&
     (iVar1 = param_2[0x61], param_2[0x61] = iVar1 + 0xccdU, iVar1 + 0xccdU >> 0x10 != 0)) {
    iVar1 = (uint)DAT_03000e90 * 0x1c;
    if (*(short *)(&DAT_03000ea0 + iVar1) < 1) {
      *(short *)(&DAT_03000ea0 + iVar1) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar1) = *(short *)(&DAT_03000ea0 + iVar1) + -1;
    }
    if ((*(short *)(&DAT_03000ea0 + iVar1) == 0) && (*(short *)(&DAT_03000e9c + iVar1) != 0)) {
      __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
    param_2[0x61] = param_2[0x61] & 0xffff;
  }
  return;
}


/* sub_08017376 @ 0x08017376 */

void sub_08017376(void)

{
  sub_0801FC9C(0x3002c80,&DAT_080e1844,0x40,0);
  return;
}


/* sub_08017392 @ 0x08017392 */

void sub_08017392(void)

{
  sub_0801FC22(0x3002c80,0x80e1844);
  return;
}


/* sub_080173AA @ 0x080173AA */

void sub_080173AA(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)DAT_03000e90 * 8;
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(char *)(param_2 + 0x160) = (char)((ushort)*(undefined2 *)(&DAT_03000ea6 + iVar1) >> 8) + '\x06';
  iVar2 = (*(ushort *)(&DAT_03000ea8 + iVar1) >> 8) + 6;
  *(char *)(param_2 + 0x161) = (char)iVar2;
  *(char *)(param_2 + 0x162) = (char)((ushort)*(undefined2 *)(&DAT_03000eaa + iVar1) >> 8) + '\x06';
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  sub_080265C4((undefined4 *)(param_2 + 0x188),(undefined *)0x3fe00000,iVar2,iVar3);
  sub_080265C4((undefined4 *)(param_2 + 0x18c),(undefined *)0x40400000,iVar2,iVar3);
  *(undefined4 *)(param_2 + 0x184) = 0;
  return;
}


/* sub_08017400 @ 0x08017400 */

void sub_08017400(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar2 = __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if ((iVar2 == 0) &&
     (iVar2 = param_2[0x61], param_2[0x61] = iVar2 + 0xccdU, iVar2 + 0xccdU >> 0x10 != 0)) {
    iVar2 = (uint)DAT_03000e90 * 0x1c;
    psVar3 = (short *)(&DAT_03000e9c + iVar2);
    sVar1 = *(short *)(&DAT_03000e9e + iVar2);
    iVar4 = (int)*psVar3 + (sVar1 * 0x290 >> 0x10);
    if (sVar1 < iVar4) {
      *psVar3 = sVar1;
    }
    else {
      *psVar3 = (short)iVar4;
    }
    if (*(short *)(&DAT_03000ea0 + iVar2) < 1) {
      *(short *)(&DAT_03000ea0 + iVar2) = 0;
    }
    else {
      *(short *)(&DAT_03000ea0 + iVar2) = *(short *)(&DAT_03000ea0 + iVar2) + -1;
    }
    if ((*(short *)(&DAT_03000ea0 + iVar2) == 0) && (*psVar3 != 0)) {
      __call_via_r2(param_2,0x24,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
    }
    param_2[0x61] = param_2[0x61] & 0xffff;
  }
  return;
}


/* sub_080174A4 @ 0x080174A4 */

undefined4 * sub_080174A4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x78), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023720;
  param_1[1] = &_0802419C;
  *param_1 = &_080237DC;
  param_1[1] = &DAT_08023824;
  sub_08020E5C((undefined1 *)(param_1 + 4),0x20,0x18);
  param_1[0x12] = &_08025B7C;
  param_1[0x18] = &_08025B7C;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  return param_1;
}


/* sub_080174EA @ 0x080174EA */

void sub_080174EA(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  undefined4 uVar5;
  int *piVar6;
  
  sub_08006C24(&DAT_03001120);
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x6000000;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8500;
  REG_DMA3SAD = 0x86f7f9c;
  REG_DMA3DAD = 0x600e240;
  Ram040000dc = 0x10;
  DAT_040000de = 0x8400;
  uVar5 = 0x3890389;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  sub_0801F46A(&REG_DMA3SAD,0x600f800,uVar5,0x800);
  *(undefined1 *)((int)param_1 + 9) = 1;
  piVar6 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    piVar6 = param_1 + 1;
  }
  param_1[0x17] = (int)piVar6;
  iVar1 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x2c) + *param_1));
  piVar2 = param_1 + 0x12;
  sub_08002D5C((int)piVar2,param_1 + 4,1,0xb,&DAT_0600dc40,iVar1);
  __call_via_r1(piVar2,(undefined *)(*(int *)*piVar2 + *piVar2));
  param_1[0x1d] = (int)piVar6;
  iVar1 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x30) + *param_1));
  piVar6 = param_1 + 0x18;
  sub_08002D5C((int)piVar6,param_1 + 4,2,10,&DAT_0600df40,iVar1);
  __call_via_r1(piVar6,(undefined *)(*(int *)*piVar6 + *piVar6));
  psVar3 = (short *)sub_0801F08C(0x800);
  sub_0801F394((int *)&DAT_086f7e64,(int)psVar3);
  sub_0801F412(&REG_DMA3SAD,0x600e280,(int)psVar3,0x580);
  sub_0801F394((int *)&DAT_086f7ef8,(int)psVar3);
  iVar1 = 0;
  psVar4 = psVar3;
  do {
    iVar1 = iVar1 + 1;
    *psVar4 = *psVar4 + 0x38a;
    psVar4 = psVar4 + 1;
  } while (iVar1 < 0x400);
  REG_DMA3SAD = psVar3;
  REG_DMA3DAD = 0x600e800;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8400;
  sub_0801F110(psVar3);
  sub_0801F508((int *)&stack0xffffffdc,0x600e800,0x371);
  sub_0801F508((int *)&stack0xffffffdc,0x600e800,0x37d);
  REG_BG0CNT = 0x1d80;
  REG_BG3CNT = 0x1f83;
  iVar1 = sub_08016C48((undefined4 *)0x0,0xb8,0x98);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xc0,0x98);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,200,0x98);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xd0,0x98);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xe8,0x68);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xe8,0x70);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xe8,0x78);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08016C48((undefined4 *)0x0,0xe8,0x80);
  sub_080068B8(0x3001120,iVar1);
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  iVar1 = sub_08019C50((undefined4 *)0x0,param_1);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08019D70((undefined4 *)0x0,param_1);
  sub_080068B8(0x3001120,iVar1);
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


/* sub_08017794 @ 0x08017794 */

void sub_08017794(int param_1)

{
  REG_BLDCNT = 0x3e5e;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


/* sub_080177A0 @ 0x080177A0 */

void sub_080177A0(int param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    REG_BLDCNT = 0x3f5f;
    sub_0801FC9C(0x3002c80,&DAT_080e17cc,0x40,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}


/* sub_080177CE @ 0x080177CE */

undefined4 sub_080177CE(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    piVar1 = (int *)__call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x34) + *param_1));
    sub_0801F2CE(piVar1);
    uVar2 = 0;
  }
  else if (*(char *)((int)param_1 + 0xb) == '\x02') {
    piVar1 = (int *)__call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x38) + *param_1));
    sub_0801F2CE(piVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* sub_08017802 @ 0x08017802 */

void sub_08017802(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x3c) + *param_1));
  sub_080069A4(0x3001120);
  sub_08006AD8(0x3001120);
  return;
}


/* sub_0801781E @ 0x0801781E */

undefined4 sub_0801781E(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  sub_08006AA6(0x3001120);
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x40) + *param_1));
  if (param_1[3] == 0) {
    piVar4 = param_1 + 2;
    if ((char)param_1[2] == '\0') {
      if (((int)((uint)DAT_030022b0 << 0x1e) < 0) || ((int)((uint)DAT_030022b0 << 0x1d) < 0)) {
        __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
      }
      if (*(char *)((int)param_1 + 9) != '\0') {
        sub_08002E28(param_1 + 0x12,(undefined1 *)piVar4);
        sub_08002E28(param_1 + 0x18,(undefined1 *)piVar4);
      }
    }
    else {
      iVar3 = sub_08002DDA(param_1 + 0x12,(char *)piVar4);
      if (iVar3 != 0) {
        sub_0801FC9C(0x3002c80,&DAT_080e185c,0x40,0);
        *(undefined1 *)((int)param_1 + 0xb) = 1;
        REG_BLDCNT = 0x3e5e;
        param_1[3] = 1;
      }
      iVar3 = sub_08002DDA(param_1 + 0x18,(char *)piVar4);
      if (iVar3 != 0) {
        sub_0801FC9C(0x3002c80,&DAT_080e185c,0x40,0);
        *(undefined1 *)((int)param_1 + 0xb) = 2;
        REG_BLDCNT = 0x3e5e;
        param_1[3] = 1;
      }
    }
    if (*(byte *)((int)param_1 + 10) < 0x10) {
      cVar1 = *(byte *)((int)param_1 + 10) + 1;
      *(char *)((int)param_1 + 10) = cVar1;
      REG_BLDALPHA = cVar1;
    }
  }
  else {
    cVar1 = *(char *)((int)param_1 + 10) + -1;
    *(char *)((int)param_1 + 10) = cVar1;
    REG_BLDALPHA = cVar1;
    if (*(char *)((int)param_1 + 10) == '\0') {
      uVar2 = __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
      return uVar2;
    }
  }
  return 0;
}


/* sub_0801790E @ 0x0801790E */

void sub_0801790E(undefined4 *param_1,undefined1 *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  *(undefined1 **)(param_2 + 0xc) = &gUnknown_08028724;
  param_2[0x29] = 5;
  param_2[0x28] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x8020ec3;
  *(undefined4 *)(param_2 + 4) = 0x78;
  *(undefined4 *)(param_2 + 8) = 0x10;
  param_2[1] = 8;
  *param_2 = 1;
  if (param_1 == (undefined4 *)0x0) {
    pbVar2 = &gUnknown_080E2D4A;
  }
  else {
    pbVar2 = (byte *)*param_1;
  }
  sub_0801F636(param_2,pbVar2);
  param_2[0x29] = 2;
  *(undefined4 *)(param_2 + 8) = 0x22;
  *(undefined4 *)(param_2 + 4) = 0x78;
  if ((param_1 == (undefined4 *)0x0) || (param_1[4] == 0)) {
    sub_0801F6D8(param_2,"HP: ???");
    *(undefined4 *)(param_2 + 8) = 0x2a;
    *(undefined4 *)(param_2 + 4) = 0x78;
    sub_0801F636(param_2,(byte *)"STR: ???");
    *(undefined4 *)(param_2 + 8) = 0x32;
    *(undefined4 *)(param_2 + 4) = 0x78;
    sub_0801F636(param_2,(byte *)"POW: ???");
    *(undefined4 *)(param_2 + 8) = 0x3a;
    *(undefined4 *)(param_2 + 4) = 0x78;
    sub_0801F636(param_2,(byte *)"END: ???");
    if (param_1 == (undefined4 *)0x0) goto _080179FA;
  }
  else {
    iVar1 = param_1[4] * 0x18;
    sub_0801F6D8(param_2,"HP: %d",*(undefined4 *)(&DAT_086d56b0 + iVar1));
    *(undefined4 *)(param_2 + 4) = 0x78;
    *(undefined4 *)(param_2 + 8) = 0x2a;
    sub_0801F6D8(param_2,"STR: %d",(uint)(byte)(&DAT_086d56b8)[iVar1]);
    *(undefined4 *)(param_2 + 4) = 0x78;
    *(undefined4 *)(param_2 + 8) = 0x32;
    sub_0801F6D8(param_2,"POW: %d",(uint)(byte)(&DAT_086d56b9)[iVar1]);
    *(undefined4 *)(param_2 + 4) = 0x78;
    *(undefined4 *)(param_2 + 8) = 0x3a;
    sub_0801F6D8(param_2,"END: %d",(uint)(byte)(&DAT_086d56ba)[iVar1]);
  }
  if (param_1[3] != 0) {
    return;
  }
_080179FA:
  *(undefined4 *)(param_2 + 4) = 200;
  *(undefined4 *)(param_2 + 8) = 0x22;
  sub_0801F702(param_2,0x40,(byte *)"No\nPortrait\nData");
  return;
}


/* sub_08017A3C @ 0x08017A3C */

void sub_08017A3C(undefined4 param_1,int param_2,int param_3)

{
  sub_0801F394(*(int **)(&gUnknown_086F7FDC + param_3 * 4),param_2);
  return;
}


/* sub_08017A50 @ 0x08017A50 */

undefined4 * sub_08017A50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x80b0), param_1 != (undefined4 *)0x0)) {
    sub_080174A4(param_1);
    *param_1 = &_080243E8;
    param_1[1] = &DAT_08024430;
    param_1[0x202a] = 0;
    param_1[0x2026] = 0;
    param_1[0x2027] = 0;
    param_1[0x2028] = 0xf0;
    param_1[0x2029] = param_1[0x2027] + 0xa0;
    uVar1 = sub_0800415C();
    param_1[0x202b] = uVar1;
    DAT_030021f4 = param_1;
  }
  return param_1;
}


/* sub_08017A9E @ 0x08017A9E */

void sub_08017A9E(undefined4 *param_1,int param_2)

{
  *param_1 = &_080243E8;
  param_1[1] = &DAT_08024430;
  DAT_030021f4 = 0;
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08017ACC @ 0x08017ACC */

void sub_08017ACC(int *param_1)

{
  short sVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 auStack_d8 [17];
  undefined4 uStack_94;
  int iStack_28;
  int iStack_24;
  char *local_20;
  int iStack_1c;
  int *local_18;
  
  local_18 = param_1;
  sub_080174EA(param_1,0);
  sub_0801F46A(&REG_DMA3SAD,(int)(local_18 + 0x1e),0,0x8000);
  piVar3 = local_18;
  piVar11 = local_18 + 0x2022;
  *piVar11 = 0;
  local_18[0x2023] = 0;
  local_18[0x2024] = 0;
  local_18[0x2025] = 0;
  local_18[0x201e] = 0;
  local_18[0x201f] = 0;
  local_18[0x2020] = 0;
  local_18[0x2021] = 0;
  local_20 = (char *)0x0;
  if (local_18[0x202b] != 0) {
    iVar12 = 0;
    if (0 < *(int *)(local_18[0x202b] + 0x14)) {
      do {
        pcVar9 = *(char **)(local_18[0x202b] + iVar12 * 4 + 0x18);
        if (((uint)(byte)(&DAT_03000f77)[*(ushort *)(pcVar9 + 2) >> 3] &
            1 << (*(ushort *)(pcVar9 + 2) & 7)) == 0) {
          if ((DAT_03000e91 & 8) != 0) {
            piVar4 = (int *)(pcVar9 + 4);
            pcVar2 = pcVar9;
            goto _08017B6E;
          }
        }
        else {
          piVar4 = (int *)(pcVar9 + 0x14);
          pcVar2 = pcVar9 + (*(int *)(pcVar9 + 0x10) - *(int *)(pcVar9 + 8)) *
                            (*(int *)(pcVar9 + 0xc) - *(int *)(pcVar9 + 4)) * 2;
_08017B6E:
          psVar10 = (short *)(pcVar2 + 0x24);
          iVar7 = *piVar4;
          if ((iVar7 != piVar4[2]) || (piVar4[1] != piVar4[3])) {
            iStack_1c = *piVar11;
            if ((iStack_1c == local_18[0x2024]) && (local_18[0x2023] == local_18[0x2025])) {
              iVar7 = piVar4[1];
              iVar8 = piVar4[2];
              *piVar11 = *piVar4;
              local_18[0x2023] = iVar7;
              local_18[0x2024] = iVar8;
              local_18[0x2025] = piVar4[3];
            }
            else {
              if (iVar7 < iStack_1c) {
                *piVar11 = iVar7;
              }
              if (piVar4[1] < local_18[0x2023]) {
                local_18[0x2023] = piVar4[1];
              }
              if (local_18[0x2024] < piVar4[2]) {
                local_18[0x2024] = piVar4[2];
              }
              if (local_18[0x2025] < piVar4[3]) {
                local_18[0x2025] = piVar4[3];
              }
            }
          }
          if ((DAT_03002080 == *pcVar9) && (DAT_03002081 == pcVar9[1])) {
            local_20 = pcVar9;
          }
          iVar7 = piVar4[1];
          if (iVar7 < piVar4[3]) {
            do {
              iVar8 = *piVar4;
              if (iVar8 < piVar4[2]) {
                do {
                  sVar1 = *psVar10;
                  psVar10 = psVar10 + 1;
                  if (sVar1 != 0) {
                    *(short *)((int)local_18 + iVar8 * 2 + iVar7 * 0x100 + 0x78) = sVar1;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < piVar4[2]);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < piVar4[3]);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(local_18[0x202b] + 0x14));
    }
    *piVar11 = *piVar11 << 3;
    local_18[0x2023] = local_18[0x2023] << 3;
    local_18[0x2024] = local_18[0x2024] << 3;
    local_18[0x2025] = local_18[0x2025] << 3;
    local_18[0x201e] = local_18[0x2022] + -0xdf;
    local_18[0x201f] = local_18[0x2023] + -0x8f;
    local_18[0x2020] = local_18[0x2024] + -0x11;
    iVar12 = local_18[0x2025];
    local_18[0x2022] = local_18[0x2022] + -0x10;
    local_18[0x2023] = local_18[0x2023] + -0x10;
    local_18[0x2024] = local_18[0x2024] + -0xe0;
    local_18[0x2025] = iVar12 + -0x90;
    piVar13 = local_18 + 0x2026;
    local_18[0x2021] = iVar12 + -0x11;
    iVar12 = sub_08006E0A(DAT_03001d18,7,0);
    sub_0800791A(&iStack_28,iVar12);
    pcVar9 = local_20;
    iVar12 = __16__rt_sdiv(DAT_030010e4,
                           iStack_28 * (*(int *)(local_20 + 0xc) - *(int *)(local_20 + 4)) * 8 +
                           ((int)DAT_030010e4 >> 1));
    *piVar13 = iVar12 + *(int *)(local_20 + 4) * 8;
    iVar12 = __16__rt_sdiv(DAT_030010e8,
                           iStack_24 * (*(int *)(pcVar9 + 0x10) - *(int *)(pcVar9 + 8)) * 8 +
                           ((int)DAT_030010e8 >> 1));
    piVar11 = local_18;
    piVar3[0x2027] = iVar12 + *(int *)(local_20 + 8) * 8;
    piVar4 = local_18 + 0x2026;
    iVar12 = sub_08016B96((undefined4 *)0x0,piVar4);
    sub_080068B8(0x3001120,iVar12);
    *piVar13 = *piVar13 + -0x78;
    piVar3[0x2027] = piVar3[0x2027] + -0x50;
    piVar11[0x2028] = *piVar4 + 0xf0;
    piVar11[0x2029] = piVar11[0x2027] + 0xa0;
    puVar5 = (undefined2 *)sub_0801F08C(*(int *)(*(int *)piVar3[0x202b] + 4));
    sub_0801F394(*(int **)piVar3[0x202b],(int)puVar5);
    REG_DMA3SAD = puVar5;
    REG_DMA3DAD = 0x6000000;
    Ram040000dc = (short)(*(uint *)(*(int *)piVar3[0x202b] + 4) >> 2);
    DAT_040000de = 0x8400;
    sub_0801F110(puVar5);
    if (*(int *)(piVar3[0x202b] + 8) != 0) {
      iVar12 = sub_080067AC(&DAT_03001120,*(int *)(*(int *)(piVar3[0x202b] + 0x10) + 4));
      puVar5 = (undefined2 *)sub_0801F08C(*(int *)(*(int *)(piVar3[0x202b] + 0x10) + 4));
      sub_0801F394(*(int **)(piVar3[0x202b] + 0x10),(int)puVar5);
      sub_0801F412(&REG_DMA3SAD,iVar12 * 0x20 + 0x6010000,(int)puVar5,
                   *(uint *)(*(int *)(piVar3[0x202b] + 0x10) + 4));
      sub_0801F110(puVar5);
      iVar7 = *(int *)(piVar3[0x202b] + 0xc);
      puVar6 = (undefined4 *)sub_0801F08C(0x18);
      if (puVar6 != (undefined4 *)0x0) {
        sub_08016E8C(puVar6,iVar7,0,(short)iVar12);
        *puVar6 = &_08025EE8;
      }
      sub_080068B8(0x3001120,(int)puVar6);
      iVar7 = 1;
      if (1 < *(int *)(piVar3[0x202b] + 8)) {
        do {
          iVar8 = sub_08016E8C((undefined4 *)0x0,*(int *)(piVar3[0x202b] + 0xc) + iVar7 * 0x18,
                               (short)iVar7,(short)iVar12);
          sub_080068B8(0x3001120,iVar8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(piVar3[0x202b] + 8));
      }
    }
    if (*(byte **)(piVar3[0x202b] + 4) != (byte *)0x0) {
      auStack_d8[0] = 0;
      uStack_94 = 0;
      sub_080092E4(auStack_d8,*(byte **)(piVar3[0x202b] + 4),(undefined1 *)0x0);
    }
  }
  iVar12 = sub_08016D40((undefined4 *)0x0,0);
  sub_080068B8(0x3001120,iVar12);
  iVar12 = sub_08016D40((undefined4 *)0x0,1);
  sub_080068B8(0x3001120,iVar12);
  iVar12 = sub_08016D40((undefined4 *)0x0,2);
  sub_080068B8(0x3001120,iVar12);
  iVar12 = sub_08016D40((undefined4 *)0x0,3);
  sub_080068B8(0x3001120,iVar12);
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1d40;
  return;
}


/* sub_08017E88 @ 0x08017E88 */

void sub_08017E88(int *param_1)

{
  sub_0801FC22(0x3002c80,0x80e17d8);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_08017EB2 @ 0x08017EB2 */

void sub_08017EB2(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x8098) + -8;
  uVar6 = iVar5 * 0x1000000;
  iVar3 = *(int *)(param_1 + 0x809c) + -0x30;
  uVar7 = uVar6 >> 0x1b;
  iVar8 = iVar3 >> 8;
  uVar2 = (ushort)(uVar6 >> 0x10);
  sVar1 = 0x20 - (uVar2 >> 0xb);
  iVar5 = iVar5 >> 8;
  uVar6 = (uint)(iVar3 * 0x1000000) >> 0x1b;
  if (iVar8 < 0) {
    uVar4 = uVar6;
    if (uVar6 < 0x20) {
      do {
        DAT_03003914 = 0;
        REG_DMA3SAD = 0x3003914;
        REG_DMA3DAD = &DAT_0600f000 + uVar4 * 0x40;
        Ram040000dc = 0x10;
        DAT_040000de = 0x8500;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 0x20);
    }
  }
  else {
    if (iVar5 < 0) {
      if (uVar6 < 0x20) {
        uVar4 = uVar6;
        do {
          DAT_03003910 = 0;
          REG_DMA3SAD = 0x3003910;
          REG_DMA3DAD = &DAT_0600f000 + uVar7 * 2 + uVar4 * 0x40;
          Ram040000dc = sVar1;
          DAT_040000de = 0x8100;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0x20);
      }
    }
    else if (uVar6 < 0x20) {
      uVar4 = uVar6;
      do {
        REG_DMA3SAD = uVar4 * 0x100 + iVar8 * 0x2000 + param_1 + iVar5 * 0x40 + 0x78 + uVar7 * 2;
        REG_DMA3DAD = &DAT_0600f000 + uVar7 * 2 + uVar4 * 0x40;
        Ram040000dc = sVar1;
        DAT_040000de = 0x8000;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 0x20);
    }
    if (uVar7 != 0) {
      if (iVar5 < 3) {
        uVar4 = uVar6;
        if (uVar6 < 0x20) {
          do {
            REG_DMA3SAD = uVar4 * 0x100 + iVar8 * 0x2000 + param_1 + iVar5 * 0x40 + 0xb8;
            REG_DMA3DAD = &DAT_0600f000 + uVar4 * 0x40;
            Ram040000dc = uVar2 >> 0xb;
            DAT_040000de = 0x8000;
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < 0x20);
        }
      }
      else {
        uVar4 = uVar6;
        if (uVar6 < 0x20) {
          do {
            DAT_03003910 = 0;
            REG_DMA3SAD = 0x3003910;
            REG_DMA3DAD = &DAT_0600f000 + uVar4 * 0x40;
            Ram040000dc = uVar2 >> 0xb;
            DAT_040000de = 0x8100;
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < 0x20);
        }
      }
    }
  }
  if (iVar8 < 3) {
    if (iVar5 < 0) {
      iVar3 = 0;
      if (uVar6 != 0) {
        do {
          DAT_03003910 = 0;
          REG_DMA3SAD = 0x3003910;
          REG_DMA3DAD = &DAT_0600f000 + uVar7 * 2 + iVar3 * 0x40;
          Ram040000dc = sVar1;
          DAT_040000de = 0x8100;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar6);
      }
    }
    else {
      iVar3 = 0;
      if (uVar6 != 0) {
        do {
          REG_DMA3SAD = iVar3 * 0x100 + iVar8 * 0x2000 + param_1 + iVar5 * 0x40 + 0x2078 + uVar7 * 2
          ;
          REG_DMA3DAD = &DAT_0600f000 + uVar7 * 2 + iVar3 * 0x40;
          Ram040000dc = sVar1;
          DAT_040000de = 0x8000;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar6);
      }
    }
    if (uVar7 != 0) {
      if (iVar5 < 3) {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            REG_DMA3SAD = iVar3 * 0x100 + iVar8 * 0x2000 + param_1 + iVar5 * 0x40 + 0x20b8;
            REG_DMA3DAD = &DAT_0600f000 + iVar3 * 0x40;
            Ram040000dc = uVar2 >> 0xb;
            DAT_040000de = 0x8000;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar6);
        }
      }
      else {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            DAT_03003910 = 0;
            REG_DMA3SAD = 0x3003910;
            REG_DMA3DAD = &DAT_0600f000 + iVar3 * 0x40;
            Ram040000dc = uVar2 >> 0xb;
            DAT_040000de = 0x8100;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar6);
        }
      }
    }
  }
  else if (uVar6 < 0x20) {
    do {
      DAT_03003914 = 0;
      REG_DMA3SAD = 0x3003914;
      REG_DMA3DAD = &DAT_0600f000 + uVar6 * 0x40;
      Ram040000dc = 0x10;
      DAT_040000de = 0x8500;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x20);
  }
  return;
}


/* sub_08018154 @ 0x08018154 */

void sub_08018154(int param_1)

{
  REG_BG2HOFS = (short)*(undefined4 *)(param_1 + 0x8098);
  REG_BG2VOFS = (short)*(undefined4 *)(param_1 + 0x809c);
  REG_BG3HOFS = (short)*(undefined4 *)(param_1 + 0x8098);
  REG_BG3VOFS = (short)*(undefined4 *)(param_1 + 0x809c);
  return;
}


/* sub_0801816C @ 0x0801816C */

void sub_0801816C(int *param_1)

{
  uint uVar1;
  
  if (((int)((uint)DAT_030022ae << 0x1a) < 0) && (param_1[0x201e] < param_1[0x2026])) {
    param_1[0x2026] = param_1[0x2026] + -1;
  }
  if (((int)((uint)DAT_030022ae << 0x1b) < 0) && (param_1[0x2026] < param_1[0x2020])) {
    param_1[0x2026] = param_1[0x2026] + 1;
  }
  if (((int)((uint)DAT_030022ae << 0x19) < 0) && (param_1[0x201f] < param_1[0x2027])) {
    param_1[0x2027] = param_1[0x2027] + -1;
  }
  if (((int)((uint)DAT_030022ae << 0x18) < 0) && (param_1[0x2027] < param_1[0x2021])) {
    param_1[0x2027] = param_1[0x2027] + 1;
  }
  param_1[0x2028] = param_1[0x2026] + 0xf0;
  param_1[0x2029] = param_1[0x2027] + 0xa0;
  if ((uint)(((uint)DAT_030022ae << 0x18) >> 0x1c != 0) != param_1[0x202a]) {
    uVar1 = (uint)(((uint)DAT_030022ae << 0x18) >> 0x1c != 0);
    param_1[0x202a] = uVar1;
    if (uVar1 == 0) {
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


/* sub_0801823C @ 0x0801823C */

int sub_0801823C(int param_1)

{
  return *(int *)(param_1 + 0x8098) >> 1;
}


/* sub_08018246 @ 0x08018246 */

int sub_08018246(int param_1)

{
  return *(int *)(param_1 + 0x809c) >> 1;
}


/* sub_08018250 @ 0x08018250 */

void sub_08018250(void)

{
  sub_08018540((undefined4 *)0x0);
  return;
}


/* sub_0801825A @ 0x0801825A */

undefined4 * sub_0801825A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x78);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_080174A4(puVar1);
  *puVar1 = &_080246E8;
  puVar1[1] = &LAB_08024730;
  return puVar1;
}


/* sub_0801827C @ 0x0801827C */

void sub_0801827C(int *param_1)

{
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_08017ACC(param_1);
  return;
}


/* sub_080182D0 @ 0x080182D0 */

void sub_080182D0(int *param_1)

{
  undefined2 *puVar1;
  undefined4 local_64 [17];
  undefined4 local_20;
  int local_1c [4];
  
  sub_080174EA(param_1,1);
  puVar1 = (undefined2 *)sub_0801F08C(0x6800);
  sub_0801F394((int *)&gUnknown_086F8144,(int)puVar1);
  sub_0801F412(&REG_DMA3SAD,0x6000000,(int)puVar1,0x6800);
  sub_0801F110(puVar1);
  DAT_03003914 = 0;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = 0x600f000;
  Ram040000dc = 0x200;
  DAT_040000de = 0x8500;
  local_1c[0] = 2;
  local_1c[1] = 2;
  local_1c[2] = 0x1c;
  local_1c[3] = 0x12;
  sub_0801F508(local_1c,0x600f000,0);
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1d40;
  local_64[0] = 0;
  local_20 = 0;
  sub_080092E4(local_64,&DAT_086f8088,(undefined1 *)0x0);
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  return;
}


/* sub_0801835C @ 0x0801835C */

void sub_0801835C(void)

{
  sub_08017A50((undefined4 *)0x0);
  return;
}


/* sub_08018366 @ 0x08018366 */

void sub_08018366(int *param_1)

{
  if ((DAT_030022b0 & 1) != 0) {
    __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  }
  return;
}


/* sub_08018398 @ 0x08018398 */

undefined4 *
sub_08018398(undefined4 *param_1,int *param_2,int *param_3,undefined1 param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_3[1];
    iVar4 = *param_3;
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)(iVar2 * iVar4);
    uVar1 = sub_080067AC(&DAT_03001120,iVar2 * iVar4);
    *(ushort *)(param_1 + 3) = uVar1;
    *param_1 = &_08024EBC;
    sub_0801F412(&REG_DMA3SAD,(uint)uVar1 * 0x20 + 0x6010000,param_5,param_3[1] * *param_3);
    *(undefined1 *)(param_1 + 2) = param_4;
    param_1[1] = param_2[1] + param_3[1];
    param_1[5] = 1;
    param_1[4] = 0;
    iVar2 = *param_3;
    if (iVar2 == 8) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x2000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0xa000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x4000a000;
      }
    }
    else if (iVar2 == 0x10) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x6000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0x40002000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x8000a000;
      }
    }
    else if (iVar2 == 0x20) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x40006000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0x80006000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x80002000;
      }
      else if (iVar2 == 0x40) {
        param_1[4] = 0xc000a000;
      }
    }
    else if (iVar2 == 0x40) {
      if (param_3[1] == 0x20) {
        param_1[4] = 0xc0006000;
      }
      else if (param_3[1] == 0x40) {
        param_1[4] = 0xc0002000;
      }
    }
    uVar3 = param_1[4] | (uint)(*param_2 << 0x17) >> 7;
    param_1[4] = uVar3;
    param_1[4] = uVar3 | param_2[1] & 0xffU;
  }
  return param_1;
}


/* sub_080184AE @ 0x080184AE */

void sub_080184AE(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfe00ff00;
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = uVar1 | (uint)(*param_2 << 0x17) >> 7;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x10) = param_2[1] & 0xffU | uVar1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


/* sub_080184D0 @ 0x080184D0 */

undefined4 sub_080184D0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = puVar2[1];
  uVar1 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar2[1] = uVar1 | uVar3 & 0xfffffc00;
  puVar2[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar1 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_08018540 @ 0x08018540 */

undefined4 * sub_08018540(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x40c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080174A4(param_1);
  *param_1 = &_080244A8;
  param_1[1] = &LAB_080244f0;
  param_1[0x1e] = 0;
  sub_08006DA6(DAT_03001d18,0x14,param_1 + 0x1e);
  return param_1;
}


/* sub_08018580 @ 0x08018580 */

void sub_08018580(int *param_1)

{
  int iVar1;
  int iVar2;
  
  sub_080174EA(param_1,1);
  param_1[0x101] = 0;
  param_1[0xff] = 0;
  iVar2 = 0;
  if (0 < param_1[0x1e]) {
    do {
      iVar1 = sub_08018EFC((undefined4 *)0x0,param_1 + iVar2 * 7 + 0x1f);
      sub_080068B8(0x3001120,iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x1e]);
  }
  iVar2 = sub_080187F0((undefined4 *)0x0);
  param_1[0x102] = iVar2;
  sub_080068B8(0x3001120,iVar2);
  REG_DISPCNT = 0x1940;
  return;
}


/* sub_080185E6 @ 0x080185E6 */

void sub_080185E6(void)

{
  sub_08017A50((undefined4 *)0x0);
  return;
}


/* sub_080185F0 @ 0x080185F0 */

void sub_080185F0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      iVar2 = iVar1 * 0x1c + param_1 + 0x78;
      if ((((*(int *)(iVar2 + 0xc) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x14))) &&
          (*(int *)(iVar2 + 0x10) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x18))) {
        iVar3 = *param_2 - (*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14) >> 1);
        iVar5 = param_2[1] - (*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x18) >> 1);
        if (iVar3 * iVar3 + iVar5 * iVar5 < 0x7fffffff) {
          iVar4 = *(int *)(iVar2 + 0x1c);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x78));
  }
  iVar1 = *(int *)(param_1 + 0x404);
  if (iVar1 != iVar4) {
    if (iVar1 != 0) {
      sub_08018F72(iVar1);
    }
    *(int *)(param_1 + 0x404) = iVar4;
    if (iVar4 != 0) {
      sub_08018F4E(iVar4);
    }
  }
  return;
}


/* sub_080186A0 @ 0x080186A0 */

void sub_080186A0(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = *(int *)(*(int *)(param_1 + 0x408) + 0xc10) >> 8;
  local_8 = *(int *)(*(int *)(param_1 + 0x408) + 0xc14) >> 8;
  sub_080185F0(param_1,&local_c);
  return;
}


/* sub_080186D6 @ 0x080186D6 */

void sub_080186D6(int param_1)

{
  if ((DAT_030022b2 & 1) != 0) {
    if (*(int *)(param_1 + 0x404) != 0) {
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x404);
      *(undefined4 *)(param_1 + 0x3fc) = 1;
      sub_08017794(param_1);
      sub_0801FC9C(0x3002c80,&DAT_080e17c0,0x40,0);
      REG_BLDCNT = 0x3f5f;
    }
  }
  return;
}


/* sub_0801871C @ 0x0801871C */

undefined4 sub_0801871C(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1[0xff] == 0) {
    uVar3 = sub_080177CE(param_1);
  }
  else {
    uVar1 = sub_08018F7E(param_1[0x100]);
    piVar2 = (int *)sub_08018A38((undefined4 *)0x0,uVar1);
    sub_0801F2CE(piVar2);
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_0801874C @ 0x0801874C */

int sub_0801874C(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x408) + 0xc10) >> 10;
}


/* sub_08018774 @ 0x08018774 */

int sub_08018774(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x408) + 0xc14) >> 10;
}


/* sub_0801879C @ 0x0801879C */

void sub_0801879C(int *param_1)

{
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_08018580(param_1);
  return;
}


/* sub_080187F0 @ 0x080187F0 */

undefined4 * sub_080187F0(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0xc28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x400;
  uVar1 = sub_080067AC(&DAT_03001120,0x400);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_08025B04;
  param_1[0x304] = 0x7800;
  param_1[0x305] = 0x5000;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  sub_0801F394((int *)&DAT_086f86f4,(int)(param_1 + 4));
  REG_DMA3SAD = param_1 + 4;
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010000;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8400;
  *(undefined1 *)(param_1 + 2) = 0x10;
  param_1[0x309] = 0;
  param_1[0x308] = 0;
  return param_1;
}


/* sub_08018870 @ 0x08018870 */

void sub_08018870(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_030022b0 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 1;
    *(undefined4 *)(param_1 + 0xc20) = 0;
  }
  if ((DAT_030022b2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc20);
  if (*(int *)(param_1 + 0xc24) == 0) {
    if (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(int *)(param_1 + 0xc20) = iVar1;
      if (-1 < iVar1 * -0x80000000) {
        REG_DMA3SAD = (iVar1 >> 1) * 0x400 + param_1 + 0x10;
        REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
        Ram040000dc = 0x100;
        DAT_040000de = 0x8400;
      }
    }
  }
  else if (iVar1 < 4) {
    iVar1 = iVar1 + 1;
    *(int *)(param_1 + 0xc20) = iVar1;
    if (-1 < iVar1 * -0x80000000) {
      REG_DMA3SAD = (iVar1 >> 1) * 0x400 + param_1 + 0x10;
      REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
      Ram040000dc = 0x100;
      DAT_040000de = 0x8400;
    }
  }
  piVar2 = (int *)(param_1 + 0xc18);
  if ((int)((uint)DAT_030022ae << 0x1a) < 0) {
    *piVar2 = *piVar2 + -0x80;
  }
  if ((int)((uint)DAT_030022ae << 0x1b) < 0) {
    *piVar2 = *piVar2 + 0x80;
  }
  piVar4 = (int *)(param_1 + 0xc1c);
  if ((int)((uint)DAT_030022ae << 0x19) < 0) {
    *piVar4 = *piVar4 + -0x80;
  }
  if ((int)((uint)DAT_030022ae << 0x18) < 0) {
    *piVar4 = *piVar4 + 0x80;
  }
  piVar3 = (int *)(param_1 + 0xc10);
  *piVar3 = *piVar3 + *piVar2;
  *(int *)(param_1 + 0xc14) = *(int *)(param_1 + 0xc14) + *(int *)(param_1 + 0xc1c);
  iVar1 = *(int *)(param_1 + 0xc18) * 3;
  *(int *)(param_1 + 0xc18) = (int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2;
  iVar1 = *(int *)(param_1 + 0xc1c) * 3;
  *(int *)(param_1 + 0xc1c) = (int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2;
  if (*piVar3 < 0x1000) {
    *piVar3 = 0x1000;
    *piVar2 = 0;
  }
  if (0xe000 < *piVar3) {
    *piVar3 = 0xe000;
    *piVar2 = 0;
  }
  piVar2 = (int *)(param_1 + 0xc14);
  if (*piVar2 < 0x1000) {
    *piVar2 = 0x1000;
    *piVar4 = 0;
  }
  if (0x9000 < *piVar2) {
    *piVar2 = 0x9000;
    *piVar4 = 0;
  }
  return;
}


/* sub_080189B8 @ 0x080189B8 */

undefined4 sub_080189B8(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x80002000;
  uVar2 = (uint)(((*(int *)(param_1 + 0xc10) >> 8) + -0x10) * 0x800000) >> 7 | 0x80002000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | (*(int *)(param_1 + 0xc14) >> 8) + 0xf0U & 0xff;
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x400;
  return 0;
}


/* sub_08018A38 @ 0x08018A38 */

undefined4 * sub_08018A38(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [36];
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x94), param_1 != (undefined4 *)0x0)) {
    sub_080174A4(param_1);
    *param_1 = &_08024448;
    param_1[1] = &LAB_08024490;
    (&DAT_03000faa)[(int)param_2 >> 3] =
         (&DAT_03000faa)[(int)param_2 >> 3] | (byte)(1 << (param_2 & 7));
    param_1[0x22] = &gUnknown_086F8E40 + param_2 * 0x14;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)((int)param_1 + 0x79) = 0;
    uStack_48 = 0;
    pcStack_44 = (char *)0x0;
    uStack_40 = 0xa0;
    iStack_3c = 0x40;
    iVar1 = 0;
    sub_0801F58C(auStack_38,&gUnknown_0802CC64,&uStack_48);
    pcStack_44 = *(char **)(param_1[0x22] + 4);
    do {
      sub_0801F7FC((int)auStack_38,pcStack_44,0xa0,&uStack_48);
      iVar1 = iVar1 + 1;
    } while (iStack_3c == 0);
    iVar1 = iVar1 * 0x10 + -0x38;
    param_1[0x20] = iVar1;
    if (iVar1 < 0) {
      param_1[0x20] = 0;
    }
  }
  return param_1;
}


/* sub_08018ADE @ 0x08018ADE */

void sub_08018ADE(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024448;
  param_1[1] = &LAB_08024490;
  if ((undefined2 *)param_1[0x21] != (undefined2 *)0x0) {
    sub_08020EAA((undefined2 *)param_1[0x21],1);
  }
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08018B14 @ 0x08018B14 */

void sub_08018B14(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08020E5C((undefined1 *)0x0,0xa0,*(int *)(param_1 + 0x80) + 0x40);
  *(int *)(param_1 + 0x84) = iVar1;
  *(undefined **)(iVar1 + 0xc) = &gUnknown_0802CC64;
  *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x29) = 2;
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0xe;
  *(undefined1 *)(*(int *)(param_1 + 0x84) + 1) = 0x10;
  sub_08021F18(*(undefined4 **)(*(int *)(param_1 + 0x84) + 0x24),0,
               *(uint *)(*(int *)(param_1 + 0x84) + 0x34));
  sub_0801F702(*(char **)(param_1 + 0x84),0xa0,*(byte **)(*(int *)(param_1 + 0x88) + 4));
  return;
}


/* sub_08018B5E @ 0x08018B5E */

void sub_08018B5E(void)

{
  return;
}


/* sub_08018B60 @ 0x08018B60 */

void sub_08018B60(int param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = 0;
  local_18 = *(undefined4 *)(param_1 + 0x7c);
  local_14 = 0xa0;
  local_10 = *(int *)(param_1 + 0x7c) + 0x40;
  sub_080236CC(*(int *)(param_1 + 0x84),0x6009800,(int)&local_1c);
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x7c));
  *(uint *)(*(int *)(param_1 + 0x90) + 0x20) =
       (uint)(*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x80));
  return;
}


/* sub_08018BAA @ 0x08018BAA */

void sub_08018BAA(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_030022ae << 0x19) < 0) && (param_1[0x1f] != 0)) {
    param_1[0x1f] = param_1[0x1f] + -1;
    sub_08018B60((int)param_1);
    cVar1 = '\x01';
  }
  if (((int)((uint)DAT_030022ae << 0x18) < 0) && (param_1[0x1f] < param_1[0x20])) {
    param_1[0x1f] = param_1[0x1f] + 1;
    sub_08018B60((int)param_1);
    cVar1 = '\x01';
  }
  if (*(char *)((int)param_1 + 0x79) != cVar1) {
    *(char *)((int)param_1 + 0x79) = cVar1;
    if (cVar1 == '\0') {
      sub_0801FC22(0x3002c80,0x80e17d8);
    }
    else {
      sub_0801FC9C(0x3002c80,&DAT_080e17d8,0x40,0);
    }
  }
  if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  if ((DAT_030022b0 & 1) != 0) {
    __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  }
  return;
}


/* sub_08018C40 @ 0x08018C40 */

undefined4 sub_08018C40(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x1e] != '\0') {
    piVar1 = (int *)sub_0801F08C(0x40c);
    if (piVar1 != (int *)0x0) {
      sub_08018540(piVar1);
      *piVar1 = (int)&_080253CC;
      piVar1[1] = (int)&LAB_08025414;
    }
    sub_0801F2CE(piVar1);
    return 0;
  }
  uVar2 = sub_080177CE(param_1);
  return uVar2;
}


/* sub_08018C72 @ 0x08018C72 */

void sub_08018C72(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_105c [4];
  undefined1 auStack_104c [4096];
  undefined2 auStack_4c [18];
  int local_28;
  int local_24 [4];
  
  sub_08006C24(&DAT_03001120);
  piVar1 = (int *)sub_0800BDCC(*(int *)(*(int *)(param_1 + 0x88) + 0xc));
  sub_08020E5C((undefined1 *)auStack_4c,0xf0,0xa0);
  sub_0801F394((int *)&DAT_086f88d0,local_28);
  sub_0801790E(*(undefined4 **)(param_1 + 0x88),(undefined1 *)auStack_4c);
  sub_08021344((int)auStack_4c,0x6000000);
  sub_08020EAA(auStack_4c,0);
  if (piVar1 != (int *)0x0) {
    sub_08020E5C((undefined1 *)auStack_4c,0x40,0x40);
    sub_0801F394(piVar1,local_28);
    sub_08021344((int)auStack_4c,(int)auStack_104c);
    local_105c[2] = 0xa8;
    local_105c[3] = 8;
    local_105c[0] = 0x40;
    local_105c[1] = 0x40;
    iVar2 = sub_08018398((undefined4 *)0x0,local_105c + 2,local_105c,0,(int)auStack_104c);
    sub_080068B8(0x3001120,iVar2);
    sub_08020EAA(auStack_4c,0);
  }
  piVar1 = (int *)sub_08019010((undefined4 *)0x0,*(int *)(param_1 + 0x88));
  sub_080068B8(0x3001120,(int)piVar1);
  __call_via_r2(piVar1,1,(undefined *)(*(int *)(*piVar1 + 0x28) + *piVar1));
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x1e;
  local_24[3] = 0x14;
  sub_0801F508(local_24,0x600f800,0);
  local_24[0] = 5;
  local_24[1] = 0xb;
  local_24[2] = 0x19;
  local_24[3] = 0x13;
  sub_0801F508(local_24,0x600f800,0x260);
  REG_BG3CNT = 0x1f83;
  REG_DISPCNT = 0x1840;
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
  uVar3 = sub_08019E88((undefined4 *)0x0,&gUnknown_086F8D40,1);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar3 = sub_08019E88((undefined4 *)0x0,&gUnknown_086F8D40,0);
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  sub_080068B8(0x3001120,*(int *)(param_1 + 0x8c));
  sub_080068B8(0x3001120,*(int *)(param_1 + 0x90));
  sub_08018B14(param_1);
  sub_08018B60(param_1);
  return;
}


/* sub_08018EBC @ 0x08018EBC */

void sub_08018EBC(int *param_1)

{
  sub_0801FC22(0x3002c80,0x80e17d8);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


