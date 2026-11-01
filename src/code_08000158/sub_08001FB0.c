/* sub_08001FB0  (original: 0x08001FB0-0x08001FE8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F636();
extern int sub_08021F18();
extern int sub_080236B4();
extern undefined volatile gUnknown_0802CC64;


void sub_08001FB0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08021F18(*(undefined4 *)(param_1 + 0x40),0,*(undefined4 *)(param_1 + 0x50),param_4,param_4);
  *(undefined **)(param_1 + 0x28) = &gUnknown_0802CC64;
  *(undefined4 *)(param_1 + 0x20) = 0x78;
  *(undefined4 *)(param_1 + 0x24) = 0x18;
  *(undefined1 *)(param_1 + 0x1d) = 0x10;
  if (param_2 != 0) {
    sub_0801F636(param_1 + 0x1c,param_2);
  }
  sub_080236B4(param_1 + 0x1c,0x6004040);
  return;
}

