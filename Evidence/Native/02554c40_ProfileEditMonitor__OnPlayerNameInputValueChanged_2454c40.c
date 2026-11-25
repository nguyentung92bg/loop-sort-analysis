/* IL2CPP: ProfileEditMonitor$$OnPlayerNameInputValueChanged
void ProfileEditMonitor__OnPlayerNameInputValueChanged (ProfileEditMonitor_o* __this, System_String_o* playerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$OnPlayerNameInputValueChanged
   void ProfileEditMonitor__OnPlayerNameInputValueChanged (ProfileEditMonitor_o* __this,
   System_String_o* playerName, const MethodInfo* method); */

void ProfileEditMonitor__OnPlayerNameInputValueChanged_2454c40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
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
  undefined8 uStack_40;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar6 = PlayerModule__CleanPlayerName_2551fd0(*(long *)(param_1 + 0xa8),param_2,0);
    uVar7 = System_String__op_Inequality_2f7b800(uVar6,param_2,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) goto LAB_02554ccc;
      TMPro_TMP_InputField__set_text_3afe898(*(long *)(param_1 + 0xe0),uVar6,0);
    }
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0),uVar6);
    puVar1 = PTR_DAT_049b5310;
    if ((bRam0000000004f4b8ed & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b5460);
      FUN_021f03f8(PTR_DAT_049c49a0);
      FUN_021f03f8(PTR_DAT_049b5310);
      bRam0000000004f4b8ed = 1;
    }
    puVar3 = PTR_DAT_049c49a0;
    puVar2 = PTR_DAT_049b5460;
    lVar8 = *(long *)puVar1;
    uStack_48 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    uStack_40 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar8 + 0xb8) + 0x1b0,&uStack_68,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_90 = uStack_58;
    auVar9 = PlayerProfile__op_Inequality_25530cc(&uStack_80,&uStack_a0,0);
    uVar6 = auVar9._8_8_;
    if ((auVar9._0_8_ & 1) == 0) {
      bVar4 = *(char *)(param_1 + 0xb8) == '\0';
    }
    else {
      bVar4 = true;
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      bVar5 = PlayerModule__IsPlayerNameValid_2551f5c
                        (*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xc0),0);
      *(byte *)(param_1 + 0xd1) = bVar4 & bVar5;
      if (bVar4) {
        uVar6 = Phrase__get_UpdateProfileFailShortNickname_252f5e4();
      }
      else {
        uVar6 = Phrase__get_UpdateProfileFailChange_252f660(0);
      }
      *(undefined8 *)(param_1 + 0xd8) = uVar6;
      thunk_FUN_021f190c();
      auVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                         (param_1,0x8ac5d2c5,0);
      uVar6 = auVar9._8_8_;
      if (auVar9._0_8_ != 0) {
        lVar8 = UnityEngine_UI_Selectable__get_image_3ee5284(auVar9._0_8_,0);
        uVar6 = 0;
        if (*(char *)(param_1 + 0xd1) == '\0') {
          uVar6 = *(undefined8 *)(param_1 + 0x98);
        }
        if (lVar8 != 0) {
          UnityEngine_UI_Image__set_overrideSprite_3cfba84(lVar8,uVar6,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,uVar6);
  }
LAB_02554ccc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

