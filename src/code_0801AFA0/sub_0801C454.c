/* sub_0801C454  (original: 0x0801C454-0x0801C46A in asm/code_0801AFA0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile gUnknown_086D5194;


void sub_0801C454(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(*(undefined4 **)(&gUnknown_086D5194 + *(int *)(*(int *)(param_1 + param_2) + 8) * 8)
                ,param_2,**(undefined4 **)
                           (&gUnknown_086D5194 + *(int *)(*(int *)(param_1 + param_2) + 8) * 8),
                param_4,param_4);
  return;
}

