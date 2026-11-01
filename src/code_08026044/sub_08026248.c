/* sub_08026248  (original: 0x08026248-0x08026278 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _0802413C;


void sub_08026248(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0802413C;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],*(int *)(iVar1 + 0xc) + iVar1);
    iVar1 = *(int *)param_1[3];
    __call_via_r1((int *)param_1[3],*(int *)(iVar1 + 0xc) + iVar1);
    sub_0801F110(param_1);
  }
  return;
}

