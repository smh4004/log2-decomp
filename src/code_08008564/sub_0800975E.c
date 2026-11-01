/* sub_0800975E  (original: 0x0800975E-0x0800977A in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006E0A();
extern undefined volatile DAT_03001120;


void sub_0800975E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08006E0A(&DAT_03001120,4,param_1[iVar1] << 1,param_4,param_4);
  return;
}

