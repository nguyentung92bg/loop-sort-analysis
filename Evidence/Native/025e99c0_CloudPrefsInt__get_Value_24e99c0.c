/* IL2CPP: CloudPrefsInt$$get_Value
int32_t CloudPrefsInt__get_Value (CloudPrefsInt_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$get_Value
   int32_t CloudPrefsInt__get_Value (CloudPrefsInt_o __this, const MethodInfo* method); */

void CloudPrefsInt__get_Value_24e99c0(undefined8 *param_1)

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

