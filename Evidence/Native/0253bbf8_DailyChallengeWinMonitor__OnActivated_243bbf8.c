/* IL2CPP: DailyChallengeWinMonitor$$OnActivated
void DailyChallengeWinMonitor__OnActivated (DailyChallengeWinMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeWinMonitor$$OnActivated
   void DailyChallengeWinMonitor__OnActivated (DailyChallengeWinMonitor_o* __this, const MethodInfo*
   method); */

void DailyChallengeWinMonitor__OnActivated_243bbf8(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0xa0),0),
     plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x8ac5d07a,uVar3,0);
    lVar4 = *(long *)(param_1 + 0xa8);
    uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (lVar4 != 0) {
      uStack_24 = DailyChallenge__GetReward_2515c98(lVar4,uVar1,0);
      uVar3 = System_Int32__ToString_30fbaa0(&uStack_24,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x78d4e5eb,uVar3,0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

