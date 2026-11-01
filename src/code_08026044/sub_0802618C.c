/* sub_0802618C  (original: 0x0802618C-0x080261B0 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08023D58;


void sub_0802618C(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_08023D58;
    iVar1 = *(int *)param_1[2];
    __call_via_r1((int *)param_1[2],*(int *)(iVar1 + 0xc) + iVar1);
    sub_0801F110(param_1);
  }
  return;
}

