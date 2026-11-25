/* IL2CPP: SandFlowRenderer$$SetPath
void SandFlowRenderer__SetPath (SandFlowRenderer_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Vector3_array* ups, bool closed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetPath
   void SandFlowRenderer__SetPath (SandFlowRenderer_o* __this, UnityEngine_Vector3_array* positions,
   UnityEngine_Vector3_array* ups, bool closed, const MethodInfo* method); */

void SandFlowRenderer__SetPath_24be7c4(long param_1,long param_2,long param_3,byte param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  
  if ((bRam0000000004f4bbc5 & 1) == 0) {
                    /* try { // try from 025be810 to 026be83b has its CatchHandler @ 025bebac */
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc5 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x230)) {
    Unity_Jobs_JobHandle__Complete_3bbf1cc(param_1 + 0x220,0);
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  }
                    /* try { // try from 025be83c to 026be84f has its CatchHandler @ 025bebb4 */
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(byte *)(param_1 + 0x31c) = param_4 & 1;
                    /* try { // try from 025be850 to 026be8ff has its CatchHandler @ 025be550 */
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  puVar3 = PTR_DAT_049c6e10;
  if (*(long *)(param_1 + 0xa0) != 0) {
    SandPileField__Clear_24d3f5c(*(long *)(param_1 + 0xa0),0);
    *(undefined1 *)(param_1 + 0xb4) = 1;
    cVar5 = cRam0000000004f49d59;
    *(undefined4 *)(param_1 + 0x204) = 0xff800000;
    if (cVar5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a38);
      cRam0000000004f49d59 = '\x01';
    }
    puVar4 = PTR_DAT_049b8a38;
    uVar32 = **(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8);
    *(undefined8 *)(param_1 + 0x130) = (*(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8))[1];
    *(undefined8 *)(param_1 + 0x128) = uVar32;
    lVar17 = *(long *)(param_1 + 0x2d8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
      uVar30 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
      if (cRam0000000004f49d59 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a38);
        cRam0000000004f49d59 = '\x01';
      }
    }
    else {
      uVar30 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
    }
    if (lVar17 != 0) {
                    /* try { // try from 025be900 to 026be927 has its CatchHandler @ 025beb5c */
      puVar9 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                (*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar17,uVar30,0);
      if (*(long *)(param_1 + 0x2d8) != 0) {
        UnityEngine_MaterialPropertyBlock__SetInt_3bdbcd4
                  (*(long *)(param_1 + 0x2d8),
                   *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),0,0);
        puVar3 = PTR_DAT_049b8758;
        if ((param_2 != 0) && (param_3 != 0)) {
          iVar6 = (int)*(ulong *)(param_2 + 0x18);
          if ((1 < iVar6) && (iVar6 == *(int *)(param_3 + 0x18))) {
                    /* try { // try from 025be964 to 026be9af has its CatchHandler @ 025beb6c */
            fVar29 = *(float *)(param_1 + 0x318);
            puVar1 = (undefined8 *)(param_1 + 0x30c);
            uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
            pfVar18 = (float *)(param_2 + 0x34);
            uVar20 = 1;
            do {
              if ((uVar10 <= uVar20 - 1) || (uVar10 <= uVar20)) goto LAB_025bef94;
              uVar32 = *(undefined8 *)(pfVar18 + -5);
              fVar33 = pfVar18[-3];
              uVar34 = *(undefined8 *)(pfVar18 + -2);
              fVar35 = *pfVar18;
              if (cRam0000000004f4a234 == '\0') {
                    /* try { // try from 025be9b4 to 026be9bb has its CatchHandler @ 025beb48 */
                FUN_021f03f8(puVar3);
                    /* try { // try from 025be9bc to 026be9c7 has its CatchHandler @ 025beb4c */
                cRam0000000004f4a234 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 025be9cc to 026be9db has its CatchHandler @ 025beb50 */
                FUN_021f0574();
              }
              fVar21 = (float)uVar32 - (float)uVar34;
              fVar24 = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar34 >> 0x20);
              uVar7 = *(uint *)(param_2 + 0x18);
              uVar10 = (ulong)uVar7;
                    /* try { // try from 025be9dc to 026bea87 has its CatchHandler @ 025be550 */
              uVar20 = uVar20 + 1;
              pfVar18 = pfVar18 + 3;
              fVar29 = fVar29 + SQRT((fVar33 - fVar35) * (fVar33 - fVar35) +
                                     fVar21 * fVar21 + fVar24 * fVar24);
              *(float *)(param_1 + 0x318) = fVar29;
            } while ((long)uVar20 < (long)(int)uVar7);
            if (_UNK_013aa94c <= fVar29) {
              iVar6 = FUN_025d1c84(fVar29 / _UNK_013aa69c,0);
              uVar7 = 0x200;
              if (iVar6 + 1 < 0x200) {
                uVar7 = iVar6 + 1;
              }
              if ((int)uVar7 < 3) {
                uVar7 = 2;
              }
              if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x18) != 1)) {
                fVar33 = *(float *)(param_2 + 0x24);
                fVar35 = *(float *)(param_2 + 0x28);
                fVar29 = (float)FUN_025d1cf0(*(undefined4 *)(param_2 + 0x20),fVar33,fVar35,
                                             *(undefined4 *)(param_2 + 0x2c),
                                             *(undefined4 *)(param_2 + 0x30),
                                             *(undefined4 *)(param_2 + 0x34),0);
                if (*(int *)(param_2 + 0x18) != 0) {
                  uVar30 = *(undefined4 *)(param_2 + 0x28);
                  uVar32 = *(undefined8 *)(param_2 + 0x20);
                    /* try { // try from 025bea88 to 026bea8b has its CatchHandler @ 025beba8 */
                  fVar24 = (float)FUN_025d1d88(0);
                    /* try { // try from 025bea8c to 026bea8f has its CatchHandler @ 025beb68 */
                    /* try { // try from 025bea90 to 026bea93 has its CatchHandler @ 025beb64 */
                    /* try { // try from 025bea94 to 026bea97 has its CatchHandler @ 025beb58 */
                    /* try { // try from 025bea98 to 026bea9b has its CatchHandler @ 025beb54 */
                    /* try { // try from 025bea9c to 026bea9f has its CatchHandler @ 025beb60 */
                    /* try { // try from 025beaa0 to 026beaa3 has its CatchHandler @ 025beb44 */
                  *(undefined4 *)(param_1 + 0x308) = uVar30;
                    /* try { // try from 025beaa4 to 026beaa7 has its CatchHandler @ 025beb60 */
                    /* try { // try from 025beaa8 to 026beb87 has its CatchHandler @ 025be550 */
                  fVar21 = 0.0;
                  uVar20 = 0;
                  lVar17 = 1;
                  *(undefined8 *)(param_1 + 0x300) = uVar32;
                  *(float *)(param_1 + 0x314) = fVar35 * 0.5;
                  fVar35 = _UNK_013aa8a0;
                  *puVar1 = CONCAT44(fVar33 * 0.5,fVar24 * 0.5);
                  fVar33 = _UNK_013aa920;
                  do {
                    uVar8 = *(uint *)(param_2 + 0x18);
                    iVar6 = (int)lVar17;
                    fVar24 = (*(float *)(param_1 + 0x318) * (float)(int)uVar20) /
                             (float)(int)(uVar7 - 1);
                    if (iVar6 < (int)(uVar8 - 1)) {
                      pfVar18 = (float *)(param_2 + 0x34 + (long)iVar6 * 0xc);
                      lVar17 = (long)iVar6;
                      do {
                        fVar31 = fVar29 + fVar21;
                    /* catch() { ... } // from try @ 025beaa0 with catch @ 025beb44 */
                    /* catch() { ... } // from try @ 025be9b4 with catch @ 025beb48 */
                        if (fVar24 <= fVar31) break;
                    /* catch() { ... } // from try @ 025be9bc with catch @ 025beb4c */
                    /* catch() { ... } // from try @ 025be9cc with catch @ 025beb50 */
                    /* catch() { ... } // from try @ 025bea98 with catch @ 025beb54 */
                    /* catch() { ... } // from try @ 025bea94 with catch @ 025beb58 */
                    /* catch() { ... } // from try @ 025be900 with catch @ 025beb5c */
                        if ((uVar8 <= (uint)lVar17) || (uVar8 <= (uint)lVar17 + 1))
                        goto LAB_025bef94;
                    /* catch() { ... } // from try @ 025bea9c with catch @ 025beb60
                       catch() { ... } // from try @ 025beaa4 with catch @ 025beb60 */
                        uVar32 = *(undefined8 *)(pfVar18 + -5);
                    /* catch() { ... } // from try @ 025bea90 with catch @ 025beb64 */
                    /* catch() { ... } // from try @ 025bea8c with catch @ 025beb68 */
                        fVar29 = pfVar18[-3];
                    /* catch() { ... } // from try @ 025be964 with catch @ 025beb6c */
                        uVar34 = *(undefined8 *)(pfVar18 + -2);
                        fVar21 = *pfVar18;
                        if (cRam0000000004f4a234 == '\0') {
                          FUN_021f03f8(puVar3);
                          cRam0000000004f4a234 = '\x01';
                        }
                    /* try { // try from 025beb88 to 026beb8b has its CatchHandler @ 025beb98 */
                    /* try { // try from 025beb8c to 026beb9b has its CatchHandler @ 025be550 */
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                    /* catch() { ... } // from try @ 025beb88 with catch @ 025beb98 */
                        fVar22 = (float)uVar32 - (float)uVar34;
                        fVar25 = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar34 >> 0x20);
                    /* try { // try from 025beb9c to 026beba3 has its CatchHandler @ 025bec0c */
                        uVar8 = *(uint *)(param_2 + 0x18);
                    /* try { // try from 025beba4 to 026bebcf has its CatchHandler @ 025be550 */
                        lVar17 = lVar17 + 1;
                    /* catch() { ... } // from try @ 025bea88 with catch @ 025beba8 */
                        pfVar18 = pfVar18 + 3;
                    /* catch() { ... } // from try @ 025be810 with catch @ 025bebac */
                    /* catch() { ... } // from try @ 025be7ac with catch @ 025bebb0 */
                    /* catch() { ... } // from try @ 025be83c with catch @ 025bebb4 */
                        fVar29 = SQRT((fVar29 - fVar21) * (fVar29 - fVar21) +
                                      fVar22 * fVar22 + fVar25 * fVar25);
                        fVar21 = fVar31;
                      } while (lVar17 < (int)(uVar8 - 1));
                    }
                    fVar31 = 0.0;
                    if (fVar35 < fVar29) {
                    /* catch() { ... } // from try @ 025bebd0 with catch @ 025bebf8 */
                    /* try { // try from 025bebfc to 026bec03 has its CatchHandler @ 025bec0c */
                      fVar22 = (fVar24 - fVar21) / fVar29;
                    /* try { // try from 025bec04 to 026bec0f has its CatchHandler @ 025be550 */
                      fVar24 = 1.0;
                      if (fVar22 <= 1.0) {
                        fVar24 = fVar22;
                      }
                      fVar31 = 0.0;
                    /* catch() { ... } // from try @ 025beb9c with catch @ 025bec0c
                       catch() { ... } // from try @ 025bebfc with catch @ 025bec0c */
                      if (0.0 <= fVar22) {
                        fVar31 = fVar24;
                      }
                    }
                    uVar19 = (uint)lVar17;
                    uVar2 = uVar19 - 1;
                    if ((uVar8 <= uVar2) || (uVar8 <= uVar19)) goto LAB_025bef94;
                    fVar24 = 0.0;
                    if (0.0 <= fVar31) {
                      fVar24 = fVar31;
                    }
                    if ((*(uint *)(param_3 + 0x18) <= uVar2) ||
                       (*(uint *)(param_3 + 0x18) <= uVar19)) goto LAB_025bef94;
                    puVar16 = (undefined8 *)(param_2 + 0x20 + (long)(int)uVar2 * 0xc);
                    puVar11 = (undefined8 *)(param_3 + 0x20 + (long)(int)uVar2 * 0xc);
                    puVar15 = (undefined8 *)(param_2 + 0x20 + (long)(int)uVar19 * 0xc);
                    puVar13 = (undefined8 *)(param_3 + 0x20 + (long)(int)uVar19 * 0xc);
                    fVar22 = *(float *)(puVar16 + 1);
                    uVar36 = *puVar16;
                    fVar31 = *(float *)(puVar11 + 1);
                    uVar34 = *puVar11;
                    fVar25 = *(float *)(puVar15 + 1);
                    uVar32 = *puVar15;
                    fVar38 = *(float *)(puVar13 + 1);
                    uVar37 = *puVar13;
                    if (cRam0000000004f4a55c == '\0') {
                      FUN_021f03f8(puVar3);
                      cRam0000000004f4a55c = '\x01';
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    fVar23 = (float)uVar34;
                    fVar26 = (float)((ulong)uVar34 >> 0x20);
                    fVar23 = fVar23 + ((float)uVar37 - fVar23) * fVar24;
                    fVar26 = fVar26 + ((float)((ulong)uVar37 >> 0x20) - fVar26) * fVar24;
                    fVar31 = fVar31 + fVar24 * (fVar38 - fVar31);
                    fVar38 = SQRT(fVar31 * fVar31 + fVar23 * fVar23 + fVar26 * fVar26);
                    if (fVar38 <= fVar33) {
                      if (cRam0000000004f4a233 == '\0') {
                        FUN_021f03f8(PTR_DAT_049bbf90);
                        cRam0000000004f4a233 = '\x01';
                      }
                      uVar34 = **(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                      fVar31 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
                    }
                    else {
                      fVar31 = fVar31 / fVar38;
                      uVar34 = CONCAT44(fVar26 / fVar38,fVar23 / fVar38);
                    }
                    lVar14 = *(long *)(param_1 + 0x2c8);
                    if (lVar14 == 0) goto LAB_025bef98;
                    if ((ulong)*(uint *)(lVar14 + 0x18) <= uVar20 << 1) goto LAB_025bef94;
                    fVar38 = (float)uVar36;
                    fVar23 = (float)((ulong)uVar36 >> 0x20);
                    lVar14 = lVar14 + uVar20 * 0x20;
                    *(undefined4 *)(lVar14 + 0x2c) = 0;
                    fVar38 = fVar38 + ((float)uVar32 - fVar38) * fVar24;
                    fVar23 = fVar23 + ((float)((ulong)uVar32 >> 0x20) - fVar23) * fVar24;
                    uVar10 = CONCAT44(fVar23,fVar38);
                    fVar22 = fVar22 + fVar24 * (fVar25 - fVar22);
                    *(ulong *)(lVar14 + 0x20) = uVar10;
                    *(float *)(lVar14 + 0x28) = fVar22;
                    lVar14 = *(long *)(param_1 + 0x2c8);
                    if (lVar14 == 0) goto LAB_025bef98;
                    uVar12 = uVar20 << 1 | 1;
                    if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_025bef94;
                    lVar14 = lVar14 + uVar12 * 0x10;
                    uVar20 = uVar20 + 1;
                    *(undefined8 *)(lVar14 + 0x20) = uVar34;
                    *(float *)(lVar14 + 0x28) = fVar31;
                    *(undefined4 *)(lVar14 + 0x2c) = 0;
                    fVar25 = (float)*(undefined8 *)(param_1 + 0x300);
                    fVar24 = (float)*puVar1;
                    fVar27 = fVar25 - fVar24;
                    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x300) >> 0x20);
                    fVar31 = (float)((ulong)*puVar1 >> 0x20);
                    fVar28 = fVar26 - fVar31;
                    fVar25 = fVar25 + fVar24;
                    fVar26 = fVar26 + fVar31;
                    fVar24 = *(float *)(param_1 + 0x308) - *(float *)(param_1 + 0x314);
                    fVar31 = *(float *)(param_1 + 0x308) + *(float *)(param_1 + 0x314);
                    if (fVar22 <= fVar24) {
                      fVar24 = fVar22;
                    }
                    uVar12 = uVar10 ^ (uVar10 ^ CONCAT44(fVar28,fVar27)) &
                                      CONCAT44(-(uint)(fVar28 < fVar23),-(uint)(fVar27 < fVar38));
                    uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar26,fVar25)) &
                                      CONCAT44(-(uint)(fVar23 < fVar26),-(uint)(fVar38 < fVar25));
                    if (fVar31 <= fVar22) {
                      fVar31 = fVar22;
                    }
                    fVar38 = (float)uVar12;
                    fVar23 = (float)(uVar12 >> 0x20);
                    fVar22 = ((float)uVar10 - fVar38) * 0.5;
                    fVar25 = ((float)(uVar10 >> 0x20) - fVar23) * 0.5;
                    fVar31 = (fVar31 - fVar24) * 0.5;
                    *puVar1 = CONCAT44(fVar25,fVar22);
                    *(float *)(param_1 + 0x314) = fVar31;
                    *(ulong *)(param_1 + 0x300) = CONCAT44(fVar23 + fVar25,fVar38 + fVar22);
                    *(float *)(param_1 + 0x308) = fVar24 + fVar31;
                  } while (uVar20 != uVar7);
                  *(uint *)(param_1 + 0x2fc) = uVar7;
                  SandFlowRenderer__BuildDriftProfile_24beff4(param_1);
                  puVar3 = PTR_DAT_049c6e10;
                  lVar17 = *(long *)(param_1 + 0x2d8);
                  if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar17 != 0) {
                    UnityEngine_MaterialPropertyBlock__SetInt_3bdbcd4
                              (lVar17,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                               (ulong)uVar7,0);
                    if (*(long *)(param_1 + 0x2d8) != 0) {
                      UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
                                (*(undefined4 *)(param_1 + 0x318),*(long *)(param_1 + 0x2d8),
                                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0);
                      lVar17 = *(long *)(param_1 + 0x2d8);
                      if (lVar17 != 0) {
                        uVar30 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        lVar14 = *(long *)(lVar17 + 0x10);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c
                                    (lVar17,0);
                        }
                        if (pcRam0000000004f56e80 == (code *)0x0) {
                          pcRam0000000004f56e80 = (code *)FUN_021f03bc(&UNK_013d09b0);
                        }
                    /* WARNING: Could not recover jumptable at 0x03cdaed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004f56e80)((float)(param_4 & 1),lVar14,uVar30);
                        return;
                      }
                    }
                  }
                  goto LAB_025bef98;
                }
              }
LAB_025bef94:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
          }
        }
        return;
      }
    }
  }
LAB_025bef98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

