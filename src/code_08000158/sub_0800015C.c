/* sub_0800015C  (original: 0x0800015C-0x0800020C in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801F248();
extern int sub_0801EDE0();
extern int sub_0801F294();
extern int sub_0801F2F4();
extern int sub_08006C24();
extern int sub_08020A4C();
extern int sub_0801D378();
extern int sub_0801ED3C();
extern int sub_0801F2CE();
extern int sub_08001E4A();
extern undefined1 volatile DAT_03001fc0;
extern char volatile DAT_030026cd;
extern undefined * * volatile DAT_030026d4;
extern undefined volatile DAT_03000e88;
extern undefined volatile DAT_03001120;
extern undefined * volatile gUnknown_081D4C58;


void sub_0800015C(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_14 ((undefined1 *)((char *)__frame + 0x0))
#define local_10 (*(byte *)((char *)__frame + 0x4))
#define local_f (*(byte *)((char *)__frame + 0x5))
#define local_c (*(byte *)((char *)__frame + 0x8))
#define local_b (*(byte *)((char *)__frame + 0x9))
  local_c = *param_3;
  local_b = param_3[1];
  iVar1 = 0;
  do {
    local_10 = (char)iVar1 * '>' ^ 0x9c;
    local_f = (char)iVar1 * -0x1d + 0x25;
    *param_3 = local_10;
    param_3[1] = local_f;
    if ((*param_3 != local_10) || (param_3[1] != local_f)) goto _080001A8;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  DAT_03001fc0 = 1;
_080001A8:
  *param_3 = local_c;
  param_3[1] = local_b;
  sub_0801F248(auStack_14);
  sub_0801EDE0(0);
  sub_0801F2F4();
  sub_08001E4A(&DAT_03000e88);
  sub_08006C24(&DAT_03001120);
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C();
  }
  sub_0801D378(0);
  sub_0801F2F4();
  do {
    sub_0801ED3C(0);
    sub_0801F2CE();
    sub_0801F294();
  } while( true );
}

