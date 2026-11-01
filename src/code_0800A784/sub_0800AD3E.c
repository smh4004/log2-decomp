/* sub_0800AD3E  (original: 0x0800AD3E-0x0800AD7A in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08016AB4();
extern int sub_080068B8();
extern undefined volatile DAT_03001120;


void sub_0800AD3E(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2] + 0xf;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2] + 0xf;
  uVar1 = sub_08016AB4(0,&local_c);
  sub_080068B8(&DAT_03001120,uVar1);
  return;
}

