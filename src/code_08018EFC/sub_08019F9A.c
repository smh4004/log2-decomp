/* sub_08019F9A  (original: 0x08019F9A-0x08019FB0 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800763C();
extern undefined * volatile gUnknown_086FDFAC;


void sub_08019F9A(int param_1,int param_2)

{
  sub_0800763C(param_1,(&gUnknown_086FDFAC)[param_2]);
  *(undefined1 *)(param_1 + 8) = 0x18;
  return;
}

