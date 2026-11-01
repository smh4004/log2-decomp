/* sub_08011DAC  (original: 0x08011DAC-0x08011E1C in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802141C();
extern int sub_0800638C();
extern undefined volatile DAT_03001090;
extern undefined volatile gUnknown_086D7E6C;


undefined4 sub_08011DAC(undefined4 param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  iVar1 = sub_0802141C(0x40);
  if (iVar1 < 4) {
    *(char *)(param_2 + 0x10) = (char)iVar1;
  }
  iVar1 = sub_0802141C(3);
  local_14 = *(int *)(param_2 + 0x158) +
             *(int *)(&gUnknown_086D7E6C + iVar1 * 8 + (uint)*(byte *)(param_2 + 0x10) * 0x18);
  local_10 = *(int *)(param_2 + 0x15c) +
             *(int *)((int)(&gUnknown_086D7E6C + iVar1 * 8 + (uint)*(byte *)(param_2 + 0x10) * 0x18)
                     + 4);
  iVar1 = sub_0800638C(&DAT_03001090,&local_14,param_2 + 0x154);
  if (iVar1 == 0) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) ^ 1;
  }
  else {
    *(int *)(param_2 + 0x158) = local_14;
    *(int *)(param_2 + 0x15c) = local_10;
  }
  return 0;
}

