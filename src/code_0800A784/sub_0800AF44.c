/* sub_0800AF44  (original: 0x0800AF44-0x0800AF72 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0801F46A();
extern int sub_08001F04();
extern int sub_0801F2F4();
extern undefined4 volatile REG_DMA3SAD;
extern undefined volatile _08023EB8;


void sub_0800AF44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0801F08C(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    sub_08001F04(puVar1,1);
    *puVar1 = &_08023EB8;
  }
  sub_0801F2F4(puVar1);
  sub_0801F46A(&REG_DMA3SAD,0x6000000,0);
  return;
}

