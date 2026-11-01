/* sub_080134F2  (original: 0x080134F2-0x0801353C in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300208c;
extern int volatile DAT_03000e98;
extern undefined volatile gUnknown_081D967C;


undefined4 sub_080134F2(int param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)(byte)(&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] << 0x1e) < 0) {
    return 0;
  }
  if (((&gUnknown_081D967C)[(uint)*(byte *)(param_1 + 8) * 0x14] & 1) != 0) {
    return 1;
  }
  if (DAT_0300208c == 0) {
    return 0;
  }
  uVar1 = 1;
  if (DAT_03000e98 == 0) {
    if (*(short *)(param_1 + 4) < 10) {
      return 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

