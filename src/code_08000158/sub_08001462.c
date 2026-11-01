/* sub_08001462  (original: 0x08001462-0x08001476 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08000C18();
extern int sub_08006AA6();
extern undefined volatile DAT_03001120;


void sub_08001462(undefined4 param_1)

{
  sub_08006AA6(&DAT_03001120);
  sub_08000C18(param_1);
  return;
}

