/* sub_08002E28  (original: 0x08002E28-0x08002E70 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 32% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801FC9C();
extern ushort volatile DAT_030022b0;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E1694;


undefined4 sub_08002E28(int *param_1,undefined1 *param_2)

{
  if (((uint)DAT_030022b0 & *(uint *)(param_1[4] + 0xc)) == 0) {
    return 0;
  }
  if ((char)param_1[2] == '\x02') {
    sub_0801FC9C(&DAT_03002c80,&gUnknown_080E1694,0x40,0);
    return 1;
  }
  *param_2 = *(undefined1 *)((int)param_1 + 9);
  *(undefined1 *)(param_1 + 2) = 1;
  __call_via_r1(param_1,*(int *)*param_1 + *param_1);
  return 1;
}

