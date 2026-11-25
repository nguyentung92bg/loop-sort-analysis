/* IL2CPP: StreakTournamentSubMonitor$$UpdateCompletedView
void StreakTournamentSubMonitor__UpdateCompletedView (StreakTournamentSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$UpdateCompletedView
   void StreakTournamentSubMonitor__UpdateCompletedView (StreakTournamentSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void StreakTournamentSubMonitor__UpdateCompletedView_248337c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uStack_24;
  
  if ((bRam0000000004f4ba15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b30);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c5b38);
    bRam0000000004f4ba15 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar4 = StreakTournament__GetLeaderboard_2524aac(*(long *)(param_1 + 0xa0),0);
    puVar2 = PTR_DAT_049c5b38;
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar3 = StreakTournament__GetMainPlayerRank_2524c58(*(long *)(param_1 + 0xa0),uVar4,0);
      uStack_24 = uVar3;
      uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
      uVar4 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar4,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0xa59d7244,uVar4,0);
      if (*(long *)(param_1 + 0xf8) != 0) {
        lVar5 = StreakTournamentLeaderboardElement__GetRewards_2483878
                          (*(long *)(param_1 + 0xf8),uVar3);
        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 1)) {
          uVar1 = 0x99f4e89d;
        }
        else {
          uVar1 = 0x39cfe44a;
        }
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,uVar1,0);
        if (*(long *)(param_1 + 0xf8) != 0) {
          StreakTournamentLeaderboardElement__UpdateLeaderboardRewardView_24838f4
                    (*(long *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xd0),lVar5,uVar3);
          if (lVar5 == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x110) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                      (*(long *)(param_1 + 0x110),lVar5,*(undefined8 *)PTR_DAT_049c5b30);
            if (*(long *)(param_1 + 0xa0) != 0) {
              StreakTournament__TrackLeaderboardRewardClaim_2526984
                        (*(long *)(param_1 + 0xa0),lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

