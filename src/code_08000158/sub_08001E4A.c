/* sub_08001E4A  (original: 0x08001E4A-0x08001EC0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0801FD56();
extern int sub_08021526();
extern int sub_08020AC8();
extern int sub_0802153E();
extern undefined volatile DAT_030026c8;
extern undefined volatile DAT_03002c80;
extern undefined volatile DAT_0300389c;


void sub_08001E4A(byte *param_1)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(byte *)((char *)__frame + 0x0))
#define local_1b (*(byte *)((char *)__frame + 0x1))
#define local_1a (*(byte *)((char *)__frame + 0x2))
#define local_19 (*(byte *)((char *)__frame + 0x3))
#define local_18 (*(int *)((char *)__frame + 0x4))
  sub_08021526(&DAT_0300389c,&local_1c,0,8);
  iVar1 = sub_0802153E(&local_1c);
  if ((((iVar1 + 0x12345678 == local_18) && (local_1c < 9)) && (local_1a < 9)) && (local_1b < 9)) {
    *param_1 = local_1c;
    param_1[1] = local_1b;
    param_1[2] = local_1a;
    param_1[3] = local_19;
  }
  else {
    *param_1 = 4;
    param_1[2] = 4;
    param_1[1] = 6;
    param_1[3] = 0;
  }
  sub_08020AC8(&DAT_030026c8,param_1[2]);
  sub_0801FD56(&DAT_03002c80,param_1[1]);
  return;
}

