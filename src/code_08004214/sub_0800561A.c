/* sub_0800561A  (original: 0x0800561A-0x080056A0 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0800532E();
extern int sub_080054A4();
extern undefined2 volatile REG_BG0HOFS;
extern undefined2 volatile REG_BG0VOFS;


void sub_0800561A(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(int *)((char *)__frame + 0x8))
#define local_14 (*(int *)((char *)__frame + 0xc))
#define local_10 (*(int *)((char *)__frame + 0x10))
#define local_c (*(int *)((char *)__frame + 0x14))
  local_10 = *(int *)(param_2 + 0xc) * *(int *)(*(int *)(param_1 + 8) + 4) +
             *(int *)(*(int *)(param_1 + 8) + 0xc) + *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(param_1 + 8);
  local_c = *(int *)(param_2 + 0x10) * *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10) +
            *(int *)(param_2 + 0x28);
  local_18 = (local_10 >> 10) + -8;
  local_14 = (local_c >> 10) + -0x30;
  local_20 = local_18 >> 8;
  local_1c = local_14 >> 8;
  if ((local_20 != *(int *)(param_1 + 0x20)) || (local_1c != *(int *)(param_1 + 0x24))) {
    sub_0800532E(param_1,&local_20,*(int *)(iVar2 + 0x10),iVar2,local_20,local_1c);
  }
  sub_080054A4(param_1,&local_18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)(local_10 >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(local_c >> 10);
  return;
}

