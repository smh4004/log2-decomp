/* sub_0800EC82  (original: 0x0800EC82-0x0800ECC6 in asm/code_0800E838.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 9/9 snapshots, 59% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern int sub_0801F110();
extern char volatile DAT_03002140;
extern undefined volatile _08024014;
extern short volatile DAT_03002142;
extern undefined volatile DAT_03001120;
extern undefined volatile _08025FEC;


void sub_0800EC82(undefined4 *param_1,int param_2)

{
  *param_1 = &_08024014;
  DAT_03002140 = DAT_03002140 + -1;
  if ((DAT_03002140 == '\0') && (DAT_03002142 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002142);
    DAT_03002142 = -1;
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

