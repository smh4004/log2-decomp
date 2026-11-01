/* sub_08011D0C  (original: 0x08011D0C-0x08011D38 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006E0A();
extern int sub_080079B8();
extern undefined volatile DAT_03001120;


bool sub_08011D0C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define auStack_18 ((undefined1 *)((char *)__frame + 0x4))
  local_1c = param_2;
  sub_080079B8(auStack_18);
  iVar1 = sub_08006E0A(&DAT_03001120,0x11,&local_1c);
  return iVar1 != 0;
}

