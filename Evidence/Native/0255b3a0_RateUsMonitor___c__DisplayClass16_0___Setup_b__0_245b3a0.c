/* IL2CPP: RateUsMonitor.<>c__DisplayClass16_0$$<Setup>b__0
void RateUsMonitor___c__DisplayClass16_0___Setup_b__0 (RateUsMonitor___c__DisplayClass16_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor.<>c__DisplayClass16_0$$<Setup>b__0
   void RateUsMonitor___c__DisplayClass16_0___Setup_b__0 (RateUsMonitor___c__DisplayClass16_0_o*
   __this, const MethodInfo* method); */

undefined1  [16] RateUsMonitor___c__DisplayClass16_0___Setup_b__0_245b3a0(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  lVar17 = *(long *)(param_1 + 0x18);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar17,0x5f10e269,0);
  lVar16 = *(long *)(lVar17 + 0xa8);
  *(int *)(lVar17 + 0xb0) = iVar1;
  if (lVar16 != 0) {
    lVar18 = 0;
    do {
      uVar21 = (uint)lVar18;
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar21) {
        auVar22 = StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                            (lVar17,0x95f4676c,0);
        if (3 < iVar1) {
          return auVar22;
        }
        lVar17 = *(long *)(lVar17 + 0x20);
        if (lVar17 == 0) {
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
        if (*(long *)(lVar17 + 0x90) == 0) goto LAB_03444afc;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar17 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
        uStack_80 = uStack_98;
        puStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        uStack_a8 = 0;
        puStack_a0 = &uStack_90;
        goto LAB_034448a8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      plVar11 = *(long **)(lVar16 + lVar18 * 8 + 0x20);
      if (plVar11 == (long *)0x0) break;
      uVar20 = 0x3f800000;
      if (iVar1 <= (int)uVar21) {
        uVar20 = 0;
      }
      (**(code **)(*plVar11 + 0x2a8))
                (uVar20,uVar20,uVar20,0x3f800000,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
      lVar16 = *(long *)(lVar17 + 0xa8);
      lVar18 = lVar18 + 1;
    } while (lVar16 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    lVar19 = *(long *)puVar6;
    lVar18 = *(long *)(lVar19 + 0x20);
    uVar2 = *(ushort *)(lVar18 + 0x135);
    lVar16 = lVar18;
    if ((uVar2 & 1) == 0) {
      lVar16 = FUN_02229718();
      lVar18 = *(long *)(lVar19 + 0x20);
      uVar2 = *(ushort *)(lVar18 + 0x135);
    }
    uVar20 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar18 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar18 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_68,uVar13,uVar20);
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lStack_68 + 0x18) == 0x1b0af5a7) break;
LAB_034448a8:
    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_90,*(undefined8 *)puVar5);
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar4);
      uVar13 = UnityEngine_Component__get_gameObject_3c187f4(lVar17,0);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar7);
      }
      uVar14 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
      uVar14 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar14,0x1b0af5a7);
      lVar16 = FUN_021f04e4(*(undefined8 *)puVar3,6);
      if (lVar16 == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar16 + 0x18) != 0) {
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)puVar8;
        thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x20));
        uVar15 = UnityEngine_Object__get_name_3c232a8(lVar17,0);
        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar16 + 0x28) = uVar15;
          thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x28),uVar15);
          if (2 < *(uint *)(lVar16 + 0x18)) {
            *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar9;
            thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x30));
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar16 + 0x38) = uVar14;
              thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x38),uVar14);
              if (4 < *(uint *)(lVar16 + 0x18)) {
                *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)puVar10;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar14 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar13);
                if (5 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined8 *)(lVar16 + 0x48) = uVar14;
                  thunk_FUN_021f190c();
                  uVar14 = System_String__Concat_2f7dcb4(lVar16,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  UnityEngine_Debug__LogError_3bd1338(uVar14,uVar13,0);
                  uVar21 = 0;
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
  uVar21 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar17);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
  return ZEXT416(uVar21);
}

