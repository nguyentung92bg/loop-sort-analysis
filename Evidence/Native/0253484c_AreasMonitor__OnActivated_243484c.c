/* IL2CPP: AreasMonitor$$OnActivated
void AreasMonitor__OnActivated (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$OnActivated
   void AreasMonitor__OnActivated (AreasMonitor_o* __this, const MethodInfo* method); */

void AreasMonitor__OnActivated_243484c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,float param_4,
               long param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x1;
  long *plVar14;
  long lVar15;
  undefined8 unaff_x23;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam0000000004f4b7f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a18);
    FUN_021f03f8(PTR_DAT_049c39c8);
    bRam0000000004f4b7f0 = 1;
  }
  MonitorBase__OnActivated_256c9f4(param_5,0);
  puVar3 = PTR_DAT_049c39c8;
  if ((*(long *)(param_5 + 0x98) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_5 + 0x98) + 0x50), lVar8 != 0)) {
    lVar8 = AreaSheet__GetCurrentArea_2557950(lVar8,0);
    lVar15 = *(long *)(param_5 + 0xd0);
    if (*(char *)(param_5 + 0xe0) == '\0') {
      if ((lVar15 != 0) && (lVar8 != 0)) {
        iVar4 = *(int *)(lVar15 + 0x28);
        piVar10 = (int *)thunk_FUN_0224e54c(lVar8,*(long *)(**(long **)(*(long *)(*(long *)puVar3 +
                                                                                 0x20) + 0xc0) +
                                                           0x80) + 0x20);
        puVar3 = PTR_DAT_049b3bf8;
        plVar14 = *(long **)(param_5 + 0xd0);
        if (plVar14 != (long *)0x0) {
          iVar2 = (iVar4 - *piVar10) + -2;
          iVar4 = iVar2;
          if ((int)plVar14[5] <= iVar2) {
            iVar4 = (int)plVar14[5];
          }
          iVar6 = 0;
          if (-1 < iVar2) {
            iVar6 = iVar4;
          }
          if ((bRam0000000004f4e79d & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049b3bf8,iVar6,0);
            FUN_021f03f8(PTR_DAT_049befe0);
            bRam0000000004f4e79d = 1;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar13 = UnityEngine_Application__get_isPlaying_3bc708c(0);
          if ((uVar13 & 1) == 0) {
            return;
          }
          if (*(char *)((long)plVar14 + 0x3c) != '\0') {
            iVar6 = (int)plVar14[5] - iVar6;
          }
          *(int *)(plVar14 + 8) = iVar6;
          iVar4 = iVar6;
          if (-1 < (int)plVar14[5]) {
            iVar5 = UnityEngine_UI_LoopScrollRectBase__get_contentConstraintCount_2eba4f4(plVar14);
            iVar2 = 0;
            if (iVar5 != 0) {
              iVar2 = iVar6 / iVar5;
            }
            iVar4 = (int)plVar14[8];
            if (iVar6 != iVar2 * iVar5) {
              iVar6 = UnityEngine_UI_LoopScrollRectBase__get_contentConstraintCount_2eba4f4(plVar14)
              ;
              iVar5 = UnityEngine_UI_LoopScrollRectBase__get_contentConstraintCount_2eba4f4(plVar14)
              ;
              iVar2 = 0;
              if (iVar6 != 0) {
                iVar2 = iVar4 / iVar6;
              }
              iVar4 = iVar2 * iVar5;
              *(int *)(plVar14 + 8) = iVar4;
            }
          }
          *(int *)((long)plVar14 + 0x44) = iVar4;
          *(undefined4 *)(plVar14 + 9) = 0;
          if (plVar14[0xf] != 0) {
            uVar1 = *(undefined1 *)((long)plVar14 + 0x3c);
            uVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(plVar14[0xf],0);
            (**(code **)(*plVar14 + 0x408))(plVar14,uVar1,uVar7,*(undefined8 *)(*plVar14 + 0x410));
            UnityEngine_UI_LoopScrollRectBase__EnsureLayoutHasRebuilt_2ebe0cc(plVar14);
            lVar8 = UnityEngine_UI_LoopScrollRectBase__get_viewRect_2ebc5b8(plVar14);
            if (lVar8 != 0) {
              UnityEngine_RectTransform__get_rect_3c2ba98(lVar8,0);
              uVar13 = (ulong)(uint)param_4;
              fVar16 = (float)(**(code **)(*plVar14 + 0x3b8))
                                        (param_3,plVar14,*(undefined8 *)(*plVar14 + 0x3c0));
              fVar16 = fVar16 + 0.0;
              fVar20 = 0.0;
              if (0.0 < fVar16) {
                do {
                  fVar21 = (float)UnityEngine_UI_LoopScrollRectBase__NewItemAtEnd_2eba634(plVar14);
                  if (fVar21 < 0.0) break;
                  fVar20 = fVar20 + fVar21;
                } while (fVar20 < fVar16);
              }
              fVar22 = (float)uVar13;
              for (fVar21 = fVar20; fVar21 < fVar16; fVar21 = fVar21 + fVar18) {
                fVar18 = (float)UnityEngine_UI_LoopScrollRectBase__NewItemAtStart_2eba854(plVar14);
                fVar22 = (float)uVar13;
                if (fVar18 < 0.0) break;
              }
              if (plVar14[0xf] != 0) {
                fVar18 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                                          (plVar14[0xf],0);
                fVar19 = (float)(**(code **)(*plVar14 + 0x3b8))
                                          (*(float *)(plVar14 + 0xb) +
                                           *(float *)((long)plVar14 + 0x5c),
                                           *(float *)(plVar14 + 0xc) +
                                           *(float *)((long)plVar14 + 100),plVar14,
                                           *(undefined8 *)(*plVar14 + 0x3c0));
                fVar16 = (fVar20 + fVar19) - fVar16;
                fVar19 = 0.0;
                if (0.0 <= fVar16) {
                  fVar19 = fVar16;
                }
                fVar16 = (fVar21 - fVar20) + 0.0;
                if (*(char *)((long)plVar14 + 0x3c) != '\0') {
                  fVar16 = fVar19;
                }
                if (plVar14[0xf] != 0) {
                  fVar20 = fVar16;
                  fVar21 = -fVar16;
                  if (*(char *)((long)plVar14 + 0x3c) != '\0') {
                    fVar20 = -fVar16;
                    fVar21 = fVar16;
                  }
                  if (*(int *)((long)plVar14 + 0x4c) != 0) {
                    fVar20 = fVar22;
                    fVar18 = fVar21;
                  }
                  UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                            (fVar18,fVar20,plVar14[0xf],0);
                  *(float *)(plVar14 + 0x1a) = fVar18;
                  *(float *)((long)plVar14 + 0xd4) = fVar20;
                  (**(code **)(*plVar14 + 0x418))(plVar14,*(undefined8 *)(*plVar14 + 0x420));
                  lVar8 = plVar14[0xf];
                  if (*(int *)(*(long *)PTR_DAT_049befe0 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_3ed78b8(lVar8,0);
                  UnityEngine_Canvas__ForceUpdateCanvases_3ec836c(0);
                  UnityEngine_UI_LoopScrollRectBase__UpdateBounds_2ebd780(plVar14,0);
                  if (cRam0000000004f49d57 == '\0') {
                    FUN_021f03f8(PTR_DAT_049b8a18);
                    cRam0000000004f49d57 = '\x01';
                  }
                  uVar7 = (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
                  UnityEngine_UI_LoopScrollRectBase__UpdateScrollbars_2ebdb8c
                            (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),plVar14);
                  (**(code **)(*plVar14 + 0x458))(plVar14,*(undefined8 *)(*plVar14 + 0x460));
                  if ((bRam0000000004f4e7a8 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3b98);
                    bRam0000000004f4e7a8 = 1;
                  }
                  if (*(char *)((long)plVar14 + 0x155) == '\0') {
                    lVar8 = plVar14[0xf];
                    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar13 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
                    if ((uVar13 & 1) == 0) {
                      if (plVar14[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      uVar17 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                                         (plVar14[0xf],0);
                    }
                    else {
                      if (cRam0000000004f49d57 == '\0') {
                        FUN_021f03f8(PTR_DAT_049b8a18);
                        cRam0000000004f49d57 = '\x01';
                      }
                      uVar17 = **(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
                      uVar7 = (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
                    }
                    *(undefined4 *)((long)plVar14 + 0x11c) = uVar17;
                    *(undefined4 *)(plVar14 + 0x24) = uVar7;
                  }
                  *(long *)((long)plVar14 + 0x144) = plVar14[0x20];
                  *(long *)((long)plVar14 + 0x13c) = plVar14[0x1f];
                  *(long *)((long)plVar14 + 0x14c) = plVar14[0x21];
                  *(long *)((long)plVar14 + 300) = plVar14[0x1d];
                  *(long *)((long)plVar14 + 0x124) = plVar14[0x1c];
                  *(long *)((long)plVar14 + 0x134) = plVar14[0x1e];
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
    else if ((((*(long *)(param_5 + 0x98) != 0) &&
              (lVar9 = *(long *)(*(long *)(param_5 + 0x98) + 0x50), lVar9 != 0)) &&
             (iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                                (lVar9,*(undefined8 *)PTR_DAT_049c3a18), lVar8 != 0)) &&
            (piVar10 = (int *)thunk_FUN_0224e54c(lVar8,*(long *)(**(long **)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x80) + 0x20),
            lVar15 != 0)) {
      if (*piVar10 + 3 <= iVar4) {
        iVar4 = *piVar10 + 3;
      }
      *(int *)(lVar15 + 0x28) = iVar4;
      if ((bRam0000000004f4b7f1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c3a78);
        FUN_021f03f8(PTR_DAT_049c3a80);
        FUN_021f03f8(PTR_DAT_049b3b98);
        FUN_021f03f8(PTR_DAT_049c39c8);
        FUN_021f03f8(PTR_DAT_049c3a88);
        bRam0000000004f4b7f1 = 1;
      }
      if (((*(long *)(param_5 + 0x98) != 0) && (*(long *)(param_5 + 0xd0) != 0)) && (lVar8 != 0)) {
        lVar15 = *(long *)(*(long *)(param_5 + 0x98) + 0x50);
        iVar4 = *(int *)(*(long *)(param_5 + 0xd0) + 0x28);
        puVar11 = (uint *)thunk_FUN_0224e54c(lVar8,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
        if (*(long *)(param_5 + 0xd0) != 0) {
          iVar4 = iVar4 + ~*puVar11;
          UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                    (0,*(long *)(param_5 + 0xd0),iVar4,0);
          AreasMonitor__FindAreaView_2434e68(param_5,lVar8);
          if (extraout_x1 != 0) {
            AreasMonitor__get_DisplayLevel_2434050(param_5);
            fVar16 = (float)AreasMonitor__GetFill_243517c(param_5,extraout_x1);
            if (*(long *)(param_5 + 0xd8) == 0) goto LAB_02534c24;
            fVar20 = *(float *)(extraout_x1 + 0x18);
            fVar22 = *(float *)(extraout_x1 + 0x1c);
            fVar21 = *(float *)(param_5 + 0xec);
            UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0xd8),0);
            iVar2 = iVar4 + -1;
            fVar16 = (fVar22 - (fVar16 * fVar20 - fVar21)) + param_4 * -0.5;
            if ((0 < iVar4) && (fVar16 < 0.0)) {
              if (*(long *)(param_5 + 0xd0) == 0) goto LAB_02534c24;
              UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                        (0,*(long *)(param_5 + 0xd0),iVar2,0);
              if ((*(long *)(param_5 + 0xd0) == 0) || (lVar15 == 0)) goto LAB_02534c24;
              plVar14 = (long *)CONCAT44((int)((ulong)unaff_x23 >> 0x20),
                                         *(int *)(*(long *)(param_5 + 0xd0) + 0x28) - iVar2);
              uVar12 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                                 (lVar15,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049c3a88);
              lVar8 = AreasMonitor__FindAreaView_2434e68(param_5,uVar12);
              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                FUN_021f0574(*(long *)PTR_DAT_049b3b98);
              }
              uVar13 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
              if ((uVar13 & 1) != 0) {
                return;
              }
              lVar15 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                                 (param_5,0xbcdc2f95,0);
              if (((lVar15 == 0) ||
                  (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                             (lVar15,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049c3a80),
                  plVar14 == (long *)0x0)) || (lVar8 == 0)) goto LAB_02534c24;
              fVar20 = *(float *)(plVar14 + 0xc);
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (lVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049c3a78);
              if (plVar14 == (long *)0x0) goto LAB_02534c24;
              fVar21 = (float)(**(code **)(*plVar14 + 0x388))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x390));
              fVar16 = fVar16 + fVar20 + fVar21;
              iVar4 = iVar2;
            }
            if (*(long *)(param_5 + 0xd0) == 0) goto LAB_02534c24;
            fVar20 = 0.0;
            if (0.0 <= fVar16) {
              fVar20 = fVar16;
            }
            UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                      (fVar20,*(long *)(param_5 + 0xd0),iVar4,0);
          }
          return;
        }
      }
LAB_02534c24:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

