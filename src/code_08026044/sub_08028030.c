/* sub_08028030  (original: 0x08028030-0x0802805A in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08028030(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}

