/* sub_0800E484  (original: 0x0800E484-0x0800E4D2 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F832();
extern int __call_via_r2();
extern int sub_08006DA6();
extern undefined volatile DAT_03001120;


undefined4 sub_0800E484(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x188) == 0) {
    return 1;
  }
  sub_0800F832(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x188) - *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x188) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    sub_08006DA6(&DAT_03001120,0xf,param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x180) + 0x14);
    __call_via_r2(iVar1,param_1,*(undefined4 *)(iVar1 + 8));
    return 1;
  }
  return 0;
}

