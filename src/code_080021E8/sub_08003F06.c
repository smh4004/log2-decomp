/* sub_08003F06  (original: 0x08003F06-0x08003F90 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 15/15 snapshots, 10% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080092E4();
extern undefined volatile DAT_03000f44;


bool sub_08003F06(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  unsigned int __frame[25];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_64 (*(undefined4 *)((char *)__frame + 0x0))
#define iStack_60 (*(int *)((char *)__frame + 0x4))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x44))
  if (param_1 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = param_1 >> 0x10;
    if (uVar1 == 0) {
      bVar4 = false;
    }
    else {
      uVar2 = 1 << (param_1 & 7);
      uVar3 = (param_1 & 0xffff) >> 3;
      if (uVar1 == 1) {
        if (((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      else if (uVar1 == 2) {
        bVar4 = ((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0;
      }
      else if (uVar1 == 3) {
        if (((byte)(&DAT_03000f44)[uVar3] & uVar2) == 0) {
          bVar4 = false;
        }
        else {
          (&DAT_03000f44)[uVar3] = (&DAT_03000f44)[uVar3] & ~(byte)uVar2;
          bVar4 = true;
        }
      }
      else {
        uStack_64 = 0;
        uStack_20 = 0;
        sub_080092E4(&uStack_64,param_1,0);
        if (iStack_60 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
  }
  return bVar4;
}

