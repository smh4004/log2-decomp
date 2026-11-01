/* sub_08022CB4  (original: 0x08022CB4-0x08022D00 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 51% of instructions covered.
 */
#include "ghidra_types.h"


int sub_08022CB4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((int)param_1 + 1);
  uVar2 = (uint)param_1 & 3;
  while( true ) {
    if (uVar2 == 0) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
      } while ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0);
      iVar1 = (int)param_1 - (int)pcVar3;
      if ((uVar2 & 0xff) == 0) {
        iVar1 = iVar1 + -3;
      }
      else if ((uVar2 << 0x10) >> 0x18 == 0) {
        iVar1 = iVar1 + -2;
      }
      else if ((uVar2 << 8) >> 0x18 == 0) {
        iVar1 = iVar1 + -1;
      }
      return iVar1;
    }
    uVar2 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar2 == '\0') break;
    uVar2 = (uint)param_1 & 3;
  }
  return (int)param_1 - (int)pcVar3;
}

