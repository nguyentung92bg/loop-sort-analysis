/* IL2CPP: RankingMonitor$$Setup
void RankingMonitor__Setup (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$Setup
   void RankingMonitor__Setup (RankingMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] RankingMonitor__Setup_2456b60(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  undefined8 in_stack_ffffffffffffffc8;
  
  if ((bRam0000000004f4b8f6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4278);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c4280);
    FUN_021f03f8(PTR_DAT_049c3a60);
    FUN_021f03f8(PTR_DAT_049c4af8);
    FUN_021f03f8(PTR_DAT_049c4b00);
    FUN_021f03f8(PTR_DAT_049c4b08);
    FUN_021f03f8(PTR_DAT_049c42d0);
    bRam0000000004f4b8f6 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                       (*(long *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_049c4b08);
    *(undefined8 *)(param_1 + 0x140) = uVar11;
    thunk_FUN_021f190c(param_1 + 0x140,uVar11);
    if (*(long *)(param_1 + 0x140) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x140) + 0x10) == '\0') {
        lVar12 = *(long *)(param_1 + 0x20);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,0xf673ccd2,0);
        }
        if ((bRam0000000004f5107c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3c58,0xf673ccd2,0);
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
        if (*(long *)(lVar12 + 0x90) == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar12 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
        uStack_80 = uStack_98;
        puStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        uStack_a8 = 0;
        puStack_a0 = &uStack_90;
        do {
          uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar13 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_90,*(undefined8 *)puVar4);
            uVar11 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar7);
            }
            uVar17 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
            uVar17 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar17,0xf673ccd2);
            lVar16 = FUN_021f04e4(*(undefined8 *)puVar3,6);
            if (lVar16 == 0) goto LAB_03444afc;
            if (*(int *)(lVar16 + 0x18) != 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)puVar8;
              thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x20));
              uVar15 = UnityEngine_Object__get_name_3c232a8(lVar12,0);
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar16 + 0x28) = uVar15;
                thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x28),uVar15);
                if (2 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar9;
                  thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x30));
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar16 + 0x38) = uVar17;
                    thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x38),uVar17);
                    if (4 < *(uint *)(lVar16 + 0x18)) {
                      *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)puVar10;
                      thunk_FUN_021f190c();
                      if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar17 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar11)
                      ;
                      if (5 < *(uint *)(lVar16 + 0x18)) {
                        *(undefined8 *)(lVar16 + 0x48) = uVar17;
                        thunk_FUN_021f190c();
                        uVar17 = System_String__Concat_2f7dcb4(lVar16,0);
                        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                        }
                        UnityEngine_Debug__LogError_3bd1338(uVar17,uVar11,0);
                        uVar19 = 0;
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
          lVar18 = *(long *)puVar6;
          lVar14 = *(long *)(lVar18 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x135);
          lVar16 = lVar14;
          if ((uVar2 & 1) == 0) {
            lVar16 = FUN_02229718();
            lVar14 = *(long *)(lVar18 + 0x20);
            uVar2 = *(ushort *)(lVar14 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar14 = FUN_02229718();
          }
          uVar11 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar11,uVar1);
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(int *)(lStack_68 + 0x18) != -0x98c332e);
        uVar19 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar12);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
        return ZEXT416(uVar19);
      }
      lVar12 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                         (param_1,0x9147e155,0);
      if (lVar12 != 0) {
        lVar12 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0);
        if ((*(long *)(param_1 + 0x140) != 0) && (lVar12 != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34
                    (lVar12,*(undefined1 *)(*(long *)(param_1 + 0x140) + 0x18),0);
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
          uVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                             (param_1,0xa41ab296,0);
          *(undefined8 *)(param_1 + 0x100) = uVar11;
          thunk_FUN_021f190c(param_1 + 0x100,uVar11);
          uVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                             (param_1,0xd68d6a86,0);
          *(undefined8 *)(param_1 + 0x148) = uVar11;
          thunk_FUN_021f190c(param_1 + 0x148,uVar11);
          lVar12 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                             (param_1,0xd83b59b6,0);
          if (lVar12 != 0) {
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (lVar12,&stack0xffffffffffffffc8,*(undefined8 *)PTR_DAT_049c3a60);
            *(undefined8 *)(param_1 + 0x118) = in_stack_ffffffffffffffc8;
            thunk_FUN_021f190c(param_1 + 0x118);
            if (*(long *)(param_1 + 0x118) != 0) {
              UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*(long *)(param_1 + 0x118),0);
              puVar4 = PTR_DAT_049c4af8;
              puVar3 = PTR_DAT_049b4308;
              if (*(long *)(param_1 + 0x118) != 0) {
                UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(param_1 + 0x118),0,0);
                lVar12 = *(long *)(param_1 + 0xa8);
                uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                System_Action___ctor_306b98c(uVar11,param_1,*(undefined8 *)puVar4,0);
                puVar5 = PTR_DAT_049c4b00;
                puVar4 = PTR_DAT_049c4280;
                puVar3 = PTR_DAT_049c4278;
                if (lVar12 != 0) {
                  Leaderboard__add_LeaderboardFetched_251cce4(lVar12,uVar11,0);
                  RankingMonitor__SetupButtons_2456e54(param_1);
                  uVar17 = *(undefined8 *)(param_1 + 0xf0);
                  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                            (uVar11,param_1,*(undefined8 *)puVar5,0);
                  lVar16 = *(long *)puVar4;
                  lVar12 = *(long *)(lVar16 + 0x38);
                  if (lVar12 == 0) {
                    FUN_02229774(lVar16);
                    lVar12 = *(long *)(lVar16 + 0x38);
                  }
                  lVar12 = *(long *)(lVar12 + 0x10);
                  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02229718();
                  }
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  puVar3 = PTR_DAT_049c42d0;
                  lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02229718();
                  }
                  auVar20 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                                      (uVar17,uVar11,**(undefined8 **)(lVar12 + 0xb8),
                                       *(undefined8 *)puVar3);
                  return auVar20;
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

