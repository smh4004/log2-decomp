/* sub_08017306  (original: 0x08017306-0x08017376 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern byte volatile DAT_03000e90;
extern undefined volatile DAT_03000e9c;
extern undefined volatile DAT_03000ea0;


void sub_08017306(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0x24,*(int *)(*param_2 + 0x2c) + *param_2,param_4,param_4);
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
      __call_via_r2(param_2,0x24,*(int *)(*param_2 + 0x28) + *param_2,4,param_4);
    }
    param_2[0x61] = param_2[0x61] & 0xffff;
  }
  return;
}

