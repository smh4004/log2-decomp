/* sub_0800020C  (original: 0x0800020C-0x0800021C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_08020E5C();
extern undefined1 volatile gUnknown_08028724;
extern undefined volatile _080238B0;


undefined4 * sub_0800020C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0xbc), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *param_1 = &_080238B0;
  sub_08020E5C(param_1 + 5,0xf0,0xa0);
  sub_08020E5C(param_1 + 0x13,0xf0,0xa0);
  sub_08020E5C(param_1 + 0x21,0x20,0x20);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 10) = 100;
  param_1[3] = 0xff;
  param_1[8] = &gUnknown_08028724;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0xd] = 0x8020fdd;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = 0;
  return param_1;
}

