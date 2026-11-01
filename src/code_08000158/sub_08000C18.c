/* sub_08000C18  (original: 0x08000C18-0x08000C9A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 35% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080213FC();
extern int __call_via_r2();
extern int __call_via_r1();


undefined4 sub_08000C18(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  sub_080213FC();
  cVar2 = *(char *)((int)param_1 + 5);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(*param_1 + 0x1c);
    cVar2 = (char)param_1[1] + '\x01';
    *(char *)(param_1 + 1) = cVar2;
    __call_via_r2(param_1,cVar2,iVar3 + *param_1);
    if (0x1f < *(byte *)(param_1 + 1)) {
      *(undefined1 *)((int)param_1 + 5) = 1;
      uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x20) + *param_1);
      return uVar1;
    }
  }
  else {
    if (cVar2 == '\x01') {
      uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
      return uVar1;
    }
    if (cVar2 == '\x02') {
      iVar3 = *(int *)(*param_1 + 0x28);
      cVar2 = (char)param_1[1] + -1;
      *(char *)(param_1 + 1) = cVar2;
      __call_via_r2(param_1,cVar2,iVar3 + *param_1);
      if ((char)param_1[1] == '\0') {
        *(undefined1 *)((int)param_1 + 5) = 0;
        uVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
        return uVar1;
      }
    }
  }
  return 0;
}

