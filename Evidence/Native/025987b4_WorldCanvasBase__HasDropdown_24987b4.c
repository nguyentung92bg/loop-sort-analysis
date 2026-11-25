/* IL2CPP: WorldCanvasBase$$HasDropdown
bool WorldCanvasBase__HasDropdown (WorldCanvasBase_o* __this, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$HasDropdown
   bool WorldCanvasBase__HasDropdown (WorldCanvasBase_o* __this, int32_t role, const MethodInfo*
   method); */

uint WorldCanvasBase__HasDropdown_24987b4(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x25;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(param_1 + 0xa0);
  uVar13 = param_2 & 0xffffffff;
  if ((bRam0000000004f510c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049faf18,param_2,0);
    bRam0000000004f510c7 = 1;
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar12 = (int)param_2;
  lVar10 = *(long *)PTR_DAT_049faf18;
  puVar11 = *(undefined8 **)(lVar10 + 0x38);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_02229774(lVar10);
    puVar11 = *(undefined8 **)(lVar10 + 0x38);
  }
  puVar3 = PTR_DAT_049b3bd0;
  uVar14 = *puVar11;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar14 = System_Type__GetTypeFromHandle_310ebfc(uVar14,0);
  lVar8 = StatefulUI_Runtime_Core_StatefulUiManager__get_Instance_3346fd4(0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = System_Type__op_Equality_3117e14(uVar14,*(undefined8 *)(lVar8 + 0x18),0);
  if ((uVar9 & 1) == 0) {
    uVar15 = *(undefined8 *)(lVar8 + 0x30);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
    if ((uVar9 & 1) == 0) {
      uVar15 = *(undefined8 *)(lVar8 + 0x10);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
      if ((uVar9 & 1) == 0) {
        uVar15 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
        if ((uVar9 & 1) == 0) {
          uVar15 = *(undefined8 *)(lVar8 + 0x28);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
          if ((uVar9 & 1) == 0) {
            uVar15 = *(undefined8 *)(lVar8 + 0x38);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
            if ((uVar9 & 1) == 0) {
              uVar15 = *(undefined8 *)(lVar8 + 0x40);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
              if ((uVar9 & 1) == 0) {
                uVar15 = *(undefined8 *)(lVar8 + 0x48);
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
                if ((uVar9 & 1) == 0) {
                  uVar15 = *(undefined8 *)(lVar8 + 0x58);
                  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
                  if ((uVar9 & 1) == 0) {
                    uVar15 = *(undefined8 *)(lVar8 + 0x60);
                    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
                    if ((uVar9 & 1) == 0) {
                      uVar15 = *(undefined8 *)(lVar8 + 0x68);
                      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
                      if ((uVar9 & 1) == 0) {
                        uVar15 = *(undefined8 *)(lVar8 + 0x70);
                        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        uVar9 = System_Type__op_Equality_3117e14(uVar14,uVar15,0);
                        if ((uVar9 & 1) == 0) {
                          uVar15 = thunk_FUN_02256840(PTR_DAT_049ce798);
                          uVar14 = System_String__Format_2f73700(uVar15,uVar14,0);
                          thunk_FUN_02256840(PTR_DAT_049b4350);
                          uVar15 = thunk_FUN_0222ca34();
                          System_Exception___ctor_31372a0(uVar15,uVar14,0);
                    /* WARNING: Subroutine does not return */
                          FUN_021f0564(uVar15,lVar10);
                        }
                        if ((bRam0000000004f51093 & 1) == 0) {
                          FUN_021f03f8(PTR_DAT_049facc0,uVar13,0);
                          FUN_021f03f8(PTR_DAT_049facc8);
                          FUN_021f03f8(PTR_DAT_049facd0);
                          FUN_021f03f8(PTR_DAT_049facd8);
                          bRam0000000004f51093 = 1;
                        }
                        puVar5 = PTR_DAT_049facd0;
                        puVar4 = PTR_DAT_049facc8;
                        puVar3 = PTR_DAT_049facc0;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_48 = 0;
                        if (*(long *)(lVar7 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                                  (*(long *)(lVar7 + 0x70),&uStack_58,
                                   *(undefined8 *)PTR_DAT_049facd8);
                        do {
                          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                            (&uStack_58,*(undefined8 *)puVar4);
                          if ((uVar6 & 1) == 0) break;
                          lVar8 = *(long *)puVar5;
                          lVar10 = *(long *)(lVar8 + 0x20);
                          uVar2 = *(ushort *)(lVar10 + 0x135);
                          lVar7 = lVar10;
                          if ((uVar2 & 1) == 0) {
                            lVar7 = FUN_02229718();
                            lVar10 = *(long *)(lVar8 + 0x20);
                            uVar2 = *(ushort *)(lVar10 + 0x135);
                          }
                          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                          if ((uVar2 & 1) == 0) {
                            lVar10 = FUN_02229718();
                          }
                          uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                                      *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) +
                                                                         8) + 0x80) + 0x60);
                          func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                          if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_021f06a0();
                          }
                        } while (*(int *)(unaff_x25 + 0x18) != iVar12);
                        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                                  (&uStack_58,*(undefined8 *)puVar3);
                        return uVar6 & 1;
                      }
                      if ((bRam0000000004f51094 & 1) == 0) {
                        FUN_021f03f8(PTR_DAT_049face0,uVar13,0);
                        FUN_021f03f8(PTR_DAT_049face8);
                        FUN_021f03f8(PTR_DAT_049facf0);
                        FUN_021f03f8(PTR_DAT_049facf8);
                        bRam0000000004f51094 = 1;
                      }
                      puVar5 = PTR_DAT_049facf0;
                      puVar4 = PTR_DAT_049face8;
                      puVar3 = PTR_DAT_049face0;
                      uStack_58 = 0;
                      uStack_50 = 0;
                      uStack_48 = 0;
                      if (*(long *)(lVar7 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                                (*(long *)(lVar7 + 0x58),&uStack_58,*(undefined8 *)PTR_DAT_049facf8)
                      ;
                      do {
                        uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                          (&uStack_58,*(undefined8 *)puVar4);
                        if ((uVar6 & 1) == 0) break;
                        lVar8 = *(long *)puVar5;
                        lVar10 = *(long *)(lVar8 + 0x20);
                        uVar2 = *(ushort *)(lVar10 + 0x135);
                        lVar7 = lVar10;
                        if ((uVar2 & 1) == 0) {
                          lVar7 = FUN_02229718();
                          lVar10 = *(long *)(lVar8 + 0x20);
                          uVar2 = *(ushort *)(lVar10 + 0x135);
                        }
                        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                        if ((uVar2 & 1) == 0) {
                          lVar10 = FUN_02229718();
                        }
                        uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8
                                                                       ) + 0x80) + 0x60);
                        func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                      } while (*(int *)(unaff_x25 + 0x18) != iVar12);
                      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                                (&uStack_58,*(undefined8 *)puVar3);
                      return uVar6 & 1;
                    }
                    if ((bRam0000000004f51095 & 1) == 0) {
                      FUN_021f03f8(PTR_DAT_049fa908,uVar13,0);
                      FUN_021f03f8(PTR_DAT_049fa910);
                      FUN_021f03f8(PTR_DAT_049fa918);
                      FUN_021f03f8(PTR_DAT_049fa920);
                      bRam0000000004f51095 = 1;
                    }
                    puVar5 = PTR_DAT_049fa918;
                    puVar4 = PTR_DAT_049fa910;
                    puVar3 = PTR_DAT_049fa908;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_48 = 0;
                    if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                              (*(long *)(lVar7 + 0x38),&uStack_58,*(undefined8 *)PTR_DAT_049fa920);
                    do {
                      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&uStack_58,*(undefined8 *)puVar4);
                      if ((uVar6 & 1) == 0) break;
                      lVar8 = *(long *)puVar5;
                      lVar10 = *(long *)(lVar8 + 0x20);
                      uVar2 = *(ushort *)(lVar10 + 0x135);
                      lVar7 = lVar10;
                      if ((uVar2 & 1) == 0) {
                        lVar7 = FUN_02229718();
                        lVar10 = *(long *)(lVar8 + 0x20);
                        uVar2 = *(ushort *)(lVar10 + 0x135);
                      }
                      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                      if ((uVar2 & 1) == 0) {
                        lVar10 = FUN_02229718();
                      }
                      uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8)
                                                           + 0x80) + 0x60);
                      func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                    } while (*(int *)(unaff_x25 + 0x18) != iVar12);
                    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                              (&uStack_58,*(undefined8 *)puVar3);
                    return uVar6 & 1;
                  }
                  if ((bRam0000000004f51096 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049fad00,uVar13,0);
                    FUN_021f03f8(PTR_DAT_049fad08);
                    FUN_021f03f8(PTR_DAT_049fad10);
                    FUN_021f03f8(PTR_DAT_049fad18);
                    bRam0000000004f51096 = 1;
                  }
                  puVar5 = PTR_DAT_049fad10;
                  puVar4 = PTR_DAT_049fad08;
                  puVar3 = PTR_DAT_049fad00;
                  uStack_58 = 0;
                  uStack_50 = 0;
                  uStack_48 = 0;
                  if (*(long *)(lVar7 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                            (*(long *)(lVar7 + 0x80),&uStack_58,*(undefined8 *)PTR_DAT_049fad18);
                  do {
                    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&uStack_58,*(undefined8 *)puVar4);
                    if ((uVar6 & 1) == 0) break;
                    lVar8 = *(long *)puVar5;
                    lVar10 = *(long *)(lVar8 + 0x20);
                    uVar2 = *(ushort *)(lVar10 + 0x135);
                    lVar7 = lVar10;
                    if ((uVar2 & 1) == 0) {
                      lVar7 = FUN_02229718();
                      lVar10 = *(long *)(lVar8 + 0x20);
                      uVar2 = *(ushort *)(lVar10 + 0x135);
                    }
                    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                    if ((uVar2 & 1) == 0) {
                      lVar10 = FUN_02229718();
                    }
                    uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) +
                                                         0x80) + 0x60);
                    func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                  } while (*(int *)(unaff_x25 + 0x18) != iVar12);
                  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                            (&uStack_58,*(undefined8 *)puVar3);
                  return uVar6 & 1;
                }
                if ((bRam0000000004f51097 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_049fad20,uVar13,0);
                  FUN_021f03f8(PTR_DAT_049fad28);
                  FUN_021f03f8(PTR_DAT_049fad30);
                  FUN_021f03f8(PTR_DAT_049fad38);
                  bRam0000000004f51097 = 1;
                }
                puVar5 = PTR_DAT_049fad30;
                puVar4 = PTR_DAT_049fad28;
                puVar3 = PTR_DAT_049fad20;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                if (*(long *)(lVar7 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                          (*(long *)(lVar7 + 0x50),&uStack_58,*(undefined8 *)PTR_DAT_049fad38);
                do {
                  uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&uStack_58,*(undefined8 *)puVar4);
                  if ((uVar6 & 1) == 0) break;
                  lVar8 = *(long *)puVar5;
                  lVar10 = *(long *)(lVar8 + 0x20);
                  uVar2 = *(ushort *)(lVar10 + 0x135);
                  lVar7 = lVar10;
                  if ((uVar2 & 1) == 0) {
                    lVar7 = FUN_02229718();
                    lVar10 = *(long *)(lVar8 + 0x20);
                    uVar2 = *(ushort *)(lVar10 + 0x135);
                  }
                  uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                  if ((uVar2 & 1) == 0) {
                    lVar10 = FUN_02229718();
                  }
                  uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                              *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) +
                                                       0x80) + 0x60);
                  func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                } while (*(int *)(unaff_x25 + 0x18) != iVar12);
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&uStack_58,*(undefined8 *)puVar3);
                return uVar6 & 1;
              }
              if ((bRam0000000004f51098 & 1) == 0) {
                FUN_021f03f8(PTR_DAT_049fad40,uVar13,0);
                FUN_021f03f8(PTR_DAT_049fad48);
                FUN_021f03f8(PTR_DAT_049fad50);
                FUN_021f03f8(PTR_DAT_049fad58);
                bRam0000000004f51098 = 1;
              }
              puVar5 = PTR_DAT_049fad50;
              puVar4 = PTR_DAT_049fad48;
              puVar3 = PTR_DAT_049fad40;
              uStack_58 = 0;
              uStack_50 = 0;
              uStack_48 = 0;
              if (*(long *)(lVar7 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (*(long *)(lVar7 + 0x88),&uStack_58,*(undefined8 *)PTR_DAT_049fad58);
              do {
                uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_58,*(undefined8 *)puVar4);
                if ((uVar6 & 1) == 0) break;
                lVar8 = *(long *)puVar5;
                lVar10 = *(long *)(lVar8 + 0x20);
                uVar2 = *(ushort *)(lVar10 + 0x135);
                lVar7 = lVar10;
                if ((uVar2 & 1) == 0) {
                  lVar7 = FUN_02229718();
                  lVar10 = *(long *)(lVar8 + 0x20);
                  uVar2 = *(ushort *)(lVar10 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                if ((uVar2 & 1) == 0) {
                  lVar10 = FUN_02229718();
                }
                uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                            *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              } while (*(int *)(unaff_x25 + 0x18) != iVar12);
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_58,*(undefined8 *)puVar3);
              return uVar6 & 1;
            }
            if ((bRam0000000004f51099 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_049cd0e8,uVar13,0);
              FUN_021f03f8(PTR_DAT_049cd0f0);
              FUN_021f03f8(PTR_DAT_049cd0f8);
              FUN_021f03f8(PTR_DAT_049cd100);
              bRam0000000004f51099 = 1;
            }
            puVar5 = PTR_DAT_049cd0f8;
            puVar4 = PTR_DAT_049cd0f0;
            puVar3 = PTR_DAT_049cd0e8;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            if (*(long *)(lVar7 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(lVar7 + 0x60),&uStack_58,*(undefined8 *)PTR_DAT_049cd100);
            do {
              uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_58,*(undefined8 *)puVar4);
              if ((uVar6 & 1) == 0) break;
              lVar8 = *(long *)puVar5;
              lVar10 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar10 + 0x135);
              lVar7 = lVar10;
              if ((uVar2 & 1) == 0) {
                lVar7 = FUN_02229718();
                lVar10 = *(long *)(lVar8 + 0x20);
                uVar2 = *(ushort *)(lVar10 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar10 = FUN_02229718();
              }
              uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                          *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
              if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            } while (*(int *)(unaff_x25 + 0x18) != iVar12);
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_58,*(undefined8 *)puVar3);
            return uVar6 & 1;
          }
          if ((bRam0000000004f5109a & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049fad60,uVar13,0);
            FUN_021f03f8(PTR_DAT_049fad68);
            FUN_021f03f8(PTR_DAT_049fad70);
            FUN_021f03f8(PTR_DAT_049fad78);
            bRam0000000004f5109a = 1;
          }
          puVar5 = PTR_DAT_049fad70;
          puVar4 = PTR_DAT_049fad68;
          puVar3 = PTR_DAT_049fad60;
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          if (*(long *)(lVar7 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(lVar7 + 0x78),&uStack_58,*(undefined8 *)PTR_DAT_049fad78);
          do {
            uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_58,*(undefined8 *)puVar4);
            if ((uVar6 & 1) == 0) break;
            lVar8 = *(long *)puVar5;
            lVar10 = *(long *)(lVar8 + 0x20);
            uVar2 = *(ushort *)(lVar10 + 0x135);
            lVar7 = lVar10;
            if ((uVar2 & 1) == 0) {
              lVar7 = FUN_02229718();
              lVar10 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar10 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar10 = FUN_02229718();
            }
            uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                        *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
            if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          } while (*(int *)(unaff_x25 + 0x18) != iVar12);
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_58,*(undefined8 *)puVar3);
          return uVar6 & 1;
        }
        if ((bRam0000000004f5109b & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049fab08,uVar13,0);
          FUN_021f03f8(PTR_DAT_049fab18);
          FUN_021f03f8(PTR_DAT_049fab30);
          FUN_021f03f8(PTR_DAT_049fab40);
          bRam0000000004f5109b = 1;
        }
        puVar5 = PTR_DAT_049fab30;
        puVar4 = PTR_DAT_049fab18;
        puVar3 = PTR_DAT_049fab08;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(long *)(lVar7 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar7 + 0x48),&uStack_58,*(undefined8 *)PTR_DAT_049fab40);
        do {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_58,*(undefined8 *)puVar4);
          if ((uVar6 & 1) == 0) break;
          lVar8 = *(long *)puVar5;
          lVar10 = *(long *)(lVar8 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
          lVar7 = lVar10;
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
            lVar10 = *(long *)(lVar8 + 0x20);
            uVar2 = *(ushort *)(lVar10 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                      *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
          if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(int *)(unaff_x25 + 0x18) != iVar12);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_58,*(undefined8 *)puVar3);
        return uVar6 & 1;
      }
      if ((bRam0000000004f5109c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049fad80,uVar13,0);
        FUN_021f03f8(PTR_DAT_049fad88);
        FUN_021f03f8(PTR_DAT_049fad90);
        FUN_021f03f8(PTR_DAT_049fad98);
        bRam0000000004f5109c = 1;
      }
      puVar5 = PTR_DAT_049fad90;
      puVar4 = PTR_DAT_049fad88;
      puVar3 = PTR_DAT_049fad80;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      if (*(long *)(lVar7 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(lVar7 + 0x40),&uStack_58,*(undefined8 *)PTR_DAT_049fad98);
      do {
        uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_58,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) break;
        lVar8 = *(long *)puVar5;
        lVar10 = *(long *)(lVar8 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar7 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
          lVar10 = *(long *)(lVar8 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      } while (*(int *)(unaff_x25 + 0x18) != iVar12);
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_58,*(undefined8 *)puVar3);
      return uVar6 & 1;
    }
    if ((bRam0000000004f5109e & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049faba8,uVar13,0);
      FUN_021f03f8(PTR_DAT_049fabb0);
      FUN_021f03f8(PTR_DAT_049fabb8);
      FUN_021f03f8(PTR_DAT_049fabc0);
      bRam0000000004f5109e = 1;
    }
    puVar5 = PTR_DAT_049fabb8;
    puVar4 = PTR_DAT_049fabb0;
    puVar3 = PTR_DAT_049faba8;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (*(long *)(lVar7 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar7 + 0x68),&uStack_58,*(undefined8 *)PTR_DAT_049fabc0);
    do {
      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_58,*(undefined8 *)puVar4);
      if ((uVar6 & 1) == 0) break;
      lVar8 = *(long *)puVar5;
      lVar10 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
        lVar10 = *(long *)(lVar8 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    } while (*(int *)(unaff_x25 + 0x18) != iVar12);
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_58,*(undefined8 *)puVar3);
    return uVar6 & 1;
  }
  if ((bRam0000000004f5109d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fabc8,uVar13,0);
    FUN_021f03f8(PTR_DAT_049fabd0);
    FUN_021f03f8(PTR_DAT_049fabd8);
    FUN_021f03f8(PTR_DAT_049fabe0);
    bRam0000000004f5109d = 1;
  }
  puVar5 = PTR_DAT_049fabd8;
  puVar4 = PTR_DAT_049fabd0;
  puVar3 = PTR_DAT_049fabc8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar7 + 0x30),&uStack_58,*(undefined8 *)PTR_DAT_049fabe0);
  do {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_58,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) break;
    lVar8 = *(long *)puVar5;
    lVar10 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar7 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
      lVar10 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_58,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&stack0xffffffffffffffc8,uVar14,uVar1);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  } while (*(int *)(unaff_x25 + 0x18) != iVar12);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_58,*(undefined8 *)puVar3);
  return uVar6 & 1;
}

