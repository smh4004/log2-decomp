/* sub_0801B83E  (original: 0x0801B83E-0x0801B860 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801B722();
extern int sub_0801F08C();


int sub_0801B83E(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0801F08C(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (iVar1 != 0) {
    sub_0801B722(iVar1,param_1,param_2);
  }
  return iVar1;
}

