/* sub_0801D88A  (original: 0x0801D88A-0x0801D91C in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005D6C();
extern int sub_08014556();
extern undefined4 volatile DAT_03001100;
extern int volatile DAT_0300109c;
extern int volatile DAT_030010a4;
extern int volatile DAT_030010a0;
extern int volatile DAT_030010a8;


void sub_0801D88A(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_20 (*(int *)((char *)__frame + 0x0))
#define iStack_1c (*(int *)((char *)__frame + 0x4))
#define iStack_18 (*(int *)((char *)__frame + 0x8))
#define iStack_14 (*(int *)((char *)__frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iStack_18 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
      iStack_14 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
      iStack_20 = iStack_18 + -4;
      iStack_18 = iStack_18 + 4;
      iStack_1c = iStack_14 + -4;
      iStack_14 = iStack_14 + 4;
      iVar2 = sub_08005D6C(&iStack_20,DAT_03001100);
      if ((((iVar2 == 0) || (iStack_18 <= DAT_0300109c)) || (DAT_030010a4 <= iStack_20)) ||
         ((iStack_14 <= DAT_030010a0 || (DAT_030010a8 <= iStack_1c)))) {
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 3;
      }
    }
    else if (cVar1 != '\x02') {
      return;
    }
  }
  sub_08014556(param_1,param_2);
  return;
}

