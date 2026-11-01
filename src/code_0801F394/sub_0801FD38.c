/* sub_0801FD38  (original: 0x0801FD38-0x0801FD56 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FA72();


void sub_0801FD38(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801FA72(iVar1 * 0x40 + param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

