/* sub_08014CB6  (original: 0x08014CB6-0x08014D44 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0802805C();


undefined4 sub_08014CB6(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_18 (*(int *)((char *)__frame + 0x0))
#define iStack_14 (*(int *)((char *)__frame + 0x4))
#define iStack_10 (*(int *)((char *)__frame + 0x8))
#define iStack_c (*(int *)((char *)__frame + 0xc))
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0xe] ^ 1U)) {
      iStack_10 = param_1[7] + param_1[0xd] * param_1[0xb];
      iStack_14 = param_1[8] + param_1[0xd] * param_1[0xc];
      iStack_c = iStack_14 + 0xc;
      iStack_14 = iStack_14 + -0xc;
      iStack_18 = iStack_10 + -0xc;
      iStack_10 = iStack_10 + 0xc;
      iVar2 = sub_0802805C(param_3 + 4,&iStack_18);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 9) {
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

