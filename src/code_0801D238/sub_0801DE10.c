/* sub_0801DE10  (original: 0x0801DE10-0x0801DF3C in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800F910();
extern int __call_via_r2();
extern int sub_08013BF4();
extern int sub_0802141C();
extern int sub_08028230();
extern int sub_080068CA();
extern int sub_080079B8();
extern int sub_0801FC9C();
extern undefined volatile gUnknown_086DB2E4;
extern int * volatile DAT_03001fa8;
extern int volatile DAT_03002294;
extern undefined volatile DAT_03001120;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_0801DE10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  unsigned int __frame[22];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_58 (*(int *)((char *)__frame + 0x0))
#define iStack_54 (*(int *)((char *)__frame + 0x4))
#define iStack_50 (*(int *)((char *)__frame + 0x8))
#define iStack_4c (*(int *)((char *)__frame + 0xc))
#define uStack_48 (*(undefined1 *)((char *)__frame + 0x10))
#define iStack_44 (*(int *)((char *)__frame + 0x14))
#define iStack_40 (*(int *)((char *)__frame + 0x18))
#define iStack_3c (*(int *)((char *)__frame + 0x1c))
#define iStack_38 (*(int *)((char *)__frame + 0x20))
#define auStack_34 ((undefined1 *)((char *)__frame + 0x24))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x28))
#define puStack_2c (*(undefined * *)((char *)__frame + 0x2c))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x30))
#define auStack_24 ((undefined1 *)((char *)__frame + 0x34))
#define iStack_18 (*(int *)((char *)__frame + 0x40))
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar2;
  uVar3 = iVar2 >> 2;
  uVar4 = uVar3 & 0xff;
  *(char *)(param_1 + 0x44) = (char)uVar3;
  if (uVar4 < 5) {
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x54) + uVar4 * 0xc;
    sub_08013BF4(param_1);
    piVar1 = DAT_03001fa8;
    if ((((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x40) == 0)) &&
       ((DAT_03001fa8 != (int *)0x0 && (DAT_03001fa8[0x5a] != 0)))) {
      iStack_3c = *(int *)(param_1 + 0x20) >> 8;
      iStack_44 = iStack_3c + -8;
      iStack_38 = *(int *)(param_1 + 0x24) >> 8;
      iStack_40 = iStack_38 + -8;
      iStack_3c = iStack_3c + 8;
      iStack_38 = iStack_38 + 8;
      sub_080079B8(&iStack_58,DAT_03001fa8);
      if (((iStack_58 < iStack_3c) && ((iStack_44 < iStack_50 && (iStack_54 < iStack_38)))) &&
         (iStack_40 < iStack_4c)) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1c);
        auStack_34[0] = *(undefined1 *)(param_1 + 0x14);
        puStack_2c = &gUnknown_086DB2E4;
        uStack_30 = sub_08028230(0x424ccccd);
        uStack_48 = *(undefined1 *)(param_1 + 0x15);
        *(undefined4 *)(param_1 + 0x40) = 1;
        iStack_18 = param_1;
        if (0x80 < -DAT_03002294) {
          iVar2 = sub_0802141C(3);
          sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0x22) * 0xc,0x40,0);
          DAT_03002294 = 0;
        }
        sub_0800F910(piVar1,auStack_34);
        __call_via_r2(piVar1,auStack_24,*(int *)(*piVar1 + 0x40) + *piVar1);
      }
    }
  }
  else {
    sub_080068CA(&DAT_03001120,param_1);
  }
  return;
}

