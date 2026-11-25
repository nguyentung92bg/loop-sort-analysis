/* IL2CPP: SettingsPageMonitor$$OnTermsClicked
void SettingsPageMonitor__OnTermsClicked (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$OnTermsClicked
   void SettingsPageMonitor__OnTermsClicked (SettingsPageMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPageMonitor__OnTermsClicked_245da94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4b92f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c4e80);
    bRam0000000004f4b92f = 1;
  }
  puVar2 = PTR_DAT_049c4e80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = *(long *)puVar2;
  uVar4 = 0;
  if ((bRam0000000004f566f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8,0);
    FUN_021f03f8(PTR_DAT_04a24c78);
    FUN_021f03f8(PTR_DAT_049d9c90);
    bRam0000000004f566f0 = 1;
    uVar4 = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else if (*(int *)(lVar3 + 0x10) == 0) {
    uVar4 = System_UIntPtr__op_Explicit_3159868(1,0);
    uVar4 = System_UIntPtr__op_Explicit_3159870(uVar4,0);
    uStack_30 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc(&uStack_30,uVar4,0,0);
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
  }
  else {
    if (cRam0000000004f4dd4d == '\0') {
      FUN_021f03f8(PTR_DAT_049bd288,uVar4);
      cRam0000000004f4dd4d = '\x01';
    }
    uStack_40 = System_String__GetRawStringData_2f7a1ac(lVar3,0);
    uStack_38 = (ulong)*(uint *)(lVar3 + 0x10);
    uVar4 = System_ReadOnlySpan___Il2CppFullySharedGenericType___GetPinnableReference_2936698
                      (&uStack_40,*(undefined8 *)PTR_DAT_04a24c78);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc
              (&uStack_50,uVar4,uStack_38 & 0xffffffff,0);
  }
  if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (pcRam0000000004f567b8 == (code *)0x0) {
    pcRam0000000004f567b8 = (code *)FUN_021f03bc(&UNK_013e006e);
  }
  (*pcRam0000000004f567b8)(&uStack_50);
  return;
}

