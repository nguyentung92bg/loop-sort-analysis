/* IL2CPP: CloudPrefsString$$ToString
System_String_o* CloudPrefsString__ToString (CloudPrefsString_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$ToString
   System_String_o* CloudPrefsString__ToString (CloudPrefsString_o __this, const MethodInfo*
   method); */

void CloudPrefsString__ToString_24eafb4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5120;
  if ((bRam0000000004f4bcc1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f4bcc1 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsString__get_Value_3f0e288(&uStack_30,0);
  return;
}

