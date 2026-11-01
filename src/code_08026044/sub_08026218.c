/* sub_08026218  (original: 0x08026218-0x0802623C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _0802410C;


void sub_08026218(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802410C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],*(int *)(iVar1 + 0xc) + iVar1);
    sub_0801F110(param_1);
  }
  return;
}

