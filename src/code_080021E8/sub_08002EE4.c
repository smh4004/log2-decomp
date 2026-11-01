/* sub_08002EE4  (original: 0x08002EE4-0x08002F54 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08020E5C();
extern int sub_08002244();
extern int sub_080220CC();
extern undefined1 volatile DAT_03000e88;
extern undefined1 volatile DAT_03000e89;
extern undefined1 volatile DAT_03000e8a;
extern undefined volatile _08023CD4;
extern undefined1 volatile DAT_03000e8b;


undefined4 * sub_08002EE4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x1d0), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08002244(param_1);
  *param_1 = &_08023CD4;
  sub_08020E5C(param_1 + 0x48,0x60,0x18);
  sub_08020E5C(param_1 + 0x56,8,0x10);
  *(undefined1 *)(param_1 + 100) = DAT_03000e88;
  *(undefined1 *)((int)param_1 + 0x191) = DAT_03000e89;
  *(undefined1 *)((int)param_1 + 0x192) = DAT_03000e8a;
  *(undefined1 *)((int)param_1 + 0x193) = DAT_03000e8b;
  sub_080220CC(param_1 + 0x65,param_1 + 0x74,0x14,0x8026605);
  param_1[0x47] = 0;
  return param_1;
}

