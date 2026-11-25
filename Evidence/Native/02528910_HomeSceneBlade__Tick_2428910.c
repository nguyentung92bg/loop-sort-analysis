/* IL2CPP: HomeSceneBlade$$Tick
void HomeSceneBlade__Tick (HomeSceneBlade_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneBlade$$Tick
   void HomeSceneBlade__Tick (HomeSceneBlade_o* __this, float t, const MethodInfo* method); */

void HomeSceneBlade__Tick_2428910(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049c3110;
                    /* try { // try from 02528918 to 02628923 has its CatchHandler @ 025289f4 */
  if ((bRam0000000004f4b7a3 & 1) == 0) {
                    /* try { // try from 02528940 to 0262896b has its CatchHandler @ 025289fc */
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7a3 = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025289d4 to 026289d7 has its CatchHandler @ 025289f0 */
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
                    /* try { // try from 025289d8 to 026289db has its CatchHandler @ 025289e8 */
  if (lVar2 != 0) {
    if ((bRam0000000004f58a11 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a11 = 1;
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
      }
      if (pcRam0000000004f58a78 == (code *)0x0) {
        pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
      }
      (*pcRam0000000004f58a78)(lVar3,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

