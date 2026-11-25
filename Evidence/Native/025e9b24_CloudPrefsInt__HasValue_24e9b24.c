/* IL2CPP: CloudPrefsInt$$HasValue
bool CloudPrefsInt__HasValue (CloudPrefsInt_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$HasValue
   bool CloudPrefsInt__HasValue (CloudPrefsInt_o __this, const MethodInfo* method); */

uint CloudPrefsInt__HasValue_24e9b24(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb3 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerPrefsInt__HasValue_3f0dc08(&uStack_30,0);
  return uVar2 & 1;
}

