/* sub_0801DDBA  (original: 0x0801DDBA-0x0801DE10 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern int sub_0801F110();
extern undefined volatile _080250A8;
extern char volatile DAT_03002290;
extern undefined volatile _08023A1C;
extern short volatile DAT_03002292;
extern undefined volatile DAT_03001120;
extern undefined volatile _08025FEC;


void sub_0801DDBA(undefined4 *param_1,int param_2)

{
  *param_1 = &_080250A8;
  DAT_03002290 = DAT_03002290 + -1;
  if ((DAT_03002290 == '\0') && (DAT_03002292 != -1)) {
    sub_08006664(&DAT_03001120,(int)DAT_03002292);
    DAT_03002292 = -1;
  }
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  if (param_2 != 0) {
    sub_0801F110(param_1);
  }
  return;
}

