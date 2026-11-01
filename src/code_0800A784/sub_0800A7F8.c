/* sub_0800A7F8  (original: 0x0800A7F8-0x0800A850 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;


void sub_0800A7F8(int *param_1)

{
  int iVar1;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
#define local_10 (*(int *)((char *)__frame + 0x8))
#define local_c (*(int *)((char *)__frame + 0xc))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_18 = param_1[iVar1];
  sub_080063E0(&local_18,DAT_030010fc,0);
  sub_080063E0(&local_18,DAT_03001104,0);
  return;
}

