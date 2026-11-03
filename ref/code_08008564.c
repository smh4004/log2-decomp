/* Ghidra reference decompilation of code_08008564 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08008564 @ 0x08008564 */

void sub_08008564(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x168) = 1;
  return;
}


/* sub_0800856E @ 0x0800856E */

void sub_0800856E(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_08008580 @ 0x08008580 */

void sub_08008580(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
  *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0x158) + *(int *)(&gUnknown_083B5248 + iVar1);
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *(int *)(&DAT_083b524c + iVar1);
  return;
}


/* sub_080085A0 @ 0x080085A0 */

void sub_080085A0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = 1;
  sub_0800E160(param_1,param_2);
  return;
}


/* sub_080085AC @ 0x080085AC */

void sub_080085AC(int param_1,int *param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(*param_2 + 0x28) + *param_2);
  if (((*(int *)(param_1 + 8) != 0) && ((DAT_030022ae & 1) != 0)) &&
     (((&DAT_03000eb0)[(uint)DAT_03000e90 * 7] & 4) != 0)) {
    __call_via_r2(param_2,0x27,UNRECOVERED_JUMPTABLE);
    return;
  }
  __call_via_r2(param_2,0,UNRECOVERED_JUMPTABLE);
  return;
}


/* sub_080085EC @ 0x080085EC */

void sub_080085EC(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* sub_080085FC @ 0x080085FC */

void sub_080085FC(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 auStack_28 [7];
  undefined2 local_c [2];
  
  iVar1 = DAT_03001fa8;
  local_c[0] = 0;
  uVar2 = sub_08009324((uint)(byte)(&DAT_081d967d)
                                   [(uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14]);
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  sub_0800B4AE(auStack_28,&gUnknown_083B63B4,local_c,(undefined4 *)&DAT_083b5270,0);
  piVar3 = (int *)sub_0801F08C(8);
  if (piVar3 != (int *)0x0) {
    *piVar3 = (int)&_08023E88;
    piVar3[1] = (int)auStack_28;
  }
  sub_0801F2F4(piVar3);
  sub_0800B4FC((undefined2 *)auStack_28,0);
  return;
}


/* sub_08008660 @ 0x08008660 */

void sub_08008660(void)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 auStack_28 [7];
  undefined2 local_c [2];
  
  local_c[0] = 0;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  sub_0800B4AE(auStack_28,&gUnknown_083B6564,local_c,&local_30,0);
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08023E88;
    piVar1[1] = (int)auStack_28;
  }
  sub_0801F2F4(piVar1);
  sub_0800B4FC((undefined2 *)auStack_28,0);
  return;
}


/* sub_080086A2 @ 0x080086A2 */

void sub_080086A2(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
  *(int **)(param_1 + 0x180) = piVar1;
  __call_via_r2(piVar1,param_1,(undefined *)(*(int *)*piVar1 + *piVar1));
  return;
}


/* sub_080086D4 @ 0x080086D4 */

undefined4 * sub_080086D4(undefined4 *param_1,ushort *param_2,short *param_3)

{
  int *piVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1a0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800F80C(param_1,param_2,&DAT_03001f64,param_3);
  *param_1 = &_08025604;
  DAT_03001fa8 = param_1;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  piVar1 = *(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
  param_1[0x60] = piVar1;
  __call_via_r2(piVar1,param_1,(undefined *)(*(int *)*piVar1 + *piVar1));
  return param_1;
}


/* sub_08008742 @ 0x08008742 */

void sub_08008742(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025604;
  DAT_03001fa8 = 0;
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08008766 @ 0x08008766 */

void sub_08008766(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x180);
  __call_via_r2(*(int **)(param_1 + 0x180),param_1,(undefined *)(*(int *)(iVar1 + 4) + iVar1));
  sub_0800772A(param_1);
  return;
}


/* sub_08008784 @ 0x08008784 */

undefined4 sub_08008784(int *param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  sub_0800F832((int)param_1,(int *)param_2);
  psVar1 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  if ((int)*psVar1 < *(int *)(param_2 + 8)) {
    *psVar1 = 0;
  }
  else {
    *psVar1 = *psVar1 - (short)*(int *)(param_2 + 8);
  }
  if (*psVar1 != 0) {
    return 0;
  }
  param_1[0x5a] = 0;
  __call_via_r2(param_1,0x21,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 200;
    *puVar2 = &_08023A50;
  }
  iVar3 = DAT_03001730 * 4;
  DAT_03001730 = DAT_03001730 + 1;
  *(undefined4 **)(&DAT_03001734 + iVar3) = puVar2;
  return 1;
}


/* sub_08008806 @ 0x08008806 */

undefined4 sub_08008806(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  iVar1 = __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x40) + *param_1));
  if (iVar1 == 0) {
    __call_via_r2(param_1,0x20,(undefined *)(*(int *)(*param_1 + 0x28) + *param_1));
    puVar2 = (undefined4 *)sub_0801F08C(8);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 1;
      *puVar2 = &_08023874;
    }
    iVar1 = DAT_03001730 * 4;
    DAT_03001730 = DAT_03001730 + 1;
    *(undefined4 **)(&DAT_03001734 + iVar1) = puVar2;
    return 0;
  }
  return 1;
}


/* sub_0800888C @ 0x0800888C */

void sub_0800888C(int param_1,int param_2)

{
  short *psVar1;
  
  sub_0800F8B6(param_1,param_2);
  psVar1 = (short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  if ((int)*(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c) < *psVar1 + param_2) {
    *psVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
    return;
  }
  *psVar1 = (short)(*psVar1 + param_2);
  return;
}


/* sub_080088BA @ 0x080088BA */

void sub_080088BA(int param_1,int param_2)

{
  sub_0800763C(param_1,(int *)(&PTR_DAT_083b5278)[param_2]);
  return;
}


/* sub_080088CA @ 0x080088CA */

bool sub_080088CA(int param_1,int param_2)

{
  return *(undefined **)(param_1 + 0x18) == (&PTR_DAT_083b5278)[param_2];
}


/* sub_080088E0 @ 0x080088E0 */

uint * sub_080088E0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_2 + 0x158) >> 8;
  uVar1 = *(int *)(param_2 + 0x15c) >> 8;
  *param_1 = uVar2 & 0xfffffff8;
  param_1[1] = uVar1 & 0xfffffff8;
  param_1[2] = uVar2 + 0x17 & 0xfffffff8;
  param_1[3] = uVar1 + 0xf & 0xfffffff8;
  return param_1 + 4;
}


/* sub_0800891C @ 0x0800891C */

void sub_0800891C(int param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 0;
  sub_0800763C(param_1,&DAT_03001f5c);
  return;
}


/* sub_0800892E @ 0x0800892E */

void sub_0800892E(int param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 1;
  sub_0800763C(param_1,&DAT_03001f64);
  return;
}


/* sub_08008944 @ 0x08008944 */

int * sub_08008944(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *piStack_20;
  int local_1c;
  int *piStack_18;
  
  if (param_2 == 7) {
    return param_1;
  }
  piStack_20 = param_1;
  local_1c = param_2;
  piStack_18 = param_3;
  if (param_2 < 8) {
    local_24 = param_3 + 9;
    piVar1 = param_3 + 1;
    if (param_2 == 0) {
      if ((((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
           (local_28 = param_3, sub_080079B8(&iStack_38,(int)param_1), *piVar1 < local_30)) &&
          ((iStack_38 < param_3[3] && (param_3[2] < local_2c)))) && (local_34 < param_3[4])) {
        if (param_1[0x5a] != 0) {
          *(byte *)(param_1 + 4) = *(byte *)(local_28[8] + 0x10) ^ 1;
          sub_0800F910((int)param_1,(int)(param_3 + 5));
          __call_via_r2(param_1,local_24,(undefined *)(*(int *)(*param_1 + 0x38) + *param_1));
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 1) {
      if ((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
         ((local_28 = param_3, sub_0800793A(&iStack_38,(int)param_1), *piVar1 < local_30 &&
          (((iStack_38 < param_3[3] && (param_3[2] < local_2c)) && (local_34 < param_3[4])))))) {
        if (param_1[0x5a] != 0) {
          *(byte *)(param_1 + 4) = *(byte *)(local_28[8] + 0x10) ^ 1;
          sub_0800F910((int)param_1,(int)(param_3 + 5));
          __call_via_r2(param_1,local_24,(undefined *)(*(int *)(*param_1 + 0x38) + *param_1));
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 2) {
      if (((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
          ((sub_080079B8(&local_34,(int)param_1), *piVar1 < local_2c &&
           ((local_34 < param_3[3] && (param_3[2] < (int)local_28)))))) && (local_30 < param_3[4]))
      {
        return (int *)0x1;
      }
      return (int *)0x0;
    }
  }
  else if (param_2 == 8) {
    iVar2 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14
                      );
    __call_via_r1(*(int **)(&DAT_081d968c +
                           (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                  (undefined *)(*(int *)(iVar2 + 0xc) + iVar2));
    DAT_03001fa8 = (int *)0x0;
  }
  else if (param_2 == 9) {
    iVar2 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14
                      );
    __call_via_r1(*(int **)(&DAT_081d968c +
                           (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                  (undefined *)(*(int *)(iVar2 + 8) + iVar2));
    DAT_03001fa8 = param_1;
  }
  else if (param_2 == 0x14) {
    return (int *)0x0;
  }
  piVar1 = (int *)sub_08007B08(param_1,local_1c,param_3);
  return piVar1;
}


/* sub_08008B08 @ 0x08008B08 */

void sub_08008B08(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


/* sub_08008B14 @ 0x08008B14 */

undefined4 * sub_08008B14(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x500;
  uVar1 = sub_080067AC(&DAT_03001120,0x500);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802408C;
  *(undefined1 *)(param_1 + 2) = 4;
  param_1[1] = 0;
  param_1[9] = 8;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return param_1;
}


/* sub_08008B5C @ 0x08008B5C */

void sub_08008B5C(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[9] + param_1[8];
  param_1[9] = iVar1;
  if (iVar1 < -0x10) {
    sub_080068CA(0x3001120,param_1);
  }
  else if (8 < iVar1) {
    param_1[9] = 8;
    param_1[8] = 0;
  }
  return;
}


/* sub_08008B88 @ 0x08008B88 */

void sub_08008B88(int *param_1)

{
  int iVar1;
  
  if (((int)((uint)DAT_030022b0 << 0x16) < 0) &&
     (iVar1 = sub_08004284((int)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c)), iVar1 != 0)) {
    sub_0801FC9C(0x3002c80,&DAT_080e1868,0x40,0);
  }
  iVar1 = param_1[9] + param_1[8];
  param_1[9] = iVar1;
  if (iVar1 < -0x10) {
    sub_080068CA(0x3001120,param_1);
  }
  else if (8 < iVar1) {
    param_1[9] = 8;
    param_1[8] = 0;
  }
  return;
}


/* sub_08008BEE @ 0x08008BEE */

undefined4 sub_08008BEE(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 auStack_51c [768];
  undefined1 auStack_21c [508];
  int iStack_20;
  uint local_1c;
  uint local_18;
  
  puVar2 = (uint *)*param_2;
  *puVar2 = 0x80086000;
  *puVar2 = *(uint *)(param_1 + 0x24) & 0xff | 0x80086000;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffffc00;
  puVar2[2] = 0x40282000;
  puVar2[2] = *(uint *)(param_1 + 0x24) & 0xff | 0x40282000;
  puVar2[3] = *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff | puVar2[3] & 0xfffffc00;
  puVar2[4] = 0x80386000;
  puVar2[4] = *(uint *)(param_1 + 0x24) & 0xff | 0x80386000;
  puVar2[5] = *(ushort *)(param_1 + 0xc) + 0x18 & 0x3ff | puVar2[5] & 0xfffffc00;
  *param_2 = puVar2 + 6;
  uVar7 = (uint)DAT_03000e90;
  iVar8 = uVar7 * 0x1c;
  puVar9 = &DAT_03000e9c + iVar8;
  local_18 = __16__rt_sdiv((int)*(short *)(&DAT_03000e9e + iVar8),
                           *(short *)(&DAT_03000e9c + iVar8) * 0x30);
  local_18 = local_18 & 0xff;
  local_1c = __16__rt_sdiv((int)*(short *)(&DAT_03000ea2 + iVar8),
                           *(short *)(&DAT_03000ea0 + iVar8) * 0x31);
  local_1c = local_1c & 0xff;
  uVar3 = sub_08004214((int)puVar9);
  if (uVar3 == 0x32) {
    cVar1 = 'E';
  }
  else {
    iVar5 = sub_0800425A((int)puVar9,uVar3);
    iStack_20 = sub_0800426A(uVar3 + 1);
    iVar4 = sub_0800426A(uVar3);
    cVar1 = __16__rt_sdiv(iStack_20 - iVar4,iVar5 * 0x45);
  }
  if ((*(undefined **)(param_1 + 0x18) == puVar9) && (*(byte *)(param_1 + 0x13) != uVar3)) {
    *(undefined1 *)(param_1 + 0x14) = 0x24;
  }
  *(char *)(param_1 + 0x13) = (char)uVar3;
  *(undefined **)(param_1 + 0x18) = puVar9;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
  }
  iVar8 = (uint)(byte)puVar9[(byte)(&DAT_03000ea5)[iVar8] + 0x18] * 0x10;
  iVar5 = __call_via_r1(puVar9,*(undefined **)(&DAT_081d9908 + iVar8));
  if (iVar5 == 0) {
    iVar8 = *(int *)(&UNK_081d9904 + iVar8);
  }
  else {
    iVar8 = *(int *)(&gUnknown_081D9900 + iVar8);
  }
  uVar3 = DAT_03000e98 >> 8;
  if ((((&DAT_03000eb0)[uVar7 * 7] & 0x20) == 0) || (4 < (int)uVar3)) {
    uVar3 = 4;
  }
  if (((((~*(byte *)(param_1 + 0x14) & 3) == 0) || (*(byte *)(param_1 + 0x10) != local_18)) ||
      (*(byte *)(param_1 + 0x11) != local_1c)) ||
     (((*(char *)(param_1 + 0x12) != cVar1 || (*(int *)(param_1 + 0x1c) != iVar8)) ||
      (*(byte *)(param_1 + 0x15) != uVar3)))) {
    *(char *)(param_1 + 0x10) = (char)local_18;
    *(char *)(param_1 + 0x11) = (char)local_1c;
    *(char *)(param_1 + 0x12) = cVar1;
    *(int *)(param_1 + 0x1c) = iVar8;
    *(char *)(param_1 + 0x15) = (char)uVar3;
    REG_DMA3SAD = 0x86d7b54;
    REG_DMA3DAD = auStack_51c;
    Ram040000dc = 0xc0;
    DAT_040000de = 0x8400;
    REG_DMA3SAD = *(undefined4 *)(param_1 + 0x1c);
    REG_DMA3DAD = auStack_21c;
    Ram040000dc = 0x80;
    DAT_040000de = 0x8400;
    uVar7 = (uint)*(byte *)(param_1 + 0x10);
    if (uVar7 < 0x30) {
      do {
        iVar8 = uVar7 * 0x10;
        auStack_51c[*(int *)(&DAT_083b5358 + iVar8)] = 1;
        uVar7 = uVar7 + 1;
        auStack_51c[*(int *)(&DAT_083b535c + iVar8)] = 1;
        auStack_51c[*(int *)(&DAT_083b5360 + iVar8)] = 1;
      } while ((int)uVar7 < 0x30);
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x11);
    if (uVar7 < 0x31) {
      do {
        iVar8 = uVar7 * 0x10;
        auStack_51c[*(int *)(&gUnknown_083B5658 + iVar8)] = 1;
        uVar7 = uVar7 + 1;
        auStack_51c[*(int *)(&DAT_083b565c + iVar8)] = 1;
        auStack_51c[*(int *)(&DAT_083b5660 + iVar8)] = 1;
      } while ((int)uVar7 < 0x31);
    }
    iVar8 = *(int *)(&gUnknown_083B5BE0 + uVar3 * 4);
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      auStack_51c[*(int *)(&UNK_083b5b90 + iVar8 * 4)] = 1;
    }
    uVar6 = 1;
    if (*(byte *)(param_1 + 0x14) != 0) {
      uVar6 = (&DAT_083b5bf4)[*(byte *)(param_1 + 0x14) >> 2];
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    if (uVar3 < 0x45) {
      do {
        iVar8 = uVar3 * 8;
        auStack_51c[*(int *)(&gUnknown_083B5968 + iVar8)] = uVar6;
        uVar3 = uVar3 + 1;
        auStack_51c[*(int *)(&DAT_083b596c + iVar8)] = uVar6;
      } while ((int)uVar3 < 0x45);
    }
    REG_DMA3SAD = auStack_51c;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x140;
    DAT_040000de = 0x8400;
  }
  return 0;
}


/* sub_08008EA8 @ 0x08008EA8 */

undefined4 sub_08008EA8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 9) {
    *(undefined1 *)(param_1 + 4) = 0xff;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    iVar2 = param_1[9] + param_1[8];
    param_1[9] = iVar2;
    if (iVar2 < -0x10) {
      sub_080068CA(0x3001120,param_1);
    }
    else if (8 < iVar2) {
      param_1[9] = 8;
      param_1[8] = 0;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0x12) {
    param_1[8] = -1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08008EFA @ 0x08008EFA */

undefined4 sub_08008EFA(undefined4 param_1,int param_2)

{
  if (3 < param_2) {
    return 2;
  }
  return 0;
}


/* sub_08008F06 @ 0x08008F06 */

void sub_08008F06(int param_1)

{
  sub_080068A6(param_1);
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


/* sub_08008F20 @ 0x08008F20 */

int sub_08008F20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar3 = uVar2 & 0x7f;
    iVar1 = iVar1 * 0x80 + uVar3;
  } while ((int)(uVar2 << 0x18) < 0);
  if ((int)(uVar3 << 0x1f) < 0) {
    return -(iVar1 >> 1);
  }
  return iVar1 >> 1;
}


/* sub_08008F44 @ 0x08008F44 */

void sub_08008F44(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  *param_2 = pbVar3 + 1;
  iVar2 = *param_1;
  bVar1 = *pbVar3;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}


/* sub_08008F5A @ 0x08008F5A */

void sub_08008F5A(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  do {
    uVar3 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    uVar4 = uVar3 & 0x7f;
    iVar2 = iVar2 * 0x80 + uVar4;
  } while ((int)(uVar3 << 0x18) < 0);
  iVar2 = iVar2 >> 1;
  if ((int)(uVar4 << 0x1f) < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08008F8E @ 0x08008F8E */

void sub_08008F8E(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  return;
}


/* sub_08008FA4 @ 0x08008FA4 */

void sub_08008FA4(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2],(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_08008FC6 @ 0x08008FC6 */

void sub_08008FC6(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = param_1 + iVar2 + -1;
  if ((*piVar1 == 0) || (piVar1[1] == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  *piVar1 = iVar2;
  return;
}


/* sub_08008FE6 @ 0x08008FE6 */

void sub_08008FE6(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(puVar1[1] != 0 || *puVar1 != 0);
  return;
}


/* sub_08009000 @ 0x08009000 */

void sub_08009000(int *param_1)

{
  param_1[*param_1] = -param_1[*param_1];
  return;
}


/* sub_0800900E @ 0x0800900E */

void sub_0800900E(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = param_1 + iVar2 + -1;
  *piVar1 = *piVar1 + piVar1[1];
  return;
}


/* sub_0800901A @ 0x0800901A */

void sub_0800901A(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}


/* sub_08009022 @ 0x08009022 */

void sub_08009022(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = param_1 + iVar2 + -1;
  *piVar1 = *piVar1 - piVar1[1];
  return;
}


/* sub_08009036 @ 0x08009036 */

void sub_08009036(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = param_1 + iVar2 + -1;
  *piVar1 = piVar1[1] * *piVar1;
  return;
}


/* sub_0800903A @ 0x0800903A */

void sub_0800903A(int *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = param_2;
  piVar1 = param_1 + param_2;
  *piVar1 = piVar1[1] * *piVar1;
  return;
}


/* sub_0800904A @ 0x0800904A */

void sub_0800904A(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar3 = (uint *)(param_1 + iVar2 + -1);
  uVar1 = __16__rt_sdiv(puVar3[1],*puVar3);
  *puVar3 = uVar1;
  return;
}


/* sub_08009062 @ 0x08009062 */

void sub_08009062(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(*puVar1 == puVar1[1]);
  return;
}


/* sub_0800907C @ 0x0800907C */

void sub_0800907C(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)(*puVar1 != puVar1[1]);
  return;
}


/* sub_08009096 @ 0x08009096 */

void sub_08009096(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)puVar1[1] < (int)*puVar1);
  return;
}


/* sub_080090B0 @ 0x080090B0 */

void sub_080090B0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)puVar1[1] <= (int)*puVar1);
  return;
}


/* sub_080090CA @ 0x080090CA */

void sub_080090CA(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)*puVar1 < (int)puVar1[1]);
  return;
}


/* sub_080090E4 @ 0x080090E4 */

void sub_080090E4(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (uint *)(param_1 + iVar2 + -1);
  *puVar1 = (uint)((int)*puVar1 <= (int)puVar1[1]);
  return;
}


/* sub_080090FE @ 0x080090FE */

void sub_080090FE(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (byte *)*param_2 + *(byte *)*param_2 + 1;
  return;
}


/* sub_0800910A @ 0x0800910A */

void sub_0800910A(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar3 = param_1[iVar3];
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  if (iVar3 == 0) {
    *param_2 = pbVar2 + bVar1;
  }
  return;
}


/* sub_08009128 @ 0x08009128 */

void sub_08009128(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


/* sub_08009130 @ 0x08009130 */

void sub_08009130(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2] + 1,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_08009160 @ 0x08009160 */

void sub_08009160(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  iVar2 = param_1[*param_1] + 1;
  param_1[*param_1] = iVar2;
  __call_via_r1(iVar2,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_08009190 @ 0x08009190 */

void sub_08009190(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  __call_via_r1(param_1[*param_1] + 1,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_080091BC @ 0x080091BC */

void sub_080091BC(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2] + -1,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_080091EC @ 0x080091EC */

void sub_080091EC(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  iVar2 = param_1[*param_1] + -1;
  param_1[*param_1] = iVar2;
  __call_via_r1(iVar2,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_08009224 @ 0x08009224 */

void sub_08009224(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1]);
  __call_via_r1(param_1[*param_1] + -1,(&gUnknown_083B5F70)[bVar1]);
  return;
}


/* sub_08009250 @ 0x08009250 */

void sub_08009250(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  piVar1 = param_1 + 0x11;
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar1[iVar2 + 1] = iVar3;
  return;
}


/* sub_0800926C @ 0x0800926C */

void sub_0800926C(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x44);
  bVar1 = *(byte *)*param_2;
  piVar4 = (int *)(param_1 + 0x44);
  *param_2 = (int)((byte *)*param_2 + 1);
  iVar3 = piVar4[iVar2] + -1;
  piVar4[iVar2] = iVar3;
  if (iVar3 == 0) {
    *piVar4 = *piVar4 + -1;
  }
  else {
    *param_2 = *param_2 - (uint)bVar1;
  }
  return;
}


/* sub_0800929A @ 0x0800929A */

void sub_0800929A(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  do {
    iVar1 = 0;
    do {
      uVar3 = (uint)*(byte *)*param_2;
      *param_2 = (byte *)*param_2 + 1;
      uVar4 = uVar3 & 0x7f;
      iVar1 = iVar1 * 0x80 + uVar4;
    } while ((int)(uVar3 << 0x18) < 0);
    iVar1 = iVar1 >> 1;
    if ((int)(uVar4 << 0x1f) < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    param_1[iVar2 + 1] = iVar1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}


/* sub_080092E4 @ 0x080092E4 */

void sub_080092E4(undefined4 *param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  byte *local_18;
  undefined1 *puStack_14;
  
  DAT_03001fac = param_3;
  if (param_3 == (undefined1 *)0x0) {
    DAT_03001fac = auStack_2c;
  }
  *param_1 = 0;
  param_1[0x11] = 0;
  puStack_1c = param_1;
  local_18 = param_2;
  puStack_14 = param_3;
  while( true ) {
    bVar1 = *local_18;
    local_18 = local_18 + 1;
    if ((&gUnknown_083B5C00)[bVar1] == (undefined *)0x0) break;
    __call_via_r2(param_1,&local_18,(&gUnknown_083B5C00)[bVar1]);
  }
  return;
}


/* sub_08009324 @ 0x08009324 */

undefined4 sub_08009324(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (DAT_03001fa8 == 0) {
      uVar1 = sub_0802645C((int)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c));
    }
    else {
      uVar1 = *(undefined4 *)(DAT_03001fa8 + 0x48);
    }
  }
  else if (param_1 < 7) {
    uVar1 = sub_0802645C((int)(&DAT_03000e9c + (param_1 + -1) * 0x1c));
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_083b4e74 + param_1 * 4);
  }
  return uVar1;
}


/* sub_08009370 @ 0x08009370 */

void sub_08009370(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (DAT_03001fa8 == 0)) {
    uVar1 = sub_08009324(param_1);
    sub_08006E0A(0x3001120,5,uVar1);
  }
  return;
}


/* sub_08009392 @ 0x08009392 */

void sub_08009392(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb0;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080093A4 @ 0x080093A4 */

void sub_080093A4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb4;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080093B6 @ 0x080093B6 */

void sub_080093B6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fb8;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080093C8 @ 0x080093C8 */

void sub_080093C8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001fbc;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_080093DA @ 0x080093DA */

void sub_080093DA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_03001fac;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080093EE @ 0x080093EE */

void sub_080093EE(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001fac + 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08009402 @ 0x08009402 */

void sub_08009402(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001fac + 8);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08009404 @ 0x08009404 */

void sub_08009404(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 8);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_08009416 @ 0x08009416 */

void sub_08009416(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001fac + 0xc);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_0800942A @ 0x0800942A */

void sub_0800942A(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002080;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_0800943E @ 0x0800943E */

void sub_0800943E(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002081;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08009452 @ 0x08009452 */

void sub_08009452(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03002082;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08009466 @ 0x08009466 */

void sub_08009466(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001fc1;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08009478 @ 0x08009478 */

void sub_08009478(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001fc2;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_0800948A @ 0x0800948A */

void sub_0800948A(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03001fc3;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_08009498 @ 0x08009498 */

void sub_08009498(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}


/* sub_0800949C @ 0x0800949C */

void sub_0800949C(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_03000e90;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar2;
  return;
}


/* sub_080094A0 @ 0x080094A0 */

void sub_080094A0(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_2;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (uint)bVar1;
  return;
}


/* sub_080094B0 @ 0x080094B0 */

void sub_080094B0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&gUnknown_080E2840 + (DAT_03000e90 + 0x30) * 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080094CC @ 0x080094CC */

void sub_080094CC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&gUnknown_080E2840 + (DAT_03000e90 + 0x36) * 4);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}


/* sub_080094E8 @ 0x080094E8 */

void sub_080094E8(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000e9c + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08009508 @ 0x08009508 */

void sub_08009508(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000e9e + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08009528 @ 0x08009528 */

void sub_08009528(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000ea0 + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08009548 @ 0x08009548 */

void sub_08009548(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(&DAT_03000ea2 + (uint)DAT_03000e90 * 0x1c);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08009554 @ 0x08009554 */

void sub_08009554(int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_3 + param_2 + 0x12);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = (int)sVar1;
  return;
}


/* sub_08009568 @ 0x08009568 */

void sub_08009568(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0802141C(param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}


/* sub_0800957A @ 0x0800957A */

void sub_0800957A(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0802142E(param_1[iVar2] * 0x28f5d >> 8);
  param_1[iVar2] = iVar1;
  return;
}


/* sub_080095B4 @ 0x080095B4 */

void sub_080095B4(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = sub_08003E42(0x3000e90,param_1[iVar2]);
  param_1[iVar2] = uVar1;
  return;
}


/* sub_080095CA @ 0x080095CA */

void sub_080095CA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08003E42(0x3000e90,param_1[iVar2]);
  param_1[iVar2] = 1 - iVar1;
  return;
}


/* sub_080095E4 @ 0x080095E4 */

void sub_080095E4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = param_1[iVar2];
  bVar1 = (&DAT_03000fbb)[iVar3];
  iVar3 = sub_08006E64(0x3001120,0x17,iVar3);
  param_1[iVar2] = (uint)bVar1 + iVar3;
  return;
}


/* sub_08009608 @ 0x08009608 */

void sub_08009608(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004214((int)(&DAT_03000e9c + param_1[iVar2] * 0x1c));
  param_1[iVar2] = iVar1;
  return;
}


/* sub_08009628 @ 0x08009628 */

void sub_08009628(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar3 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = sub_080041A6(0x3000e90,param_1[iVar1 + -1],uVar3);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}


/* sub_08009658 @ 0x08009658 */

void sub_08009658(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006274(0x3001090,param_1[iVar1]);
  return;
}


/* sub_08009670 @ 0x08009670 */

void sub_08009670(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006298(0x3001090,param_1[iVar1]);
  return;
}


/* sub_08009688 @ 0x08009688 */

void sub_08009688(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_080062C0(0x3001090,param_1[iVar1 + -1],iVar2);
  return;
}


/* sub_080096AA @ 0x080096AA */

void sub_080096AA(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  __call_via_r1(param_1[iVar1],*(undefined **)(&DAT_086ade58 + param_1[iVar1] * 0x38));
  return;
}


/* sub_080096CA @ 0x080096CA */

void sub_080096CA(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_03000fbb)[param_1[iVar1]] = (&DAT_03000fbb)[param_1[iVar1]] + -1;
  return;
}


/* sub_080096E8 @ 0x080096E8 */

void sub_080096E8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  (&DAT_03000fbb)[param_1[iVar1 + -1]] = (&DAT_03000fbb)[param_1[iVar1 + -1]] - (char)iVar2;
  return;
}


/* sub_08009710 @ 0x08009710 */

void sub_08009710(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08003E5E(0x3000e90,param_1[iVar1]);
  return;
}


/* sub_08009728 @ 0x08009728 */

void sub_08009728(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08003E74(0x3000e90,param_1[iVar1]);
  return;
}


/* sub_08009740 @ 0x08009740 */

void sub_08009740(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006E0A(0x3001120,4,param_1[iVar1] * 2 + 1);
  return;
}


/* sub_0800975E @ 0x0800975E */

void sub_0800975E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006E0A(0x3001120,4,param_1[iVar1] << 1);
  return;
}


/* sub_0800977A @ 0x0800977A */

void sub_0800977A(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_8 = param_1[iVar2 + -1];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  piVar1 = (int *)sub_0800DF1C((undefined4 *)0x0,&local_c,uVar3);
  sub_0801F2F4(piVar1);
  return;
}


/* sub_080097B4 @ 0x080097B4 */

void sub_080097B4(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  sub_0800793A(&local_20,iVar2);
  local_10 = (local_20 + local_18 >> 1) + -0x78;
  local_c = (local_1c + local_14 >> 1) + -0x50;
  piVar1 = (int *)sub_0800DF1C((undefined4 *)0x0,&local_10,uVar3);
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009814 @ 0x08009814 */

void sub_08009814(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_030020c4 = sub_08009370(param_1[iVar1]);
  DAT_03000ff4 = &DAT_030020c0;
  return;
}


/* sub_08009840 @ 0x08009840 */

void sub_08009840(void)

{
  DAT_03000ff4 = &DAT_030020f4;
  return;
}


/* sub_0800984A @ 0x0800984A */

void sub_0800984A(void)

{
  DAT_03001fc4 = 1;
  return;
}


/* sub_08009852 @ 0x08009852 */

void sub_08009852(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_1c;
  int local_18;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar5 = param_1[iVar2 + -2];
  piVar1 = (int *)sub_0802664C((undefined4 *)0x0,0x40);
  sub_0801F2F4(piVar1);
  if (DAT_03001fc4 != 0) {
    sub_0800C7AE((undefined4 *)&DAT_03002080);
    DAT_03001fc8 = DAT_03000ff4;
    DAT_03001fcc = DAT_030020c4;
    DAT_03001fc4 = 0;
  }
  sub_0800C664(&DAT_03002080,uVar5,uVar4,iVar3,&local_1c,1);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802542C;
    piVar1[2] = 0x10;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_080098F2 @ 0x080098F2 */

void sub_080098F2(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_1c;
  int local_18;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_18 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_1c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar5 = param_1[iVar2 + -2];
  piVar1 = (int *)sub_0802664C((undefined4 *)0x0,0x40);
  sub_0801F2F4(piVar1);
  if (DAT_03001fc4 != 0) {
    sub_0800C7AE((undefined4 *)&DAT_03002080);
    DAT_03001fc8 = DAT_03000ff4;
    DAT_03001fcc = DAT_030020c4;
    DAT_03001fc4 = 0;
  }
  sub_0800C664(&DAT_03002080,uVar5,uVar4,iVar3,&local_1c,0);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802542C;
    piVar1[2] = 0x10;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009992 @ 0x08009992 */

void sub_08009992(void)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0802664C((undefined4 *)0x0,0x10);
  sub_0801F2F4(piVar1);
  sub_0800C7C6((undefined4 *)&DAT_03002080);
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802542C;
    piVar1[2] = 0x10;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  DAT_030020c4 = DAT_03001fcc;
  DAT_03000ff4 = DAT_03001fc8;
  return;
}


/* sub_080099D2 @ 0x080099D2 */

void sub_080099D2(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short local_14;
  undefined2 local_12;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_12 = (undefined2)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  local_14 = (short)param_1[iVar3];
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  uVar5 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  uVar6 = param_1[iVar3 + -2];
  DAT_03001fd8 = 1;
  if (DAT_03001fa8 != (int *)0x0) {
    __call_via_r2(DAT_03001fa8,0,(undefined *)(*(int *)(*DAT_03001fa8 + 0x28) + *DAT_03001fa8));
  }
  piVar1 = (int *)sub_0802664C((undefined4 *)0x0,0x40);
  sub_0801F2F4(piVar1);
  piVar1 = (int *)sub_0800C584(&DAT_03002080,uVar6,uVar5,&local_14,iVar4,1);
  __call_via_r2(piVar1,0x26,(undefined *)(*(int *)(*piVar1 + 0x28) + *piVar1));
  piVar2 = (int *)sub_0801F08C(0xc);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)&_08023990;
    piVar2[1] = 0;
    piVar2[2] = 4;
  }
  sub_0801F2F4(piVar2);
  __call_via_r2(piVar1,0,(undefined *)(*(int *)(*piVar1 + 0x28) + *piVar1));
  return;
}


/* sub_08009A88 @ 0x08009A88 */

void sub_08009A88(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short local_14;
  undefined2 local_12;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_12 = (undefined2)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = (short)param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  uVar3 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  uVar4 = param_1[iVar1 + -2];
  if (DAT_03001fa8 != (int *)0x0) {
    __call_via_r2(DAT_03001fa8,0,(undefined *)(*(int *)(*DAT_03001fa8 + 0x28) + *DAT_03001fa8));
  }
  DAT_03001fd8 = 1;
  sub_0800C584(&DAT_03002080,uVar4,uVar3,&local_14,iVar2,0);
  return;
}


/* sub_08009B1C @ 0x08009B1C */

void sub_08009B1C(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  piVar1 = (int *)sub_0802664C((undefined4 *)0x0,param_1[iVar2]);
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009B36 @ 0x08009B36 */

void sub_08009B36(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802542C;
    piVar1[2] = iVar2;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009B5E @ 0x08009B5E */

void sub_08009B5E(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(0x40c);
  if (piVar1 != (int *)0x0) {
    sub_0800DA68(piVar1);
    *piVar1 = (int)&_08024FC4;
    piVar1[0x101] = 0;
    piVar1[0x102] = iVar2;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009B94 @ 0x08009B94 */

void sub_08009B94(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802545C;
    piVar1[2] = iVar2;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009BBC @ 0x08009BBC */

void sub_08009BBC(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024778;
    piVar1[2] = iVar2;
    piVar1[1] = 0;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_08009BE4 @ 0x08009BE4 */

void sub_08009BE4(void)

{
  REG_DMA3SAD = 0x81da6c8;
  REG_DMA3DAD = 0x5000200;
  Ram040000dc = 0x100;
  DAT_040000de = 0x8000;
  return;
}


/* sub_08009BF8 @ 0x08009BF8 */

void sub_08009BF8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + param_1[iVar1] * 0xc,0x40,0);
  return;
}


/* sub_08009BFA @ 0x08009BFA */

void sub_08009BFA(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC9C(iVar2 + 0x5c4,&gUnknown_080E15B0 + param_1[iVar1] * 0xc,0x40,0);
  return;
}


/* sub_08009C22 @ 0x08009C22 */

void sub_08009C22(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + param_1[iVar1 + -1] * 0xc,(char)iVar2,0);
  return;
}


/* sub_08009C54 @ 0x08009C54 */

void sub_08009C54(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC22(0x3002c80,(int)(&gUnknown_080E15B0 + param_1[iVar1] * 0xc));
  return;
}


/* sub_08009C56 @ 0x08009C56 */

void sub_08009C56(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0801FC22(iVar2 + 0x5c4,(int)(&gUnknown_080E15B0 + param_1[iVar1] * 0xc));
  return;
}


/* sub_08009C7A @ 0x08009C7A */

void sub_08009C7A(void)

{
  sub_0801FC0C(0x3002c80);
  return;
}


/* sub_08009C7C @ 0x08009C7C */

void sub_08009C7C(int *param_1)

{
  sub_0801FC0C(*param_1 + 0x5c4);
  return;
}


/* sub_08009C8A @ 0x08009C8A */

void sub_08009C8A(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4B2C + param_1[iVar1] * 5)) {
    sub_08020A4C(&DAT_030026c8,(int)(&gUnknown_081D4B2C + param_1[iVar1] * 5));
  }
  return;
}


/* sub_08009C8C @ 0x08009C8C */

void sub_08009C8C(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4B2C + param_2[iVar1] * 5)) {
    sub_08020A4C(&DAT_030026c8,(int)(&gUnknown_081D4B2C + param_2[iVar1] * 5));
  }
  return;
}


/* sub_08009CC0 @ 0x08009CC0 */

void sub_08009CC0(undefined1 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 5) = param_1;
  return;
}


/* sub_08009CC4 @ 0x08009CC4 */

void sub_08009CC4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar3 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar2 = param_1[iVar1 + -1];
  *param_1 = iVar1 + -3;
  DAT_03000c10 = param_1[iVar1 + -2];
  DAT_03000c0c = (undefined2)iVar2;
  DAT_03000c0e = (undefined2)iVar3;
  iVar1 = sub_0800D6DE(0x3000c04);
  sub_080068B8(0x3001120,iVar1);
  return;
}


/* sub_08009D00 @ 0x08009D00 */

void sub_08009D00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_08009370(iVar3);
  if (iVar2 == DAT_030021f8) {
    DAT_03001fd8 = 1;
  }
  iVar2 = sub_08009370(iVar3);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024A78;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_08009D4A @ 0x08009D4A */

void sub_08009D4A(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08009370(param_1[iVar2]);
  iVar1 = sub_08026620((undefined4 *)0x0,&local_10);
  sub_0800E04C(&DAT_030020f8,iVar1,iVar2);
  return;
}


/* sub_08009D94 @ 0x08009D94 */

void sub_08009D94(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_10 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_14 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  uVar1 = sub_08009370(iVar3);
  iVar3 = sub_0801094C((undefined4 *)0x0,uVar1,&local_14);
  sub_0800E04C(&DAT_030020f8,iVar3,iVar2);
  return;
}


/* sub_08009E30 @ 0x08009E30 */

void sub_08009E30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08009370(param_1[iVar2 + -2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = iVar3;
    puVar1[5] = iVar4;
    *puVar1 = &_08024864;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_08009E80 @ 0x08009E80 */

void sub_08009E80(int *param_1)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = sub_08009370(param_1[iVar1]);
  sub_0800791A(&local_10,iVar1);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = local_c & 0xffff | local_10 << 0x10;
  return;
}


/* sub_08009EBA @ 0x08009EBA */

void sub_08009EBA(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar1 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  local_10 = iVar1 >> 0x10;
  local_c = (int)(short)iVar1;
  iVar1 = sub_08009370(param_1[iVar2 + -1]);
  iVar2 = sub_08026620((undefined4 *)0x0,&local_10);
  sub_0800E04C(&DAT_030020f8,iVar2,iVar1);
  return;
}


/* sub_08009EFC @ 0x08009EFC */

void sub_08009EFC(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025E34;
    *(char *)(puVar1 + 2) = (char)iVar3;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_08009F3C @ 0x08009F3C */

void sub_08009F3C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0802553C;
    puVar1[2] = iVar3;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_08009F7C @ 0x08009F7C */

void sub_08009F7C(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar3 = sub_08009370(param_1[iVar3 + -1]);
  uVar1 = sub_08009370(iVar4);
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08024A64;
    puVar2[2] = uVar1;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar2,iVar3);
  return;
}


/* sub_08009FC4 @ 0x08009FC4 */

void sub_08009FC4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    *puVar1 = &_08025BAC;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A004 @ 0x0800A004 */

void sub_0800A004(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025ED4;
    puVar1[2] = iVar3;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A044 @ 0x0800A044 */

void sub_0800A044(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024878;
    puVar1[2] = iVar3;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A084 @ 0x0800A084 */

void sub_0800A084(int *param_1)

{
  *param_1 = *param_1 + -2;
  sub_0801F878((byte *)"CharacterSpecialAttack() is deprecated",
               (byte *)"K:\\Source\\ByteCodeInterpreter\\ByteCodeFunctionList.cpp",0x282,0);
  return;
}


/* sub_0800A09A @ 0x0800A09A */

void sub_0800A09A(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08009370(param_1[iVar2]);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025258;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A158 @ 0x0800A158 */

void sub_0800A158(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar5 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar3 = sub_08009370(param_1[iVar3 + -2]);
  uVar1 = sub_08009370(iVar4);
  puVar2 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08025514;
    puVar2[2] = 0x20;
    puVar2[3] = uVar1;
    puVar2[4] = iVar5 * 0x7ae;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar2,iVar3);
  return;
}


/* sub_0800A1B4 @ 0x0800A1B4 */

void sub_0800A1B4(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar5 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar3 = sub_08009370(param_1[iVar3 + -2]);
  uVar1 = sub_08009370(iVar4);
  puVar2 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &_08024BDC;
    puVar2[2] = 0x20;
    puVar2[3] = uVar1;
    puVar2[4] = iVar5 * 0x7ae;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar2,iVar3);
  return;
}


/* sub_0800A210 @ 0x0800A210 */

void sub_0800A210(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar3 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = sub_08009370(param_1[iVar2 + -3]);
  puVar1 = (undefined4 *)sub_0801F08C(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
    *puVar1 = &_08024A50;
    puVar1[5] = 0x20;
    puVar1[4] = iVar5 * 0x7ae;
    puVar1[7] = 0;
    puVar1[6] = 0x40;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A276 @ 0x0800A276 */

void sub_0800A276(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08009370(param_1[iVar2 + -2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025550;
    puVar1[3] = iVar3;
    puVar1[2] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A2C2 @ 0x0800A2C2 */

void sub_0800A2C2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar6 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  iVar4 = param_1[iVar3 + -1];
  *param_1 = iVar3 + -3;
  iVar5 = param_1[iVar3 + -2];
  *param_1 = iVar3 + -4;
  iVar7 = param_1[iVar3 + -3];
  *param_1 = iVar3 + -5;
  iVar3 = sub_08009370(param_1[iVar3 + -4]);
  puVar1 = (undefined4 *)sub_0801F08C(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025528;
    puVar1[2] = iVar7;
    puVar1[3] = iVar5;
    puVar1[4] = iVar4;
    puVar1[5] = iVar6;
    puVar1[7] = iVar6 >> 1;
    puVar1[6] = iVar6;
    uVar2 = __16__rt_sdiv(iVar6 >> 1,0x100);
    puVar1[8] = uVar2;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar3);
  return;
}


/* sub_0800A346 @ 0x0800A346 */

void sub_0800A346(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar5 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar4 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = sub_08009370(param_1[iVar2 + -3]);
  puVar1 = (undefined4 *)sub_0801F08C(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = iVar4;
    puVar1[5] = iVar5;
    *puVar1 = &_08024C04;
    puVar1[6] = iVar3;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A3A2 @ 0x0800A3A2 */

void sub_0800A3A2(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08009370(param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802521C;
    puVar1[1] = 0;
    puVar1[3] = iVar3;
    puVar1[2] = 0;
    puVar1[4] = iVar3 + -8;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A3E8 @ 0x0800A3E8 */

void sub_0800A3E8(void)

{
  int *piVar1;
  
  DAT_03001fd8 = 1;
  sub_08006C24(&DAT_03001120);
  sub_0800BF08(&DAT_03001fe0);
  sub_0801F346();
  piVar1 = (int *)sub_0801ED3C((undefined4 *)0x0);
  sub_0801F2CE(piVar1);
  return;
}


/* sub_0800A438 @ 0x0800A438 */

void sub_0800A438(int *param_1)

{
  *param_1 = *param_1 + -2;
  sub_0801F878((byte *)"CharacterFollow() is deprecated",
               (byte *)"K:\\Source\\ByteCodeInterpreter\\ByteCodeFunctionList.cpp",0x2e3,0);
  return;
}


/* sub_0800A44E @ 0x0800A44E */

void sub_0800A44E(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08009370(param_1[iVar2 + -2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024DE4;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A49A @ 0x0800A49A */

void sub_0800A49A(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08009370(param_1[iVar2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024BF0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A4DA @ 0x0800A4DA */

void sub_0800A4DA(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08009370(param_1[iVar2 + -2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08025230;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A526 @ 0x0800A526 */

void sub_0800A526(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = sub_08009370(param_1[iVar2 + -2]);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024BF0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A572 @ 0x0800A572 */

void sub_0800A572(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_08009370(param_1[iVar2]);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_08024DD0;
  }
  sub_0800E04C(&DAT_030020f8,(int)puVar1,iVar2);
  return;
}


/* sub_0800A5A6 @ 0x0800A5A6 */

void sub_0800A5A6(void)

{
  sub_0800E032(&DAT_030020f8);
  return;
}


/* sub_0800A5A8 @ 0x0800A5A8 */

void sub_0800A5A8(int param_1)

{
  sub_0800E032(*(undefined4 **)(param_1 + 0xc));
  return;
}


/* sub_0800A5B2 @ 0x0800A5B2 */

void sub_0800A5B2(void)

{
  sub_0800E038(&DAT_030020f8);
  return;
}


/* sub_0800A5B4 @ 0x0800A5B4 */

void sub_0800A5B4(int param_1)

{
  sub_0800E038(*(undefined4 **)(param_1 + 0xc));
  return;
}


/* sub_0800A5BE @ 0x0800A5BE */

void sub_0800A5BE(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar4 = param_1[iVar2 + -1];
  iVar2 = sub_0801FC9C(0x3002c80,&DAT_080e17b4,0x20,0);
  piVar1 = (int *)sub_0800DED0((undefined4 *)0x0,iVar3,(byte)iVar4);
  sub_0801F2F4(piVar1);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
  }
  return;
}


/* sub_0800A60C @ 0x0800A60C */

void sub_0800A60C(int *param_1)

{
  *param_1 = *param_1 + -1;
  sub_0801F878((byte *)"ShowImage() is deprecated",
               (byte *)"K:\\Source\\ByteCodeInterpreter\\ByteCodeFunctionList.cpp",0x32a,0);
  return;
}


/* sub_0800A622 @ 0x0800A622 */

void sub_0800A622(void)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08025C88;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_0800A638 @ 0x0800A638 */

void sub_0800A638(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08023D2C;
    piVar1[1] = iVar2;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_0800A65C @ 0x0800A65C */

void sub_0800A65C(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802585C;
    piVar1[1] = iVar2;
  }
  sub_0801F2F4(piVar1);
  return;
}


/* sub_0800A680 @ 0x0800A680 */

void sub_0800A680(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar3 = param_1[iVar2];
  iVar2 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
  __call_via_r1(*(int **)(&DAT_081d968c +
                         (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                (undefined *)(*(int *)(iVar2 + 0xc) + iVar2));
  piVar1 = DAT_03001fa8;
  DAT_03000e90 = (byte)uVar3;
  if (DAT_03001fa8 != (int *)0x0) {
    iVar2 = sub_0802645C((int)(&DAT_03000e9c + (uVar3 & 0xff) * 0x1c));
    piVar1[0x12] = iVar2;
    __call_via_r2(piVar1,0,(undefined *)(*(int *)(*piVar1 + 0x28) + *piVar1));
    sub_080086A2((int)piVar1);
  }
  iVar2 = **(int **)(&DAT_081d968c + (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14);
  __call_via_r1(*(int **)(&DAT_081d968c +
                         (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14),
                (undefined *)(*(int *)(iVar2 + 8) + iVar2));
  return;
}


