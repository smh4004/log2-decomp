/* sub_0801A5B4  (original: 0x0801A5B4-0x0801A62A in asm/code_08018EFC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0801A5B4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *puVar1 = 0x40386090;
  puVar1[1] = puVar1[1] & 0xfffff000 | *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[2] = 0x40586090;
  puVar1[3] = *(ushort *)(param_1 + 0xc) + 8 & 0x3ff | puVar1[3] & 0xfffff000;
  puVar1[4] = 0x40786090;
  puVar1[5] = *(ushort *)(param_1 + 0xc) + 0x10 & 0x3ff | puVar1[5] & 0xfffff000;
  puVar1[6] = 0x40986090;
  puVar1[7] = *(ushort *)(param_1 + 0xc) + 0x18 & 0x3ff | puVar1[7] & 0xfffff000;
  *param_2 = puVar1 + 8;
  return 0;
}

