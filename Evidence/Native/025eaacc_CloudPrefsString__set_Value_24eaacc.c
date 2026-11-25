/* IL2CPP: CloudPrefsString$$set_Value
void CloudPrefsString__set_Value (CloudPrefsString_o __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$set_Value
   void CloudPrefsString__set_Value (CloudPrefsString_o __this, System_String_o* value, const
   MethodInfo* method); */

void CloudPrefsString__set_Value_24eaacc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5120;
  if ((bRam0000000004f4bcc2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f4bcc2 = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsString__Set_3f0e4a4(&uStack_40,param_2,0);
  return;
}

