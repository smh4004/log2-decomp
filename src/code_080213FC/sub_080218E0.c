/* sub_080218E0  (original: 0x080218E0-0x08021924 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 61% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003918;
extern undefined volatile gUnknown_087FD644;
extern undefined volatile gUnknown_087FD650;


undefined4 sub_080218E0(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 4) {
    DAT_03003918 = &gUnknown_087FD644;
  }
  else if (param_1 == 0x40) {
    DAT_03003918 = &gUnknown_087FD650;
  }
  else {
    DAT_03003918 = &gUnknown_087FD644;
    uVar1 = 1;
  }
  return uVar1;
}

