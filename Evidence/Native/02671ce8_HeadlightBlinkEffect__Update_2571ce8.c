/* IL2CPP: HeadlightBlinkEffect$$Update
void HeadlightBlinkEffect__Update (HeadlightBlinkEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HeadlightBlinkEffect$$Update
   void HeadlightBlinkEffect__Update (HeadlightBlinkEffect_o* __this, const MethodInfo* method); */

void HeadlightBlinkEffect__Update_2571ce8(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar6 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar6 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  fVar7 = *(float *)(param_1 + 0x54);
  if (fVar7 < 0.0) {
    fVar7 = (float)UnityEngine_Random__Range_3c11c54(0x3f000000,*(undefined4 *)(param_1 + 0x48),0);
    fVar7 = fVar6 + fVar7;
    *(float *)(param_1 + 0x54) = fVar7;
  }
  if (fVar7 <= fVar6) {
    fVar8 = *(float *)(param_1 + 0x40);
    fVar9 = *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x50) = fVar6;
    fVar7 = (float)UnityEngine_Random__Range_3c11c54
                             (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),0);
    *(float *)(param_1 + 0x54) = fVar9 + fVar6 + fVar8 + fVar8 + fVar7;
  }
  fVar7 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x50)) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x50);
    fVar8 = 0.0;
    fVar9 = *(float *)(param_1 + 0x40);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar6 <= fVar9)) {
      fVar7 = (float)FUN_046086e0((fVar6 / fVar9) * _UNK_013aa860);
    }
    fVar6 = (fVar6 - fVar9) - *(float *)(param_1 + 0x44);
    bVar2 = true;
    if ((0.0 <= fVar6) && (bVar2 = false, !NAN(fVar9) && !NAN(fVar6))) {
      bVar2 = fVar9 < fVar6;
    }
    if (!bVar2) {
      fVar8 = (float)FUN_046086e0((fVar6 / fVar9) * _UNK_013aa860);
    }
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar6;
  }
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      fVar6 = fVar8 * (*(float *)(param_1 + 0x3c) + -1.0) + 1.0;
      do {
        if (uVar1 <= (uint)lVar5) goto LAB_02671ce4;
        lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
        HeadlightBlinkEffect__SetAlpha_2571e30
                  (*(float *)(param_1 + 0x38) + fVar8 * (1.0 - *(float *)(param_1 + 0x38)),lVar3);
        if ((lVar3 == 0) ||
           (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0), lVar3 == 0))
        goto LAB_02671ce0;
        UnityEngine_Transform__set_localScale_3c2ddfc(fVar6,fVar6,0x3f800000,lVar3,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) {
LAB_02671ce4:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
          HeadlightBlinkEffect__SetAlpha_2571e30(fVar7,lVar3);
          if ((lVar3 == 0) ||
             (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0), lVar3 == 0))
          goto LAB_02671ce0;
          UnityEngine_Transform__set_localScale_3c2ddfc(fVar7,fVar7,0x3f800000,lVar3,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
      return;
    }
  }
LAB_02671ce0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

