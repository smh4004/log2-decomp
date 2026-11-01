/* sub_0800FFE6  (original: 0x0800FFE6-0x08010038 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800B4FC();
extern int sub_0800B4AE();
extern int sub_0801F2F4();
extern undefined volatile _08023E88;


void sub_0800FFE6(int param_1)

{
  undefined4 *puVar1;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_40 (*(undefined4 *)((char *)__frame + 0x0))
#define local_3c (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_38 ((undefined1 *)((char *)__frame + 0x8))
#define local_1c (*(undefined4 *)((char *)__frame + 0x24))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x28))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x2c))
#define local_10 (*(undefined4 *)((char *)__frame + 0x30))
#define local_c ((undefined2 *)((char *)__frame + 0x34))
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  sub_0800B4AE(auStack_38,*(undefined4 *)(param_1 + 0x14),local_c,&local_40,&local_1c);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_38;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_38,0);
  return;
}

