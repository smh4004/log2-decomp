/* sub_0801D2BC  (original: 0x0801D2BC-0x0801D310 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800D1AC();
extern int __call_via_r1();
extern int sub_0801F08C();
extern undefined volatile _080241A0;


void sub_0801D2BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined4 *)((char *)__frame + 0x0))
#define local_1c (*(undefined2 *)((char *)__frame + 0x4))
#define local_1a (*(undefined2 *)((char *)__frame + 0x6))
#define local_18 (*(undefined2 *)((char *)__frame + 0x8))
  local_20 = 0;
  local_18 = (undefined2)((uint)(*(int *)(param_1 + 0x18) * 0x290) >> 8);
  local_1c = (undefined2)*(undefined4 *)(param_1 + 0x10);
  local_1a = (undefined2)*(undefined4 *)(param_1 + 0x14);
  iVar1 = param_2[4];
  __call_via_r1(param_2,*(int *)(*param_2 + 0x30) + *param_2);
  puVar2 = (undefined4 *)sub_0801F08C(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    sub_0800D1AC(puVar2,&local_20,param_2);
    *puVar2 = &_080241A0;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  *(char *)(param_2 + 4) = (char)iVar1;
  return;
}

