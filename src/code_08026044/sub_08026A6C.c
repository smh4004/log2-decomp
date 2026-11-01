/* sub_08026A6C  (original: 0x08026A6C-0x08026A80 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F110();
extern undefined volatile _08023DCC;


void sub_08026A6C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08023DCC;
  if (param_2 != 0) {
    sub_0801F110();
  }
  return;
}

