/* sub_08018398  (original: 0x08018398-0x080184AE in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F412();
extern int sub_0801F08C();
extern int sub_080067AC();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08024EBC;
extern undefined4 volatile REG_DMA3SAD;


undefined4 *
sub_08018398(undefined4 *param_1,int *param_2,int *param_3,undefined1 param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0801F08C(0x18), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_3[1];
    iVar4 = *param_3;
    *param_1 = &_08023A1C;
    *(short *)((int)param_1 + 0xe) = (short)iVar2 * (short)iVar4;
    uVar1 = sub_080067AC(&DAT_03001120);
    *(ushort *)(param_1 + 3) = uVar1;
    *param_1 = &_08024EBC;
    sub_0801F412(&REG_DMA3SAD,(uint)uVar1 * 0x20 + 0x6010000,param_5,param_3[1] * *param_3);
    *(undefined1 *)(param_1 + 2) = param_4;
    param_1[1] = param_2[1] + param_3[1];
    param_1[5] = 1;
    param_1[4] = 0;
    iVar2 = *param_3;
    if (iVar2 == 8) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x2000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0xa000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x4000a000;
      }
    }
    else if (iVar2 == 0x10) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x6000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0x40002000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x8000a000;
      }
    }
    else if (iVar2 == 0x20) {
      iVar2 = param_3[1];
      if (iVar2 == 8) {
        param_1[4] = 0x40006000;
      }
      else if (iVar2 == 0x10) {
        param_1[4] = 0x80006000;
      }
      else if (iVar2 == 0x20) {
        param_1[4] = 0x80002000;
      }
      else if (iVar2 == 0x40) {
        param_1[4] = 0xc000a000;
      }
    }
    else if (iVar2 == 0x40) {
      if (param_3[1] == 0x20) {
        param_1[4] = 0xc0006000;
      }
      else if (param_3[1] == 0x40) {
        param_1[4] = 0xc0002000;
      }
    }
    uVar3 = param_1[4] | (uint)(*param_2 << 0x17) >> 7;
    param_1[4] = uVar3;
    param_1[4] = uVar3 | param_2[1] & 0xffU;
  }
  return param_1;
}

