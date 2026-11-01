/* sub_080103F0  (original: 0x080103F0-0x08010464 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030010ac;
extern int volatile DAT_030010b0;


undefined4 sub_080103F0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_2;
  *param_2 = puVar3 + 2;
  *puVar3 = 0x80006000;
  uVar1 = (((uint)**(ushort **)(param_1 + 0x14) - DAT_030010ac) + -0x10) * 0x800000 >> 7 |
          0x80006000;
  *puVar3 = uVar1;
  *puVar3 = uVar1 | ((uint)*(ushort *)(*(int *)(param_1 + 0x14) + 2) - DAT_030010b0) + 0xf8 & 0xff;
  uVar2 = puVar3[1];
  uVar1 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar3[1] = uVar1 | uVar2 & 0xfffff3ff;
  puVar3[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar1 | uVar2 & 0xfffff000;
  return 0;
}

