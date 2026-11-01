/* sub_0800EA3A  (original: 0x0800EA3A-0x0800EAD8 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 17% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08013D68();
extern undefined volatile gUnknown_0840E53C;


undefined4 sub_0800EA3A(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      if (*(int *)(param_3 + 0x30) == param_1) {
        return 0;
      }
      if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
           (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
          (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
         ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
          (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
        *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 != 2) {
    uVar1 = sub_08013D68();
    return uVar1;
  }
  if (((*(int *)(param_1 + 0x4c) == 0) && (**(char **)(param_3 + 0x1c) == '\x01')) &&
     ((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30) &&
      (((*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc) &&
        (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
       (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))))) {
    if ((*(char **)(param_3 + 0x1c))[1] == '\x0e') {
      *(undefined **)(param_1 + 0x18) = &gUnknown_0840E53C;
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      return 0;
    }
    return 1;
  }
  return 0;
}

