/* IL2CPP: EmailCodeMonitor$$OnCodeInputChanged
void EmailCodeMonitor__OnCodeInputChanged (EmailCodeMonitor_o* __this, System_String_o* code, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$OnCodeInputChanged
   void EmailCodeMonitor__OnCodeInputChanged (EmailCodeMonitor_o* __this, System_String_o* code,
   const MethodInfo* method); */

void EmailCodeMonitor__OnCodeInputChanged_243e0b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte abStack_24 [4];
  
  bVar3 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c(param_1,0xc4829402,0)
  ;
  puVar2 = PTR_DAT_04a2b6d8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e0fc to 0263e233 has its CatchHandler @ 0253e0fc
                       catch() { ... } // from try @ 0253e0fc with catch @ 0253e0fc
                       catch() { ... } // from try @ 0253e4f4 with catch @ 0253e0fc
                       catch() { ... } // from try @ 0253e620 with catch @ 0253e0fc
                       catch() { ... } // from try @ 0253e6b4 with catch @ 0253e0fc */
    FUN_021f06a0();
  }
  bVar3 = (bVar3 ^ 0xff) & 1;
  if ((bRam0000000004f5c027 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcdb0,bVar3,0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_04a2b6d8);
    bRam0000000004f5c027 = 1;
  }
  abStack_24[0] = bVar3;
  uVar5 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__26b996c
                    (lVar4 + 0xd8,abStack_24,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_049bcdb0;
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0xd8) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_049bcdb0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
      puVar1 = PTR_DAT_049b3b98;
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
      uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar7 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
        if (lVar7 == 0) {
LAB_03fe5250:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar8 = *(undefined8 *)(lVar7 + 0x40);
        uVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar8,uVar6,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar7 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
          if (lVar7 == 0) goto LAB_03fe5250;
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_3eeff5c(lVar7,0,0);
        }
      }
    }
    UnityEngine_UI_Selectable__OnSetProperty_3ee4e00(lVar4);
  }
  return;
}

