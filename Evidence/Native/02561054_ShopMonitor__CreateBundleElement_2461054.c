/* IL2CPP: ShopMonitor$$CreateBundleElement
void ShopMonitor__CreateBundleElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Bundle_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$CreateBundleElement
   void ShopMonitor__CreateBundleElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Bundle_o data, const MethodInfo* method);
    */

void ShopMonitor__CreateBundleElement_2461054(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  int iVar15;
  long unaff_x25;
  float fVar16;
  float fVar17;
  undefined1 auStack_90 [80];
  
  puVar1 = PTR_DAT_049c5060;
  if ((bRam0000000004f4b940 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49d8);
    FUN_021f03f8(PTR_DAT_049c5068);
    FUN_021f03f8(PTR_DAT_049c5060);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b940 = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar4 + 0x10),param_1);
    func_0x04608650(lVar4 + 0x18,param_3,0x50);
    thunk_FUN_021f190c(lVar4 + 0x18,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x100),*(undefined8 *)(lVar4 + 0x20),param_2,
                 *(undefined8 *)PTR_DAT_049c49d8);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,0xb4ce0c4e,0);
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (param_2,0x1a9a2c8b,0);
      if (lVar5 != 0) {
        UnityEngine_UI_Image__set_sprite_3cee6e8(lVar5,*(undefined8 *)(lVar4 + 0x28),0);
        lVar6 = UnityEngine_Component__get_transform_3c18724(lVar5,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        if (lVar6 != 0) {
          fVar16 = *(float *)(lVar4 + 0x30);
          lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          fVar17 = fVar16 * *(float *)(lVar12 + 0x10);
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (fVar16 * *(float *)(lVar12 + 0xc),fVar17,*(float *)(lVar12 + 0x14) * fVar16,
                     lVar6,0);
          lVar5 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar5,0);
          puVar2 = PTR_DAT_049c5068;
          puVar1 = PTR_DAT_049b8d80;
          if (lVar5 != 0) {
            fVar16 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar5,0);
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                      (fVar16 + *(float *)(lVar4 + 0x34),fVar17 + *(float *)(lVar4 + 0x38),lVar5,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetLocalizationText_33515f0
                      (param_2,0x8ac5d12b,*(undefined8 *)(lVar4 + 0x18),0);
            func_0x04608620(auStack_90,lVar4 + 0x18,0x50);
            ShopMonitor__RefreshBundleElement_246129c(param_1,param_2,auStack_90);
            uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
            UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,lVar4,*(undefined8 *)puVar2,0);
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            if ((bRam0000000004f51083 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_049b3c58,0x89a31dce,uVar7,0);
              FUN_021f03f8(PTR_DAT_049fab60);
              FUN_021f03f8(PTR_DAT_049fab68);
              FUN_021f03f8(PTR_DAT_049fa600);
              FUN_021f03f8(PTR_DAT_049cbed0);
              FUN_021f03f8(PTR_DAT_049b4540);
              FUN_021f03f8(PTR_DAT_049fa848);
              FUN_021f03f8(PTR_DAT_049fab70);
              FUN_021f03f8(PTR_DAT_049fa858);
              bRam0000000004f51083 = 1;
            }
            uVar8 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(param_2,0x89a31dce)
            ;
            puVar3 = PTR_DAT_049fab68;
            puVar2 = PTR_DAT_049fa600;
            puVar1 = PTR_DAT_049b4540;
            if ((uVar8 & 1) == 0) {
              uVar7 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                FUN_021f0574(*(long *)puVar2);
              }
              uVar9 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
              uVar9 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar9,0x89a31dce);
              lVar4 = FUN_021f04e4(*(undefined8 *)puVar1,6);
              if (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) != 0) {
                  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
                  thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x20));
                  uVar10 = UnityEngine_Object__get_name_3c232a8(param_2,0);
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar4 + 0x28) = uVar10;
                    thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x28),uVar10);
                    if (2 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_049fab70;
                      thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x30));
                      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                        *(undefined8 *)(lVar4 + 0x38) = uVar9;
                        thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x38),uVar9);
                        if (4 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                          thunk_FUN_021f190c();
                          if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                            FUN_021f0574();
                          }
                          uVar9 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0
                                            (uVar7);
                          if (5 < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x48) = uVar9;
                            thunk_FUN_021f190c();
                            uVar9 = System_String__Concat_2f7dcb4(lVar4,0);
                            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                            }
                            puVar1 = PTR_DAT_049b3c58;
                            if ((bRam0000000004f56b86 & 1) == 0) {
                              FUN_021f03f8(PTR_DAT_049b3c58,uVar7,0);
                              FUN_021f03f8(PTR_DAT_049ceff8);
                              bRam0000000004f56b86 = 1;
                            }
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              FUN_021f0574();
                            }
                            if (cRam0000000004f4c367 == '\0') {
                              FUN_021f03f8(PTR_DAT_049b3c58);
                              cRam0000000004f4c367 = '\x01';
                            }
                            lVar4 = *(long *)puVar1;
                            if (*(int *)(lVar4 + 0xe4) == 0) {
                              FUN_021f0574();
                              lVar4 = *(long *)puVar1;
                            }
                            plVar14 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_021f06a0();
                            }
                            lVar4 = *plVar14;
                            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar8 != 0) {
                              piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049ceff8) {
                                  puVar11 = (undefined8 *)
                                            (lVar4 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                                  goto LAB_03cd1428;
                                }
                                uVar8 = uVar8 - 1;
                                piVar13 = piVar13 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_02229a4c(plVar14,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)*puVar11)(plVar14,0,uVar9,uVar7,puVar11[1]);
                            return;
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
            else {
              lVar4 = *(long *)(param_2 + 0x30);
              if (lVar4 != 0) {
                iVar15 = 0;
                do {
                  if (*(int *)(lVar4 + 0x18) <= iVar15) {
                    return;
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (lVar4,iVar15,&stack0xffffffffffffffc8,*(undefined8 *)puVar3);
                  if (unaff_x25 == 0) break;
                  if (*(int *)(unaff_x25 + 0x18) == -0x765ce232) {
                    if (*(long *)(param_2 + 0x30) == 0) break;
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                              (*(long *)(param_2 + 0x30),iVar15,&stack0xffffffffffffffc8,
                               *(undefined8 *)puVar3);
                    if (((unaff_x25 == 0) || (*(long *)(unaff_x25 + 0x20) == 0)) ||
                       (lVar4 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0x100), lVar4 == 0)) break;
                    UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar4,uVar7,0);
                  }
                  lVar4 = *(long *)(param_2 + 0x30);
                  iVar15 = iVar15 + 1;
                } while (lVar4 != 0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

