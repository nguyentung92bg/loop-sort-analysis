/* IL2CPP: CloudPrefsFloat$$set_Value
void CloudPrefsFloat__set_Value (CloudPrefsFloat_o __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$set_Value
   void CloudPrefsFloat__set_Value (CloudPrefsFloat_o __this, float value, const MethodInfo*
   method); */

void CloudPrefsFloat__set_Value_24ea2a0(undefined4 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c6ca0;
  if ((bRam0000000004f4bcba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcba = 1;
  }
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsFloat__Set_3f0e028(param_1,&uStack_40,0);
  return;
}

