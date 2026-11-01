/* sub_0800C9C4  (original: 0x0800C9C4-0x0800C9FE in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 34% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801A4FC();
extern int sub_080068CA();
extern int sub_080068B8();
extern int volatile DAT_030010e0;
extern undefined volatile DAT_03001120;


undefined4 sub_0800C9C4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x10) + -1;
  *(char *)(param_1 + 0x10) = cVar2;
  if (cVar2 == '\0') {
    sub_080068CA(&DAT_03001120,param_1);
    if (*(int *)(DAT_030010e0 + 0x3c) != 0) {
      uVar1 = sub_0801A4FC(0);
      sub_080068B8(&DAT_03001120,uVar1);
    }
    return 0;
  }
  return 1;
}

