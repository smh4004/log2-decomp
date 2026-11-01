/* sub_0801A804  (original: 0x0801A804-0x0801A824 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_0801A804(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == (*(char **)(param_3 + 8))[1]) ||
     (*(char *)(param_1 + 0xc) == **(char **)(param_3 + 8))) {
    uVar1 = __call_via_r3();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

