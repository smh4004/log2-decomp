/* sub_0800D668  (original: 0x0800D668-0x0800D6A6 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 78% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800D138();
extern int sub_080078E4();
extern undefined4 volatile DAT_03001f34;
extern undefined volatile _080257D0;


undefined4 *
sub_0800D668(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x16c), param_1 != (undefined4 *)0x0)) {
    sub_080078E4(param_1,param_2,&DAT_03001f34,param_4,uVar1);
    *param_1 = &_080257D0;
    sub_0800D138(param_1 + 0x58,param_3);
  }
  return param_1;
}

