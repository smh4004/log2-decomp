/* sub_08007298  (original: 0x08007298-0x080072C4 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 40% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08007298(int param_1,int param_2,uint param_3)

{
  if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0x10) = param_3 & 1;
      return 1;
    }
    param_1 = 0;
  }
  else {
    if (param_2 != 6) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0xc) != param_3) {
      return 0;
    }
  }
  return param_1;
}

