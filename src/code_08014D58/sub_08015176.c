/* sub_08015176  (original: 0x08015176-0x080151DC in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08014350();
extern int sub_0802141C();
extern int sub_0801FC9C();
extern ushort volatile DAT_030022b2;
extern undefined volatile DAT_03002c80;
extern undefined volatile gUnknown_080E15B0;


void sub_08015176(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    if ((int)((uint)DAT_030022b2 << 0x1e) < 0) {
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined2 *)(param_2 + 5) = 1;
      sub_08014350(*(undefined4 *)(param_1 + 4),(char)param_2[4]);
      *(undefined4 *)(param_1 + 4) = 0;
      iVar2 = sub_0802141C(2);
      sub_0801FC9C(&DAT_03002c80,&gUnknown_080E15B0 + (iVar2 + 0xd) * 0xc,0x40,0);
      return;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}

