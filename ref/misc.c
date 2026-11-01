/* Ghidra reference decompilation of misc (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_03000000 @ 0x03000000 */

/* WARNING: Removing unreachable block (ram,0x0300012c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000000(int a0,int a1,int a2,int a3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint uVar6;
  uint unaff_r7;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = CONCAT44(a1,a0);
  iVar8 = 0;
  uVar9 = 1;
_03000024:
  while( true ) {
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    uVar2 = (undefined4)uVar12;
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar10) {
      uVar11 = sub_0300024C();
      unaff_r7 = unaff_r7 + unaff_r4;
      goto _03000020;
    }
    iVar8 = iVar8 + -1;
    puVar4 = puVar5;
    if (iVar8 < 0) {
      puVar4 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar10) break;
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    bVar10 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (!bVar10) {
      sub_0300024C(uVar2,puVar5);
      if (unaff_r7 == 0) {
        iVar8 = sub_0300024C();
        return iVar8;
      }
      uVar9 = unaff_r7;
      uVar11 = sub_0300024C();
      iVar7 = unaff_r7 + 2;
      goto joined_r0x03000220;
    }
    uVar11 = sub_0300024C(uVar2,puVar5);
    puVar5 = (uint *)((ulonglong)uVar11 >> 0x20);
    unaff_r7 = unaff_r7 - 1;
    if (unaff_r7 == 0) {
_03000020:
      uVar12 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),(undefined1 *)uVar11 + 1);
      *(undefined1 *)uVar11 = (char)unaff_r7;
    }
    else {
      if (-1 < (int)unaff_r7) {
        unaff_r7 = (uint)*(byte *)((int)uVar11 - unaff_r7);
        goto _03000020;
      }
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar8 = 0x1f;
      }
      bVar10 = CARRY4(unaff_r6,unaff_r6);
      unaff_r6 = unaff_r6 * 2;
      if (bVar10) {
        do {
          iVar7 = 0x100;
          do {
            uVar12 = sub_0300024C();
            puVar5 = (uint *)((ulonglong)uVar12 >> 0x20);
            *(undefined1 *)uVar12 = (char)unaff_r7;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar8 = iVar8 + -1;
          puVar4 = puVar5;
          if (iVar8 < 0) {
            puVar4 = puVar5 + 1;
            unaff_r6 = *puVar5;
            iVar8 = 0x1f;
          }
          uVar12 = CONCAT44(puVar4,(undefined1 *)uVar12 + 1);
          bVar10 = CARRY4(unaff_r6,unaff_r6);
          unaff_r6 = unaff_r6 * 2;
        } while (bVar10);
      }
      else {
        iVar8 = iVar8 + -1;
        puVar5 = puVar4;
        if (iVar8 < 0) {
          puVar5 = puVar4 + 1;
          unaff_r6 = *puVar4;
          iVar8 = 0x1f;
        }
        uVar12 = CONCAT44(puVar5,(int)uVar11);
        bVar10 = CARRY4(unaff_r6,unaff_r6);
        unaff_r6 = unaff_r6 * 2;
        unaff_r4 = 0;
        if (!bVar10) {
          uVar12 = sub_0300024C();
          unaff_r4 = unaff_r7;
        }
      }
    }
  }
  iVar7 = 1;
  do {
    iVar8 = iVar8 + -1;
    puVar5 = puVar4;
    if (iVar8 < 0) {
      puVar5 = puVar4 + 1;
      unaff_r6 = *puVar4;
      iVar8 = 0x1f;
    }
    uVar6 = unaff_r6 * 2;
    iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
    iVar8 = iVar8 + -1;
    puVar4 = puVar5;
    if (iVar8 < 0) {
      puVar4 = puVar5 + 1;
      uVar6 = *puVar5;
      iVar8 = 0x1f;
    }
    unaff_r6 = uVar6 * 2;
  } while (CARRY4(uVar6,uVar6));
  if (iVar7 == 2) {
    iVar7 = 1;
    do {
      iVar8 = iVar8 + -1;
      puVar5 = puVar4;
      if (iVar8 < 0) {
        puVar5 = puVar4 + 1;
        unaff_r6 = *puVar4;
        iVar8 = 0x1f;
      }
      uVar6 = unaff_r6 * 2;
      iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        uVar6 = *puVar5;
        iVar8 = 0x1f;
      }
      uVar11 = CONCAT44(puVar4,uVar2);
      unaff_r6 = uVar6 * 2;
    } while (CARRY4(uVar6,uVar6));
joined_r0x03000220:
    uVar12 = uVar11;
    if (uVar9 == 1) {
      uVar1 = ((undefined1 *)uVar11)[-1];
      puVar3 = (undefined1 *)uVar11;
      do {
        uVar12 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),puVar3 + 1);
        *puVar3 = uVar1;
        iVar7 = iVar7 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar7 != 0);
      goto _03000024;
    }
  }
  else {
    uVar12 = sub_0300024C();
    puVar5 = (uint *)((ulonglong)uVar12 >> 0x20);
    uVar2 = (undefined4)uVar12;
    uVar9 = unaff_r7 + (iVar7 + -3) * 0x100;
    iVar7 = 1;
    do {
      iVar8 = iVar8 + -1;
      puVar4 = puVar5;
      if (iVar8 < 0) {
        puVar4 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar8 = 0x1f;
      }
      uVar6 = unaff_r6 * 2;
      iVar7 = iVar7 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar8 = iVar8 + -1;
      puVar5 = puVar4;
      if (iVar8 < 0) {
        puVar5 = puVar4 + 1;
        uVar6 = *puVar4;
        iVar8 = 0x1f;
      }
      uVar11 = CONCAT44(puVar5,uVar2);
      uVar12 = CONCAT44(puVar5,uVar2);
      unaff_r6 = uVar6 * 2;
    } while (CARRY4(uVar6,uVar6));
    if (uVar9 < 0x10000) {
      if (uVar9 < 0x37ff) {
        if (uVar9 < 0x27f) {
          if (uVar9 < 0x80) {
            iVar7 = iVar7 + 4;
            goto joined_r0x03000220;
          }
        }
        else {
          iVar7 = iVar7 + 1;
          uVar12 = CONCAT44(puVar5,uVar2);
        }
      }
      else {
        iVar7 = iVar7 + 2;
        uVar12 = CONCAT44(puVar5,uVar2);
      }
    }
    else {
      iVar7 = iVar7 + 3;
      uVar12 = CONCAT44(puVar5,uVar2);
    }
  }
  do {
    puVar3 = (undefined1 *)uVar12;
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),puVar3 + 1);
    *puVar3 = puVar3[-uVar9];
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  goto _03000024;
}


/* sub_0300024C @ 0x0300024C */

void sub_0300024C(void)

{
  uint unaff_r8;
  uint unaff_r10;
  uint uVar1;
  
  if (unaff_r10 == 0) {
    unaff_r10 = 0x20;
  }
  uVar1 = unaff_r8;
  if (unaff_r10 < unaff_r8) {
    uVar1 = unaff_r10;
  }
  if (unaff_r8 != uVar1) {
    return;
  }
  return;
}


/* sub_0300029C @ 0x0300029C */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_0300029C(int a0,int a1,int a2,int a3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    uVar2 = *(uint *)a1;
    uVar3 = uVar2 >> 0x18;
    if (uVar3 != 0) {
      uVar3 = (uint)*(byte *)(a2 + uVar3);
    }
    uVar4 = uVar2 >> 0x10 & 0xff;
    if (uVar4 != 0) {
      uVar4 = (uint)*(byte *)(a2 + uVar4);
    }
    uVar5 = uVar2 >> 8 & 0xff;
    if (uVar5 != 0) {
      uVar5 = (uint)*(byte *)(a2 + uVar5);
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 0) {
      uVar2 = (uint)*(byte *)(a2 + uVar2);
    }
    puVar1 = (uint *)(a0 + 4);
    *(uint *)a0 = uVar2 | (uVar5 | (uVar4 | uVar3 << 8) << 8) << 8;
    a3 = a3 + -4;
    a0 = (int)puVar1;
    a1 = (int)(a1 + 4);
  } while (a3 != 0);
  return (int)puVar1;
}


/* sub_030002F0 @ 0x030002F0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_030002F0(int a0,int a1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(a0 + 0x34);
  puVar2 = (undefined1 *)(*(int *)(a0 + 0x24) + -4);
  while (puVar1 = puVar2, iVar4 = iVar4 + -4, -1 < iVar4) {
    puVar2 = puVar1 + 4;
    puVar3 = (uint *)(a1 + 4);
    uVar5 = *(uint *)a1;
    a1 = (int)puVar3;
    if (uVar5 != 0) {
      if ((uVar5 & 0xff) != 0) {
        *puVar2 = (char)uVar5;
      }
      if ((uVar5 >> 8 & 0xff) != 0) {
        puVar1[5] = (char)(uVar5 >> 8);
      }
      if ((uVar5 >> 0x10 & 0xff) != 0) {
        puVar1[6] = (char)(uVar5 >> 0x10);
      }
      if (uVar5 >> 0x18 != 0) {
        puVar1[7] = (char)(uVar5 >> 0x18);
      }
    }
  }
  return (int)puVar1;
}


/* sub_03000348 @ 0x03000348 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000348(int a0,int a1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = *(undefined4 **)(a0 + 0x24);
  iVar3 = *(int *)(a0 + 0x2c);
  iVar4 = *(int *)(a0 + 0x30);
  iVar5 = iVar3;
  puVar2 = puVar1;
  do {
    do {
      uVar8 = puVar1[1];
      puVar6 = (undefined4 *)((int)puVar1 + iVar3);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      puVar6 = (undefined4 *)((int)puVar6 + iVar3);
      *(undefined4 *)a1 = *puVar1;
      *(undefined4 *)(a1 + 4) = uVar8;
      *(undefined4 *)(a1 + 8) = uVar9;
      *(undefined4 *)(a1 + 0xc) = uVar10;
      uVar8 = puVar6[1];
      puVar7 = (undefined4 *)((int)puVar6 + iVar3);
      uVar9 = *puVar7;
      uVar10 = puVar7[1];
      puVar7 = (undefined4 *)((int)puVar7 + iVar3);
      *(undefined4 *)(a1 + 0x10) = *puVar6;
      *(undefined4 *)(a1 + 0x14) = uVar8;
      *(undefined4 *)(a1 + 0x18) = uVar9;
      *(undefined4 *)(a1 + 0x1c) = uVar10;
      uVar8 = puVar7[1];
      puVar6 = (undefined4 *)((int)puVar7 + iVar3);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      puVar6 = (undefined4 *)((int)puVar6 + iVar3);
      *(undefined4 *)(a1 + 0x20) = *puVar7;
      *(undefined4 *)(a1 + 0x24) = uVar8;
      *(undefined4 *)(a1 + 0x28) = uVar9;
      *(undefined4 *)(a1 + 0x2c) = uVar10;
      uVar8 = puVar6[1];
      uVar9 = *(undefined4 *)((int)puVar6 + iVar3);
      uVar10 = ((undefined4 *)((int)puVar6 + iVar3))[1];
      *(undefined4 *)(a1 + 0x30) = *puVar6;
      *(undefined4 *)(a1 + 0x34) = uVar8;
      *(undefined4 *)(a1 + 0x38) = uVar9;
      *(undefined4 *)(a1 + 0x3c) = uVar10;
      a1 = a1 + 0x40;
      puVar1 = puVar1 + 2;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
    puVar1 = puVar2 + iVar3 * 2;
    iVar4 = iVar4 + -8;
    iVar5 = iVar3;
    puVar2 = puVar1;
  } while (iVar4 != 0);
  return a0;
}


/* sub_03000480 @ 0x03000480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000480(int a0,int a1,int a2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar8 = *(int *)(a0 + 0x2c);
  puVar6 = (undefined4 *)(iVar8 * *(int *)(a2 + 4) + *(int *)(a0 + 0x24) + *(int *)a2);
  iVar9 = *(int *)(a2 + 0xc) - *(int *)(a2 + 4);
  iVar10 = *(int *)(a2 + 8) - *(int *)a2;
  iVar3 = iVar10;
  puVar7 = puVar6;
  do {
    do {
      uVar4 = puVar6[1];
      puVar1 = (undefined4 *)((int)puVar6 + iVar8);
      uVar5 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined4 *)((int)puVar1 + iVar8);
      *(undefined4 *)a1 = *puVar6;
      *(undefined4 *)(a1 + 4) = uVar4;
      *(undefined4 *)(a1 + 8) = uVar5;
      *(undefined4 *)(a1 + 0xc) = uVar11;
      uVar4 = puVar1[1];
      puVar2 = (undefined4 *)((int)puVar1 + iVar8);
      uVar5 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined4 *)((int)puVar2 + iVar8);
      *(undefined4 *)(a1 + 0x10) = *puVar1;
      *(undefined4 *)(a1 + 0x14) = uVar4;
      *(undefined4 *)(a1 + 0x18) = uVar5;
      *(undefined4 *)(a1 + 0x1c) = uVar11;
      uVar4 = puVar2[1];
      puVar1 = (undefined4 *)((int)puVar2 + iVar8);
      uVar5 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined4 *)((int)puVar1 + iVar8);
      *(undefined4 *)(a1 + 0x20) = *puVar2;
      *(undefined4 *)(a1 + 0x24) = uVar4;
      *(undefined4 *)(a1 + 0x28) = uVar5;
      *(undefined4 *)(a1 + 0x2c) = uVar11;
      uVar4 = puVar1[1];
      puVar2 = (undefined4 *)((int)puVar1 + iVar8);
      uVar5 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined4 *)(a1 + 0x30) = *puVar1;
      *(undefined4 *)(a1 + 0x34) = uVar4;
      *(undefined4 *)(a1 + 0x38) = uVar5;
      *(undefined4 *)(a1 + 0x3c) = uVar11;
      a1 = a1 + 0x40;
      puVar6 = puVar6 + 2;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
    puVar6 = puVar7 + iVar8 * 2;
    iVar9 = iVar9 + -8;
    iVar3 = iVar10;
    puVar7 = puVar6;
  } while (iVar9 != 0);
  return (int)puVar2 + iVar8;
}


/* sub_03000704 @ 0x03000704 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000704(int a0,int a1,int a2,int a3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar3 = *(int *)a2;
    iVar5 = *(int *)(a2 + 4);
    *(int *)a2 = 0;
    *(int *)(a2 + 4) = 0;
    a2 = a2 + 8;
    iVar4 = iVar3 >> 0x16;
    iVar6 = iVar5 >> 0x16;
    iVar3 = (iVar3 << 0x10) >> 0x16;
    iVar5 = (iVar5 << 0x10) >> 0x16;
    if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    if (iVar3 + 0x80 < 0 != SCARRY4(iVar3,0x80)) {
      iVar3 = -0x80;
    }
    if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    if (iVar4 + 0x80 < 0 != SCARRY4(iVar4,0x80)) {
      iVar4 = -0x80;
    }
    if (0x7f < iVar5) {
      iVar5 = 0x7f;
    }
    if (iVar5 + 0x80 < 0 != SCARRY4(iVar5,0x80)) {
      iVar5 = -0x80;
    }
    if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    if (iVar6 + 0x80 < 0 != SCARRY4(iVar6,0x80)) {
      iVar6 = -0x80;
    }
    puVar2 = (ushort *)(a0 + 2);
    *(ushort *)a0 = (ushort)iVar3 & 0xff | (ushort)(iVar5 << 8);
    *(ushort *)a1 = (ushort)iVar4 & 0xff | (ushort)(iVar6 << 8);
    iVar4 = a3 + -2;
    bVar1 = 1 < a3;
    a0 = (int)puVar2;
    a1 = (int)(a1 + 2);
    a3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return (int)puVar2;
}


/* sub_03000958 @ 0x03000958 */

/* WARNING: Removing unreachable block (ram,0x03000a8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sub_03000958(int a0,int a1,int a2,int a3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint unaff_r4;
  uint unaff_r6;
  uint uVar7;
  uint unaff_r7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = CONCAT44(a1,a0);
  iVar9 = 0;
  uVar10 = 1;
_03000980:
  while( true ) {
    puVar5 = (uint *)((ulonglong)uVar13 >> 0x20);
    uVar3 = (undefined4)uVar13;
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar11) {
      uVar12 = sub_03000BAC();
      unaff_r7 = (uint)*(byte *)(a2 + unaff_r7 + unaff_r4);
      goto _0300097C;
    }
    iVar9 = iVar9 + -1;
    puVar5 = puVar6;
    if (iVar9 < 0) {
      puVar5 = puVar6 + 1;
      unaff_r6 = *puVar6;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (bVar11) break;
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    bVar11 = CARRY4(unaff_r6,unaff_r6);
    unaff_r6 = unaff_r6 * 2;
    if (!bVar11) {
      sub_03000BAC(uVar3,puVar6);
      if (unaff_r7 == 0) {
        iVar9 = sub_03000BAC();
        return iVar9;
      }
      uVar10 = unaff_r7;
      uVar12 = sub_03000BAC();
      iVar8 = unaff_r7 + 2;
      goto joined_r0x03000b80;
    }
    uVar12 = sub_03000BAC(uVar3,puVar6);
    puVar6 = (uint *)((ulonglong)uVar12 >> 0x20);
    unaff_r7 = unaff_r7 - 1;
    if (unaff_r7 == 0) {
_0300097C:
      uVar13 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(undefined1 *)uVar12 + 1);
      *(undefined1 *)uVar12 = (char)unaff_r7;
    }
    else {
      if (-1 < (int)unaff_r7) {
        unaff_r7 = (uint)*(byte *)((int)uVar12 - unaff_r7);
        goto _0300097C;
      }
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        unaff_r6 = *puVar6;
        iVar9 = 0x1f;
      }
      bVar11 = CARRY4(unaff_r6,unaff_r6);
      unaff_r6 = unaff_r6 * 2;
      if (bVar11) {
        do {
          iVar8 = 0x100;
          do {
            uVar13 = sub_03000BAC();
            puVar6 = (uint *)((ulonglong)uVar13 >> 0x20);
            pbVar1 = (byte *)(a2 + unaff_r7);
            unaff_r7 = (uint)*pbVar1;
            *(byte *)uVar13 = *pbVar1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar9 = iVar9 + -1;
          puVar5 = puVar6;
          if (iVar9 < 0) {
            puVar5 = puVar6 + 1;
            unaff_r6 = *puVar6;
            iVar9 = 0x1f;
          }
          uVar13 = CONCAT44(puVar5,(byte *)uVar13 + 1);
          bVar11 = CARRY4(unaff_r6,unaff_r6);
          unaff_r6 = unaff_r6 * 2;
        } while (bVar11);
      }
      else {
        iVar9 = iVar9 + -1;
        puVar6 = puVar5;
        if (iVar9 < 0) {
          puVar6 = puVar5 + 1;
          unaff_r6 = *puVar5;
          iVar9 = 0x1f;
        }
        uVar13 = CONCAT44(puVar6,(int)uVar12);
        bVar11 = CARRY4(unaff_r6,unaff_r6);
        unaff_r6 = unaff_r6 * 2;
        unaff_r4 = 0;
        if (!bVar11) {
          uVar13 = sub_03000BAC();
          unaff_r4 = unaff_r7;
        }
      }
    }
  }
  iVar8 = 1;
  do {
    iVar9 = iVar9 + -1;
    puVar6 = puVar5;
    if (iVar9 < 0) {
      puVar6 = puVar5 + 1;
      unaff_r6 = *puVar5;
      iVar9 = 0x1f;
    }
    uVar7 = unaff_r6 * 2;
    iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
    iVar9 = iVar9 + -1;
    puVar5 = puVar6;
    if (iVar9 < 0) {
      puVar5 = puVar6 + 1;
      uVar7 = *puVar6;
      iVar9 = 0x1f;
    }
    unaff_r6 = uVar7 * 2;
  } while (CARRY4(uVar7,uVar7));
  if (iVar8 == 2) {
    iVar8 = 1;
    do {
      iVar9 = iVar9 + -1;
      puVar6 = puVar5;
      if (iVar9 < 0) {
        puVar6 = puVar5 + 1;
        unaff_r6 = *puVar5;
        iVar9 = 0x1f;
      }
      uVar7 = unaff_r6 * 2;
      iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        uVar7 = *puVar6;
        iVar9 = 0x1f;
      }
      uVar12 = CONCAT44(puVar5,uVar3);
      unaff_r6 = uVar7 * 2;
    } while (CARRY4(uVar7,uVar7));
joined_r0x03000b80:
    uVar13 = uVar12;
    if (uVar10 == 1) {
      uVar2 = ((undefined1 *)uVar12)[-1];
      puVar4 = (undefined1 *)uVar12;
      do {
        uVar13 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),puVar4 + 1);
        *puVar4 = uVar2;
        iVar8 = iVar8 + -1;
        puVar4 = puVar4 + 1;
      } while (iVar8 != 0);
      goto _03000980;
    }
  }
  else {
    uVar13 = sub_03000BAC();
    puVar6 = (uint *)((ulonglong)uVar13 >> 0x20);
    uVar3 = (undefined4)uVar13;
    uVar10 = unaff_r7 + (iVar8 + -3) * 0x100;
    iVar8 = 1;
    do {
      iVar9 = iVar9 + -1;
      puVar5 = puVar6;
      if (iVar9 < 0) {
        puVar5 = puVar6 + 1;
        unaff_r6 = *puVar6;
        iVar9 = 0x1f;
      }
      uVar7 = unaff_r6 * 2;
      iVar8 = iVar8 * 2 + (uint)CARRY4(unaff_r6,unaff_r6);
      iVar9 = iVar9 + -1;
      puVar6 = puVar5;
      if (iVar9 < 0) {
        puVar6 = puVar5 + 1;
        uVar7 = *puVar5;
        iVar9 = 0x1f;
      }
      uVar12 = CONCAT44(puVar6,uVar3);
      uVar13 = CONCAT44(puVar6,uVar3);
      unaff_r6 = uVar7 * 2;
    } while (CARRY4(uVar7,uVar7));
    if (uVar10 < 0x10000) {
      if (uVar10 < 0x37ff) {
        if (uVar10 < 0x27f) {
          if (uVar10 < 0x80) {
            iVar8 = iVar8 + 4;
            goto joined_r0x03000b80;
          }
        }
        else {
          iVar8 = iVar8 + 1;
          uVar13 = CONCAT44(puVar6,uVar3);
        }
      }
      else {
        iVar8 = iVar8 + 2;
        uVar13 = CONCAT44(puVar6,uVar3);
      }
    }
    else {
      iVar8 = iVar8 + 3;
      uVar13 = CONCAT44(puVar6,uVar3);
    }
  }
  do {
    puVar4 = (undefined1 *)uVar13;
    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),puVar4 + 1);
    *puVar4 = puVar4[-uVar10];
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  goto _03000980;
}


/* sub_03000BAC @ 0x03000BAC */

void sub_03000BAC(void)

{
  uint unaff_r8;
  uint unaff_r10;
  uint uVar1;
  
  if (unaff_r10 == 0) {
    unaff_r10 = 0x20;
  }
  uVar1 = unaff_r8;
  if (unaff_r10 < unaff_r8) {
    uVar1 = unaff_r10;
  }
  if (unaff_r8 != uVar1) {
    return;
  }
  return;
}


/* RomHeader @ 0x08000000 */

void RomHeader(void)

{
  REG_WAITCNT = 0x4014;
  DAT_03007dfc = 0;
  REG_DMA3SAD = 0x3007dfc;
  REG_DMA3DAD = 0x3000e7c;
  Ram040000dc = 0x85000aa8;
  REG_DMA3SAD = 0x87fd6bc;
  REG_DMA3DAD = 0x3000000;
  Ram040000dc = 0x8400039f;
  sub_08021D74();
  return;
}


/* _start @ 0x080000C0 */

void _start(void)

{
  REG_WAITCNT = 0x4014;
  DAT_03007dfc = 0;
  REG_DMA3SAD = 0x3007dfc;
  REG_DMA3DAD = 0x3000e7c;
  Ram040000dc = 0x85000aa8;
  REG_DMA3SAD = 0x87fd6bc;
  REG_DMA3DAD = 0x3000000;
  Ram040000dc = 0x8400039f;
  sub_08021D74();
  return;
}


