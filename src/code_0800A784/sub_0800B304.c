/* sub_0800B304  (original: 0x0800B304-0x0800B33E in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800B1E2();
extern int sub_080236A8();
extern undefined volatile _080256EC;


undefined4 * sub_0800B304(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int a2;
  int iVar1;
  
  a2 = param_3;
  iVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x808), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_080256EC;
    sub_080236A8((int)(param_1 + 2),param_2 + 4,a2,param_4);
    sub_0800B1E2(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),param_3,iVar1);
  }
  return param_1;
}

