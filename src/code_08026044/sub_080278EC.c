/* sub_080278EC  (original: 0x080278EC-0x08027900 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023A44;


void sub_080278EC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

