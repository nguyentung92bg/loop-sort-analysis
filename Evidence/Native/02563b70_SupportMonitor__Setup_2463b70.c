/* IL2CPP: SupportMonitor$$Setup
void SupportMonitor__Setup (SupportMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$Setup
   void SupportMonitor__Setup (SupportMonitor_o* __this, const MethodInfo* method); */

void SupportMonitor__Setup_2463b70(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_049c5118;
  puVar1 = PTR_DAT_049c5110;
  puVar2 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b95d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c5110);
    FUN_021f03f8(PTR_DAT_049c5128);
    FUN_021f03f8(PTR_DAT_049c5118);
    FUN_021f03f8(PTR_DAT_049c3f60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3f68);
    bRam0000000004f4b95d = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar1,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar4,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xf689c28c,uVar4,0);
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x4239b252,0);
  puVar1 = PTR_DAT_049c5120;
  puVar2 = PTR_DAT_049b5310;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = PlayerPrefsString__get_Value_3f0e288(*(long *)(*(long *)puVar2 + 0xb8) + 0x618,0);
    if (lVar8 != 0) {
      TMPro_TMP_InputField__set_text_3afe898(lVar8,uVar4,0);
      puVar1 = PTR_DAT_049c5128;
      puVar2 = PTR_DAT_049c3f60;
      if (*(long *)(lVar5 + 0x20) != 0) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x1d0);
        uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3f60);
        UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                  (uVar4,param_1,*(undefined8 *)puVar1,0);
        puVar3 = PTR_DAT_049c3f68;
        if (lVar5 != 0) {
          UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                    (lVar5,uVar4,*(undefined8 *)PTR_DAT_049c3f68);
          lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                            (param_1,0x993134c1,0);
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
            lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x1d0);
            uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
            UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                      (uVar4,param_1,*(undefined8 *)puVar1,0);
            if (lVar5 != 0) {
              UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                        (lVar5,uVar4,*(undefined8 *)puVar3);
              lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                                (param_1,0xf689c28c,0);
              puVar2 = PTR_DAT_04a2b6d8;
              if (lVar5 != 0) {
                if ((bRam0000000004f5c027 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_049bcdb0,0,0);
                  FUN_021f03f8(PTR_DAT_049b3b98);
                  FUN_021f03f8(PTR_DAT_04a2b6d8);
                  bRam0000000004f5c027 = 1;
                }
                uVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__26b996c
                                  (lVar5 + 0xd8,&stack0xffffffffffffffdc,*(undefined8 *)puVar2);
                puVar2 = PTR_DAT_049bcdb0;
                if ((uVar6 & 1) != 0) {
                  if (*(char *)(lVar5 + 0xd8) == '\0') {
                    if (*(int *)(*(long *)PTR_DAT_049bcdb0 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar4 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
                    puVar1 = PTR_DAT_049b3b98;
                    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
                    }
                    uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
                    if ((uVar6 & 1) != 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      lVar8 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
                      if (lVar8 == 0) {
LAB_03fe5250:
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      uVar7 = *(undefined8 *)(lVar8 + 0x40);
                      uVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        FUN_021f0574(*(long *)puVar1);
                      }
                      uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar7,uVar4,0);
                      if ((uVar6 & 1) != 0) {
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        lVar8 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
                        if (lVar8 == 0) goto LAB_03fe5250;
                        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_3eeff5c
                                  (lVar8,0,0);
                      }
                    }
                  }
                  UnityEngine_UI_Selectable__OnSetProperty_3ee4e00(lVar5);
                }
                return;
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

