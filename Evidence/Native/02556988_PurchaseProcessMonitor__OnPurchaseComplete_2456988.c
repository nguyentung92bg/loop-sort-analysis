/* IL2CPP: PurchaseProcessMonitor$$OnPurchaseComplete
void PurchaseProcessMonitor__OnPurchaseComplete (PurchaseProcessMonitor_o* __this, PurchaseCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$OnPurchaseComplete
   void PurchaseProcessMonitor__OnPurchaseComplete (PurchaseProcessMonitor_o* __this,
   PurchaseCompleteMessage_o m, const MethodInfo* method); */

undefined1  [16] PurchaseProcessMonitor__OnPurchaseComplete_2456988(long param_1,int *param_2)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
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
  
  if (*param_2 == 2) {
    uVar14 = Phrase__get_Failed_252ea44(0);
    thunk_FUN_021f190c(&stack0xffffffffffffffc8,uVar14);
    uVar14 = Phrase__get_PurchaseProcessFailed_252eac0(0);
    thunk_FUN_021f190c(&stack0xffffffffffffffd0,uVar14);
    auVar20 = PurchaseProcessMonitor__ShowPopup_24567b4(param_1,&stack0xffffffffffffffb0);
    return auVar20;
  }
  if (*param_2 == 1) {
    uVar14 = Phrase__get_Success_252e94c(0);
    thunk_FUN_021f190c(&stack0xffffffffffffffc8,uVar14);
    uVar14 = Phrase__get_PurchaseProcessSuccess_252e9c8(0);
    thunk_FUN_021f190c(&stack0xffffffffffffffd0,uVar14);
    auVar20 = PurchaseProcessMonitor__ShowPopup_24567b4(param_1,&stack0xffffffffffffffb0);
    return auVar20;
  }
  lVar17 = *(long *)(param_1 + 0x20);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,0xb4ce0c4e,0);
  }
  if ((bRam0000000004f5107c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0xb4ce0c4e,0);
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
    uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_90,*(undefined8 *)puVar5);
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar4);
      uVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar17,0);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar7);
      }
      uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
      uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,0xb4ce0c4e);
      lVar13 = FUN_021f04e4(*(undefined8 *)puVar3,6);
      if (lVar13 == 0) goto LAB_03444afc;
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar8;
        thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20));
        uVar16 = UnityEngine_Object__get_name_3c232a8(lVar17,0);
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar13 + 0x28) = uVar16;
          thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x28),uVar16);
          if (2 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar9;
            thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x30));
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar13 + 0x38) = uVar15;
              thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x38),uVar15);
              if (4 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar10;
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
    lVar18 = *(long *)puVar6;
    lVar12 = *(long *)(lVar18 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
      lVar12 = *(long *)(lVar18 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_68,uVar14,uVar1);
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  } while (*(int *)(lStack_68 + 0x18) != -0x4b31f3b2);
  uVar19 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar17);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
  return ZEXT416(uVar19);
}

