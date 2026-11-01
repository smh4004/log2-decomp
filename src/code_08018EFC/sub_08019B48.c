/* sub_08019B48  (original: 0x08019B48-0x08019B70 in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 72% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_080075F8();
extern undefined volatile _0802593C;


void sub_08019B48(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &_0802593C;
  piVar1 = (int *)param_1[0x54];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_080075F8(param_1,0);
  return;
}

