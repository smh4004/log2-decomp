/* sub_08011E44  (original: 0x08011E44-0x08011EA6 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800791A();


void sub_08011E44(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  sub_0800791A(&local_14);
  local_14 = *(int *)(param_1 + 8) - local_14;
  local_10 = *(int *)(param_1 + 0xc) - local_10;
  iVar1 = local_14;
  if (local_14 < 0) {
    iVar1 = -local_14;
  }
  iVar2 = local_10;
  if (local_10 < 0) {
    iVar2 = -local_10;
  }
  if (iVar2 < iVar1) {
    if (local_14 < 1) {
      *(undefined1 *)(param_2 + 4) = 2;
    }
    else {
      *(undefined1 *)(param_2 + 4) = 3;
    }
  }
  else if (local_10 < 1) {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  __call_via_r2(param_2,5,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}

