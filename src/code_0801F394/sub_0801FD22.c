/* sub_0801FD22  (original: 0x0801FD22-0x0801FD38 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F9D6();


void sub_0801FD22(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0801F9D6(iVar1 * 0x40 + param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

