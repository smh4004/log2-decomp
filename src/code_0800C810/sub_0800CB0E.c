/* sub_0800CB0E  (original: 0x0800CB0E-0x0800CB40 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int __call_via_r2();
extern undefined volatile _08025AAC;


void sub_0800CB0E(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 6);
  uVar1 = *(undefined2 *)(param_1 + 4);
  puVar2 = (undefined4 *)sub_0801F08C(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08025AAC;
    *(undefined2 *)(puVar2 + 1) = uVar1;
  }
  return;
}

