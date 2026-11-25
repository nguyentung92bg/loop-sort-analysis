/* IL2CPP: SandFlowRenderer$$BuildDriftProfile
void SandFlowRenderer__BuildDriftProfile (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$BuildDriftProfile
   void SandFlowRenderer__BuildDriftProfile (SandFlowRenderer_o* __this, const MethodInfo* method);
    */

void SandFlowRenderer__BuildDriftProfile_24beff4(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  float *pfVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fStack_bc;
  float fStack_b8;
  double dStack_a8;
  
  if ((bRam0000000004f4bbc7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc7 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x148);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if (lVar12 == 0) goto LAB_025bf878;
  System_Array__Clear_31229cc(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
  lVar12 = *(long *)(param_1 + 0x150);
  if (lVar12 == 0) goto LAB_025bf878;
  System_Array__Clear_31229cc(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
  puVar8 = PTR_DAT_049c6e10;
  lVar12 = *(long *)(param_1 + 0x170);
  if (lVar12 == 0) goto LAB_025bf878;
  System_Array__Clear_31229cc(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
  if (cRam0000000004f49d59 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a38);
    cRam0000000004f49d59 = '\x01';
  }
  lVar12 = *(long *)puVar8;
  lVar26 = *(long *)(param_1 + 0x2d8);
  uVar15 = **(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8);
  *(undefined8 *)(param_1 + 0x198) = (*(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8))[1];
  *(undefined8 *)(param_1 + 400) = uVar15;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar26 == 0) goto LAB_025bf878;
  UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
            (*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),
             *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c),lVar26,
             *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x48),0);
  fVar31 = _UNK_013aa734;
  iVar19 = *(int *)(param_1 + 0x2fc);
  if (iVar19 < 5) {
    if (iVar19 < 2) {
      return;
    }
  }
  else if (_UNK_013aa94c < *(float *)(param_1 + 0x318)) {
    fVar42 = *(float *)(param_1 + 0x318) / (float)(iVar19 + -1);
    fVar43 = _UNK_013aa94c;
    if (_UNK_013aa94c <= fVar42) {
      fVar43 = fVar42;
    }
    if (cRam0000000004f4a004 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a004 = '\x01';
    }
    puVar8 = PTR_DAT_049b8758;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    dVar41 = (double)(fVar31 / fVar43);
    dVar33 = (double)FUN_04608690(dVar41,&dStack_a8);
    puVar9 = PTR_DAT_049bbf90;
    fVar37 = _UNK_013aa920;
    if (0.0 <= fVar31 / fVar43) {
      if (dVar33 == 0.5) {
        dVar33 = 1.0;
        goto LAB_025bf250;
      }
      dStack_a8 = (double)(long)(dVar41 + 0.5);
    }
    else if (dVar33 == -0.5) {
      dVar33 = -1.0;
LAB_025bf250:
      if (((long)dStack_a8 & 1U) != 0) {
        dStack_a8 = dStack_a8 + dVar33;
      }
    }
    else {
      dStack_a8 = (double)(long)(dVar41 + -0.5);
    }
    iVar19 = (int)dStack_a8;
    if (7 < iVar19) {
      iVar19 = 8;
    }
    if (iVar19 < 3) {
      iVar19 = 2;
    }
    uVar13 = (ulong)*(uint *)(param_1 + 0x2fc);
    iVar10 = 2;
    if (dStack_a8 != INFINITY) {
      iVar10 = iVar19;
    }
    if (0 < (int)*(uint *)(param_1 + 0x2fc)) {
      lVar26 = 0;
      uVar28 = 0;
      lVar12 = 0x24;
      uVar30 = 1;
      do {
        iVar23 = (int)uVar28;
        iVar19 = iVar23 - iVar10;
        if (*(char *)(param_1 + 0x31c) == '\0') {
          if ((-1 < iVar19) && (iVar23 = iVar10 + iVar23, iVar23 < (int)uVar13)) goto LAB_025bf328;
        }
        else {
          iVar5 = (int)uVar13 + -1;
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = iVar19 / iVar5;
          }
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = (iVar10 + iVar23) / iVar5;
          }
          iVar19 = iVar5 + (iVar19 - iVar3 * iVar5);
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = iVar19 / iVar5;
          }
          iVar19 = iVar19 - iVar3 * iVar5;
          iVar23 = (iVar10 + iVar23) - iVar4 * iVar5;
LAB_025bf328:
          lVar29 = *(long *)(param_1 + 0x2c8);
          if (lVar29 == 0) goto LAB_025bf878;
          if ((*(ulong *)(lVar29 + 0x18) & 0xffffffff) <= uVar30 - 1) goto LAB_025bf874;
          uVar24 = (uint)*(ulong *)(lVar29 + 0x18);
          if ((uVar24 <= (uint)(iVar19 << 1)) || (uVar24 <= (uint)(iVar23 << 1))) goto LAB_025bf874;
          lVar1 = lVar29 + (lVar26 >> 0x1c);
          lVar22 = lVar29 + (long)(iVar19 << 1) * 0x10;
          lVar29 = lVar29 + (long)(iVar23 << 1) * 0x10;
          fVar43 = *(float *)(lVar1 + 0x20);
          fVar47 = *(float *)(lVar1 + 0x24);
          fVar48 = *(float *)(lVar1 + 0x28);
          fVar38 = *(float *)(lVar22 + 0x20);
          fVar44 = *(float *)(lVar22 + 0x24);
          fVar39 = *(float *)(lVar22 + 0x28);
          fVar46 = *(float *)(lVar29 + 0x20);
          fVar34 = *(float *)(lVar29 + 0x24);
          fVar31 = *(float *)(lVar29 + 0x28);
          if (cRam0000000004f4a55c == '\0') {
            FUN_021f03f8(puVar8);
            cRam0000000004f4a55c = '\x01';
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fStack_b8 = fVar43 - fVar38;
          fStack_bc = fVar47 - fVar44;
          fVar35 = fVar48 - fVar39;
          fVar36 = SQRT(fVar35 * fVar35 + fStack_b8 * fStack_b8 + fStack_bc * fStack_bc);
          if (fVar36 <= fVar37) {
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(puVar9);
              cRam0000000004f4a233 = '\x01';
            }
            pfVar20 = *(float **)(*(long *)puVar9 + 0xb8);
            fStack_b8 = *pfVar20;
            fStack_bc = pfVar20[1];
            fVar35 = pfVar20[2];
          }
          else {
            fStack_b8 = fStack_b8 / fVar36;
            fStack_bc = fStack_bc / fVar36;
            fVar35 = fVar35 / fVar36;
          }
          if (cRam0000000004f4a55c == '\0') {
            FUN_021f03f8(puVar8);
            cRam0000000004f4a55c = '\x01';
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar43 = fVar46 - fVar43;
          fVar47 = fVar34 - fVar47;
          fVar48 = fVar31 - fVar48;
          fVar36 = SQRT(fVar48 * fVar48 + fVar43 * fVar43 + fVar47 * fVar47);
          if (fVar36 <= fVar37) {
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(puVar9);
              cRam0000000004f4a233 = '\x01';
            }
            pfVar20 = *(float **)(*(long *)puVar9 + 0xb8);
            fVar43 = *pfVar20;
            fVar47 = pfVar20[1];
            fVar48 = pfVar20[2];
          }
          else {
            fVar43 = fVar43 / fVar36;
            fVar47 = fVar47 / fVar36;
            fVar48 = fVar48 / fVar36;
          }
          lVar29 = *(long *)(param_1 + 0x2c8);
          if (lVar29 == 0) goto LAB_025bf878;
          if (*(uint *)(lVar29 + 0x18) <= uVar30) goto LAB_025bf874;
          lVar29 = lVar29 + (lVar26 + 0x100000000 >> 0x1c);
          fVar36 = *(float *)(lVar29 + 0x20);
          fVar45 = *(float *)(lVar29 + 0x24);
          fVar40 = *(float *)(lVar29 + 0x28);
          if (cRam0000000004f4a55c == '\0') {
            FUN_021f03f8(puVar8);
            cRam0000000004f4a55c = '\x01';
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar32 = SQRT(fVar40 * fVar40 + fVar36 * fVar36 + fVar45 * fVar45);
          if (fVar32 <= fVar37) {
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(puVar9);
              cRam0000000004f4a233 = '\x01';
            }
            pfVar20 = *(float **)(*(long *)puVar9 + 0xb8);
            fVar36 = *pfVar20;
            fVar45 = pfVar20[1];
            fVar40 = pfVar20[2];
          }
          else {
            fVar36 = fVar36 / fVar32;
            fVar45 = fVar45 / fVar32;
            fVar40 = fVar40 / fVar32;
          }
          if (cRam0000000004f4a234 == '\0') {
            FUN_021f03f8(puVar8);
            cRam0000000004f4a234 = '\x01';
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar38 = fVar38 - fVar46;
          fVar44 = fVar44 - fVar34;
          fVar39 = fVar39 - fVar31;
          fVar44 = SQRT(fVar39 * fVar39 + fVar38 * fVar38 + fVar44 * fVar44) * 0.5;
          lVar29 = *(long *)(param_1 + 0x170);
          fVar31 = _UNK_013aa698;
          if (_UNK_013aa698 <= fVar44) {
            fVar31 = fVar44;
          }
          if (lVar29 == 0) goto LAB_025bf878;
          if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_025bf874;
          lVar22 = *(long *)(param_1 + 0x148);
          fVar31 = ((fStack_b8 * fVar47 - fStack_bc * fVar43) * fVar40 +
                   (fStack_bc * fVar48 - fVar35 * fVar47) * fVar36 +
                   (fVar35 * fVar43 - fStack_b8 * fVar48) * fVar45) / fVar31;
          *(float *)(lVar29 + lVar12) = fVar31;
          fVar43 = 0.75;
          if (fVar31 <= 0.75) {
            fVar43 = fVar31;
          }
          fVar47 = -0.75;
          if (-0.75 <= fVar31) {
            fVar47 = fVar43;
          }
          if (lVar22 == 0) goto LAB_025bf878;
          if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_025bf874;
          uVar13 = (ulong)*(uint *)(param_1 + 0x2fc);
          *(float *)(lVar22 + uVar28 * 4 + 0x20) = fVar47;
        }
        uVar28 = uVar28 + 1;
        lVar12 = lVar12 + 0x10;
        lVar26 = lVar26 + 0x200000000;
        uVar30 = uVar30 + 2;
      } while ((long)uVar28 < (long)(int)uVar13);
    }
    fVar43 = *(float *)(param_1 + 0x160);
    iVar19 = 0;
    fVar31 = 0.25;
    if (0.25 <= *(float *)(param_1 + 0x15c)) {
      fVar31 = *(float *)(param_1 + 0x15c);
    }
    fVar47 = 0.0;
    fVar37 = 1.0;
    if (fVar43 <= 1.0) {
      fVar37 = fVar43;
    }
    fVar44 = 0.0;
    if (0.0 <= fVar43) {
      fVar44 = fVar37;
    }
    fVar31 = _UNK_013aa370 / fVar31;
    fVar43 = 0.0;
    if (0.0 <= fVar44) {
      fVar43 = fVar44;
    }
    iVar10 = -3;
    if (*(char *)(param_1 + 0x31c) == '\0') {
      iVar10 = -1;
    }
    fVar37 = 0.0;
    fVar43 = fVar43 * _UNK_013aa984 + 1.0;
    fVar44 = *(float *)(param_1 + 0x158);
    do {
      iVar19 = iVar19 + 1;
      while ((int)uVar13 < 1) {
        iVar19 = iVar19 + 1;
        if (iVar10 + iVar19 == 1) goto LAB_025bf81c;
      }
      lVar12 = *(long *)(param_1 + 0x148);
      if (lVar12 == 0) goto LAB_025bf878;
      uVar24 = *(uint *)(lVar12 + 0x18);
      uVar28 = 0;
      do {
        if (uVar24 == uVar28) goto LAB_025bf874;
        fVar37 = fVar37 + fVar42 * (fVar31 * fVar31 *
                                    (fVar44 * *(float *)(lVar12 + 0x20 + uVar28 * 4) - fVar47) -
                                   fVar31 * (fVar43 + fVar43) * fVar37);
        fVar47 = fVar47 + fVar42 * fVar37;
        if (iVar10 + iVar19 == 0) {
          lVar26 = *(long *)(param_1 + 0x150);
          if (lVar26 == 0) goto LAB_025bf878;
          if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_025bf874;
          *(float *)(lVar26 + uVar28 * 4 + 0x20) = fVar47;
        }
        uVar28 = uVar28 + 1;
      } while (uVar13 != uVar28);
    } while (iVar10 + iVar19 != 0);
    if (0 < (int)uVar13) {
      uVar30 = 0;
      lVar12 = 0x100000000;
      uVar28 = 0xffffffffffffffff;
      do {
        lVar26 = *(long *)(param_1 + 0x2c8);
        if (lVar26 == 0) goto LAB_025bf878;
        uVar28 = uVar28 + 2;
        if (*(uint *)(lVar26 + 0x18) <= uVar28) {
LAB_025bf874:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar29 = *(long *)(param_1 + 0x150);
        if (lVar29 == 0) goto LAB_025bf878;
        if (*(uint *)(lVar29 + 0x18) <= uVar30) goto LAB_025bf874;
        lVar22 = uVar30 * 4;
        lVar1 = lVar12 >> 0x1c;
        uVar30 = uVar30 + 1;
        lVar12 = lVar12 + 0x200000000;
        *(undefined4 *)(lVar26 + lVar1 + 0x2c) = *(undefined4 *)(lVar29 + lVar22 + 0x20);
        uVar13 = (ulong)*(int *)(param_1 + 0x2fc);
      } while ((long)uVar30 < (long)uVar13);
    }
LAB_025bf81c:
    if (*(long *)(param_1 + 0x2b8) != 0) {
      UnityEngine_ComputeBuffer__SetData_3c26f20
                (*(long *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2c8),0,0,(int)uVar13 << 1,0)
      ;
      if ((bRam0000000004f4bbc8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c6eb0);
        FUN_021f03f8(PTR_DAT_049c6eb8);
        FUN_021f03f8(PTR_DAT_049c6e10);
        FUN_021f03f8(PTR_DAT_049be640);
        bRam0000000004f4bbc8 = 1;
      }
      lVar12 = *(long *)(param_1 + 0x178);
      if (lVar12 != 0) {
        uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
        if (uVar13 == 0) {
LAB_025c04ac:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        iVar19 = *(int *)(param_1 + 0x2fc);
        *(undefined4 *)(lVar12 + 0x20) = 0;
        fVar31 = _UNK_013aa948;
        uVar24 = iVar19 - 1;
        if (0 < (int)uVar24) {
          uVar25 = 0;
          uVar27 = 1;
          do {
            if ((int)uVar27 < (int)uVar24) {
              fVar43 = 0.0;
              if (-2 < (int)uVar27) {
                iVar19 = uVar27 + 1;
LAB_025c002c:
                lVar12 = *(long *)(param_1 + 0x2c8);
                if (lVar12 == 0) goto LAB_025c04b0;
                uVar21 = *(uint *)(lVar12 + 0x18);
                if ((((uVar21 <= uVar25 + 2) || (uVar21 <= uVar25)) ||
                    (uVar21 <= (uint)(iVar19 << 1))) || (uVar21 <= uVar25 + 3)) goto LAB_025c04ac;
                lVar26 = lVar12 + (long)(int)(uVar25 + 2) * 0x10;
                lVar29 = lVar12 + (long)(int)uVar25 * 0x10;
                pfVar20 = (float *)(lVar12 + 0x20 + (long)(iVar19 << 1) * 0x10);
                fVar43 = (float)FUN_025bb780(*(float *)(lVar26 + 0x20) - *(float *)(lVar29 + 0x20),
                                             *(float *)(lVar26 + 0x24) - *(float *)(lVar29 + 0x24),
                                             *(float *)(lVar26 + 0x28) - *(float *)(lVar29 + 0x28),
                                             *pfVar20 - *(float *)(lVar26 + 0x20),
                                             pfVar20[1] - *(float *)(lVar26 + 0x24),
                                             pfVar20[2] - *(float *)(lVar26 + 0x28),0);
                lVar12 = *(long *)(param_1 + 0x178);
                if (lVar12 == 0) goto LAB_025c04b0;
                fVar43 = fVar43 * fVar31;
              }
            }
            else {
              if (*(char *)(param_1 + 0x31c) != '\0') {
                iVar19 = 1;
                goto LAB_025c002c;
              }
              fVar43 = 0.0;
            }
            uVar13 = *(ulong *)(lVar12 + 0x18);
            uVar21 = (uint)uVar13;
            if ((uVar21 <= uVar27 - 1) || (uVar21 <= uVar27)) goto LAB_025c04ac;
            uVar25 = uVar25 + 2;
            *(float *)(lVar12 + 0x20 + (long)(int)uVar27 * 4) =
                 fVar43 + *(float *)(lVar12 + 0x20 + (long)(int)(uVar27 - 1) * 4);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 <= (int)uVar24);
          uVar13 = uVar13 & 0xffffffff;
        }
        if (*(char *)(param_1 + 0x31c) == '\0') {
          uVar25 = *(uint *)(param_1 + 0x2fc);
          fVar31 = 0.0;
        }
        else {
          if ((uint)uVar13 <= uVar24) goto LAB_025c04ac;
          fVar31 = *(float *)(lVar12 + (long)(int)uVar24 * 4 + 0x20) / (float)(int)uVar24;
          uVar25 = uVar24;
        }
        if (0 < (int)uVar25) {
          uVar28 = 0;
          do {
            if (uVar13 == uVar28) goto LAB_025c04ac;
            *(float *)(lVar12 + 0x20 + uVar28 * 4) =
                 *(float *)(lVar12 + 0x20 + uVar28 * 4) - fVar31 * (float)(int)uVar28;
            uVar28 = uVar28 + 1;
          } while (uVar25 != uVar28);
        }
        fVar31 = *(float *)(param_1 + 0x168);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        puVar8 = PTR_DAT_049be640;
        fVar31 = (fVar31 * 3.0) / fVar42;
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar19 = (int)fVar31;
        if (0x1ff < iVar19) {
          iVar19 = 0x200;
        }
        iVar10 = -0x80000000;
        if ((float)(int)fVar31 != INFINITY) {
          iVar10 = iVar19;
        }
        lVar12 = FUN_021f04e4(*(undefined8 *)puVar8,iVar10 << 1 | 1);
        fVar31 = 0.0;
        iVar19 = -iVar10;
        if (iVar10 * 2 < 0 == SBORROW4(iVar10,iVar19)) {
          if (lVar12 == 0) goto LAB_025c04b0;
          uVar21 = *(uint *)(lVar12 + 0x18);
          uVar27 = 0;
          do {
            if (uVar21 <= uVar27) goto LAB_025c04ac;
            fVar43 = ((float)(int)(iVar19 + uVar27) * fVar42) / *(float *)(param_1 + 0x168);
            fVar43 = (float)FUN_04608770(fVar43 * fVar43 * -0.5);
            fVar31 = fVar31 + fVar43;
            lVar26 = (long)(int)uVar27;
            uVar27 = uVar27 + 1;
            *(float *)(lVar12 + lVar26 * 4 + 0x20) = fVar43;
          } while ((int)(iVar19 + uVar27) <= iVar10);
        }
        if (0 < (int)uVar25) {
          uVar13 = 0;
          iVar23 = iVar19;
          do {
            fVar43 = 0.0;
            if (iVar10 * 2 < 0 == SBORROW4(iVar10,iVar19)) {
              uVar27 = 0;
              do {
                uVar21 = iVar23 + uVar27;
                if (*(char *)(param_1 + 0x31c) == '\0') {
                  uVar2 = uVar21;
                  if ((int)uVar24 <= (int)uVar21) {
                    uVar2 = uVar24;
                  }
                  uVar7 = 0;
                  if (-1 < (int)uVar21) {
                    uVar7 = uVar2;
                  }
                }
                else {
                  iVar3 = 0;
                  if (uVar25 != 0) {
                    iVar3 = (int)uVar21 / (int)uVar25;
                  }
                  iVar3 = (uVar21 - iVar3 * uVar25) + uVar25;
                  iVar5 = 0;
                  if (uVar25 != 0) {
                    iVar5 = iVar3 / (int)uVar25;
                  }
                  uVar7 = iVar3 - iVar5 * uVar25;
                }
                if (lVar12 == 0) goto LAB_025c04b0;
                if (*(uint *)(lVar12 + 0x18) <= uVar27) goto LAB_025c04ac;
                lVar26 = *(long *)(param_1 + 0x178);
                if (lVar26 == 0) goto LAB_025c04b0;
                if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_025c04ac;
                lVar29 = (long)(int)uVar27;
                uVar27 = uVar27 + 1;
                fVar43 = fVar43 + *(float *)(lVar12 + lVar29 * 4 + 0x20) *
                                  *(float *)(lVar26 + (long)(int)uVar7 * 4 + 0x20);
              } while ((int)(iVar19 + uVar27) <= iVar10);
            }
            lVar26 = *(long *)(param_1 + 0x170);
            if ((lVar26 == 0) || (lVar29 = *(long *)(param_1 + 0x178), lVar29 == 0))
            goto LAB_025c04b0;
            if ((*(uint *)(lVar29 + 0x18) <= uVar13) || (*(uint *)(lVar26 + 0x18) <= uVar13))
            goto LAB_025c04ac;
            lVar22 = uVar13 * 4;
            lVar1 = uVar13 * 0x10;
            uVar13 = uVar13 + 1;
            iVar23 = iVar23 + 1;
            *(float *)(lVar26 + lVar1 + 0x20) =
                 (*(float *)(lVar29 + lVar22 + 0x20) - fVar43 / fVar31) *
                 *(float *)(param_1 + 0x164);
          } while (uVar13 != uVar25);
        }
        if (*(char *)(param_1 + 0x31c) != '\0') {
          lVar12 = *(long *)(param_1 + 0x170);
          if (lVar12 == 0) goto LAB_025c04b0;
          if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) <= uVar24))
          goto LAB_025c04ac;
          *(undefined4 *)
           (lVar12 + 0x20 + (-(ulong)(uVar24 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar24 << 4)) =
               *(undefined4 *)(lVar12 + 0x20);
        }
        if (*(long *)(param_1 + 0x180) == 0) {
          Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
                    (&stack0xffffffffffffff80,0x200,4,1,*(undefined8 *)PTR_DAT_049c6eb0);
          *(undefined8 *)(param_1 + 0x188) = 0;
          *(undefined8 *)(param_1 + 0x180) = 0;
        }
        uVar13 = (ulong)*(uint *)(param_1 + 0x2fc);
        if (0 < (int)*(uint *)(param_1 + 0x2fc)) {
          uVar28 = 0;
          lVar12 = 0x20;
          do {
            lVar26 = *(long *)(param_1 + 0x170);
            if (lVar26 == 0) goto LAB_025c04b0;
            if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_025c04ac;
            puVar6 = (undefined8 *)(lVar26 + lVar12);
            lVar12 = lVar12 + 0x10;
            *(undefined8 *)(*(long *)(param_1 + 0x180) + uVar28 * 8) = *puVar6;
            uVar28 = uVar28 + 1;
            uVar13 = (ulong)*(int *)(param_1 + 0x2fc);
          } while ((long)uVar28 < (long)uVar13);
        }
        puVar8 = PTR_DAT_049c6e10;
        if (*(long *)(param_1 + 0x2b8) != 0) {
          UnityEngine_ComputeBuffer__SetData_3c26f20
                    (*(long *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x170),0,0x1c00,uVar13,0);
          lVar12 = *(long *)puVar8;
          *(undefined8 *)(param_1 + 0x198) = 0;
          lVar26 = *(long *)(param_1 + 0x2d8);
          *(undefined4 *)(param_1 + 400) = 0x45e00000;
          *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x16c);
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar26 != 0) {
            UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                      (*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),
                       *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c),lVar26,
                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x48),0);
            return;
          }
        }
      }
LAB_025c04b0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    goto LAB_025bf878;
  }
  lVar12 = *(long *)(param_1 + 0x2b8);
  if (lVar12 != 0) {
    lVar26 = *(long *)(param_1 + 0x2c8);
    iVar19 = iVar19 * 2;
    if ((bRam0000000004f585f8 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049bd8a8);
      bRam0000000004f585f8 = 1;
    }
    if (lVar26 == 0) {
      thunk_FUN_02256840(PTR_DAT_049baa58);
      uVar15 = thunk_FUN_0222ca34();
      uVar16 = thunk_FUN_02256840(PTR_DAT_049d98c8);
      System_ArgumentNullException___ctor_30655c4(uVar15,uVar16,0);
      uVar16 = thunk_FUN_02256840(PTR_DAT_04a26b78);
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar15,uVar16);
    }
    uVar13 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__IsArrayBlittable_3bc21dc(lVar26,0);
    if ((uVar13 & 1) == 0) {
      uVar15 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__GetReasonForArrayNonBlittable_3bc220c
                         (lVar26,0);
      uVar16 = thunk_FUN_02256840(PTR_DAT_04a26b80);
      uVar16 = System_String__Format_2f73700(uVar16,uVar15,0);
      thunk_FUN_02256840(PTR_DAT_049b9870);
      uVar15 = thunk_FUN_0222ca34();
      System_ArgumentException___ctor_306c238(uVar15,uVar16,0);
    }
    else {
      if ((-1 < iVar19) && (iVar10 = System_Array__get_Length_3118750(lVar26,0), iVar19 <= iVar10))
      {
        plVar14 = (long *)System_Object__GetType_3142aac(lVar26,0);
        puVar8 = PTR_DAT_049bd8a8;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar15 = (**(code **)(*plVar14 + 0x438))(plVar14,*(undefined8 *)(*plVar14 + 0x440));
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar8);
        }
        uVar11 = System_Runtime_InteropServices_Marshal__SizeOf_301e090(uVar15,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,lVar26,0,0,iVar19,uVar11);
        }
        lVar29 = *(long *)(lVar12 + 0x10);
        if (lVar29 != 0) {
          if (pcRam0000000004f58618 == (code *)0x0) {
            pcRam0000000004f58618 = (code *)FUN_021f03bc(&UNK_013c5836);
          }
                    /* WARNING: Could not recover jumptable at 0x03d271d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f58618)(lVar29,lVar26,0,0,iVar19,uVar11);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar12,0);
      }
      puVar8 = PTR_DAT_049b3bd0;
      uVar15 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&stack0xffffffffffffffcc)
      ;
      uVar16 = thunk_FUN_0222c66c(*(undefined8 *)(puVar8 + 0x48),&stack0xffffffffffffffc8);
      uVar17 = thunk_FUN_0222c66c(*(undefined8 *)(puVar8 + 0x48),&stack0xffffffffffffffbc);
      uVar18 = thunk_FUN_02256840(PTR_DAT_04a26b70);
      uVar16 = System_String__Format_2f7dff0(uVar18,uVar15,uVar16,uVar17,0);
      thunk_FUN_02256840(PTR_DAT_049b5000);
      uVar15 = thunk_FUN_0222ca34();
      System_ArgumentOutOfRangeException___ctor_306d7e4(uVar15,uVar16,0);
    }
    uVar16 = thunk_FUN_02256840(PTR_DAT_04a26b78);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar15,uVar16);
  }
LAB_025bf878:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

