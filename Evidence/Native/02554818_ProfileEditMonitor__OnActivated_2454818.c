/* IL2CPP: ProfileEditMonitor$$OnActivated
void ProfileEditMonitor__OnActivated (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$OnActivated
   void ProfileEditMonitor__OnActivated (ProfileEditMonitor_o* __this, const MethodInfo* method); */

void ProfileEditMonitor__OnActivated_2454818(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b8e5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5460);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b8e5 = 1;
  }
  puVar2 = PTR_DAT_049b5460;
  MonitorBase__OnActivated_256c9f4(param_1,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar3 + 0xb8) + 0x1b0,&uStack_38,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xc0) = uStack_30;
  *(undefined8 *)(param_1 + 0xb8) = uStack_38;
  *(undefined8 *)(param_1 + 200) = uStack_28;
  thunk_FUN_021f190c(param_1 + 0xc0,0);
  ProfileEditMonitor__UpdateProfileView_24548d4(param_1,0x5f10e269);
  return;
}

