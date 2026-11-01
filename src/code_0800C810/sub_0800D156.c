/* sub_0800D156  (original: 0x0800D156-0x0800D1AC in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();


void sub_0800D156(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = __call_via_r2(piVar1,param_2,*(int *)(*piVar1 + 8) + *piVar1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)*param_1;
      __call_via_r1((int *)*param_1,*(int *)(iVar2 + 4) + iVar2);
    }
    iVar2 = (*(byte *)(param_1 + 1) + 1) * 0x1000000;
    *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    if (*(int *)param_1[2] <= iVar2 >> 0x18) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    puVar3 = (undefined4 *)((int *)param_1[2])[(char)param_1[1] + 1];
    iVar2 = __call_via_r2(puVar3,param_2,*puVar3);
    *param_1 = iVar2;
  } while( true );
}

