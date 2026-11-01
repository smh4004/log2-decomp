/* sub_08026294  (original: 0x08026294-0x080262CC in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _080247EC;


void sub_08026294(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_080247EC;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0801F110(param_1);
  }
  return;
}

