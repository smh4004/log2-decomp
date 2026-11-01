/* sub_08008F8E  (original: 0x08008F8E-0x08008FA4 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_083B5D28;


void sub_08008F8E(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1],&gUnknown_083B5D28,pbVar2,param_4);
  return;
}

