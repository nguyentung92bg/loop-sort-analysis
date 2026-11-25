/* IL2CPP: CloudPrefsInt$$ToString
System_String_o* CloudPrefsInt__ToString (CloudPrefsInt_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$ToString
   System_String_o* CloudPrefsInt__ToString (CloudPrefsInt_o __this, const MethodInfo* method); */

void CloudPrefsInt__ToString_24ea0b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb7 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__ToString_3f0dcc0(&uStack_30,0);
  return;
}

