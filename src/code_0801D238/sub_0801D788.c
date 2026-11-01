/* sub_0801D788  (original: 0x0801D788-0x0801D7DC in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801D84C();
extern int sub_080068B8();
extern int sub_080079B8();
extern undefined volatile DAT_03001120;


void sub_0801D788(int param_1,int *param_2)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
#define local_10 (*(int *)((char *)__frame + 0x14))
  sub_080079B8(&local_24);
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_20 + local_18 >> 1;
  uVar1 = sub_0801D84C(0,&local_14,0,param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  sub_080068B8(&DAT_03001120,uVar1);
  __call_via_r2(param_2,0x1e,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}

