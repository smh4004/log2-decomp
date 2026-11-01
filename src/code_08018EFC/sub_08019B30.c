/* sub_08019B30  (original: 0x08019B30-0x08019B48 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080075A8();
extern undefined volatile _0802593C;


undefined4 * sub_08019B30(undefined4 *param_1)

{
  sub_080075A8();
  *param_1 = &_0802593C;
  param_1[0x54] = 0;
  return param_1;
}

