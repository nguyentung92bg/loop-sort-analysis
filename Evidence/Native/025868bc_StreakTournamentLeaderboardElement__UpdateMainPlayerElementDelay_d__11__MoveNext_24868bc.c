/* IL2CPP: StreakTournamentLeaderboardElement.<UpdateMainPlayerElementDelay>d__11$$MoveNext
void StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_d__11__MoveNext (StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement.<UpdateMainPlayerElementDelay>d__11$$MoveNext
   void StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_d__11__MoveNext
   (StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_d__11_o __this, const
   MethodInfo* method); */

void StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_d__11__MoveNext_24868bc
               (int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba2d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5bd0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba2d = 1;
  }
  lVar6 = *(long *)(param_1 + 4);
  uStack_28 = 0;
  if (*param_1 == 0) {
    uStack_28._4_4_ = param_1[6];
    param_1[6] = 0;
    *param_1 = -1;
    uStack_28._0_4_ = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ffc(0xd,0);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    iVar3 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
    uStack_28._4_4_ = iVar3;
    uVar4 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                      ((long)&uStack_28 + 4,0);
    puVar1 = PTR_DAT_049c5bd0;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      uVar5 = *(undefined8 *)puVar1;
      param_1[6] = uStack_28._4_4_;
      FUN_0235c420(param_1 + 2,(long)&uStack_28 + 4,param_1,uVar5);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54((long)&uStack_28 + 4,0);
  if (lVar6 != 0) {
    StreakTournamentLeaderboardElement__UpdateMainPlayerElement_2485f20(lVar6);
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

