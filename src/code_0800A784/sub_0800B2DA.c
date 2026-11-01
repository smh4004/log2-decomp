/* sub_0800B2DA  (original: 0x0800B2DA-0x0800B304 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 55% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int __call_via_r1();
extern int sub_0800712E();
extern undefined volatile DAT_03001120;


undefined4 sub_0800B2DA(int param_1)

{
  int iVar1;
  
  iVar1 = __call_via_r1(*(int *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 4) + 0xb4));
  if (iVar1 != 0) {
    sub_080068CA(&DAT_03001120,*(undefined4 *)(param_1 + 4));
    sub_0800712E(&DAT_03001120);
    return 1;
  }
  return 0;
}

