/* IL2CPP: GameReviveState$$OnExit
void GameReviveState__OnExit (GameReviveState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02635d70) */
/* WARNING: Removing unreachable block (ram,0x02635d78) */
/* IL2CPP: GameReviveState$$OnExit
   void GameReviveState__OnExit (GameReviveState_o* __this, const MethodInfo* method); */

void GameReviveState__OnExit_2501f28(long param_1)

{
  long lVar1;
  
  GameStateBase__OnExit_24fe228();
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bf5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0,0,0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4bf5a = 1;
  }
  if (*(long *)(lVar1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(*(long *)(lVar1 + 0x48) + 0x20) < 1) {
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}

