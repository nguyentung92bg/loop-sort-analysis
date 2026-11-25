/* IL2CPP: HomeMonitor$$RenderLiveOpsElement
void HomeMonitor__RenderLiveOpsElement (HomeMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, LiveOpsSheet_Row_o* data, int32_t liveOps, LiveOpsBase_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$RenderLiveOpsElement
   void HomeMonitor__RenderLiveOpsElement (HomeMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, LiveOpsSheet_Row_o* data, int32_t liveOps,
   LiveOpsBase_o* instance, const MethodInfo* method); */

void HomeMonitor__RenderLiveOpsElement_2446f9c
               (long param_1,long param_2,long param_3,undefined4 param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b86c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4b86c = 1;
  }
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (((*(long *)(param_1 + 0xd0) != 0) &&
      (uVar1 = LiveOpsModule__CanShowInHome_2547c5c(*(long *)(param_1 + 0xd0),param_4,0),
      param_2 != 0)) &&
     (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), lVar3 != 0)) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar3,0);
    if ((uVar1 & 1) != (uVar2 & 1)) {
      lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
      if (lVar3 == 0) goto LAB_025472b4;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar3,uVar1 & 1,0);
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (param_5 != (long *)0x0) {
      uVar4 = (**(code **)(*param_5 + 0x248))(param_5,*(undefined8 *)(*param_5 + 0x250));
      if (((*(long *)(param_1 + 0xe8) != 0) &&
          (lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x90), lVar3 != 0)) &&
         (lVar3 = HomeLiveOpsSheet__FindSlot_2560f84(lVar3,param_4,0), lVar3 != 0)) {
        uVar5 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar3,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = System_String__IsNullOrEmpty_2f7c924(uVar4,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0xd0) == 0) goto LAB_025472b4;
            uVar5 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0xd0),param_4,0);
            if ((uVar5 & 1) == 0) {
              uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
            }
            else {
              if (*(long *)(param_1 + 0xd0) == 0) goto LAB_025472b4;
              uVar5 = LiveOpsModule__CanComplete_2546e28(*(long *)(param_1 + 0xd0),param_4,0);
              if ((uVar5 & 1) == 0) {
                if (param_3 == 0) goto LAB_025472b4;
                uStack_88 = *(undefined8 *)(param_3 + 0x40);
                uStack_90 = *(undefined8 *)(param_3 + 0x38);
                uStack_78 = *(undefined8 *)(param_3 + 0x50);
                uStack_80 = *(undefined8 *)(param_3 + 0x48);
                uStack_68 = *(undefined8 *)(param_3 + 0x60);
                uStack_70 = *(undefined8 *)(param_3 + 0x58);
                CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                          (&uStack_90,&uStack_50,*(undefined8 *)PTR_DAT_049b5fa8);
                uStack_98 = uStack_48;
                uStack_a0 = uStack_50;
                if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                auVar8 = TimeProvider__get_UtcNow_24f95ec(0);
                if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uStack_60 = System_DateTimeOffset__Subtract_30e2d84
                                      (&uStack_a0,auVar8._0_8_,auVar8._8_8_,0);
                if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                  FUN_021f0574(*(long *)PTR_DAT_049b6128);
                }
                dVar7 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_60,0);
                uVar4 = uStack_60;
                if (0.0 < dVar7) {
                  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
                  goto LAB_02547258;
                }
              }
              uVar4 = Phrase__get_FinishedUpper_2525110(0);
            }
          }
        }
        else {
          uVar4 = Phrase__get_LevelShort_252eea0(0);
          uStack_54 = *(undefined4 *)(lVar3 + 0x18);
          uVar6 = System_Int32__ToString_30fbaa0(&uStack_54,0);
          uVar4 = System_String__Format_2f73700(uVar4,uVar6,0);
        }
LAB_02547258:
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0x43a763b,uVar4,0);
        HomeMonitor__HandleNotificationPopup_24472b8(param_1,param_2,param_4,param_5);
        return;
      }
    }
  }
LAB_025472b4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

