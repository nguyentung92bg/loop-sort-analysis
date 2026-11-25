/* IL2CPP: CloudPrefsBool$$set_Value
void CloudPrefsBool__set_Value (CloudPrefsBool_o __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$set_Value
   void CloudPrefsBool__set_Value (CloudPrefsBool_o __this, bool value, const MethodInfo* method);
    */

void CloudPrefsBool__set_Value_24eb140(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bcca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bcca = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(&uStack_40,param_2 & 1,0);
  return;
}

