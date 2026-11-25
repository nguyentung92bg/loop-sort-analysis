/* IL2CPP: StreakTournamentSubMonitor$$UpdateRewardView
void StreakTournamentSubMonitor__UpdateRewardView (StreakTournamentSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_Collections_Generic_List_RewardInfo__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$UpdateRewardView
   void StreakTournamentSubMonitor__UpdateRewardView (StreakTournamentSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, System_Collections_Generic_List_RewardInfo__o*
   rewards, const MethodInfo* method); */

void StreakTournamentSubMonitor__UpdateRewardView_24836b0
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4ba14 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c4b70);
    bRam0000000004f4ba14 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_3 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = 0 < *(int *)(param_3 + 0x18);
  }
  uVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__HasObject_335134c
                    (param_2,0x78d4e5eb,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (param_2,0x78d4e5eb,0);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_02583874;
    UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar3 + 0x20),bVar5,0);
  }
  if (bVar5 != false) {
    if (param_3 == 0) goto LAB_02583874;
    iVar1 = *(int *)(param_3 + 0x18);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_3,0,&uStack_28,*(undefined8 *)PTR_DAT_049c4b70);
    if (iVar1 < 2) {
      if (*(long *)(param_1 + 0xb8) == 0) {
LAB_02583874:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar4 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0xb8),uStack_28,uStack_24,0);
      if ((*(long *)(param_1 + 0xb8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28), lVar3 == 0)) goto LAB_02583874;
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar3,&uStack_28,&uStack_70,*(undefined8 *)PTR_DAT_049c2d00);
    }
    else {
      uStack_68 = *(undefined8 *)(param_1 + 0x90);
      uStack_70 = *(undefined8 *)(param_1 + 0x88);
      uStack_60 = *(undefined8 *)(param_1 + 0x98);
      uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_40 = uStack_60;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0x78d4e5eb,uVar4,0);
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_80 = uStack_40;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (param_2,0x78d4e5eb,&uStack_90,0);
  }
  return;
}

