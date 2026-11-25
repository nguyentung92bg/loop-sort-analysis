/* IL2CPP: Beardy.BeardyGridLayoutGroup$$SetLayoutVertical
void Beardy_BeardyGridLayoutGroup__SetLayoutVertical (Beardy_BeardyGridLayoutGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025a0a30) */
/* WARNING: Removing unreachable block (ram,0x025a0a38) */
/* WARNING: Removing unreachable block (ram,0x025a0a54) */
/* WARNING: Removing unreachable block (ram,0x025a0a5c) */
/* WARNING: Removing unreachable block (ram,0x025a0a90) */
/* WARNING: Removing unreachable block (ram,0x025a0a9c) */
/* WARNING: Removing unreachable block (ram,0x025a0aa0) */
/* WARNING: Removing unreachable block (ram,0x025a0ac0) */
/* WARNING: Removing unreachable block (ram,0x025a0acc) */
/* WARNING: Removing unreachable block (ram,0x025a0b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Beardy.BeardyGridLayoutGroup$$SetLayoutVertical
   void Beardy_BeardyGridLayoutGroup__SetLayoutVertical (Beardy_BeardyGridLayoutGroup_o* __this,
   const MethodInfo* method); */

void Beardy_BeardyGridLayoutGroup__SetLayoutVertical_24a0fc0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_98;
  
  if ((bRam0000000004f4baea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c5860);
    bRam0000000004f4baea = 1;
  }
  if (*(long *)(param_5 + 0x58) != 0) {
    iVar4 = *(int *)(*(long *)(param_5 + 0x58) + 0x18);
    lVar8 = UnityEngine_UI_LayoutGroup__get_rectTransform_3ed4b40(param_5,0);
    if (lVar8 != 0) {
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar8,0);
      lVar8 = UnityEngine_UI_LayoutGroup__get_rectTransform_3ed4b40(param_5,0);
      if (lVar8 != 0) {
        UnityEngine_RectTransform__get_rect_3c2ba98(lVar8,0);
        if (*(int *)(param_5 + 0x78) == 2) {
          iVar7 = *(int *)(param_5 + 0x7c);
          iVar13 = 0;
          if (iVar7 != 0) {
            iVar13 = iVar4 / iVar7;
          }
          if (iVar4 != iVar13 * iVar7 && -1 < iVar4 - iVar13 * iVar7) {
            iVar13 = iVar13 + 1;
          }
          iVar9 = 1;
          if (iVar7 < iVar4) {
            iVar9 = iVar13;
          }
        }
        else if (*(int *)(param_5 + 0x78) == 1) {
          iVar9 = *(int *)(param_5 + 0x7c);
          if (iVar9 < iVar4) {
            iVar7 = 0;
            if (iVar9 != 0) {
              iVar7 = iVar4 / iVar9;
            }
            if (iVar4 != iVar7 * iVar9 && -1 < iVar4 - iVar7 * iVar9) {
              iVar7 = iVar7 + 1;
            }
          }
          else {
            iVar7 = 1;
          }
        }
        else {
          if (*(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x70) <= 0.0) {
            iVar9 = 0x7fffffff;
          }
          else {
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_025a0fbc;
            iVar7 = UnityEngine_RectOffset__get_horizontal_3bd7198(*(long *)(param_5 + 0x20),0);
            fVar17 = *(float *)(param_5 + 0x70);
            fVar14 = *(float *)(param_5 + 0x68);
            fVar16 = fVar17 + (param_3 - (float)iVar7) + _UNK_013aa94c;
            if (cRam0000000004f49d58 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f49d58 = '\x01';
            }
            fVar16 = fVar16 / (fVar17 + fVar14);
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar9 = (int)fVar16;
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            if ((float)(int)fVar16 == INFINITY) {
              iVar9 = 1;
            }
          }
          if (*(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x74) <= 0.0) {
            iVar7 = 0x7fffffff;
          }
          else {
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_025a0fbc;
            iVar7 = UnityEngine_RectOffset__get_vertical_3bd7224(*(long *)(param_5 + 0x20),0);
            fVar17 = *(float *)(param_5 + 0x74);
            fVar14 = *(float *)(param_5 + 0x6c);
            fVar16 = fVar17 + (param_4 - (float)iVar7) + _UNK_013aa94c;
            if (cRam0000000004f49d58 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f49d58 = '\x01';
            }
            fVar16 = fVar16 / (fVar17 + fVar14);
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar7 = (int)fVar16;
            if (iVar7 < 2) {
              iVar7 = 1;
            }
            if ((float)(int)fVar16 == INFINITY) {
              iVar7 = 1;
            }
          }
        }
        uVar3 = *(uint *)(param_5 + 0x60);
        iVar12 = iVar7;
        iVar13 = iVar9;
        if (*(int *)(param_5 + 100) == 0) {
          if (iVar4 <= iVar9) {
            iVar13 = iVar4;
          }
          if (iVar9 < 1) {
            iVar13 = 1;
          }
          if (cRam0000000004f4b79c == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4b79c = '\x01';
          }
          fVar17 = (float)iVar4 / (float)iVar9;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar11 = -0x80000000;
          if ((float)(int)fVar17 != INFINITY) {
            iVar11 = (int)fVar17;
          }
          if (iVar11 <= iVar7) {
            iVar12 = iVar11;
          }
          bVar1 = iVar7 < 1;
          iVar7 = iVar9;
          if (bVar1) {
            iVar12 = 1;
          }
        }
        else {
          if (iVar4 <= iVar7) {
            iVar12 = iVar4;
          }
          if (iVar7 < 1) {
            iVar12 = 1;
          }
          if (cRam0000000004f4b79c == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4b79c = '\x01';
          }
          fVar17 = (float)iVar4 / (float)iVar7;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar11 = -0x80000000;
          if ((float)(int)fVar17 != INFINITY) {
            iVar11 = (int)fVar17;
          }
          if (iVar11 <= iVar9) {
            iVar13 = iVar11;
          }
          if (iVar9 < 1) {
            iVar13 = 1;
          }
        }
        fVar17 = *(float *)(param_5 + 0x6c);
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = iVar4 / iVar7;
        }
        fVar16 = *(float *)(param_5 + 0x74);
        iVar11 = iVar4 - iVar9 * iVar7;
        fVar14 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (*(float *)(param_5 + 0x68) * (float)iVar13 +
                                   *(float *)(param_5 + 0x70) * (float)(iVar13 + -1),param_5,0,0);
        fVar17 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (fVar17 * (float)iVar12 + fVar16 * (float)(iVar12 + -1),param_5,1,
                                   0);
        iVar9 = iVar7;
        if (iVar11 != 0) {
          iVar9 = iVar11;
        }
        fVar16 = *(float *)(param_5 + 0x6c);
        fVar19 = *(float *)(param_5 + 0x74);
        iVar11 = iVar9;
        if (*(int *)(param_5 + 100) != 0) {
          iVar11 = iVar13;
        }
        iVar10 = iVar9;
        if (*(int *)(param_5 + 100) != 1) {
          iVar10 = iVar12;
        }
        fVar15 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (*(float *)(param_5 + 0x68) * (float)iVar11 +
                                   *(float *)(param_5 + 0x70) * (float)(iVar11 + -1),param_5,0,0);
        fVar16 = (float)UnityEngine_UI_LayoutGroup__GetStartOffset_3ed535c
                                  (fVar16 * (float)iVar10 + fVar19 * (float)(iVar10 + -1),param_5,1,
                                   0);
        puVar6 = PTR_DAT_049c5860;
        if (0 < iVar4) {
          iVar11 = 0;
          do {
            fVar18 = fVar14;
            fVar19 = fVar17;
            if (iVar4 - iVar9 <= iVar11) {
              fVar18 = fVar15;
              fVar19 = fVar16;
            }
            if (*(int *)(param_5 + 100) == 0) {
              iVar10 = 0;
              if (iVar7 != 0) {
                iVar10 = iVar11 / iVar7;
              }
              iVar5 = iVar11 - iVar10 * iVar7;
            }
            else {
              iVar5 = 0;
              if (iVar7 != 0) {
                iVar5 = iVar11 / iVar7;
              }
              iVar10 = iVar11 - iVar7 * iVar5;
            }
            iVar2 = (iVar12 + -1) - iVar10;
            if ((uVar3 & 0xfffffffe) != 2) {
              iVar2 = iVar10;
            }
            if (*(long *)(param_5 + 0x58) == 0) goto LAB_025a0fbc;
            iVar10 = (iVar13 + -1) - iVar5;
            if ((uVar3 & 0x80000001) != 1) {
              iVar10 = iVar5;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_5 + 0x58),iVar11,&uStack_98,*(undefined8 *)puVar6);
            UnityEngine_UI_LayoutGroup__SetChildAlongAxis_3ed54ac
                      (fVar18 + (*(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x70)) *
                                (float)iVar10,param_5,uStack_98,0,0);
            if (*(long *)(param_5 + 0x58) == 0) goto LAB_025a0fbc;
            iVar10 = iVar11 + 1;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_5 + 0x58),iVar11,&uStack_98,*(undefined8 *)puVar6);
            UnityEngine_UI_LayoutGroup__SetChildAlongAxis_3ed54ac
                      (fVar19 + (*(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x74)) *
                                (float)iVar2,param_5,uStack_98,1,0);
            iVar11 = iVar10;
          } while (iVar4 != iVar10);
        }
        return;
      }
    }
  }
LAB_025a0fbc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

