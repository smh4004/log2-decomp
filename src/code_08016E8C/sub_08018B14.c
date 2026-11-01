/* sub_08018B14  (original: 0x08018B14-0x08018B5E in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F702();
extern int sub_08020E5C();
extern int sub_08021F18();
extern undefined volatile gUnknown_0802CC64;


void sub_08018B14(int param_1)

{
  int iVar1;
  
  iVar1 = sub_08020E5C(0,0xa0,*(int *)(param_1 + 0x80) + 0x40);
  *(int *)(param_1 + 0x84) = iVar1;
  *(undefined **)(iVar1 + 0xc) = &gUnknown_0802CC64;
  *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x29) = 2;
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0xe;
  *(undefined1 *)(*(int *)(param_1 + 0x84) + 1) = 0x10;
  sub_08021F18(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x24),0,
               *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x34));
  sub_0801F702(*(undefined4 *)(param_1 + 0x84),0xa0,*(undefined4 *)(*(int *)(param_1 + 0x88) + 4));
  return;
}

