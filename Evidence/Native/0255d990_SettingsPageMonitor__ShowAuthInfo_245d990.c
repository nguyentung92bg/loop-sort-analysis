/* IL2CPP: SettingsPageMonitor$$ShowAuthInfo
void SettingsPageMonitor__ShowAuthInfo (SettingsPageMonitor_o* __this, int32_t authType, int32_t state, System_String_o* desc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$ShowAuthInfo
   void SettingsPageMonitor__ShowAuthInfo (SettingsPageMonitor_o* __this, int32_t authType, int32_t
   state, System_String_o* desc, const MethodInfo* method); */

void SettingsPageMonitor__ShowAuthInfo_245d990
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lStack_38;
  
  if ((bRam0000000004f4b92e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4b92e = 1;
  }
  if ((*(long *)(param_1 + 0xe8) == 0) ||
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xe8),0),
     puVar1 = PTR_DAT_049b6110, lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 0xe8),param_3,0);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = Extensions__ToDisplayName_24e7724(param_2,0);
  uVar3 = System_String__Format_2f73700(param_4,uVar3,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5108f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fac70,0x993134c1,uVar3,0);
    FUN_021f03f8(PTR_DAT_049fac78);
    bRam0000000004f5108f = 1;
  }
  puVar1 = PTR_DAT_049fac78;
  lVar4 = *(long *)(lVar2 + 0x38);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar4,iVar5,&lStack_38,*(undefined8 *)puVar1);
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x18) == -0x66cecb3f) {
        if (*(long *)(lVar2 + 0x38) == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(lVar2 + 0x38),iVar5,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) break;
        StatefulUI_Runtime_References_TextReference__SetText_334627c(lStack_38,uVar3);
      }
      lVar4 = *(long *)(lVar2 + 0x38);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

