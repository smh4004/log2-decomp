/* sub_080274B8  (original: 0x080274B8-0x080274E8 in asm/code_08026044.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006664();
extern undefined volatile DAT_03001120;
extern undefined volatile _08023A1C;
extern undefined volatile _08025FEC;


void sub_080274B8(undefined4 *param_1)

{
  *param_1 = &_08023A1C;
  if (*(short *)(param_1 + 3) != -1) {
    sub_08006664(&DAT_03001120);
  }
  *param_1 = &_08025FEC;
  return;
}

