/* IL2CPP: SettingsPopupMonitor$$Setup
void SettingsPopupMonitor__Setup (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$Setup
   void SettingsPopupMonitor__Setup (SettingsPopupMonitor_o* __this, const MethodInfo* method); */

void SettingsPopupMonitor__Setup_245f558(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_049c4f38;
  puVar4 = PTR_DAT_049c4f30;
  puVar3 = PTR_DAT_049c4f28;
  puVar1 = PTR_DAT_049c4f20;
  puVar2 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b939 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049c4de8);
    FUN_021f03f8(PTR_DAT_049c4f20);
    FUN_021f03f8(PTR_DAT_049c4f38);
    FUN_021f03f8(PTR_DAT_049c4f30);
    FUN_021f03f8(PTR_DAT_049c4f28);
    FUN_021f03f8(PTR_DAT_049c4f40);
    FUN_021f03f8(PTR_DAT_049c4f48);
    FUN_021f03f8(PTR_DAT_049c4f50);
    FUN_021f03f8(PTR_DAT_049c4f58);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b939 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar1,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar6,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x26573357,uVar6,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x6def0a4a,uVar6,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xd41aed16,uVar6,0);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x5cac4bbb,0)
  ;
  puVar2 = PTR_DAT_049c4de8;
  if (lVar7 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar7,&uStack_48,*(undefined8 *)PTR_DAT_049c4de8);
    *(undefined8 *)(param_1 + 0xc0) = uStack_48;
    thunk_FUN_021f190c();
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x5b124c95,0);
    if (lVar7 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar7,&uStack_48,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 200) = uStack_48;
      thunk_FUN_021f190c();
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_1,0x24d0a9b3,0);
      if (lVar7 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar7,&uStack_48,*(undefined8 *)puVar2);
        *(undefined8 *)(param_1 + 0xd0) = uStack_48;
        thunk_FUN_021f190c();
        lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                          (param_1,0xd1dee0cc,0);
        puVar3 = PTR_DAT_049c4f40;
        puVar1 = PTR_DAT_049b5230;
        if (lVar7 != 0) {
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar7,&uStack_48,*(undefined8 *)puVar2);
          *(undefined8 *)(param_1 + 0xd8) = uStack_48;
          thunk_FUN_021f190c();
          lVar7 = *(long *)(param_1 + 0xc0);
          uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
          System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                    (uVar6,param_1,*(undefined8 *)puVar3,0);
          puVar2 = PTR_DAT_049c4f48;
          if (lVar7 != 0) {
            ToggleElement__AddSubscribe_241f060(lVar7,uVar6,0);
            lVar7 = *(long *)(param_1 + 200);
            uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
            System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                      (uVar6,param_1,*(undefined8 *)puVar2,0);
            puVar2 = PTR_DAT_049c4f50;
            if (lVar7 != 0) {
              ToggleElement__AddSubscribe_241f060(lVar7,uVar6,0);
              lVar7 = *(long *)(param_1 + 0xd0);
              uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
              System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                        (uVar6,param_1,*(undefined8 *)puVar2,0);
              puVar2 = PTR_DAT_049c4f58;
              if (lVar7 != 0) {
                ToggleElement__AddSubscribe_241f060(lVar7,uVar6,0);
                lVar7 = *(long *)(param_1 + 0xd8);
                uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                          (uVar6,param_1,*(undefined8 *)puVar2,0);
                if (lVar7 != 0) {
                  ToggleElement__AddSubscribe_241f060(lVar7,uVar6,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

