/* sub_08026B64  (original: 0x08026B64-0x08026B78 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023A44;


void sub_08026B64(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023A44;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

