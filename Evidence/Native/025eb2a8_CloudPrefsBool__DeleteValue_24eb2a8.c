/* IL2CPP: CloudPrefsBool$$DeleteValue
void CloudPrefsBool__DeleteValue (CloudPrefsBool_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$DeleteValue
   void CloudPrefsBool__DeleteValue (CloudPrefsBool_o __this, const MethodInfo* method); */

void CloudPrefsBool__DeleteValue_24eb2a8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bccd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bccd = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__DeleteValue_3f0e8a0(&uStack_30,0);
  return;
}

