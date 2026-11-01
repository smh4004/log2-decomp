/* sub_0800CFDC  (original: 0x0800CFDC-0x0800D00E in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __call_via_r2();
extern int sub_0800CB50();
extern undefined volatile _08024E2C;


undefined4 * sub_0800CFDC(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0801F08C(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800CB50(puVar1,uVar2);
    *puVar1 = &_08024E2C;
  }
  return puVar1;
}

