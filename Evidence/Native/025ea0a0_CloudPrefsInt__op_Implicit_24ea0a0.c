/* IL2CPP: CloudPrefsInt$$op_Implicit
int32_t CloudPrefsInt__op_Implicit (CloudPrefsInt_o prefs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$op_Implicit
   int32_t CloudPrefsInt__op_Implicit (CloudPrefsInt_o prefs, const MethodInfo* method); */

void CloudPrefsInt__op_Implicit_24ea0a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb0 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__get_Value_3f0d974(&uStack_30,0);
  return;
}

