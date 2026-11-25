/* IL2CPP: TMP_CurvedText$$ApplyCurve
void TMP_CurvedText__ApplyCurve (TMP_CurvedText_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TMP_CurvedText$$ApplyCurve
   void TMP_CurvedText__ApplyCurve (TMP_CurvedText_o* __this, TMPro_TMP_TextInfo_o* textInfo, const
   MethodInfo* method); */

void TMP_CurvedText__ApplyCurve_249fecc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  fVar23 = *(float *)(param_1 + 0x20);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (cRam0000000004f4a18f == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf30);
    cRam0000000004f4a18f = '\x01';
  }
  fVar13 = ABS(fVar23);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar17 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
  fVar7 = fVar13 * _UNK_013aa8a0;
  if (fVar13 * _UNK_013aa8a0 <= fVar17) {
    fVar7 = fVar17;
  }
  if (fVar7 <= ABS(0.0 - fVar23)) {
    if (param_2 == 0) {
LAB_025a0258:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = *(uint *)(param_2 + 0x18);
    if ((uVar5 != 0) &&
       (uVar8 = TMP_CurvedText__TryGetVisibleTextBounds_24a025c(param_2,&uStack_a0,&uStack_b0),
       (uVar8 & 1) != 0)) {
      fVar23 = (float)uStack_b0;
      fVar13 = (float)uStack_a0;
      if (_UNK_013aa94c <= ABS((float)uStack_b0 - (float)uStack_a0)) {
        fVar17 = uStack_a0._4_4_;
        fVar7 = uStack_b0._4_4_;
        if (0 < (int)uVar5) {
          fVar24 = (float)uStack_b0 - (float)uStack_a0;
          uVar8 = 0;
          lVar12 = 400;
          do {
            lVar9 = *(long *)(param_2 + 0x38);
            if (lVar9 == 0) goto LAB_025a0258;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_025a0254;
            if (*(char *)(lVar9 + lVar12) != '\0') {
              lVar10 = *(long *)(param_2 + 0x60);
              if (lVar10 == 0) goto LAB_025a0258;
              uVar6 = *(uint *)(lVar9 + lVar12 + -0x140);
              if (*(uint *)(lVar10 + 0x18) <= uVar6) {
LAB_025a0254:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar10 = *(long *)(lVar10 + (long)(int)uVar6 * 0x50 + 0x30);
              if (lVar10 == 0) goto LAB_025a0258;
              uVar6 = *(uint *)(lVar9 + lVar12 + -300);
              if ((*(uint *)(lVar10 + 0x18) <= uVar6) ||
                 (uVar1 = uVar6 + 2, *(uint *)(lVar10 + 0x18) <= uVar1)) goto LAB_025a0254;
              lVar4 = lVar10 + 0x20;
              pfVar11 = (float *)(lVar4 + (long)(int)uVar1 * 0xc);
              fVar20 = *(float *)(lVar9 + lVar12 + -0x4c);
              uVar2 = uVar6 + 1;
              uVar22 = *(undefined8 *)(lVar4 + (long)(int)uVar6 * 0xc);
              fVar18 = *pfVar11;
              fVar21 = (float)uVar22;
              fVar14 = (fVar21 + fVar18) * 0.5;
              *(ulong *)(lVar4 + (long)(int)uVar6 * 0xc) =
                   CONCAT44((float)((ulong)uVar22 >> 0x20) - fVar20,fVar21 - fVar14);
              if ((*(uint *)(lVar10 + 0x18) <= uVar2) ||
                 (uVar22 = *(undefined8 *)(lVar4 + (long)(int)uVar2 * 0xc),
                 *(ulong *)(lVar4 + (long)(int)uVar2 * 0xc) =
                      CONCAT44((float)((ulong)uVar22 >> 0x20) - fVar20,(float)uVar22 - fVar14),
                 *(uint *)(lVar10 + 0x18) <= uVar1)) goto LAB_025a0254;
              uVar3 = uVar6 + 3;
              *pfVar11 = fVar18 - fVar14;
              pfVar11[1] = pfVar11[1] - fVar20;
              if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_025a0254;
              uVar22 = *(undefined8 *)(lVar4 + (long)(int)uVar3 * 0xc);
              *(ulong *)(lVar4 + (long)(int)uVar3 * 0xc) =
                   CONCAT44((float)((ulong)uVar22 >> 0x20) - fVar20,(float)uVar22 - fVar14);
              TMP_CurvedText__ComputeCircleTransformationMatrix_24a03a0
                        (&uStack_130,(fVar14 - fVar13) / fVar24,fVar24,param_1,param_2,
                         uVar8 & 0xffffffff);
              uStack_c8 = uStack_108;
              uStack_d0 = uStack_110;
              uStack_b8 = uStack_f8;
              uStack_c0 = uStack_100;
              uStack_e8 = uStack_128;
              uStack_f0 = uStack_130;
              uStack_d8 = uStack_118;
              uStack_e0 = uStack_120;
              if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_025a0254;
              lVar9 = lVar10 + (long)(int)uVar6 * 0xc;
              uVar16 = *(undefined4 *)(lVar9 + 0x24);
              uVar19 = *(undefined4 *)(lVar9 + 0x28);
              uVar15 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                                 (*(undefined4 *)(lVar9 + 0x20),&uStack_f0,0);
              if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_025a0254;
              *(undefined4 *)(lVar9 + 0x20) = uVar15;
              *(undefined4 *)(lVar9 + 0x24) = uVar16;
              *(undefined4 *)(lVar9 + 0x28) = uVar19;
              if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_025a0254;
              lVar9 = lVar10 + (long)(int)uVar2 * 0xc;
              uVar16 = *(undefined4 *)(lVar9 + 0x24);
              uVar19 = *(undefined4 *)(lVar9 + 0x28);
              uVar15 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                                 (*(undefined4 *)(lVar9 + 0x20),&uStack_f0,0);
              if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_025a0254;
              *(undefined4 *)(lVar9 + 0x24) = uVar16;
              *(undefined4 *)(lVar9 + 0x28) = uVar19;
              uVar6 = *(uint *)(lVar10 + 0x18);
              *(undefined4 *)(lVar9 + 0x20) = uVar15;
              if (uVar6 <= uVar1) goto LAB_025a0254;
              lVar9 = lVar10 + (long)(int)uVar1 * 0xc;
              uVar16 = *(undefined4 *)(lVar9 + 0x24);
              uVar19 = *(undefined4 *)(lVar9 + 0x28);
              uVar15 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                                 (*(undefined4 *)(lVar9 + 0x20),&uStack_f0,0);
              if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_025a0254;
              *(undefined4 *)(lVar9 + 0x20) = uVar15;
              *(undefined4 *)(lVar9 + 0x24) = uVar16;
              *(undefined4 *)(lVar9 + 0x28) = uVar19;
              if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_025a0254;
              lVar9 = lVar10 + (long)(int)uVar3 * 0xc;
              uVar16 = *(undefined4 *)(lVar9 + 0x24);
              uVar19 = *(undefined4 *)(lVar9 + 0x28);
              uVar15 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                                 (*(undefined4 *)(lVar9 + 0x20),&uStack_f0,0);
              if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_025a0254;
              *(undefined4 *)(lVar9 + 0x20) = uVar15;
              *(undefined4 *)(lVar9 + 0x24) = uVar16;
              *(undefined4 *)(lVar9 + 0x28) = uVar19;
            }
            uVar8 = uVar8 + 1;
            lVar12 = lVar12 + 0x178;
          } while (uVar5 != uVar8);
        }
        TMP_CurvedText__OffsetVisibleVerticesToCenter_24a0584
                  ((fVar23 + fVar13) * 0.5,(fVar17 + fVar7) * 0.5,0,param_2);
      }
    }
  }
  return;
}

