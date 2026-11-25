/* IL2CPP: HomeMonitor.<>c__DisplayClass58_0$$<CreateLiveOpsSlotElement>b__1
void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__1 (HomeMonitor___c__DisplayClass58_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<>c__DisplayClass58_0$$<CreateLiveOpsSlotElement>b__1
   void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__1
   (HomeMonitor___c__DisplayClass58_0_o* __this, const MethodInfo* method); */

void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__1_24489c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  double dVar12;
  undefined1 auVar13 [16];
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
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  plVar10 = *(long **)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
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
  if (((*(long *)(lVar11 + 0xd0) != 0) &&
      (uVar4 = LiveOpsModule__CanShowInHome_2547c5c(*(long *)(lVar11 + 0xd0),uVar3,0), lVar1 != 0))
     && (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0), lVar6 != 0)) {
    uVar5 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar6,0);
    if ((uVar4 & 1) != (uVar5 & 1)) {
      lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0);
      if (lVar6 == 0) goto LAB_025472b4;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,uVar4 & 1,0);
    }
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (plVar10 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
      if (((*(long *)(lVar11 + 0xe8) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar11 + 0xe8) + 0x90), lVar6 != 0)) &&
         (lVar6 = HomeLiveOpsSheet__FindSlot_2560f84(lVar6,uVar3,0), lVar6 != 0)) {
        uVar8 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar6,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = System_String__IsNullOrEmpty_2f7c924(uVar7,0);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(lVar11 + 0xd0) == 0) goto LAB_025472b4;
            uVar8 = LiveOpsModule__IsJoined_2546cc0(*(long *)(lVar11 + 0xd0),uVar3,0);
            if ((uVar8 & 1) == 0) {
              uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
            }
            else {
              if (*(long *)(lVar11 + 0xd0) == 0) goto LAB_025472b4;
              uVar8 = LiveOpsModule__CanComplete_2546e28(*(long *)(lVar11 + 0xd0),uVar3,0);
              if ((uVar8 & 1) == 0) {
                if (lVar2 == 0) goto LAB_025472b4;
                uStack_88 = *(undefined8 *)(lVar2 + 0x40);
                uStack_90 = *(undefined8 *)(lVar2 + 0x38);
                uStack_78 = *(undefined8 *)(lVar2 + 0x50);
                uStack_80 = *(undefined8 *)(lVar2 + 0x48);
                uStack_68 = *(undefined8 *)(lVar2 + 0x60);
                uStack_70 = *(undefined8 *)(lVar2 + 0x58);
                CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                          (&uStack_90,&uStack_50,*(undefined8 *)PTR_DAT_049b5fa8);
                uStack_98 = uStack_48;
                uStack_a0 = uStack_50;
                if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                auVar13 = TimeProvider__get_UtcNow_24f95ec(0);
                if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uStack_60 = System_DateTimeOffset__Subtract_30e2d84
                                      (&uStack_a0,auVar13._0_8_,auVar13._8_8_,0);
                if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                  FUN_021f0574(*(long *)PTR_DAT_049b6128);
                }
                dVar12 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_60,0);
                uVar7 = uStack_60;
                if (0.0 < dVar12) {
                  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar7 = Extensions__ToReadableString_24e7038(uVar7,2,0);
                  goto LAB_02547258;
                }
              }
              uVar7 = Phrase__get_FinishedUpper_2525110(0);
            }
          }
        }
        else {
          uVar7 = Phrase__get_LevelShort_252eea0(0);
          uStack_54 = *(undefined4 *)(lVar6 + 0x18);
          uVar9 = System_Int32__ToString_30fbaa0(&uStack_54,0);
          uVar7 = System_String__Format_2f73700(uVar7,uVar9,0);
        }
LAB_02547258:
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (lVar1,0x43a763b,uVar7,0);
        HomeMonitor__HandleNotificationPopup_24472b8(lVar11,lVar1,uVar3,plVar10);
        return;
      }
    }
  }
LAB_025472b4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

