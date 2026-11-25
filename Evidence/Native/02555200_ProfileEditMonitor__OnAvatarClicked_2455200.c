/* IL2CPP: ProfileEditMonitor$$OnAvatarClicked
void ProfileEditMonitor__OnAvatarClicked (ProfileEditMonitor_o* __this, System_String_o* avatarId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$OnAvatarClicked
   void ProfileEditMonitor__OnAvatarClicked (ProfileEditMonitor_o* __this, System_String_o*
   avatarId, const MethodInfo* method); */

void ProfileEditMonitor__OnAvatarClicked_2455200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *(undefined8 *)(param_1 + 200) = param_2;
  thunk_FUN_021f190c();
  ProfileEditMonitor__UpdateSaveButtonState_2454cd0(param_1);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  if (*(long *)(param_1 + 0xe0) != 0) {
    TMPro_TMP_InputField__set_text_3afe898
              (*(long *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xc0),0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uStack_28 = *(undefined8 *)(param_1 + 0xc0);
      uStack_30 = *(undefined8 *)(param_1 + 0xb8);
      uStack_20 = *(undefined8 *)(param_1 + 200);
      uVar1 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0xa0),&uStack_30,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                (param_1,0xbd13b84d,uVar1,0);
      ProfileEditMonitor__RefreshAvatarElements_2454e58(param_1);
      ProfileEditMonitor__UpdateSaveButtonState_2454cd0(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

