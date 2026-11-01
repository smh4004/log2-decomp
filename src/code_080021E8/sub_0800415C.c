/* sub_0800415C  (original: 0x0800415C-0x080041A6 in asm/code_080021E8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char volatile DAT_03002080;
extern char volatile DAT_03002081;
extern undefined4 volatile gUnknown_086F6C7C;


int sub_0800415C(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = (&gUnknown_086F6C7C)[iVar4];
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      do {
        pcVar3 = *(char **)(iVar2 * 4 + iVar1 + 0x18);
        if ((*pcVar3 == DAT_03002080) && (pcVar3[1] == DAT_03002081)) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    iVar4 = iVar4 + 1;
    if (0x43 < iVar4) {
      return 0;
    }
  } while( true );
}

