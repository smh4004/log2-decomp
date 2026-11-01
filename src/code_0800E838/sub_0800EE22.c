/* sub_0800EE22  (original: 0x0800EE22-0x0800EE50 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern char volatile DAT_03002140;
extern short volatile DAT_03002142;
extern undefined volatile DAT_03001120;


void sub_0800EE22(void)

{
  DAT_03002140 = DAT_03002140 + -1;
  if ((DAT_03002140 == '\0') && (DAT_03002142 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002142);
    DAT_03002142 = -1;
  }
  return;
}

