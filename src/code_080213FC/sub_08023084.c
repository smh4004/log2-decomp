/* sub_08023084  (original: 0x08023084-0x080230B8 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300209c;
extern undefined volatile _08025188;
extern undefined1 volatile DAT_030020a0;
extern undefined * volatile DAT_030020a4;
extern undefined1 volatile DAT_030020a8;
extern undefined * volatile DAT_030020ac;
extern undefined1 volatile DAT_030020b0;
extern undefined * volatile DAT_030020b4;
extern undefined1 volatile DAT_030020b8;


void sub_08023084(void)

{
  DAT_0300209c = &_08025188;
  DAT_030020a0 = 1;
  DAT_030020a4 = &_08025188;
  DAT_030020a8 = 0;
  DAT_030020ac = &_08025188;
  DAT_030020b0 = 2;
  DAT_030020b4 = &_08025188;
  DAT_030020b8 = 3;
  return;
}

