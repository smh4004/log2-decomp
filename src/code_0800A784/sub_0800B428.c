/* sub_0800B428  (original: 0x0800B428-0x0800B438 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0800B19C();


void sub_0800B428(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800B19C(0,param_2,param_1 + 8,*(undefined4 *)(param_1 + 0x14),param_4);
  return;
}

