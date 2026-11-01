/* sub_0800CA9C  (original: 0x0800CA9C-0x0800CAC4 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801A4FC();
extern int sub_080068CA();
extern int sub_080068B8();
extern int volatile DAT_030010e0;
extern undefined volatile DAT_03001120;


void sub_0800CA9C(undefined4 param_1)

{
  undefined4 uVar1;
  
  sub_080068CA(&DAT_03001120,param_1);
  if (*(int *)(DAT_030010e0 + 0x3c) != 0) {
    uVar1 = sub_0801A4FC(0);
    sub_080068B8(&DAT_03001120,uVar1);
  }
  return;
}

