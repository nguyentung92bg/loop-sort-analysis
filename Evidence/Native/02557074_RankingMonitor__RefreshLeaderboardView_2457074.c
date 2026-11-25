/* IL2CPP: RankingMonitor$$RefreshLeaderboardView
void RankingMonitor__RefreshLeaderboardView (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$RefreshLeaderboardView
   void RankingMonitor__RefreshLeaderboardView (RankingMonitor_o* __this, const MethodInfo* method);
    */

long RankingMonitor__RefreshLeaderboardView_2457074(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x140);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(lVar4 + 0x10) == '\0') {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if (*(char *)(lVar4 + 0x18) != '\0') {
    if (iVar1 < 0) {
      if (iVar1 == -0x7eccf574) goto RankingMonitor__OnCountryClicked_2458ba4;
      if (iVar1 != -0x6eb81eab) {
        return param_1;
      }
    }
    else {
      if (iVar1 == 0x175d5162) goto RankingMonitor__OnWorldClicked_2458b54;
      if (iVar1 != 0) {
        return param_1;
      }
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar3 = Leaderboard__get_TournamentId_251cbe4(*(long *)(param_1 + 0xa8),0);
      RankingMonitor__SelectLeaderboard_245734c(param_1,uVar3,0x9147e155);
      if (*(long *)(param_1 + 0x160) != 0) {
        uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                          (*(long *)(param_1 + 0x160),0);
RankingMonitor__PopulateLeaderboard_2457440:
        puVar2 = PTR_DAT_049c4b48;
        if ((bRam0000000004f4b8f8 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c4b48);
          bRam0000000004f4b8f8 = 1;
        }
        uStack_68 = 0;
        lStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
        lStack_70 = param_1;
        thunk_FUN_021f190c(&lStack_70,param_1);
        uStack_68 = uVar3;
        thunk_FUN_021f190c(&uStack_68,0);
        uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                  ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar2);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (iVar1 != -0x7eccf574) {
    if ((iVar1 != 0x175d5162) && (iVar1 != 0)) {
      return param_1;
    }
RankingMonitor__OnWorldClicked_2458b54:
    if (*(long *)(param_1 + 0xa8) == 0) {
LAB_02558ba0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = Leaderboard__get_LevelWorldId_251cc24(*(long *)(param_1 + 0xa8),0);
    RankingMonitor__SelectLeaderboard_245734c(param_1,uVar3,0x175d5162);
    if (*(long *)(param_1 + 0x160) == 0) goto LAB_02558ba0;
    uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                      (*(long *)(param_1 + 0x160),0);
    goto RankingMonitor__PopulateLeaderboard_2457440;
  }
RankingMonitor__OnCountryClicked_2458ba4:
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar3 = Leaderboard__get_LevelCountryId_251cc64(*(long *)(param_1 + 0xa8),0);
    RankingMonitor__SelectLeaderboard_245734c(param_1,uVar3,0x81330a8c);
    if (*(long *)(param_1 + 0x160) != 0) {
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(param_1 + 0x160),0);
      goto RankingMonitor__PopulateLeaderboard_2457440;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

