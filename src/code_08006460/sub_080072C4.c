/* sub_080072C4  (original: 0x080072C4-0x080072FC in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 13/13 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F412();
extern int sub_0801F110();
extern int sub_0801F08C();
extern int sub_0801F394();
extern undefined4 volatile REG_DMA3SAD;


void sub_080072C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_0801F08C(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4));
  sub_0801F394(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c),uVar1);
  sub_0801F412(&REG_DMA3SAD,(uint)*(ushort *)(param_1 + 0xe) * 0x20 + 0x6010000,uVar1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) + 4),param_4);
  sub_0801F110(uVar1);
  return;
}

