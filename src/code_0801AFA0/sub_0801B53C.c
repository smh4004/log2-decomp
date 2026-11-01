/* sub_0801B53C  (original: 0x0801B53C-0x0801B572 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _080247EC;


void sub_0801B53C(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_080247EC;
  iVar2 = 0;
  if (0 < (int)param_1[2]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 3];
      __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

