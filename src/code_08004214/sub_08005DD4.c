/* sub_08005DD4  (original: 0x08005DD4-0x08005F1A in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802166E();
extern int sub_080220CC();
extern int sub_080220F0();
extern int sub_080215E8();
extern int sub_080215A8();
extern int sub_08028030();
extern undefined volatile gUnknown_087FD104;


void sub_08005DD4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define local_38 (*(int *)((char *)__frame + 0x10))
#define local_34 (*(int *)((char *)__frame + 0x14))
#define auStack_30 ((undefined1 *)((char *)__frame + 0x18))
#define local_18 (*(int * *)((char *)__frame + 0x30))
  sub_080220CC(auStack_30,&local_18,8,0x8026689);
  sub_080215E8(auStack_30,param_1);
  sub_080215A8();
  param_1[0x12] = param_1[0x12] - param_1[1];
  param_1[0x13] = param_1[0x13] - param_1[2];
  sub_0802166E(auStack_48,param_1 + 0xe,auStack_30);
  sub_080220F0(param_1 + 0xe,auStack_48,auStack_30,8,0x80265dd);
  iVar3 = *param_1 >> 10;
  iVar1 = param_1[1] >> 10;
  param_1[3] = iVar1;
  iVar2 = param_1[2] >> 10;
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0xec) * 0x1000000) >> 0x16)) >> 8) +
             iVar1;
  local_34 = iVar2 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 300) * 0x1000000) >> 0x16)) >>
                     8);
  local_18 = param_1 + 3;
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0x14) * 0x1000000) >> 0x16)) >> 8) +
             iVar1;
  local_34 = iVar2 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0x54) * 0x1000000) >> 0x16)) >>
                     8);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)(iVar3 << 0x18) >> 0x16)) >> 8) + iVar1;
  local_34 = iVar2 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) >>
                     8);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0xae) * 0x1000000) >> 0x16)) >> 10) +
             iVar1;
  local_34 = iVar2 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0xee) * 0x1000000) >> 0x16)) >>
                     10);
  sub_08028030(local_18,&local_38);
  local_38 = (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0x52) * 0x1000000) >> 0x16)) >> 10) +
             iVar1;
  local_34 = iVar2 - (*(int *)(&gUnknown_087FD104 + ((uint)((iVar3 + 0x92) * 0x1000000) >> 0x16)) >>
                     10);
  sub_08028030(local_18,&local_38);
  param_1[5] = param_1[5] + 1;
  param_1[6] = param_1[6] + 1;
  return;
}

