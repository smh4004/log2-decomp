/* sub_080155E4  (original: 0x080155E4-0x080155F6 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011D4A();
extern int volatile DAT_03000e98;


void sub_080155E4(void)

{
  DAT_03000e98 = DAT_03000e98 + 8;
  sub_08011D4A();
  return;
}

