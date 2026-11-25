/* IL2CPP: StreakTournamentLeaderboardElement$$CreatePlayerElement
void StreakTournamentLeaderboardElement__CreatePlayerElement (StreakTournamentLeaderboardElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentPlayer_o data, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$CreatePlayerElement
   void StreakTournamentLeaderboardElement__CreatePlayerElement
   (StreakTournamentLeaderboardElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view,
   StreakTournamentPlayer_o data, int32_t idx, const MethodInfo* method); */

void StreakTournamentLeaderboardElement__CreatePlayerElement_2485bfc
               (long param_1,undefined8 param_2,byte *param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_34;
  
  puVar1 = PTR_DAT_049c5bb0;
  if ((bRam0000000004f4ba29 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c5bb8);
    FUN_021f03f8(PTR_DAT_049c5bb0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba29 = 1;
  }
  iStack_34 = 0;
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar2 + 0x10),param_1);
    puVar6 = (undefined8 *)(lVar2 + 0x18);
    *puVar6 = param_2;
    thunk_FUN_021f190c(puVar6,param_2);
    iStack_34 = param_4 + 1;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*puVar6,0x5f10e269,0);
    uVar7 = *puVar6;
    uVar3 = System_Int32__ToString_30fbaa0(&iStack_34,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar7,0xd1436656,uVar3,0);
    uVar7 = *puVar6;
    uVar3 = System_Int32__ToString_30fbaa0(param_3 + 0x24,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar7,0x5f7a3f9f,uVar3,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (*puVar6,0x8ac5d12b,*(undefined8 *)(param_3 + 0x10),0);
    uStack_78 = *(undefined8 *)(param_3 + 8);
    uStack_80 = *(undefined8 *)param_3;
    uStack_68 = *(undefined8 *)(param_3 + 0x18);
    uStack_70 = *(undefined8 *)(param_3 + 0x10);
    uVar3 = *puVar6;
    uStack_58 = *(undefined8 *)(param_3 + 0x28);
    uStack_60 = *(undefined8 *)(param_3 + 0x20);
    uStack_48 = *(undefined8 *)(param_3 + 0x38);
    uStack_50 = *(undefined8 *)(param_3 + 0x30);
    if (*(long *)(param_1 + 0x20) != 0) {
      uStack_a0 = uStack_78;
      uStack_98 = uStack_70;
      uStack_90 = uStack_68;
      uVar7 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0x20),&uStack_a0,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                (uVar3,0xbd13b84d,uVar7,0);
      if ((*param_3 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (*puVar6,0xa41ab296,0);
      }
      if (iStack_34 - 1U < 3) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (*puVar6,*(undefined4 *)(&UNK_013e9ee0 + (ulong)(iStack_34 - 1U) * 4),0);
      }
      lVar4 = StreakTournamentLeaderboardElement__GetRewards_2483878(param_1,iStack_34);
      plVar5 = (long *)(lVar2 + 0x20);
      *plVar5 = lVar4;
      thunk_FUN_021f190c(plVar5,lVar4);
      StreakTournamentLeaderboardElement__UpdateLeaderboardRewardView_24838f4
                (param_1,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),iStack_34);
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                        (*(undefined8 *)(lVar2 + 0x18),0x78d4e5eb,0);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x100) != 0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar4 + 0x100),0);
        if ((*plVar5 != 0) && (1 < *(int *)(*plVar5 + 0x18))) {
          lVar4 = *(long *)(lVar4 + 0x100);
          uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
          UnityEngine_Events_UnityAction___ctor_3c32934
                    (uVar3,lVar2,*(undefined8 *)PTR_DAT_049c5bb8,0);
          if (lVar4 == 0) goto LAB_02585e90;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar4,uVar3,0);
        }
        return;
      }
    }
  }
LAB_02585e90:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

