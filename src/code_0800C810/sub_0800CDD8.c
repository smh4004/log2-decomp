/* sub_0800CDD8  (original: 0x0800CDD8-0x0800CE60 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_080088E0();
extern int sub_08005D6C();
extern int volatile DAT_03001fa8;
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;


int sub_0800CDD8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  if ((((DAT_03001fa8 == 0) || (sub_080088E0(&local_24), *(int *)(param_1 + 0x40) <= local_24)) ||
      (local_1c <= *(int *)(param_1 + 0x38))) ||
     ((*(int *)(param_1 + 0x44) <= local_20 || (local_18 <= *(int *)(param_1 + 0x3c))))) {
    iVar3 = param_1 + 0x28;
    sub_080063E0(iVar3,DAT_030010fc,1);
    sub_080063E0(iVar3,DAT_03001104,1);
    iVar1 = sub_08005D6C(param_1 + 0x38,DAT_030010fc);
    iVar2 = param_1 + 0x38;
    if (iVar1 == 0) {
      iVar2 = iVar3;
    }
    sub_080063E0(iVar2,DAT_030010fc,0);
    sub_080063E0(iVar2,DAT_03001104,0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

