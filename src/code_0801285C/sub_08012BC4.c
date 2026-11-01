/* sub_08012BC4  (original: 0x08012BC4-0x08012C56 in asm/code_0801285C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001094;
extern int volatile DAT_03001098;
extern int volatile DAT_030010c8;
extern int volatile DAT_030010cc;
extern int volatile DAT_030010d0;
extern int volatile DAT_030010d4;


undefined4 sub_08012BC4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)*param_2;
  *param_2 = puVar1 + 2;
  iVar2 = param_2[1];
  param_2[1] = iVar2 + 0x20;
  iVar3 = param_2[2];
  param_2[2] = iVar3 + 1;
  *puVar1 = 0x2300;
  uVar4 = (uint)(((*(int *)(param_1 + 0x18) * (DAT_03001094 >> 10) >> 0x16) +
                 *(int *)(param_1 + 0x10)) * 0x800000) >> 7 | 0x2300;
  *puVar1 = uVar4;
  *puVar1 = (uint)(iVar3 << 0x1b) >> 2 |
            uVar4 | (*(int *)(param_1 + 0x1c) * (DAT_03001098 >> 10) >> 0x16) +
                    *(int *)(param_1 + 0x14) & 0xffU;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00;
  *(short *)(iVar2 + 6) = (short)(DAT_030010c8 >> 2);
  *(short *)(iVar2 + 0x16) = (short)(DAT_030010cc >> 2);
  *(short *)(iVar2 + 0xe) = (short)(DAT_030010d0 >> 2);
  *(short *)(iVar2 + 0x1e) = (short)(DAT_030010d4 >> 2);
  return 0;
}

