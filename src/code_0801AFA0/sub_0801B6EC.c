/* sub_0801B6EC  (original: 0x0801B6EC-0x0801B722 in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801F110();
extern undefined volatile _08025024;


void sub_0801B6EC(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_08025024;
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = *(int *)param_1[iVar2 + 2];
      __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

