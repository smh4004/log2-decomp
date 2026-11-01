/* sub_080106B2  (original: 0x080106B2-0x080106F8 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800B4FC();
extern int sub_0800B4AE();
extern int sub_0801F2F4();
extern undefined volatile _08023E88;
extern undefined volatile gUnknown_086D66B4;


void sub_080106B2(int param_1)

{
  undefined4 *puVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_28 ((undefined1 *)((char *)__frame + 0x0))
#define local_c ((undefined2 *)((char *)__frame + 0x1c))
  local_c[0] = 0;
  sub_0800B4AE(auStack_28,*(undefined4 *)(param_1 + 4),local_c,&gUnknown_086D66B4,0);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_28;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_28,0);
  return;
}

