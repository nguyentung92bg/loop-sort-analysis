/* IL2CPP: ProfileEditMonitor$$ShowCreateProfile
void ProfileEditMonitor__ShowCreateProfile (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$ShowCreateProfile
   void ProfileEditMonitor__ShowCreateProfile (ProfileEditMonitor_o* __this, const MethodInfo*
   method); */

void ProfileEditMonitor__ShowCreateProfile_2454a10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049c3958;
  if ((bRam0000000004f4b8e7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4988);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b8e7 = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  auStack_24[0] = **(undefined1 **)(lVar2 + 0xb8);
  uVar3 = thunk_FUN_0222c66c(lVar2,auStack_24);
  if (lVar4 != 0) {
    Monitors__Additive_object__26888e8(lVar4,uVar3,1,*(undefined8 *)PTR_DAT_049c4988);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x9386f336,0);
    if (*(long *)(param_1 + 0xe0) != 0) {
      TMPro_TMP_InputField__ActivateInputField_3b0a1e4(*(long *)(param_1 + 0xe0),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

