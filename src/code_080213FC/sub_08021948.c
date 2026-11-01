/* sub_08021948  (original: 0x08021948-0x08021980 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern byte volatile DAT_030038a0;
extern undefined2 * volatile DAT_030038a8;
extern int sub_08021924();
extern undefined2 volatile REG_TM0CNT;


bool sub_08021948(byte param_1,undefined4 *param_2)

{
  if (3 >= param_1) {
    DAT_030038a8 = &REG_TM0CNT + (uint)param_1 * 2;
    DAT_030038a0 = param_1;
    *param_2 = sub_08021924;
  }
  return 3 < param_1;
}

