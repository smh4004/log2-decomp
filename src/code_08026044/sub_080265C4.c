/* sub_080265C4  (original: 0x080265C4-0x080265DC in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08028230();
extern int sub_0802829C();


undefined4 * sub_080265C4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  sub_0802829C(param_2,0x43800000);
  uVar1 = sub_08028230();
  *param_1 = uVar1;
  return param_1;
}

