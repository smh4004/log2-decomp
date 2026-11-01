/* sub_080119F4  (original: 0x080119F4-0x08011A52 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007974();
extern int sub_080068B8();
extern int sub_0800FA1C();
extern int sub_0800700E();
extern undefined volatile DAT_03001120;


void sub_080119F4(int param_1)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
#define local_10 (*(int *)((char *)__frame + 0x14))
  sub_08007974(&local_1c);
  sub_0800700E(&DAT_03001120,0x400);
  local_24 = (local_1c + local_14 >> 1) + *(int *)(param_1 + 8);
  local_20 = (local_18 + local_10 >> 1) + *(int *)(param_1 + 0xc);
  uVar1 = sub_0800FA1C(0,&local_24,0x27);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

