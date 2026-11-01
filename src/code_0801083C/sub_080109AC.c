/* sub_080109AC  (original: 0x080109AC-0x080109C4 in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_03001fd0;
extern undefined4 volatile DAT_03001fd4;


void sub_080109AC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03001fd0 = *(undefined4 *)(param_1 + 8);
  DAT_03001fd4 = *(undefined4 *)(param_1 + 0xc);
  __call_via_r1(*(undefined4 **)(param_1 + 0x10),**(undefined4 **)(param_1 + 0x10),DAT_03001fd0,
                DAT_03001fd4,param_4);
  return;
}

