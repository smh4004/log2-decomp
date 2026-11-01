/* sub_0800CB80  (original: 0x0800CB80-0x0800CCE6 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800793A();
extern int sub_0800791A();
extern int sub_0802142E();
extern int sub_0802141C();
extern int __call_via_r2();


undefined4 sub_0800CB80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_1 + 6;
  piVar4 = param_1 + 7;
  if (param_1[2] == 0) {
    iVar2 = sub_0802142E(param_1[4]);
    if (iVar2 != 0) {
      sub_0800793A(param_1 + 10,param_2);
      iVar2 = sub_0802141C(5);
      if (iVar2 < 4) {
        *(char *)(param_2 + 0x10) = (char)iVar2;
      }
      sub_0800791A(param_1 + 8,param_2);
      cVar1 = *(char *)(param_2 + 0x10);
      if (cVar1 == '\0') {
        *piVar5 = 0;
        *piVar4 = param_1[5];
        param_1[9] = param_1[9] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10];
        param_1[0xf] = param_1[0xd];
        param_1[0x11] = param_1[0xd] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0x10] = param_1[0xc];
      }
      else if (cVar1 == '\x01') {
        *piVar5 = 0;
        *piVar4 = -param_1[5];
        param_1[9] = param_1[9] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10];
        param_1[0xf] = param_1[0xb] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0x10] = param_1[0xc];
        param_1[0x11] = param_1[0xb];
      }
      else if (cVar1 == '\x02') {
        *piVar5 = -param_1[5];
        *piVar4 = 0;
        param_1[8] = param_1[8] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[10] - (uint)*(byte *)((int)param_1 + 5);
        param_1[0xf] = param_1[0xb];
        param_1[0x10] = param_1[10];
        param_1[0x11] = param_1[0xd];
      }
      else if (cVar1 == '\x03') {
        *piVar5 = param_1[5];
        *piVar4 = 0;
        param_1[8] = param_1[8] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xe] = param_1[0xc];
        param_1[0x10] = param_1[0xc] + (uint)*(byte *)((int)param_1 + 5);
        param_1[0xf] = param_1[0xb];
        param_1[0x11] = param_1[0xd];
      }
      iVar2 = __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x10) + *param_1);
      if (iVar2 != 0) {
        param_1[2] = param_1[3];
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x10);
        __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
      }
    }
    if (param_1[2] == 0) {
      return 0;
    }
  }
  piVar3 = (int *)(param_2 + 0x158);
  *piVar3 = *piVar3 + *piVar5;
  *(int *)(param_2 + 0x15c) = *(int *)(param_2 + 0x15c) + *piVar4;
  *(char *)(param_2 + 0x10) = (char)param_1[1];
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    iVar2 = param_1[9];
    *piVar3 = param_1[8] << 8;
    *(int *)(param_2 + 0x15c) = iVar2 << 8;
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x14) + *param_1);
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  else {
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
  }
  return 0;
}

