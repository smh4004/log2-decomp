/* sub_0800F034  (original: 0x0800F034-0x0800F060 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006E0A();
extern int sub_08006942();
extern int sub_0800EEA8();
extern undefined volatile DAT_03001120;


undefined4 sub_0800F034(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = sub_08006E0A(&DAT_03001120,6,*(undefined1 *)(param_1 + 4));
  uVar2 = sub_0800EEA8(0,param_1,uVar1);
  sub_08006942(&DAT_03001120,uVar1,uVar2);
  return uVar2;
}

