/* sub_0801F618  (original: 0x0801F618-0x0801F636 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0801F618(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    __call_via_r3(param_1,uVar1,param_4,*(undefined4 *)(param_1 + 0x20),uVar2);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

