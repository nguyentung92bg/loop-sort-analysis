/* IL2CPP: HeadlightBlinkEffect$$Apply
void HeadlightBlinkEffect__Apply (HeadlightBlinkEffect_o* __this, float level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HeadlightBlinkEffect$$Apply
   void HeadlightBlinkEffect__Apply (HeadlightBlinkEffect_o* __this, float level, const MethodInfo*
   method); */

void HeadlightBlinkEffect__Apply_2571b98(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_2 + 0x28);
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = fVar5;
  }
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      fVar5 = fVar6 * (*(float *)(param_2 + 0x3c) + -1.0) + 1.0;
      do {
        if (uVar1 <= (uint)lVar4) goto LAB_02671ce4;
        lVar2 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
        HeadlightBlinkEffect__SetAlpha_2571e30
                  (*(float *)(param_2 + 0x38) + fVar6 * (1.0 - *(float *)(param_2 + 0x38)),lVar2);
        if ((lVar2 == 0) ||
           (lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar2,0), lVar2 == 0))
        goto LAB_02671ce0;
        UnityEngine_Transform__set_localScale_3c2ddfc(fVar5,fVar5,0x3f800000,lVar2,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
LAB_02671ce4:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar2 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
          HeadlightBlinkEffect__SetAlpha_2571e30(param_1,lVar2);
          if ((lVar2 == 0) ||
             (lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar2,0), lVar2 == 0))
          goto LAB_02671ce0;
          UnityEngine_Transform__set_localScale_3c2ddfc(param_1,param_1,0x3f800000,lVar2,0);
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_02671ce0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

