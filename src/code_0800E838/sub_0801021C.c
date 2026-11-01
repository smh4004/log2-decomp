/* sub_0801021C  (original: 0x0801021C-0x08010272 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;


undefined4 sub_0801021C(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x40006000;
  uVar1 = (uint)(((*(int *)(param_1 + 0x20) >> 3) - DAT_030010ac) * 0x800000) >> 7 | 0x40006000;
  *puVar2 = uVar1;
  *puVar2 = uVar1 | (*(int *)(param_1 + 0x24) >> 3) - DAT_030010b0 & 0xffU;
  puVar2[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000;
  return 0;
}

