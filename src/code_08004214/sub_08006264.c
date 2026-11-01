/* sub_08006264  (original: 0x08006264-0x08006274 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 10/10 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800BF42();
extern undefined4 volatile DAT_03001fe0;


void sub_08006264(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800BF42(&DAT_03001fe0,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),param_4
               ,param_4);
  return;
}

