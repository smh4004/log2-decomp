/* sub_08006F4A  (original: 0x08006F4A-0x08006FA4 in asm/code_08006460.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 11/11 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006ED0();
extern int sub_08021EA8();
extern int sub_08006C24();
extern int sub_08006DA6();
extern int sub_0801FD78();
extern int sub_0801F08C();
extern undefined volatile DAT_03002c80;


void sub_08006F4A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08006DA6(param_1,8,0,param_4,param_4);
  sub_08006ED0(param_1);
  uVar1 = sub_0801FD78(&DAT_03002c80);
  *(undefined4 *)(param_1 + 0xbfc) = uVar1;
  iVar2 = sub_0801F08C(0xe00);
  if (iVar2 != 0) {
    sub_08021EA8(iVar2,param_1,0xe00);
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  sub_08006C24(param_1);
  return;
}

