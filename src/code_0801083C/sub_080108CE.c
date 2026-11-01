/* sub_080108CE  (original: 0x080108CE-0x0801090A in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 8/8 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0801F110();
extern undefined volatile _08024DF8;
extern undefined volatile _08023DB8;


void sub_080108CE(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_08024DF8;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 4);
    __call_via_r1(piVar1,iVar2 + *piVar1,iVar2,param_4,param_4);
  }
  *param_1 = &_08023DB8;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

