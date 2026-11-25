/* IL2CPP: StreakTournamentSubMonitor$$UpdateMultiplierView
void StreakTournamentSubMonitor__UpdateMultiplierView (StreakTournamentSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$UpdateMultiplierView
   void StreakTournamentSubMonitor__UpdateMultiplierView (StreakTournamentSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void StreakTournamentSubMonitor__UpdateMultiplierView_2482d88
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_70;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4ba16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b08);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049bbda8);
    FUN_021f03f8(PTR_DAT_049bbdb0);
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4ba16 = 1;
  }
  uStack_58 = 0;
  if (*(long *)(param_3 + 0xa0) != 0) {
    StreakTournament__get_MainPlayer_25241b4(&uStack_98,*(long *)(param_3 + 0xa0),0);
    puVar3 = PTR_DAT_049be928;
    puVar2 = PTR_DAT_049bbdb0;
    if ((*(long *)(param_3 + 0xa0) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_3 + 0xa0) + 0x78), lVar4 != 0)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar4,uStack_70,(long)&uStack_58 + 4,*(undefined8 *)PTR_DAT_049bbdb0);
      uVar5 = System_Int32__ToString_30fbaa0((long)&uStack_58 + 4,0);
      uVar5 = System_String__Concat_2f72b28(*(undefined8 *)puVar3,uVar5,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_4,0xd7ad136f,uVar5,0);
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_4,0x6878cfa2,0);
      if ((lVar4 != 0) &&
         ((lVar4 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar4,0),
          lVar4 != 0 &&
          (lVar6 = UnityEngine_Transform__GetChild_3c2f8bc(lVar4,uStack_70,0),
          puVar1 = PTR_DAT_049b5480, lVar6 != 0)))) {
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        lVar6 = Extensions__GetRectTransform_3f0c498(uVar5,0);
        lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                          (param_4,0xa018bd61,0);
        if (((lVar7 != 0) &&
            (lVar7 = Extensions__GetRectTransform_3f0c498(*(undefined8 *)(lVar7 + 0x20),0),
            lVar7 != 0)) &&
           (uVar9 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar7,0), lVar6 != 0)) {
          uVar10 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar6,0);
          Extensions__WithX_3f0d00c(uVar9,param_2,uVar10,0);
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar7,0);
          puVar1 = PTR_DAT_049c5b08;
          lVar6 = *(long *)(param_3 + 0xa0);
          if (lVar6 != 0) {
            iVar8 = 0;
            while (*(long *)(lVar6 + 0x78) != 0) {
              if (*(int *)(*(long *)(lVar6 + 0x78) + 0x18) <= iVar8) {
                return;
              }
              lVar6 = UnityEngine_Transform__GetChild_3c2f8bc(lVar4,iVar8,0);
              if (lVar6 == 0) break;
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (lVar6,&uStack_98,*(undefined8 *)puVar1);
              if ((*(long *)(param_3 + 0xa0) == 0) ||
                 (lVar6 = *(long *)(*(long *)(param_3 + 0xa0) + 0x78), lVar6 == 0)) break;
              lVar7 = CONCAT44(uStack_94,uStack_98);
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar6,iVar8,&uStack_98,*(undefined8 *)puVar2);
              uStack_58 = CONCAT44(uStack_58._4_4_,uStack_98);
              uVar5 = System_Int32__ToString_30fbaa0(&uStack_58,0);
              uVar5 = System_String__Concat_2f72b28(*(undefined8 *)puVar3,uVar5,0);
              if (lVar7 == 0) break;
              TMPro_TMP_Text__SetText_3b0f78c(lVar7,uVar5,0);
              lVar6 = *(long *)(param_3 + 0xa0);
              iVar8 = iVar8 + 1;
              if (lVar6 == 0) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

