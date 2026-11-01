/* sub_0801DB80  (original: 0x0801DB80-0x0801DB9E in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern int volatile DAT_03001fa8;
extern undefined4 volatile DAT_0300227c;
extern undefined4 volatile DAT_03002280;


void sub_0801DB80(undefined4 param_1,undefined4 param_2)

{
  if (DAT_03001fa8 != 0) {
    sub_0800763C(DAT_03001fa8,&DAT_0300227c);
  }
  sub_0800763C(param_2,&DAT_03002280);
  return;
}

