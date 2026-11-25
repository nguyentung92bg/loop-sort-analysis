/* IL2CPP: ProfileEditMonitor$$UpdateSaveButtonState
void ProfileEditMonitor__UpdateSaveButtonState (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$UpdateSaveButtonState
   void ProfileEditMonitor__UpdateSaveButtonState (ProfileEditMonitor_o* __this, const MethodInfo*
   method); */

void ProfileEditMonitor__UpdateSaveButtonState_2454cd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
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
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b8ed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049c49a0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b8ed = 1;
  }
  puVar3 = PTR_DAT_049c49a0;
  puVar2 = PTR_DAT_049b5460;
  lVar6 = *(long *)puVar1;
  uStack_48 = *(undefined8 *)(param_1 + 0xc0);
  uStack_50 = *(undefined8 *)(param_1 + 0xb8);
  uStack_40 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar6 + 0xb8) + 0x1b0,&uStack_68,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_70 = uStack_40;
  uStack_98 = uStack_60;
  uStack_a0 = uStack_68;
  uStack_90 = uStack_58;
  auVar8 = PlayerProfile__op_Inequality_25530cc(&uStack_80,&uStack_a0,0);
  uVar7 = auVar8._8_8_;
  if ((auVar8._0_8_ & 1) == 0) {
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
      uVar7 = Phrase__get_UpdateProfileFailShortNickname_252f5e4();
    }
    else {
      uVar7 = Phrase__get_UpdateProfileFailChange_252f660(0);
    }
    *(undefined8 *)(param_1 + 0xd8) = uVar7;
    thunk_FUN_021f190c();
    auVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                       (param_1,0x8ac5d2c5,0);
    uVar7 = auVar8._8_8_;
    if (auVar8._0_8_ != 0) {
      lVar6 = UnityEngine_UI_Selectable__get_image_3ee5284(auVar8._0_8_,0);
      uVar7 = 0;
      if (*(char *)(param_1 + 0xd1) == '\0') {
        uVar7 = *(undefined8 *)(param_1 + 0x98);
      }
      if (lVar6 != 0) {
        UnityEngine_UI_Image__set_overrideSprite_3cfba84(lVar6,uVar7,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,uVar7);
}

