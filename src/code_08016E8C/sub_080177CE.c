/* sub_080177CE  (original: 0x080177CE-0x08017802 in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F2CE();


undefined4 sub_080177CE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    iVar2 = *(int *)(*param_1 + 0x34);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0801F2CE();
    uVar1 = 0;
  }
  else if (*(char *)((int)param_1 + 0xb) == '\x02') {
    iVar2 = *(int *)(*param_1 + 0x38);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0801F2CE();
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

