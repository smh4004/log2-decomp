/* sub_08001F78  (original: 0x08001F78-0x08001FB0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F636();
extern int sub_08021F18();
extern int sub_080236B4();
extern undefined1 volatile gUnknown_08028724;


void sub_08001F78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08021F18(*(undefined4 *)(param_1 + 0x40),0,*(undefined4 *)(param_1 + 0x50),param_4,param_4);
  *(undefined1 **)(param_1 + 0x28) = &gUnknown_08028724;
  *(undefined4 *)(param_1 + 0x20) = 0x78;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  *(undefined1 *)(param_1 + 0x1d) = 8;
  if (param_2 != 0) {
    sub_0801F636(param_1 + 0x1c,param_2);
  }
  sub_080236B4(param_1 + 0x1c,0x6007c40);
  return;
}

