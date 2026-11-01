/* sub_0802675C  (original: 0x0802675C-0x08026770 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08026014;


void sub_0802675C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08026014;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

