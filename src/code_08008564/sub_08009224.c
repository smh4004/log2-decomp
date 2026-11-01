/* sub_08009224  (original: 0x08009224-0x08009250 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_083B5F70;
extern undefined * volatile gUnknown_083B5D28;


void sub_08009224(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1],pbVar2,param_4,param_4);
  __call_via_r1(param_1[*param_1] + -1,(&gUnknown_083B5F70)[bVar1]);
  return;
}

