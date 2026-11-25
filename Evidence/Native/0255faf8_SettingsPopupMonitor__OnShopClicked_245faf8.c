/* IL2CPP: SettingsPopupMonitor$$OnShopClicked
void SettingsPopupMonitor__OnShopClicked (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$OnShopClicked
   void SettingsPopupMonitor__OnShopClicked (SettingsPopupMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPopupMonitor__OnShopClicked_245faf8
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4b93c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4f68);
    bRam0000000004f4b93c = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  plVar3 = *(long **)(param_3 + 0xb0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *(long *)PTR_DAT_049c4f68;
  if ((bRam0000000004f4b94d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c4d20);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b94d = 1;
  }
  *(undefined1 *)(plVar3 + 0x22) = 1;
  plVar3[0x23] = lVar4;
  thunk_FUN_021f190c(plVar3 + 0x23,lVar4);
  uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(plVar3,0x8ac5d2f7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  lVar4 = Extensions__GetRectTransform_3f0c498(uVar2,0);
  puVar1 = PTR_DAT_049c3958;
  if (lVar4 != 0) {
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar4,0);
    lVar4 = *(long *)puVar1;
    *(undefined4 *)(plVar3 + 0x21) = uVar6;
    lVar5 = plVar3[6];
    *(undefined4 *)((long)plVar3 + 0x10c) = param_2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    auStack_24[0] = **(undefined1 **)(lVar4 + 0xb8);
    uVar2 = thunk_FUN_0222c66c(lVar4,auStack_24);
    if (lVar5 != 0) {
      Monitors__Additive_object__26888e8(lVar5,uVar2,1,*(undefined8 *)PTR_DAT_049c4d20);
      (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(plVar3,0x35030410,0);
      plVar3[0x23] = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      thunk_FUN_021f190c(plVar3 + 0x23);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

