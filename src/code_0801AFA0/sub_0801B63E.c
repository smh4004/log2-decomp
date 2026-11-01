/* sub_0801B63E  (original: 0x0801B63E-0x0801B688 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801F08C();
extern undefined volatile _08023780;
extern undefined volatile _080247EC;


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
        uVar4 = __call_via_r2(puVar3,param_2,*puVar3);
        puVar1[iVar5 + 3] = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[2]);
    }
  }
  return puVar1;
}

