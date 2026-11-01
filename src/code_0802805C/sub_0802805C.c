/* sub_0802805C  (original: 0x0802805C-0x08028084 in asm/code_0802805C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0802805C(int *param_1,int *param_2)

{
  if ((((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}

