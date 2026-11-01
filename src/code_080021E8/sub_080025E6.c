/* sub_080025E6  (original: 0x080025E6-0x080026FE in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_08002544();
extern int sub_0800233E();
extern int sub_08020E5C();
extern int sub_080022FA();
extern int sub_08002D5C();
extern int __call_via_r1();
extern int sub_0801F394();
extern int __call_via_r2();
extern int sub_08020EAA();
extern int sub_080236B4();
extern undefined volatile DAT_06005740;
extern undefined volatile DAT_060058c0;
extern undefined volatile DAT_06005d40;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG2CNT;
extern undefined volatile gUnknown_081D90AC;


void sub_080025E6(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_4c ((uint *)((char *)__frame + 0x0))
#define local_28 (*(undefined4 *)((char *)__frame + 0x24))
  REG_DISPCNT = 0xe00;
  REG_BG1CNT = 0x1d83;
  REG_BG2CNT = 0x1e83;
  sub_08020E5C(local_4c,0xd8,8);
  sub_0801F394(&gUnknown_081D90AC,local_28);
  sub_080236B4((int)local_4c,0x6004000);
  sub_08020EAA(local_4c,0);
  piVar3 = param_1 + 3;
  local_4c[0] = 1;
  sub_08002D5C();
  piVar1 = (int *)param_1[0x37];
  __call_via_r1(param_1 + 0x37,*piVar1 + (int)piVar1);
  local_4c[0] = 1;
  piVar1 = param_1 + 0x3e;
  sub_08002D5C(piVar1,piVar3,2,8,&DAT_06005d40);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  local_4c[0] = (uint)(param_1[0x45] != 0);
  piVar1 = param_1 + 0x2d;
  sub_08002D5C(piVar1,piVar3,3,5,&DAT_06005740);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  iVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x30) + *param_1);
  local_4c[0] = (uint)(param_1[0x45] < iVar2 + -1);
  piVar1 = param_1 + 0x32;
  sub_08002D5C(piVar1,piVar3,4,4,&DAT_060058c0);
  __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  sub_08002544(param_1);
  sub_080022FA(param_1);
  sub_0800233E(param_1);
  __call_via_r2(param_1,param_1[0x45],*(int *)(*param_1 + 0x38) + *param_1);
  return;
}

