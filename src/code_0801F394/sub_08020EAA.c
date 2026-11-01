/* sub_08020EAA  (original: 0x08020EAA-0x08020EC2 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 80% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();


void sub_08020EAA(int param_1,int param_2)

{
  sub_0801F110(*(undefined4 *)(param_1 + 0x24));
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

