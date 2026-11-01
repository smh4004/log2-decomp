/* sub_08018154  (original: 0x08018154-0x0801816C in asm/code_08016E8C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_BG3VOFS;


void sub_08018154(int param_1)

{
  REG_BG2HOFS = (short)*(undefined4 *)(param_1 + 0x8098);
  REG_BG2VOFS = (short)*(undefined4 *)(param_1 + 0x809c);
  REG_BG3HOFS = (short)*(undefined4 *)(param_1 + 0x8098);
  REG_BG3VOFS = (short)*(undefined4 *)(param_1 + 0x809c);
  return;
}

