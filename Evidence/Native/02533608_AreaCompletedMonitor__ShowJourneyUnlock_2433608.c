/* IL2CPP: AreaCompletedMonitor$$ShowJourneyUnlock
void AreaCompletedMonitor__ShowJourneyUnlock (AreaCompletedMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreaCompletedMonitor$$ShowJourneyUnlock
   void AreaCompletedMonitor__ShowJourneyUnlock (AreaCompletedMonitor_o* __this, AreaSheet_Row_o*
   area, const MethodInfo* method); */

void AreaCompletedMonitor__ShowJourneyUnlock_2433608(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b7eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c27e8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c39f0);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b7eb = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  auVar11 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  if ((((*(long *)(param_1 + 0xc0) != 0) &&
       (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xc0),0),
       auVar2._8_8_ = auStack_68._8_8_, auVar2._0_8_ = auStack_68._0_8_,
       auVar11._8_8_ = auStack_58._8_8_, auVar11._0_8_ = auStack_58._0_8_, lVar7 != 0)) &&
      (UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0), auVar3._8_8_ = auStack_68._8_8_,
      auVar3._0_8_ = auStack_68._0_8_, auVar2._8_8_ = auStack_68._8_8_,
      auVar2._0_8_ = auStack_68._0_8_, auVar10._8_8_ = auStack_58._8_8_,
      auVar10._0_8_ = auStack_58._0_8_, auVar11._8_8_ = auStack_58._8_8_,
      auVar11._0_8_ = auStack_58._0_8_, param_2 != 0)) &&
     (auVar11 = auVar10, auVar2 = auVar3, *(long *)(param_1 + 0x98) != 0)) {
    uVar6 = Areas__TryGetBackground_256fb4c
                      (*(long *)(param_1 + 0x98),*(undefined4 *)(param_2 + 0x20),1,&uStack_48,0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                      (*(undefined8 *)(param_1 + 0xc0),0x3b77286f,0);
    puVar5 = PTR_DAT_049b6110;
    auVar2._8_8_ = auStack_68._8_8_;
    auVar2._0_8_ = auStack_68._0_8_;
    auVar11._8_8_ = auStack_58._8_8_;
    auVar11._0_8_ = auStack_58._0_8_;
    if (lVar7 != 0) {
      UnityEngine_Behaviour__set_enabled_3c17eec(lVar7,uVar6 & 1,0);
      if ((uVar6 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (*(undefined8 *)(param_1 + 0xc0),0x3b77286f,uStack_48,0);
      }
      puVar4 = PTR_DAT_049b4540;
      uVar9 = *(undefined8 *)(param_1 + 0xc0);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = Extensions__ToLocalizedName_24e8258(uVar1,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar9,0x8ac5d12b,uVar8,0);
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      lVar7 = FUN_021f04e4(*(undefined8 *)puVar4,1);
      uVar9 = AreaSheet_Row__get_LevelRange_2558608(param_2,0);
      auVar2._8_8_ = auStack_68._8_8_;
      auVar2._0_8_ = auStack_68._0_8_;
      auVar11._8_8_ = auStack_58._8_8_;
      auVar11._0_8_ = auStack_58._0_8_;
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined8 *)(lVar7 + 0x20) = uVar9;
        thunk_FUN_021f190c();
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                  (uVar8,0x9d9334f4,lVar7,0);
        puVar5 = PTR_DAT_049c1680;
        auVar2._8_8_ = auStack_68._8_8_;
        auVar2._0_8_ = auStack_68._0_8_;
        auVar11._8_8_ = auStack_58._8_8_;
        auVar11._0_8_ = auStack_58._0_8_;
        if (*(long *)(param_1 + 200) != 0) {
          LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 200),0);
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          auStack_58 = LitMotion_LMotion__Create_2eaa1b4
                                 (*(float *)(lVar7 + 0xc) * _UNK_013aa4b8,
                                  *(float *)(lVar7 + 0x10) * _UNK_013aa4b8,
                                  *(float *)(lVar7 + 0x14) * _UNK_013aa4b8,0);
          auVar10 = FUN_024f4e50(auStack_58,0x1a,*(undefined8 *)puVar5);
          lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (*(undefined8 *)(param_1 + 0xc0),0x95f4723c,0);
          puVar4 = PTR_DAT_049c39f0;
          puVar5 = PTR_DAT_049c1670;
          auVar2._8_8_ = auStack_68._8_8_;
          auVar2._0_8_ = auStack_68._0_8_;
          auVar11 = auStack_58;
          if (lVar7 != 0) {
            uVar9 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar7,0);
            auVar11 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                (auVar10._0_8_,auVar10._8_8_,uVar9,*(undefined8 *)puVar5);
            LitMotion_MotionHandleExtensions__AddTo_2eacb44
                      (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 200),0);
            auStack_68 = LitMotion_LMotion__Create_2ea9f9c(0,0xc3b40000,0x41400000,0);
            auVar10 = FUN_0253a3a4(auStack_68,0xffffffff,0,*(undefined8 *)puVar4);
            lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                              (*(undefined8 *)(param_1 + 0xc0),0x1f01e0a3,0);
            puVar5 = PTR_DAT_049c27e8;
            auVar11 = auStack_58;
            auVar2 = auStack_68;
            if (lVar7 != 0) {
              uVar9 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar7,0);
              auVar11 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAnglesZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671254
                                  (auVar10._0_8_,auVar10._8_8_,uVar9,*(undefined8 *)puVar5);
              LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 200),0);
              return;
            }
          }
        }
      }
    }
  }
  auStack_68 = auVar2;
  auStack_58 = auVar11;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

