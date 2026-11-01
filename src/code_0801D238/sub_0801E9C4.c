/* sub_0801E9C4  (original: 0x0801E9C4-0x0801E9E4 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801E8B4();


void sub_0801E9C4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sub_0801E8B4();
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 8);
    __call_via_r2(*(int **)(param_1 + 8),param_2,*piVar2 + (int)piVar2);
  }
  return;
}

