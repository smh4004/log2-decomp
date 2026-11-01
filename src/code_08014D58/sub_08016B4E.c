/* sub_08016B4E  (original: 0x08016B4E-0x08016B96 in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08016B4E(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x2000;
  uVar2 = (uint)(*(int *)(param_1 + 0x18) << 0x17) >> 7 | 0x2000;
  *puVar1 = uVar2;
  *puVar1 = uVar2 | *(uint *)(param_1 + 0x1c) & 0xff;
  puVar1[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffff000) + 0x800;
  return 0;
}

