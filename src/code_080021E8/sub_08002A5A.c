/* sub_08002A5A  (original: 0x08002A5A-0x08002B30 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 38% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08002DDA();
extern int sub_0800233E();
extern int sub_08002E28();
extern int sub_080022FA();
extern int __call_via_r2();
extern int __call_via_r3();


undefined4 sub_08002A5A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 0x68) + *param_1,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  piVar3 = param_1 + 0x4f;
  piVar2 = param_1 + 2;
  if ((char)param_1[2] == '\0') {
    iVar1 = sub_08002E28(param_1 + 0x49,piVar2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = sub_08002E28(piVar3,piVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = sub_08002DDA(param_1 + 0x49,piVar2);
    if (iVar1 != 0) {
      __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1);
      param_1[0x48] = param_1[0x48] + -1;
      sub_080022FA(param_1);
      sub_0800233E(param_1);
      __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x38) + *param_1);
      return 1;
    }
    iVar1 = sub_08002DDA(piVar3,piVar2);
    if (iVar1 != 0) {
      __call_via_r3(param_1,param_2,param_1[0x48],*(int *)(*param_1 + 100) + *param_1);
      param_1[0x48] = param_1[0x48] + 1;
      sub_080022FA(param_1);
      sub_0800233E(param_1);
      __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x38) + *param_1);
      return 1;
    }
  }
  return 0;
}

