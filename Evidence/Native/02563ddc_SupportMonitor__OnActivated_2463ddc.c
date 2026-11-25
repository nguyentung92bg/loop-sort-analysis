/* IL2CPP: SupportMonitor$$OnActivated
void SupportMonitor__OnActivated (SupportMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$OnActivated
   void SupportMonitor__OnActivated (SupportMonitor_o* __this, const MethodInfo* method); */

void SupportMonitor__OnActivated_2463ddc(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
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
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4b95e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c5130);
    FUN_021f03f8(PTR_DAT_049c5138);
    FUN_021f03f8(PTR_DAT_049c3d88);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4b95e = 1;
  }
  puVar3 = PTR_DAT_049b5310;
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c3d90;
  auVar13 = TimeProvider__get_UtcNow_24f95ec(0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar3;
  }
  puVar6 = PTR_DAT_049c3d88;
  puVar2 = PTR_DAT_049b5050;
  lVar8 = *(long *)(lVar8 + 0xb8);
  uStack_78 = *(undefined8 *)(lVar8 + 0x600);
  uStack_80 = *(undefined8 *)(lVar8 + 0x5f8);
  uStack_68 = *(undefined8 *)(lVar8 + 0x610);
  uStack_70 = *(undefined8 *)(lVar8 + 0x608);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049b6128;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  PlayerPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2911918
            (&uStack_a0,&uStack_60,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar9 = System_DateTimeOffset__op_Subtraction_30e4594
                    (auVar13._0_8_,auVar13._8_8_,uStack_60,uStack_58,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar5);
  }
  uVar10 = System_TimeSpan__FromMinutes_311700c(0x4014000000000000,0);
  uVar7 = System_TimeSpan__op_GreaterThan_3117960(uVar9,uVar10,0);
  if (param_1 != 0) {
    uVar1 = 0x5f10e269;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0x9e8b7543;
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                      (param_1,0x4239b252,0);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                       (param_1,0x993134c1,0);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      UnityEngine_UI_Selectable__set_interactable_3ee50ec(*(long *)(lVar8 + 0x20),uVar7 & 1,0);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) {
        UnityEngine_UI_Selectable__set_interactable_3ee50ec(*(long *)(lVar11 + 0x20),uVar7 & 1,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar12 = PlayerPrefsT___Il2CppFullySharedGenericStructType___HasValue_291186c
                             (*(long *)(*(long *)puVar3 + 0xb8) + 0x5f8,
                              *(undefined8 *)PTR_DAT_049c5138);
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              FUN_021f0574();
            }
            PlayerPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_29115c4
                      (*(long *)(*(long *)puVar3 + 0xb8) + 0x5f8,*(undefined8 *)PTR_DAT_049c5130);
            if (*(long *)(lVar11 + 0x20) == 0) goto LAB_025640c0;
            TMPro_TMP_InputField__set_text_3afe898
                      (*(long *)(lVar11 + 0x20),
                       **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
          }
        }
        return;
      }
    }
  }
LAB_025640c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

