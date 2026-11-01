/* sub_08016F6A  (original: 0x08016F6A-0x08016F96 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_08016F6A(int param_1,int param_2,uint param_3)

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

