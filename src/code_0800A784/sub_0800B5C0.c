/* sub_0800B5C0  (original: 0x0800B5C0-0x0800B632 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080063E0();
extern int sub_0800793A();
extern int sub_0800D668();
extern int sub_0801F08C();
extern undefined4 volatile DAT_030010fc;
extern undefined4 volatile DAT_03001104;
extern undefined volatile _080255CC;


undefined4 *
sub_0800B5C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_34 ((undefined1 *)((char *)__frame + 0x0))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x10))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x14))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x18))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x1c))
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x184), param_1 != (undefined4 *)0x0)) {
    sub_0800D668(param_1,uStack_20,param_4,param_5);
    *param_1 = &_080255CC;
    *(undefined2 *)(param_1 + 0x5b) = 0;
    param_1[0x60] = param_3;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    sub_0800793A(auStack_34,param_1);
    sub_080063E0(auStack_34,DAT_030010fc,0);
    sub_080063E0(auStack_34,DAT_03001104,0);
  }
  return param_1;
}

