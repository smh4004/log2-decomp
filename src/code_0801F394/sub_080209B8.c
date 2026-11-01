/* sub_080209B8  (original: 0x080209B8-0x08020A22 in asm/code_0801F394.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 16% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FA72();
extern int sub_0802090C();


void sub_080209B8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    while (uVar1 = (uint)*(ushort *)(param_1 + 8), (int)uVar1 < param_3) {
      if (uVar1 != 0) {
        iVar2 = 0;
        do {
          sub_0801FA72(iVar2 * 0x60 + param_1 + 0x18,param_2,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        param_2 = (uint)*(ushort *)(param_1 + 8) * 4 + param_2;
        param_3 = param_3 - (uint)*(ushort *)(param_1 + 8);
      }
      sub_0802090C(param_1);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
    }
    iVar2 = 0;
    do {
      sub_0801FA72(iVar2 * 0x60 + param_1 + 0x18,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_3;
  }
  return;
}

