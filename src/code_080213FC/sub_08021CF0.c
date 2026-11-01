/* sub_08021CF0  (original: 0x08021CF0-0x08021D28 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08022A44();
extern int sub_08022118();


undefined4 sub_08021CF0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x1c))
#define local_28 (*(undefined4 *)((char *)__frame + 0x20))
#define local_14 ((undefined4 *)((char *)__frame + 0x34))
  local_2c = 0x8022a45;
  local_28 = 0x8022a53;
  local_14[0] = param_1;
  uVar1 = sub_08022118(local_14,param_2,param_3,auStack_48);
  sub_08022A44(0,local_14);
  return uVar1;
}

