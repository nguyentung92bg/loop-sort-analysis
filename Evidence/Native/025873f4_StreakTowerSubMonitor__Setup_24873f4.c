/* IL2CPP: StreakTowerSubMonitor$$Setup
void StreakTowerSubMonitor__Setup (StreakTowerSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$Setup
   void StreakTowerSubMonitor__Setup (StreakTowerSubMonitor_o* __this, const MethodInfo* method); */

void StreakTowerSubMonitor__Setup_24873f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4ba33 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c5bf0);
    FUN_021f03f8(PTR_DAT_049befe0);
    FUN_021f03f8(PTR_DAT_049c5bf8);
    FUN_021f03f8(PTR_DAT_049c5c00);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba33 = 1;
  }
  SubMonitorBase__Setup_2481334(param_1);
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x6fcf623b,0)
  ;
  if (lVar5 != 0) {
    uVar6 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    thunk_FUN_021f190c();
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x21c0801,0);
    puVar4 = PTR_DAT_049c5c00;
    puVar3 = PTR_DAT_049c5bf8;
    puVar2 = PTR_DAT_049b8d80;
    puVar1 = PTR_DAT_049b5480;
    if (lVar5 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar5,&uStack_38,*(undefined8 *)PTR_DAT_049c5bf0);
      *(undefined8 *)(param_1 + 0x78) = uStack_38;
      thunk_FUN_021f190c();
      uVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_1,0x13d626de,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      uVar6 = Extensions__GetRectTransform_3f0c498(uVar6,0);
      *(undefined8 *)(param_1 + 0x80) = uVar6;
      thunk_FUN_021f190c();
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar3,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                (param_1,0xa66c44de,uVar6,0);
      lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,0xa66c44de,0);
      plVar7 = (long *)(param_1 + 0x68);
      *plVar7 = lVar5;
      thunk_FUN_021f190c(plVar7,lVar5);
      lVar5 = *plVar7;
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar4,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                (lVar5,0x99f4e89d,uVar6,0);
      if ((*plVar7 != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(*plVar7,0), lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
        StreakTowerSubMonitor__CreateStageElements_2487664(param_1);
        UnityEngine_Canvas__ForceUpdateCanvases_3ec836c(0);
        if (*(long *)(param_1 + 0x78) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x20);
          if (*(int *)(*(long *)PTR_DAT_049befe0 + 0xe4) == 0) {
            FUN_021f0574();
          }
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_3ed78b8(uVar6,0);
          StreakTowerSubMonitor__UpdatePlayer_2487988(param_1);
          StreakTowerSubMonitor__UpdateStages_2487a18(param_1);
          StreakTowerSubMonitor__UpdateBackground_2487c58(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

