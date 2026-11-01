/* sub_0801B9C4  (original: 0x0801B9C4-0x0801B9E6 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08023D58;


void sub_0801B9C4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_08023D58;
  iVar1 = *(int *)param_1[2];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[2],iVar2 + iVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

