/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateLeaderboardRewardView
void StreakTournamentLeaderboardElement__UpdateLeaderboardRewardView (StreakTournamentLeaderboardElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_Collections_Generic_List_RewardInfo__o* rewards, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateLeaderboardRewardView
   void StreakTournamentLeaderboardElement__UpdateLeaderboardRewardView
   (StreakTournamentLeaderboardElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view,
   System_Collections_Generic_List_RewardInfo__o* rewards, int32_t rank, const MethodInfo* method);
    */

void StreakTournamentLeaderboardElement__UpdateLeaderboardRewardView_24838f4
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4ba2b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4ba2b = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_02583a34:
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    StreakTournamentSubMonitor__UpdateRewardView_24836b0(*(long *)(param_1 + 0x30),param_2,param_3);
    if (param_4 == 3) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_02583a34;
      uStack_58 = *(undefined8 *)(lVar3 + 0x80);
      uStack_60 = *(undefined8 *)(lVar3 + 0x78);
      uVar4 = *(undefined8 *)(lVar3 + 0x70);
    }
    else if (param_4 == 2) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_02583a34;
      uStack_58 = *(undefined8 *)(lVar3 + 0x68);
      uStack_60 = *(undefined8 *)(lVar3 + 0x60);
      uVar4 = *(undefined8 *)(lVar3 + 0x58);
    }
    else if (param_4 == 1) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_02583a34;
      uStack_58 = *(undefined8 *)(lVar3 + 0x50);
      uStack_60 = *(undefined8 *)(lVar3 + 0x48);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
    }
    else {
      uVar4 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uStack_68 = uStack_58;
      uStack_70 = uStack_60;
      uStack_78 = uVar4;
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                (param_2,0x78d4e5eb,&uStack_78,0);
    }
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

