/* sub_08004284  (original: 0x08004284-0x080042BC in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"


bool sub_08004284(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 9);
  if ((*(uint *)(param_1 + 0x14) << 0x19) >> 0x1c == 0) {
    bVar3 = false;
  }
  else {
    do {
      bVar2 = *(char *)(param_1 + 9) + 1U & 3;
      *(byte *)(param_1 + 9) = bVar2;
    } while ((*(uint *)(param_1 + 0x14) & 8 << (uint)bVar2) == 0);
    bVar3 = *(char *)(param_1 + 9) != cVar1;
  }
  return bVar3;
}

