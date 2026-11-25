/* IL2CPP: GameLoseState$$OnLevelLose
void GameLoseState__OnLevelLose (GameLoseState_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameLoseState$$OnLevelLose
   void GameLoseState__OnLevelLose (GameLoseState_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void GameLoseState__OnLevelLose_24fe310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4bd5c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4bd5c = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  uStack_38 = 0;
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_48 = TimeProvider__get_UtcNow_24f95ec();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_38 = System_DateTimeOffset__Subtract_30e2d84(auStack_48,param_2,param_3,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar3 = LifeModule__IsEnabled_25460d4(*(long *)(param_1 + 0x98),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar4 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_38,0);
      if (dVar4 < 30.0) {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_025fe42c;
        LifeModule__SpendLife_25461f0(*(long *)(param_1 + 0x98),0);
      }
    }
    return;
  }
LAB_025fe42c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

