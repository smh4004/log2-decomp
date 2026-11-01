/* sub_08021A08  (original: 0x08021A08-0x08021A4C in asm/code_080213FC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-this.
 */
#include "ghidra_types.h"
extern undefined2 * volatile DAT_030038a8;
extern sbyte volatile DAT_030038a0;
extern undefined2 volatile DAT_030038ac;
extern undefined2 volatile REG_IE;
extern undefined2 volatile REG_IME;


void sub_08021A08(void)

{
  ushort uVar1;
  
  REG_IME = 0;
  *DAT_030038a8 = 0;
  DAT_030038a8[1] = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & ~(ushort)(8 << DAT_030038a0);
  REG_IME = DAT_030038ac;
  return;
}

