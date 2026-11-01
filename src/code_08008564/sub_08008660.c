/* sub_08008660  (original: 0x08008660-0x080086A2 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800B4FC();
extern int sub_0801F2F4();
extern int sub_0800B4AE();
extern undefined volatile gUnknown_083B6564;
extern undefined volatile _08023E88;


void sub_08008660(void)

{
  undefined4 *puVar1;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_30 (*(undefined4 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_28 ((undefined1 *)((char *)__frame + 0x8))
#define local_c ((undefined2 *)((char *)__frame + 0x24))
  local_c[0] = 0;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  sub_0800B4AE(auStack_28,&gUnknown_083B6564,local_c,&local_30,0);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_28;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_28,0);
  return;
}

