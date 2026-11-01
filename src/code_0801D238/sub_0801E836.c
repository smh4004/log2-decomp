/* sub_0801E836  (original: 0x0801E836-0x0801E880 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800791A();
extern int sub_08014478();
extern int sub_0801CB24();


void sub_0801E836(int param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
  sub_0801CB24();
  if (*(short *)(param_2 + 0x12) == 8) {
    sub_0800791A(&local_1c,param_2);
    iVar1 = *(int *)(param_1 + 0xc) + (uint)*(byte *)(param_2 + 0x10) * 8;
    local_14 = local_1c + *(int *)(iVar1 + 0x2c);
    local_10 = local_18 + *(int *)(iVar1 + 0x30);
    sub_08014478(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_2 + 0x10),&local_14);
  }
  return;
}

