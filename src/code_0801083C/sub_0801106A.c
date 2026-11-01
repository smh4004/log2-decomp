/* sub_0801106A  (original: 0x0801106A-0x0801109E in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006FA4();
extern int __call_via_r2();
extern undefined volatile DAT_03001120;


void sub_0801106A(int *param_1)

{
  int iVar1;
  
  sub_08006FA4(&DAT_03001120);
  if ((char)param_1[0x12] != '\0') {
    iVar1 = *(int *)param_1[0x13];
    __call_via_r2((int *)param_1[0x13],0,*(int *)(iVar1 + 0x28) + iVar1);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

