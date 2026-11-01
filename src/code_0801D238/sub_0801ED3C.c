/* sub_0801ED3C  (original: 0x0801ED3C-0x0801ED76 in asm/code_0801D238.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08020A4C();
extern int sub_0801A378();
extern int sub_0801F08C();
extern char volatile DAT_030026cd;
extern undefined * * volatile DAT_030026d4;
extern undefined volatile gUnknown_087FB8D0;
extern undefined volatile _08023AB8;
extern undefined * volatile gUnknown_081D4C58;


undefined4 * sub_0801ED3C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0801F08C(0x12c10), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0801A378(param_1,&gUnknown_087FB8D0);
  *param_1 = &_08023AB8;
  if ((DAT_030026cd != '\x01') || (DAT_030026d4 != &gUnknown_081D4C58)) {
    sub_08020A4C();
  }
  return param_1;
}

