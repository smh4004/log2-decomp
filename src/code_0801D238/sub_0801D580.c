/* sub_0801D580  (original: 0x0801D580-0x0801D5AE in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08025014;


void sub_0801D580(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_08025014;
  iVar1 = *(int *)param_1[2];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[2],iVar2 + iVar1,iVar2,param_4,param_4);
  iVar1 = *(int *)param_1[3];
  __call_via_r1((int *)param_1[3],*(int *)(iVar1 + 0xc) + iVar1);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

