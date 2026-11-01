/* sub_0800E04C  (original: 0x0800E04C-0x0800E078 in asm/code_0800C810.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F2F4();
extern int sub_0800DE20();


void sub_0800E04C(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_3 + 0x150);
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      piVar1 = (int *)(*piVar1 + 4);
      iVar2 = *piVar1;
    }
    *piVar1 = param_2;
    if (*param_1 == 0) {
      sub_0800DE20();
      sub_0801F2F4();
    }
  }
  return;
}

