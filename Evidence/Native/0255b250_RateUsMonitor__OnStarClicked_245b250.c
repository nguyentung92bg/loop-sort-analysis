/* IL2CPP: RateUsMonitor$$OnStarClicked
void RateUsMonitor__OnStarClicked (RateUsMonitor_o* __this, int32_t starRating, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$OnStarClicked
   void RateUsMonitor__OnStarClicked (RateUsMonitor_o* __this, int32_t starRating, const MethodInfo*
   method); */

undefined1  [16] RateUsMonitor__OnStarClicked_245b250(long param_1,int param_2)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  lVar16 = *(long *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xb0) = param_2;
  if (lVar16 != 0) {
    lVar17 = 0;
    do {
      uVar20 = (uint)lVar17;
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar20) {
        auVar21 = StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                            (param_1,0x95f4676c,0);
        if (3 < param_2) {
          return auVar21;
        }
        lVar16 = *(long *)(param_1 + 0x20);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,0x1b0af5a7,0);
        }
        if ((bRam0000000004f5107c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3c58,0x1b0af5a7,0);
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
        if (*(long *)(lVar16 + 0x90) == 0) goto LAB_03444afc;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar16 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
        uStack_80 = uStack_98;
        puStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        uStack_a8 = 0;
        puStack_a0 = &uStack_90;
        goto LAB_034448a8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      plVar10 = *(long **)(lVar16 + lVar17 * 8 + 0x20);
      if (plVar10 == (long *)0x0) break;
      uVar19 = 0x3f800000;
      if (param_2 <= (int)uVar20) {
        uVar19 = 0;
      }
      (**(code **)(*plVar10 + 0x2a8))
                (uVar19,uVar19,uVar19,0x3f800000,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      lVar16 = *(long *)(param_1 + 0xa8);
      lVar17 = lVar17 + 1;
    } while (lVar16 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    lVar18 = *(long *)puVar5;
    lVar12 = *(long *)(lVar18 + 0x20);
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar17 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar17 = FUN_02229718();
      lVar12 = *(long *)(lVar18 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    uVar19 = *(undefined4 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_68,uVar13,uVar19);
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lStack_68 + 0x18) == 0x1b0af5a7) break;
LAB_034448a8:
    uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_90,*(undefined8 *)puVar4);
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar3);
      uVar13 = UnityEngine_Component__get_gameObject_3c187f4(lVar16,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar6);
      }
      uVar14 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
      uVar14 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar14,0x1b0af5a7);
      lVar17 = FUN_021f04e4(*(undefined8 *)puVar2,6);
      if (lVar17 == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar17 + 0x18) != 0) {
        *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)puVar7;
        thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x20));
        uVar15 = UnityEngine_Object__get_name_3c232a8(lVar16,0);
        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar17 + 0x28) = uVar15;
          thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x28),uVar15);
          if (2 < *(uint *)(lVar17 + 0x18)) {
            *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar8;
            thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x30));
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar17 + 0x38) = uVar14;
              thunk_FUN_021f190c((undefined8 *)(lVar17 + 0x38),uVar14);
              if (4 < *(uint *)(lVar17 + 0x18)) {
                *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)puVar9;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar14 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar13);
                if (5 < *(uint *)(lVar17 + 0x18)) {
                  *(undefined8 *)(lVar17 + 0x48) = uVar14;
                  thunk_FUN_021f190c();
                  uVar14 = System_String__Concat_2f7dcb4(lVar17,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  UnityEngine_Debug__LogError_3bd1338(uVar14,uVar13,0);
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
  }
  uVar20 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar16);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_90,*(undefined8 *)puVar3);
LAB_03444acc:
  return ZEXT416(uVar20);
}

