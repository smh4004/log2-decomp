/* sub_0801AD34  (original: 0x0801AD34-0x0801AD62 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _0802413C;


void sub_0801AD34(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0802413C;
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

