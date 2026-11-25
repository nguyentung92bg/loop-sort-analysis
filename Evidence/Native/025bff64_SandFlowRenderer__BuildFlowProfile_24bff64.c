/* IL2CPP: SandFlowRenderer$$BuildFlowProfile
void SandFlowRenderer__BuildFlowProfile (SandFlowRenderer_o* __this, float spacing, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$BuildFlowProfile
   void SandFlowRenderer__BuildFlowProfile (SandFlowRenderer_o* __this, float spacing, const
   MethodInfo* method); */

void SandFlowRenderer__BuildFlowProfile_24bff64(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000004f4bbc8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6eb0);
    FUN_021f03f8(PTR_DAT_049c6eb8);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049be640);
    bRam0000000004f4bbc8 = 1;
  }
  lVar14 = *(long *)(param_2 + 0x178);
  if (lVar14 != 0) {
    uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
    if (uVar16 == 0) {
LAB_025c04ac:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    iVar13 = *(int *)(param_2 + 0x2fc);
    *(undefined4 *)(lVar14 + 0x20) = 0;
    fVar23 = _UNK_013aa948;
    uVar9 = iVar13 - 1;
    if (0 < (int)uVar9) {
      uVar20 = 0;
      uVar21 = 1;
      do {
        if ((int)uVar21 < (int)uVar9) {
          fVar22 = 0.0;
          if (-2 < (int)uVar21) {
            iVar13 = uVar21 + 1;
LAB_025c002c:
            lVar14 = *(long *)(param_2 + 0x2c8);
            if (lVar14 == 0) goto LAB_025c04b0;
            uVar15 = *(uint *)(lVar14 + 0x18);
            if ((((uVar15 <= uVar20 + 2) || (uVar15 <= uVar20)) || (uVar15 <= (uint)(iVar13 << 1)))
               || (uVar15 <= uVar20 + 3)) goto LAB_025c04ac;
            lVar19 = lVar14 + (long)(int)(uVar20 + 2) * 0x10;
            lVar18 = lVar14 + (long)(int)uVar20 * 0x10;
            pfVar3 = (float *)(lVar14 + 0x20 + (long)(iVar13 << 1) * 0x10);
            fVar22 = (float)FUN_025bb780(*(float *)(lVar19 + 0x20) - *(float *)(lVar18 + 0x20),
                                         *(float *)(lVar19 + 0x24) - *(float *)(lVar18 + 0x24),
                                         *(float *)(lVar19 + 0x28) - *(float *)(lVar18 + 0x28),
                                         *pfVar3 - *(float *)(lVar19 + 0x20),
                                         pfVar3[1] - *(float *)(lVar19 + 0x24),
                                         pfVar3[2] - *(float *)(lVar19 + 0x28),0);
            lVar14 = *(long *)(param_2 + 0x178);
            if (lVar14 == 0) goto LAB_025c04b0;
            fVar22 = fVar22 * fVar23;
          }
        }
        else {
          if (*(char *)(param_2 + 0x31c) != '\0') {
            iVar13 = 1;
            goto LAB_025c002c;
          }
          fVar22 = 0.0;
        }
        uVar16 = *(ulong *)(lVar14 + 0x18);
        uVar15 = (uint)uVar16;
        if ((uVar15 <= uVar21 - 1) || (uVar15 <= uVar21)) goto LAB_025c04ac;
        uVar20 = uVar20 + 2;
        *(float *)(lVar14 + 0x20 + (long)(int)uVar21 * 4) =
             fVar22 + *(float *)(lVar14 + 0x20 + (long)(int)(uVar21 - 1) * 4);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 <= (int)uVar9);
      uVar16 = uVar16 & 0xffffffff;
    }
    if (*(char *)(param_2 + 0x31c) == '\0') {
      uVar20 = *(uint *)(param_2 + 0x2fc);
      fVar23 = 0.0;
    }
    else {
      if ((uint)uVar16 <= uVar9) goto LAB_025c04ac;
      fVar23 = *(float *)(lVar14 + (long)(int)uVar9 * 4 + 0x20) / (float)(int)uVar9;
      uVar20 = uVar9;
    }
    if (0 < (int)uVar20) {
      uVar17 = 0;
      do {
        if (uVar16 == uVar17) goto LAB_025c04ac;
        *(float *)(lVar14 + 0x20 + uVar17 * 4) =
             *(float *)(lVar14 + 0x20 + uVar17 * 4) - fVar23 * (float)(int)uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar20 != uVar17);
    }
    fVar23 = *(float *)(param_2 + 0x168);
    if (cRam0000000004f4b79c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4b79c = '\x01';
    }
    puVar12 = PTR_DAT_049be640;
    fVar23 = (fVar23 * 3.0) / param_1;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar13 = (int)fVar23;
    if (0x1ff < iVar13) {
      iVar13 = 0x200;
    }
    iVar5 = -0x80000000;
    if ((float)(int)fVar23 != INFINITY) {
      iVar5 = iVar13;
    }
    lVar14 = FUN_021f04e4(*(undefined8 *)puVar12,iVar5 << 1 | 1);
    fVar23 = 0.0;
    iVar13 = -iVar5;
    if (iVar5 * 2 < 0 == SBORROW4(iVar5,iVar13)) {
      if (lVar14 == 0) goto LAB_025c04b0;
      uVar15 = *(uint *)(lVar14 + 0x18);
      uVar21 = 0;
      do {
        if (uVar15 <= uVar21) goto LAB_025c04ac;
        fVar22 = ((float)(int)(iVar13 + uVar21) * param_1) / *(float *)(param_2 + 0x168);
        fVar22 = (float)FUN_04608770(fVar22 * fVar22 * -0.5);
        fVar23 = fVar23 + fVar22;
        lVar19 = (long)(int)uVar21;
        uVar21 = uVar21 + 1;
        *(float *)(lVar14 + lVar19 * 4 + 0x20) = fVar22;
      } while ((int)(iVar13 + uVar21) <= iVar5);
    }
    if (0 < (int)uVar20) {
      uVar16 = 0;
      iVar4 = iVar13;
      do {
        fVar22 = 0.0;
        if (iVar5 * 2 < 0 == SBORROW4(iVar5,iVar13)) {
          uVar21 = 0;
          do {
            uVar15 = iVar4 + uVar21;
            if (*(char *)(param_2 + 0x31c) == '\0') {
              uVar6 = uVar15;
              if ((int)uVar9 <= (int)uVar15) {
                uVar6 = uVar9;
              }
              uVar11 = 0;
              if (-1 < (int)uVar15) {
                uVar11 = uVar6;
              }
            }
            else {
              iVar7 = 0;
              if (uVar20 != 0) {
                iVar7 = (int)uVar15 / (int)uVar20;
              }
              iVar7 = (uVar15 - iVar7 * uVar20) + uVar20;
              iVar8 = 0;
              if (uVar20 != 0) {
                iVar8 = iVar7 / (int)uVar20;
              }
              uVar11 = iVar7 - iVar8 * uVar20;
            }
            if (lVar14 == 0) goto LAB_025c04b0;
            if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_025c04ac;
            lVar19 = *(long *)(param_2 + 0x178);
            if (lVar19 == 0) goto LAB_025c04b0;
            if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_025c04ac;
            lVar18 = (long)(int)uVar21;
            uVar21 = uVar21 + 1;
            fVar22 = fVar22 + *(float *)(lVar14 + lVar18 * 4 + 0x20) *
                              *(float *)(lVar19 + (long)(int)uVar11 * 4 + 0x20);
          } while ((int)(iVar13 + uVar21) <= iVar5);
        }
        lVar19 = *(long *)(param_2 + 0x170);
        if ((lVar19 == 0) || (lVar18 = *(long *)(param_2 + 0x178), lVar18 == 0)) goto LAB_025c04b0;
        if ((*(uint *)(lVar18 + 0x18) <= uVar16) || (*(uint *)(lVar19 + 0x18) <= uVar16))
        goto LAB_025c04ac;
        lVar1 = uVar16 * 4;
        lVar2 = uVar16 * 0x10;
        uVar16 = uVar16 + 1;
        iVar4 = iVar4 + 1;
        *(float *)(lVar19 + lVar2 + 0x20) =
             (*(float *)(lVar18 + lVar1 + 0x20) - fVar22 / fVar23) * *(float *)(param_2 + 0x164);
      } while (uVar16 != uVar20);
    }
    if (*(char *)(param_2 + 0x31c) != '\0') {
      lVar14 = *(long *)(param_2 + 0x170);
      if (lVar14 == 0) goto LAB_025c04b0;
      if ((*(uint *)(lVar14 + 0x18) == 0) || (*(uint *)(lVar14 + 0x18) <= uVar9)) goto LAB_025c04ac;
      *(undefined4 *)
       (lVar14 + 0x20 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar9 << 4)) =
           *(undefined4 *)(lVar14 + 0x20);
    }
    if (*(long *)(param_2 + 0x180) == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
                (&uStack_80,0x200,4,1,*(undefined8 *)PTR_DAT_049c6eb0);
      *(undefined8 *)(param_2 + 0x188) = uStack_78;
      *(undefined8 *)(param_2 + 0x180) = uStack_80;
    }
    uVar16 = (ulong)*(uint *)(param_2 + 0x2fc);
    if (0 < (int)*(uint *)(param_2 + 0x2fc)) {
      uVar17 = 0;
      lVar14 = 0x20;
      do {
        lVar19 = *(long *)(param_2 + 0x170);
        if (lVar19 == 0) goto LAB_025c04b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_025c04ac;
        puVar10 = (undefined8 *)(lVar19 + lVar14);
        lVar14 = lVar14 + 0x10;
        *(undefined8 *)(*(long *)(param_2 + 0x180) + uVar17 * 8) = *puVar10;
        uVar17 = uVar17 + 1;
        uVar16 = (ulong)*(int *)(param_2 + 0x2fc);
      } while ((long)uVar17 < (long)uVar16);
    }
    puVar12 = PTR_DAT_049c6e10;
    if (*(long *)(param_2 + 0x2b8) != 0) {
      UnityEngine_ComputeBuffer__SetData_3c26f20
                (*(long *)(param_2 + 0x2b8),*(undefined8 *)(param_2 + 0x170),0,0x1c00,uVar16,0);
      lVar14 = *(long *)puVar12;
      *(undefined8 *)(param_2 + 0x198) = 0;
      lVar19 = *(long *)(param_2 + 0x2d8);
      *(undefined4 *)(param_2 + 400) = 0x45e00000;
      *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_2 + 0x16c);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar19 != 0) {
        UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                  (*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x194),
                   *(undefined4 *)(param_2 + 0x198),*(undefined4 *)(param_2 + 0x19c),lVar19,
                   *(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x48),0);
        return;
      }
    }
  }
LAB_025c04b0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

