/* IL2CPP: Beardy.BeardyGridLayoutGroup$$SetCellsAlongAxis
void Beardy_BeardyGridLayoutGroup__SetCellsAlongAxis (Beardy_BeardyGridLayoutGroup_o* __this, int32_t axis, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Beardy.BeardyGridLayoutGroup$$SetCellsAlongAxis
   void Beardy_BeardyGridLayoutGroup__SetCellsAlongAxis (Beardy_BeardyGridLayoutGroup_o* __this,
   int32_t axis, const MethodInfo* method); */

void Beardy_BeardyGridLayoutGroup__SetCellsAlongAxis_24a095c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_98;
  
  if ((bRam0000000004f4baea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c5860);
    bRam0000000004f4baea = 1;
  }
  puVar7 = PTR_DAT_049c5860;
  puVar6 = PTR_DAT_049b8a18;
  if (*(long *)(param_5 + 0x58) != 0) {
    iVar4 = *(int *)(*(long *)(param_5 + 0x58) + 0x18);
    if (param_6 == 0) {
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          if (*(long *)(param_5 + 0x58) == 0) goto LAB_025a0fbc;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_5 + 0x58),iVar8,&lStack_98,*(undefined8 *)puVar7);
          lVar9 = lStack_98;
          UnityEngine_DrivenRectTransformTracker__Add_3c2b920
                    (param_5 + 0x38,param_5,lStack_98,0x3f06,0);
          if (cRam0000000004f4a196 == '\0') {
            FUN_021f03f8(puVar6);
            cRam0000000004f4a196 = '\x01';
          }
          if (lVar9 == 0) goto LAB_025a0fbc;
          UnityEngine_RectTransform__set_anchorMin_3c2bc3c
                    (*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),
                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),lVar9,0);
          if (cRam0000000004f4a196 == '\0') {
            FUN_021f03f8(puVar6);
            cRam0000000004f4a196 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0
                    (*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),
                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),lVar9,0);
          UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                    (*(undefined4 *)(param_5 + 0x68),*(undefined4 *)(param_5 + 0x6c),lVar9,0);
          iVar8 = iVar8 + 1;
        } while (iVar4 != iVar8);
      }
      return;
    }
    lVar9 = UnityEngine_UI_LayoutGroup__get_rectTransform_3ed4b40(param_5,0);
    if (lVar9 != 0) {
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar9,0);
      lVar9 = UnityEngine_UI_LayoutGroup__get_rectTransform_3ed4b40(param_5,0);
      if (lVar9 != 0) {
        UnityEngine_RectTransform__get_rect_3c2ba98(lVar9,0);
        if (*(int *)(param_5 + 0x78) == 2) {
          iVar8 = *(int *)(param_5 + 0x7c);
          iVar14 = 0;
          if (iVar8 != 0) {
            iVar14 = iVar4 / iVar8;
          }
          if (iVar4 != iVar14 * iVar8 && -1 < iVar4 - iVar14 * iVar8) {
            iVar14 = iVar14 + 1;
          }
          iVar10 = 1;
          if (iVar8 < iVar4) {
            iVar10 = iVar14;
          }
        }
        else if (*(int *)(param_5 + 0x78) == 1) {
          iVar10 = *(int *)(param_5 + 0x7c);
          if (iVar10 < iVar4) {
            iVar8 = 0;
            if (iVar10 != 0) {
              iVar8 = iVar4 / iVar10;
            }
            if (iVar4 != iVar8 * iVar10 && -1 < iVar4 - iVar8 * iVar10) {
              iVar8 = iVar8 + 1;
            }
          }
          else {
            iVar8 = 1;
          }
        }
        else {
          if (*(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x70) <= 0.0) {
            iVar10 = 0x7fffffff;
          }
          else {
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_025a0fbc;
            iVar8 = UnityEngine_RectOffset__get_horizontal_3bd7198(*(long *)(param_5 + 0x20),0);
            fVar18 = *(float *)(param_5 + 0x70);
            fVar15 = *(float *)(param_5 + 0x68);
            fVar17 = fVar18 + (param_3 - (float)iVar8) + _UNK_013aa94c;
            if (cRam0000000004f49d58 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f49d58 = '\x01';
            }
            fVar17 = fVar17 / (fVar18 + fVar15);
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar10 = (int)fVar17;
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            if ((float)(int)fVar17 == INFINITY) {
              iVar10 = 1;
            }
          }
          if (*(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x74) <= 0.0) {
            iVar8 = 0x7fffffff;
          }
          else {
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_025a0fbc;
            iVar8 = UnityEngine_RectOffset__get_vertical_3bd7224(*(long *)(param_5 + 0x20),0);
            fVar18 = *(float *)(param_5 + 0x74);
            fVar15 = *(float *)(param_5 + 0x6c);
            fVar17 = fVar18 + (param_4 - (float)iVar8) + _UNK_013aa94c;
            if (cRam0000000004f49d58 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f49d58 = '\x01';
            }
            fVar17 = fVar17 / (fVar18 + fVar15);
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar8 = (int)fVar17;
            if (iVar8 < 2) {
              iVar8 = 1;
            }
            if ((float)(int)fVar17 == INFINITY) {
              iVar8 = 1;
            }
          }
        }
        uVar3 = *(uint *)(param_5 + 0x60);
        iVar13 = iVar8;
        iVar14 = iVar10;
        if (*(int *)(param_5 + 100) == 0) {
          if (iVar4 <= iVar10) {
            iVar14 = iVar4;
          }
          if (iVar10 < 1) {
            iVar14 = 1;
          }
          if (cRam0000000004f4b79c == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4b79c = '\x01';
          }
          fVar18 = (float)iVar4 / (float)iVar10;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar12 = -0x80000000;
          if ((float)(int)fVar18 != INFINITY) {
            iVar12 = (int)fVar18;
          }
          if (iVar12 <= iVar8) {
            iVar13 = iVar12;
          }
          bVar1 = iVar8 < 1;
          iVar8 = iVar10;
          if (bVar1) {
            iVar13 = 1;
          }
        }
        else {
          if (iVar4 <= iVar8) {
            iVar13 = iVar4;
          }
          if (iVar8 < 1) {
            iVar13 = 1;
          }
          if (cRam0000000004f4b79c == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4b79c = '\x01';
          }
          fVar18 = (float)iVar4 / (float)iVar8;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar12 = -0x80000000;
          if ((float)(int)fVar18 != INFINITY) {
            iVar12 = (int)fVar18;
          }
          if (iVar12 <= iVar10) {
            iVar14 = iVar12;
          }
          if (iVar10 < 1) {
            iVar14 = 1;
          }
        }
        fVar18 = *(float *)(param_5 + 0x6c);
        iVar10 = 0;
        if (iVar8 != 0) {
          iVar10 = iVar4 / iVar8;
        }
        fVar17 = *(float *)(param_5 + 0x74);
        iVar12 = iVar4 - iVar10 * iVar8;
        fVar15 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (*(float *)(param_5 + 0x68) * (float)iVar14 +
                                   *(float *)(param_5 + 0x70) * (float)(iVar14 + -1),param_5,0,0);
        fVar18 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (fVar18 * (float)iVar13 + fVar17 * (float)(iVar13 + -1),param_5,1,
                                   0);
        iVar10 = iVar8;
        if (iVar12 != 0) {
          iVar10 = iVar12;
        }
        fVar17 = *(float *)(param_5 + 0x6c);
        fVar20 = *(float *)(param_5 + 0x74);
        iVar12 = iVar10;
        if (*(int *)(param_5 + 100) != 0) {
          iVar12 = iVar14;
        }
        iVar11 = iVar10;
        if (*(int *)(param_5 + 100) != 1) {
          iVar11 = iVar13;
        }
        fVar16 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (*(float *)(param_5 + 0x68) * (float)iVar12 +
                                   *(float *)(param_5 + 0x70) * (float)(iVar12 + -1),param_5,0,0);
        fVar17 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (fVar17 * (float)iVar11 + fVar20 * (float)(iVar11 + -1),param_5,1,
                                   0);
        puVar6 = PTR_DAT_049c5860;
        if (iVar4 < 1) {
          return;
        }
        iVar12 = 0;
        while( true ) {
          fVar19 = fVar15;
          fVar20 = fVar18;
          if (iVar4 - iVar10 <= iVar12) {
            fVar19 = fVar16;
            fVar20 = fVar17;
          }
          if (*(int *)(param_5 + 100) == 0) {
            iVar11 = 0;
            if (iVar8 != 0) {
              iVar11 = iVar12 / iVar8;
            }
            iVar5 = iVar12 - iVar11 * iVar8;
          }
          else {
            iVar5 = 0;
            if (iVar8 != 0) {
              iVar5 = iVar12 / iVar8;
            }
            iVar11 = iVar12 - iVar8 * iVar5;
          }
          iVar2 = (iVar13 + -1) - iVar11;
          if ((uVar3 & 0xfffffffe) != 2) {
            iVar2 = iVar11;
          }
          if (*(long *)(param_5 + 0x58) == 0) break;
          iVar11 = (iVar14 + -1) - iVar5;
          if ((uVar3 & 0x80000001) != 1) {
            iVar11 = iVar5;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_5 + 0x58),iVar12,&lStack_98,*(undefined8 *)puVar6);
          UnityEngine_UI_LayoutGroup__SetChildAlongAxis_3ed54ac
                    (fVar19 + (*(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x70)) *
                              (float)iVar11,param_5,lStack_98,0,0);
          if (*(long *)(param_5 + 0x58) == 0) break;
          iVar11 = iVar12 + 1;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_5 + 0x58),iVar12,&lStack_98,*(undefined8 *)puVar6);
          UnityEngine_UI_LayoutGroup__SetChildAlongAxis_3ed54ac
                    (fVar20 + (*(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x74)) *
                              (float)iVar2,param_5,lStack_98,1,0);
          iVar12 = iVar11;
          if (iVar4 == iVar11) {
            return;
          }
        }
      }
    }
  }
LAB_025a0fbc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

