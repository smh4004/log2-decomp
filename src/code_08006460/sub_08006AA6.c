/* sub_08006AA6  (original: 0x08006AA6-0x08006AD8 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801F566();
extern int __call_via_r1();
extern undefined volatile DAT_030022bc;


void sub_08006AA6(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  sub_0801F566(&DAT_030022bc);
  piVar3 = (int *)(param_1 + 0x208);
  iVar1 = *piVar3;
  while (-1 < iVar1 + -1) {
    iVar2 = *(int *)piVar3[iVar1];
    __call_via_r1((int *)piVar3[iVar1],*(int *)(iVar2 + 0x14) + iVar2);
    iVar1 = iVar1 + -1;
  }
  *piVar3 = 0;
  return;
}

