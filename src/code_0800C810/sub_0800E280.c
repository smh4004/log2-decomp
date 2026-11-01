/* sub_0800E280  (original: 0x0800E280-0x0800E310 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F7CC();
extern int sub_080063E0();
extern int sub_0800793A();
extern int sub_0801F08C();
extern int sub_08009324();
extern int sub_0800D138();
extern int sub_0801AA98();
extern undefined4 volatile DAT_03001104;
extern undefined4 volatile DAT_03001f34;
extern undefined volatile _080252A4;


undefined4 * sub_0800E280(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_24 ((undefined1 *)((char *)__frame + 0x0))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x1f0), param_1 != (undefined4 *)0x0)) {
    uVar1 = sub_08009324(*(undefined4 *)(param_2 + 0x10));
    sub_0800F7CC(param_1,uVar1,&DAT_03001f34,param_3,param_2 + 0xc);
    *param_1 = &_080252A4;
    sub_0800D138(param_1 + 100,param_2 + 0x18);
    param_1[0x68] = 0;
    param_1[0x73] = 0;
    param_1[0x60] = param_3;
    param_1[0x61] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)((int)param_1 + 0x18d) = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    param_1[0x62] = *(undefined4 *)(param_3 + 4);
    sub_0800793A(auStack_24,param_1);
    sub_080063E0(auStack_24,DAT_03001104,0);
    param_1[0x67] = param_1;
    sub_0801AA98(param_1 + 0x67,*(undefined4 *)(param_1[0x60] + 8));
  }
  return param_1;
}

