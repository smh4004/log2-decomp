/* sub_08001E06  (original: 0x08001E06-0x08001E3C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 72% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801FD56();
extern int sub_08020AC8();
extern undefined volatile DAT_030026c8;
extern undefined volatile DAT_03002c80;


void sub_08001E06(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_3;
  if (param_2 == 0) {
    *param_1 = uVar1;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1[2] = uVar1;
      sub_08020AC8(&DAT_030026c8);
    }
    return;
  }
  param_1[1] = uVar1;
  sub_0801FD56(&DAT_03002c80,param_3);
  return;
}

