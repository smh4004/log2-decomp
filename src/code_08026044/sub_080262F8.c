/* sub_080262F8  (original: 0x080262F8-0x0802631C in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08024B6C;


void sub_080262F8(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08024B6C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],*(int *)(iVar1 + 0xc) + iVar1);
    sub_0801F110(param_1);
  }
  return;
}

