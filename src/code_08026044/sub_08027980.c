/* sub_08027980  (original: 0x08027980-0x080279AE in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08019B48();
extern int sub_0801F110();


void sub_08027980(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x160);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 4);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  sub_08019B48(param_1,0);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

