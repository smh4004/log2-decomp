/* sub_08021792  (original: 0x08021792-0x080217CA in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08021792(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 * *param_1 >> 10;
  param_1[1] = iVar1 * param_1[1] >> 10;
  iVar1 = *param_2;
  param_1[2] = iVar1 * param_1[2] >> 10;
  param_1[3] = iVar1 * param_1[3] >> 10;
  iVar1 = *param_2;
  param_1[4] = iVar1 * param_1[4] >> 10;
  param_1[5] = iVar1 * param_1[5] >> 10;
  return;
}

