/* IL2CPP: ProfileEditMonitor.<>c__DisplayClass23_0$$<CreateAvatarElement>b__0
void ProfileEditMonitor___c__DisplayClass23_0___CreateAvatarElement_b__0 (ProfileEditMonitor___c__DisplayClass23_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor.<>c__DisplayClass23_0$$<CreateAvatarElement>b__0
   void ProfileEditMonitor___c__DisplayClass23_0___CreateAvatarElement_b__0
   (ProfileEditMonitor___c__DisplayClass23_0_o* __this, const MethodInfo* method); */

void ProfileEditMonitor___c__DisplayClass23_0___CreateAvatarElement_b__0_24552b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(param_1 + 0x18);
  thunk_FUN_021f190c();
  ProfileEditMonitor__UpdateSaveButtonState_2454cd0(lVar2);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar2,0x5f10e269,0);
  if (*(long *)(lVar2 + 0xe0) != 0) {
    TMPro_TMP_InputField__set_text_3afe898(*(long *)(lVar2 + 0xe0),*(undefined8 *)(lVar2 + 0xc0),0);
    if (*(long *)(lVar2 + 0xa0) != 0) {
      uStack_28 = *(undefined8 *)(lVar2 + 0xc0);
      uStack_30 = *(undefined8 *)(lVar2 + 0xb8);
      uStack_20 = *(undefined8 *)(lVar2 + 200);
      uVar1 = Avatars__GetProfileAvatar_256fe34(*(long *)(lVar2 + 0xa0),&uStack_30,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c(lVar2,0xbd13b84d,uVar1,0);
      ProfileEditMonitor__RefreshAvatarElements_2454e58(lVar2);
      ProfileEditMonitor__UpdateSaveButtonState_2454cd0(lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

