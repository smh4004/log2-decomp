/* sub_08001DEA  (original: 0x08001DEA-0x08001E06 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"


undefined1 sub_08001DEA(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return param_1[2];
    }
    return 0;
  }
  return param_1[1];
}

