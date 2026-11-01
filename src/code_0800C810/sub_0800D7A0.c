/* sub_0800D7A0  (original: 0x0800D7A0-0x0800D7E0 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0800B4AE();
extern int sub_0801F2F4();
extern int sub_0801F08C();
extern int sub_0800B4FC();
extern undefined volatile _08023E88;
extern undefined volatile gUnknown_083ED29C;


undefined4 sub_0800D7A0(int param_1,int param_2)

{
  undefined4 *puVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_28 ((undefined1 *)((char *)__frame + 0x0))
  sub_0800B4AE(auStack_28,*(undefined4 *)(param_1 + 0x14),param_1 + 0x10,&gUnknown_083ED29C,
               param_2 + 400);
  puVar1 = (undefined4 *)sub_0801F08C(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08023E88;
    puVar1[1] = auStack_28;
  }
  sub_0801F2F4(puVar1);
  sub_0800B4FC(auStack_28,0);
  return 1;
}

