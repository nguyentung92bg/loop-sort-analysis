/* IL2CPP: GameSettingsState$$OnEnter
void GameSettingsState__OnEnter (GameSettingsState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameSettingsState$$OnEnter
   void GameSettingsState__OnEnter (GameSettingsState_o* __this, const MethodInfo* method); */

undefined4 GameSettingsState__OnEnter_2502938(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
                    /* try { // try from 0260293c to 0270293f has its CatchHandler @ 02602944 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602924 with catch @ 02602940
                       try { // try from 02602940 to 0270296b has its CatchHandler @ 026026fc */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260293c with catch @ 02602944
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026028e4 with catch @ 02602948
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602864 with catch @ 0260294c
                        */
  if ((bRam0000000004f4bd6e & 1) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602884 with catch @ 02602950
                        */
    FUN_021f03f8(PTR_DAT_049c8c68);
    FUN_021f03f8(PTR_DAT_049c8c70);
                    /* try { // try from 0260296c to 0270296f has its CatchHandler @ 02602980 */
    bRam0000000004f4bd6e = 1;
  }
                    /* try { // try from 02602970 to 02702983 has its CatchHandler @ 026026fc */
  GameStateBase__OnEnter_24fc200(param_1);
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 0260296c with catch @ 02602980 */
                    /* try { // try from 02602984 to 0270298b has its CatchHandler @ 02602994 */
    AnalyticsModule__PauseGame_253f7bc(*(long *)(param_1 + 0x80),0);
                    /* try { // try from 0260298c to 02702997 has its CatchHandler @ 026026fc */
    if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02602984 with catch @ 02602994
                        */
                    /* try { // try from 02602998 to 02702a63 has its CatchHandler @ 02602998
                       catch() { ... } // from try @ 02602998 with catch @ 02602998
                       catch() { ... } // from try @ 02602ad0 with catch @ 02602998
                       catch() { ... } // from try @ 02602af4 with catch @ 02602998
                       catch() { ... } // from try @ 02602b44 with catch @ 02602998
                       catch() { ... } // from try @ 02602b6c with catch @ 02602998
                       catch() { ... } // from try @ 02602b90 with catch @ 02602998 */
      TimeModule__Pause_253a43c(0,0,*(long *)(param_1 + 0x78),0,0);
      if (*(long *)(param_1 + 0x70) != 0) {
        Monitors__Activate_object__268887c
                  (*(long *)(param_1 + 0x70),0,*(undefined8 *)PTR_DAT_049c8c68);
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (lVar10 = Monitors__Get_object__26889d0
                               (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c8c70),
           lVar10 != 0)) {
          lVar10 = *(long *)(lVar10 + 0x20);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0(0,0xe7cfb7c1,0);
          }
          if ((bRam0000000004f5107c & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049b3c58,0xe7cfb7c1,0);
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
          puVar9 = PTR_DAT_049fa858;
          puVar8 = PTR_DAT_049fa850;
          puVar7 = PTR_DAT_049fa848;
          puVar6 = PTR_DAT_049fa600;
          puVar5 = PTR_DAT_049fa598;
          puVar4 = PTR_DAT_049fa590;
          puVar3 = PTR_DAT_049fa588;
          puVar2 = PTR_DAT_049b4540;
          uStack_90 = 0;
          puStack_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          if (*(long *)(lVar10 + 0x90) != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(lVar10 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
            uStack_80 = uStack_98;
            puStack_88 = puStack_a0;
            uStack_90 = uStack_a8;
            uStack_a8 = 0;
            puStack_a0 = &uStack_90;
            while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&uStack_90,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
              lVar17 = *(long *)puVar5;
              lVar12 = *(long *)(lVar17 + 0x20);
              uVar1 = *(ushort *)(lVar12 + 0x135);
              lVar13 = lVar12;
              if ((uVar1 & 1) == 0) {
                lVar13 = FUN_02229718();
                lVar12 = *(long *)(lVar17 + 0x20);
                uVar1 = *(ushort *)(lVar12 + 0x135);
              }
              uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar12 = FUN_02229718();
              }
              uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                          *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&lStack_68,uVar14,uVar18);
              if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              if (*(int *)(lStack_68 + 0x18) == -0x1830483f) {
                uVar18 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar10);
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&uStack_90,*(undefined8 *)puVar3);
                return uVar18;
              }
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_90,*(undefined8 *)puVar3);
            uVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar6);
            }
            uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
            uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,0xe7cfb7c1);
            lVar13 = FUN_021f04e4(*(undefined8 *)puVar2,6);
            if (lVar13 != 0) {
              if (*(int *)(lVar13 + 0x18) != 0) {
                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar7;
                thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20));
                uVar16 = UnityEngine_Object__get_name_3c232a8(lVar10,0);
                if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar13 + 0x28) = uVar16;
                  thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x28),uVar16);
                  if (2 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar8;
                    thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x30));
                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar13 + 0x38) = uVar15;
                      thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x38),uVar15);
                      if (4 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar9;
                        thunk_FUN_021f190c();
                        if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        uVar15 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0
                                           (uVar14);
                        if (5 < *(uint *)(lVar13 + 0x18)) {
                          *(undefined8 *)(lVar13 + 0x48) = uVar15;
                          thunk_FUN_021f190c();
                          uVar15 = System_String__Concat_2f7dcb4(lVar13,0);
                          if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                            FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                          }
                          UnityEngine_Debug__LogError_3bd1338(uVar15,uVar14,0);
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

