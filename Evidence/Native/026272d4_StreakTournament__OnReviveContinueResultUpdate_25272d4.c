/* IL2CPP: StreakTournament$$OnReviveContinueResultUpdate
void StreakTournament__OnReviveContinueResultUpdate (StreakTournament_o* __this, ReviveContinueResultUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$OnReviveContinueResultUpdate
   void StreakTournament__OnReviveContinueResultUpdate (StreakTournament_o* __this,
   ReviveContinueResultUpdateMessage_o m, const MethodInfo* method); */

void StreakTournament__OnReviveContinueResultUpdate_25272d4
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_88;
  
  if ((bRam0000000004f4bea0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b08);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049bbda8);
    FUN_021f03f8(PTR_DAT_049bbdb0);
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4bea0 = 1;
  }
  uStack_b8 = 0;
  uVar4 = StreakTournament__IsGameActive_25259a0(param_3);
  if (((uVar4 & 1) == 0) || (StreakTournament__get_Save_2524120(&uStack_b0), iStack_88 == 0)) {
    return;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                    (param_4,0xa076a623,0);
  if ((lVar5 != 0) &&
     ((*(long *)(lVar5 + 0x20) != 0 &&
      (uVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                         (*(long *)(lVar5 + 0x20),0), param_5 != 0)))) {
    FUN_02333498(param_5,uVar6,*(undefined8 *)PTR_DAT_049c3e40);
    puVar1 = PTR_DAT_049bbdb0;
    if (*(long *)(param_3 + 0x78) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_3 + 0x78),iStack_88,(long)&uStack_b8 + 4,
                 *(undefined8 *)PTR_DAT_049bbdb0);
      uVar7 = System_Int32__ToString_30fbaa0((long)&uStack_b8 + 4,0);
      puVar2 = PTR_DAT_049be928;
      uVar7 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049be928,uVar7,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar6,0xd7ad136f,uVar7,0);
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (uVar6,0x6878cfa2,0);
      if (((lVar5 != 0) &&
          (lVar5 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar5,0),
          lVar5 != 0)) &&
         (lVar8 = UnityEngine_Transform__GetChild_3c2f8bc(lVar5,iStack_88,0), lVar8 != 0)) {
        uVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b5480);
        }
        lVar8 = Extensions__GetRectTransform_3f0c498(uVar7,0);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                          (uVar6,0xa018bd61,0);
        if (((lVar9 != 0) &&
            (lVar9 = Extensions__GetRectTransform_3f0c498(*(undefined8 *)(lVar9 + 0x20),0),
            lVar9 != 0)) &&
           (uVar11 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar9,0), lVar8 != 0))
        {
          uVar12 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar8,0);
          Extensions__WithX_3f0d00c(uVar11,param_2,uVar12,0);
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar9,0);
          puVar3 = PTR_DAT_049c5b08;
          lVar8 = *(long *)(param_3 + 0x78);
          if (lVar8 != 0) {
            iVar10 = 0;
            do {
              if (*(int *)(lVar8 + 0x18) <= iVar10) {
                return;
              }
              lVar8 = UnityEngine_Transform__GetChild_3c2f8bc(lVar5,iVar10,0);
              if (lVar8 == 0) break;
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (lVar8,&uStack_b0,*(undefined8 *)puVar3);
              if (*(long *)(param_3 + 0x78) == 0) break;
              lVar8 = CONCAT44(uStack_ac,uStack_b0);
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (*(long *)(param_3 + 0x78),iVar10,&uStack_b0,*(undefined8 *)puVar1);
              uStack_b8 = CONCAT44(uStack_b8._4_4_,uStack_b0);
              uVar6 = System_Int32__ToString_30fbaa0(&uStack_b8,0);
              uVar6 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar6,0);
              if (lVar8 == 0) break;
              TMPro_TMP_Text__SetText_3b0f78c(lVar8,uVar6,0);
              lVar8 = *(long *)(param_3 + 0x78);
              iVar10 = iVar10 + 1;
            } while (lVar8 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

