/* sub_0801871C  (original: 0x0801871C-0x0801874C in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08018A38();
extern int sub_0801F2CE();
extern int sub_08018F7E();
extern int sub_080177CE();


undefined4 sub_0801871C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3fc) == 0) {
    uVar1 = sub_080177CE();
  }
  else {
    uVar1 = sub_08018F7E(*(undefined4 *)(param_1 + 0x400));
    sub_08018A38(0,uVar1);
    sub_0801F2CE();
    uVar1 = 0;
  }
  return uVar1;
}

