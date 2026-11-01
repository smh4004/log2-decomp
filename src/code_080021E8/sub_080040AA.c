/* sub_080040AA  (original: 0x080040AA-0x080040EE in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08006E0A();
extern int sub_08008B14();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_080040AA(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (-((int)((uint)bVar1 << 0x1e) >> 0x1f) != param_2) {
    if (param_2 == 0) {
      *(byte *)(param_1 + 1) = bVar1 & 0xfd;
      sub_08006E0A(&DAT_03001120,0x12,0);
      return;
    }
    *(byte *)(param_1 + 1) = bVar1 | 2;
    iVar2 = sub_08008B14(0);
    *(undefined4 *)(iVar2 + 0x24) = 0xfffffff0;
    *(undefined4 *)(iVar2 + 0x20) = 1;
    sub_080068B8(&DAT_03001120);
  }
  return;
}

