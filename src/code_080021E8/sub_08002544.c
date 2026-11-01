/* sub_08002544  (original: 0x08002544-0x080025E6 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F636();
extern int sub_08021F18();
extern int sub_080236B4();
extern undefined volatile gUnknown_080E2840;


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

