/* IL2CPP: HopEffect$$Update
void HopEffect__Update (HopEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HopEffect$$Update
   void HopEffect__Update (HopEffect_o* __this, const MethodInfo* method); */

void HopEffect__Update_2571f60(long param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  fVar4 = *(float *)(param_1 + 0x68);
  if (fVar4 < 0.0) {
    fVar4 = *(float *)(param_1 + 0x6c);
    if (fVar4 < 0.0) {
      fVar4 = (float)UnityEngine_Random__Range_3c11c54
                               (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0);
      fVar4 = fVar3 + fVar4;
      *(float *)(param_1 + 0x6c) = fVar4;
    }
    if (fVar3 < fVar4) {
      return;
    }
    *(float *)(param_1 + 0x68) = fVar3;
    fVar4 = 1.0;
    if ((*(char *)(param_1 + 0x4c) != '\0') &&
       (fVar5 = (float)UnityEngine_Random__get_value_3c11d1c(0), fVar4 = 1.0, fVar5 < 0.5)) {
      fVar4 = -1.0;
    }
    fVar5 = (float)UnityEngine_Random__Range_3c11c54
                             (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0);
    *(float *)(param_1 + 0x70) = fVar4 * fVar5;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0),
       lVar1 == 0)) goto LAB_02672198;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
    fVar4 = *(float *)(param_1 + 0x68);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  fVar6 = (((fVar3 - fVar4) - *(float *)(param_1 + 0x38)) - *(float *)(param_1 + 0x54)) /
          *(float *)(param_1 + 0x58);
  fVar5 = 1.0;
  if (fVar6 <= 1.0) {
    fVar5 = fVar6;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar6) {
    fVar7 = fVar5;
  }
  if (1.0 <= fVar7) {
    if ((lVar1 != 0) && (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0), lVar1 != 0)
       ) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
      *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
      fVar4 = (float)UnityEngine_Random__Range_3c11c54
                               (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0);
      *(float *)(param_1 + 0x6c) = fVar3 + fVar4;
      return;
    }
  }
  else if (lVar1 != 0) {
    fVar4 = (fVar3 - fVar4) / *(float *)(param_1 + 0x38);
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar3;
    }
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fVar5 * *(float *)(param_1 + 0x70),
               (1.0 - fVar5) * fVar5 * *(float *)(param_1 + 0x3c) * 4.0 -
               fVar5 * *(float *)(param_1 + 0x48),lVar1,0);
    lVar1 = *(long *)(param_1 + 0x28);
    fVar3 = -1.0;
    if (0.0 <= *(float *)(param_1 + 0x70)) {
      fVar3 = 1.0;
    }
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
              (0,0,fVar5 * *(float *)(param_1 + 0x50) * fVar3 * _UNK_013aa730,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localRotation_3c2d9f0(lVar1,0);
      plVar2 = *(long **)(param_1 + 0x60);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
        plVar2 = *(long **)(param_1 + 0x60);
        if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02672148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
          return;
        }
      }
    }
  }
LAB_02672198:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

