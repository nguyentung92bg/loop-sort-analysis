/* IL2CPP: ReviveMultiplePageVariant$$UpdateOfferView
void ReviveMultiplePageVariant__UpdateOfferView (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$UpdateOfferView
   void ReviveMultiplePageVariant__UpdateOfferView (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

undefined1  [16] ReviveMultiplePageVariant__UpdateOfferView_249335c(long param_1)

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
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar21 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  if ((bRam0000000004f4ba86 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5fa8);
    bRam0000000004f4ba86 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar12 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x78),0x17,0);
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      plVar13 = *(long **)(param_1 + 0x70);
      if (plVar13 == (long *)0x0) goto LAB_02593460;
      uVar11 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
    }
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (lVar14 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xb8),0),
       lVar14 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar14,uVar11 & 1,0);
      if ((*(long *)(param_1 + 0xb0) != 0) &&
         (lVar14 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xb0),0),
         puVar3 = PTR_DAT_049c5fa8, lVar14 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar14,(uVar11 ^ 0xffffffff) & 1,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (*(undefined8 *)(param_1 + 0xb0),0x5f10e269,0);
        uVar12 = DataFlags__Contains_24fb124(param_1 + 0x88,*(undefined8 *)puVar3,0);
        if ((uVar12 & 1) == 0) {
          auVar21._8_8_ = extraout_var;
          auVar21._0_8_ = extraout_d0;
          return auVar21;
        }
        lVar14 = *(long *)(param_1 + 0xb0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,0x99f4e89d,0);
        }
        if ((bRam0000000004f5107c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3c58,0x99f4e89d,0);
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
        if (*(long *)(lVar14 + 0x90) == 0) {
LAB_03444afc:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar14 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
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
            uVar17 = UnityEngine_Component__get_gameObject_3c187f4(lVar14,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar7);
            }
            uVar18 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
            uVar18 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar18,0x99f4e89d);
            lVar16 = FUN_021f04e4(*(undefined8 *)puVar3,6);
            if (lVar16 == 0) goto LAB_03444afc;
            if (*(int *)(lVar16 + 0x18) != 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)puVar8;
              thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x20));
              uVar19 = UnityEngine_Object__get_name_3c232a8(lVar14,0);
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar16 + 0x28) = uVar19;
                thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x28),uVar19);
                if (2 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar9;
                  thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x30));
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar16 + 0x38) = uVar18;
                    thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x38),uVar18);
                    if (4 < *(uint *)(lVar16 + 0x18)) {
                      *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)puVar10;
                      thunk_FUN_021f190c();
                      if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar18 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar17)
                      ;
                      if (5 < *(uint *)(lVar16 + 0x18)) {
                        *(undefined8 *)(lVar16 + 0x48) = uVar18;
                        thunk_FUN_021f190c();
                        uVar18 = System_String__Concat_2f7dcb4(lVar16,0);
                        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                        }
                        UnityEngine_Debug__LogError_3bd1338(uVar18,uVar17,0);
                        uVar11 = 0;
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
          lVar20 = *(long *)puVar6;
          lVar15 = *(long *)(lVar20 + 0x20);
          uVar2 = *(ushort *)(lVar15 + 0x135);
          lVar16 = lVar15;
          if ((uVar2 & 1) == 0) {
            lVar16 = FUN_02229718();
            lVar15 = *(long *)(lVar20 + 0x20);
            uVar2 = *(ushort *)(lVar15 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar15 = FUN_02229718();
          }
          uVar17 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar17,uVar1);
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(int *)(lStack_68 + 0x18) != -0x660b1763);
        uVar11 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar14);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
LAB_03444acc:
        return ZEXT416(uVar11);
      }
    }
  }
LAB_02593460:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

