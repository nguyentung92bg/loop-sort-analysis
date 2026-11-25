/* IL2CPP: GameWinState$$OnLevelLose
void GameWinState__OnLevelLose (GameWinState_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameWinState$$OnLevelLose
   void GameWinState__OnLevelLose (GameWinState_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void GameWinState__OnLevelLose_2503ed4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd7d = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049c5aa8;
  lVar2 = *(long *)(lVar2 + 0xb8);
  if ((bRam0000000004f4bcb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb1 = 1;
  }
  uStack_38 = *(undefined8 *)(lVar2 + 0x370);
  uStack_40 = *(undefined8 *)(lVar2 + 0x368);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,0,0);
  return;
}

