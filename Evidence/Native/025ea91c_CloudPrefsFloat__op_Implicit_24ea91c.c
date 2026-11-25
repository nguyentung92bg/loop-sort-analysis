/* IL2CPP: CloudPrefsFloat$$op_Implicit
float CloudPrefsFloat__op_Implicit (CloudPrefsFloat_o prefs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$op_Implicit
   float CloudPrefsFloat__op_Implicit (CloudPrefsFloat_o prefs, const MethodInfo* method); */

void CloudPrefsFloat__op_Implicit_24ea91c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6ca0;
  if ((bRam0000000004f4bcb9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcb9 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsFloat__get_Value_3f0ddfc(&uStack_30,0);
  return;
}

