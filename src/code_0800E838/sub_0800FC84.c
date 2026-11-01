/* sub_0800FC84  (original: 0x0800FC84-0x0800FCCC in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 1/1 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F394();
extern int sub_08020EAA();
extern int sub_080236CC();
extern int sub_08020E5C();


void sub_0800FC84(int param_1)

{
  unsigned int __frame[21];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_54 ((undefined1 *)((char *)__frame + 0x0))
#define local_30 (*(undefined4 *)((char *)__frame + 0x24))
#define local_1c (*(undefined4 *)((char *)__frame + 0x38))
#define local_18 (*(undefined4 *)((char *)__frame + 0x3c))
#define local_14 (*(undefined4 *)((char *)__frame + 0x40))
#define local_10 (*(undefined4 *)((char *)__frame + 0x44))
  sub_08020E5C(auStack_54,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
  sub_0801F394(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),local_30);
  local_1c = 0;
  local_18 = 0;
  local_14 = **(undefined4 **)(param_1 + 0x14);
  local_10 = (*(undefined4 **)(param_1 + 0x14))[1];
  sub_080236CC((int)auStack_54,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010000,(int)&local_1c);
  sub_08020EAA(auStack_54,0);
  return;
}

