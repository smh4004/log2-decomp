/* sub_08004B62  (original: 0x08004B62-0x08004C56 in asm/code_08004214.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 45% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801F7FC();
extern int sub_0801F394();
extern int sub_0801F702();
extern int sub_080236B4();
extern int sub_0801F636();
extern int sub_0801F508();
extern int sub_080211C8();
extern undefined volatile DAT_0600e000;
extern undefined volatile gUnknown_081D99E0;
extern undefined volatile gUnknown_080E2840;


void sub_08004B62(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *a0;
  int iVar2;
  int *piVar3;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_4c ((undefined1 *)((char *)__frame + 0x0))
#define iStack_48 (*(int *)((char *)__frame + 0x4))
#define iStack_40 (*(int *)((char *)__frame + 0xc))
#define local_3c (*(undefined4 *)((char *)__frame + 0x10))
#define local_38 (*(int *)((char *)__frame + 0x14))
#define local_34 (*(undefined4 *)((char *)__frame + 0x18))
#define local_30 (*(int *)((char *)__frame + 0x1c))
#define iStack_2c (*(int *)((char *)__frame + 0x20))
#define local_28 (*(int *)((char *)__frame + 0x24))
#define iStack_24 (*(int *)((char *)__frame + 0x28))
#define local_20 (*(int * *)((char *)__frame + 0x2c))
#define iStack_1c (*(int *)((char *)__frame + 0x30))
#define iStack_18 (*(int *)((char *)__frame + 0x34))
  local_3c = 2;
  local_38 = 4;
  local_30 = 0xf;
  local_34 = 0x1c;
  iStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  sub_0801F508(&local_3c,&DAT_0600e000,0x1a5);
  sub_0801F394(&gUnknown_081D99E0,*(undefined4 *)(param_1 + 0x430));
  a0 = (undefined1 *)(param_1 + 0x40c);
  local_28 = param_1 + 0x42c;
  if (*local_20 == 0) {
    *(undefined1 *)(param_1 + 0x435) = 5;
    *a0 = 1;
    *(undefined4 *)(param_1 + 0x410) = 0x68;
    *(undefined4 *)(param_1 + 0x414) = 0x2c;
    sub_0801F636(a0,*(undefined4 *)(&gUnknown_080E2840 + param_4 * 4));
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + iStack_1c;
      if (*local_20 <= iVar1) break;
      iStack_2c = iVar2 * 0x1d;
      local_38 = iStack_2c + 7;
      local_34 = 0x2c;
      local_30 = iStack_2c + 0x17;
      piVar3 = local_20 + iVar1 * 2 + 1;
      local_3c = 0x1c;
      sub_080211C8(a0,local_20[iVar1 * 2 + 2],&local_3c);
      iStack_48 = *piVar3;
      iVar1 = 0;
      do {
        sub_0801F7FC(a0,iStack_48,0x98,auStack_4c);
        iVar1 = iVar1 + 1;
      } while (iStack_40 == 0);
      *(undefined1 *)(local_28 + 9) = 0x29;
      *a0 = 0;
      *(undefined1 *)(param_1 + 0x40d) = 8;
      *(int *)(param_1 + 0x414) = iStack_2c + (iVar1 * -8 + 0x1e >> 1) + 6;
      *(undefined4 *)(param_1 + 0x410) = 0x30;
      sub_0801F702(a0,0x98,*piVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  sub_080236B4((int)a0,0x6006940);
  return;
}

