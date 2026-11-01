/* sub_08009992  (original: 0x08009992-0x080099D2 in asm/code_08008564.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F08C();
extern int sub_0800C7C6();
extern int sub_0802664C();
extern int sub_0801F2F4();
extern undefined4 volatile DAT_03001fcc;
extern undefined4 volatile DAT_030020c4;
extern undefined4 volatile DAT_03001fc8;
extern undefined volatile _0802542C;
extern undefined4 volatile DAT_03000ff4;
extern undefined1 volatile DAT_03002080;


void sub_08009992(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_0802664C(0,0x10,param_3,param_4,param_4);
  sub_0801F2F4();
  sub_0800C7C6(&DAT_03002080);
  puVar1 = (undefined4 *)sub_0801F08C(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0802542C;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
  }
  sub_0801F2F4();
  DAT_030020c4 = DAT_03001fcc;
  DAT_03000ff4 = DAT_03001fc8;
  return;
}

