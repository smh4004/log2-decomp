/* sub_080092E4  (original: 0x080092E4-0x08009324 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined1 * volatile DAT_03001fac;
extern undefined * volatile gUnknown_083B5C00;


void sub_080092E4(undefined4 *param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_2c ((undefined1 *)((char *)__frame + 0x0))
#define puStack_1c (*(undefined4 * *)((char *)__frame + 0x10))
#define local_18 (*(byte * *)((char *)__frame + 0x14))
#define puStack_14 (*(undefined1 * *)((char *)__frame + 0x18))
  DAT_03001fac = param_3;
  if (param_3 == (undefined1 *)0x0) {
    DAT_03001fac = auStack_2c;
  }
  *param_1 = 0;
  param_1[0x11] = 0;
  puStack_1c = param_1;
  local_18 = param_2;
  puStack_14 = param_3;
  while( true ) {
    bVar1 = *local_18;
    local_18 = local_18 + 1;
    if ((&gUnknown_083B5C00)[bVar1] == (undefined *)0x0) break;
    __call_via_r2(param_1,&local_18);
  }
  return;
}

