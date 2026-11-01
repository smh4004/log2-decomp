/* sub_08009B1C  (original: 0x08009B1C-0x08009B36 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0802664C();
extern int sub_0801F2F4();


void sub_08009B1C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_0802664C(0,param_1[iVar1],param_3,param_4,param_4);
  sub_0801F2F4();
  return;
}

