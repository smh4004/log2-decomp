/* sub_08027FEC  (original: 0x08027FEC-0x0802802E in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes the snapshot tests but changes game output on tools/harness/decomp_explore.txt (found by gamebisect.py).
 */
#include "ghidra_types.h"


int * sub_08027FEC(int *param_1,int *param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = *param_3;
  if (*param_3 < *param_2) {
    local_1c = *param_2;
  }
  local_18 = param_3[1];
  if (param_3[1] < param_2[1]) {
    local_18 = param_2[1];
  }
  local_14 = param_3[2];
  if (param_2[2] < param_3[2]) {
    local_14 = param_2[2];
  }
  local_10 = param_3[3];
  if (param_2[3] < param_3[3]) {
    local_10 = param_2[3];
  }
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  return param_1 + 4;
}

