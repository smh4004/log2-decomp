/* sub_0801BFC6  (original: 0x0801BFC6-0x0801BFE6 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801BEB8();
extern int __call_via_r2();


void sub_0801BFC6(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801BEB8();
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,*piVar2 + (int)piVar2);
  }
  return;
}

