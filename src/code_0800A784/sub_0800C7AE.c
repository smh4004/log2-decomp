/* sub_0800C7AE  (original: 0x0800C7AE-0x0800C7C6 in asm/code_0800A784.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006460();
extern int sub_08006F4A();
extern undefined4 volatile DAT_03002070;
extern undefined4 volatile DAT_03002074;
extern undefined4 volatile DAT_03002078;
extern undefined4 volatile DAT_0300207c;
extern undefined volatile DAT_03001090;
extern undefined volatile DAT_03001120;


void sub_0800C7AE(undefined4 *param_1)

{
  DAT_03002070 = *param_1;
  DAT_03002074 = param_1[1];
  DAT_03002078 = param_1[2];
  DAT_0300207c = param_1[3];
  sub_08006460(&DAT_03001090);
  sub_08006F4A(&DAT_03001120);
  return;
}

