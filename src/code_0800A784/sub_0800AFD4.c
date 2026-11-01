/* sub_0800AFD4  (original: 0x0800AFD4-0x0800AFE8 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068B8();
extern int sub_0801C4B0();
extern undefined volatile DAT_03001120;


void sub_0800AFD4(void)

{
  undefined4 uVar1;
  
  uVar1 = sub_0801C4B0(0);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

