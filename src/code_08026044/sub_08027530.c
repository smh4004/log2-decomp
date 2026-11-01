/* sub_08027530  (original: 0x08027530-0x08027544 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023858;


void sub_08027530(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023858;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

