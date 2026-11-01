/* sub_0800FB74  (original: 0x0800FB74-0x0800FBAC in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __call_via_r2();
extern int * volatile DAT_03001fa8;
extern undefined volatile _08024748;


undefined4 * sub_0800FB74(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08024748;
    param_1[2] = param_2;
    param_1[1] = 0x80;
    piVar1 = DAT_03001fa8;
    param_1[4] = DAT_03001fa8;
    iVar2 = *piVar1;
    __call_via_r2(piVar1,0xb,*(int *)(iVar2 + 0x28) + iVar2);
  }
  return param_1;
}

