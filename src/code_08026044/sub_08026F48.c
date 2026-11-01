/* sub_08026F48  (original: 0x08026F48-0x08026F5C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023720;


void sub_08026F48(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023720;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

