/* IL2CPP: CloudPrefsBool$$op_Implicit
bool CloudPrefsBool__op_Implicit (CloudPrefsBool_o prefs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$op_Implicit
   bool CloudPrefsBool__op_Implicit (CloudPrefsBool_o prefs, const MethodInfo* method); */

uint CloudPrefsBool__op_Implicit_24eb73c(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bcc9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bcc9 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_30,0);
  return uVar2 & 1;
}

