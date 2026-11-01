/* sub_080134C0  (original: 0x080134C0-0x080134F2 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile gUnknown_081D967C;


void sub_080134C0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x28);
  iVar1 = iVar2 + *param_2;
  if (((&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] & 1) == 0) {
    __call_via_r2(param_2,0x25,iVar1,iVar2,param_4);
  }
  else {
    __call_via_r2(param_2,0x24,iVar1,iVar2,param_4);
  }
  return;
}

