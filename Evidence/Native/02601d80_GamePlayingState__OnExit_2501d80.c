/* IL2CPP: GamePlayingState$$OnExit
void GamePlayingState__OnExit (GamePlayingState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GamePlayingState$$OnExit
   void GamePlayingState__OnExit (GamePlayingState_o* __this, const MethodInfo* method); */

void GamePlayingState__OnExit_2501d80(long param_1)

{
  long lVar1;
  long lVar2;
  
  GameStateBase__OnExit_24fe228();
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
  if (lVar1 != 0) {
    if ((bRam0000000004f561a2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a254c8,0);
      bRam0000000004f561a2 = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f561f8 == (code *)0x0) {
        pcRam0000000004f561f8 = (code *)FUN_021f03bc(&UNK_013b6e53);
      }
                    /* WARNING: Could not recover jumptable at 0x03cbd28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f561f8)(lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,0);
}

