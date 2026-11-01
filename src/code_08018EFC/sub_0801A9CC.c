/* sub_0801A9CC  (original: 0x0801A9CC-0x0801A9FA in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0801A9CC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 0x34);
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

