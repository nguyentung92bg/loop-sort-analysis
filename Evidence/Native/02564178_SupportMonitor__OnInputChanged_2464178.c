/* IL2CPP: SupportMonitor$$OnInputChanged
void SupportMonitor__OnInputChanged (SupportMonitor_o* __this, System_String_o* __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$OnInputChanged
   void SupportMonitor__OnInputChanged (SupportMonitor_o* __this, System_String_o* __, const
   MethodInfo* method); */

void SupportMonitor__OnInputChanged_2464178(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte abStack_24 [4];
  
  if ((bRam0000000004f4b95f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f70);
    bRam0000000004f4b95f = 1;
  }
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x993134c1,0);
  if (lVar4 != 0) {
    lVar4 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar4,0);
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                      (param_1,0x4239b252,0);
    if (((lVar5 != 0) &&
        (uVar6 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar5,0), lVar4 != 0
        )) && (lVar4 = System_String__Trim_2f8204c(lVar4,0), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x10) < 6) {
        bVar3 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_049c3f70 + 0xe4) == 0) {
          FUN_021f0574();
        }
        bVar3 = EmailH__IsValid_25087e8(uVar6,0);
      }
      lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                        (param_1,0xf689c28c,0);
      puVar2 = PTR_DAT_04a2b6d8;
      if (lVar4 != 0) {
        if ((bRam0000000004f5c027 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049bcdb0,bVar3 & 1,0);
          FUN_021f03f8(PTR_DAT_049b3b98);
          FUN_021f03f8(PTR_DAT_04a2b6d8);
          bRam0000000004f5c027 = 1;
        }
        abStack_24[0] = bVar3 & 1;
        uVar7 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__26b996c
                          (lVar4 + 0xd8,abStack_24,*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_049bcdb0;
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar4 + 0xd8) == '\0') {
            if (*(int *)(*(long *)PTR_DAT_049bcdb0 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar6 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
            puVar1 = PTR_DAT_049b3b98;
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3b98);
            }
            uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar5 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
              if (lVar5 == 0) {
LAB_03fe5250:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar8 = *(undefined8 *)(lVar5 + 0x40);
              uVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574(*(long *)puVar1);
              }
              uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar8,uVar6,0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                lVar5 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
                if (lVar5 == 0) goto LAB_03fe5250;
                UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_3eeff5c(lVar5,0,0);
              }
            }
          }
          UnityEngine_UI_Selectable__OnSetProperty_3ee4e00(lVar4);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

