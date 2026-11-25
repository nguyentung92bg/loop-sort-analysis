/* IL2CPP: ReviveMultiplePageVariant$$SetReasonState
void ReviveMultiplePageVariant__SetReasonState (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$SetReasonState
   void ReviveMultiplePageVariant__SetReasonState (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

undefined1  [16] ReviveMultiplePageVariant__SetReasonState_2492608(long param_1)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  uint uVar19;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar20 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0xeca14f6a,0);
  if (*(int *)(param_1 + 200) == 0) {
    if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar17 = 0xcaf67d6a;
    if (*(int *)(*(long *)(param_1 + 0xd0) + 0x18) != 6) {
      uVar17 = 0x8bf4a033;
    }
  }
  else {
    uVar17 = 0xe42dac27;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 0xa0),0x5f10e269,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 0xa0),uVar17,0);
  uVar10 = ReviveMultiplePageVariant__AreRVConditionsMet_24932b4(param_1);
  if ((uVar10 & 1) == 0) {
    auVar20._8_8_ = extraout_var;
    auVar20._0_8_ = extraout_d0;
    return auVar20;
  }
  lVar11 = *(long *)(param_1 + 0xa0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,0x4c676fd6,0);
  }
  if ((bRam0000000004f5107c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0x4c676fd6,0);
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
  if (*(long *)(lVar11 + 0x90) == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar11 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
  uStack_80 = uStack_98;
  puStack_88 = puStack_a0;
  uStack_90 = uStack_a8;
  uStack_a8 = 0;
  puStack_a0 = &uStack_90;
  do {
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_90,*(undefined8 *)puVar4);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar3);
      uVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar6);
      }
      uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
      uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,0x4c676fd6);
      lVar13 = FUN_021f04e4(*(undefined8 *)puVar2,6);
      if (lVar13 == 0) goto LAB_03444afc;
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar7;
        thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20));
        uVar16 = UnityEngine_Object__get_name_3c232a8(lVar11,0);
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
                uVar15 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar14);
                if (5 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x48) = uVar15;
                  thunk_FUN_021f190c();
                  uVar15 = System_String__Concat_2f7dcb4(lVar13,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  UnityEngine_Debug__LogError_3bd1338(uVar15,uVar14,0);
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
    lVar18 = *(long *)puVar5;
    lVar12 = *(long *)(lVar18 + 0x20);
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_02229718();
      lVar12 = *(long *)(lVar18 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_68,uVar14,uVar17);
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  } while (*(int *)(lStack_68 + 0x18) != 0x4c676fd6);
  uVar19 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar11);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_90,*(undefined8 *)puVar3);
LAB_03444acc:
  return ZEXT416(uVar19);
}

