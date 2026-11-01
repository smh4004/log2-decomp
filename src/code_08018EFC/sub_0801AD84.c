/* sub_0801AD84  (original: 0x0801AD84-0x0801ADFE in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08026414();
extern int sub_0800793A();
extern int volatile DAT_03001fa8;


void sub_0801AD84(int param_1,undefined4 param_2)

{
  int *piVar1;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_4c ((undefined1 *)((char *)__frame + 0x0))
#define local_3c (*(int *)((char *)__frame + 0x10))
#define local_38 (*(int *)((char *)__frame + 0x14))
#define auStack_34 ((undefined1 *)((char *)__frame + 0x18))
#define local_24 (*(int *)((char *)__frame + 0x28))
#define local_20 (*(int *)((char *)__frame + 0x2c))
#define local_1c (*(int *)((char *)__frame + 0x30))
#define local_18 (*(int *)((char *)__frame + 0x34))
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_03001fa8 != 0) {
    sub_0800793A(auStack_4c);
    sub_08026414(&local_3c,auStack_4c);
    sub_0800793A(auStack_34,param_2);
    sub_08026414(&local_24,auStack_34);
    local_1c = local_3c - local_24;
    local_18 = local_38 - local_20;
    if (local_1c * local_1c + local_18 * local_18 <= *(int *)(param_1 + 4)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = *(int **)(param_1 + 0xc);
  }
  __call_via_r2(piVar1,param_2,*(int *)*piVar1 + *piVar1);
  return;
}

