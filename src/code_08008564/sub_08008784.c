/* sub_08008784  (original: 0x08008784-0x08008806 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800F832();
extern int __call_via_r2();
extern byte volatile DAT_03000e90;
extern undefined volatile _08023A50;
extern int volatile DAT_03001730;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03001734;


undefined4 sub_08008784(int *param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  sub_0800F832(param_1,param_2);
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
  __call_via_r2(param_1,0x21,*(int *)(*param_1 + 0x28) + *param_1);
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

