/* IL2CPP: WeeklyMissionsSubMonitor$$CreateMissionElement
void WeeklyMissionsSubMonitor__CreateMissionElement (WeeklyMissionsSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionSheet_Elem_o* data, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WeeklyMissionsSubMonitor$$CreateMissionElement
   void WeeklyMissionsSubMonitor__CreateMissionElement (WeeklyMissionsSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionSheet_Elem_o* data, int32_t idx,
   const MethodInfo* method); */

void WeeklyMissionsSubMonitor__CreateMissionElement_248cfdc
               (long param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_84;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  int iStack_58;
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_049c5db8;
  if ((bRam0000000004f4ba55 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c5dc0);
    FUN_021f03f8(PTR_DAT_049c5dc8);
    FUN_021f03f8(PTR_DAT_049c5860);
    FUN_021f03f8(PTR_DAT_049c5dd0);
    FUN_021f03f8(PTR_DAT_049c5dd8);
    FUN_021f03f8(PTR_DAT_049c5db8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4ba55 = 1;
  }
  iStack_58 = 0;
  iStack_84 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar8,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x10) = param_4;
    *(long *)(lVar8 + 0x18) = param_1;
    thunk_FUN_021f190c((long *)(lVar8 + 0x18),param_1);
    plVar19 = (long *)(lVar8 + 0x20);
    *plVar19 = param_2;
    thunk_FUN_021f190c(plVar19,param_2);
    plVar18 = (long *)(lVar8 + 0x28);
    *plVar18 = param_3;
    thunk_FUN_021f190c(plVar18,param_3);
    if (*(long *)(param_1 + 0x88) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_1 + 0x88),*(undefined4 *)(lVar8 + 0x10),&lStack_80,
                 *(undefined8 *)PTR_DAT_049c5860);
      lVar10 = lStack_80;
      if (((*(long *)(lVar8 + 0x20) != 0) &&
          (lVar9 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                             (*(long *)(lVar8 + 0x20),0), lVar10 != 0)) &&
         (UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar10,0), lVar9 != 0)) {
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar9,0);
        puVar3 = PTR_DAT_049b6110;
        if (((*plVar18 != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
           (lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar10 != 0)) {
          uVar20 = *(ulong *)(*plVar18 + 0x28);
          uStack_54 = (int)uVar20;
          GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                    (lVar10,&uStack_54,&lStack_80,*(undefined8 *)PTR_DAT_049c5dc0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                    (*plVar19,0x1a9a2c8b,lStack_80,0);
          lVar10 = *plVar19;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar11 = Extensions__ToDescription_24e832c(uVar20,0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                    (lVar10,0x993134c1,uVar11,0);
          puVar3 = PTR_DAT_049bb3a0;
          if (*(long *)(param_1 + 0x58) != 0) {
            iStack_58 = WeeklyMissions__GetQuantityOf_252ac34
                                  (*(long *)(param_1 + 0x58),uVar20 & 0xffffffff,0);
            iStack_84 = (int)(uVar20 >> 0x20);
            if (iStack_84 <= iStack_58) {
              iStack_58 = iStack_84;
            }
            lVar10 = *plVar19;
            uVar11 = System_Int32__ToString_30fbaa0(&iStack_58,0);
            uVar12 = System_Int32__ToString_30fbaa0(&iStack_84,0);
            uVar11 = System_String__Concat_2f7d424(uVar11,*(undefined8 *)puVar3,uVar12,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (lVar10,0x9927ed9b,uVar11,0);
            fVar21 = (float)iStack_58 / (float)iStack_84;
            bVar5 = false;
            bVar6 = true;
            bVar7 = false;
            if (fVar21 < _UNK_013aa5f0) {
              bVar5 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar21) && !NAN(_UNK_013aa688)) {
                bVar5 = fVar21 < _UNK_013aa688;
                bVar6 = fVar21 == _UNK_013aa688;
                bVar7 = false;
              }
            }
            fVar22 = _UNK_013aa5f0;
            if (bVar6 || bVar5 != bVar7) {
              fVar22 = fVar21;
            }
            lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                               (*plVar19,0x85f8a9cf,0);
            if ((lVar10 != 0) &&
               (lVar10 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar10,0), lVar10 != 0))
            {
              UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar22,0x3f800000,lVar10,0);
              lVar10 = *plVar18;
              if (lVar10 != 0) {
                uStack_a8 = *(undefined8 *)(lVar10 + 0x40);
                uStack_b0 = *(undefined8 *)(lVar10 + 0x38);
                uStack_98 = *(undefined8 *)(lVar10 + 0x50);
                uStack_a0 = *(undefined8 *)(lVar10 + 0x48);
                uVar13 = CloudPrefsBool__get_Value_24eb0d0(&uStack_b0,0);
                if (*(long *)(param_1 + 0x58) != 0) {
                  uVar14 = WeeklyMissions__IsCompleted_252ad88(*(long *)(param_1 + 0x58),uVar20,0);
                  if (*(long *)(param_1 + 0x78) != 0) {
                    uVar15 = LiveOpsModule__IsRefreshTimeElapsed_2547aa8
                                       (*(long *)(param_1 + 0x78),9,0);
                    iVar2 = 0x240695d9;
                    if ((uVar13 & 1) == 0) {
                      iVar2 = 0x39cfe44a;
                    }
                    iVar1 = 0x44494533;
                    if ((uVar15 & 1) == 0) {
                      iVar1 = 0x2af94178;
                    }
                    if ((uVar14 & 1) == 0) {
                      iVar2 = iVar1;
                    }
                    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                              (*plVar19,iVar2,0);
                    lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                                       (*plVar19,0x39cfe44a,0);
                    puVar3 = PTR_DAT_049b8d80;
                    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x100) != 0)) {
                      UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                                (*(long *)(lVar10 + 0x100),0);
                      if (iVar2 == 0x39cfe44a) {
                        lVar10 = *(long *)(lVar10 + 0x100);
                        uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                        UnityEngine_Events_UnityAction___ctor_3c32934
                                  (uVar11,lVar8,*(undefined8 *)PTR_DAT_049c5dd0,0);
                        if (lVar10 == 0) goto LAB_0258d530;
                        UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar10,uVar11,0);
                      }
                      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                                         (*plVar19,0xa66c44de,0);
                      puVar4 = PTR_DAT_049c5dd8;
                      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x100) != 0)) {
                        UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                                  (*(long *)(lVar10 + 0x100),0);
                        lVar10 = *(long *)(lVar10 + 0x100);
                        uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                        UnityEngine_Events_UnityAction___ctor_3c32934
                                  (uVar11,lVar8,*(undefined8 *)puVar4,0);
                        if (lVar10 != 0) {
                          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar10,uVar11,0);
                          WeeklyMissionsSubMonitor__FillRewardElements_248d544
                                    (param_1,*plVar19,*plVar18);
                          lStack_c8 = *plVar19;
                          plVar19 = *(long **)(param_1 + 0x80);
                          lStack_c0 = 0;
                          uStack_b8 = 0;
                          thunk_FUN_021f190c(&lStack_c8);
                          lStack_c0 = *plVar18;
                          thunk_FUN_021f190c(&lStack_c0);
                          lStack_78 = lStack_c0;
                          lStack_80 = lStack_c8;
                          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uVar20);
                          uStack_70 = uStack_b8;
                          if (plVar19 != (long *)0x0) {
                            lVar8 = *plVar19;
                            uVar20 = (ulong)*(ushort *)(lVar8 + 0x12e);
                            if (uVar20 != 0) {
                              piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049c5dc8) {
                                  puVar16 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                                  goto LAB_0258d4ec;
                                }
                                uVar20 = uVar20 - 1;
                                piVar17 = piVar17 + 4;
                              } while (uVar20 != 0);
                            }
                            puVar16 = (undefined8 *)
                                      FUN_02229a4c(plVar19,*(long *)PTR_DAT_049c5dc8,0);
LAB_0258d4ec:
                            (*(code *)*puVar16)(plVar19,&lStack_80,puVar16[1]);
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
      }
    }
  }
LAB_0258d530:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

