/* IL2CPP: SwipeablePageLayout$$OnFingerUpdate
void SwipeablePageLayout__OnFingerUpdate (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwipeablePageLayout$$OnFingerUpdate
   void SwipeablePageLayout__OnFingerUpdate (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void SwipeablePageLayout__OnFingerUpdate_244cc34(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lStack_58;
  
  if ((bRam0000000004f4b8a1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c45c0);
    FUN_021f03f8(PTR_DAT_049c45c8);
    bRam0000000004f4b8a1 = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    return;
  }
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x30)) ||
       (*(char *)(param_2 + 0x20) != '\0')) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = Extensions__HasPlayingMotions_24e6bcc(uVar8,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    fVar12 = *(float *)(param_2 + 0x40);
    fVar11 = *(float *)(param_2 + 0x30);
    fVar13 = (*(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x2c)) + *(float *)(param_1 + 0x38);
    fVar9 = (float)UnityEngine_Screen__get_dpi_3bd810c(0);
    fVar10 = _UNK_013aa638;
    if (fVar9 != 0.0) {
      fVar10 = (float)UnityEngine_Screen__get_dpi_3bd810c(0);
      fVar10 = fVar10 * _UNK_013aa698;
    }
    fVar9 = ABS(fVar12 - fVar11);
    if ((ABS(fVar13) < fVar10) && (fVar9 < fVar10)) {
      return;
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      *(undefined1 *)(param_1 + 0x2d) = 1;
      if (ABS(fVar13) <= fVar9) {
        *(undefined1 *)(param_1 + 0x2e) = 1;
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0254ce98;
        Monitors__DisableRaycaster_256ea20(*(long *)(param_1 + 0x10),param_1,0);
      }
    }
    puVar2 = PTR_DAT_049c45c8;
    puVar1 = PTR_DAT_049b5480;
    if (*(char *)(param_1 + 0x2e) != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if ((fVar13 <= 0.0) || (*(int *)(param_1 + 0x28) != 0)) {
      if (lVar6 == 0) goto LAB_0254ce98;
      fVar9 = fVar13 * 0.25;
      bVar3 = false;
      if ((*(int *)(param_1 + 0x28) == *(int *)(lVar6 + 0x18) + -1) && (bVar3 = false, !NAN(fVar13))
         ) {
        bVar3 = fVar13 < 0.0;
      }
      fVar10 = fVar9;
      if (!bVar3) {
        fVar10 = fVar13;
      }
    }
    else {
      if (lVar6 == 0) goto LAB_0254ce98;
      fVar10 = fVar13 * 0.25;
    }
    iVar7 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        *(float *)(param_1 + 0x34) = fVar10;
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar6,iVar7,&lStack_58,*(undefined8 *)puVar2);
      if (lStack_58 == 0) break;
      uVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (lStack_58,0x8ac5d2f7,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      lVar6 = Extensions__GetRectTransform_3f0c498(uVar8,0);
      fVar11 = (float)SwipeablePageLayout__GetPageTargetPosition_244c490(param_1,iVar7);
      fVar12 = (float)SwipeablePageLayout__GetPageWidth_244cebc(param_1,iVar7);
      iVar4 = UnityEngine_Screen__get_width_3bd80bc(0);
      if (lVar6 == 0) break;
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (fVar11 + fVar10 * (fVar12 / (float)iVar4),fVar9,lVar6,0);
      lVar6 = *(long *)(param_1 + 0x18);
      iVar7 = iVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0254ce98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

