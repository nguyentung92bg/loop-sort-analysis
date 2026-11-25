/* IL2CPP: AreasMonitor$$RenderElement
void AreasMonitor__RenderElement (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$RenderElement
   void AreasMonitor__RenderElement (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, bool animate, const MethodInfo* method); */

void AreasMonitor__RenderElement_243650c(long param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined4 uVar22;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  
  if ((bRam0000000004f4b7fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b78);
    FUN_021f03f8(PTR_DAT_049c3b80);
    FUN_021f03f8(PTR_DAT_049c3b88);
    FUN_021f03f8(PTR_DAT_049c3b90);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c3b98);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    bRam0000000004f4b7fe = 1;
  }
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar17 = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0xc0),param_2,&lStack_e8,*(undefined8 *)PTR_DAT_049c3b78);
    lVar6 = lStack_e8;
    uVar16 = AreasMonitor__get_DisplayLevel_2434050(param_1);
    uVar17 = uVar16;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      fVar13 = (float)uVar16;
      uVar18 = 0x39740faf;
      if ((float)*(int *)(*(long *)(lVar6 + 0x10) + 0x24) <= fVar13) {
        uVar18 = 0xcbb1848a;
      }
      uVar17 = AreasMonitor__SetState_24373c8(param_1,param_2,uVar18,param_3 & 1);
      puVar5 = PTR_DAT_049c3b90;
      puVar4 = PTR_DAT_049c3b88;
      puVar3 = PTR_DAT_049c3b80;
      puVar2 = PTR_DAT_049b5480;
      if (*(long *)(lVar6 + 0x28) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lVar6 + 0x28),&lStack_e8,*(undefined8 *)PTR_DAT_049c3b98);
        uStack_a0 = uStack_c8;
        lStack_b8 = lStack_e0;
        lStack_c0 = lStack_e8;
        uStack_a8 = uStack_d0;
        uStack_b0 = uStack_d8;
        uVar20 = uStack_d8;
        while( true ) {
          uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&lStack_c0,*(undefined8 *)puVar4);
          uVar18 = (undefined4)uVar20;
          if ((uVar17 & 1) == 0) break;
          lVar12 = *(long *)puVar5;
          lVar8 = *(long *)(lVar12 + 0x20);
          uVar1 = *(ushort *)(lVar8 + 0x135);
          lVar9 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_02229718();
            lVar8 = *(long *)(lVar12 + 0x20);
            uVar1 = *(ushort *)(lVar8 + 0x135);
          }
          uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&lStack_c0,
                                      *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_e8,uVar10,uVar18);
          if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar18 = 0x5f10e269;
          if ((float)*(int *)(lStack_e0 + 0x14) <= fVar13) {
            uVar18 = 0x93dbeb55;
          }
          AreasMonitor__SetState_24373c8(param_1,lStack_e8,uVar18,param_3 & 1);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_c0,*(undefined8 *)puVar3);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                          (param_2,0xb9b66303,0);
        uVar17 = extraout_d0;
        if (lVar9 != 0) {
          lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
          uVar17 = extraout_d0_00;
          if ((*(long *)(lVar6 + 0x10) != 0) && (lVar8 != 0)) {
            uVar17 = UnityEngine_GameObject__SetActive_3c1ce34
                               (lVar8,(float)*(int *)(*(long *)(lVar6 + 0x10) + 0x24) <= fVar13,0);
            if ((*(long *)(param_1 + 0x98) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x50), lVar8 != 0)) {
              lVar12 = *(long *)(lVar6 + 0x10);
              lVar8 = AreaSheet__GetHomeArea_2557d9c(lVar8,0);
              uVar14 = 0xf7b703e5;
              if (lVar12 != lVar8) {
                uVar14 = 0x5f10e269;
              }
              AreasMonitor__SetState_24373c8(param_1,lVar9,uVar14,0);
              fVar13 = (float)AreasMonitor__GetFill_243517c(uVar16 & 0xffffffff,param_1,lVar6);
              lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                (param_2,0x85f8a9cf,0);
              uVar17 = extraout_d0_01;
              if ((lVar9 != 0) &&
                 (lVar9 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar9,0),
                 uVar17 = extraout_d0_02, lVar9 != 0)) {
                uVar14 = UnityEngine_RectTransform__get_anchorMax_3c2bd04(lVar9,0);
                uVar22 = NEON_fminnm(fVar13,0x3f800000);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                Extensions__WithY_3f0d014(uVar14,uVar18,uVar22,0);
                UnityEngine_RectTransform__set_anchorMax_3c2bdd0(lVar9,0);
                fVar21 = *(float *)(lVar6 + 0x18);
                lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                                  (param_2,0x598fdb13,0);
                uVar17 = extraout_d0_03;
                if (lVar9 != 0) {
                  fVar21 = fVar13 * fVar21;
                  fVar15 = *(float *)(param_1 + 0xec) + 40.0;
                  if (fVar21 <= fVar15) {
                    bVar7 = false;
                  }
                  else {
                    fVar15 = *(float *)(lVar6 + 0x18) + -40.0;
                    bVar7 = fVar21 < fVar15;
                  }
                  uVar17 = (ulong)(uint)fVar15;
                  if (*(long *)(lVar9 + 0x20) != 0) {
                    uVar17 = UnityEngine_GameObject__SetActive_3c1ce34
                                       (*(long *)(lVar9 + 0x20),bVar7,0);
                    if (*(long *)(lVar6 + 0x10) != 0) {
                      uStack_88 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x28);
                      lVar9 = *(long *)(*(long *)PTR_DAT_049b3cf0 + 0x20);
                      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                        lVar9 = FUN_02229718();
                      }
                      pcVar11 = (char *)thunk_FUN_0224e54c(&uStack_88,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8)
                                                            + 0x80));
                      if (*pcVar11 == '\0') {
                        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                          (param_2,0x4b9bfd9,0);
                        fVar15 = *(float *)(lVar6 + 0x18) + *(float *)(param_1 + 0xf0);
                        fVar19 = *(float *)(lVar6 + 0x18) + *(float *)(param_1 + 0xf4);
                        if (fVar15 == fVar19) {
                          uVar17 = 0;
                        }
                        else {
                          fVar15 = (fVar21 - fVar15) / (fVar19 - fVar15);
                          fVar21 = 1.0;
                          if (fVar15 <= 1.0) {
                            fVar21 = fVar15;
                          }
                          fVar19 = 0.0;
                          if (0.0 <= fVar15) {
                            fVar19 = fVar21;
                          }
                          uVar17 = (ulong)(uint)fVar19;
                        }
                        if (lVar9 == 0) goto LAB_025369a0;
                        UnityEngine_UI_Image__set_fillAmount_3cfbca8(lVar9,0);
                      }
                      AreasMonitor__RenderMarker_24374f4
                                (uVar16 & 0xffffffff,fVar13,param_1,param_2,lVar6);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025369a0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar17);
}

