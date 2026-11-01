/* sub_080213FC  (original: 0x080213FC-0x0802141C in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern uint volatile DAT_03003890;
extern uint volatile DAT_03003894;


int sub_080213FC(void)

{
  DAT_03003890 = DAT_03003890 + 0x2cbbc71 ^ DAT_03003894;
  DAT_03003894 = (DAT_03003894 >> 0x1d | DAT_03003894 << 3) + 0x632d80f ^ DAT_03003890;
  return DAT_03003890 - DAT_03003894;
}

