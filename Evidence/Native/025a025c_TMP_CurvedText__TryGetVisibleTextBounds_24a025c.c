/* IL2CPP: TMP_CurvedText$$TryGetVisibleTextBounds
bool TMP_CurvedText__TryGetVisibleTextBounds (TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Vector3_o* boundsMin, UnityEngine_Vector3_o* boundsMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMP_CurvedText$$TryGetVisibleTextBounds
   bool TMP_CurvedText__TryGetVisibleTextBounds (TMPro_TMP_TextInfo_o* textInfo,
   UnityEngine_Vector3_o* boundsMin, UnityEngine_Vector3_o* boundsMax, const MethodInfo* method); */

undefined4
TMP_CurvedText__TryGetVisibleTextBounds_24a025c(long param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x7f8000007f800000;
  *param_3 = 0xff800000ff800000;
  *(undefined4 *)(param_3 + 1) = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 == 0) goto LAB_025a039c;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_025a0398:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar5 = lVar5 + 0x20;
        if (*(char *)(lVar5 + uVar2 * 0x178 + 0x170) != '\0') {
          lVar4 = *(long *)(param_1 + 0x60);
          if (lVar4 == 0) goto LAB_025a039c;
          uVar1 = *(uint *)(lVar5 + uVar2 * 0x178 + 0x30);
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_025a0398;
          lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 0x50 + 0x30);
          if (lVar4 == 0) goto LAB_025a039c;
          lVar7 = 0;
          uVar6 = (ulong)*(uint *)(lVar5 + uVar2 * 0x178 + 0x44);
          lVar5 = uVar6 << 0x20;
          do {
            if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 + lVar7) goto LAB_025a0398;
            uVar10 = *param_2;
            lVar7 = lVar7 + 1;
            lVar8 = lVar4 + (long)(int)((ulong)lVar5 >> 0x20) * 0xc;
            uVar12 = *(ulong *)(lVar8 + 0x20);
            fVar11 = *(float *)(lVar8 + 0x28);
            fVar13 = (float)(uVar12 >> 0x20);
            fVar9 = *(float *)(param_2 + 1);
            if (fVar11 <= *(float *)(param_2 + 1)) {
              fVar9 = fVar11;
            }
            *(float *)(param_2 + 1) = fVar9;
            *param_2 = uVar10 ^ (uVar10 ^ uVar12) &
                                ~CONCAT44(-(uint)((float)(uVar10 >> 0x20) < fVar13),
                                          -(uint)((float)uVar10 < (float)uVar12));
            uVar10 = *param_3;
            fVar9 = *(float *)(param_3 + 1);
            if (*(float *)(param_3 + 1) <= fVar11) {
              fVar9 = fVar11;
            }
            *(float *)(param_3 + 1) = fVar9;
            *param_3 = uVar10 ^ (uVar10 ^ uVar12) &
                                ~CONCAT44(-(uint)(fVar13 < (float)(uVar10 >> 0x20)),
                                          -(uint)((float)uVar12 < (float)uVar10));
            lVar5 = lVar5 + 0x100000000;
          } while (lVar7 != 4);
          uVar3 = 1;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)*(int *)(param_1 + 0x18));
    }
    return uVar3;
  }
LAB_025a039c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

