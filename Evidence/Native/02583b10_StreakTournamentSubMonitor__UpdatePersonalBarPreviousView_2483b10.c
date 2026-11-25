/* IL2CPP: StreakTournamentSubMonitor$$UpdatePersonalBarPreviousView
void StreakTournamentSubMonitor__UpdatePersonalBarPreviousView (StreakTournamentSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$UpdatePersonalBarPreviousView
   void StreakTournamentSubMonitor__UpdatePersonalBarPreviousView (StreakTournamentSubMonitor_o*
   __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

undefined1  [16]
StreakTournamentSubMonitor__UpdatePersonalBarPreviousView_2483b10(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  if ((bRam0000000004f4ba19 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b50);
    FUN_021f03f8(PTR_DAT_049c5b58);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4ba19 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar12 = StreakTournament__get_Personal_2524224(*(long *)(param_1 + 0xa0),0);
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x120), lVar13 != 0)) {
      iVar11 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                         (lVar13,*(undefined8 *)PTR_DAT_049c5b50);
      if (iVar11 < (int)uVar12 + 1) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,0x240695d9,0);
        }
        if ((bRam0000000004f5107c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3c58,0x240695d9,0);
          FUN_021f03f8(PTR_DAT_049fa588);
          FUN_021f03f8(PTR_DAT_049fa590);
          FUN_021f03f8(PTR_DAT_049fa598);
          FUN_021f03f8(PTR_DAT_049fa5a8);
          FUN_021f03f8(PTR_DAT_049fa600);
          FUN_021f03f8(PTR_DAT_049cbed0);
          FUN_021f03f8(PTR_DAT_049b4540);
          FUN_021f03f8(PTR_DAT_049fa848);
          FUN_021f03f8(PTR_DAT_049fa850);
          FUN_021f03f8(PTR_DAT_049fa858);
          bRam0000000004f5107c = 1;
        }
        puVar10 = PTR_DAT_049fa858;
        puVar9 = PTR_DAT_049fa850;
        puVar8 = PTR_DAT_049fa848;
        puVar7 = PTR_DAT_049fa600;
        puVar6 = PTR_DAT_049fa598;
        puVar5 = PTR_DAT_049fa590;
        puVar4 = PTR_DAT_049fa588;
        puVar3 = PTR_DAT_049b4540;
        uStack_90 = 0;
        puStack_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        if (*(long *)(param_2 + 0x90) == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_2 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
        uStack_80 = uStack_98;
        puStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        uStack_a8 = 0;
        puStack_a0 = &uStack_90;
        do {
          uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar15 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_90,*(undefined8 *)puVar4);
            uVar12 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar7);
            }
            uVar17 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
            uVar17 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar17,0x240695d9);
            lVar13 = FUN_021f04e4(*(undefined8 *)puVar3,6);
            if (lVar13 == 0) goto LAB_03444afc;
            if (*(int *)(lVar13 + 0x18) != 0) {
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar8;
              thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20));
              uVar18 = UnityEngine_Object__get_name_3c232a8(param_2,0);
              if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar13 + 0x28) = uVar18;
                thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x28),uVar18);
                if (2 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar9;
                  thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x30));
                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar13 + 0x38) = uVar17;
                    thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x38),uVar17);
                    if (4 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar10;
                      thunk_FUN_021f190c();
                      if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar17 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar12)
                      ;
                      if (5 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)(lVar13 + 0x48) = uVar17;
                        thunk_FUN_021f190c();
                        uVar17 = System_String__Concat_2f7dcb4(lVar13,0);
                        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                        }
                        UnityEngine_Debug__LogError_3bd1338(uVar17,uVar12,0);
                        uVar20 = 0;
                        goto LAB_03444acc;
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar19 = *(long *)puVar6;
          lVar16 = *(long *)(lVar19 + 0x20);
          uVar2 = *(ushort *)(lVar16 + 0x135);
          lVar13 = lVar16;
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
            lVar16 = *(long *)(lVar19 + 0x20);
            uVar2 = *(ushort *)(lVar16 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar16 = FUN_02229718();
          }
          uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar12,uVar1);
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(int *)(lStack_68 + 0x18) != 0x240695d9);
        uVar20 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(param_2);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
        return ZEXT416(uVar20);
      }
      if (((*(long *)(param_1 + 0xa8) != 0) &&
          (lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x120), lVar13 != 0)) &&
         (lVar13 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                             (lVar13,&stack0xffffffffffffffbc,*(undefined8 *)PTR_DAT_049c5b58),
         lVar13 != 0)) {
        uVar17 = StreakTournamentPersonalRewardSheet_Row__GetRewards_2568380(lVar13,0);
        puVar3 = PTR_DAT_049b3bd0;
        iVar11 = *(int *)(lVar13 + 0x18);
        uVar18 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),
                                    &stack0xffffffffffffffb8);
        uVar14 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&stack0xffffffffffffffb4);
        uVar18 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c55b8,uVar18,uVar14,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0x5f7a3f9f,uVar18,0);
        lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                           (param_2,0x85f8a9cf,0);
        if ((lVar13 != 0) &&
           (lVar13 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar13,0), lVar13 != 0)) {
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0
                    ((float)(int)((ulong)uVar12 >> 0x20) / (float)iVar11,0x3f800000,lVar13,0);
          auVar21 = StreakTournamentSubMonitor__UpdateRewardView_24836b0(param_1,param_2,uVar17);
          return auVar21;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

