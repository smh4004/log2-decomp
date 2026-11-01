/* sub_08013C22  (original: 0x08013C22-0x08013C7E in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 65% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030010a4;
extern int volatile DAT_030010a8;
extern int volatile DAT_030010a0;
extern int volatile DAT_0300109c;


undefined4 sub_08013C22(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2c) < DAT_030010a8) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x01') {
    if (DAT_030010a0 < *(int *)(param_1 + 0x34)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x02') {
    if (DAT_0300109c < *(int *)(param_1 + 0x30)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x28) < DAT_030010a4) {
      return 1;
    }
    return 0;
  }
  return 0;
}

