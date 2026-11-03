/* Ghidra reference decompilation of code_08026044 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08026044 @ 0x08026044 */

void sub_08026044(char *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + '\x01';
  if (cVar1 == '\0') {
    sVar2 = sub_080067AC(&DAT_03001120,param_3);
    *(short *)(param_1 + 2) = sVar2;
    REG_DMA3SAD = param_2;
    REG_DMA3DAD = sVar2 * 0x20 + 0x6010000;
    Ram040000dc = (short)(param_3 >> 2);
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_0802608C @ 0x0802608C */

void sub_0802608C(void)

{
  return;
}


/* sub_0802608E @ 0x0802608E */

undefined4 sub_0802608E(undefined4 param_1)

{
  return param_1;
}


/* sub_08026090 @ 0x08026090 */

void sub_08026090(void)

{
  return;
}


/* sub_08026092 @ 0x08026092 */

undefined4 sub_08026092(undefined4 param_1)

{
  return param_1;
}


/* sub_08026094 @ 0x08026094 */

void sub_08026094(void)

{
  return;
}


/* sub_08026096 @ 0x08026096 */

undefined4 sub_08026096(undefined4 param_1)

{
  return param_1;
}


/* sub_08026098 @ 0x08026098 */

void sub_08026098(void)

{
  return;
}


/* sub_0802609A @ 0x0802609A */

undefined4 sub_0802609A(undefined4 param_1)

{
  return param_1;
}


/* sub_0802609C @ 0x0802609C */

void sub_0802609C(void)

{
  return;
}


/* sub_0802609E @ 0x0802609E */

undefined4 sub_0802609E(undefined4 param_1)

{
  return param_1;
}


/* sub_080260A0 @ 0x080260A0 */

void sub_080260A0(void)

{
  return;
}


/* sub_080260A2 @ 0x080260A2 */

undefined4 sub_080260A2(undefined4 param_1)

{
  return param_1;
}


/* sub_080260A4 @ 0x080260A4 */

void sub_080260A4(void)

{
  return;
}


/* sub_080260A6 @ 0x080260A6 */

undefined4 sub_080260A6(undefined4 param_1)

{
  return param_1;
}


/* sub_080260A8 @ 0x080260A8 */

void sub_080260A8(void)

{
  return;
}


/* sub_080260AA @ 0x080260AA */

void sub_080260AA(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_080260AC @ 0x080260AC */

void sub_080260AC(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,(undefined *)(*(int *)(*param_2 + 0x28) + *param_2));
  return;
}


/* sub_080260BE @ 0x080260BE */

undefined4 sub_080260BE(undefined4 param_1)

{
  return param_1;
}


/* sub_080260C0 @ 0x080260C0 */

void sub_080260C0(void)

{
  return;
}


/* sub_080260C2 @ 0x080260C2 */

void sub_080260C2(undefined4 param_1,int param_2)

{
  sub_0800E3EE(param_2);
  return;
}


/* sub_080260C4 @ 0x080260C4 */

void sub_080260C4(undefined4 param_1,int param_2)

{
  sub_0800E3EE(param_2);
  return;
}


/* sub_080260CE @ 0x080260CE */

undefined4 sub_080260CE(undefined4 param_1)

{
  return param_1;
}


/* sub_080260D0 @ 0x080260D0 */

void sub_080260D0(void)

{
  return;
}


/* sub_080260D2 @ 0x080260D2 */

void sub_080260D2(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802459C;
    *(undefined1 *)(piVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,piVar1);
  return;
}


/* sub_080260D4 @ 0x080260D4 */

void sub_080260D4(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_0802459C;
    *(undefined1 *)(piVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,piVar1);
  return;
}


/* sub_080260F8 @ 0x080260F8 */

void sub_080260F8(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_0801F08C(8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&_08024A14;
    *(undefined1 *)(piVar1 + 1) = 0xc;
  }
  sub_08007662(param_2,piVar1);
  return;
}


/* sub_0802611C @ 0x0802611C */

undefined4 sub_0802611C(void)

{
  return 0;
}


/* sub_08026120 @ 0x08026120 */

undefined4 sub_08026120(void)

{
  return 1;
}


/* sub_08026124 @ 0x08026124 */

undefined4 sub_08026124(void)

{
  return 0;
}


/* sub_08026128 @ 0x08026128 */

undefined4 sub_08026128(void)

{
  return 0;
}


/* sub_0802612C @ 0x0802612C */

void sub_0802612C(void)

{
  return;
}


/* sub_0802612E @ 0x0802612E */

void sub_0802612E(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_08026130 @ 0x08026130 */

void sub_08026130(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_08026144 @ 0x08026144 */

void sub_08026144(void)

{
  return;
}


/* sub_08026146 @ 0x08026146 */

void sub_08026146(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026148 @ 0x08026148 */

void sub_08026148(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026150 @ 0x08026150 */

void sub_08026150(void)

{
  return;
}


/* sub_08026152 @ 0x08026152 */

undefined4 sub_08026152(undefined4 param_1)

{
  return param_1;
}


/* sub_08026154 @ 0x08026154 */

void sub_08026154(void)

{
  return;
}


/* sub_08026156 @ 0x08026156 */

undefined4 sub_08026156(undefined4 param_1)

{
  return param_1;
}


/* sub_08026158 @ 0x08026158 */

void sub_08026158(void)

{
  return;
}


/* sub_0802615A @ 0x0802615A */

undefined4 sub_0802615A(undefined4 param_1)

{
  return param_1;
}


/* sub_0802615C @ 0x0802615C */

void sub_0802615C(void)

{
  return;
}


/* sub_0802615E @ 0x0802615E */

void sub_0802615E(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026160 @ 0x08026160 */

void sub_08026160(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026168 @ 0x08026168 */

void sub_08026168(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026170 @ 0x08026170 */

void sub_08026170(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026178 @ 0x08026178 */

void sub_08026178(void)

{
  return;
}


/* sub_0802617A @ 0x0802617A */

void sub_0802617A(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_0802617C @ 0x0802617C */

void sub_0802617C(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026184 @ 0x08026184 */

void sub_08026184(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_0802618C @ 0x0802618C */

void sub_0802618C(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08023D58;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080261B0 @ 0x080261B0 */

void sub_080261B0(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261B8 @ 0x080261B8 */

void sub_080261B8(void)

{
  return;
}


/* sub_080261BA @ 0x080261BA */

void sub_080261BA(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261BC @ 0x080261BC */

void sub_080261BC(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261C4 @ 0x080261C4 */

void sub_080261C4(void)

{
  return;
}


/* sub_080261C6 @ 0x080261C6 */

undefined4 sub_080261C6(undefined4 param_1)

{
  return param_1;
}


/* sub_080261C8 @ 0x080261C8 */

void sub_080261C8(void)

{
  return;
}


/* sub_080261CA @ 0x080261CA */

void sub_080261CA(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_080261CC @ 0x080261CC */

void sub_080261CC(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_080261E0 @ 0x080261E0 */

void sub_080261E0(void)

{
  return;
}


/* sub_080261E2 @ 0x080261E2 */

void sub_080261E2(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261E4 @ 0x080261E4 */

void sub_080261E4(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261EC @ 0x080261EC */

void sub_080261EC(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261F4 @ 0x080261F4 */

void sub_080261F4(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080261FC @ 0x080261FC */

void sub_080261FC(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026204 @ 0x08026204 */

void sub_08026204(void)

{
  return;
}


/* sub_08026206 @ 0x08026206 */

void sub_08026206(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026208 @ 0x08026208 */

void sub_08026208(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026210 @ 0x08026210 */

void sub_08026210(void)

{
  return;
}


/* sub_08026212 @ 0x08026212 */

undefined4 sub_08026212(undefined4 param_1)

{
  return param_1;
}


/* sub_08026214 @ 0x08026214 */

void sub_08026214(void)

{
  return;
}


/* sub_08026216 @ 0x08026216 */

void sub_08026216(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802410C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026218 @ 0x08026218 */

void sub_08026218(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802410C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802623C @ 0x0802623C */

void sub_0802623C(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026244 @ 0x08026244 */

void sub_08026244(void)

{
  return;
}


/* sub_08026246 @ 0x08026246 */

void sub_08026246(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802413C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    iVar1 = *(int *)param_1[3];
    __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026248 @ 0x08026248 */

void sub_08026248(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802413C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    iVar1 = *(int *)param_1[3];
    __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026278 @ 0x08026278 */

void sub_08026278(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026280 @ 0x08026280 */

void sub_08026280(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026288 @ 0x08026288 */

void sub_08026288(void)

{
  return;
}


/* sub_0802628A @ 0x0802628A */

undefined4 sub_0802628A(undefined4 param_1)

{
  return param_1;
}


/* sub_0802628C @ 0x0802628C */

void sub_0802628C(void)

{
  return;
}


/* sub_0802628E @ 0x0802628E */

undefined4 sub_0802628E(undefined4 param_1)

{
  return param_1;
}


/* sub_08026290 @ 0x08026290 */

void sub_08026290(void)

{
  return;
}


/* sub_08026292 @ 0x08026292 */

void sub_08026292(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_080247EC;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026294 @ 0x08026294 */

void sub_08026294(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_080247EC;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080262CC @ 0x080262CC */

void sub_080262CC(void)

{
  return;
}


/* sub_080262CE @ 0x080262CE */

void sub_080262CE(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262D0 @ 0x080262D0 */

void sub_080262D0(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262D8 @ 0x080262D8 */

void sub_080262D8(void)

{
  return;
}


/* sub_080262DA @ 0x080262DA */

undefined4 sub_080262DA(undefined4 param_1)

{
  return param_1;
}


/* sub_080262DC @ 0x080262DC */

void sub_080262DC(void)

{
  return;
}


/* sub_080262DE @ 0x080262DE */

void sub_080262DE(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262E0 @ 0x080262E0 */

void sub_080262E0(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262E8 @ 0x080262E8 */

void sub_080262E8(void)

{
  return;
}


/* sub_080262EA @ 0x080262EA */

undefined4 sub_080262EA(undefined4 param_1)

{
  return param_1;
}


/* sub_080262EC @ 0x080262EC */

void sub_080262EC(void)

{
  return;
}


/* sub_080262EE @ 0x080262EE */

void sub_080262EE(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262F0 @ 0x080262F0 */

void sub_080262F0(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080262F8 @ 0x080262F8 */

void sub_080262F8(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08024B6C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802631C @ 0x0802631C */

void sub_0802631C(void)

{
  return;
}


/* sub_0802631E @ 0x0802631E */

void sub_0802631E(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026320 @ 0x08026320 */

void sub_08026320(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026328 @ 0x08026328 */

void sub_08026328(void)

{
  return;
}


/* sub_0802632A @ 0x0802632A */

void sub_0802632A(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08025014;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    iVar1 = *(int *)param_1[3];
    __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802632C @ 0x0802632C */

void sub_0802632C(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08025014;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    iVar1 = *(int *)param_1[3];
    __call_via_r1((int *)param_1[3],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802635C @ 0x0802635C */

void sub_0802635C(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_08025024;
    if (0 < (int)param_1[1]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 2];
        __call_via_r1((int *)param_1[iVar2 + 2],(undefined *)(*(int *)(iVar1 + 0xc) + iVar1));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026394 @ 0x08026394 */

void sub_08026394(void)

{
  return;
}


/* sub_08026396 @ 0x08026396 */

void sub_08026396(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_08026398 @ 0x08026398 */

void sub_08026398(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080263A0 @ 0x080263A0 */

void sub_080263A0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_080263B4 @ 0x080263B4 */

undefined4 sub_080263B4(void)

{
  return 0;
}


/* sub_080263B8 @ 0x080263B8 */

void sub_080263B8(void)

{
  return;
}


/* sub_080263BA @ 0x080263BA */

undefined4 sub_080263BA(undefined4 param_1)

{
  return param_1;
}


/* sub_080263BC @ 0x080263BC */

void sub_080263BC(void)

{
  return;
}


/* sub_080263BE @ 0x080263BE */

void sub_080263BE(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_080263C0 @ 0x080263C0 */

void sub_080263C0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,(undefined *)(*(int *)*param_1 + *param_1));
  }
  return;
}


/* sub_080263D4 @ 0x080263D4 */

void sub_080263D4(void)

{
  return;
}


/* sub_080263D6 @ 0x080263D6 */

undefined4 sub_080263D6(undefined4 param_1)

{
  return param_1;
}


/* sub_080263D8 @ 0x080263D8 */

void sub_080263D8(void)

{
  return;
}


/* sub_080263DA @ 0x080263DA */

undefined4 sub_080263DA(undefined4 param_1)

{
  return param_1;
}


/* sub_080263DC @ 0x080263DC */

void sub_080263DC(void)

{
  return;
}


/* sub_080263DE @ 0x080263DE */

undefined4 sub_080263DE(undefined4 param_1)

{
  return param_1;
}


/* sub_080263E0 @ 0x080263E0 */

void sub_080263E0(void)

{
  return;
}


/* sub_080263E2 @ 0x080263E2 */

void sub_080263E2(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080263E4 @ 0x080263E4 */

void sub_080263E4(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080263EC @ 0x080263EC */

void sub_080263EC(undefined2 *param_1)

{
  sub_0801F110(param_1);
  return;
}


/* sub_080263F4 @ 0x080263F4 */

void sub_080263F4(void)

{
  return;
}


/* sub_080263F6 @ 0x080263F6 */

void sub_080263F6(int param_1)

{
  sub_08003D58(0x3000e90,(uint)DAT_03000e90,*(int *)(param_1 + 8));
  return;
}


/* sub_080263F8 @ 0x080263F8 */

void sub_080263F8(int param_1)

{
  sub_08003D58(0x3000e90,(uint)DAT_03000e90,*(int *)(param_1 + 8));
  return;
}


/* sub_08026410 @ 0x08026410 */

undefined4 sub_08026410(void)

{
  return 0;
}


/* sub_08026414 @ 0x08026414 */

void sub_08026414(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  param_1[1] = param_2[1] + param_2[3] >> 1;
  *param_1 = iVar1 + iVar2 >> 1;
  return;
}


/* sub_08026440 @ 0x08026440 */

void sub_08026440(int param_1)

{
  sub_0800BDCC((uint)(byte)(&DAT_081d967e)[(uint)*(byte *)(param_1 + 8) * 0x14]);
  return;
}


/* sub_0802645C @ 0x0802645C */

void sub_0802645C(int param_1)

{
  sub_08009324((uint)(byte)(&DAT_081d967d)[(uint)*(byte *)(param_1 + 8) * 0x14]);
  return;
}


/* sub_08026478 @ 0x08026478 */

undefined4 sub_08026478(void)

{
  return 0;
}


/* sub_0802647C @ 0x0802647C */

undefined4 sub_0802647C(void)

{
  return 0;
}


/* sub_08026480 @ 0x08026480 */

undefined4 sub_08026480(void)

{
  return 1;
}


/* sub_08026484 @ 0x08026484 */

undefined4 sub_08026484(void)

{
  return 1;
}


/* sub_08026488 @ 0x08026488 */

undefined4 sub_08026488(void)

{
  return 0;
}


/* sub_0802648C @ 0x0802648C */

undefined4 sub_0802648C(void)

{
  return 0;
}


/* sub_08026490 @ 0x08026490 */

undefined4 sub_08026490(void)

{
  return 1;
}


/* sub_08026494 @ 0x08026494 */

undefined4 sub_08026494(void)

{
  return 0;
}


/* sub_08026498 @ 0x08026498 */

undefined4 sub_08026498(void)

{
  return 1;
}


/* sub_0802649C @ 0x0802649C */

undefined4 sub_0802649C(void)

{
  return 0;
}


/* sub_080264A0 @ 0x080264A0 */

undefined4 sub_080264A0(void)

{
  return 1;
}


/* sub_080264A4 @ 0x080264A4 */

undefined4 sub_080264A4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* sub_080264A8 @ 0x080264A8 */

undefined4 sub_080264A8(void)

{
  return 1;
}


/* sub_080264AC @ 0x080264AC */

undefined4 sub_080264AC(void)

{
  return 0;
}


/* sub_080264B0 @ 0x080264B0 */

undefined4 sub_080264B0(void)

{
  return 1;
}


/* sub_080264B4 @ 0x080264B4 */

undefined4 sub_080264B4(void)

{
  return 1;
}


/* sub_080264B8 @ 0x080264B8 */

undefined4 sub_080264B8(void)

{
  return 0;
}


/* sub_080264BC @ 0x080264BC */

undefined4 sub_080264BC(void)

{
  return 1;
}


/* sub_080264C0 @ 0x080264C0 */

void sub_080264C0(void)

{
  return;
}


/* sub_080264C2 @ 0x080264C2 */

undefined4 sub_080264C2(undefined4 param_1)

{
  return param_1;
}


/* sub_080264C4 @ 0x080264C4 */

void sub_080264C4(void)

{
  return;
}


/* sub_080264C6 @ 0x080264C6 */

void sub_080264C6(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 4) + *param_1));
  return;
}


/* sub_080264C8 @ 0x080264C8 */

void sub_080264C8(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 4) + *param_1));
  return;
}


/* sub_080264D6 @ 0x080264D6 */

undefined4 sub_080264D6(int param_1)

{
  return 1;
}


/* sub_080264D8 @ 0x080264D8 */

undefined4 sub_080264D8(void)

{
  return 1;
}


/* sub_080264DC @ 0x080264DC */

undefined4 sub_080264DC(void)

{
  return 0;
}


/* sub_080264E0 @ 0x080264E0 */

void sub_080264E0(void)

{
  return;
}


/* sub_080264E2 @ 0x080264E2 */

void sub_080264E2(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x2c) + *param_1));
  return;
}


/* sub_080264E4 @ 0x080264E4 */

void sub_080264E4(int *param_1)

{
  __call_via_r1(param_1,(undefined *)(*(int *)(*param_1 + 0x2c) + *param_1));
  return;
}


/* sub_080264F2 @ 0x080264F2 */

undefined4 sub_080264F2(undefined4 param_1)

{
  return param_1;
}


/* sub_080264F4 @ 0x080264F4 */

void sub_080264F4(void)

{
  return;
}


/* sub_080264F6 @ 0x080264F6 */

undefined4 sub_080264F6(int param_1)

{
  return 0;
}


/* sub_080264F8 @ 0x080264F8 */

undefined4 sub_080264F8(void)

{
  return 0;
}


/* sub_080264FC @ 0x080264FC */

void sub_080264FC(void)

{
  return;
}


/* sub_080264FE @ 0x080264FE */

undefined4 sub_080264FE(undefined4 param_1)

{
  return param_1;
}


/* sub_08026500 @ 0x08026500 */

void sub_08026500(void)

{
  return;
}


/* sub_08026502 @ 0x08026502 */

undefined4 sub_08026502(undefined4 param_1)

{
  return param_1;
}


/* sub_08026504 @ 0x08026504 */

void sub_08026504(void)

{
  return;
}


/* sub_08026506 @ 0x08026506 */

undefined4 sub_08026506(undefined4 param_1)

{
  return param_1;
}


/* sub_08026508 @ 0x08026508 */

void sub_08026508(void)

{
  return;
}


/* sub_0802650A @ 0x0802650A */

undefined4 sub_0802650A(undefined4 param_1)

{
  return param_1;
}


/* sub_0802650C @ 0x0802650C */

void sub_0802650C(void)

{
  return;
}


/* sub_0802650E @ 0x0802650E */

undefined4 sub_0802650E(undefined4 param_1)

{
  return param_1;
}


/* sub_08026510 @ 0x08026510 */

void sub_08026510(void)

{
  return;
}


/* sub_08026512 @ 0x08026512 */

void sub_08026512(int *param_1,undefined4 param_2)

{
  __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  return;
}


/* sub_08026514 @ 0x08026514 */

void sub_08026514(int *param_1,undefined4 param_2)

{
  __call_via_r2(param_1,param_2,(undefined *)(*(int *)(*param_1 + 0x1c) + *param_1));
  return;
}


/* sub_08026522 @ 0x08026522 */

undefined4 sub_08026522(undefined4 param_1)

{
  return param_1;
}


/* sub_08026524 @ 0x08026524 */

void sub_08026524(void)

{
  return;
}


/* sub_08026526 @ 0x08026526 */

void sub_08026526(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = (iVar1 + -1) - param_2;
  if (iVar1 != 0) {
    REG_DMA3SAD = param_1 + param_2 + 2;
    REG_DMA3DAD = param_1 + param_2 + 1;
    Ram040000dc = (short)iVar1;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08026528 @ 0x08026528 */

void sub_08026528(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = (iVar1 + -1) - param_2;
  if (iVar1 != 0) {
    REG_DMA3SAD = param_1 + param_2 + 2;
    REG_DMA3DAD = param_1 + param_2 + 1;
    Ram040000dc = (short)iVar1;
    DAT_040000de = 0x8400;
  }
  return;
}


/* sub_08026554 @ 0x08026554 */

void sub_08026554(void)

{
  return;
}


/* sub_08026556 @ 0x08026556 */

undefined4 sub_08026556(undefined4 param_1)

{
  return param_1;
}


/* sub_08026558 @ 0x08026558 */

void sub_08026558(void)

{
  return;
}


/* sub_0802655A @ 0x0802655A */

undefined4 sub_0802655A(int param_1)

{
  return 0;
}


/* sub_0802655C @ 0x0802655C */

undefined4 sub_0802655C(void)

{
  return 0;
}


/* sub_08026560 @ 0x08026560 */

undefined4 sub_08026560(void)

{
  return 1;
}


/* sub_08026564 @ 0x08026564 */

undefined4 sub_08026564(void)

{
  return 1;
}


/* sub_08026568 @ 0x08026568 */

undefined4 sub_08026568(void)

{
  return 0;
}


/* sub_0802656C @ 0x0802656C */

undefined4 sub_0802656C(void)

{
  return 1;
}


/* sub_08026570 @ 0x08026570 */

undefined4 sub_08026570(void)

{
  return 1;
}


/* sub_08026574 @ 0x08026574 */

void sub_08026574(void)

{
  return;
}


/* sub_08026576 @ 0x08026576 */

undefined4 sub_08026576(undefined4 param_1)

{
  return param_1;
}


/* sub_08026578 @ 0x08026578 */

void sub_08026578(void)

{
  return;
}


/* sub_0802657A @ 0x0802657A */

undefined4 sub_0802657A(int param_1)

{
  return 1;
}


/* sub_0802657C @ 0x0802657C */

undefined4 sub_0802657C(void)

{
  return 1;
}


/* sub_08026580 @ 0x08026580 */

undefined4 sub_08026580(void)

{
  return 1;
}


/* sub_08026584 @ 0x08026584 */

undefined4 sub_08026584(void)

{
  return 1;
}


/* sub_08026588 @ 0x08026588 */

undefined4 sub_08026588(void)

{
  return 1;
}


/* sub_0802658C @ 0x0802658C */

void sub_0802658C(void)

{
  return;
}


/* sub_0802658E @ 0x0802658E */

undefined4 sub_0802658E(int param_1)

{
  return 0;
}


/* sub_08026590 @ 0x08026590 */

undefined4 sub_08026590(void)

{
  return 0;
}


/* sub_08026594 @ 0x08026594 */

undefined4 sub_08026594(void)

{
  return 1;
}


/* sub_08026598 @ 0x08026598 */

void sub_08026598(void)

{
  return;
}


/* sub_0802659A @ 0x0802659A */

undefined4 sub_0802659A(int param_1)

{
  return 1;
}


/* sub_0802659C @ 0x0802659C */

undefined4 sub_0802659C(void)

{
  return 1;
}


/* sub_080265A0 @ 0x080265A0 */

void sub_080265A0(void)

{
  return;
}


/* sub_080265A2 @ 0x080265A2 */

undefined4 sub_080265A2(undefined4 param_1)

{
  return param_1;
}


/* sub_080265A4 @ 0x080265A4 */

void sub_080265A4(void)

{
  return;
}


/* sub_080265A6 @ 0x080265A6 */

undefined4 sub_080265A6(undefined4 param_1)

{
  return param_1;
}


/* sub_080265A8 @ 0x080265A8 */

void sub_080265A8(void)

{
  return;
}


/* sub_080265AA @ 0x080265AA */

void sub_080265AA(short *param_1,int param_2)

{
  if ((int)param_1[1] < *param_1 + param_2) {
    *param_1 = param_1[1];
    return;
  }
  *param_1 = (short)(*param_1 + param_2);
  return;
}


/* sub_080265AC @ 0x080265AC */

void sub_080265AC(short *param_1,int param_2)

{
  if ((int)param_1[1] < *param_1 + param_2) {
    *param_1 = param_1[1];
    return;
  }
  *param_1 = (short)(*param_1 + param_2);
  return;
}


/* sub_080265C2 @ 0x080265C2 */

undefined4 * sub_080265C2(undefined4 *param_1,undefined *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = sub_0802829C(param_2,(undefined *)0x43800000,param_3,param_4);
  uVar2 = sub_08028230(uVar1);
  *param_1 = uVar2;
  return param_1;
}


/* sub_080265C4 @ 0x080265C4 */

undefined4 * sub_080265C4(undefined4 *param_1,undefined *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = sub_0802829C(param_2,(undefined *)0x43800000,param_3,param_4);
  uVar2 = sub_08028230(uVar1);
  *param_1 = uVar2;
  return param_1;
}


/* sub_080265DC @ 0x080265DC */

void sub_080265DC(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


/* sub_080265E6 @ 0x080265E6 */

void sub_080265E6(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023BDC;
  }
  return;
}


/* sub_080265E8 @ 0x080265E8 */

void sub_080265E8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08023BDC;
  }
  return;
}


/* sub_08026604 @ 0x08026604 */

void sub_08026604(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080247D8;
  }
  return;
}


/* sub_08026620 @ 0x08026620 */

void sub_08026620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &_08024A8C;
    uVar1 = param_2[1];
    param_1[4] = *param_2;
    param_1[5] = uVar1;
  }
  return;
}


/* sub_0802664C @ 0x0802664C */

undefined4 * sub_0802664C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x40c), param_1 != (undefined4 *)0x0)) {
    sub_0800DA68(param_1);
    *param_1 = &_08024F94;
    param_1[0x101] = 0;
    param_1[0x102] = param_2;
  }
  return param_1;
}


/* sub_08026688 @ 0x08026688 */

void sub_08026688(int param_1)

{
  if (param_1 == 0) {
    sub_0801F08C(8);
  }
  return;
}


/* sub_08026696 @ 0x08026696 */

undefined1 * sub_08026696(undefined1 *param_1)

{
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)sub_0801F08C(0x164), param_1 == (undefined1 *)0x0)) {
    return (undefined1 *)0x0;
  }
  sub_08003C24(param_1);
  return param_1;
}


/* sub_08026698 @ 0x08026698 */

undefined1 * sub_08026698(undefined1 *param_1)

{
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)sub_0801F08C(0x164), param_1 == (undefined1 *)0x0)) {
    return (undefined1 *)0x0;
  }
  sub_08003C24(param_1);
  return param_1;
}


/* sub_080266B8 @ 0x080266B8 */

void sub_080266B8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080266CC @ 0x080266CC */

void sub_080266CC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080266E0 @ 0x080266E0 */

void sub_080266E0(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 2),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026704 @ 0x08026704 */

void sub_08026704(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026718 @ 0x08026718 */

void sub_08026718(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802673C @ 0x0802673C */

void sub_0802673C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026750 @ 0x08026750 */

void sub_08026750(undefined4 *param_1)

{
  *param_1 = &_08023858;
  return;
}


/* sub_0802675C @ 0x0802675C */

void sub_0802675C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026770 @ 0x08026770 */

void sub_08026770(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026784 @ 0x08026784 */

void sub_08026784(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026798 @ 0x08026798 */

void sub_08026798(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x21),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x13),0);
  sub_08020EAA((undefined2 *)(param_1 + 5),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080267D0 @ 0x080267D0 */

void sub_080267D0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080267E4 @ 0x080267E4 */

void sub_080267E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080267F8 @ 0x080267F8 */

void sub_080267F8(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026830 @ 0x08026830 */

void sub_08026830(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026844 @ 0x08026844 */

void sub_08026844(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026858 @ 0x08026858 */

void sub_08026858(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802686C @ 0x0802686C */

void sub_0802686C(undefined4 *param_1)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  return;
}


/* sub_0802689C @ 0x0802689C */

void sub_0802689C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080268B0 @ 0x080268B0 */

void sub_080268B0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080268C4 @ 0x080268C4 */

void sub_080268C4(undefined4 *param_1)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  return;
}


/* sub_080268F0 @ 0x080268F0 */

void sub_080268F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026904 @ 0x08026904 */

void sub_08026904(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026918 @ 0x08026918 */

void sub_08026918(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026950 @ 0x08026950 */

void sub_08026950(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026978 @ 0x08026978 */

void sub_08026978(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080269A0 @ 0x080269A0 */

void sub_080269A0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080269B4 @ 0x080269B4 */

void sub_080269B4(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x103),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080269FC @ 0x080269FC */

void sub_080269FC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026A10 @ 0x08026A10 */

void sub_08026A10(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08023DB8;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,(undefined *)(*(int *)*piVar1 + *piVar1));
  }
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026A3C @ 0x08026A3C */

void sub_08026A3C(undefined4 *param_1)

{
  *param_1 = &_08023DCC;
  return;
}


/* sub_08026A48 @ 0x08026A48 */

void sub_08026A48(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026A6C @ 0x08026A6C */

void sub_08026A6C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026A80 @ 0x08026A80 */

void sub_08026A80(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026AA8 @ 0x08026AA8 */

void sub_08026AA8(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026AD0 @ 0x08026AD0 */

void sub_08026AD0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026AE4 @ 0x08026AE4 */

void sub_08026AE4(undefined4 *param_1,int param_2)

{
  sub_08001F54(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026AFC @ 0x08026AFC */

void sub_08026AFC(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x15),0);
  sub_08020EAA((undefined2 *)(param_1 + 7),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026B28 @ 0x08026B28 */

void sub_08026B28(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026B50 @ 0x08026B50 */

void sub_08026B50(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026B64 @ 0x08026B64 */

void sub_08026B64(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026B78 @ 0x08026B78 */

void sub_08026B78(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026B8C @ 0x08026B8C */

void sub_08026B8C(undefined4 *param_1)

{
  *param_1 = &_08023858;
  return;
}


/* sub_08026B98 @ 0x08026B98 */

void sub_08026B98(undefined4 *param_1)

{
  *param_1 = &_08023858;
  return;
}


/* sub_08026BA4 @ 0x08026BA4 */

void sub_08026BA4(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026BE8 @ 0x08026BE8 */

void sub_08026BE8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026C24 @ 0x08026C24 */

void sub_08026C24(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026C60 @ 0x08026C60 */

void sub_08026C60(undefined4 *param_1)

{
  *param_1 = &_08023720;
  return;
}


/* sub_08026C6C @ 0x08026C6C */

void sub_08026C6C(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026C94 @ 0x08026C94 */

void sub_08026C94(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026CA8 @ 0x08026CA8 */

void sub_08026CA8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026CBC @ 0x08026CBC */

void sub_08026CBC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026CF8 @ 0x08026CF8 */

void sub_08026CF8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026D34 @ 0x08026D34 */

void sub_08026D34(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026D70 @ 0x08026D70 */

void sub_08026D70(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026DAC @ 0x08026DAC */

void sub_08026DAC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026DE8 @ 0x08026DE8 */

void sub_08026DE8(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026E0C @ 0x08026E0C */

void sub_08026E0C(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x21),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x13),0);
  sub_08020EAA((undefined2 *)(param_1 + 5),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026E44 @ 0x08026E44 */

void sub_08026E44(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026E58 @ 0x08026E58 */

void sub_08026E58(undefined4 *param_1)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  return;
}


/* sub_08026E84 @ 0x08026E84 */

void sub_08026E84(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026EA8 @ 0x08026EA8 */

void sub_08026EA8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026EBC @ 0x08026EBC */

void sub_08026EBC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026EF8 @ 0x08026EF8 */

void sub_08026EF8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026F34 @ 0x08026F34 */

void sub_08026F34(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026F48 @ 0x08026F48 */

void sub_08026F48(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026F5C @ 0x08026F5C */

void sub_08026F5C(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026F80 @ 0x08026F80 */

void sub_08026F80(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026FA4 @ 0x08026FA4 */

void sub_08026FA4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026FB8 @ 0x08026FB8 */

void sub_08026FB8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026FCC @ 0x08026FCC */

void sub_08026FCC(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x14),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08026FF0 @ 0x08026FF0 */

void sub_08026FF0(undefined4 *param_1,int param_2)

{
  sub_080108CE(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027008 @ 0x08027008 */

void sub_08027008(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027020 @ 0x08027020 */

void sub_08027020(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027034 @ 0x08027034 */

void sub_08027034(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 0x1f),0);
  sub_08020EAA((undefined2 *)(param_1 + 0x11),0);
  sub_08020EAA((undefined2 *)(param_1 + 3),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802706C @ 0x0802706C */

void sub_0802706C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027080 @ 0x08027080 */

void sub_08027080(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027098 @ 0x08027098 */

void sub_08027098(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080270B0 @ 0x080270B0 */

void sub_080270B0(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080270C8 @ 0x080270C8 */

void sub_080270C8(undefined4 *param_1,int param_2)

{
  sub_080108CE(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080270E0 @ 0x080270E0 */

void sub_080270E0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080270F4 @ 0x080270F4 */

void sub_080270F4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027108 @ 0x08027108 */

void sub_08027108(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027144 @ 0x08027144 */

void sub_08027144(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802716C @ 0x0802716C */

void sub_0802716C(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027184 @ 0x08027184 */

void sub_08027184(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802719C @ 0x0802719C */

void sub_0802719C(undefined4 *param_1,int param_2)

{
  sub_080108CE(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080271B4 @ 0x080271B4 */

void sub_080271B4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080271C8 @ 0x080271C8 */

void sub_080271C8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080271DC @ 0x080271DC */

void sub_080271DC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080271F0 @ 0x080271F0 */

void sub_080271F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802722C @ 0x0802722C */

void sub_0802722C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027268 @ 0x08027268 */

void sub_08027268(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080272A4 @ 0x080272A4 */

void sub_080272A4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080272E0 @ 0x080272E0 */

void sub_080272E0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802731C @ 0x0802731C */

void sub_0802731C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027358 @ 0x08027358 */

void sub_08027358(undefined4 *param_1,int param_2)

{
  sub_0800892E(param_1[3]);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027378 @ 0x08027378 */

void sub_08027378(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027390 @ 0x08027390 */

void sub_08027390(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080273A8 @ 0x080273A8 */

void sub_080273A8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080273BC @ 0x080273BC */

void sub_080273BC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080273D0 @ 0x080273D0 */

void sub_080273D0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080273E4 @ 0x080273E4 */

void sub_080273E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027420 @ 0x08027420 */

void sub_08027420(undefined4 *param_1)

{
  sub_08019B48(param_1);
  return;
}


/* sub_0802742A @ 0x0802742A */

void sub_0802742A(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802742C @ 0x0802742C */

void sub_0802742C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027468 @ 0x08027468 */

void sub_08027468(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802747C @ 0x0802747C */

void sub_0802747C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080274B8 @ 0x080274B8 */

void sub_080274B8(undefined4 *param_1)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  return;
}


/* sub_080274E8 @ 0x080274E8 */

void sub_080274E8(undefined4 *param_1,int param_2)

{
  sub_0800892E(param_1[3]);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027508 @ 0x08027508 */

void sub_08027508(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802751C @ 0x0802751C */

void sub_0802751C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027530 @ 0x08027530 */

void sub_08027530(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027544 @ 0x08027544 */

void sub_08027544(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027558 @ 0x08027558 */

void sub_08027558(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027594 @ 0x08027594 */

void sub_08027594(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080275D0 @ 0x080275D0 */

void sub_080275D0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802760C @ 0x0802760C */

void sub_0802760C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027648 @ 0x08027648 */

void sub_08027648(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027670 @ 0x08027670 */

void sub_08027670(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027688 @ 0x08027688 */

void sub_08027688(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080276A0 @ 0x080276A0 */

void sub_080276A0(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080276B8 @ 0x080276B8 */

void sub_080276B8(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080276D0 @ 0x080276D0 */

void sub_080276D0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802770C @ 0x0802770C */

void sub_0802770C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027748 @ 0x08027748 */

void sub_08027748(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802778C @ 0x0802778C */

void sub_0802778C(undefined4 *param_1)

{
  *param_1 = &_08023720;
  return;
}


/* sub_08027798 @ 0x08027798 */

void sub_08027798(undefined4 *param_1,int param_2)

{
  sub_08017A9E(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080277B0 @ 0x080277B0 */

void sub_080277B0(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080277D4 @ 0x080277D4 */

void sub_080277D4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080277E8 @ 0x080277E8 */

void sub_080277E8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080277FC @ 0x080277FC */

void sub_080277FC(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027814 @ 0x08027814 */

void sub_08027814(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802782C @ 0x0802782C */

void sub_0802782C(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027844 @ 0x08027844 */

void sub_08027844(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_0802785C @ 0x0802785C */

void sub_0802785C(undefined4 *param_1)

{
  sub_08019B48(param_1);
  return;
}


/* sub_08027866 @ 0x08027866 */

void sub_08027866(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027868 @ 0x08027868 */

void sub_08027868(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080278A4 @ 0x080278A4 */

void sub_080278A4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x58];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,(undefined *)(*(int *)(*piVar1 + 4) + *piVar1));
  }
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080278D2 @ 0x080278D2 */

void sub_080278D2(undefined4 *param_1,int param_2)

{
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080278D4 @ 0x080278D4 */

void sub_080278D4(undefined4 *param_1,int param_2)

{
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080278EC @ 0x080278EC */

void sub_080278EC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027900 @ 0x08027900 */

void sub_08027900(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027914 @ 0x08027914 */

void sub_08027914(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027950 @ 0x08027950 */

void sub_08027950(undefined4 *param_1,int param_2)

{
  sub_080075F8(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027968 @ 0x08027968 */

void sub_08027968(undefined4 *param_1,int param_2)

{
  sub_080075F8(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027980 @ 0x08027980 */

void sub_08027980(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x58];
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,(undefined *)(*(int *)(*piVar1 + 4) + *piVar1));
  }
  sub_08019B48(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080279AE @ 0x080279AE */

void sub_080279AE(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080279B0 @ 0x080279B0 */

void sub_080279B0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080279C4 @ 0x080279C4 */

void sub_080279C4(undefined4 *param_1,int param_2)

{
  sub_08014438(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080279DC @ 0x080279DC */

void sub_080279DC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_080279F0 @ 0x080279F0 */

void sub_080279F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027A04 @ 0x08027A04 */

void sub_08027A04(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027A18 @ 0x08027A18 */

void sub_08027A18(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027A2C @ 0x08027A2C */

void sub_08027A2C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027A68 @ 0x08027A68 */

void sub_08027A68(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027AA4 @ 0x08027AA4 */

void sub_08027AA4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027AB8 @ 0x08027AB8 */

void sub_08027AB8(undefined4 *param_1,int param_2)

{
  sub_080108CE(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027AD0 @ 0x08027AD0 */

void sub_08027AD0(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027AE4 @ 0x08027AE4 */

void sub_08027AE4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027AF8 @ 0x08027AF8 */

void sub_08027AF8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027B34 @ 0x08027B34 */

void sub_08027B34(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027B70 @ 0x08027B70 */

void sub_08027B70(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027BAC @ 0x08027BAC */

void sub_08027BAC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027BE8 @ 0x08027BE8 */

void sub_08027BE8(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027C00 @ 0x08027C00 */

void sub_08027C00(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027C14 @ 0x08027C14 */

void sub_08027C14(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027C50 @ 0x08027C50 */

void sub_08027C50(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027C8C @ 0x08027C8C */

void sub_08027C8C(undefined4 *param_1,int param_2)

{
  sub_080075F8(param_1);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027CA4 @ 0x08027CA4 */

void sub_08027CA4(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 6),0);
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027CE8 @ 0x08027CE8 */

void sub_08027CE8(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027CFC @ 0x08027CFC */

void sub_08027CFC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027D10 @ 0x08027D10 */

void sub_08027D10(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027D54 @ 0x08027D54 */

void sub_08027D54(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027D68 @ 0x08027D68 */

void sub_08027D68(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027D80 @ 0x08027D80 */

void sub_08027D80(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027D94 @ 0x08027D94 */

void sub_08027D94(undefined4 *param_1,int param_2)

{
  sub_08020EAA((undefined2 *)(param_1 + 4),0);
  *param_1 = &_08023A1C;
  if (*(ushort *)(param_1 + 3) != 0xffff) {
    sub_08006664(&DAT_03001120,(uint)*(ushort *)(param_1 + 3));
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027DD8 @ 0x08027DD8 */

void sub_08027DD8(undefined4 *param_1,int param_2)

{
  sub_08026A10(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027DF0 @ 0x08027DF0 */

void sub_08027DF0(undefined4 *param_1,int param_2)

{
  sub_08008742(param_1,0);
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027E08 @ 0x08027E08 */

void sub_08027E08(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027E1C @ 0x08027E1C */

void sub_08027E1C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027E30 @ 0x08027E30 */

void sub_08027E30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &_08025FE0;
  piVar1 = *(int **)param_1[3];
  __call_via_r1((int *)param_1[3],(undefined *)(*piVar1 + (int)piVar1));
  return;
}


/* sub_08027E48 @ 0x08027E48 */

void sub_08027E48(undefined4 *param_1)

{
  *param_1 = &_08025FEC;
  return;
}


/* sub_08027E54 @ 0x08027E54 */

void sub_08027E54(undefined4 *param_1)

{
  *param_1 = &_08026014;
  return;
}


/* sub_08027E60 @ 0x08027E60 */

void sub_08027E60(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110((undefined2 *)param_1);
  }
  return;
}


/* sub_08027E74 @ 0x08027E74 */

undefined4 sub_08027E74(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(*param_1 + 8);
  bVar2 = *(byte *)(*param_2 + 8);
  if (bVar1 != bVar2) {
    if (bVar2 < bVar1) {
      return 1;
    }
    return 0;
  }
  if (*(int *)(*param_1 + 4) < *(int *)(*param_2 + 4)) {
    return 1;
  }
  return 0;
}


/* sub_08027E9C @ 0x08027E9C */

void sub_08027E9C(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  param_1[1] = param_2[1] + param_3[1];
  *param_1 = iVar1 + iVar2;
  return;
}


/* sub_08027EBC @ 0x08027EBC */

int * sub_08027EBC(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2[1];
  iVar4 = param_3[1];
  iVar5 = param_2[2];
  iVar6 = *param_3;
  iVar1 = param_2[3];
  iVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar5 + iVar6;
  param_1[3] = iVar1 + iVar2;
  return param_1 + 4;
}


/* sub_08027EF8 @ 0x08027EF8 */

int sub_08027EF8(int param_1)

{
  return param_1 % 100;
}


/* sub_08027EFC @ 0x08027EFC */

int sub_08027EFC(int param_1)

{
  return param_1 % 100;
}


/* sub_08027F1C @ 0x08027F1C */

uint sub_08027F1C(uint param_1)

{
  return param_1 % 0xfff1;
}


/* sub_08027F20 @ 0x08027F20 */

uint sub_08027F20(uint param_1)

{
  return param_1 % 0xfff1;
}


/* sub_08027F40 @ 0x08027F40 */

void sub_08027F40(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
_08027F42:
  if (param_1 < param_2) {
    piVar2 = param_1 + ((int)param_2 - (int)param_1 >> 3);
    if (param_1 != piVar2) {
      iVar1 = sub_08027E74(piVar2,param_1);
      if (iVar1 != 0) {
        iVar1 = *param_1;
        *param_1 = *piVar2;
        *piVar2 = iVar1;
      }
      iVar1 = sub_08027E74(param_1,param_2);
      piVar2 = param_2;
      piVar3 = param_1;
      if (iVar1 != 0) {
        iVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
      do {
        iVar1 = sub_08027E74(piVar2,param_1);
        while (iVar1 != 0) {
          piVar2 = piVar2 + -1;
          iVar1 = sub_08027E74(piVar2,param_1);
        }
        do {
          piVar3 = piVar3 + 1;
          if (piVar2 <= piVar3) {
            iVar1 = *param_1;
            *param_1 = *piVar2;
            *piVar2 = iVar1;
            sub_08027F40(param_1,piVar2 + -1);
            param_1 = piVar2 + 1;
            goto _08027F42;
          }
          iVar1 = sub_08027E74(param_1,piVar3);
        } while (iVar1 != 0);
        iVar1 = *piVar3;
        *piVar3 = *piVar2;
        *piVar2 = iVar1;
        piVar2 = piVar2 + -1;
      } while( true );
    }
    iVar1 = sub_08027E74(param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}


/* sub_08027FEA @ 0x08027FEA */

int * sub_08027FEA(int *param_1,int *param_2,int *param_3)

{
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_1c = *param_3;
  if (*param_3 < *param_2) {
    iStack_1c = *param_2;
  }
  iStack_18 = param_3[1];
  if (param_3[1] < param_2[1]) {
    iStack_18 = param_2[1];
  }
  iStack_14 = param_3[2];
  if (param_2[2] < param_3[2]) {
    iStack_14 = param_2[2];
  }
  iStack_10 = param_3[3];
  if (param_2[3] < param_3[3]) {
    iStack_10 = param_2[3];
  }
  *param_1 = iStack_1c;
  param_1[1] = iStack_18;
  param_1[2] = iStack_14;
  param_1[3] = iStack_10;
  return param_1 + 4;
}


/* sub_08027FEC @ 0x08027FEC */

int * sub_08027FEC(int *param_1,int *param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = *param_3;
  if (*param_3 < *param_2) {
    local_1c = *param_2;
  }
  local_18 = param_3[1];
  if (param_3[1] < param_2[1]) {
    local_18 = param_2[1];
  }
  local_14 = param_3[2];
  if (param_2[2] < param_3[2]) {
    local_14 = param_2[2];
  }
  local_10 = param_3[3];
  if (param_2[3] < param_3[3]) {
    local_10 = param_2[3];
  }
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  return param_1 + 4;
}


/* sub_0802802E @ 0x0802802E */

void sub_0802802E(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}


/* sub_08028030 @ 0x08028030 */

void sub_08028030(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}


/* sub_0802805A @ 0x0802805A */

undefined4 sub_0802805A(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}


