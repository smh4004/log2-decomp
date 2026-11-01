/* sub_0802166E  (original: 0x0802166E-0x08021792 in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021DA0();
extern int sub_080220CC();
extern int sub_08021DB4();


undefined4 ** sub_0802166E(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_44 (*(undefined4 *)((char *)__frame + 0x0))
#define local_40 (*(undefined4 *)((char *)__frame + 0x4))
#define local_3c (*(undefined4 *)((char *)__frame + 0x8))
#define local_38 (*(undefined4 *)((char *)__frame + 0xc))
#define local_34 (*(int *)((char *)__frame + 0x10))
#define local_2c (*(undefined4 * *)((char *)__frame + 0x18))
#define local_28 (*(undefined4 * *)((char *)__frame + 0x1c))
#define local_24 (*(undefined4 * *)((char *)__frame + 0x20))
#define local_20 (*(undefined4 * *)((char *)__frame + 0x24))
#define puStack_1c (*(undefined4 * *)((char *)__frame + 0x28))
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x2c))
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  sub_080220CC(&local_44,&local_2c,8,0x8026689);
  lVar3 = sub_08021DA0(*param_3,*param_2);
  lVar4 = sub_08021DA0(param_3[2],param_2[1]);
  local_44 = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  local_24 = param_3 + 1;
  lVar3 = sub_08021DA0(param_3[1],*param_2);
  local_28 = param_3 + 3;
  lVar4 = sub_08021DA0(param_3[3],param_2[1]);
  local_40 = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*param_3,param_2[2]);
  local_2c = param_2 + 3;
  lVar4 = sub_08021DA0(param_3[2],param_2[3]);
  local_3c = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*local_24,param_2[2]);
  lVar4 = sub_08021DA0(*local_28,*local_2c);
  local_38 = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08021DA0(*param_3,param_2[4]);
  lVar4 = sub_08021DA0(param_3[2],param_2[5]);
  local_34 = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  local_34 = local_34 + param_3[4];
  lVar3 = sub_08021DA0(*local_24,param_2[4]);
  lVar4 = sub_08021DA0(*local_28,param_2[5]);
  iVar1 = sub_08021DB4((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iVar2 = param_3[5];
  *local_20 = local_44;
  local_20[1] = local_40;
  local_20[2] = local_3c;
  local_20[3] = local_38;
  local_20[4] = local_34;
  local_20[5] = iVar1 + iVar2;
  return &local_2c;
}

