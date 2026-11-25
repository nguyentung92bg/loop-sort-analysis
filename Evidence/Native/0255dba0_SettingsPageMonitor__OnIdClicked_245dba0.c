/* IL2CPP: SettingsPageMonitor$$OnIdClicked
void SettingsPageMonitor__OnIdClicked (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$OnIdClicked
   void SettingsPageMonitor__OnIdClicked (SettingsPageMonitor_o* __this, const MethodInfo* method);
    */

void SettingsPageMonitor__OnIdClicked_245dba0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b931 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b8528);
    bRam0000000004f4b931 = 1;
  }
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,0x111c3611,0);
  if (lVar1 != 0) {
    lVar1 = StatefulUI_Runtime_References_TextReference__get_Value_3345f68(lVar1,0);
    uVar2 = System_String__IsNullOrEmpty_2f7c924(lVar1,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_049b8528 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = 0;
    if ((bRam0000000004f597d9 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b8528,0);
      FUN_021f03f8(PTR_DAT_04a24c78);
      FUN_021f03f8(PTR_DAT_049d9c90);
      bRam0000000004f597d9 = 1;
      uVar3 = extraout_x1;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (lVar1 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else if (*(int *)(lVar1 + 0x10) == 0) {
      uVar3 = System_UIntPtr__op_Explicit_3159868(1,0);
      uVar3 = System_UIntPtr__op_Explicit_3159870(uVar3,0);
      uStack_30 = 0;
      uStack_28 = 0;
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc(&uStack_30,uVar3,0,0);
      uStack_48 = uStack_28;
      uStack_50 = uStack_30;
    }
    else {
      if (cRam0000000004f4dd4d == '\0') {
        FUN_021f03f8(PTR_DAT_049bd288,uVar3);
        cRam0000000004f4dd4d = '\x01';
      }
      uStack_40 = System_String__GetRawStringData_2f7a1ac(lVar1,0);
      uStack_38 = (ulong)*(uint *)(lVar1 + 0x10);
      uVar3 = System_ReadOnlySpan___Il2CppFullySharedGenericType___GetPinnableReference_2936698
                        (&uStack_40,*(undefined8 *)PTR_DAT_04a24c78);
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc
                (&uStack_50,uVar3,uStack_38 & 0xffffffff,0);
    }
    if (*(int *)(*(long *)PTR_DAT_049b8528 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (pcRam0000000004f59880 == (code *)0x0) {
      pcRam0000000004f59880 = (code *)FUN_021f03bc(&UNK_013c37cf);
    }
    (*pcRam0000000004f59880)(&uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

