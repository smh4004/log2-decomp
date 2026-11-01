/* sub_0800E5B8  (original: 0x0800E5B8-0x0800E72A in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007974();
extern int __call_via_r1();
extern int sub_08007B08();
extern int sub_080190D4();
extern int sub_0800F910();
extern int sub_0801AB2A();
extern int sub_080079B8();
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;


undefined4 sub_0800E5B8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_24 (*(int *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
  if (param_2 == 0) {
    if (((((char)*param_3 == '\x01') || ((char)*param_3 == '\x02')) && (param_1[0x5a] != 0)) &&
       (((sub_080079B8(&iStack_24,param_1), param_3[1] < iStack_1c && (iStack_24 < param_3[3])) &&
        ((param_3[2] < iStack_18 && (iStack_20 < param_3[4])))))) {
      sub_0800F910(param_1);
      sub_0801AB2A(param_1 + 0x67,param_3 + 5);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (param_2 == 2) {
      if (((((char)*param_3 == '\x01') || ((char)*param_3 == '\x02')) &&
          ((param_1[0x5a] != 0 &&
           (((sub_080079B8(&iStack_24,param_1), param_3[1] < iStack_1c && (iStack_24 < param_3[3]))
            && (param_3[2] < iStack_18)))))) && (iStack_20 < param_3[4])) {
        if (*(char *)param_3[7] != '\0') {
          if ((char)param_1[0x59] != '\0') {
            return 1;
          }
          return 0;
        }
        if (*(char *)((int)param_1 + 0x163) != '\0') {
          return 1;
        }
        return 0;
      }
    }
    else if (param_2 == 0x14) {
      iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sub_080190D4(param_1[0x60]);
      if (iVar1 != -1) {
        iVar3 = *param_3;
        *param_3 = iVar3 + 1;
        param_3[iVar3 * 7 + 1] = iVar1;
        param_3[iVar3 * 7 + 2] = (uint)*(byte *)(param_1 + 4);
        sub_08007974(&iStack_24,param_1);
        iStack_20 = iStack_20 - DAT_030010b0;
        iStack_1c = iStack_1c - DAT_030010ac;
        iStack_18 = iStack_18 - DAT_030010b0;
        param_3[iVar3 * 7 + 3] = iStack_24 - DAT_030010ac;
        param_3[iVar3 * 7 + 4] = iStack_20;
        param_3[iVar3 * 7 + 5] = iStack_1c;
        param_3[iVar3 * 7 + 6] = iStack_18;
        return 0;
      }
      return 0;
    }
    uVar2 = sub_08007B08(param_1,param_2,param_3);
  }
  return uVar2;
}

