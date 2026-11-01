/* sub_080091BC  (original: 0x080091BC-0x080091EC in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gUnknown_083B5F70;
extern undefined * volatile gUnknown_083B5D28;


void sub_080091BC(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gUnknown_083B5D28)[bVar1],pbVar3,param_4,param_4);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2] + -1,(&gUnknown_083B5F70)[bVar1]);
  return;
}

