/* sub_0801BA12  (original: 0x0801BA12-0x0801BA36 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802142E();
extern int __call_via_r2();


undefined4 sub_0801BA12(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0802142E(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
    uVar2 = __call_via_r2(*(int **)(param_1 + 8),param_2,*(int *)(iVar1 + 4) + iVar1);
  }
  return uVar2;
}

