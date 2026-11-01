/* Ghidra reference decompilation of code_08006460 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08006460 @ 0x08006460 */

void sub_08006460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0801F08C(0x88);
  if (iVar1 != 0) {
    sub_08021EA8(iVar1,param_1,0x88);
  }
  DAT_0300108c = iVar1;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = sub_0801F08C(0x2000);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  return;
}


/* sub_0800649C @ 0x0800649C */

void sub_0800649C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  sub_0801F110(param_1[0x1b]);
  sub_0801F110(param_1[0x1c]);
  sub_0801F110(param_1[0x1d]);
  puVar1 = DAT_0300108c;
  *param_1 = *DAT_0300108c;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  uVar2 = puVar1[4];
  uVar3 = puVar1[5];
  param_1[3] = puVar1[3];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar2 = puVar1[7];
  uVar3 = puVar1[8];
  param_1[6] = puVar1[6];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  uVar2 = puVar1[0xc];
  uVar3 = puVar1[0xd];
  param_1[0xb] = puVar1[0xb];
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  sub_080220F0(param_1 + 0xe,puVar1 + 0xe,puVar1 + 0x14,8,0x80265dd);
  param_1[0x14] = puVar1[0x14];
  sub_08021EA8(param_1 + 0x15,puVar1 + 0x15,0x34);
  sub_0801F110(DAT_0300108c);
  DAT_0300108c = (undefined4 *)0x0;
  sub_08005F1A(param_1,0);
  return;
}


/* sub_08006528 @ 0x08006528 */

undefined4 sub_08006528(undefined4 param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 2;
  }
  return 0;
}


/* sub_08006534 @ 0x08006534 */

void sub_08006534(byte *param_1,int param_2)

{
  byte bVar1;
  
  param_1[param_2 * 10 + 0x694] = 0;
  param_1[param_2 * 10 + 0x69d] = 0xff;
  bVar1 = *param_1;
  param_1[param_2 * 10 + 0x69c] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69d] = (byte)param_2;
  }
  *param_1 = (byte)param_2;
  return;
}


/* sub_0800656A @ 0x0800656A */

void sub_0800656A(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2 * 10 + param_1;
  *(undefined1 *)(iVar2 + 0x694) = 0xff;
  *(undefined1 *)(iVar2 + 0x69b) = 0xff;
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)(iVar2 + 0x69a) = bVar1;
  if (bVar1 != 0xff) {
    *(char *)((uint)bVar1 * 10 + param_1 + 0x69b) = (char)param_2;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}


/* sub_0800659E @ 0x0800659E */

void sub_0800659E(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)param_2;
  *(short *)(param_1 + param_2 * 10 + 0x698) =
       *(short *)(param_1 + param_2 * 10 + 0x698) + *(short *)(param_1 + param_3 * 10 + 0x698);
  param_1[param_2 * 10 + 0x69a] = param_1[param_3 * 10 + 0x69a];
  if ((byte)param_1[param_3 * 10 + 0x69a] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69a] * 10 + 0x69b] = uVar2;
  }
  param_1[param_2 * 10 + 0x69d] = param_1[param_3 * 10 + 0x69d];
  if ((byte)param_1[param_3 * 10 + 0x69d] == 0xff) {
    *param_1 = uVar2;
  }
  else {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69d] * 10 + 0x69c] = uVar2;
  }
  param_1[param_2 * 10 + 0x69c] = param_1[param_3 * 10 + 0x69c];
  if ((byte)param_1[param_3 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_3 * 10 + 0x69c] * 10 + 0x69d] = uVar2;
  }
  param_1[param_3 * 10 + 0x694] = 0xff;
  param_1[param_3 * 10 + 0x69b] = 0xff;
  bVar1 = param_1[1];
  param_1[param_3 * 10 + 0x69a] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69b] = (char)param_3;
  }
  param_1[1] = (char)param_3;
  return;
}


/* sub_08006618 @ 0x08006618 */

void sub_08006618(undefined1 *param_1,int param_2)

{
  if ((byte)param_1[param_2 * 10 + 0x69d] == 0xff) {
    *param_1 = param_1[param_2 * 10 + 0x69c];
  }
  else {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69d] * 10 + 0x69c] = param_1[param_2 * 10 + 0x69c];
  }
  if ((byte)param_1[param_2 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69c] * 10 + 0x69d] = param_1[param_2 * 10 + 0x69d];
  }
  return;
}


/* sub_08006664 @ 0x08006664 */

void sub_08006664(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[(param_2 >> 1) + 0xc00];
  uVar5 = (uint)bVar1;
  param_1[uVar5 * 10 + 0x694] = 0;
  uVar2 = (uint)param_1[uVar5 * 10 + 0x69a];
  if (uVar2 == 0xff) {
    uVar2 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar2 == 0xff) {
      *param_1 = bVar1;
      param_1[uVar5 * 10 + 0x69c] = 0xff;
      param_1[uVar5 * 10 + 0x69d] = 0xff;
    }
    else if (param_1[uVar2 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar2 * 10 + 0x698) =
           *(short *)(param_1 + uVar2 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar2 * 10 + 0x69a] = 0xff;
      sub_0800656A(param_1,uVar5);
    }
    else {
      sub_08006534(param_1,uVar5,param_1[uVar2 * 10 + 0x694],uVar2 * 4,param_4);
    }
  }
  else {
    pbVar3 = param_1 + uVar2 * 10 + 0x694;
    uVar4 = (uint)param_1[uVar5 * 10 + 0x69b];
    if (uVar4 == 0xff) {
      if (*pbVar3 == 0) {
        sub_0800659E(param_1,uVar5,uVar2);
      }
      else {
        sub_08006534(param_1,uVar5);
      }
    }
    else if (*pbVar3 == 0) {
      if (param_1[uVar4 * 10 + 0x694] == 0) {
        sub_08006618(param_1);
        *(short *)(param_1 + uVar4 * 10 + 0x698) =
             *(short *)(param_1 + uVar5 * 10 + 0x698) + *(short *)(pbVar3 + 4) +
             *(short *)(param_1 + uVar4 * 10 + 0x698);
        param_1[uVar4 * 10 + 0x69a] = pbVar3[6];
        if (pbVar3[6] != 0xff) {
          param_1[(uint)pbVar3[6] * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
        }
        sub_0800656A(param_1,param_1[uVar5 * 10 + 0x69a]);
        sub_0800656A(param_1,uVar5);
      }
      else {
        sub_0800659E(param_1,uVar5,uVar2);
      }
    }
    else if (param_1[uVar4 * 10 + 0x694] == 0) {
      *(short *)(param_1 + uVar4 * 10 + 0x698) =
           *(short *)(param_1 + uVar4 * 10 + 0x698) + *(short *)(param_1 + uVar5 * 10 + 0x698);
      param_1[uVar4 * 10 + 0x69a] = param_1[uVar5 * 10 + 0x69a];
      param_1[uVar2 * 10 + 0x69b] = param_1[uVar5 * 10 + 0x69b];
      sub_0800656A(param_1,uVar5);
    }
    else {
      sub_08006534(param_1,uVar5);
    }
  }
  return;
}


/* sub_0800678C @ 0x0800678C */

void sub_0800678C(int param_1)

{
  sub_08006664(&DAT_03001120,*(undefined2 *)(param_1 + 0xc));
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  return;
}


/* sub_080067AC @ 0x080067AC */

int sub_080067AC(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)*param_1;
  uVar3 = param_2 >> 6;
  uVar7 = 0xff;
  uVar4 = 0x7fffffff;
  if (uVar6 != 0xff) {
    do {
      uVar5 = (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x698);
      if (uVar5 < uVar4) {
        if (uVar5 == uVar3) {
          param_1[uVar6 * 10 + 0x694] = 1;
          sub_08006618(param_1,uVar6);
          param_1[*(ushort *)(param_1 + uVar6 * 10 + 0x696) + 0xc00] = (byte)uVar6;
          return (uint)*(ushort *)(param_1 + uVar6 * 10 + 0x696) << 1;
        }
        if ((int)uVar3 < (int)uVar5) {
          uVar4 = uVar5;
          uVar7 = uVar6;
        }
      }
      uVar6 = (uint)param_1[uVar6 * 10 + 0x69c];
    } while (uVar6 != 0xff);
    if (uVar7 != 0xff) {
      bVar1 = param_1[1];
      uVar4 = (uint)bVar1;
      if (uVar4 != 0xff) {
        bVar2 = param_1[uVar4 * 10 + 0x69a];
        param_1[1] = bVar2;
        if (bVar2 != 0xff) {
          param_1[(uint)bVar2 * 10 + 0x69b] = 0xff;
        }
        param_1[uVar4 * 10 + 0x69b] = (byte)uVar7;
        param_1[uVar4 * 10 + 0x69a] = param_1[uVar7 * 10 + 0x69a];
        if (param_1[uVar7 * 10 + 0x69a] != 0xff) {
          param_1[(uint)param_1[uVar7 * 10 + 0x69a] * 10 + 0x69b] = bVar1;
        }
        param_1[uVar7 * 10 + 0x69a] = bVar1;
        *(short *)(param_1 + uVar7 * 10 + 0x698) =
             *(short *)(param_1 + uVar7 * 10 + 0x698) - (short)uVar3;
        param_1[uVar4 * 10 + 0x694] = 1;
        *(short *)(param_1 + uVar4 * 10 + 0x696) =
             *(short *)(param_1 + uVar7 * 10 + 0x696) + *(short *)(param_1 + uVar7 * 10 + 0x698);
        *(short *)(param_1 + uVar4 * 10 + 0x698) = (short)uVar3;
        param_1[*(ushort *)(param_1 + uVar4 * 10 + 0x696) + 0xc00] = bVar1;
        return (uint)*(ushort *)(param_1 + uVar4 * 10 + 0x696) << 1;
      }
      param_1[uVar7 * 10 + 0x694] = 1;
      sub_08006618(param_1,uVar7);
      param_1[*(ushort *)(param_1 + uVar7 * 10 + 0x696) + 0xc00] = (byte)uVar7;
      return (uint)*(ushort *)(param_1 + uVar7 * 10 + 0x696) << 1;
    }
  }
  return -1;
}


/* sub_080068A6 @ 0x080068A6 */

void sub_080068A6(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_080067AC(&DAT_03001120,*(undefined2 *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}


/* sub_080068B8 @ 0x080068B8 */

void sub_080068B8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar1[iVar2 + 1] = param_2;
  return;
}


/* sub_080068CA @ 0x080068CA */

void sub_080068CA(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = param_1 + 4;
  iVar1 = -1;
  iVar2 = iVar1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      param_3 = *(int **)(iVar3 * 4 + iVar5 + 4);
      iVar2 = iVar3;
      if (param_3 == param_2) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  if (iVar2 == -1) {
    piVar4 = (int *)(param_1 + 0x40c);
    iVar5 = *piVar4;
    iVar2 = iVar1;
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = iVar3;
        param_3 = (int *)piVar4[iVar2 + 1];
        if (param_3 == param_2) break;
        iVar3 = iVar2 + 1;
        iVar2 = iVar1;
      } while (iVar3 < iVar5);
    }
    sub_08026528(piVar4,iVar2,param_3,iVar5,param_4);
    piVar4[*piVar4 + 1] = (int)&DAT_03001f20;
  }
  else {
    sub_08026528(iVar5);
    *(undefined4 **)(*(int *)(param_1 + 4) * 4 + iVar5 + 4) = &DAT_03001f20;
  }
  __call_via_r1(param_2,*(int *)(*param_2 + 4) + *param_2);
  return;
}


/* sub_08006942 @ 0x08006942 */

void sub_08006942(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (piVar4[iVar2 + 1] == param_2) goto _08006964;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = -1;
_08006964:
  if (iVar2 == -1) {
    piVar1 = (int *)(param_1 + 0x40c);
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar2 = piVar1[iVar3 + 1];
        if (iVar2 == param_2) goto _08006990;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    iVar3 = -1;
_08006990:
    sub_08026528(piVar1,iVar3,iVar3,iVar2,param_4);
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    piVar4[iVar2 + 1] = param_3;
  }
  else {
    piVar4[iVar2 + 1] = param_3;
  }
  return;
}


/* sub_080069A4 @ 0x080069A4 */

void sub_080069A4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x610);
  iVar3 = *piVar5;
  while (iVar2 = iVar3, iVar3 = iVar2 + -1, -1 < iVar3) {
    piVar4 = (int *)piVar5[iVar2];
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      iVar1 = *piVar5;
      *piVar5 = iVar1 + -1;
      iVar1 = (iVar1 + -1) - iVar3;
      if (iVar1 != 0) {
        REG_DMA3SAD = piVar5 + iVar2 + 1;
        REG_DMA3DAD = piVar5 + iVar2;
        Ram040000dc = (short)iVar1;
        DAT_040000de = 0x8400;
      }
      __call_via_r1(piVar4,*(int *)(*piVar4 + 0xc) + *piVar4);
      __call_via_r1(piVar4,*(int *)(*piVar4 + 8) + *piVar4);
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar5 = *(int **)(iVar3 * 4 + param_1 + 8);
    iVar2 = *piVar5;
    __call_via_r1(piVar5,*(int *)(iVar2 + 8) + iVar2);
  }
  return;
}


/* sub_08006A38 @ 0x08006A38 */

void sub_08006A38(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x610);
  iVar1 = *piVar5;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)piVar5[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 4) + *piVar3);
    if ((iVar4 != 0) && (iVar4 = piVar3[1], piVar3[1] = iVar4 + -1, iVar4 + -1 == 0)) {
      iVar4 = *piVar5;
      *piVar5 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        REG_DMA3SAD = piVar5 + iVar2 + 1;
        REG_DMA3DAD = piVar5 + iVar2;
        Ram040000dc = (short)iVar4;
        DAT_040000de = 0x8400;
      }
      __call_via_r1(piVar3,*(int *)(*piVar3 + 0xc) + *piVar3);
      __call_via_r1(piVar3,*(int *)(*piVar3 + 8) + *piVar3);
    }
  }
  return;
}


/* sub_08006AA6 @ 0x08006AA6 */

void sub_08006AA6(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  sub_0801F566(&DAT_030022bc);
  piVar3 = (int *)(param_1 + 0x208);
  iVar1 = *piVar3;
  while (-1 < iVar1 + -1) {
    iVar2 = *(int *)piVar3[iVar1];
    __call_via_r1((int *)piVar3[iVar1],*(int *)(iVar2 + 0x14) + iVar2);
    iVar1 = iVar1 + -1;
  }
  *piVar3 = 0;
  return;
}


/* sub_08006AD8 @ 0x08006AD8 */

void sub_08006AD8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined *puStack_228;
  undefined *puStack_224;
  undefined4 uStack_220;
  int local_21c [129];
  int local_18;
  
  local_21c[0] = 0;
  iVar4 = *(int *)(param_1 + 4);
  local_18 = param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar6 = (int *)(iVar4 * 4 + param_1 + 8);
    piVar1 = (int *)*piVar6;
    iVar2 = *piVar1;
    iVar2 = __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
    if (iVar2 != 0) {
      local_21c[local_21c[0] + 1] = *piVar6;
      local_21c[0] = local_21c[0] + 1;
    }
  }
  piVar1 = local_21c + 1;
  piVar6 = local_21c + local_21c[0];
  if (piVar1 < piVar6) {
    piVar5 = piVar1 + ((int)piVar6 - (int)piVar1 >> 3);
    if (piVar1 != piVar5) {
      iVar4 = sub_08027E74(piVar5,piVar1);
      if (iVar4 != 0) {
        iVar4 = *piVar5;
        *piVar5 = local_21c[1];
        local_21c[1] = iVar4;
      }
      iVar4 = sub_08027E74(piVar1,piVar6);
      piVar5 = piVar6;
      piVar7 = piVar1;
      if (iVar4 != 0) {
        iVar4 = *piVar6;
        *piVar6 = local_21c[1];
        local_21c[1] = iVar4;
      }
      do {
        iVar4 = sub_08027E74(piVar5,piVar1);
        while (iVar4 != 0) {
          piVar5 = piVar5 + -1;
          iVar4 = sub_08027E74(piVar5,piVar1);
        }
        do {
          piVar7 = piVar7 + 1;
          if (piVar5 <= piVar7) {
            iVar4 = *piVar5;
            *piVar5 = local_21c[1];
            local_21c[1] = iVar4;
            sub_08027F40(piVar1,piVar5 + -1);
            sub_08027F40(piVar5 + 1,piVar6);
            goto _08006BCA;
          }
          iVar4 = sub_08027E74(piVar1,piVar7);
        } while (iVar4 != 0);
        iVar4 = *piVar7;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + -1;
      } while( true );
    }
    iVar4 = sub_08027E74(piVar1,piVar6);
    if (iVar4 != 0) {
      iVar4 = *piVar6;
      *piVar6 = local_21c[1];
      local_21c[1] = iVar4;
    }
  }
_08006BCA:
  sub_0801F54C(&DAT_030022bc);
  puStack_228 = &DAT_030022bc;
  iVar4 = 0;
  puStack_224 = &DAT_030022bc;
  uStack_220 = 0;
  if (0 < local_21c[0]) {
    piVar1 = (int *)(local_18 + 0x208);
    do {
      piVar6 = (int *)local_21c[iVar4 + 1];
      iVar2 = *piVar6;
      iVar2 = __call_via_r2(piVar6,&puStack_228,*(int *)(iVar2 + 0x10) + iVar2);
      if (iVar2 != 0) {
        iVar2 = *piVar1;
        iVar3 = local_21c[iVar4 + 1];
        *piVar1 = iVar2 + 1;
        piVar1[iVar2 + 1] = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_21c[0]);
  }
  return;
}


/* sub_08006C24 @ 0x08006C24 */

void sub_08006C24(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar1 = **(int **)(param_1 + iVar2 * 4 + 8);
    __call_via_r1(*(int **)(param_1 + iVar2 * 4 + 8),*(int *)(iVar1 + 4) + iVar1);
  }
  piVar3 = (int *)(param_1 + 0x40c);
  iVar2 = *piVar3;
  while (-1 < iVar2 + -1) {
    iVar1 = *(int *)piVar3[iVar2];
    __call_via_r1((int *)piVar3[iVar2],*(int *)(iVar1 + 4) + iVar1);
    iVar2 = iVar2 + -1;
  }
  piVar4 = (int *)(param_1 + 0x610);
  iVar2 = *piVar4;
  while (-1 < iVar2 + -1) {
    iVar1 = *(int *)piVar4[iVar2];
    __call_via_r1((int *)piVar4[iVar2],*(int *)(iVar1 + 8) + iVar1);
    iVar2 = iVar2 + -1;
  }
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1 + 8;
  Ram040000dc = 0x80;
  DAT_040000de = 0x8500;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1 + 0x20c;
  Ram040000dc = 0x80;
  DAT_040000de = 0x8500;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1 + 0x410;
  Ram040000dc = 0x80;
  DAT_040000de = 0x8500;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1 + 0x614;
  Ram040000dc = 0x20;
  DAT_040000de = 0x8500;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *piVar3 = 0;
  *piVar4 = 0;
  DAT_03003914 = 0xffffffff;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = param_1 + 0x694;
  Ram040000dc = 0x159;
  DAT_040000de = 0x8500;
  param_1[0x694] = 0;
  *(undefined2 *)(param_1 + 0x696) = 0;
  *(undefined2 *)(param_1 + 0x698) = 0x200;
  iVar2 = 1;
  do {
    iVar1 = iVar2 + 1;
    param_1[iVar2 * 10 + 0x69a] = (char)iVar1;
    param_1[iVar2 * 10 + 0x69b] = (char)iVar2 + -1;
    iVar2 = iVar1;
  } while (iVar1 < 0x8a);
  param_1[0x6a5] = 0xff;
  param_1[0xbf4] = 0xff;
  *param_1 = 0;
  param_1[1] = 1;
  return;
}


/* sub_08006D70 @ 0x08006D70 */

int sub_08006D70(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = *param_1;
    while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
      if (uVar4 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
        uVar4 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
      }
      bVar1 = param_1[uVar2 * 10 + 0x69c];
    }
    iVar3 = uVar4 << 6;
  }
  return iVar3;
}


/* sub_08006DA6 @ 0x08006DA6 */

uint sub_08006DA6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (-1 < iVar4 + -1) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar3 = *piVar1;
    uVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    uVar5 = uVar5 | uVar2;
    iVar4 = iVar4 + -1;
  }
  return uVar5;
}


/* sub_08006E0A @ 0x08006E0A */

int sub_08006E0A(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar3) {
    param_4 = param_1 + 4;
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_4 + 4);
      iVar2 = *piVar1;
      iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x40c);
  do {
    if (iVar3 + -1 < 0) {
      return 0;
    }
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar3];
    iVar2 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar2 + 0x24) + iVar2,param_4);
    iVar3 = iVar3 + -1;
  } while (iVar2 == 0);
  return iVar2;
}


/* sub_08006E64 @ 0x08006E64 */

int sub_08006E64(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
    iVar3 = *piVar1;
    iVar3 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x40c);
  while (iVar3 = iVar4 + -1, -1 < iVar3) {
    piVar1 = (int *)((int *)(param_1 + 0x40c))[iVar4];
    iVar4 = *piVar1;
    iVar2 = __call_via_r3(piVar1,param_2,param_3,*(int *)(iVar4 + 0x24) + iVar4);
    iVar4 = iVar3;
    if (iVar2 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}


/* sub_08006ED0 @ 0x08006ED0 */

void sub_08006ED0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_98;
  int aiStack_94 [32];
  
  local_98 = 0;
  DAT_03003914 = &DAT_03001118;
  REG_DMA3SAD = 0x3003914;
  REG_DMA3DAD = aiStack_94;
  Ram040000dc = 0x20;
  DAT_040000de = 0x8500;
  piVar3 = (int *)(param_1 + 0x610);
  iVar2 = 0;
  if (0 < *piVar3) {
    do {
      piVar4 = piVar3 + iVar2 + 1;
      iVar1 = *(int *)*piVar4;
      iVar1 = __call_via_r1((int *)*piVar4,*(int *)(iVar1 + 4) + iVar1);
      if (iVar1 == 0) {
        aiStack_94[local_98] = *piVar4;
        local_98 = local_98 + 1;
      }
      else {
        iVar1 = *(int *)*piVar4;
        __call_via_r1((int *)*piVar4,*(int *)(iVar1 + 8) + iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar3);
  }
  sub_08021EA8(piVar3,&local_98,0x84);
  return;
}


/* sub_08006F4A @ 0x08006F4A */

void sub_08006F4A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08006DA6(param_1,8,0,param_4,param_4);
  sub_08006ED0(param_1);
  uVar1 = sub_0801FD78(&DAT_03002c80);
  *(undefined4 *)(param_1 + 0xbfc) = uVar1;
  iVar2 = sub_0801F08C(0xe00);
  if (iVar2 != 0) {
    sub_08021EA8(iVar2,param_1,0xe00);
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  sub_08006C24(param_1);
  return;
}


/* sub_08006FA4 @ 0x08006FA4 */

void sub_08006FA4(int param_1)

{
  undefined4 uVar1;
  
  sub_08006C24();
  uVar1 = *(undefined4 *)(param_1 + 0xbf8);
  sub_08021EA8(param_1,uVar1,0xe00);
  sub_0801F110(uVar1);
  sub_0801FDD0(&DAT_03002c80,*(undefined4 *)(param_1 + 0xbfc));
  sub_08006DA6(param_1,9,0);
  return;
}


/* sub_08006FFC @ 0x08006FFC */

undefined * sub_08006FFC(uint param_1)

{
  return &gUnknown_081DA908 + (param_1 >> 0xc & 0xc | param_1 >> 0x1e) * 8;
}


/* sub_08007000 @ 0x08007000 */

undefined * sub_08007000(uint param_1,uint param_2)

{
  return &gUnknown_081DA908 + (param_1 & 0xc | param_2) * 8;
}


/* sub_0800700E @ 0x0800700E */

void sub_0800700E(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_28;
  
  local_28 = 0;
  if (*(int *)(param_1 + 4) == 0x80) {
    iVar3 = 0;
  }
  else {
    uVar7 = 0;
    bVar1 = *param_1;
    while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
      if (uVar7 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
        uVar7 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
      }
      bVar1 = param_1[uVar2 * 10 + 0x69c];
    }
    iVar3 = uVar7 << 6;
  }
  if (iVar3 < param_2) {
    pbVar9 = param_1 + 4;
    pbVar4 = param_1 + 0x40c;
    pbVar8 = param_1 + 0x208;
    do {
      iVar3 = *(int *)(param_1 + 4);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        piVar5 = *(int **)(pbVar9 + iVar3 * 4 + 4);
        iVar6 = __call_via_r2(piVar5,local_28,*(int *)(*piVar5 + 0x18) + *piVar5);
        if (iVar6 == 1) {
          __call_via_r1(piVar5,*(int *)(*piVar5 + 4) + *piVar5);
          sub_08026528(pbVar9,iVar3);
        }
        else if (iVar6 == 2) {
          __call_via_r1(piVar5,*(int *)(*piVar5 + 0x1c) + *piVar5);
          iVar6 = *(int *)pbVar4;
          *(int *)pbVar4 = iVar6 + 1;
          *(int **)(pbVar4 + iVar6 * 4 + 4) = piVar5;
          sub_08026528(pbVar9,iVar3);
        }
      }
      sub_08006AD8(param_1);
      sub_0801F566(&DAT_030022bc);
      iVar3 = *(int *)pbVar8;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        iVar6 = **(int **)(pbVar8 + iVar3 * 4 + 4);
        __call_via_r1(*(int **)(pbVar8 + iVar3 * 4 + 4),*(int *)(iVar6 + 0x14) + iVar6);
      }
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      local_28 = local_28 + 1;
      if (*(int *)(param_1 + 4) == 0x80) {
        iVar3 = 0;
      }
      else {
        uVar7 = 0;
        bVar1 = *param_1;
        while (uVar2 = (uint)bVar1, uVar2 != 0xff) {
          if (uVar7 < *(ushort *)(param_1 + uVar2 * 10 + 0x698)) {
            uVar7 = (uint)*(ushort *)(param_1 + uVar2 * 10 + 0x698);
          }
          bVar1 = param_1[uVar2 * 10 + 0x69c];
        }
        iVar3 = uVar7 << 6;
      }
    } while (iVar3 < param_2);
  }
  return;
}


/* sub_0800712E @ 0x0800712E */

void sub_0800712E(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar4 + -1;
  if (-1 < iVar3) {
    piVar5 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar5;
      piVar1 = (int *)piVar4[iVar3 + 1];
      *piVar5 = iVar2 + 1;
      piVar5[iVar2 + 1] = (int)piVar1;
      __call_via_r1(piVar1,*(int *)(*piVar1 + 0x20) + *piVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *piVar4 = 0;
  return;
}


/* sub_08007162 @ 0x08007162 */

void sub_08007162(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (*(int **)(iVar3 * 4 + param_1 + 4 + 4) == param_2) goto _08007186;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  iVar3 = -1;
_08007186:
  iVar2 = *(int *)(*param_2 + 0x1c);
  __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08026528(param_1 + 4,iVar3);
  piVar1 = (int *)(param_1 + 0x40c);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 + 1] = (int)param_2;
  return;
}


/* sub_080071B8 @ 0x080071B8 */

void sub_080071B8(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080256F8;
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
  }
  return;
}


/* sub_080071FA @ 0x080071FA */

undefined4 sub_080071FA(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x18) < DAT_030010a4) && (DAT_0300109c < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030010a8)) && (DAT_030010a0 < *(int *)(param_1 + 0x24))) {
    return 1;
  }
  return 0;
}


/* sub_08007232 @ 0x08007232 */

undefined4 sub_08007232(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + 0x10);
  *puVar1 = uVar2;
  uVar3 = (uint)((*(int *)(param_1 + 0x18) - DAT_030010ac) * 0x800000) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = *(int *)(param_1 + 0x1c) - DAT_030010b0 & 0xffU | uVar2 & 0xfe00ff00 | uVar3;
  uVar3 = puVar1[1];
  uVar2 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar2 | uVar3 & 0xfffff3ff;
  puVar1[1] = *(ushort *)(param_1 + 0xe) & 0x3ff | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_08007298 @ 0x08007298 */

int sub_08007298(int param_1,int param_2,uint param_3)

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


/* sub_080072C4 @ 0x080072C4 */

void sub_080072C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_0801F08C(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4));
  sub_0801F394(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c),uVar1);
  sub_0801F412(&REG_DMA3SAD,(uint)*(ushort *)(param_1 + 0xe) * 0x20 + 0x6010000,uVar1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4),param_4);
  sub_0801F110(uVar1);
  return;
}


/* sub_080072FC @ 0x080072FC */

void sub_080072FC(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4))
  ;
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  sub_080072C4(param_1);
  return;
}


/* sub_08007318 @ 0x08007318 */

undefined2 sub_08007318(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_080072C4(param_1);
  }
  return *(undefined2 *)(param_1 + 0xe);
}


/* sub_0800733E @ 0x0800733E */

undefined4 * sub_0800733E(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x2c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080256F8;
    param_1[5] = param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    param_1[6] = *param_2;
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    uVar3 = param_2[3];
    param_1[9] = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[5] + 0x16);
    param_1[1] = param_2[3];
    param_1[4] = (uint)(*(char *)(param_1[5] + 0x17) != '\0');
    *(short *)(param_1 + 3) = (short)param_4;
    *param_1 = &_08024EE4;
    param_1[10] = param_3;
    if (*(short *)(param_3 + 0xe) == -1) {
      uVar1 = sub_080067AC(&DAT_03001120,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x28) + 0x2c) + 4),uVar2,
                           uVar3,uVar4);
      *(undefined2 *)(param_3 + 0xe) = uVar1;
      sub_080072C4(param_3);
    }
    *(short *)((int)param_1 + 0xe) = *(short *)(param_3 + 0xe) + *(short *)(param_1[5] + 0x14);
  }
  return param_1;
}


/* sub_08007366 @ 0x08007366 */

undefined4 *
sub_08007366(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined2 unaff_r7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *unaff_r5;
  *(undefined1 *)(unaff_r4 + 2) = *(undefined1 *)(unaff_r4[5] + 0x16);
  unaff_r4[1] = *unaff_r5;
  unaff_r4[4] = (uint)(*(char *)(unaff_r4[5] + 0x17) != '\0');
  *(undefined2 *)(unaff_r4 + 3) = unaff_r7;
  *unaff_r4 = &_08024EE4;
  unaff_r4[10] = unaff_r6;
  if (*(short *)(unaff_r6 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,
                         *(undefined4 *)(*(int *)(*(int *)(unaff_r6 + 0x28) + 0x2c) + 4));
    *(undefined2 *)(unaff_r6 + 0xe) = uVar1;
    sub_080072C4(unaff_r6);
  }
  *(short *)((int)unaff_r4 + 0xe) = *(short *)(unaff_r6 + 0xe) + *(short *)(unaff_r4[5] + 0x14);
  return unaff_r4;
}


/* sub_080073B8 @ 0x080073B8 */

void sub_080073B8(void)

{
  return;
}


/* sub_080073BA @ 0x080073BA */

void sub_080073BA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar2 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x28) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
    sub_080072C4(iVar2);
  }
  *(short *)(param_1 + 0xe) = *(short *)(iVar2 + 0xe) + *(short *)(*(int *)(param_1 + 0x14) + 0x14);
  return;
}


/* sub_080073EA @ 0x080073EA */

undefined4 * sub_080073EA(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x2c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  puVar2 = *(undefined4 **)(param_2 + 0x28);
  param_1[5] = puVar2;
  *param_1 = &_080256F8;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_1[6] = *puVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = puVar2[3];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[5] + 0x16);
  param_1[1] = puVar2[3];
  param_1[4] = (uint)(*(char *)(param_1[5] + 0x17) != '\0');
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &_08025974;
  param_1[10] = param_2;
  uVar1 = sub_080067AC(&DAT_03001120,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 4));
  *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  sub_080072C4(param_1);
  return param_1;
}


/* sub_08007470 @ 0x08007470 */

void sub_08007470(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025974;
  if (*(short *)((int)param_1 + 0xe) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}


/* sub_0800749A @ 0x0800749A */

void sub_0800749A(int param_1)

{
  sub_08006664(&DAT_03001120,*(undefined2 *)(param_1 + 0xe));
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  return;
}


/* sub_080074B0 @ 0x080074B0 */

void sub_080074B0(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    uVar1 = sub_080067AC(&DAT_03001120,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    sub_080072C4(param_1);
  }
  return;
}


/* sub_080074D4 @ 0x080074D4 */

int sub_080074D4(int param_1,int param_2,uint param_3)

{
  if (param_2 == 9) {
    sub_080072C4();
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


/* sub_08007520 @ 0x08007520 */

void sub_08007520(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x5c;
  return;
}


/* sub_08007532 @ 0x08007532 */

void sub_08007532(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x800) >> 0xe;
  return;
}


/* sub_08007540 @ 0x08007540 */

void sub_08007540(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_08007552 @ 0x08007552 */

void sub_08007552(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0802141C(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x4c;
  return;
}


/* sub_08007554 @ 0x08007554 */

void sub_08007554(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0802141C(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x4c;
  return;
}


/* sub_08007570 @ 0x08007570 */

void sub_08007570(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(0xf0 < (uVar1 & 0xff));
  return;
}


/* sub_08007588 @ 0x08007588 */

void sub_08007588(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0802141C(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x1ac;
  return;
}


/* sub_080075A6 @ 0x080075A6 */

undefined4 * sub_080075A6(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = *param_2;
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  uVar1 = sub_080067AC(&DAT_03001120);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802489C;
  param_1[0x12] = param_2;
  param_1[6] = param_3;
  param_1[7] = &DAT_03001f3c;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = *(undefined4 *)(param_2 + 4);
  param_1[0xb] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  uVar2 = sub_0801F08C(*param_2);
  param_1[0xc] = uVar2;
  piVar3 = *(int **)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*piVar3 + (int)piVar3);
  return param_1;
}


/* sub_080075A8 @ 0x080075A8 */

undefined4 * sub_080075A8(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = *param_2;
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  uVar1 = sub_080067AC(&DAT_03001120);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802489C;
  param_1[0x12] = param_2;
  param_1[6] = param_3;
  param_1[7] = &DAT_03001f3c;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = *(undefined4 *)(param_2 + 4);
  param_1[0xb] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  uVar2 = sub_0801F08C(*param_2);
  param_1[0xc] = uVar2;
  piVar3 = *(int **)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*piVar3 + (int)piVar3);
  return param_1;
}


/* sub_080075F8 @ 0x080075F8 */

void sub_080075F8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &_0802489C;
  iVar1 = *(int *)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*(int *)(iVar1 + 0xc) + iVar1);
  iVar1 = *(int *)param_1[7];
  __call_via_r2((int *)param_1[7],param_1,*(int *)(iVar1 + 0xc) + iVar1);
  sub_0801F110(param_1[0xc]);
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  return;
}


/* sub_0800763C @ 0x0800763C */

void sub_0800763C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x18) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}


/* sub_08007662 @ 0x08007662 */

void sub_08007662(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1c);
  __call_via_r2(*(int **)(param_1 + 0x1c),param_1,*(int *)(iVar1 + 0xc) + iVar1,param_4,param_4);
  *(int **)(param_1 + 0x1c) = param_2;
  __call_via_r2(param_2,param_1,*(int *)*param_2 + *param_2);
  return;
}


/* sub_08007688 @ 0x08007688 */

void sub_08007688(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(int ***)(param_1 + 0x18) = &DAT_03001f3c;
  __call_via_r2(&DAT_03001f3c,param_1,*DAT_03001f3c + (int)DAT_03001f3c);
  return;
}


/* sub_080076AC @ 0x080076AC */

bool sub_080076AC(int param_1)

{
  return *(undefined4 **)(param_1 + 0x18) == &DAT_03001f3c;
}


/* sub_080076BC @ 0x080076BC */

void sub_080076BC(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  iVar1 = **(int **)(param_1 + 0x1c);
  __call_via_r2(*(int **)(param_1 + 0x1c),param_1,*(int *)(iVar1 + 0xc) + iVar1);
  *(int ***)(param_1 + 0x1c) = &DAT_03001f3c;
  __call_via_r2(&DAT_03001f3c,param_1,*DAT_03001f3c + (int)DAT_03001f3c);
  return;
}


/* sub_080076EE @ 0x080076EE */

void sub_080076EE(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x28) = param_2;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(int *)(param_1 + 0x24) = param_2;
  }
  else if (param_2 == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x2c);
  }
  else {
    *(int *)(param_1 + 0x24) = param_1 + 0x50;
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x2c) + iVar2);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0x50) = *(undefined1 *)(param_2 + (uint)*pbVar1);
    } while (iVar2 < 0x100);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* sub_0800772A @ 0x0800772A */

void sub_0800772A(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1c);
  __call_via_r2(*(int **)(param_1 + 0x1c),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 4) + iVar1);
  iVar1 = **(int **)(param_1 + 0x18);
  __call_via_r2(*(int **)(param_1 + 0x18),param_1,*(int *)(iVar1 + 8) + iVar1);
  return;
}


/* sub_0800775A @ 0x0800775A */

undefined4 sub_0800775A(int param_1)

{
  *(uint *)(param_1 + 0x3c) =
       *(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
       (uint)*(ushort *)(param_1 + 0x14) * 0xc;
  return 1;
}


/* sub_08007772 @ 0x08007772 */

undefined4 sub_08007772(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_100c [4096];
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x3c) + 4);
  *puVar1 = uVar5;
  uVar6 = (uint)(*(int *)(param_1 + 0x40) << 0x17) >> 7;
  *puVar1 = uVar5 & 0xfe00ffff | uVar6;
  *puVar1 = uVar5 & 0xfe00ff00 | uVar6 | *(uint *)(param_1 + 0x44) & 0xff;
  uVar6 = puVar1[1];
  uVar5 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar1[1] = uVar5 | uVar6 & 0xfffff3ff;
  puVar1[1] = uVar5 | uVar6 & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x20) == iVar2) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar2;
    *(uint *)(param_1 + 0x38) = (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 8);
    piVar4 = *(int **)(iVar2 + 8);
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*piVar4 == 0) {
        *(int **)(param_1 + 0x34) = piVar4 + 2;
        return 1;
      }
      sub_0801F394(piVar4,auStack_100c);
    }
    else {
      sub_0801F3BA(piVar4,auStack_100c);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    REG_DMA3SAD = auStack_100c;
    REG_DMA3DAD = *(undefined4 *)(param_1 + 0x30);
    Ram040000dc = (short)(*(uint *)(param_1 + 0x38) >> 2);
    DAT_040000de = 0x8400;
    uVar3 = 1;
  }
  return uVar3;
}


/* sub_0800784C @ 0x0800784C */

void sub_0800784C(int param_1)

{
  REG_DMA3SAD = *(undefined4 *)(param_1 + 0x34);
  REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
  Ram040000dc = (short)(*(uint *)(param_1 + 0x38) >> 2);
  DAT_040000de = 0x8400;
  return;
}


/* sub_0800786A @ 0x0800786A */

int sub_0800786A(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (param_2 == 5) {
    if (*(int *)(param_1 + 0x48) != param_3) {
      param_1 = 0;
    }
  }
  else if (param_2 == 9) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1 = 0;
  }
  else if (param_2 == 0xd) {
    piVar1 = *(int **)(param_1 + 0x18);
    __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 0x10) + *piVar1,piVar1,param_4);
    param_1 = 0;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


/* sub_080078A2 @ 0x080078A2 */

undefined4 sub_080078A2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0xc);
  iVar2 = __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
  if (iVar2 == 0) {
    if (param_2 < 0xd) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = sub_08006528(param_1,param_2);
  }
  return uVar1;
}


/* sub_080078CC @ 0x080078CC */

void sub_080078CC(int param_1)

{
  sub_080068A6();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* sub_080078E4 @ 0x080078E4 */

undefined4 * sub_080078E4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  
  sub_08019B30();
  *param_1 = &_08024E84;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_1[0x12] + 3);
  *(undefined1 *)((int)param_1 + 0x155) = *(undefined1 *)(param_1[0x12] + 4);
  sVar1 = param_4[1];
  param_1[0x56] = (int)*param_4 << 8;
  param_1[0x57] = (int)sVar1 << 8;
  return param_1;
}


/* sub_0800791A @ 0x0800791A */

int * sub_0800791A(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x15c);
  *param_1 = *(int *)(param_2 + 0x158) >> 8;
  param_1[1] = iVar1 >> 8;
  return param_1 + 2;
}


/* sub_0800793A @ 0x0800793A */

int * sub_0800793A(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x158) >> 8;
  iVar4 = *(int *)(param_2 + 0x15c) >> 8;
  bVar1 = *(byte *)(param_2 + 0x154);
  bVar2 = *(byte *)(param_2 + 0x155);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}


/* sub_08007974 @ 0x08007974 */

int * sub_08007974(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)(param_2 + 0x158) >> 8) + (int)**(char **)(param_2 + 0x3c);
  iVar4 = (*(int *)(param_2 + 0x15c) >> 8) + (int)(*(char **)(param_2 + 0x3c))[1];
  bVar1 = *(byte *)(*(int *)(param_2 + 0x3c) + 2);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x3c) + 3);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar3 + (uint)bVar1;
  param_1[3] = iVar4 + (uint)bVar2;
  return param_1 + 4;
}


/* sub_080079B8 @ 0x080079B8 */

void sub_080079B8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x48) + (uint)*(byte *)(param_2 + 0x10) * 0x10;
  iVar5 = *(int *)(param_2 + 0x158) >> 8;
  iVar3 = *(int *)(param_2 + 0x15c) >> 8;
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar4 = *(int *)(iVar1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x18);
  *param_1 = *(int *)(iVar1 + 0xc) + iVar5;
  param_1[1] = iVar6 + iVar3;
  param_1[2] = iVar4 + iVar5;
  param_1[3] = iVar2 + iVar3;
  return;
}


/* sub_08007A26 @ 0x08007A26 */

void sub_08007A26(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  sub_080079B8(&local_1c);
  iVar2 = local_18 + local_10 >> 1;
  iVar4 = local_1c + local_14 >> 1;
  cVar1 = *(char *)(param_2 + 0x10);
  iVar3 = iVar4;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_2 + 0x15c) >> 8;
  }
  else {
    iVar5 = iVar2;
    if (((cVar1 != '\x01') && (iVar3 = local_1c, cVar1 != '\x02')) &&
       (iVar3 = iVar2, iVar5 = iVar4, cVar1 == '\x03')) {
      iVar3 = local_14;
      iVar5 = iVar2;
    }
  }
  *param_1 = iVar3;
  param_1[1] = iVar5;
  return;
}


/* sub_08007A84 @ 0x08007A84 */

undefined4 sub_08007A84(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(*(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(ushort *)(param_1 + 0x14) * 0xc);
  *(char **)(param_1 + 0x3c) = pcVar7;
  iVar4 = (*(int *)(param_1 + 0x158) >> 8) + (int)*pcVar7;
  bVar1 = pcVar7[2];
  bVar2 = pcVar7[3];
  iVar5 = (*(int *)(param_1 + 0x15c) >> 8) + (int)pcVar7[1];
  iVar6 = iVar5 - DAT_030010b0;
  *(int *)(param_1 + 0x40) = iVar4 - DAT_030010ac;
  *(int *)(param_1 + 0x44) = iVar6;
  *(uint *)(param_1 + 4) = iVar5 + (uint)bVar2;
  if ((((iVar4 < DAT_030010a4) && (DAT_0300109c < (int)(iVar4 + (uint)bVar1))) &&
      (iVar5 < DAT_030010a8)) && (DAT_030010a0 < (int)(iVar5 + (uint)bVar2))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_08007B08 @ 0x08007B08 */

int sub_08007B08(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if (param_2 == 0x11) {
    if ((int *)*param_3 != param_1) {
      sub_080079B8(&iStack_1c,param_1);
      if ((((iStack_1c < param_3[3]) && (param_3[1] < iStack_14)) && (iStack_18 < param_3[4])) &&
         (param_3[2] < iStack_10)) {
        iVar1 = __call_via_r2(param_1,6,*(int *)(*param_1 + 0x2c) + *param_1);
        if (((iVar1 == 0) &&
            (iVar1 = __call_via_r2(param_1,7,*(int *)(*param_1 + 0x2c) + *param_1), iVar1 == 0)) &&
           ((iVar1 = __call_via_r2(param_1,8,*(int *)(*param_1 + 0x2c) + *param_1), iVar1 == 0 &&
            ((iVar1 = __call_via_r2(param_1,0x10,*(int *)(*param_1 + 0x2c) + *param_1), iVar1 == 0
             || (*(ushort *)(param_1 + 5) < 5)))))) {
          return 0;
        }
        return 1;
      }
    }
    iVar1 = 0;
  }
  else if (param_2 == 0x14) {
    iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
    if (iVar1 != 0) {
      iVar1 = sub_08019102(param_1[0x12]);
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      else {
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        param_3[iVar2 * 7 + 1] = iVar1;
        param_3[iVar2 * 7 + 2] = (uint)*(byte *)(param_1 + 4);
        iVar1 = (param_1[0x56] >> 8) + (int)*(char *)param_1[0xf];
        iVar3 = (param_1[0x57] >> 8) + (int)((char *)param_1[0xf])[1];
        iVar5 = iVar3 - DAT_030010b0;
        iVar4 = (iVar1 + (uint)*(byte *)(param_1[0xf] + 2)) - DAT_030010ac;
        iVar3 = (iVar3 + (uint)*(byte *)(param_1[0xf] + 3)) - DAT_030010b0;
        param_3[iVar2 * 7 + 3] = iVar1 - DAT_030010ac;
        param_3[iVar2 * 7 + 4] = iVar5;
        param_3[iVar2 * 7 + 5] = iVar4;
        param_3[iVar2 * 7 + 6] = iVar3;
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = sub_08019B70(param_1,param_2,param_3);
  }
  return iVar1;
}


/* sub_08007C70 @ 0x08007C70 */

undefined4 *
sub_08007C70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x158), param_1 != (undefined4 *)0x0)) {
    sub_080075A8(param_1,param_2,&DAT_03001f34);
    *param_1 = &_08025C30;
    param_1[0x54] = param_3;
    param_1[0x55] = param_4;
    if ((undefined *)param_1[10] != &gUnknown_086D0ED0) {
      sub_080076EE(param_1);
    }
  }
  return param_1;
}


/* sub_08007CB6 @ 0x08007CB6 */

void sub_08007CB6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  sub_0800763C(param_1,*(undefined4 *)(&gUnknown_081DA978 + param_2 * 4),param_3,param_4,param_4);
  puVar1 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar1 = &gUnknown_086D0ED0;
  }
  if (*(undefined **)(param_1 + 0x28) != puVar1) {
    sub_080076EE(param_1);
  }
  return;
}


/* sub_08007CDE @ 0x08007CDE */

undefined4 sub_08007CDE(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)(*(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(ushort *)(param_1 + 0x14) * 0xc);
  *(char **)(param_1 + 0x3c) = pcVar2;
  cVar1 = *pcVar2;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x154) + (int)pcVar2[1];
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x150) + (int)cVar1;
  return 1;
}


/* sub_08007D24 @ 0x08007D24 */

void sub_08007D24(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  
  local_24 = param_2 + 1;
  local_2c = *param_2 >> 8;
  local_28 = *local_24 >> 8;
  iStack_20 = param_1;
  piStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = sub_08006366(&DAT_03001090,&local_2c);
  piVar3 = (int *)(param_1 + 0x158);
  piVar2 = (int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    iStack_30 = *param_2;
    if ((iStack_18 << 0x1f < 0) && (((local_2c & 7) < 2 || (5 < (local_2c & 7))))) {
      uStack_38 = local_2c + 4 & 0xfffffff8;
      uStack_34 = local_28;
      iVar1 = sub_08006366(&DAT_03001090,&uStack_38,param_1 + 0x154);
      if (iVar1 != 0) {
        iVar1 = param_2[1];
        *piVar3 = uStack_38 << 8;
        *piVar2 = iVar1;
        iStack_30 = uStack_38 << 8;
        local_2c = uStack_38;
      }
    }
    if ((iStack_18 << 0x1e < 0) && (((local_28 & 7) < 2 || (5 < (local_28 & 7))))) {
      uStack_38 = local_2c;
      uStack_34 = local_28 + 4 & 0xfffffff8;
      iVar1 = sub_08006366(&DAT_03001090,&uStack_38,param_1 + 0x154);
      if (iVar1 != 0) {
        *piVar3 = iStack_30;
        *piVar2 = uStack_34 << 8;
      }
    }
  }
  else {
    *piVar3 = *param_2;
    *piVar2 = *local_24;
  }
  return;
}


/* sub_08007DE8 @ 0x08007DE8 */

void sub_08007DE8(int *param_1)

{
  int iVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 local_48 [4];
  undefined1 auStack_44 [16];
  undefined1 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int *local_28;
  undefined1 auStack_24 [12];
  int *local_18;
  
  if (DAT_0300208c == 0) {
    sub_0800791A(&local_2c,param_1);
    sub_08027EBC(auStack_24,&UNK_083b5104 + (uint)*(byte *)(param_1 + 4) * 0x10,&local_2c);
    sub_08006E0A(&DAT_03001120,3,auStack_24);
  }
  else {
    local_34 = (undefined1)param_1[4];
    local_2c = &gUnknown_086DB2DC;
    local_30 = 0x400;
    local_48[0] = 1;
    local_28 = param_1;
    local_18 = param_1;
    sub_0800791A(auStack_50,param_1);
    sub_08027EBC(auStack_44,&UNK_083b5144 + (uint)*(byte *)(param_1 + 4) * 0x10,auStack_50);
    iVar1 = sub_08006DA6(&DAT_03001120,0,local_48);
    if (iVar1 == 0) {
      sub_0800791A(auStack_60,param_1);
      sub_08027EBC(auStack_58,&UNK_083b5104 + (uint)*(byte *)(param_1 + 4) * 0x10,auStack_60);
      iVar1 = sub_08006E0A(&DAT_03001120,3,auStack_58);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = sub_0800C06E(&DAT_03001fe0);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      iVar1 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
    }
    iVar1 = sub_0802141C(3);
    __call_via_r2(param_1,iVar1 + 0x28,*(int *)(*param_1 + 0x28) + *param_1);
  }
  return;
}


/* sub_08007EDA @ 0x08007EDA */

void sub_08007EDA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = (uint)DAT_03000e90 * 0x1c;
  puVar3 = &DAT_03000e9c + iVar2;
  bVar1 = puVar3[(byte)(&DAT_03000ea5)[iVar2] + 0x18];
  iVar2 = __call_via_r1(puVar3,*(undefined4 *)(&DAT_081d9908 + (uint)bVar1 * 0x10),param_3,
                        (uint)DAT_03000e90 * 8,param_4);
  if (iVar2 == 0) {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1694,0x40,0);
  }
  else {
    __call_via_r2(puVar3,param_1,(&PTR_sub_08013178_1_081d990c)[(uint)bVar1 * 4]);
  }
  return;
}


/* sub_08007F26 @ 0x08007F26 */

void sub_08007F26(int param_1)

{
  sub_08007554();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_08007F34 @ 0x08007F34 */

void sub_08007F34(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (0x400 < iVar1) {
    if ((*(byte *)(param_2[0x12] + 2) < 0xf) || (*(int *)(param_2[0x12] + 300) == 0)) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      __call_via_r2(param_2,0xe,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
    }
  }
  if (((uint)DAT_030022ae << 0x18) >> 0x1c != 0) {
    if ((int)((uint)DAT_030022b0 << 0x1a) < 0) {
      *(undefined1 *)(param_2 + 4) = 2;
    }
    if ((int)((uint)DAT_030022b0 << 0x1b) < 0) {
      *(undefined1 *)(param_2 + 4) = 3;
    }
    if ((int)((uint)DAT_030022b0 << 0x19) < 0) {
      *(undefined1 *)(param_2 + 4) = 1;
    }
    if ((int)((uint)DAT_030022b0 << 0x18) < 0) {
      *(undefined1 *)(param_2 + 4) = 0;
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  uVar2 = DAT_030022b0 & 0xf0;
  if ((DAT_030022b0 & 0xf0) != 0) {
    if ((((uint)-DAT_03001f60 < 0x14) && ((uVar2 & ~-uVar2) == 0)) && ((DAT_03001f40 & uVar2) != 0))
    {
      __call_via_r2(param_2,0xd,*(int *)(*param_2 + 0x28) + *param_2);
    }
    DAT_03001f60 = 0;
    DAT_03001f40 = uVar2;
  }
  if ((DAT_030022b0 & 1) == 0) {
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      sub_08007EDA(param_2);
    }
  }
  else {
    sub_08007DE8(param_2);
  }
  return;
}


/* sub_08008030 @ 0x08008030 */

void sub_08008030(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  
  uVar1 = (uint)DAT_030022ae;
  if ((uVar1 << 0x18) >> 0x1c == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  else {
    piVar3 = param_2 + 0x62;
    piVar4 = param_2 + 0x56;
    iVar2 = 0;
    if ((int)(uVar1 << 0x1a) < 0) {
      local_18 = param_2[0x57];
      local_1c = *piVar4 - *piVar3;
      sub_08007D24(param_2,&local_1c,2);
      iVar2 = 1;
    }
    else if ((int)(uVar1 << 0x1b) < 0) {
      local_18 = param_2[0x57];
      local_1c = *piVar4 + *piVar3;
      sub_08007D24(param_2,&local_1c,2);
      iVar2 = 2;
    }
    if ((int)((uint)DAT_030022ae << 0x19) < 0) {
      local_1c = *piVar4;
      local_18 = param_2[0x57] - *piVar3;
      sub_08007D24(param_2,&local_1c,1);
      iVar2 = iVar2 + 3;
    }
    else if ((int)((uint)DAT_030022ae << 0x18) < 0) {
      local_1c = *piVar4;
      local_18 = param_2[0x57] + *piVar3;
      sub_08007D24(param_2,&local_1c,1);
      iVar2 = iVar2 + 6;
    }
    *(undefined *)(param_2 + 4) = (&UNK_083b5184)[(uint)*(byte *)(param_2 + 4) + iVar2 * 4];
  }
  if ((DAT_030022b0 & 1) == 0) {
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      sub_08007EDA(param_2);
    }
  }
  else {
    sub_08007DE8(param_2);
  }
  return;
}


/* sub_0800811E @ 0x0800811E */

void sub_0800811E(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  if ((DAT_03001f40 & ~DAT_030022ae) == 0) {
    piVar3 = param_2 + 0x56;
    local_20 = *piVar3 + *(int *)(&DAT_083b51a8 + (uint)*(byte *)(param_2 + 4) * 8) * param_2[99];
    local_1c = param_2[0x57] +
               *(int *)(&DAT_083b51ac + (uint)*(byte *)(param_2 + 4) * 8) * param_2[99];
    local_28 = local_20 >> 8;
    local_24 = local_1c >> 8;
    local_18 = param_2 + 0x55;
    iVar1 = sub_08006366(&DAT_03001090,&local_28);
    if (iVar1 == 0) {
      sub_0800DD80(&DAT_030020dc,8,100);
      __call_via_r2(param_2,0x1f,*(int *)(*param_2 + 0x28) + *param_2);
      sub_0801FC9C(&DAT_03002c80,&DAT_080e1838,0x40,0);
    }
    else {
      *piVar3 = local_20;
      piVar2 = param_2 + 0x62;
      param_2[0x57] = local_1c;
      if (((int)((uint)DAT_030022ae << 0x19) < 0) && ((char)param_2[4] != '\x01')) {
        local_1c = local_1c - *piVar2;
      }
      if (((int)((uint)DAT_030022ae << 0x18) < 0) && ((char)param_2[4] != '\0')) {
        local_1c = local_1c + *piVar2;
      }
      if (((int)((uint)DAT_030022ae << 0x1a) < 0) && ((char)param_2[4] != '\x02')) {
        local_20 = local_20 - *piVar2;
      }
      if (((int)((uint)DAT_030022ae << 0x1b) < 0) && ((char)param_2[4] != '\x03')) {
        local_20 = local_20 + *piVar2;
      }
      local_28 = local_20 >> 8;
      local_24 = local_1c >> 8;
      iVar1 = sub_08006366(&DAT_03001090,&local_28,local_18);
      if (iVar1 != 0) {
        *piVar3 = local_20;
        param_2[0x57] = local_1c;
      }
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  if ((DAT_030022b0 & 1) == 0) {
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      sub_08007EDA(param_2);
    }
  }
  else {
    sub_08007DE8(param_2);
  }
  return;
}


/* sub_08008276 @ 0x08008276 */

void sub_08008276(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (((uint)DAT_030022ae << 0x18) >> 0x1c != 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  if ((DAT_030022b0 & 1) == 0) {
    if ((int)((uint)DAT_030022b0 << 0x1e) < 0) {
      sub_08007EDA(param_2);
    }
  }
  else {
    sub_08007DE8(param_2);
  }
  return;
}


/* sub_080082C8 @ 0x080082C8 */

void sub_080082C8(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = (uint)*(byte *)(param_2 + 0x10) * 8;
  local_10 = *(int *)(param_2 + 0x158) - *(int *)(&gUnknown_083B51C8 + iVar1);
  local_c = *(int *)(param_2 + 0x15c) - *(int *)(&DAT_083b51cc + iVar1);
  local_18 = local_10 >> 8;
  local_14 = local_c >> 8;
  iVar1 = sub_08006366(&DAT_03001090,&local_18,param_2 + 0x154);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x158) = local_10;
    *(int *)(param_2 + 0x15c) = local_c;
  }
  return;
}


/* sub_0800831C @ 0x0800831C */

void sub_0800831C(undefined4 param_1,int param_2)

{
  sub_0800E210();
  *(undefined1 *)(param_2 + 0x164) = 0;
  *(undefined1 *)(param_2 + 0x163) = 0;
  return;
}


/* sub_08008330 @ 0x08008330 */

void sub_08008330(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x164) = 0x80;
  *(undefined1 *)(param_2 + 0x163) = 0x80;
  return;
}


/* sub_0800833E @ 0x0800833E */

void sub_0800833E(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sub_0800E130();
  *(undefined1 *)(param_2 + 0x163) = 0;
  *(undefined1 *)(param_2 + 0x164) = 0;
  iVar2 = (uint)DAT_03000e90 * 0x1c;
  iVar1 = (uint)(byte)(&DAT_03000ea4)[iVar2] * 0x14;
  if (((&gUnknown_081D967C)[iVar1] & 1) != 0) {
    iVar3 = **(int **)(&DAT_081d968c + iVar1);
    iVar4 = *(int *)(iVar3 + 0xc);
    __call_via_r1(*(int **)(&DAT_081d968c + iVar1),iVar4 + iVar3,iVar4,
                  (uint)(byte)(&DAT_03000ea4)[iVar2] * 4,param_4);
    (&DAT_03000ea4)[iVar2] = (&DAT_081d9681)[(uint)(byte)(&DAT_03000ea4)[iVar2] * 0x14];
  }
  return;
}


/* sub_08008390 @ 0x08008390 */

void sub_08008390(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  sub_08010760();
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024BC8;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 8;
  }
  sub_08007662(param_2,puVar1);
  return;
}


/* sub_080083C0 @ 0x080083C0 */

void sub_080083C0(void)

{
  return;
}


/* sub_080083C2 @ 0x080083C2 */

void sub_080083C2(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [16];
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  int *piStack_30;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (uint)(byte)(&DAT_03000ea4)[(uint)DAT_03000e90 * 0x1c] * 0x14;
  if (*(int *)(param_1 + 4) == 0) {
    if ((DAT_030022ae & 1) != 0) {
      if (*(ushort *)(param_2 + 5) < (ushort)(byte)(&UNK_081d9683)[iVar2]) {
        uVar1 = *(short *)((int)param_2 + 0x12) + 1;
        *(ushort *)((int)param_2 + 0x12) = uVar1;
        *(ushort *)(param_2 + 5) = uVar1 >> 2;
        return;
      }
      if (*(int *)(param_1 + 8) == 0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      puVar4 = (undefined4 *)sub_0801F08C(8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &_08024A3C;
        *(undefined1 *)(puVar4 + 1) = 0;
      }
      sub_08007662(param_2,puVar4);
      return;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    sub_080076BC(param_2);
    if (*(int *)(param_1 + 8) != 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    param_2[0x5a] = 0;
  }
  iStack_1c = *(int *)(&UNK_081d9688 + iVar2) *
              *(int *)(&DAT_083b51e8 + (uint)*(byte *)(param_2 + 4) * 8) + param_2[0x56];
  iStack_18 = *(int *)(&UNK_081d9688 + iVar2) *
              *(int *)(&DAT_083b51ec + (uint)*(byte *)(param_2 + 4) * 8) + param_2[0x57];
  iVar3 = sub_0800638C(&DAT_03001090,&iStack_1c,param_2 + 0x55);
  if (iVar3 != 0) {
    param_2[0x56] = iStack_1c;
    param_2[0x57] = iStack_18;
  }
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  *(ushort *)(param_2 + 5) = uVar1 >> 2;
  if (((uVar1 & 3) == 0) && (((uint)(byte)(&UNK_081d9684)[iVar2] & 1 << (uVar1 >> 2 & 0xff)) != 0))
  {
    uStack_3c = (undefined1)param_2[4];
    puStack_34 = &gUnknown_086DB2EC;
    uStack_38 = 0x400;
    auStack_50[0] = 1;
    piStack_30 = param_2;
    piStack_20 = param_2;
    sub_0800791A(auStack_58,param_2);
    sub_08027EBC(auStack_4c,&UNK_083b5208 + (uint)*(byte *)(param_2 + 4) * 0x10,auStack_58);
    iVar3 = sub_08006DA6(&DAT_03001120,0,auStack_50);
    if (iVar3 != 0) {
      iVar3 = sub_0802141C(3);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar3 + 0x22) * 0xc,0x40,0);
    }
  }
  if ((ushort)(byte)(&UNK_081d9682)[iVar2] <= *(ushort *)(param_2 + 5)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


