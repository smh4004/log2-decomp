/* sub_08020566  (original: 0x08020566-0x08020578 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();


void sub_08020566(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  *(char *)(param_1 + 4) = (char)param_2;
  uVar1 = __16__rt_sdiv(param_2,40000);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}

