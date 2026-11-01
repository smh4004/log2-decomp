/* sub_08016412  (original: 0x08016412-0x0801647A in asm/code_08014D58.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080068CA();
extern int sub_08026044();
extern int sub_08006664();
extern undefined volatile DAT_03001120;


void sub_08016412(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    sub_080068CA(&DAT_03001120,param_1);
  }
  else {
    if (iVar2 == 0x10) {
      pcVar4 = *(char **)(param_1 + 0xc);
      cVar1 = *pcVar4;
      *pcVar4 = cVar1 + -1;
      if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar4 + 2) != -1)) {
        sub_08006664(&DAT_03001120,(int)*(short *)(pcVar4 + 2),0xffff,2,param_4);
        pcVar4[2] = -1;
        pcVar4[3] = -1;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3 + 0xc;
      iVar2 = *(int *)(param_1 + 0xc) + 4;
      *(int *)(param_1 + 0xc) = iVar2;
      sub_08026044(iVar2,*(undefined4 *)(iVar3 + 0x14),0x40);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
  }
  return;
}

