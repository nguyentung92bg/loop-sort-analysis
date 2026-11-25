/* IL2CPP: VideoRewardsSubMonitor$$Setup
void VideoRewardsSubMonitor__Setup (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsSubMonitor$$Setup
   void VideoRewardsSubMonitor__Setup (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
    */

void VideoRewardsSubMonitor__Setup_248acd8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_74;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_049c5d00;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba43 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c5d08);
    FUN_021f03f8(PTR_DAT_049c5d10);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c5d00);
    bRam0000000004f4ba43 = 1;
  }
  iStack_74 = 0;
  SubMonitorBase__Setup_2481334(param_1);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xc6079fd1,uVar6,0);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x844457fc,0);
  puVar4 = PTR_DAT_049c5d10;
  puVar3 = PTR_DAT_049c3e40;
  puVar2 = PTR_DAT_049b8a18;
  puVar1 = PTR_DAT_049b8758;
  lVar9 = param_1[10];
  if (lVar9 != 0) {
    iVar11 = 0;
    while (iVar5 = VideoRewards__get_Count_2529ad8(lVar9,0), iVar11 < iVar5) {
      if ((lVar7 == 0) ||
         (lVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0),
         lVar9 == 0)) goto LAB_0258af74;
      lVar8 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar9,0);
      uVar12 = VideoRewardsSubMonitor__GetMilestoneProgress_248afc0(param_1,iVar11 + 1);
      if (lVar8 == 0) goto LAB_0258af74;
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(uVar12,0x3f000000,lVar8,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(uVar12,0x3f000000,lVar8,0);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(puVar2);
        cRam0000000004f49d57 = '\x01';
      }
      puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(*puVar10,puVar10[1],lVar8,0);
      iStack_74 = iVar11 + 1;
      uVar6 = System_Int32__ToString_30fbaa0(&iStack_74,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (lVar9,0x844457fc,uVar6,0);
      if (param_1[10] == 0) goto LAB_0258af74;
      iStack_74 = VideoRewards__GetReward_2529fd8(param_1[10],iVar11,0);
      uVar6 = System_Int32__ToString_30fbaa0(&iStack_74,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (lVar9,0x9927ed9b,uVar6,0);
      lVar8 = param_1[8];
      if (lVar8 == 0) goto LAB_0258af74;
      iVar5 = *(int *)(lVar8 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = System_Math__Min_30ff6e8(iVar11,iVar5 + -1,0);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar8,uVar12,&uStack_68,*(undefined8 *)puVar4);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                (lVar9,0xbcdc2f95,uStack_68,0);
      if (param_1[0xd] == 0) goto LAB_0258af74;
      FUN_02333498(param_1[0xd],lVar9,*(undefined8 *)puVar3);
      lVar9 = param_1[10];
      iVar11 = iVar11 + 1;
      if (lVar9 == 0) goto LAB_0258af74;
    }
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (param_1[9] != 0) {
      VideoRewardsScene__PlayIntro_2469b8c(param_1[9],param_1[0xd],0);
      return;
    }
  }
LAB_0258af74:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

