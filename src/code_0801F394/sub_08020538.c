/* sub_08020538  (original: 0x08020538-0x0802054C in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FE20();


void sub_08020538(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 2) + -1;
  *(char *)(param_2 + 2) = cVar1;
  if (cVar1 == '\0') {
    sub_0801FE20();
  }
  return;
}

