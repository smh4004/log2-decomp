/* sub_0801EEFC  (original: 0x0801EEFC-0x0801EF56 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_0802135C();
extern undefined2 volatile REG_KEYINPUT;
extern undefined4 volatile DAT_03002298;


void sub_0801EEFC(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = REG_KEYINPUT;
  uVar4 = ~uVar4;
  uVar2 = *(ushort *)(param_1 + 0x12) ^ uVar4;
  uVar3 = uVar4 & uVar2;
  *(ushort *)(param_1 + 0x14) = uVar3;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x12) & uVar2;
  *(ushort *)(param_1 + 0x12) = uVar4;
  if (uVar3 != 0) {
    bVar1 = *param_1;
    *param_1 = bVar1 + 1;
    *(ushort *)(param_1 + (uint)bVar1 * 2 + 2) = uVar3;
    if (7 < *param_1) {
      *param_1 = 0;
    }
    DAT_03002298 = 0;
  }
  if ((((~*(ushort *)(param_1 + 0x12) & 0xf) == 0) && (param_1[1] != 0)) &&
     ((*(ushort *)(param_1 + 0x14) & 0xf) != 0)) {
    sub_0802135C();
  }
  return;
}

