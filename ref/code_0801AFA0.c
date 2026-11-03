/* Ghidra reference decompilation of code_0801AFA0 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801AFA0 @ 0x0801AFA0 */

undefined4 sub_0801AFA0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (DAT_03001fa8 == 0) {
    uVar1 = 0;
  }
  else {
    sub_0800793A(&iStack_4c,DAT_03001fa8);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,(int)param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iVar3 = iStack_1c;
    if (iStack_1c < 0) {
      iVar3 = -iStack_1c;
    }
    iVar2 = iStack_18;
    if (iStack_18 < 0) {
      iVar2 = -iStack_18;
    }
    uVar4 = 3;
    iStack_20 = 0;
    iStack_24 = 0;
    if (iVar2 < iVar3) {
      if (iVar2 < 3) {
        iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
        if (iVar3 != 0) {
          __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
        }
        if (iStack_1c < 1) {
          uVar4 = 2;
        }
        *(undefined1 *)(param_2 + 4) = uVar4;
        return 1;
      }
      if (iStack_18 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        iStack_20 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        iStack_20 = *(int *)(param_1 + 4);
      }
    }
    else {
      if (iVar3 < 3) {
        iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
        if (iVar3 != 0) {
          __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
        }
        *(bool *)(param_2 + 4) = iStack_18 < 1;
        return 1;
      }
      if (iStack_1c < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        iStack_24 = -*(int *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        iStack_24 = *(int *)(param_1 + 4);
      }
    }
    sub_0800E310((int)param_2,1);
    iStack_3c = param_2[0x56] + iStack_24;
    iStack_38 = param_2[0x57] + iStack_20;
    iStack_34 = iStack_3c;
    iStack_30 = iStack_38;
    iStack_2c = iStack_3c;
    iStack_28 = iStack_38;
    iVar3 = sub_0800E45E((int)param_2,&iStack_2c);
    if (iVar3 == 0) {
      iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 != 0) {
        __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      sub_0800E310((int)param_2,0);
      uVar1 = 1;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      param_2[0x56] = iStack_2c;
      param_2[0x57] = iStack_28;
      sub_0800E310((int)param_2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0801B15E @ 0x0801B15E */

undefined4 * sub_0801B15E(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023D88;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801B17C @ 0x0801B17C */

undefined4 sub_0801B17C(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (DAT_03001fa8 != 0) {
    sub_0800793A(&iStack_4c,DAT_03001fa8);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,(int)param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 3;
      if (iStack_1c < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar2 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 < 1;
      iVar2 = iStack_20;
    }
    if (iVar2 < 3) {
      iVar2 = __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar2 == 0) {
        __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
    }
    else {
      iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      sub_0800E310((int)param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      piVar4 = param_2 + 0x56;
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar3 = __16__rt_sdiv(iVar2 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar2 * 0x100,iStack_40 << 8);
      iStack_4c = *piVar4 + iVar3;
      iStack_48 = param_2[0x57] + iStack_38;
      piVar5 = param_2 + 0x57;
      iStack_3c = iVar3;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar2 = sub_0800E45E((int)param_2,&iStack_2c);
      if (iVar2 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = param_2[0x57];
        iVar2 = sub_0800E45E((int)param_2,&iStack_34);
        if (iVar2 == 0) {
          iStack_34 = *piVar4;
          iStack_30 = iStack_28;
          iVar2 = sub_0800E45E((int)param_2,&iStack_34);
          if (iVar2 != 0) {
            *piVar4 = iStack_34;
            *piVar5 = iStack_30;
          }
        }
        else {
          *piVar4 = iStack_34;
          *piVar5 = iStack_30;
        }
      }
      else {
        *piVar4 = iStack_2c;
        *piVar5 = iStack_28;
      }
      sub_0800E310((int)param_2,0);
    }
  }
  return 0;
}


/* sub_0801B332 @ 0x0801B332 */

undefined4 * sub_0801B332(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023BE0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801B350 @ 0x0801B350 */

undefined4 sub_0801B350(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (DAT_03001fa8 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(&iStack_4c,DAT_03001fa8);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,(int)param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 2;
      if (iStack_1c < 1) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = 0 < iStack_18;
      iVar4 = iStack_20;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      sub_0800E310((int)param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      piVar5 = param_2 + 0x56;
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      iStack_4c = *piVar5 - iVar3;
      iStack_48 = param_2[0x57] - iStack_38;
      piVar6 = param_2 + 0x57;
      iStack_3c = iVar3;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar4 = sub_0800E45E((int)param_2,&iStack_2c);
      if (iVar4 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = param_2[0x57];
        iVar4 = sub_0800E45E((int)param_2,&iStack_34);
        if (iVar4 == 0) {
          iStack_34 = *piVar5;
          iStack_30 = iStack_28;
          iVar4 = sub_0800E45E((int)param_2,&iStack_34);
          if (iVar4 == 0) {
            sub_0800E310((int)param_2,0);
            return 1;
          }
          *piVar5 = iStack_34;
          *piVar6 = iStack_30;
        }
        else {
          *piVar5 = iStack_34;
          *piVar6 = iStack_30;
        }
      }
      else {
        *piVar5 = iStack_2c;
        *piVar6 = iStack_28;
      }
      sub_0800E310((int)param_2,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_0801B4F2 @ 0x0801B4F2 */

undefined4 * sub_0801B4F2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080239C0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801B510 @ 0x0801B510 */

void sub_0801B510(int param_1,undefined4 param_2)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_086D5194 + *(int *)(param_1 + 0xc) * 8),param_2,
                (undefined *)**(undefined4 **)(&gUnknown_086D5194 + *(int *)(param_1 + 0xc) * 8));
  return;
}


/* sub_0801B524 @ 0x0801B524 */

void sub_0801B524(int param_1,int param_2,int param_3)

{
  __call_via_r3();
  return;
}


/* sub_0801B53C @ 0x0801B53C */

void sub_0801B53C(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_080247EC;
  iVar2 = 0;
  if (0 < (int)param_1[2]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 3];
      __call_via_r1((int *)param_1[iVar2 + 3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801B572 @ 0x0801B572 */

undefined4 * sub_0801B572(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = &_080247EC;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar4 = 0;
  param_1[2] = iVar1;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(iVar4 * 4 + param_2 + 0x10);
      uVar3 = __call_via_r2(puVar2,param_3,(undefined *)*puVar2);
      param_1[iVar4 + 3] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[2]);
  }
  return param_1;
}


/* sub_0801B5AA @ 0x0801B5AA */

void sub_0801B5AA(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
  piVar2 = (int *)*piVar1;
  __call_via_r2(piVar1,param_2,(undefined *)(*piVar2 + (int)piVar2));
  return;
}


/* sub_0801B5C0 @ 0x0801B5C0 */

undefined4 sub_0801B5C0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    piVar2 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar3 = *piVar2;
    iVar3 = __call_via_r2(piVar2,param_2,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
    if (iVar3 != 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
      iVar3 = *piVar2;
      __call_via_r2(piVar2,param_2,(undefined *)(*(int *)(iVar3 + 8) + iVar3));
      iVar3 = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 4) = iVar3;
      if (*(int *)(param_1 + 8) <= iVar3) {
        return 1;
      }
      piVar2 = *(int **)(iVar3 * 4 + param_1 + 0xc);
      piVar4 = (int *)*piVar2;
      __call_via_r2(piVar2,param_2,(undefined *)(*piVar4 + (int)piVar4));
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0801B622 @ 0x0801B622 */

void sub_0801B622(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
  }
  return;
}


/* sub_0801B63E @ 0x0801B63E */

undefined4 * sub_0801B63E(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    iVar5 = 0;
    *puVar1 = &_08023780;
    *puVar1 = &_080247EC;
    puVar1[1] = 0;
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1[2] = iVar2;
    if (0 < iVar2) {
      do {
        puVar3 = *(undefined4 **)(iVar5 * 4 + param_1 + 0x10);
        uVar4 = __call_via_r2(puVar3,param_2,(undefined *)*puVar3);
        puVar1[iVar5 + 3] = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[2]);
    }
  }
  return puVar1;
}


/* sub_0801B688 @ 0x0801B688 */

undefined4 sub_0801B688(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = __call_via_r3();
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 0;
}


/* sub_0801B6BC @ 0x0801B6BC */

void sub_0801B6BC(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_1 + 0x10);
      __call_via_r2(iVar1,param_2,*(undefined **)(iVar1 + 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}


/* sub_0801B6EC @ 0x0801B6EC */

void sub_0801B6EC(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_08025024;
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 2];
      __call_via_r1((int *)param_1[iVar2 + 2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801B722 @ 0x0801B722 */

undefined4 * sub_0801B722(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = &_08025024;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar4 = 0;
  param_1[1] = iVar1;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(iVar4 * 4 + param_2 + 0x10);
      uVar3 = __call_via_r2(puVar2,param_3,(undefined *)*puVar2);
      param_1[iVar4 + 2] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[1]);
  }
  return param_1;
}


/* sub_0801B756 @ 0x0801B756 */

void sub_0801B756(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      piVar2 = (int *)*piVar1;
      __call_via_r2(piVar1,param_2,(undefined *)(*piVar2 + (int)piVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_0801B780 @ 0x0801B780 */

uint sub_0801B780(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar3 = *piVar1;
      uVar2 = __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      uVar5 = uVar5 & uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return uVar5;
}


/* sub_0801B7B0 @ 0x0801B7B0 */

void sub_0801B7B0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar2 + 8) + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}


/* sub_0801B7DA @ 0x0801B7DA */

uint sub_0801B7DA(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar4 * 4 + param_1 + 8);
      iVar3 = *piVar1;
      uVar2 = __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar3 + 4) + iVar3));
      uVar5 = uVar5 | uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return uVar5;
}


/* sub_0801B80A @ 0x0801B80A */

undefined4 sub_0801B80A(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      iVar2 = __call_via_r2(piVar1,param_2,(undefined *)(*(int *)(iVar2 + 4) + iVar2));
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return 0;
}


/* sub_0801B83E @ 0x0801B83E */

undefined4 * sub_0801B83E(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0801B722(puVar1,param_1,param_2);
  }
  return puVar1;
}


/* sub_0801B860 @ 0x0801B860 */

undefined4 * sub_0801B860(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0801B722(puVar1,param_1,param_2);
    *puVar1 = &_08024D98;
  }
  return puVar1;
}


/* sub_0801B886 @ 0x0801B886 */

undefined4 * sub_0801B886(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0801B722(puVar1,param_1,param_2);
    *puVar1 = &_08024548;
  }
  return puVar1;
}


/* sub_0801B8B8 @ 0x0801B8B8 */

void sub_0801B8B8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0801B8C0 @ 0x0801B8C0 */

undefined4 sub_0801B8C0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_cr1;
  undefined8 uVar4;
  int aiStack_58 [2];
  int iStack_50;
  undefined1 uStack_48;
  int aiStack_44 [4];
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int iStack_18;
  
  if ((DAT_03001fa8 != 0) && (0x30 < (uint)-*(int *)(param_1 + 4))) {
    uStack_34 = *(undefined1 *)(param_2 + 0x10);
    puStack_2c = &gUnknown_086DB2DC;
    uStack_30 = 0x400;
    uStack_48 = 0;
    iStack_28 = param_2;
    iStack_18 = param_2;
    sub_080079B8(aiStack_44,param_2);
    sub_0800793A(aiStack_58,param_2);
    cVar1 = *(char *)(param_2 + 0x10);
    if ((cVar1 != '\0') && (((cVar1 != '\x01' && (cVar1 != '\x02')) && (cVar1 == '\x03')))) {
      aiStack_44[0] = iStack_50;
    }
    iVar2 = __call_via_r3();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar2 = sub_0802141C(3);
      sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
      uVar4 = sub_0801F08C(8);
      puVar3 = (undefined4 *)uVar4;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_08024A14;
        *(undefined1 *)(puVar3 + 1) = 0xc;
        uVar4 = CONCAT44(0xc,puVar3 + -1);
        coprocessor_store(0xc,in_cr1,puVar3);
      }
      sub_08007662((int)uVar4,(int *)((ulonglong)uVar4 >> 0x20));
    }
  }
  return 0;
}


/* sub_0801B990 @ 0x0801B990 */

void sub_0801B990(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023F74;
  }
  return;
}


/* sub_0801B9C4 @ 0x0801B9C4 */

void sub_0801B9C4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &_08023D58;
  iVar1 = *(int *)param_1[2];
  __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0801B9E6 @ 0x0801B9E6 */

undefined4 * sub_0801B9E6(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023D58;
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  return param_1;
}


/* sub_0801BA02 @ 0x0801BA02 */

void sub_0801BA02(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar1 + (int)piVar1));
  return;
}


/* sub_0801BA12 @ 0x0801BA12 */

undefined4 sub_0801BA12(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0802142E(*(uint *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
    uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 4) + iVar1))
    ;
  }
  return uVar2;
}


/* sub_0801BA36 @ 0x0801BA36 */

void sub_0801BA36(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
  return;
}


/* sub_0801BA46 @ 0x0801BA46 */

void sub_0801BA46(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,
                        (undefined *)**(undefined4 **)(param_1 + 0x10));
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08023D58;
    puVar2[1] = uVar3;
    puVar2[2] = uVar1;
  }
  return;
}


/* sub_0801BA68 @ 0x0801BA68 */

undefined4 sub_0801BA68(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0802142E(*(uint *)(param_1 + 0xc));
  if (iVar1 != 0) {
    uVar2 = __call_via_r3();
    return uVar2;
  }
  return 0;
}


/* sub_0801BA90 @ 0x0801BA90 */

void sub_0801BA90(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xac;
  return;
}


/* sub_0801BAA2 @ 0x0801BAA2 */

void sub_0801BAA2(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_08006D70(&DAT_03001120), 0x7f < iVar2)) {
      sub_0800791A(&iStack_1c,(int)param_2);
      iStack_14 = iStack_1c + *(int *)(&DAT_086ff440 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_10 = iStack_18 + *(int *)(&DAT_086ff444 + (uint)*(byte *)(param_2 + 4) * 8);
      iVar2 = sub_080160C0((undefined4 *)0x0,&iStack_14,(uint)*(byte *)(param_2 + 4),(int)param_2);
      sub_080068B8(0x3001120,iVar2);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801BB1C @ 0x0801BB1C */

void sub_0801BB1C(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  sub_0800763C(param_2,&DAT_03002218);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return;
}


/* sub_0801BB5A @ 0x0801BB5A */

bool sub_0801BB5A(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x18) != &DAT_03002218;
}


/* sub_0801BB6C @ 0x0801BB6C */

undefined4 * sub_0801BB6C(void)

{
  return &DAT_0300221c;
}


/* sub_0801BB88 @ 0x0801BB88 */

undefined4 * sub_0801BB88(void)

{
  return &DAT_03002220;
}


/* sub_0801BB8C @ 0x0801BB8C */

undefined4 sub_0801BB8C(void)

{
  return 1;
}


/* sub_0801BB94 @ 0x0801BB94 */

undefined4 sub_0801BB94(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0801BBAC @ 0x0801BBAC */

undefined4 * sub_0801BBAC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023BF0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801BBC8 @ 0x0801BBC8 */

void sub_0801BBC8(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x9c;
  return;
}


/* sub_0801BBDA @ 0x0801BBDA */

void sub_0801BBDA(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int aiStack_14 [2];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 4;
    if (*(short *)((int)param_2 + 0x12) == 0x10) {
      sub_08007A26(aiStack_14,(int)param_2);
      sub_0800EAD8(aiStack_14,(int)param_2);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801BC1E @ 0x0801BC1E */

void sub_0801BC1E(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  sub_0800763C(param_2,&DAT_03002224);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return;
}


/* sub_0801BC5C @ 0x0801BC5C */

bool sub_0801BC5C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x18) != &DAT_03002224;
}


/* sub_0801BC6E @ 0x0801BC6E */

undefined4 * sub_0801BC6E(void)

{
  return &DAT_03002228;
}


/* sub_0801BC84 @ 0x0801BC84 */

void sub_0801BC84(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024A3C;
    *(undefined1 *)(piVar1 + 1) = 0;
  }
  sub_08007662(param_2,piVar1);
  return;
}


/* sub_0801BCA4 @ 0x0801BCA4 */

undefined4 sub_0801BCA4(void)

{
  return 1;
}


/* sub_0801BCA8 @ 0x0801BCA8 */

undefined4 * sub_0801BCA8(void)

{
  return &DAT_0300222c;
}


/* sub_0801BCAC @ 0x0801BCAC */

undefined4 sub_0801BCAC(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024A3C;
    *(undefined1 *)(piVar1 + 1) = 0;
  }
  sub_08007662(param_2,piVar1);
  return 0;
}


/* sub_0801BCD8 @ 0x0801BCD8 */

void sub_0801BCD8(undefined4 param_1,int param_2)

{
  sub_0800763C(param_2,&DAT_03002230);
  sub_080076BC(param_2);
  return;
}


/* sub_0801BCEC @ 0x0801BCEC */

undefined4 sub_0801BCEC(void)

{
  return 1;
}


/* sub_0801BCF0 @ 0x0801BCF0 */

undefined4 * sub_0801BCF0(void)

{
  return &DAT_03002234;
}


/* sub_0801BCF6 @ 0x0801BCF6 */

undefined4 sub_0801BCF6(undefined4 param_1,int param_2)

{
  sub_0800763C(param_2,&DAT_03002230);
  return 0;
}


/* sub_0801BD08 @ 0x0801BD08 */

void sub_0801BD08(undefined4 param_1,int param_2)

{
  sub_080076BC(param_2);
  return;
}


/* sub_0801BD12 @ 0x0801BD12 */

undefined4 sub_0801BD12(void)

{
  return 1;
}


/* sub_0801BD16 @ 0x0801BD16 */

undefined4 * sub_0801BD16(void)

{
  return &DAT_03002238;
}


/* sub_0801BD1A @ 0x0801BD1A */

undefined4 sub_0801BD1A(undefined4 param_1,int param_2)

{
  sub_080076BC(param_2);
  return 0;
}


/* sub_0801BD2C @ 0x0801BD2C */

void sub_0801BD2C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 uStack_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  int *piStack_58;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int *piStack_18;
  
  if ((DAT_03001fa8 != 0) && (*(int *)(DAT_03001fa8 + 0x168) != 0)) {
    iStack_1c = param_1;
    piStack_18 = param_2;
    sub_080079B8(&local_2c,DAT_03001fa8);
    sub_080079B8(&local_3c,(int)param_2);
    local_4c = local_3c + local_34 >> 1;
    local_70 = local_38 + local_30 >> 1;
    local_7c = local_28 + local_20 >> 1;
    local_80 = local_2c + local_24 >> 1;
    local_88 = local_80 - local_4c;
    iVar3 = local_7c - local_70;
    iVar1 = local_88;
    if (local_88 < 0) {
      iVar1 = -local_88;
    }
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = -iVar3;
    }
    local_84 = iVar3;
    local_44 = local_4c;
    local_40 = local_70;
    if (iVar2 < iVar1) {
      local_68 = local_30 + 3;
      if (local_88 < 1) {
        *(undefined1 *)(param_2 + 4) = 2;
        local_74 = local_3c + -4;
        local_6c = local_4c;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 3;
        local_74 = local_4c;
        local_6c = local_34 + 3;
      }
    }
    else {
      local_48 = (int *)local_70;
      sub_0800793A(&local_88,(int)param_2);
      local_74 = local_88;
      local_6c = local_80;
      if (iVar3 < 1) {
        *(undefined1 *)(param_2 + 4) = 1;
        local_70 = local_38;
        local_68 = local_84;
      }
      else {
        *(undefined1 *)(param_2 + 4) = 0;
        local_70 = local_38;
        local_68 = local_30 + -6;
      }
    }
    uStack_64 = (undefined1)param_2[4];
    puStack_5c = &gUnknown_086DB2DC;
    uStack_60 = 0x400;
    uStack_78 = 0;
    piStack_58 = param_2;
    local_48 = param_2;
    iVar1 = __call_via_r3();
    if (iVar1 != 0) {
      iVar1 = sub_0802141C(3);
      sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
    }
    iVar1 = sub_0802141C(*(int *)(iStack_1c + 4));
    __call_via_r2(param_2,iVar1 + 6,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801BE78 @ 0x0801BE78 */

void sub_0801BE78(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  return;
}


/* sub_0801BE8A @ 0x0801BE8A */

undefined4 * sub_0801BE8A(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023D48;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801BEB8 @ 0x0801BEB8 */

undefined4 sub_0801BEB8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((DAT_03001fa8 == 0) || (*(int *)(DAT_03001fa8 + 0x168) == 0)) {
    uVar1 = 0;
  }
  else {
    sub_080079B8(&iStack_24,DAT_03001fa8);
    sub_080079B8(&iStack_34,param_2);
    iStack_38 = iStack_30 + iStack_28 >> 1;
    iStack_48 = iStack_34 + iStack_2c >> 1;
    iStack_50 = iStack_34 + -4;
    if ((iStack_50 < iStack_1c) &&
       (((iStack_24 < iStack_2c + 3 && (iStack_30 < iStack_18)) && (iStack_20 < iStack_28 + -6)))) {
      iStack_44 = iStack_20 + iStack_18 >> 1;
      iVar3 = iStack_24 + iStack_1c >> 1;
      iVar2 = iVar3 - iStack_48;
      iStack_4c = iStack_44 - iStack_38;
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      iVar5 = iStack_4c;
      if (iStack_4c < 0) {
        iVar5 = -iStack_4c;
      }
      if (iVar5 < iVar4) {
        iStack_4c = iStack_28 + 3;
        iStack_30 = iStack_38;
        if (iVar2 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 3;
          iStack_50 = iStack_48;
          iStack_48 = iStack_2c + 3;
        }
      }
      else {
        iStack_50 = iVar2;
        iStack_3c = iStack_48;
        iStack_48 = iVar3;
        iStack_40 = iStack_4c;
        sub_0800793A(&iStack_50,param_2);
        if (iStack_40 < 1) {
          *(undefined1 *)(param_2 + 0x10) = 1;
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 0;
          iStack_4c = iStack_28 + -6;
        }
      }
      if (((iStack_50 < iStack_1c) && (iStack_24 < iStack_48)) &&
         ((iStack_30 < iStack_18 && (iStack_20 < iStack_4c)))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* sub_0801BFC6 @ 0x0801BFC6 */

void sub_0801BFC6(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801BEB8(param_1,param_2);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar2 + (int)piVar2));
  }
  return;
}


/* sub_0801BFE6 @ 0x0801BFE6 */

undefined4 sub_0801BFE6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = sub_0801BEB8(param_1,param_2);
  if (*(int *)(param_1 + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,
                            (undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
      uVar2 = 0;
    }
    else {
      piVar3 = (int *)**(int **)(param_1 + 8);
      __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*piVar3 + (int)piVar3));
      iVar1 = **(int **)(param_1 + 8);
      uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,
                            (undefined *)(*(int *)(iVar1 + 4) + iVar1));
    }
  }
  return uVar2;
}


/* sub_0801C044 @ 0x0801C044 */

void sub_0801C044(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = **(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,(undefined *)(*(int *)(iVar1 + 8) + iVar1));
  }
  return;
}


/* sub_0801C05A @ 0x0801C05A */

void sub_0801C05A(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,
                        (undefined *)**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0802410C;
    puVar2[2] = uVar1;
    puVar2[1] = 0;
  }
  return;
}


/* sub_0801C084 @ 0x0801C084 */

undefined4 * sub_0801C084(void)

{
  return &DAT_0300223c;
}


/* sub_0801C088 @ 0x0801C088 */

undefined4 sub_0801C088(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return 0;
}


/* sub_0801C0A0 @ 0x0801C0A0 */

undefined4 sub_0801C0A0(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return 1;
}


/* sub_0801C0D6 @ 0x0801C0D6 */

undefined4 * sub_0801C0D6(void)

{
  return &DAT_03002240;
}


/* sub_0801C0DA @ 0x0801C0DA */

undefined4 sub_0801C0DA(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return 0;
}


/* sub_0801C120 @ 0x0801C120 */

void sub_0801C120(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + -1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x800) >> 0xe;
  return;
}


/* sub_0801C12E @ 0x0801C12E */

undefined4 sub_0801C12E(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (DAT_03001fa8 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800793A(&iStack_4c,DAT_03001fa8);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 2;
      if (-1 < iStack_1c) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar1;
      iVar4 = iStack_24;
    }
    else {
      *(byte *)(param_2 + 0x10) = (byte)((uint)iStack_18 >> 0x1f);
      iVar4 = iStack_20;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(undefined4 **)(param_2 + 0x18) != &DAT_03002244) {
        sub_0800763C(param_2,&DAT_03002244);
      }
      sub_0800E310(param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      piVar5 = (int *)(param_2 + 0x158);
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar4 * 0x100,iStack_40 << 8);
      iStack_4c = *piVar5 - iVar3;
      iStack_48 = *(int *)(param_2 + 0x15c) - iStack_38;
      piVar6 = (int *)(param_2 + 0x15c);
      iStack_3c = iVar3;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar4 = sub_0800E45E(param_2,&iStack_2c);
      if (iVar4 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = *(int *)(param_2 + 0x15c);
        iVar4 = sub_0800E45E(param_2,&iStack_34);
        if (iVar4 == 0) {
          iStack_34 = *piVar5;
          iStack_30 = iStack_28;
          iVar4 = sub_0800E45E(param_2,&iStack_34);
          if (iVar4 != 0) {
            *piVar5 = iStack_34;
            *piVar6 = iStack_30;
          }
        }
        else {
          *piVar5 = iStack_34;
          *piVar6 = iStack_30;
        }
      }
      else {
        *piVar5 = iStack_2c;
        *piVar6 = iStack_28;
      }
      sub_0800E310(param_2,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_0801C2AC @ 0x0801C2AC */

undefined4 * sub_0801C2AC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023F34;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801C2D0 @ 0x0801C2D0 */

bool sub_0801C2D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (DAT_03001fa8 == 0) {
    bVar4 = false;
  }
  else {
    sub_0800793A(&iStack_4c,DAT_03001fa8);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800793A(&iStack_34,(int)param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar3 = 2;
      if (iStack_1c < 1) {
        uVar3 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar3;
      iStack_18 = 0;
      iVar2 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = 0 < iStack_18;
      iStack_1c = 0;
      iVar2 = iStack_20;
    }
    if (iVar2 == 0) {
      bVar4 = false;
    }
    else {
      iVar1 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
      if (iVar1 == 0) {
        __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
      }
      sub_0800E310((int)param_2,1);
      iStack_24 = iStack_1c * 0x100;
      iStack_20 = iStack_18 * 0x100;
      iStack_48 = *(int *)(param_1 + 4) * iStack_20 >> 8;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      iStack_44 = iStack_4c;
      iStack_40 = iStack_48;
      iVar1 = __16__rt_sdiv(iVar2 * 0x100,iStack_4c << 8);
      iStack_38 = __16__rt_sdiv(iVar2 * 0x100,iStack_40 << 8);
      iStack_4c = param_2[0x56] - iVar1;
      iStack_48 = param_2[0x57] - iStack_38;
      iStack_3c = iVar1;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iVar2 = sub_0800E45E((int)param_2,&iStack_2c);
      bVar4 = iVar2 == 0;
      if (!bVar4) {
        param_2[0x56] = iStack_2c;
        param_2[0x57] = iStack_28;
      }
      sub_0800E310((int)param_2,0);
    }
  }
  return bVar4;
}


/* sub_0801C430 @ 0x0801C430 */

undefined4 * sub_0801C430(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023F54;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801C450 @ 0x0801C450 */

void sub_0801C450(undefined4 param_1,int param_2)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_086D5194 + *(int *)(*(int *)(param_2 + 0x180) + 8) * 8),
                param_2,(undefined *)
                        **(undefined4 **)
                          (&gUnknown_086D5194 + *(int *)(*(int *)(param_2 + 0x180) + 8) * 8));
  return;
}


/* sub_0801C454 @ 0x0801C454 */

void sub_0801C454(int param_1,int param_2)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_086D5194 + *(int *)(*(int *)(param_1 + param_2) + 8) * 8)
                ,param_2,(undefined *)
                         **(undefined4 **)
                           (&gUnknown_086D5194 + *(int *)(*(int *)(param_1 + param_2) + 8) * 8));
  return;
}


/* sub_0801C46A @ 0x0801C46A */

void sub_0801C46A(int param_1,int param_2,int param_3)

{
  __call_via_r3();
  return;
}


/* sub_0801C46E @ 0x0801C46E */

void sub_0801C46E(int param_1,int param_2,int param_3)

{
  __call_via_r3();
  return;
}


/* sub_0801C488 @ 0x0801C488 */

undefined4 sub_0801C488(int param_1,int *param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    return 0;
  }
  __call_via_r3();
  return 0;
}


/* sub_0801C4AE @ 0x0801C4AE */

undefined4 * sub_0801C4AE(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x414), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x100;
  uVar1 = sub_080067AC(&DAT_03001120,0x100);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802527C;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 2) = 6;
  param_1[1] = 0;
  sub_0801F394((int *)&DAT_086ff4d4,(int)(param_1 + 5));
  return param_1;
}


/* sub_0801C4B0 @ 0x0801C4B0 */

undefined4 * sub_0801C4B0(undefined4 *param_1)

{
  undefined2 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x414), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08023A1C;
  *(undefined2 *)((int)param_1 + 0xe) = 0x100;
  uVar1 = sub_080067AC(&DAT_03001120,0x100);
  *(undefined2 *)(param_1 + 3) = uVar1;
  *param_1 = &_0802527C;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 2) = 6;
  param_1[1] = 0;
  sub_0801F394((int *)&DAT_086ff4d4,(int)(param_1 + 5));
  return param_1;
}


/* sub_0801C4FA @ 0x0801C4FA */

undefined4 sub_0801C4FA(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x40d82008;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000;
  uVar1 = *(byte *)(param_1 + 0x10) + 1;
  *(char *)(param_1 + 0x10) = (char)uVar1;
  if ((uVar1 & 7) == 0) {
    REG_DMA3SAD = (uVar1 * 0x8000000 >> 0x1e) * 0x100 + param_1 + 0x14;
    REG_DMA3DAD = (uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000;
    Ram040000dc = 0x40;
    DAT_040000de = 0x8400;
  }
  return 0;
}


/* sub_0801C550 @ 0x0801C550 */

undefined4 sub_0801C550(int param_1,int param_2)

{
  if (3 < param_2) {
    *(undefined1 *)(param_1 + 0x10) = 0xff;
    return 2;
  }
  return 0;
}


/* sub_0801C57C @ 0x0801C57C */

undefined4 * sub_0801C57C(void)

{
  return &DAT_03002248;
}


/* sub_0801C580 @ 0x0801C580 */

undefined4 sub_0801C580(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802459C;
    *(undefined1 *)(piVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,piVar1);
  return 0;
}


/* sub_0801C5A2 @ 0x0801C5A2 */

undefined4 * sub_0801C5A2(void)

{
  return &DAT_0300224c;
}


/* sub_0801C5A8 @ 0x0801C5A8 */

undefined4 sub_0801C5A8(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024A14;
    *(undefined1 *)(piVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,piVar1);
  return 0;
}


/* sub_0801C5D8 @ 0x0801C5D8 */

void sub_0801C5D8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_50 [4];
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint uStack_18;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(aiStack_50,DAT_03001fa8);
    sub_08026414(&local_40,aiStack_50);
    sub_0800793A(&iStack_38,param_2);
    sub_08026414(&local_28,&iStack_38);
    local_20 = local_40 - local_28;
    local_1c = local_3c - local_24;
    iVar2 = local_20;
    if (local_20 < 0) {
      iVar2 = -local_20;
    }
    iVar1 = local_1c;
    if (local_1c < 0) {
      iVar1 = -local_1c;
    }
    if (iVar1 < iVar2) {
      uVar3 = 3;
      if (local_20 < 1) {
        uVar3 = 2;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      iVar1 = iVar2;
    }
    else {
      *(bool *)(param_2 + 0x10) = local_1c < 1;
    }
    piVar5 = (int *)(param_1 + 0x10);
    local_28 = local_20 * 0x100;
    local_24 = local_1c * 0x100;
    piVar4 = (int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      *piVar5 = local_28;
      *piVar4 = local_24;
    }
    else {
      uStack_18 = iVar1 << 8;
      local_3c = __16__rt_sdiv(uStack_18,local_20 * 0x10000);
      iVar2 = __16__rt_sdiv(uStack_18,local_24 << 8);
      *piVar5 = local_3c;
      *piVar4 = iVar2;
    }
    iStack_34 = *(int *)(param_1 + 4) * *piVar4 >> 8;
    iStack_38 = *(int *)(param_1 + 4) * *piVar5 >> 8;
    *(int *)(param_1 + 0x18) = iStack_38;
    *(int *)(param_1 + 0x1c) = iStack_34;
    iStack_30 = iStack_38;
    iStack_2c = iStack_34;
    sub_0800763C(param_2,&DAT_03002250);
  }
  return;
}


/* sub_0801C6DE @ 0x0801C6DE */

undefined4 sub_0801C6DE(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_44 [4];
  int iStack_34;
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = DAT_03001fa8;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (DAT_03001fa8 == 0) {
      uVar1 = 1;
    }
    else {
      *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0x158) + *(int *)(param_1 + 0x18);
      *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *(int *)(param_1 + 0x1c);
      sub_0800793A(aiStack_44,iVar2);
      sub_08026414(&iStack_34,aiStack_44);
      sub_0800793A((int *)&puStack_2c,param_2);
      sub_08026414(&iStack_1c,(int *)&puStack_2c);
      iStack_1c = iStack_34 - iStack_1c;
      iStack_30 = iStack_30 - iStack_18;
      iVar2 = iStack_1c * *(int *)(param_1 + 0x10) + iStack_30 * *(int *)(param_1 + 0x14) >> 8;
      if (iVar2 < -8) {
        *(undefined2 *)(param_2 + 0x14) = 3;
        if (*(int *)(param_1 + 8) * *(int *)(param_1 + 8) <
            iStack_1c * iStack_1c + iStack_30 * iStack_30) {
          *(undefined4 *)(param_1 + 0xc) = 1;
          return 1;
        }
      }
      else if (iVar2 < 8) {
        if (*(short *)(param_2 + 0x14) != 2) {
          iStack_34 = CONCAT31(iStack_34._1_3_,*(undefined1 *)(param_2 + 0x10));
          puStack_2c = &gUnknown_086DB2DC;
          iStack_30 = 0x400;
          iStack_28 = param_2;
          iStack_18 = param_2;
          sub_080079B8(aiStack_44,param_2);
          iVar2 = __call_via_r3();
          if (iVar2 != 0) {
            iVar2 = sub_0802141C(3);
            sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
          }
          *(undefined2 *)(param_2 + 0x14) = 2;
        }
      }
      else if (iVar2 < 0x10) {
        *(undefined2 *)(param_2 + 0x14) = 1;
      }
      else {
        *(undefined2 *)(param_2 + 0x14) = 0;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0801C7F2 @ 0x0801C7F2 */

void sub_0801C7F2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023C20;
    puVar1[1] = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


/* sub_0801C82C @ 0x0801C82C */

undefined4 * sub_0801C82C(void)

{
  return &DAT_03002258;
}


/* sub_0801C834 @ 0x0801C834 */

void sub_0801C834(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  if (iVar1 == 0) {
    __call_via_r2(param_2,1,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801C85A @ 0x0801C85A */

undefined4 * sub_0801C85A(void)

{
  return &DAT_0300225c;
}


/* sub_0801C864 @ 0x0801C864 */

void sub_0801C864(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x4c;
  sub_0801FC9C(0x3002c80,&DAT_080e17b4,0x10,0);
  return;
}


/* sub_0801C89C @ 0x0801C89C */

void sub_0801C89C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(byte *)(param_1 + 4) != 0) {
    uVar1 = *(byte *)(param_1 + 4) + 0xff;
    uVar2 = uVar1 & 0xff;
    *(char *)(param_1 + 4) = (char)uVar1;
    if (uVar2 < 0x10) {
      *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_1 + 0xc);
    }
    else if ((int)(uVar2 << 0x1f) < 0) {
      iVar3 = sub_0802141C(0x400);
      *(int *)(param_2 + 0x158) = iVar3 + *(int *)(param_1 + 8) + -0x200;
      iVar3 = sub_0802141C(0x400);
      *(int *)(param_2 + 0x15c) = iVar3 + *(int *)(param_1 + 0xc) + -0x200;
      return;
    }
  }
  return;
}


/* sub_0801C8F0 @ 0x0801C8F0 */

void sub_0801C8F0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_1 + 0xc);
  sub_0801FC4E(0x3002c80,0x80e17b4,0x10,0);
  sub_0801F110((undefined2 *)param_1);
  return;
}


/* sub_0801C922 @ 0x0801C922 */

void sub_0801C922(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    piVar1 = (int *)sub_0801F08C(0x10);
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)&_0802455C;
      *(char *)(piVar1 + 1) = (char)iVar2;
    }
    sub_0800763C(param_2,piVar1);
  }
  return;
}


/* sub_0801C946 @ 0x0801C946 */

undefined4 sub_0801C946(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


/* sub_0801C95E @ 0x0801C95E */

undefined4 * sub_0801C95E(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023C00;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801C988 @ 0x0801C988 */

void sub_0801C988(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_08007974(&local_2c,param_2);
  local_1c = local_2c + local_24 >> 1;
  local_18 = local_28 + local_20 >> 1;
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = sub_080135E0((undefined4 *)0x0,&local_1c,"\x04\x04\b\b",4,0x2000,0x400,0x28);
    sub_080068B8(0x3001120,iVar1);
  }
  local_20 = param_2;
  iVar1 = sub_08006DA6(0x3001120,0,&stack0xffffffb0);
  if (iVar1 != 0) {
    iVar1 = sub_0802141C(3);
    sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x22) * 0xc,0x40,0);
  }
  return;
}


/* sub_0801CA3E @ 0x0801CA3E */

undefined4 sub_0801CA3E(void)

{
  return 1;
}


/* sub_0801CA42 @ 0x0801CA42 */

undefined4 * sub_0801CA42(void)

{
  return &DAT_03002260;
}


/* sub_0801CA60 @ 0x0801CA60 */

void sub_0801CA60(int param_1)

{
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 4) * 0xc,0x40,0);
  return;
}


/* sub_0801CA80 @ 0x0801CA80 */

undefined4 sub_0801CA80(void)

{
  return 1;
}


/* sub_0801CA84 @ 0x0801CA84 */

undefined4 * sub_0801CA84(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08024528;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_0801CA9A @ 0x0801CA9A */

undefined4 sub_0801CA9A(int param_1)

{
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 0xc) * 0xc,0x40,0);
  return 0;
}


/* sub_0801CA9C @ 0x0801CA9C */

undefined4 sub_0801CA9C(int param_1,int *param_2)

{
  sub_0801FC9C(*param_2 + 0x5c4,&gUnknown_080E15B0 + *(int *)(param_1 + 0xc) * 0xc,0x40,0);
  return 0;
}


/* sub_0801CABC @ 0x0801CABC */

void sub_0801CABC(int param_1)

{
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + *(int *)(param_1 + 0xc) * 0xc,0x40,0);
  return;
}


/* sub_0801CABE @ 0x0801CABE */

void sub_0801CABE(int param_1,int *param_2)

{
  sub_0801FC9C(*param_2 + 0x5c4,&gUnknown_080E15B0 + *(int *)(param_1 + 0xc) * 0xc,0x40,0);
  return;
}


/* sub_0801CAEC @ 0x0801CAEC */

void sub_0801CAEC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 2;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x6c;
  return;
}


/* sub_0801CB00 @ 0x0801CB00 */

void sub_0801CB00(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x14) = 2;
  sub_08007688(param_2);
  return;
}


/* sub_0801CB0E @ 0x0801CB0E */

void sub_0801CB0E(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x16c;
  return;
}


/* sub_0801CB10 @ 0x0801CB10 */

void sub_0801CB10(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0x16c;
  return;
}


/* sub_0801CB24 @ 0x0801CB24 */

void sub_0801CB24(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar1 < 8) {
    *(undefined2 *)(param_2 + 0x14) = 0;
    return;
  }
  *(short *)(param_2 + 0x14) = 1 - (short)((int)((uint)uVar1 << 0x1c) >> 0x1f);
  return;
}


/* sub_0801CB42 @ 0x0801CB42 */

void sub_0801CB42(undefined4 *param_1,int *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025208;
    param_1[1] = *param_2 * 0x71d >> 8;
    param_1[2] = param_2[1] * 0x71d >> 8;
  }
  return;
}


/* sub_0801CB44 @ 0x0801CB44 */

void sub_0801CB44(undefined4 *param_1,int *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08025208;
    param_1[1] = *param_2 * 0x71d >> 8;
    param_1[2] = param_2[1] * 0x71d >> 8;
  }
  return;
}


/* sub_0801CB6E @ 0x0801CB6E */

void sub_0801CB6E(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xcc;
  return;
}


/* sub_0801CB80 @ 0x0801CB80 */

void sub_0801CB80(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
    if ((*(short *)((int)param_2 + 0x12) == 0x10) &&
       (iVar2 = sub_08006D70(&DAT_03001120), 0xff < iVar2)) {
      sub_0800791A(&iStack_20,(int)param_2);
      iStack_18 = iStack_20 + *(int *)(&DAT_086ff8a8 + (uint)*(byte *)(param_2 + 4) * 8);
      iStack_14 = iStack_1c + *(int *)(&DAT_086ff8ac + (uint)*(byte *)(param_2 + 4) * 8);
      iVar2 = sub_0801CCC8((undefined4 *)0x0,&iStack_18,(undefined4 *)(param_1 + 4),(int)param_2);
      sub_080068B8(0x3001120,iVar2);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801CC00 @ 0x0801CC00 */

void sub_0801CC00(undefined4 param_1,int param_2)

{
  int *piVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  undefined *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = DAT_03001fa8;
  local_1c = &_08024A64;
  local_18 = (int *)0x0;
  sub_0800DF98((int)&local_1c,param_2);
  sub_0800791A(&local_34,DAT_03001fa8);
  sub_0800791A(&local_2c,param_2);
  local_24[0] = local_34 - local_2c;
  local_24[1] = local_30 - local_28;
  local_24[1 < *(byte *)(param_2 + 0x10)] = 0;
  piVar1 = (int *)sub_0801F08C(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08025208;
    piVar1[1] = local_24[0] * 0x71d >> 8;
    piVar1[2] = local_24[1] * 0x71d >> 8;
  }
  sub_0800763C(param_2,piVar1);
  local_1c = &_08023DB8;
  if (local_18 != (int *)0x0) {
    __call_via_r2(local_18,1,(undefined *)(*(int *)*local_18 + *local_18));
  }
  return;
}


/* sub_0801CC96 @ 0x0801CC96 */

void sub_0801CC96(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x2c) + *param_2));
  return;
}


/* sub_0801CCA8 @ 0x0801CCA8 */

undefined4 * sub_0801CCA8(void)

{
  return &DAT_0300226c;
}


/* sub_0801CCC8 @ 0x0801CCC8 */

undefined4 * sub_0801CCC8(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08013BC0(param_1,0x100,param_4);
    *param_1 = &_08024204;
    uVar2 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar2;
    iVar1 = *param_2;
    iVar3 = param_2[1];
    param_1[0x12] = 0;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar3 << 8;
    param_1[0x13] = 0x800;
    param_1[0x14] = 0x200;
    param_1[6] = &gUnknown_086FFBFC;
    *(undefined1 *)(param_1 + 2) = 0x27;
    param_1[0x11] = param_1[0x11] + -0x200;
    sub_08013BF4((int)param_1);
  }
  return param_1;
}


/* sub_0801CD32 @ 0x0801CD32 */

void sub_0801CD32(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1[0xb] + param_1[0xd] >> 1;
  local_18 = param_1[10] + param_1[0xc] >> 1;
  sub_080068CA(0x3001120,param_1);
  iVar1 = sub_0800EC08((undefined4 *)0x0,&local_18,(undefined4 *)&DAT_086ff8dc);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_0800EC08((undefined4 *)0x0,&local_18,(undefined4 *)&DAT_086ff8e4);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_0800EC08((undefined4 *)0x0,&local_18,(undefined4 *)&DAT_086ff8ec);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_0800EC08((undefined4 *)0x0,&local_18,(undefined4 *)&DAT_086ff8f4);
  sub_080068B8(0x3001120,iVar1);
  iVar1 = sub_08006D70(&DAT_03001120);
  if (0x3ff < iVar1) {
    iVar1 = sub_0800FA1C((undefined4 *)0x0,&local_18,0x28);
    sub_080068B8(0x3001120,iVar1);
  }
  iVar1 = sub_0802141C(2);
  sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar1 + 0x14) * 0xc,0x40,0);
  return;
}


/* sub_0801CDFC @ 0x0801CDFC */

void sub_0801CDFC(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined *local_28;
  int local_24;
  int *local_14;
  
  param_1[8] = param_1[8] + param_1[0x10];
  param_1[9] = param_1[9] + param_1[0x11];
  param_1[0x11] = param_1[0x11] + 0x20;
  iVar1 = param_1[0x12];
  param_1[0x12] = iVar1 + 1;
  uVar2 = (uint)((iVar1 + 1) * 0x10000000) >> 0x1e;
  if (uVar2 == 3) {
    uVar2 = 1;
  }
  param_1[6] = (int)(&gUnknown_086FFBFC + uVar2 * 0xc);
  sub_08013BF4((int)param_1);
  iVar1 = param_1[0x14];
  param_1[0x14] = iVar1 + -0x20;
  iVar1 = param_1[0x13] + iVar1 + -0x20;
  param_1[0x13] = iVar1;
  if (iVar1 < 0) {
    if ((param_2 != 0) && (param_1[7] != 0)) {
      local_24 = param_1[7];
      local_30 = (undefined1)param_1[5];
      local_28 = &gUnknown_086DB2D4;
      local_2c = 0x400;
      local_40 = param_1[10];
      iStack_3c = param_1[0xb];
      iStack_38 = param_1[0xc];
      iStack_34 = param_1[0xd];
      local_44[0] = 2;
      local_14 = param_1;
      sub_08006DA6(0x3001120,0,local_44);
    }
    sub_0801CD32(param_1);
  }
  return;
}


/* sub_0801CE94 @ 0x0801CE94 */

void sub_0801CE94(int *param_1,int param_2,int param_3)

{
  sub_08013D68(param_1,param_2,param_3);
  return;
}


/* sub_0801CEB4 @ 0x0801CEB4 */

void sub_0801CEB4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x28;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x48) + 0xcc;
  return;
}


/* sub_0801CEC6 @ 0x0801CEC6 */

void sub_0801CEC6(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int aiStack_18 [2];
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x20) {
    *(ushort *)(param_2 + 5) = uVar1 >> 3;
    if ((*(short *)((int)param_2 + 0x12) == 8) &&
       (iVar2 = sub_08006D70(&DAT_03001120), 0x40 < iVar2)) {
      sub_08007A26(aiStack_18,(int)param_2);
      iVar2 = sub_0801A0B0((undefined4 *)0x0,aiStack_18,(uint)*(byte *)(param_2 + 4),(int)param_2);
      sub_080068B8(0x3001120,iVar2);
    }
  }
  else {
    __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  }
  return;
}


/* sub_0801CF22 @ 0x0801CF22 */

void sub_0801CF22(undefined4 param_1,int param_2)

{
  undefined *local_18;
  int *local_14;
  undefined4 local_10;
  
  local_14 = (int *)0x0;
  local_10 = DAT_03001fa8;
  local_18 = &_08024A64;
  sub_0800DF98((int)&local_18,param_2);
  sub_0800763C(param_2,&DAT_03002270);
  local_18 = &_08023DB8;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,(undefined *)(*(int *)*local_14 + *local_14));
  }
  return;
}


/* sub_0801CF60 @ 0x0801CF60 */

bool sub_0801CF60(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x18) != &DAT_03002270;
}


/* sub_0801CF72 @ 0x0801CF72 */

undefined4 * sub_0801CF72(void)

{
  return &DAT_03002274;
}


/* sub_0801CF8C @ 0x0801CF8C */

void sub_0801CF8C(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  *(ushort *)(param_2 + 0x14) = (ushort)(sVar1 * 0x1000) >> 0xe;
  return;
}


/* sub_0801CF9A @ 0x0801CF9A */

void sub_0801CF9A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_50 [4];
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint uStack_18;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(aiStack_50,DAT_03001fa8);
    sub_08026414(&local_40,aiStack_50);
    sub_0800793A(&iStack_38,param_2);
    sub_08026414(&local_28,&iStack_38);
    local_20 = local_40 - local_28;
    local_1c = local_3c - local_24;
    iVar2 = local_20;
    if (local_20 < 0) {
      iVar2 = -local_20;
    }
    iVar1 = local_1c;
    if (local_1c < 0) {
      iVar1 = -local_1c;
    }
    if (iVar1 < iVar2) {
      uVar3 = 3;
      if (local_20 < 1) {
        uVar3 = 2;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      iVar1 = iVar2;
    }
    else {
      *(bool *)(param_2 + 0x10) = local_1c < 1;
    }
    piVar5 = (int *)(param_1 + 0x14);
    local_28 = local_20 * 0x100;
    local_24 = local_1c * 0x100;
    piVar4 = (int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      *piVar5 = local_28;
      *piVar4 = local_24;
    }
    else {
      uStack_18 = iVar1 << 8;
      local_3c = __16__rt_sdiv(uStack_18,local_20 * 0x10000);
      iVar2 = __16__rt_sdiv(uStack_18,local_24 << 8);
      *piVar5 = local_3c;
      *piVar4 = iVar2;
    }
    iStack_34 = *(int *)(param_1 + 8) * *piVar4 >> 8;
    iStack_38 = *(int *)(param_1 + 8) * *piVar5 >> 8;
    *(int *)(param_1 + 0x1c) = iStack_38;
    *(int *)(param_1 + 0x20) = iStack_34;
    iStack_30 = iStack_38;
    iStack_2c = iStack_34;
    sub_0800763C(param_2,&DAT_03002278);
    sub_0801FC9C(0x3002c80,&DAT_080e17b4,0x40,0);
  }
  return;
}


/* sub_0801D0BA @ 0x0801D0BA */

undefined4 sub_0801D0BA(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined *puStack_5c;
  int iStack_58;
  int iStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  int *piStack_34;
  int aiStack_30 [4];
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  iVar3 = DAT_03001fa8;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (DAT_03001fa8 == 0) {
      uVar1 = 1;
    }
    else {
      sub_0800793A(aiStack_30,param_2);
      piStack_1c = (int *)(param_1 + 0x1c);
      piStack_18 = (int *)(param_2 + 0x158);
      piStack_20 = (int *)(param_1 + 0x20);
      *piStack_18 = *piStack_18 + *(int *)(param_1 + 0x1c);
      *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *piStack_20;
      piStack_34 = aiStack_30;
      sub_0800793A(aiStack_44,param_2);
      sub_0800E41C(param_2,piStack_34,1);
      iVar2 = sub_0800E438(param_2,aiStack_44);
      if (iVar2 == 0) {
        *piStack_18 = *piStack_18 - *piStack_1c;
        piStack_18[1] = piStack_18[1] - *piStack_20;
        sub_0800E41C(param_2,piStack_34,0);
        uVar1 = 1;
      }
      else {
        sub_0800E41C(param_2,aiStack_44,0);
        sub_0800793A(&iStack_74,iVar3);
        sub_08026414(&iStack_64,&iStack_74);
        sub_0800793A((int *)&puStack_5c,param_2);
        sub_08026414(&iStack_4c,(int *)&puStack_5c);
        iStack_4c = iStack_64 - iStack_4c;
        iStack_60 = iStack_60 - iStack_48;
        if ((iStack_4c * *(int *)(param_1 + 0x14) + iStack_60 * *(int *)(param_1 + 0x18) >> 8 < 0)
           && (*(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc) <
               iStack_4c * iStack_4c + iStack_60 * iStack_60)) {
          uVar1 = 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
        }
        else {
          if (*(int *)(param_1 + 4) == 0) {
            iStack_64 = CONCAT31(iStack_64._1_3_,*(undefined1 *)(param_2 + 0x10));
            puStack_5c = &gUnknown_086DB2DC;
            iStack_60 = 0x400;
            iStack_58 = param_2;
            iStack_48 = param_2;
            sub_080079B8(&iStack_74,param_2);
            iStack_70 = iStack_70 + iStack_68 >> 1;
            iVar3 = __call_via_r3();
            if (iVar3 != 0) {
              *(undefined4 *)(param_1 + 4) = 1;
              iVar3 = sub_0802141C(3);
              sub_0801FC9C(0x3002c80,&gUnknown_080E15B0 + (iVar3 + 0x22) * 0xc,0x40,0);
            }
          }
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


