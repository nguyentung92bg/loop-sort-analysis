/* IL2CPP: PlayingMonitor$$HandleRemoteConfig
void PlayingMonitor__HandleRemoteConfig (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$HandleRemoteConfig
   void PlayingMonitor__HandleRemoteConfig (PlayingMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] PlayingMonitor__HandleRemoteConfig_244f5d4(long param_1)

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
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
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
  
  if ((bRam0000000004f4b8c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c47c8);
    FUN_021f03f8(PTR_DAT_049c47d0);
    FUN_021f03f8(PTR_DAT_049c47d8);
    FUN_021f03f8(PTR_DAT_049c1940);
    FUN_021f03f8(PTR_DAT_049c47e0);
    FUN_021f03f8(PTR_DAT_049c47e8);
    bRam0000000004f4b8c9 = 1;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                       (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c47c8);
    *(undefined8 *)(param_1 + 0x108) = uVar11;
    thunk_FUN_021f190c(param_1 + 0x108,uVar11);
    if (*(long *)(param_1 + 0xc0) != 0) {
      uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                         (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c47d0);
      *(undefined8 *)(param_1 + 0x110) = uVar11;
      thunk_FUN_021f190c(param_1 + 0x110,uVar11);
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                           (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c47e0);
        *(undefined8 *)(param_1 + 0x128) = uVar11;
        thunk_FUN_021f190c(param_1 + 0x128,uVar11);
        if (*(long *)(param_1 + 0xc0) != 0) {
          uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                             (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c1940);
          *(undefined8 *)(param_1 + 0x138) = uVar11;
          thunk_FUN_021f190c(param_1 + 0x138,uVar11);
          if (*(long *)(param_1 + 0xc0) != 0) {
            uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                               (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c47d8);
            *(undefined8 *)(param_1 + 0x140) = uVar11;
            thunk_FUN_021f190c(param_1 + 0x140,uVar11);
            if (*(long *)(param_1 + 0xc0) != 0) {
              uVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                                 (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c47e8);
              *(undefined8 *)(param_1 + 0x148) = uVar11;
              thunk_FUN_021f190c(param_1 + 0x148,uVar11);
              auVar20 = StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                                  (param_1,0x5f10e269,0);
              if (*(long *)(param_1 + 0x108) != 0) {
                if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) != '\0') {
                  auVar20 = StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                                      (param_1,0xcaf67d6a,0);
                }
                if (*(long *)(param_1 + 0x110) != 0) {
                  if (*(char *)(*(long *)(param_1 + 0x110) + 0x10) == '\0') {
                    return auVar20;
                  }
                  lVar17 = *(long *)(param_1 + 0x20);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0(0,0xf6f322b4,0);
                  }
                  if ((bRam0000000004f5107c & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,0xf6f322b4,0);
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
                  if (*(long *)(lVar17 + 0x90) == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                            (*(long *)(lVar17 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
                  uStack_80 = uStack_98;
                  puStack_88 = puStack_a0;
                  uStack_90 = uStack_a8;
                  uStack_a8 = 0;
                  puStack_a0 = &uStack_90;
                  do {
                    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                       (&uStack_90,*(undefined8 *)puVar5);
                    if ((uVar12 & 1) == 0) {
                      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                                (&uStack_90,*(undefined8 *)puVar4);
                      uVar11 = UnityEngine_Component__get_gameObject_3c187f4(lVar17,0);
                      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                        FUN_021f0574(*(long *)puVar7);
                      }
                      uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
                      uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,0xf6f322b4)
                      ;
                      lVar14 = FUN_021f04e4(*(undefined8 *)puVar3,6);
                      if (lVar14 == 0) goto LAB_03444afc;
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar8;
                        thunk_FUN_021f190c((undefined8 *)(lVar14 + 0x20));
                        uVar16 = UnityEngine_Object__get_name_3c232a8(lVar17,0);
                        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar14 + 0x28) = uVar16;
                          thunk_FUN_021f190c((undefined8 *)(lVar14 + 0x28),uVar16);
                          if (2 < *(uint *)(lVar14 + 0x18)) {
                            *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar9;
                            thunk_FUN_021f190c((undefined8 *)(lVar14 + 0x30));
                            if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar14 + 0x38) = uVar15;
                              thunk_FUN_021f190c((undefined8 *)(lVar14 + 0x38),uVar15);
                              if (4 < *(uint *)(lVar14 + 0x18)) {
                                *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)puVar10;
                                thunk_FUN_021f190c();
                                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                                  FUN_021f0574();
                                }
                                uVar15 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0
                                                   (uVar11);
                                if (5 < *(uint *)(lVar14 + 0x18)) {
                                  *(undefined8 *)(lVar14 + 0x48) = uVar15;
                                  thunk_FUN_021f190c();
                                  uVar15 = System_String__Concat_2f7dcb4(lVar14,0);
                                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                                  }
                                  UnityEngine_Debug__LogError_3bd1338(uVar15,uVar11,0);
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
                    lVar13 = *(long *)(lVar18 + 0x20);
                    uVar2 = *(ushort *)(lVar13 + 0x135);
                    lVar14 = lVar13;
                    if ((uVar2 & 1) == 0) {
                      lVar14 = FUN_02229718();
                      lVar13 = *(long *)(lVar18 + 0x20);
                      uVar2 = *(ushort *)(lVar13 + 0x135);
                    }
                    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
                    if ((uVar2 & 1) == 0) {
                      lVar13 = FUN_02229718();
                    }
                    uVar11 = thunk_FUN_0224e54c(&uStack_90,
                                                *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) +
                                                         0x80) + 0x60);
                    func_0x04608620(&lStack_68,uVar11,uVar1);
                    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                  } while (*(int *)(lStack_68 + 0x18) != -0x90cdd4c);
                  uVar19 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar17);
                  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                            (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
                  return ZEXT416(uVar19);
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

