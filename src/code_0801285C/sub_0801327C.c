/* sub_0801327C  (original: 0x0801327C-0x080132F2 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801FC9C();
extern int sub_08006DA6();
extern int sub_080068B8();
extern int __call_via_r2();
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_086DB344;
extern undefined volatile _08025808;
extern undefined volatile gUnknown_080E1790;


void sub_0801327C(int param_1,int *param_2)

{
  undefined4 *puVar1;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_3c ((undefined1 *)((char *)__frame + 0x0))
#define local_38 (*(undefined4 *)((char *)__frame + 0x4))
#define local_34 (*(undefined4 *)((char *)__frame + 0x8))
#define local_30 (*(undefined4 *)((char *)__frame + 0xc))
#define local_2c (*(undefined4 *)((char *)__frame + 0x10))
#define local_28 (*(undefined1 *)((char *)__frame + 0x14))
#define local_24 (*(undefined4 *)((char *)__frame + 0x18))
#define local_20 (*(undefined * *)((char *)__frame + 0x1c))
#define local_1c (*(int * *)((char *)__frame + 0x20))
#define local_c (*(int * *)((char *)__frame + 0x30))
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -6;
  __call_via_r2(param_2,5,*(int *)(*param_2 + 0x28) + *param_2);
  local_28 = (undefined1)param_2[4];
  local_3c[0] = 1;
  local_20 = &gUnknown_086DB344;
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x800;
  local_2c = 0x800;
  local_1c = param_2;
  local_c = param_2;
  sub_08006DA6(&DAT_03001120,0,local_3c);
  puVar1 = (undefined4 *)sub_0801F08C(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08025808;
    puVar1[3] = 0x20;
  }
  sub_080068B8(&DAT_03001120,puVar1);
  sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1790,0x40,0);
  return;
}

