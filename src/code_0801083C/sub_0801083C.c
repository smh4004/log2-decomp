/* sub_0801083C  (original: 0x0801083C-0x0801087A in asm/code_0801083C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_0800BF6E();
extern int volatile DAT_03002068;
extern ushort volatile DAT_030022ae;
extern undefined4 volatile DAT_03001fe0;


undefined4 sub_0801083C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002068;
  if ((DAT_030022ae & *(byte *)(param_1 + 4)) != 0) {
    iVar2 = *param_2;
    iVar2 = __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
    if (iVar2 != 0) {
      if (DAT_03002068 == iVar1) {
        sub_0800BF6E(&DAT_03001fe0,param_2);
      }
      return 1;
    }
  }
  return 0;
}

