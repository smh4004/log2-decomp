/* Ghidra reference decompilation of code_0800A784 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0800A784 @ 0x0800A784 */

void sub_0800A784(void)

{
  sub_0800A680();
  sub_08003ED4(&DAT_03000e90);
  return;
}


/* sub_0800A794 @ 0x0800A794 */

void sub_0800A794(void)

{
  sub_08003ED4(&DAT_03000e90);
  return;
}


/* sub_0800A796 @ 0x0800A796 */

void sub_0800A796(int param_1)

{
  sub_08003ED4(*(undefined4 *)(param_1 + 0x20));
  return;
}


/* sub_0800A7A0 @ 0x0800A7A0 */

void sub_0800A7A0(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  sub_080063E0(&local_18,DAT_030010fc,1);
  sub_080063E0(&local_18,DAT_03001104,1);
  return;
}


/* sub_0800A7F8 @ 0x0800A7F8 */

void sub_0800A7F8(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  sub_080063E0(&local_18,DAT_030010fc,0);
  sub_080063E0(&local_18,DAT_03001104,0);
  return;
}


/* sub_0800A850 @ 0x0800A850 */

void sub_0800A850(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  sub_080063E0(&local_14,DAT_03001100,1);
  return;
}


/* sub_0800A89E @ 0x0800A89E */

void sub_0800A89E(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  sub_080063E0(&local_14,DAT_03001100,0);
  return;
}


/* sub_0800A8EC @ 0x0800A8EC */

void sub_0800A8EC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar5 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  uVar4 = param_1[iVar1 + -1];
  piVar3 = (int *)0x0;
  if (DAT_03000e90 == uVar4) {
    iVar1 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14
                      );
    iVar2 = *(int *)(iVar1 + 0xc);
    __call_via_r1(*(int **)(&DAT_081d968c +
                           (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                  iVar2 + iVar1,iVar2,(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 4,
                  param_4);
    piVar3 = DAT_03001fa8;
  }
  sub_080042BC(&DAT_03000e9c + (uVar4 & 0xff) * 0x1c,iVar5);
  if (piVar3 != (int *)0x0) {
    iVar1 = sub_08009324(iVar5);
    piVar3[0x12] = iVar1;
    __call_via_r2(piVar3,0,*(int *)(*piVar3 + 0x28) + *piVar3);
    sub_080086A2(piVar3);
  }
  if (DAT_03000e90 == uVar4) {
    iVar1 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14
                      );
    iVar5 = *(int *)(iVar1 + 8);
    __call_via_r1(*(int **)(&DAT_081d968c +
                           (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                  iVar5 + iVar1,iVar5,(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 4,
                  param_4);
  }
  return;
}


/* sub_0800A998 @ 0x0800A998 */

void sub_0800A998(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (iRam0300206c != 0) {
    param_3 = &DAT_03001fd8;
    DAT_03001fd8 = 1;
  }
  sub_0800C2F8(&DAT_03002080,0,param_3,param_4,param_4);
  return;
}


/* sub_0800A99A @ 0x0800A99A */

void sub_0800A99A(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x24) + 0x8c) != 0) {
    param_3 = &DAT_03001fd8;
    DAT_03001fd8 = 1;
  }
  sub_0800C2F8(*(undefined4 *)(param_1 + 0x10),0,param_3,param_4,param_4);
  return;
}


/* sub_0800A9B6 @ 0x0800A9B6 */

void sub_0800A9B6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 1;
  return;
}


/* sub_0800A9DA @ 0x0800A9DA */

void sub_0800A9DA(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] & 0xfffffffe;
  return;
}


/* sub_0800AA10 @ 0x0800AA10 */

void sub_0800AA10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 2;
  return;
}


/* sub_0800AA34 @ 0x0800AA34 */

void sub_0800AA34(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] & 0xfffffffd;
  return;
}


/* sub_0800AA58 @ 0x0800AA58 */

void sub_0800AA58(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000eb0)[param_1[iVar1] * 7] = (&DAT_03000eb0)[param_1[iVar1] * 7] | 0x20;
  return;
}


/* sub_0800AA7C @ 0x0800AA7C */

void sub_0800AA7C(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  (&DAT_03000eb0)[param_1[iVar2 + -1] * 7] =
       (&DAT_03000eb0)[param_1[iVar2 + -1] * 7] | 4 << (uVar1 & 0xff);
  return;
}


/* sub_0800AAAE @ 0x0800AAAE */

void sub_0800AAAE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0800C73A(&DAT_03002080,param_1[iVar1],param_3,param_4,param_4);
  return;
}


/* sub_0800AAC6 @ 0x0800AAC6 */

void sub_0800AAC6(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  if (iVar2 == DAT_030021f8) {
    DAT_03001fd8 = 1;
  }
  sub_0800791A(auStack_1c,iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0x10);
  sub_080068CA(&DAT_03001120,iVar2);
  sub_0800C75C(&DAT_03002080,iVar3,auStack_1c,uVar1);
  return;
}


/* sub_0800AB1A @ 0x0800AB1A */

void sub_0800AB1A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_08009370(param_1[iVar2]);
  uVar1 = sub_080104C0(0,uVar1,0,100,param_4);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AB44 @ 0x0800AB44 */

void sub_0800AB44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar1 = sub_08009370(param_1[iVar2 + -2]);
  uVar1 = sub_080104C0(0,uVar1,iVar3,iVar4,param_4);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AB82 @ 0x0800AB82 */

void sub_0800AB82(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080040AA(&DAT_03000e90,param_1[iVar1] != 0,param_3,param_4,param_4);
  return;
}


/* sub_0800ABA4 @ 0x0800ABA4 */

void sub_0800ABA4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar2) {
    uVar1 = sub_08011802(0,iVar3,&DAT_03001fd0);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}


/* sub_0800ABD6 @ 0x0800ABD6 */

void sub_0800ABD6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    sub_0800C718(&DAT_03002080,iVar2,&DAT_03001fd0);
  }
  return;
}


/* sub_0800AC00 @ 0x0800AC00 */

void sub_0800AC00(void)

{
  undefined4 in_r3;
  
  sub_08006E0A(&DAT_03001120,0x10,0,in_r3,in_r3);
  return;
}


/* sub_0800AC02 @ 0x0800AC02 */

void sub_0800AC02(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006E0A(*(undefined4 *)(param_1 + 8),0x10,0,param_4,param_4);
  return;
}


/* sub_0800AC10 @ 0x0800AC10 */

void sub_0800AC10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  if (0x32 < iVar3) {
    iVar3 = 0x32;
  }
  iVar1 = sub_08004214(&DAT_03000e9c + iVar2 * 0x1c);
  if (iVar1 < iVar3) {
    sub_08003CA0(&DAT_03000e90,iVar2,iVar1,iVar3,param_4);
    sub_08004276(&DAT_03000e9c + iVar2 * 0x1c,iVar3);
  }
  return;
}


/* sub_0800AC5C @ 0x0800AC5C */

void sub_0800AC5C(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2] + -1;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2] + -1;
  uVar1 = sub_08012A68(0,&local_c,&DAT_083b5ca8);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800ACAC @ 0x0800ACAC */

void sub_0800ACAC(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2] + -3;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2] + -3;
  uVar1 = sub_08012A68(0,&local_c,&gUnknown_083B5CE8);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800ACEA @ 0x0800ACEA */

void sub_0800ACEA(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  uVar1 = sub_08012B38(0,&local_14);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AD3E @ 0x0800AD3E */

void sub_0800AD3E(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2] + 0xf;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2] + 0xf;
  uVar1 = sub_08016AB4(0,&local_c);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AD7A @ 0x0800AD7A */

void sub_0800AD7A(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000e9c + param_1[*param_1] * 0x1c);
  return;
}


/* sub_0800AD98 @ 0x0800AD98 */

void sub_0800AD98(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000ea0 + param_1[*param_1] * 0x1c);
  return;
}


/* sub_0800ADB6 @ 0x0800ADB6 */

void sub_0800ADB6(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000e9e + param_1[*param_1] * 0x1c);
  return;
}


/* sub_0800ADD4 @ 0x0800ADD4 */

void sub_0800ADD4(int *param_1)

{
  param_1[*param_1] = (int)*(short *)(&DAT_03000ea2 + param_1[*param_1] * 0x1c);
  return;
}


/* sub_0800ADF2 @ 0x0800ADF2 */

void sub_0800ADF2(int *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar2 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  psVar1 = (short *)(&DAT_03000e9c + param_1[iVar3 + -1] * 0x1c);
  if (*(short *)(&DAT_03000e9e + param_1[iVar3 + -1] * 0x1c) < iVar2) {
    *psVar1 = *(short *)(&DAT_03000e9e + param_1[iVar3 + -1] * 0x1c);
    return;
  }
  if (iVar2 < 0) {
    *psVar1 = 0;
    return;
  }
  *psVar1 = (short)iVar2;
  return;
}


/* sub_0800AE32 @ 0x0800AE32 */

void sub_0800AE32(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1] * 0x1c;
  if (*(short *)(&DAT_03000ea2 + iVar2) < iVar1) {
    *(undefined2 *)(&DAT_03000ea0 + iVar2) = *(undefined2 *)(&DAT_03000ea2 + iVar2);
    return;
  }
  if (iVar1 < 0) {
    *(undefined2 *)(&DAT_03000ea0 + iVar2) = 0;
    return;
  }
  *(short *)(&DAT_03000ea0 + iVar2) = (short)iVar1;
  return;
}


/* sub_0800AE76 @ 0x0800AE76 */

void sub_0800AE76(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  uVar1 = sub_08009370(param_1[iVar3 + -1]);
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08025244;
    puVar2[2] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,puVar2,uVar1);
  return;
}


/* sub_0800AEB8 @ 0x0800AEB8 */

void sub_0800AEB8(void)

{
  DAT_03000e91 = DAT_03000e91 | 4;
  return;
}


/* sub_0800AEC8 @ 0x0800AEC8 */

void sub_0800AEC8(void)

{
  DAT_03000e91 = DAT_03000e91 | 8;
  return;
}


/* sub_0800AED8 @ 0x0800AED8 */

void sub_0800AED8(void)

{
  DAT_0300208c = 0;
  return;
}


/* sub_0800AEE4 @ 0x0800AEE4 */

void sub_0800AEE4(void)

{
  DAT_0300208c = 1;
  return;
}


/* sub_0800AEF0 @ 0x0800AEF0 */

void sub_0800AEF0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_08009324(param_1[iVar2]);
  uVar1 = sub_08019F5C(0,uVar1,&local_c);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AF44 @ 0x0800AF44 */

void sub_0800AF44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08001F04(puVar1,1);
    *puVar1 = &_08023EB8;
  }
  sub_0801F2F4(puVar1);
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0);
  return;
}


/* sub_0800AF72 @ 0x0800AF72 */

void sub_0800AF72(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&gUnknown_081D967C)[(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14];
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = bVar1 & 1;
  return;
}


/* sub_0800AFA0 @ 0x0800AFA0 */

void sub_0800AFA0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080040EE(&DAT_03000e90,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}


/* sub_0800AFC2 @ 0x0800AFC2 */

void sub_0800AFC2(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001fc0;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_0800AFD4 @ 0x0800AFD4 */

void sub_0800AFD4(void)

{
  undefined4 uVar1;
  
  uVar1 = sub_0801C4B0(0);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800AFE8 @ 0x0800AFE8 */

void sub_0800AFE8(void)

{
  sub_08021388();
  return;
}


/* sub_0800AFF0 @ 0x0800AFF0 */

void sub_0800AFF0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08003D58(&DAT_03000e90,DAT_03000e90,param_1[iVar1],param_4,param_4);
  return;
}


/* sub_0800AFF2 @ 0x0800AFF2 */

void sub_0800AFF2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  sub_08003D58(&DAT_03000e90,DAT_03000e90,param_2[iVar1],param_4,param_4);
  return;
}


/* sub_0800B00C @ 0x0800B00C */

void sub_0800B00C(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  sub_08009324(param_1[iVar2]);
  uVar1 = sub_08019102();
  if (uVar1 != 0xffffffff) {
    (&DAT_03000faa)[(int)uVar1 >> 3] = (byte)(1 << (uVar1 & 7)) | (&DAT_03000faa)[(int)uVar1 >> 3];
  }
  return;
}


/* sub_0800B058 @ 0x0800B058 */

void sub_0800B058(undefined4 param_1)

{
  DAT_03001fb0 = param_1;
  return;
}


/* sub_0800B05E @ 0x0800B05E */

void sub_0800B05E(undefined4 param_1)

{
  DAT_03001fb4 = param_1;
  return;
}


/* sub_0800B064 @ 0x0800B064 */

void sub_0800B064(undefined4 param_1)

{
  DAT_03001fb8 = param_1;
  return;
}


/* sub_0800B06A @ 0x0800B06A */

void sub_0800B06A(undefined4 param_1)

{
  DAT_03001fbc = param_1;
  return;
}


/* sub_0800B070 @ 0x0800B070 */

void sub_0800B070(undefined4 param_1)

{
  *DAT_03001fac = param_1;
  return;
}


/* sub_0800B078 @ 0x0800B078 */

void sub_0800B078(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001fac + 4) = param_1;
  return;
}


/* sub_0800B080 @ 0x0800B080 */

void sub_0800B080(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001fac + 8) = param_1;
  return;
}


/* sub_0800B088 @ 0x0800B088 */

void sub_0800B088(undefined4 param_1)

{
  *(undefined4 *)(DAT_03001fac + 0xc) = param_1;
  return;
}


/* sub_0800B090 @ 0x0800B090 */

void sub_0800B090(void)

{
  undefined4 in_r3;
  
  sub_0801F878("Unable to set variable","K:\\Source\\ByteCodeInterpreter\\ByteCodeVariableList.cpp",
               0x1a,0,in_r3);
  return;
}


/* sub_0800B0A0 @ 0x0800B0A0 */

void sub_0800B0A0(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  if (*(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c) < param_1) {
    *psVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    return;
  }
  if (param_1 < 0) {
    *psVar1 = 0;
    return;
  }
  *psVar1 = (short)param_1;
  return;
}


/* sub_0800B0CA @ 0x0800B0CA */

void sub_0800B0CA(short param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_03000e90;
  *(short *)(&DAT_03000e9e + uVar1 * 0x1c) = param_1;
  if (param_1 < *(short *)(&DAT_03000e9c + uVar1 * 0x1c)) {
    *(short *)(&DAT_03000e9c + uVar1 * 0x1c) = param_1;
  }
  return;
}


/* sub_0800B0EC @ 0x0800B0EC */

void sub_0800B0EC(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  if (*(short *)(&DAT_03000ea2 + iVar1) < param_1) {
    *(undefined2 *)(&DAT_03000ea0 + iVar1) = *(undefined2 *)(&DAT_03000ea2 + iVar1);
    return;
  }
  if (param_1 < 0) {
    *(undefined2 *)(&DAT_03000ea0 + iVar1) = 0;
    return;
  }
  *(short *)(&DAT_03000ea0 + iVar1) = (short)param_1;
  return;
}


/* sub_0800B11A @ 0x0800B11A */

void sub_0800B11A(short param_1)

{
  int iVar1;
  
  iVar1 = (uint)DAT_03000e90 * 0x1c;
  *(short *)(&DAT_03000ea2 + iVar1) = param_1;
  if (param_1 < *(short *)(&DAT_03000ea0 + iVar1)) {
    *(undefined2 *)(&DAT_03000ea0 + iVar1) = *(undefined2 *)(&DAT_03000ea2 + iVar1);
  }
  return;
}


/* sub_0800B19C @ 0x0800B19C */

undefined4 * sub_0800B19C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_6c;
  undefined2 uStack_68;
  undefined4 uStack_28;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023FBC;
    param_1[1] = param_3;
    iStack_6c = 0;
    uStack_28 = 0;
    sub_080092E4(&iStack_6c,param_2 + 3,param_4);
    if (iStack_6c == 1) {
      *(undefined2 *)param_1[1] = uStack_68;
    }
  }
  return param_1;
}


/* sub_0800B1E2 @ 0x0800B1E2 */

void sub_0800B1E2(int param_1,char *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_r7;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_1c;
  uint *puStack_18;
  
  iStack_28 = 0xa0;
  if (param_3 != 0) {
    iStack_28 = 0xe0;
  }
  local_2c = 0x28;
  local_30 = 0x78;
  if (param_3 == 0) {
    local_2c = 0x78;
  }
  else if (param_3 == 1) {
    if (-1 < (int)param_4[1]) {
      local_2c = 0x78;
    }
    unaff_r7 = *param_4 >> 0x1f;
  }
  else {
    if ((int)param_4[1] < 0) {
      local_2c = 0x78;
    }
    unaff_r7 = ((int)*param_4 >> 0x1f) + 1;
  }
  pcVar2 = param_2;
  if (*param_2 == '!') {
    local_2c = 0x28;
    pcVar2 = param_2 + 1;
  }
  if (*pcVar2 == '@') {
    local_2c = 0x50;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '#') {
    local_2c = 0x78;
    pcVar2 = pcVar2 + 1;
  }
  iVar3 = param_3;
  if (2 < param_3) {
    iVar3 = 2;
  }
  if ((param_3 - 2U < 6) && ((uint)DAT_03000e90 == param_3 - 2U)) {
    iVar3 = 1;
  }
  if (param_3 != 0x28) {
    if (param_3 < 0x29) {
      switch(param_3) {
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x26:
      case 0x27:
        goto _0800B2A2;
      default:
        goto _0800B2A4;
      }
    }
    if (param_3 != 0x46) {
      if (param_3 < 0x47) {
        if (((param_3 != 0x31) && (param_3 != 0x32)) && (param_3 != 0x35)) goto _0800B2A4;
      }
      else if (((param_3 != 0x54) && (param_3 != 0x56)) && (param_3 != 0x60)) goto _0800B2A4;
    }
  }
_0800B2A2:
  iVar3 = 3;
_0800B2A4:
  iStack_28 = iStack_28 << 6;
  iStack_24 = param_1;
  pcStack_20 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  sub_0800700E(&DAT_03001120);
  uVar1 = sub_0800BDCC(param_3);
  uVar1 = sub_0800BAB4(0,iStack_28,pcVar2,&local_30,iVar3,uVar1,unaff_r7);
  *(undefined4 *)(iStack_24 + 4) = uVar1;
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}


/* sub_0800B2DA @ 0x0800B2DA */

undefined4 sub_0800B2DA(int param_1)

{
  int iVar1;
  
  iVar1 = __call_via_r1(*(int *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 4) + 0xb4));
  if (iVar1 != 0) {
    sub_080068CA(&DAT_03001120,*(undefined4 *)(param_1 + 4));
    sub_0800712E(&DAT_03001120);
    return 1;
  }
  return 0;
}


/* sub_0800B304 @ 0x0800B304 */

undefined4 * sub_0800B304(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int a2;
  int iVar1;
  
  a2 = param_3;
  iVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x808), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080256EC;
    sub_080236A8((int)(param_1 + 2),param_2 + 4,a2,param_4);
    sub_0800B1E2(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),param_3,iVar1);
  }
  return param_1;
}


/* sub_0800B33E @ 0x0800B33E */

undefined4 * sub_0800B33E(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [64];
  undefined4 uStack_38;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x808), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080258F0;
    uStack_7c = 0;
    uStack_38 = 0;
    sub_080092E4(&uStack_7c,param_2 + 8,param_4);
    puStack_80 = auStack_78;
    sub_08021CF0(param_1 + 2,*(undefined4 *)(param_2 + 4),&puStack_80);
    puStack_80 = (undefined1 *)0x0;
    sub_0800B1E2(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),uStack_1c);
  }
  return param_1;
}


/* sub_0800B396 @ 0x0800B396 */

undefined4 * sub_0800B396(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puStack_880;
  undefined4 uStack_87c;
  undefined1 auStack_878 [64];
  undefined4 uStack_838;
  undefined1 auStack_824 [2048];
  undefined4 *puStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  puStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x808), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025F84;
    sub_080236A8((int)auStack_824,param_2 + 8,param_3,param_4);
    uStack_87c = 0;
    uStack_838 = 0;
    sub_080092E4(&uStack_87c,*(undefined4 *)(param_2 + 4),iStack_18);
    puStack_880 = auStack_878;
    sub_08021CF0(param_1 + 2,auStack_824,&puStack_880);
    puStack_880 = (undefined1 *)0x0;
    sub_0800B1E2(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),iStack_1c);
  }
  return param_1;
}


/* sub_0800B428 @ 0x0800B428 */

void sub_0800B428(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B19C(0,param_2,param_1 + 8,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0800B438 @ 0x0800B438 */

undefined4 * sub_0800B438(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 3);
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08023FC8;
    sub_0800B1E2(puVar2,param_2 + 4,uVar1,param_1 + 0xc,param_4);
  }
  return puVar2;
}


/* sub_0800B464 @ 0x0800B464 */

void sub_0800B464(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B33E(0,param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0800B474 @ 0x0800B474 */

void sub_0800B474(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B304(0,param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0800B484 @ 0x0800B484 */

void sub_0800B484(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B396(0,param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}


/* sub_0800B494 @ 0x0800B494 */

void sub_0800B494(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = (undefined4 *)sub_0801F08C(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024AA0;
  }
  return;
}


/* sub_0800B4AE @ 0x0800B4AE */

undefined4 *
sub_0800B4AE(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = param_4[1];
    param_1[3] = *param_4;
    param_1[4] = uVar1;
    param_1[6] = 0;
    param_1[5] = param_5;
    DAT_03001fd8 = 0;
    *(undefined2 *)(param_1 + 2) = *param_3;
    DAT_03001fdc = 1;
    sub_08006DA6(&DAT_03001120,0xd,0);
  }
  return param_1;
}


/* sub_0800B4FC @ 0x0800B4FC */

void sub_0800B4FC(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03001fdc = 0;
  sub_08006DA6(&DAT_03001120,0xe,0,param_4,param_4);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0800B520 @ 0x0800B520 */

undefined4 sub_0800B520(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  
  do {
    if (param_1[6] != 0) {
      iVar2 = *(int *)param_1[6];
      iVar2 = __call_via_r1((int *)param_1[6],*(int *)(iVar2 + 8) + iVar2);
      if (iVar2 != 0) {
        piVar1 = (int *)param_1[6];
        if (piVar1 != (int *)0x0) {
          __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
        }
        param_1[6] = 0;
      }
      return 0;
    }
    while( true ) {
      puVar3 = *(undefined2 **)(*param_1 + (uint)*(ushort *)(param_1 + 2) * 4);
      if ((uint)puVar3 >> 0x10 == 0) {
        *(short *)(param_1 + 2) = (short)puVar3;
        if (DAT_03001fd8 == 0) {
          *(short *)param_1[1] = (short)puVar3;
        }
        return 1;
      }
      *(undefined2 *)(param_1 + 2) = *puVar3;
      piVar1 = (int *)__call_via_r2(param_1,puVar3,
                                    *(undefined4 *)(&UNK_083ec84c + (uint)*(byte *)(puVar3 + 1) * 4)
                                   );
      param_1[6] = (int)piVar1;
      iVar2 = __call_via_r1(piVar1,*(int *)(*piVar1 + 4) + *piVar1);
      if (iVar2 != 0) break;
      piVar1 = (int *)param_1[6];
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      param_1[6] = 0;
    }
  } while( true );
}


/* sub_0800B5C0 @ 0x0800B5C0 */

undefined4 *
sub_0800B5C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 auStack_34 [16];
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x184), param_1 != (undefined4 *)0x0)) {
    sub_0800D668(param_1,uStack_20,param_4,param_5);
    *param_1 = &_080255CC;
    *(undefined2 *)(param_1 + 0x5b) = 0;
    param_1[0x60] = param_3;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    sub_0800793A(auStack_34,param_1);
    sub_080063E0(auStack_34,DAT_030010fc,0);
    sub_080063E0(auStack_34,DAT_03001104,0);
  }
  return param_1;
}


/* sub_0800B632 @ 0x0800B632 */

undefined4 sub_0800B632(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [20];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 == 3) {
    if ((((param_1[0x60] == 0) ||
         (sub_0800793A(&local_24,param_1), iVar1 = DAT_03001fa8, param_3[2] <= local_24)) ||
        (local_1c <= *param_3)) || ((param_3[3] <= local_20 || (local_18 <= param_3[1])))) {
      uVar3 = 0;
    }
    else {
      *(byte *)(param_1 + 4) = *(byte *)(DAT_03001fa8 + 0x10) ^ 1;
      sub_0801FC9C(&DAT_03002c80,&DAT_080e1808,0x40,0);
      local_1c = *(int *)(iVar1 + 0x158) - param_1[0x56];
      local_18 = *(int *)(iVar1 + 0x15c) - param_1[0x57];
      __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
      sub_0800B4AE(auStack_38,param_1[0x60],param_1 + 0x5b,&local_1c,param_1 + 0x5c);
      DAT_030021f8 = param_1;
      puVar2 = (undefined4 *)sub_0801F08C(8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_08023E88;
        puVar2[1] = auStack_38;
      }
      sub_0801F2F4(puVar2);
      DAT_030021f8 = (int *)0x0;
      sub_0800B4FC(auStack_38,0);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = sub_08007B08(param_1);
  }
  return uVar3;
}


/* sub_0800B710 @ 0x0800B710 */

void sub_0800B710(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08009324(*(undefined4 *)(param_1 + 0x10));
  sub_0800B5C0(0,uVar1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,param_1 + 8);
  return;
}


/* sub_0800B734 @ 0x0800B734 */

void sub_0800B734(undefined4 param_1)

{
  undefined1 auStack_18 [16];
  
  sub_0800793A(auStack_18,param_1);
  sub_080063E0(auStack_18,DAT_030010fc,1);
  sub_080063E0(auStack_18,DAT_03001104,1);
  return;
}


/* sub_0800B75C @ 0x0800B75C */

void sub_0800B75C(undefined4 param_1)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_0800793A(&local_1c,param_1);
  if ((((DAT_03001fa8 == 0) || (sub_080088E0(&local_2c), local_24 <= local_1c)) ||
      (local_14 <= local_2c)) || ((local_20 <= local_18 || (local_10 <= local_28)))) {
    sub_080063E0(&local_1c,DAT_030010fc,0);
    sub_080063E0(&local_1c,DAT_03001104,0);
  }
  return;
}


/* sub_0800B7D0 @ 0x0800B7D0 */

void sub_0800B7D0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 3;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + param_1 + 0x5e) = 0;
  } while (iVar2 < 10);
  return;
}


/* sub_0800B7E6 @ 0x0800B7E6 */

void sub_0800B7E6(int param_1)

{
  int a0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  a0 = param_1 + 0x7c;
  local_1c = 0x40;
  local_18 = 0x40;
  local_24 = 0;
  local_20 = 0;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_24);
  local_24 = 0x40;
  local_1c = 0x80;
  local_20 = 0;
  local_18 = 0x40;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_24);
  local_20 = 0;
  local_24 = 0x80;
  local_1c = 0xa0;
  local_18 = 0x40;
  sub_080236CC(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6012000,(int)&local_24);
  return;
}


/* sub_0800B84E @ 0x0800B84E */

void sub_0800B84E(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 3 + param_1;
    if (*(char *)(iVar2 + 0x5e) != '\0') {
      *(undefined1 *)(param_1 + 0xa5) = (&gUnknown_083EC9B0)[iVar3];
      bVar1 = *(byte *)(iVar2 + 0x5d);
      *(uint *)(param_1 + 0x80) = (uint)*(byte *)(iVar2 + 0x5c);
      *(uint *)(param_1 + 0x84) = (uint)bVar1;
      sub_0801F7E2(param_1 + 0x7c,*(undefined1 *)(iVar2 + 0x5e));
    }
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x5c) = *(undefined1 *)(iVar2 + 0x5f);
    *(undefined1 *)(iVar2 + 0x5d) = *(undefined1 *)(iVar2 + 0x60);
    *(undefined1 *)(iVar2 + 0x5e) = *(undefined1 *)(iVar2 + 0x61);
  } while (iVar3 < 9);
  return;
}


/* sub_0800B8A6 @ 0x0800B8A6 */

undefined4 sub_0800B8A6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + -1;
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0800B8B6 @ 0x0800B8B6 */

/* WARNING: Removing unreachable block (ram,0x0800b8f4) */
/* WARNING: Removing unreachable block (ram,0x0800b8f8) */

void sub_0800B8B6(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_r10;
  undefined4 in_r12;
  bool bVar5;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar4 = param_1 + 0x7c;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
      iStack_28 = 0x90;
      sub_0801F7FC(iVar4,*(undefined4 *)(param_1 + 0x10),0x90,&uStack_24);
      *(int *)(param_1 + 0x1c) = iStack_18;
      *(undefined4 *)(param_1 + 0x10) = uStack_24;
      *(undefined4 *)(param_1 + 0x14) = uStack_20;
      *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x0e';
      cVar1 = '\b';
      if (*(int *)(param_1 + 0x24) != 0) {
        cVar1 = (char)(iStack_28 - iStack_1c >> 1) + '\b';
      }
      *(char *)(param_1 + 0x48) = cVar1;
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar3 = 0;
        while ((iVar3 = iVar3 + 1, iVar3 < 4 && (iStack_18 == 0))) {
          sub_0801F7FC(iVar4,uStack_20,iStack_28,&uStack_24);
        }
        cVar1 = '\x0f';
        if (*(int *)(param_1 + 0x24) != 0) {
          cVar1 = ('\x04' - (char)iVar3) * '\a' + '\x0f';
        }
        *(char *)(param_1 + 0x49) = cVar1;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar3;
      if (3 < iVar3) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15F8,0x40,0);
    if (**(char **)(param_1 + 0x14) != '\0') {
      bVar5 = false;
      *(int **)unaff_r10 = &iStack_28;
      *(undefined4 *)(unaff_r10 + -4) = in_r12;
      *(undefined4 *)(unaff_r10 + -8) = 0;
      func_0x07de875c(0,param_1 + 0x80);
      if (bVar5) {
        func_0x07826130();
      }
      sub_0801F394();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x28) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0x800b8a7;
    return;
  }
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if (puVar2 != *(undefined1 **)(param_1 + 0x14)) {
    *(undefined1 *)(param_1 + 0x76) = *puVar2;
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_1 + 0x48);
    cVar1 = sub_0801F60A(iVar4,*puVar2);
    *(char *)(param_1 + 0x48) = cVar1 + *(char *)(param_1 + 0x48);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}


/* sub_0800B9D6 @ 0x0800B9D6 */

undefined4 sub_0800B9D6(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  
  if (((DAT_030022b0 & 1) == 0) && (-1 < (int)((uint)DAT_030022b0 << 0x1e))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (((int)((uint)DAT_030022ae << 0x16) < 0) && (0x22 < *(int *)(param_1 + 0x44))) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -2;
  }
  if (((int)((uint)DAT_030022ae << 0x17) < 0) && (*(int *)(param_1 + 0x44) < 0x7e)) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 2;
  }
  iVar3 = 1;
  sub_0800B84E(param_1);
  uVar2 = (uint)DAT_03000e88;
  if (uVar2 < 4) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      __16__rt_sdiv(5 - uVar2);
      if (extraout_r1 != 0) {
        sub_0800B84E(param_1);
        sub_0800B7E6(param_1);
        return 0;
      }
    }
  }
  else {
    iVar3 = uVar2 - 3;
  }
  do {
    sub_0800B8B6(param_1);
    sub_0800B84E(param_1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  sub_0800B7E6(param_1);
  return 0;
}


/* sub_0800BA84 @ 0x0800BA84 */

undefined4 sub_0800BA84(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x30) = iVar1;
  if (7 < iVar1) {
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    if (**(char **)(param_1 + 0x10) == '^') {
      *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xb4) = 0x800b9d7;
  }
  return 0;
}


/* sub_0800BAB4 @ 0x0800BAB4 */

undefined4 *
sub_0800BAB4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  puStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xb8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)param_2;
    uVar2 = sub_080067AC(&DAT_03001120,param_2);
    *(undefined2 *)(param_1 + 3) = uVar2;
    *param_1 = &_0802403C;
    sub_08020E5C(param_1 + 0x1f,0xa0,0x40);
    param_1[4] = uStack_1c;
    param_1[9] = 0;
    param_1[6] = 0;
    uVar5 = *param_4;
    uVar6 = param_4[1];
    param_1[7] = 0;
    param_1[10] = 1;
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar6;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    param_1[0xe] = 0;
    param_1[0x22] = &gUnknown_0802CC64;
    *(undefined1 *)((int)param_1 + 0x7d) = 0xf;
    param_1[8] = 0;
    if (param_6 == 0) {
      param_1[0xd] = 0xa0;
      iVar3 = param_1[0x10];
      param_1[0x13] = iVar3 + -0x50;
      param_1[0x14] = iVar3 + -0x10;
      param_1[0x15] = iVar3 + 0x30;
    }
    else {
      param_1[0xd] = 0xe0;
      param_1[8] = 1;
      param_1[0x2a] = 0x40;
      param_1[0x2c] = 0x1000;
      param_1[0x2b] = 0x40;
      param_1[0x25] = 0x40;
      param_1[0x26] = 0x40;
      sub_0801F394(param_6,param_1[0x28]);
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0x40;
      uStack_28 = 0x40;
      sub_080236CC((int)(param_1 + 0x1f),(uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6012800,
                   (int)&uStack_34);
      param_1[0x2a] = 0xa0;
      param_1[0x2b] = 0x40;
      param_1[0x2c] = 0x2800;
      param_1[0x25] = 0xa0;
      param_1[0x26] = 0x40;
      iVar3 = param_1[0x10];
      if (param_7 == 0) {
        param_1[0x13] = iVar3 + -0x70;
        param_1[0x14] = iVar3 + -0x30;
        param_1[0x16] = iVar3 + 0x30;
        param_1[0x15] = iVar3 + 0x10;
      }
      else {
        param_1[0x16] = iVar3 + -0x70;
        param_1[0x13] = iVar3 + -0x30;
        param_1[0x15] = iVar3 + 0x50;
        param_1[0x14] = iVar3 + 0x10;
      }
    }
    puVar4 = (&PTR_gUnknown_083ED3E4_083ec9bc)[param_5];
    param_1[0xf] = puVar4;
    sub_0801F394(puVar4,param_1[0x28]);
    sub_0800B7E6(param_1);
    param_1[0xc] = 1;
    param_1[0x2d] = 0x800ba85;
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 3;
      iVar3 = iVar3 + 1;
      *(undefined1 *)((int)param_1 + iVar1 + 0x5e) = 0;
    } while (iVar3 < 10);
  }
  return param_1;
}


/* sub_0800BBEE @ 0x0800BBEE */

int sub_0800BBEE(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar2 = param_2[1];
    puVar13 = (uint *)*param_2;
    param_2[1] = iVar2 + 0x20;
    iVar3 = param_2[2];
    param_2[2] = iVar3 + 1;
    iVar11 = *(int *)(param_1 + 0x30);
    uVar1 = __16__rt_sdiv(iVar11,0x800);
    iVar11 = iVar11 + -8;
    iVar8 = *(int *)(param_1 + 0x44);
    iVar7 = iVar11 * *(int *)(param_1 + 0x40);
    *puVar13 = 0xc0002100;
    iVar12 = iVar11 * 0x20;
    iVar4 = (*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x4c) + iVar12) - iVar7;
    uVar9 = iVar8 + 0xe0U & 0xff;
    uVar5 = (uint)(((int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3) << 0x17) >> 7 | 0xc0002100
            | uVar9;
    *puVar13 = uVar5;
    puVar13[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar13[1] & 0xfffffc00;
    uVar10 = (uint)(iVar3 << 0x1b) >> 2;
    *puVar13 = uVar5 | uVar10;
    puVar13[2] = 0xc0002100;
    iVar3 = (*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x50) + iVar12) - iVar7;
    uVar5 = (uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc0002100
            | uVar9;
    puVar13[2] = uVar5;
    puVar13[3] = *(ushort *)(param_1 + 0xc) + 0x80 & 0x3ff | puVar13[3] & 0xfffffc00;
    puVar13[2] = uVar10 | uVar5;
    puVar6 = puVar13 + 4;
    *puVar6 = 0xc000a100;
    iVar3 = (*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x54) + iVar11 * 0x10) - iVar7;
    uVar5 = (uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc000a100
            | uVar9;
    *puVar6 = uVar5;
    puVar13[5] = *(ushort *)(param_1 + 0xc) + 0x100 & 0x3ff | puVar13[5] & 0xfffffc00;
    *puVar6 = uVar5 | uVar10;
    puVar6 = puVar13 + 6;
    if (*(int *)(param_1 + 0x20) != 0) {
      *puVar6 = 0xc0002100;
      iVar7 = (*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x58) + iVar12) - iVar7;
      uVar9 = (uint)(((int)(((uint)(iVar7 >> 0x1f) >> 0x1d) + iVar7) >> 3) << 0x17) >> 7 |
              0xc0002100 | uVar9;
      *puVar6 = uVar9;
      puVar13[7] = *(ushort *)(param_1 + 0xc) + 0x140 & 0x3ff | puVar13[7] & 0xfffffc00;
      *puVar6 = uVar9 | uVar10;
      puVar6 = puVar13 + 8;
    }
    *(undefined2 *)(iVar2 + 6) = uVar1;
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(undefined2 *)(iVar2 + 0x1e) = uVar1;
    *param_2 = puVar6;
    iVar2 = 0;
  }
  return iVar2;
}


/* sub_0800BDB4 @ 0x0800BDB4 */

void sub_0800BDB4(int param_1)

{
  sub_08006A38(&DAT_03001120);
  sub_0800B520(*(undefined4 *)(param_1 + 4));
  return;
}


/* sub_0800BDCC @ 0x0800BDCC */

int sub_0800BDCC(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      param_1 = sub_08026440(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
    }
    else if (param_1 < 8) {
      param_1 = sub_08026440(&DAT_03000e9c + (param_1 + -2) * 0x1c);
    }
    else {
      param_1 = *(int *)(&DAT_083ec9d4 + param_1 * 4);
    }
  }
  return param_1;
}


/* sub_0800BE14 @ 0x0800BE14 */

void sub_0800BE14(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0x100;
  pbVar4 = &gUnknown_083ECBA4;
  if ((param_4 < 0x101) && (iVar5 = param_4, param_4 < 0)) {
    iVar5 = 0;
  }
  puVar3 = &DAT_05000000;
  iVar2 = 0x100 - iVar5;
  iVar1 = 0x200;
  do {
    *puVar3 = (ushort)((int)(iVar2 * (uint)*pbVar4 + iVar5 * param_1) >> 0xb) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[1] + iVar5 * param_2) >> 0xb) << 5) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[2] + iVar5 * param_3) >> 0xb) << 10);
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_0800BE6C @ 0x0800BE6C */

void sub_0800BE6C(int param_1)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  int iVar4;
  
  param_1 = 0x100 - param_1;
  iVar4 = 0x100;
  pbVar3 = &gUnknown_083ECBA4;
  if ((param_1 < 0x101) && (iVar4 = param_1, param_1 < 0)) {
    iVar4 = 0;
  }
  puVar2 = &DAT_05000000;
  iVar4 = 0x100 - iVar4;
  iVar1 = 0x200;
  do {
    *puVar2 = (ushort)((int)(iVar4 * (uint)*pbVar3) >> 0xb) |
              (ushort)(((int)(iVar4 * (uint)pbVar3[1]) >> 0xb) << 5) |
              (ushort)(((int)(iVar4 * (uint)pbVar3[2]) >> 0xb) << 10);
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_0800BE7A @ 0x0800BE7A */

void sub_0800BE7A(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0x100;
  pbVar4 = &gUnknown_083ECBA4;
  if ((param_1 < 0x101) && (iVar5 = param_1, param_1 < 0)) {
    iVar5 = 0;
  }
  puVar3 = &DAT_05000000;
  iVar2 = 0x100 - iVar5;
  iVar1 = 0x200;
  do {
    *puVar3 = (ushort)((int)(iVar2 * (uint)*pbVar4 + iVar5 * 0xff) >> 0xb) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[1] + iVar5 * 0xff) >> 0xb) << 5) |
              (ushort)(((int)(iVar2 * (uint)pbVar4[2] + iVar5 * 0xff) >> 0xb) << 10);
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* sub_0800BE84 @ 0x0800BE84 */

bool sub_0800BE84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_1[2];
  sub_0800BE14(0,0,0,0x100 - (iVar1 + param_1[2]));
  return 0xff < param_1[1];
}


/* sub_0800BEB6 @ 0x0800BEB6 */

void sub_0800BEB6(void)

{
  sub_080069A4(&DAT_03001120);
  return;
}


/* sub_0800BEC4 @ 0x0800BEC4 */

void sub_0800BEC4(void)

{
  sub_080069A4(&DAT_03001120);
  return;
}


/* sub_0800BED2 @ 0x0800BED2 */

bool sub_0800BED2(int *param_1)

{
  int iVar1;
  
  __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 - param_1[2];
  sub_0800BE14(0,0,0,0x100 - (iVar1 - param_1[2]));
  return param_1[1] < 1;
}


/* sub_0800BF08 @ 0x0800BF08 */

void sub_0800BF08(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  while (iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar2 = iVar1;
    if (piVar3 != (int *)0x0) {
      __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
    }
  }
  *param_1 = 0;
  param_1[0x21] = 1;
  param_1[0x23] = 0;
  param_1[0x22] = param_1[0x22] + 1;
  return;
}


/* sub_0800BF42 @ 0x0800BF42 */

void sub_0800BF42(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      puVar1 = *(undefined4 **)(param_3 + iVar4 * 4);
      iVar2 = __call_via_r1(puVar1,*puVar1);
      iVar3 = *param_1;
      iVar4 = iVar4 + 1;
      *param_1 = iVar3 + 1;
      param_1[iVar3 + 1] = iVar2;
    } while (iVar4 < param_2);
  }
  return;
}


/* sub_0800BF6E @ 0x0800BF6E */

void sub_0800BF6E(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((int *)param_1[iVar1 + 1] == param_2) goto _0800BF8C;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
_0800BF8C:
  *param_1 = iVar2 + -1;
  iVar2 = (iVar2 + -1) - iVar1;
  if (iVar2 != 0) {
    REG_DMA3SAD = param_1 + iVar1 + 2;
    REG_DMA3DAD = param_1 + iVar1 + 1;
    Ram040000dc = (short)iVar2;
    DAT_040000de = 0x8400;
  }
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
  }
  return;
}


/* sub_0800BFC0 @ 0x0800BFC0 */

void sub_0800BFC0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_20 [2];
  short local_1c;
  int *local_18;
  
  iVar2 = DAT_03001fa8;
  if ((DAT_03001fa8 != 0) && (*(short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c) != 0)) {
    sub_0800791A(local_20,DAT_03001fa8);
    local_18 = param_1 + 0x20;
    param_1[0x21] = param_1[0x21] + 1;
    param_1[0x23] = 1;
    iVar1 = *param_1;
    do {
      iVar4 = iVar1 + -1;
      if (iVar4 < 0) break;
      iVar3 = param_1[iVar1];
      iVar1 = iVar4;
    } while ((((local_20[0] < *(short *)(iVar3 + 4)) || (*(short *)(iVar3 + 8) <= local_20[0])) ||
             (local_1c < *(short *)(iVar3 + 6))) ||
            ((*(short *)(iVar3 + 10) <= local_1c ||
             (iVar4 = **(int **)(iVar3 + 0xc),
             iVar4 = __call_via_r3(*(int **)(iVar3 + 0xc),iVar3,iVar2,*(int *)(iVar4 + 4) + iVar4),
             iVar4 == 0))));
    local_18[3] = 0;
  }
  return;
}


/* sub_0800C06E @ 0x0800C06E */

undefined4 sub_0800C06E(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short asStack_1c [2];
  short sStack_18;
  
  iVar2 = DAT_03001fa8;
  if (DAT_03001fa8 == 0) {
    uVar3 = 0;
  }
  else {
    sub_0800791A(asStack_1c,DAT_03001fa8);
    iVar1 = *param_1;
    do {
      iVar5 = iVar1 + -1;
      if (iVar5 < 0) {
        return 0;
      }
      iVar4 = param_1[iVar1];
      iVar1 = iVar5;
    } while ((((asStack_1c[0] < *(short *)(iVar4 + 4)) || (*(short *)(iVar4 + 8) <= asStack_1c[0]))
             || (sStack_18 < *(short *)(iVar4 + 6))) ||
            ((*(short *)(iVar4 + 10) <= sStack_18 ||
             (iVar5 = **(int **)(iVar4 + 0xc),
             iVar5 = __call_via_r2(*(int **)(iVar4 + 0xc),iVar2,*(int *)(iVar5 + 8) + iVar5),
             iVar5 == 0))));
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0800C0F8 @ 0x0800C0F8 */

void sub_0800C0F8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 8) + *piVar3);
    if (iVar4 == 0) {
      iVar4 = *param_1;
      *param_1 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        REG_DMA3SAD = param_1 + iVar2 + 1;
        REG_DMA3DAD = param_1 + iVar2;
        Ram040000dc = (short)iVar4;
        DAT_040000de = 0x8400;
      }
      if (piVar3 != (int *)0x0) {
        __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
      }
    }
  }
  param_1[0x21] = 1;
  param_1[0x23] = 0;
  param_1[0x22] = param_1[0x22] + 1;
  return;
}


/* sub_0800C174 @ 0x0800C174 */

undefined4 * sub_0800C174(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_080240E4;
    param_1[5] = param_2;
    uVar1 = *(byte *)(param_2 + 0x10) & 0xf;
    *(char *)(param_1 + 4) = (char)uVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_083ED1B4)[uVar1];
  }
  return param_1;
}


/* sub_0800C1AC @ 0x0800C1AC */

undefined4 sub_0800C1AC(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((DAT_030022ae & *(byte *)(param_1 + 0x11)) == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x10);
    sub_0800C84C(0);
    sub_0801F2F4();
    iVar2 = sub_0800C584(&DAT_03002080,*(undefined1 *)(iVar5 + 0x11),*(undefined1 *)(iVar5 + 0x12),
                         iVar5 + 0x14,*(undefined1 *)(iVar5 + 0x13),1);
    if (*(int *)(DAT_030010e0 + 0x3c) == 0) {
      bVar1 = *(byte *)(iVar5 + 0x10);
      if (bVar1 >> 4 == 0) {
        *(byte *)(iVar2 + 0x10) = bVar1;
      }
      else {
        *(byte *)(iVar2 + 0x10) = (bVar1 >> 4) - 1;
      }
      sub_0800C88A(0,iVar2);
      sub_0801F2F4();
    }
    else {
      puVar3 = (undefined4 *)sub_0801F08C(0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08023990;
        puVar3[1] = 0;
        puVar3[2] = 4;
      }
      sub_0801F2F4();
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* sub_0800C232 @ 0x0800C232 */

undefined4 * sub_0800C232(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_080240E4;
    puVar1[5] = param_1;
    uVar2 = *(byte *)(param_1 + 0x10) & 0xf;
    *(char *)(puVar1 + 4) = (char)uVar2;
    *(undefined *)((int)puVar1 + 0x11) = (&gUnknown_083ED1B4)[uVar2];
  }
  return puVar1;
}


/* sub_0800C270 @ 0x0800C270 */

undefined4 * sub_0800C270(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x24), param_1 != (undefined4 *)0x0)) {
    sub_08004FF8(param_1,param_2);
    *param_1 = &_08023BC0;
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}


/* sub_0800C2A6 @ 0x0800C2A6 */

undefined4 sub_0800C2A6(int param_1)

{
  undefined4 local_5c [17];
  undefined4 local_18;
  
  local_5c[0] = 0;
  local_18 = 0;
  sub_080092E4(local_5c,*(undefined4 *)(param_1 + 0x10),param_1 + 0x14);
  return 1;
}


/* sub_0800C2C2 @ 0x0800C2C2 */

undefined4 * sub_0800C2C2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08004FF8(puVar1,param_1);
    *puVar1 = &_08023BC0;
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return puVar1;
}


/* sub_0800C2F8 @ 0x0800C2F8 */

void sub_0800C2F8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    sub_0800C0F8(&DAT_03001fe0);
  }
  else {
    sub_0800BF08();
  }
  uVar1 = sub_0800EB4C(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 2));
  sub_08006264(&DAT_03001090,uVar1);
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 3) != '\0') {
    do {
      puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + iVar3 * 8);
      iVar2 = sub_08003F06(*puVar4);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)puVar4[1];
        uVar1 = __call_via_r1(puVar4,*puVar4);
        iVar2 = DAT_03001fe0 * 4;
        DAT_03001fe0 = DAT_03001fe0 + 1;
        *(undefined4 *)(&DAT_03001fe4 + iVar2) = uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 3));
  }
  return;
}


/* sub_0800C35E @ 0x0800C35E */

void sub_0800C35E(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar2 * 4);
      iVar1 = sub_08003F06(*puVar3);
      if (iVar1 != 0) {
        sub_0800F034(puVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  return;
}


/* sub_0800C390 @ 0x0800C390 */

void sub_0800C390(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_d4 [17];
  undefined4 uStack_90;
  byte local_2c;
  char local_2b;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_28 = DAT_0e000000;
  local_27 = DAT_0e000001;
  iVar2 = 0;
  do {
    local_2c = (char)iVar2 * '>' ^ 0x9c;
    local_2b = (char)iVar2 * -0x1d + '%';
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  DAT_03001fc0 = 1;
  iVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *param_1 = (char)param_2;
  param_1[1] = (char)param_3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  iVar3 = sub_0800EB7C();
  *(int *)(param_1 + 4) = iVar3;
  *(uint *)(param_1 + 0xc) = (uint)(*(char *)(iVar3 + 8) != '\0');
  uVar1 = sub_0800EB20(iVar3,param_5);
  param_1[2] = uVar1;
  sub_080040EE(&DAT_03000e90,*param_1,param_1[1]);
  uVar4 = sub_0800EB4C(*(undefined4 *)(param_1 + 4),param_1[2]);
  sub_08006152(&DAT_03001090,uVar4,local_18,param_6);
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 7) != '\0') {
    do {
      uVar4 = sub_0801038C(0,*(int *)(*(int *)(param_1 + 4) + 0x20) + iVar3 * 8);
      sub_080068B8(&DAT_03001120,uVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 7));
  }
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar3 * 4);
      iVar5 = sub_08003F06(*puVar6);
      if (iVar5 != 0) {
        sub_0800F034(puVar6);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 6) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + iVar3 * 4);
      iVar5 = sub_08003F06(*puVar6);
      if (iVar5 != 0) {
        uVar4 = sub_0800FA6C(0,puVar6);
        sub_080068B8(&DAT_03001120,uVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 6));
  }
  sub_0800C2F8(param_1,1);
  iVar3 = sub_0800EB58(*(undefined4 *)(param_1 + 4));
  if (iVar3 == 0xff) {
    DAT_030026cd = '\0';
  }
  else if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4B2C + iVar3 * 5)) {
    sub_08020A4C();
  }
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 4) != '\0') {
    do {
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar3 * 4);
      iVar5 = sub_08003F06(puVar6[1]);
      if (iVar5 != 0) {
        uVar4 = __call_via_r1(puVar6,*puVar6);
        sub_080068B8(&DAT_03001120,uVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  if (iVar2 != 0) {
    auStack_d4[0] = 0;
    uStack_90 = 0;
    sub_080092E4(auStack_d4,iVar2,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    auStack_d4[0] = 0;
    uStack_90 = 0;
    sub_080092E4(auStack_d4,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  return;
}


/* sub_0800C584 @ 0x0800C584 */

undefined4
sub_0800C584(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_1c;
  int local_18;
  
  local_1c = *param_4 + -0x70;
  local_18 = param_4[1] + -0x4c;
  sub_0800C390(param_1,param_2,param_3,&local_1c,param_5,param_6);
  uVar1 = sub_08009324((&DAT_081d967d)
                       [(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14]);
  if (*(int *)(DAT_030010e0 + 0x3c) == 0) {
    uVar1 = sub_080086D4(0,uVar1,param_4);
    DAT_03000ff4 = &DAT_030020c0;
    DAT_030020c4 = uVar1;
    sub_080068B8(&DAT_03001120,uVar1);
    if ((int)((uint)DAT_03000e91 << 0x1e) < 0) {
      uVar2 = sub_08008B14(0);
      sub_080068B8(&DAT_03001120,uVar2);
    }
  }
  else {
    uVar1 = sub_080129B8(0,uVar1,param_4);
    DAT_03000ff4 = &DAT_030020f4;
    sub_080068B8(&DAT_03001120,uVar1);
    uVar2 = sub_080130BC(0);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  uVar3 = sub_0800EBB6(*(undefined4 *)(param_1 + 4));
  if ((*(ushort *)(param_1 + 8) != uVar3) && (*(short *)(param_1 + 8) = (short)uVar3, uVar3 != 0xdd)
     ) {
    uVar2 = sub_0800C978(0,uVar3);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return uVar1;
}


/* sub_0800C664 @ 0x0800C664 */

void sub_0800C664(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_d4 [17];
  undefined4 local_90;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *param_1 = (char)param_2;
  param_1[1] = (char)param_3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar2 = sub_0800EB7C();
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = sub_0800EB20(uVar2,local_18);
  param_1[2] = uVar1;
  uVar2 = sub_0800EB4C(*(undefined4 *)(param_1 + 4));
  sub_08006152(&DAT_03001090,uVar2,param_5,1);
  if (iVar4 != 0) {
    local_d4[0] = 0;
    local_90 = 0;
    sub_080092E4(local_d4,iVar4,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    local_d4[0] = 0;
    local_90 = 0;
    sub_080092E4(local_d4,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  if ((param_6 != 0) && (iVar4 = 0, *(char *)(*(int *)(param_1 + 4) + 4) != '\0')) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar4 * 4);
      iVar3 = sub_08003F06(puVar5[1]);
      if (iVar3 != 0) {
        uVar2 = __call_via_r1(puVar5,*puVar5);
        sub_080068B8(&DAT_03001120,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  DAT_03000ff4 = &DAT_030020f4;
  return;
}


/* sub_0800C718 @ 0x0800C718 */

void sub_0800C718(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 4) + 6);
  if (param_2 < (int)uVar2) {
    uVar1 = sub_0801A2F8(0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + param_2 * 4),
                         param_3,uVar2,param_4);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}


/* sub_0800C73A @ 0x0800C73A */

void sub_0800C73A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
  if (param_2 < (int)uVar3) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
    uVar2 = __call_via_r1(puVar1,*puVar1,uVar3,param_4,param_4);
    sub_080068B8(&DAT_03001120,uVar2);
  }
  return;
}


/* sub_0800C75C @ 0x0800C75C */

void sub_0800C75C(int param_1,int param_2,int *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4)) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
    piVar2 = (int *)__call_via_r1(puVar1,*puVar1);
    __call_via_r1(piVar2,*(int *)(*piVar2 + 0x30) + *piVar2);
    piVar2[0x56] = *param_3 << 8;
    piVar2[0x57] = param_3[1] << 8;
    __call_via_r1(piVar2,*(int *)(*piVar2 + 0x34) + *piVar2);
    *(undefined1 *)(piVar2 + 4) = param_4;
    sub_080068B8(&DAT_03001120,piVar2);
  }
  return;
}


/* sub_0800C7AE @ 0x0800C7AE */

void sub_0800C7AE(undefined4 *param_1)

{
  DAT_03002070 = *param_1;
  DAT_03002074 = param_1[1];
  DAT_03002078 = param_1[2];
  DAT_0300207c = param_1[3];
  sub_08006460(&DAT_03001090);
  sub_08006F4A(&DAT_03001120);
  return;
}


/* sub_0800C7C6 @ 0x0800C7C6 */

void sub_0800C7C6(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_bc [17];
  undefined4 local_78;
  
  uVar3 = DAT_0300207c;
  uVar2 = DAT_03002078;
  uVar1 = DAT_03002074;
  iVar4 = 0;
  if (param_1[1] != 0) {
    iVar4 = *(int *)(param_1[1] + 0x34);
  }
  *param_1 = DAT_03002070;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (iVar4 != 0) {
    local_bc[0] = 0;
    local_78 = 0;
    sub_080092E4(local_bc,iVar4,0);
  }
  sub_0800649C(&DAT_03001090);
  sub_08006FA4(&DAT_03001120);
  return;
}


