/* sub_08026698  (original: 0x08026698-0x080266B8 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 50% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08003C24();


int sub_08026698(int param_1)

{
  if ((param_1 == 0) && (param_1 = sub_0801F08C(0x164), param_1 == 0)) {
    return 0;
  }
  sub_08003C24(param_1);
  return param_1;
}

