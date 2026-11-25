/* IL2CPP: StreakTournamentPersonalRewardsElement$$CreateMilestoneElement
void StreakTournamentPersonalRewardsElement__CreateMilestoneElement (StreakTournamentPersonalRewardsElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentPersonalRewardSheet_Row_o* data, int32_t milestone, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPersonalRewardsElement$$CreateMilestoneElement
   void StreakTournamentPersonalRewardsElement__CreateMilestoneElement
   (StreakTournamentPersonalRewardsElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o*
   view, StreakTournamentPersonalRewardSheet_Row_o* data, int32_t milestone, const MethodInfo*
   method); */

void StreakTournamentPersonalRewardsElement__CreateMilestoneElement_2486c38
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iStack_34;
  
  puVar2 = PTR_DAT_049c5bd8;
  iStack_34 = param_4;
  if ((bRam0000000004f4ba30 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b50);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c5be0);
    FUN_021f03f8(PTR_DAT_049c5bd8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba30 = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar4,0);
  if (lVar4 == 0) goto LAB_02586e70;
  *(long *)(lVar4 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar4 + 0x10),param_1);
  puVar8 = (undefined8 *)(lVar4 + 0x18);
  *puVar8 = param_2;
  thunk_FUN_021f190c(puVar8,param_2);
  uVar9 = *puVar8;
  uVar5 = System_Int32__ToString_30fbaa0(&iStack_34,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar9,0x844457fc,uVar5,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02586e70;
  iVar3 = StreakTournament__get_Personal_2524224(*(long *)(param_1 + 0x10),0);
  uVar1 = 0xf5401aea;
  if (iStack_34 <= iVar3) {
    uVar1 = 0x93dbeb55;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar8,uVar1,0);
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x120), lVar6 == 0)) goto LAB_02586e70;
  iVar3 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                    (lVar6,*(undefined8 *)PTR_DAT_049c5b50);
  if (iStack_34 == 1) {
    uVar1 = 0x43a763b;
LAB_02586d94:
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*puVar8,uVar1,0);
  }
  else if (iStack_34 == iVar3) {
    uVar1 = 0x598fdb13;
    goto LAB_02586d94;
  }
  if (param_3 != 0) {
    lVar6 = StreakTournamentPersonalRewardSheet_Row__GetRewards_2568380(param_3,0);
    plVar7 = (long *)(lVar4 + 0x20);
    *plVar7 = lVar6;
    thunk_FUN_021f190c(plVar7,lVar6);
    if (*(long *)(param_1 + 0x30) != 0) {
      StreakTournamentSubMonitor__UpdateRewardView_24836b0
                (*(long *)(param_1 + 0x30),*puVar8,*plVar7);
      lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                        (*puVar8,0x78d4e5eb,0);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x100) != 0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar6 + 0x100),0);
        if ((*plVar7 != 0) && (1 < *(int *)(*plVar7 + 0x18))) {
          lVar6 = *(long *)(lVar6 + 0x100);
          uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
          UnityEngine_Events_UnityAction___ctor_3c32934
                    (uVar5,lVar4,*(undefined8 *)PTR_DAT_049c5be0,0);
          if (lVar6 == 0) goto LAB_02586e70;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar6,uVar5,0);
        }
        return;
      }
    }
  }
LAB_02586e70:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

